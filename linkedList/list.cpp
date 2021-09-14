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

void list::SortList()
{
	//ascending sort
	linkNode* temp = this->head;
	if (temp->next != NULL)
	{
		int dt; // temp for swaping data of linkNode
		int max;
		int n = this->lenghth();
	
		for (int i = 1;i <= n;i++)
		{
			//max = temp->data;
			for (int j = 1;j <= n - i;j++)
			{
				if (temp->data > temp->next->data)//swap
				{
					dt = temp->data;
					temp->data = temp->next->data;
					temp->next->data = dt;
				}
				temp = temp->next;
			}
			temp = this->head;
		}

	}


}

int list::lenghth()
{
	if (this->head == NULL)
		return 0;
	linkNode* temp = this->head;
	int i = 1;
	while (temp->next!=NULL)
	{
		i++;
		temp = temp->next;
	}
	return i;
}

bool list::find(int data)
{
	if (this->head == NULL)
		return false;
	//bool b = false;
	linkNode* temp = this->head;
	do {
		if (temp->data == data)
			return true;
		temp = temp->next;
	} while (temp != NULL);
	return false;
}
