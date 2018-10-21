#pragma once

#include <memory> // std::shared_ptr

class Node;
class Cell;
typedef std::shared_ptr<Node> Node_ptr;
typedef std::shared_ptr<Cell> Cell_ptr;

class Node
{
public:
	Node();
	~Node();

	Node_ptr m_Top;
	Node_ptr m_Bottom;
	Node_ptr m_Left;
	Node_ptr m_Right;

	Cell_ptr m_Cell;
};

