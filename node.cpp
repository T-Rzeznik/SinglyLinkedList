#include "node.h"
#include <iostream>
using namespace std;

node::value_type node::get_data()
{
	return data_field;
}

node* node::get_link()
{
	return link_field;
}

void node::set_data(value_type entry)
{
	data_field = entry;
}

void node::set_link(node* link_ptr)
{
	link_field = link_ptr;
}

node::node(value_type entry, node* link_ptr)
{
	data_field = entry;
	link_field = link_ptr;
}

void list_head_insert(node*& head_ptr, const node::value_type& entry)
{
	head_ptr = new node(entry, head_ptr);
}

void list_head_remove(node*& head_ptr)
{
	node* remove_ptr;
	remove_ptr = head_ptr;
	head_ptr = head_ptr->get_link(); // head_ptr = (*head_ptr).get_link();
	delete remove_ptr;
}

void list_insert(node*& previous_ptr, const node::value_type& entry)
{
	node* insert_ptr;
	insert_ptr = new node(entry, previous_ptr->get_link());
	previous_ptr->set_link(insert_ptr);
}

void list_remove(node*& previous_ptr)
{
	node* remove_ptr;
	remove_ptr = previous_ptr->get_link();
	previous_ptr->set_link(remove_ptr->get_link());
	delete remove_ptr;
}

void list_display(node*& head_ptr)
{
	node* cursor;
	cursor = head_ptr;
	while (cursor != nullptr)
	{
		cout << cursor->get_data() << endl;
		cursor = cursor->get_link();
	}
}


node* list_reverse(node*& head_ptr)
{
	node* cursor = head_ptr;
	node* prev = nullptr;
	node* next = nullptr;

	while (cursor != nullptr)
	{
		next = cursor->get_link();
		cursor->set_link(prev);
		prev = cursor;
		cursor = next;
	}
	head_ptr = prev;
	return head_ptr;
}