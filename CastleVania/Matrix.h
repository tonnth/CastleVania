#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <stdio.h>
#include <conio.h>
#include "GSprite.h"
#include "GTexture.h"

#define MATRIXTXT "Resources/Matrix.txt"
#define TILEMAP "Resources/1.png"
#define COLMN 48
#define ROW 10

class Matrix
{
private:
	GTexture *TileTexture;
	GSprite *Tile;
	int TileMap[50][50];
public:
	Matrix();
	~Matrix();
	void LoadMatrix();
	void LoadMap();
	void DrawMap();
};

#endif
