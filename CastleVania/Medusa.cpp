#include "Medusa.h"

Medusa::Medusa()
{
	//D3DXVECTOR2 PosTrans = Trans->Transform(Medusa_X, Medusa_Y);
	this->x =1000;//PosTrans.x;
	this->y = 254;//PosTrans.y;
	Speed = MEDUSA_VX;
	Vx = -Speed;
	Vy = 0;

	ObjectSprite = new GSprite(new GTexture(MEDUSA_IMAGE_FILE, 2, 1, 2), MEDUSA_FRAME);
	IsMoving = 1;
	Trend = MEDUSA_TREND;
}

void Medusa::Update(int t)
{
	x += Vx;
	y = sin(x*0.03)*95.5+190;

	if (x <= 0) this->MoveRigh();
	if (x >= 1025) this->MoveLeft();

	if (IsMoving != 0) ObjectSprite->Update(t);
	else ObjectSprite->SelectIndex(MEDUSA_STOP_IMAGE);

}

void Medusa::DrawObject()
{
	if (Trend == 0) ObjectSprite->Draw(x, y);
	else ObjectSprite->DrawFlipX(x, y);
}

void Medusa::MoveLeft()
{
	Vx = -Speed;
	IsMoving = 1;
	Trend = 0;
}
void Medusa::MoveRigh()
{
	Vx = Speed;
	IsMoving = 1;
	Trend = 1;
}
void Medusa::Stop()
{
	Vx = 0;
	IsMoving = 0;
}

