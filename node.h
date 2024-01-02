#pragma once

class node
{
public:
	typedef double value_type;
	value_type get_data();
	node* get_link();
	void set_data(value_type entry);
	void set_link(node* link_ptr);
	node(value_type entry, node* link_ptr);

private:
	value_type data_field;
	node* link_field;
};

void list_head_insert(node*& head_ptr, const node::value_type& entry);
void list_head_remove(node*& head_ptr);
void list_insert(node*& previous_ptr, const node::value_type& entry);
void list_remove(node*& previous_ptr);
void list_display(node*& head_ptr);
node* list_reverse(node*& head_ptr);