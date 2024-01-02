#include "node.h"
#include <iostream>
using namespace std;

int main()
{
	node* list1 = nullptr;

	list_head_insert(list1, 1);
	
	list_head_insert(list1, 2);
	
	list_head_insert(list1, 3);
	
	list_head_insert(list1, 4);
	
	list_head_insert(list1, 5);
	cout << "After inserting 5 at the front of the list, the list becomes:" << endl;
	list_display(list1);

	cout << endl << endl;

	cout << "After reversing, the list becomes:" << endl;
	list_reverse(list1);
	list_display(list1);
	

	return 0;
}