#include "Cell.h"



Cell::Cell()
{
	m_Alive = false;

	m_x_Pos = 0;
	m_y_Pos = 0;
}


Cell::Cell(int x, int y, bool Alive)
{
	m_Alive = Alive;

	m_x_Pos = x;
	m_y_Pos = y;
}

Cell::~Cell()
{
}

const unsigned int Cell::Get_Alive_Neighbour_Count()
{
	return 0;
}
