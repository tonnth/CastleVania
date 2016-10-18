
#ifndef _MEDUSA_H_
#define _MEDUSA_H_

#include <d3dx9.h>
#include "GSprite.h"
#include "Object.h"

#define MEDUSA_IMAGE_FILE "Resources/enemy/6.png"
#define MEDUSA_TREND 0
#define MEDUSA_FRAME 100
#define MEDUSA_STOP_IMAGE 1
#define MEDUSA_X 50
#define MEDUSA_Y 0

#define MEDUSA_VX 3.0f

#define MEDUSA_GRAVITY 20
#define MEDUSA_FALL 180
#define MEDUSA_VX_DAMAGED 150
#define MEDUSA_VY_DAMAGED 450

class Medusa : public Object
{
public:
	Medusa();
	Medusa(float x, float y);
	~Medusa();

	virtual void Update(int t);
	virtual void DrawObject();

	void MoveLeft();
	void MoveRigh();
	void Stop();
};
#endif
