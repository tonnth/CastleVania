#include "IronMan.h"

IronMan::IronMan()
{
	//D3DXVECTOR2 PosTrans = Trans->Transform(Medusa_X, Medusa_Y);
	this->x = 500;//PosTrans.x;
	this->y = 254;//PosTrans.y;

	Vx = 0;
	Vy = 0;
	Speed = IRONMAN_VX;
	ObjectSprite = new GSprite(new GTexture(IRONMAN_IMAGE_FILE, 4, 1, 4), IRONMAN_FRAME);
	IsMoving = 0;
	Trend = IRONMAN_TREND;
}

void IronMan::Update(int t)
{
	x += Vx;
	y += Vy;


	if (IsMoving != 0)
	{
		if (x <= 0)
			this->MoveRigh();

		if (x >= 1025)
			this->MoveLeft();

		ObjectSprite->Update(t);
	}
	else ObjectSprite->SelectIndex(IRONMAN_STOP_IMAGE);

}

void IronMan::DrawObject()
{
	if (Trend == 0) ObjectSprite->Draw(x, y);
	else ObjectSprite->DrawFlipX(x, y);
}

void IronMan::MoveLeft()
{
	Vx = -Speed;
	IsMoving = 1;
	Trend = 0;
}
void IronMan::MoveRigh()
{
	Vx = Speed;
	IsMoving = 1;
	Trend = 1;
}
void IronMan::Stop()
{
	Vx = 0;
	IsMoving = 0;
}

