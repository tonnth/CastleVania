#include "SceneMain.h"

SceneMain::SceneMain(int _nCmdShow): CGame(_nCmdShow)
{

}

void SceneMain::RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t)
{
	d3ddv->ColorFill(G_BackBuffer, NULL, D3DCOLOR_XRGB(0, 0, 0));

	simon->Update(t);

	G_SpriteHandler->Begin(D3DXSPRITE_ALPHABLEND);

	simon->DrawObject();

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
	}
	else
	{
		simon->Stop();
	}
}

void SceneMain::LoadResources(LPDIRECT3DDEVICE9 d3ddv)
{
	simon = new Simon(200, 200);
}

void SceneMain::OnKeyDown(int KeyCode)
{

}

SceneMain::~SceneMain(void)
{
}
