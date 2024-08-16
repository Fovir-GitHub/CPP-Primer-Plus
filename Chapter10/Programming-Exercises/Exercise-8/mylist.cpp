#include "mylist.h"

MyList::MyList()
{
	root = nullptr;
}

MyList::~MyList()
{
	Node * backup;
	while (root)
	{
		backup = root->next;
		delete root;
		root = backup;
	}
}

void MyList::AddItem(Item new_item)
{
	Node * new_node = new Node;
	new_node->item = new_item;

	if (!root)
		root = new_node;
	else
	{
		Node * scan = root;
		while (scan->next)
			scan = scan->next;
		scan->next = new_node;
	}

	return;
}

void MyList::visit(void(*function)(Item &))
{
	if (IsEmpty())
		return;

	Node * scan = root;
	while (scan)
	{
		function(scan->item);
		scan = scan->next;
	}

	return;
}
