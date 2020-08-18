#include <windows.h>
#include <array>
#ifndef CONSTANTS_H
#define CONSTANTS_H
 
const int  LEFT = 0, DOWN = 1, RIGHT = 2;
const int MAXWIDTH = 22, MAXHEIGHT = 36;
const int XBUFF = 10, YBUFF = 3; 
 
const std::array<std::array<bool, 4>, 4 >SHAPE1  = { {  { 0,0,0,0 },
														{ 0,1,1,0 },
														{ 0,1,1,0 },
														{ 0,0,0,0 } } };
 
const std::array<std::array<bool, 4>, 4 >SHAPE2 = { {   { 0,0,1,0 },
														{ 0,0,1,0 },
														{ 0,0,1,0 },
														{ 0,0,1,0 } } };
 
const std::array<std::array<bool, 4>, 4 >SHAPE3 = { {   { 0,1,0,0 },
														{ 0,1,0,0 },
														{ 0,1,1,0 },
														{ 0,0,0,0 } } };

const std::array<std::array<bool, 4>, 4 >SHAPE4 = { {   { 0,1,0,0 },
														{ 0,1,0,0 },
														{ 1,1,0,0 },
														{ 0,0,0,0 } } };

const std::array<std::array<bool, 4>, 4 >SHAPE5 = { {   { 0,1,0,0 },
														{ 0,1,1,0 },
														{ 0,0,1,0 },
														{ 0,0,0,0 } } };

const std::array<std::array<bool, 4>, 4 >SHAPE6 = { {   { 0,0,1,0 },
														{ 0,1,1,0 },
														{ 0,1,0,0 },
														{ 0,0,0,0 } } };

const std::array<std::array<bool, 4>, 4 >SHAPE7 = { {   { 0,1,0,0 },
														{ 1,1,1,0 },
														{ 0,0,0,0 },
														{ 0,0,0,0 } } }; 
#endif