#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <d3dx9.h>
#include "GSprite.h"

class Object
{
protected:
	float x;	// Vị trí theo trục X
	float y;	// Vị trí theo trục Y

	float Vx;	// Vận tốc theo trục X
	float Vy;	// Vận tốc theo trục Y

	int IsMoving;	// Đang di chuyển = 1; Đứng yên = 0;
	int Trend;		// Phương hướng, trái = 0, phải = 1;

	float Speed; // Tốc độ
	GSprite *ObjectSprite;

public:
	Object();
	~Object();							// Hàm hủy Object

	int GetX();							
	int GetY();
	float GetSpeed();
	float GetVx();
	float GetVy();
	float GetVX();
	float GetVY();
	int GetMoving();
	void SetMoving(int a);
	int GetTrend();
	void SetTrend(int a);

	virtual void Update(int t);
	virtual void DrawObject();

	
};

#endif
