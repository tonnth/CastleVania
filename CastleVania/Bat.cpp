#include "Bat.h"

Bat::Bat()
{
	//D3DXVECTOR2 PosTrans = Trans->Transform(Medusa_X, Medusa_Y);
	this->x = 800;//PosTrans.x;
	this->y = 200;//PosTrans.y;
	
	Vx = 0;
	Vy = 0;
	Speed = BAT_VX;
	ObjectSprite = new GSprite(new GTexture(BAT_IMAGE_FILE, 4, 1, 4), BAT_FRAME);
	IsMoving = 0;
	Trend = BAT_TREND;
}

void Bat::Update(int t)
{
	x += Vx;
	y = sin(x*0.03)*41.3 + 200;
	
	if (x <= 0) 
		this->MoveRigh();

	if (x >= 1025) 
		this->MoveLeft();

	if (IsMoving != 0)
	{
		if (ObjectSprite->_index == 0)
			ObjectSprite->_index++;
		ObjectSprite->Update(t);
	}
	else ObjectSprite->SelectIndex(BAT_STOP_IMAGE);

}

void Bat::DrawObject()
{
	if (Trend == 0) ObjectSprite->Draw(x, y);
	else ObjectSprite->DrawFlipX(x, y);
}

void Bat::MoveLeft()
{
	Vx = -Speed;
	IsMoving = 1;
	Trend = 0;
}
void Bat::MoveRigh()
{
	Vx = Speed;
	IsMoving = 1;
	Trend = 1;
}
void Bat::Stop()
{
	Vx = 0;
	IsMoving = 0;
}

