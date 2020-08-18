#pragma once
#include "constants.h"
#include <Windows.h>


class cursor
{
public:
	struct pos
	{
		int x, y;
	};
	static void gotoxy(int column, int line);
	static void gotoxy(pos position);
	static void setcursorcolor(int c); 
};

