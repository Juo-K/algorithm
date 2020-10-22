#include "BST.h"
//#include <time.h>
//#include <stdlib.h>

#include <ctime>
#include <cstdlib>

int main()
{
	srand((unsigned int)time(NULL));

	BST bst;

	BST::Node* root = nullptr;

	for (int i = 0; i < 200; i++)
		bst.InsertNode(&root, rand() % 100 + 1);

	//bst.PrintNode(root);
	//bst.Search(root, 10);
	bst.DeleteAll(root);
	

	return 0;
}