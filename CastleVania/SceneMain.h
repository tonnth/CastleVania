#ifndef _SCENEMAIN_H_
#define _SCENEMAIN_H_

#include "Game.h"
#include "GSprite.h"
#include "Object.h"
#include "Simon.h"
#include "Matrix.h"

class SceneMain: public CGame
{
public: 	
	Simon *simon;
	Matrix *Map;
	SceneMain(int _nCmdShow);
	~SceneMain();	
	
protected:	
	virtual void RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t);
	virtual void ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta);
	virtual void LoadResources(LPDIRECT3DDEVICE9 d3ddv);

	virtual void OnKeyDown(int KeyCode);
};

#endif