#include "SceneMain.h"

SceneMain::SceneMain(int _nCmdShow) : CGame(_nCmdShow)
{

}

void SceneMain::RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t)
{
	d3ddv->ColorFill(G_BackBuffer, NULL, D3DCOLOR_XRGB(0, 0, 0));


	simon->Update(t);
	/*if (simon->GetX() >= 500)
	{
		bat->MoveLeft();
		ironman->MoveLeft();
	}*/
	medusa->Update(t);
	bat->Update(t);
	ironman->Update(t);

	G_SpriteHandler->Begin(D3DXSPRITE_ALPHABLEND);

	Map->DrawMap();

	simon->DrawObject();
	medusa->DrawObject();
	bat->DrawObject();
	ironman->DrawObject();

	G_SpriteHandler->End();
}

void SceneMain::ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta)
{
	if (IsKeyDown(DIK_LEFT))
	{
		simon->MoveLeft();
		
	}
	else
		if (IsKeyDown(DIK_RIGHT))
		{
			simon->MoveRigh();
			bat->MoveLeft();
			ironman->MoveLeft();
		}
		else
		{
			simon->Stop();
		}
}

void SceneMain::LoadResources(LPDIRECT3DDEVICE9 d3ddv)
{
	Map = new Matrix();
	Map->LoadMap();
	simon = new Simon();

	medusa = new Medusa();
	bat = new Bat();
	ironman = new IronMan();

}

void SceneMain::OnKeyDown(int KeyCode)
{

}

SceneMain::~SceneMain(void)
{
}
