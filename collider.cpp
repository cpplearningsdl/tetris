#include "collider.h"


bool collider::collidetest(cursor::pos pos, std::array<std::array<bool, 4>, 4 > &shape, std::array<std::array<int, MAXWIDTH >, MAXHEIGHT> &themap) 
{
	bool collide = false;

	while (!collide)
	{
		for (int y = 0; y < 4;  y++)
		{
			for (int x = 0; x < 4; x++)
			{   
				if (shape[y][x] == 1)
				{
					if (pos.y + y >= MAXHEIGHT)
					{
						return true;//collided 
					}
					else if (pos.x + x < 0)
					{
						return true;//collided
					}
					else if (pos.x + x >= MAXWIDTH)
					{
						return true;//collided
					}
					else if (themap[pos.y + y][pos.x + x] > 0)
					{
						return true;//collided
					}
				} 
			}
		} 
		return false;//made it all the way through, didnt collide
	} 
}

 
 