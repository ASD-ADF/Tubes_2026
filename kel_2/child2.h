#ifndef CHILD2_H_INCLUDED
#define CHILD2_H_INCLUDED

#include "../tipe_data.h"

#include <iostream>
using namespace std;


typedef struct elm_child2 *adr_child2;

struct elm_child2{
    info_child2 info;
};

struct List_child2 {
};

void create_list_child2(List_child2 &L);
adr_child2 alokasi_child2(info_child2 x);

void insert_last_child2(List_child2 &L, adr_child2 P);

void delete_first_child2(List_child2 &L, adr_child2 &P);
void delete_last_child2(List_child2 &L, adr_child2 &P);
void delete_child2(List_child2 &L, adr_child2 &P);

void print_list_child2(List_child2 L, bool all);
adr_child2 find_element_child2(List_child2 L, info_child2 x);


#endif // CHILD2_H_INCLUDED
