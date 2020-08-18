#include "cursor.h"

void cursor::gotoxy(int column, int line)
{
	COORD coord;
	coord.X = column + XBUFF;
	coord.Y = line + YBUFF;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void cursor::gotoxy(pos position)
{
	COORD coord;
	coord.X = position.x + XBUFF;
	coord.Y = position.y + YBUFF;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 

void cursor::setcursorcolor(int c)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}
