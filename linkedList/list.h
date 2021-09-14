#pragma once
using namespace std;
#include "linkNode.h"
class list
{
private:
	linkNode* head;
public:
	list();
	void AddToList(list N1);
	void AddToList(linkNode* N1);
	void AddToList(int N1);
	void PrintList();
	void SortList();
	int lenghth();
	bool find(int data);
};

