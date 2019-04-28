#pragma once
#ifndef ___ALL
#define ___ALL
typedef struct {
	int count_node;
	char *arr[100];
}list;

void init(list *a);

int is_empty(list *a);

int is_full(list *a);

void add_last(list *a,char *data);

void print_all(list *a);

void add_first(list *a, char *data);

void delete_at(list *a, int pos);

void clear(list *a);

void replace(list *a, int pos, char *item);

int is_in_list(list *a, char *item);

void get_entry(list *a, int pos);

void length(list *a);

void add_in(list *a, int pos, char *data);
#endif // !___ALL
