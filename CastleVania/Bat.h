
#ifndef _BAT_H_
#define _BAT_H_

#include <d3dx9.h>
#include "GSprite.h"
#include "Object.h"

#define BAT_IMAGE_FILE "Resources/enemy/0.png"
#define BAT_TREND 0
#define BAT_FRAME 100
#define BAT_STOP_IMAGE 0
#define BAT_X 50
#define BAT_Y 0

#define BAT_VX 4.0f

#define BAT_GRAVITY 20
#define BAT_FALL 180
#define BAT_VX_DAMAGED 150
#define BAT_VY_DAMAGED 450

class Bat : public Object
{
public:
	Bat();
	Bat(float x, float y);
	~Bat();

	virtual void Update(int t);
	virtual void DrawObject();

	void MoveLeft();
	void MoveRigh();
	void Stop();
};
#endif
