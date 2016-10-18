#include "Matrix.h"

Matrix::Matrix()
{
}


Matrix::~Matrix()
{
}

void Matrix::LoadMatrix()
{
	int i, j;
	FILE *file;
	file = fopen(MATRIXTXT, "r");
	
	for (i = 0; i < ROW; i++) 
	{
		for (j = 0; j < COLMN; j++) 
		{
			fscanf(file, "%d", &TileMap[i][j]);
		}
	}
	fclose(file);
}

void Matrix::LoadMap()
{
	LoadMatrix();
	TileTexture = new GTexture(TILEMAP, COLMN, 1, 48);
	Tile = new GSprite(TileTexture, 0);
}

void Matrix::DrawMap()
{
	int x = TileTexture->FrameHeight / 2;
	int y = TileTexture->FrameHeight / 2;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLMN; j++)
		{
			Tile->SelectIndex(TileMap[i][j]);
			Tile->Draw(x, y);
			x += TileTexture->FrameHeight;
		}
		x = TileTexture->FrameHeight / 2;
		y += TileTexture->FrameHeight;
	}
}