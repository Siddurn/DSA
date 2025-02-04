#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

typedef int data_t;
typedef struct node
{
	data_t data;
	struct node *link;
}Slist;

int find_node(Slist *head, data_t key);
int insert_at_last(Slist **head, data_t );
int insert_at_first(Slist **head, data_t);
//insert_after added by me
int insert_after(Slist **head, data_t g_data,data_t a_data);
int sl_delete_list(Slist **);
int sl_delete_last(Slist **);
int sl_delete_first(Slist **);
void print_list(Slist *head);

#endif