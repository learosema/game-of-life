#pragma once

#include <memory> // std::shared_ptr

class Cell;
typedef std::shared_ptr<Cell> Cell_ptr;

class Cell
{
public:
	Cell( int x, int y, bool Alive);
	~Cell();

	const bool Is_Alive() const { return m_Alive; }

	const int Get_X_Pos() const { return m_x_Pos; }
	const int Get_Y_Pos() const { return m_y_Pos; }

	const unsigned int Get_Alive_Neighbour_Count();

private:
	Cell();
	bool m_Alive;

	int m_x_Pos;
	int m_y_Pos;
};

