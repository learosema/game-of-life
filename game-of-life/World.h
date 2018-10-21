#pragma once

#include "Node.h"
#include "Cell.h"

class World
{
public:
	World();
	~World();

	void Init_World( const unsigned int* Start_Pattern, unsigned int Start_Rows, unsigned int Start_Cols );

	Cell_ptr Get_Cell( int x, int y ) const;

private:
	Cell_ptr Make_Cell( int x, int y, bool Alive );
	Node_ptr Make_Node();

	Node_ptr m_Center_Node;
};

