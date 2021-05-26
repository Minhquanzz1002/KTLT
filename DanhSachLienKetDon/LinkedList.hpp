#ifndef LinkedList_hpp
#define LinkedList_hpp

struct Node
{
	int data;
	Node* next;
};

struct LinkedList
{
	Node* head;
	Node* tail;
};

Node* CreateNode(int init_data);
void CreateList(LinkedList& l);
void AddHead(LinkedList& l, Node* node);
void AddTail(LinkedList& l, Node* node);
void InsertAfterQ(LinkedList& l, Node* p, Node* q);
int RemoveHead(LinkedList& l, int& x);
int RemoveTail(LinkedList& l, int& x);
int RemoveAfterQ(LinkedList& l, Node* q, int& x);
Node* GetNode(LinkedList l, int index);
void PrintList(LinkedList l);
Node* Search(LinkedList l, int x);
int Length(LinkedList l);
void DestroyList(LinkedList& l);

#endif