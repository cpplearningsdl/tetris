#include "gui.h"

void gui::drawgui()
{
	drawborder();
 
}

void gui::drawsquare(int x, int y, int w, int h)
{
	cursor::setcursorcolor(29); 
	//top
	cursor::gotoxy(x, y);
	for (int i = 1; i < w+1; i++)
	{
		std::cout << " ";
	}
	//bottom
	cursor::gotoxy(x, h-1);
	for (int i = 1; i < w+2; i++)
	{
		std::cout << " ";
	}
	//left 
	for (int i = y; i < y + h; i++)
	{
		cursor::gotoxy(x, i);
		std::cout << " ";
	}

	//right 
	for (int i = y; i < y + h; i++)
	{
		cursor::gotoxy(x + w, i);
		std::cout << " ";
	}
}
 
void gui::drawborder()
{
	cursor::setcursorcolor(9); 
	drawsquare(-1, -1, MAXWIDTH+1, MAXHEIGHT + 1);
	drawsquare(MAXWIDTH, -1, 16, MAXHEIGHT + 1);
	drawsquare(MAXWIDTH, -1, 16, MAXHEIGHT + 1);
}

void gui::cls()
{
	for (int y = 0; y < 40; y++)
	{
		for (int x = 0; x < 60; x++)
		{
			cursor::setcursorcolor(0);
			cursor::gotoxy(x, y);
			std::cout << " ";
		}
	}
}
void gui::drawscore(double score)
{
	cursor::setcursorcolor(9);
	cursor::gotoxy(MAXWIDTH + 2, 12);
	std::cout << "SCORE";
	cursor::gotoxy(MAXWIDTH + 4, 13);
	std::cout << score; 
}

void gui::drawlevel(int level)
{
	cursor::gotoxy(MAXWIDTH + 2, 15);
	std::cout << "LEVEL";
	cursor::gotoxy(MAXWIDTH + 4, 16);
	std::cout << level;
}

int gui::drawmenu()
{ 
	int level = -1;
	bool valid = false;

	while (!valid)
	{  
		cls();
		lvlselect();
		std::cout << std::flush;
		std::cin.clear();
		std::cin >> level;

		if(std::cin.good() && level > -1 && level < 7)
		{
			valid = true;
		}
		else
		{
			std::cout << std::flush;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	return level;
}

void gui::lvlselect()
{ 
	drawsquare(0, 0, 25, 20);
	cursor::gotoxy(6, 5);
	std::cout << "Select Level";
	cursor::gotoxy(6, 8);
	std::cout << "0 1 2 3 4 5 6";
	cursor::gotoxy(8, 11);
	 
}
 
