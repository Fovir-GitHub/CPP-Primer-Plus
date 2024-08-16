#ifndef _MYLIST_H_
#define _MYLIST_H_

typedef int Item;

class MyList
{
private:
	typedef struct node
	{
		Item item;
		node * next;
	}Node;

	Node * root;

public:
	MyList();
	~MyList();

	void AddItem(Item new_item);
	bool IsEmpty() { return root == nullptr; }

	void visit(void(*function)(Item &));
};

#endif // !_MYLIST_H_