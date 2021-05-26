#include <iostream>
#include "LinkedList.hpp"
using namespace std;

int main()
{
	// Create a linked list
	LinkedList list;
	CreateList(list);

	// Add sample data to list
	Node* node;
	for (auto i = 1; i <= 10; i++)
	{
		// Create new node with init data is i
		node = CreateNode(i);
		
		// Add node to head
		// List that is added node by AddHead will be reversed
		//AddHead(list, node);
		
		// Add node to Tail
		AddTail(list, node);
	}

	// Print list
	PrintList(list);
	cout << endl;

	// Get list's length
	int len = Length(list);
	cout << "Length of list: " << len << endl;

	// Get node at index 7
	Node* nodeAtIdx7 = GetNode(list, 7);
	if (nodeAtIdx7 != NULL)
		cout << "Data at node have idx 7: " << nodeAtIdx7->data << endl;

	// Search for 4 in list
	Node* search4InList = Search(list, 4);
	if (search4InList != NULL)
		cout << "4 was founded" << endl;
	else
		cout << "4 not Found" << endl;

	// Remove node after 4 in list
	int x;
	int res = RemoveAfterQ(list, search4InList, x);
	if (res)
	{
		cout << "Data of node has been removed: " << x << endl;
		cout << "List after removed: ";
		PrintList(list);
		cout << endl;
	}
	else
		cout << "Nothing is removed" << endl;

	// Insert 2409 after node 4
	Node* node2409 = CreateNode(2409);
	InsertAfterQ(list, node2409, search4InList);
	cout << "List after insert 2409 after 4: ";
	PrintList(list);
	cout << endl;
	

	// Remove Head
	res = RemoveHead(list, x);
	if (res)
	{
		cout << "Data of node has been removed: " << x << endl;
		cout << "List after removed head: ";
		PrintList(list);
		cout << endl;
	}
	else
		cout << "Nothing is removed" << endl;

	
	// Destroy all node
	DestroyList(list);
	
	return 0;
}