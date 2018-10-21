#include "World.h"

World::World()
{
	m_Center_Node = nullptr;
}


World::~World()
{
}

void World::Init_World( const unsigned int* Start_Pattern, unsigned int Start_Rows, unsigned int Start_Cols )
{
	for (unsigned int Row = 0; Row < Start_Rows; Row++)
	{
		for (unsigned int Col = 0; Col < Start_Cols; Col++)
		{
			unsigned int Alive_State = Start_Pattern[(Row * Start_Cols) + Col];

			Cell_ptr New_Cell = Make_Cell(Col, Row, Alive_State > 0);

			if (Row == 0 && Col == 0)
			{
				m_Center_Node = Make_Node();
				continue;
			}
		}
	}
}

Node_ptr World::Make_Node()
{
	return Node_ptr( new Node() );
}

Cell_ptr World::Get_Cell(int x, int y) const
{
	int Curr_X_Pos = 0;
	int Curr_Y_Pos = 0;

	Node_ptr Curr_Node = m_Center_Node;

	return Cell_ptr();
}

Cell_ptr World::Make_Cell(int x, int y, bool Alive)
{
	return Cell_ptr( new Cell(x, y, Alive) );
}
