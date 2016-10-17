#ifndef _SIMON_H_
#define _SIMON_H_

#include <d3dx9.h>

//#include "game.h"
#include "GSprite.h"

class Simon
{
private:
	float x;
	float y;

	float vX;
	float vY;

	int moving;
	int Huong; //trai = 0 , phai = 1

public:
	Simon();
	Simon(int x, int y);
	Simon(int x, int y, int huong);
	~Simon();
	GSprite *SimonSprite;
	int GetX();
	int GetY();
	int GetSpeed();
	void ChangeVX(int s);
	void ChangeVY(int s);
	void Update(int t);
	float GetVX();
	float GetVY();
	int GetMoving();
	void SetMoving(int a);
	int GetHuong();
	void SetHuong(int a);
};
#endif
