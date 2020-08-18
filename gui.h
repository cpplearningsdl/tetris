#pragma once
#include <limits>   
#ifndef NOMINMAX
#define NOMINMAX
#endif

#include "constants.h"
#include "cursor.h"
#include <Windows.h>
#include <iostream>


class gui
{

	public:
  
		static void drawgui(); 
		static void cls();
		static void drawscore(double score );
		static void drawlevel(int level);
		static int drawmenu();
		static void lvlselect();
	private: 
		static void drawborder();
		static void drawsquare(int x, int y, int w, int h); 
};

