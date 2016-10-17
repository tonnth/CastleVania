#include "Object.h"

Object::Object()
{
}

Object::~Object()
{
	delete ObjectSprite;
}

int Object::GetX()
{
	return x;
}

int Object::GetY()
{
	return y;
}

void Object::Update(int t)
{
}

void Object::DrawObject()
{
}

float Object::GetSpeed()
{
	return Speed;
}

float Object::GetVX()
{
	return Vx;
}

float Object::GetVY()
{
	return Vy;
}

int Object::GetMoving()
{
	return IsMoving;
}

void Object::SetMoving(int a)
{
	IsMoving = a;
}

int Object::GetTrend()
{
	return Trend;
}

void Object::SetTrend(int a)
{
	Trend = a;
}
