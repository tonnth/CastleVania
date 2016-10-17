#include "SceneMain.h"

SceneMain::SceneMain(int _nCmdShow): CGame(_nCmdShow)
{

}

void SceneMain::RenderFrame(LPDIRECT3DDEVICE9 d3ddv, int t)
{
	d3ddv->ColorFill(G_BackBuffer, NULL, D3DCOLOR_XRGB(0, 0, 0));

	simon->Update(t);
	if (simon->GetMoving() != 0) simon->SimonSprite->Update(t);
	else simon->SimonSprite->SelectIndex(3);

	G_SpriteHandler->Begin(D3DXSPRITE_ALPHABLEND);
	if (simon->GetHuong() == 0) simon->SimonSprite->Draw(simon->GetX(), simon->GetY());
	else simon->SimonSprite->DrawFlipX(simon->GetX(), simon->GetY()); 
	G_SpriteHandler->End();
}

void SceneMain::ProcessInput(LPDIRECT3DDEVICE9 d3ddv, int Delta)
{
	if (IsKeyDown(DIK_LEFT))
	{
		simon->ChangeVX(-simon->GetSpeed());
		simon->SetMoving(1);
		simon->SetHuong(0);
	}
	else
	if (IsKeyDown(DIK_RIGHT))
	{
		simon->ChangeVX(simon->GetSpeed());
		simon->SetMoving(1);
		simon->SetHuong(1);
	}
	else
	{
		simon->ChangeVX(0);
		simon->SetMoving(0);
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
