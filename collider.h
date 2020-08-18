#pragma once
#include "map.h"
#include "cursor.h"
#include <array>

class collider
{

public:
	
	static bool collidetest(cursor::pos pos, std::array<std::array<bool, 4>, 4 > &shape, std::array<std::array<int, MAXWIDTH>, MAXHEIGHT> &themap);
	
};

