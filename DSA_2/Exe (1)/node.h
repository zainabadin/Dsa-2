#pragma once
using namespace std;
#include <iostream>
class node
{
private:
	int val;
	node* next;

public:

	node();
	void set_val(int);
	int get_val();
	void set_next(node*);
	node* get_next();
	void display();
	~node();
};