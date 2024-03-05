// C++ program to demonstrate the implementation of List
#include <iostream>
#include"CList.h"
using namespace std;

// Driver Code
int main()
{
	CList list;
	int nNoOfItem = 0, nNo = 0;

	cout << "enter the no of elements in the list";
	cin >> nNoOfItem;

	cout << "\nEnter the list of items";
	for (int i = 0; i < nNoOfItem; i++)
	{
		cin >> nNo;
		list.insertNext(nNo);
	}

	cout << "\n the entered list is";

	node* tempNode = NULL;
	list.reset();
	while ((tempNode = list.next()) != NULL)
		cout << tempNode->info;

	return 0;

}
	
