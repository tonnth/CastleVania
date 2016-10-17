#include "Simon.h"

Simon::Simon(float x, float y)
{
	this->x = x;
	this->y = y;

	Vx = 0;
	Vy = 0;
	
	ObjectSprite = new GSprite(new GTexture(SIMON_IMAGE_FILE, 4, 1, 4), SIMON_FRAME);
	
	Speed = SIMON_VX;
	IsMoving = 0;
	Trend = SIMON_TREND;
}

void Simon::Update(int t)
{
	x += Vx;
	y += Vy;

	if (IsMoving != 0) ObjectSprite->Update(t);
	else ObjectSprite->SelectIndex(SIMON_STOP_IMAGE);

	/*if (y + height > G_ScreenHeight)
		y = G_ScreenHeight - height;
	else if (y < 0)
		y = 0;
*/
}

void Simon::DrawObject()
{
	if (Trend == 0) ObjectSprite->Draw(x, y);
	else ObjectSprite->DrawFlipX(x, y);
}

void Simon::MoveLeft()
{
	Vx = -Speed;
	IsMoving = 1;
	Trend = 0;
}
void Simon::MoveRigh()
{
	Vx = Speed;
	IsMoving = 1;
	Trend = 1;
}
void Simon::Stop()
{
	Vx = 0;
	IsMoving = 0;
}

