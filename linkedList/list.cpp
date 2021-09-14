#include "list.h"
#include "linkNode.h"
#include <cstddef>
#include<iostream>
using namespace std;

list::list()
{
	head = NULL;
}

void list::AddToList(list N1)
{
	if (this->head == NULL)
		this->head = N1.head;
	linkNode* temp = this->head;
	while (temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = N1.head;
}


void list::AddToList(linkNode* N1)
{
	if (this->head == NULL)
	{
		this->head = N1;
		return;
	}
	else 
	{
		linkNode *temp = this->head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next=N1;

	}
	
	
}

void list::AddToList(int N1)
{
	linkNode* newnode = new linkNode(N1);
	this->AddToList(newnode);
}

void list::PrintList()
{
	linkNode *temp;
	temp = this->head;
	while (temp!=NULL)
	{
		cout << temp->data << "\n";
		temp = temp->next;
	}
}
