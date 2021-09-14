#include "linkNode.h"
#include<iostream>
#include "linkNode.h"
#include<cstddef>
using namespace std;

linkNode::linkNode(int d)
{
	this->data = d;
	this->next = NULL;
}
