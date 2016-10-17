#include "Simon.h"
#define SIMON_IMAGE_FILE "Resources/5.png"
#define SPEED 1.0f
#define FRAME 100

Simon::Simon()
{
	x = G_ScreenWidth / 2;
	y = G_ScreenHeight / 2;

	vY = 0.0f;
	vX = SPEED;
	
	SimonSprite = new GSprite(new GTexture(SIMON_IMAGE_FILE, 4, 1, 4), FRAME);
	moving = 0;
	Huong = 0;
}

Simon::Simon(int x,int y)
{
	this -> x = x;
	this -> y = y;

	vY = 0.0f;
	vX = SPEED;

	SimonSprite = new GSprite(new GTexture(SIMON_IMAGE_FILE, 4, 1, 4),FRAME);
	moving = 0;
	Huong = 0;
}

Simon::Simon(int x, int y, int huong)
{
	this->x = x;
	this->y = y;

	vY = 0.0f;
	vX = SPEED;

	SimonSprite = new GSprite(new GTexture(SIMON_IMAGE_FILE, 4, 1, 4), FRAME);
	moving = 0;
	this->Huong = huong;
}

Simon::~Simon()
{
	delete SimonSprite;
}

int Simon::GetX()
{
	return x;
}

int Simon::GetY()
{
	return y;
}

void Simon::ChangeVX(int s)
{
	vX = s;
}

void Simon::ChangeVY(int s)
{
	vY = s;
}

void Simon::Update(int t)
{
	x += vX;
	y += vY;
	/*if (y + height > G_ScreenHeight)
		y = G_ScreenHeight - height;
	else if (y < 0)
		y = 0;
*/
}

int Simon::GetSpeed()
{
	return SPEED;
}

float Simon::GetVX()
{
	return vX;
}

float Simon::GetVY()
{
	return vY;
}

int Simon::GetMoving()
{
	return moving;
}

void Simon::SetMoving(int a)
{
	moving = a;
}

int Simon::GetHuong()
{
	return Huong;
}

void Simon::SetHuong(int a)
{
	Huong = a;
}
