#ifndef CHILD3_H_INCLUDED
#define CHILD3_H_INCLUDED

#include "../tipe_data.h"

#include <iostream>
using namespace std;


typedef struct elm_child3 *adr_child3;

struct elm_child3 {
    info_child3 info;
};

struct List_child3 {
};

void create_list_child3(List_child3 &L);
adr_child3 alokasi_child3(info_child3 x);

void insert_last_child3(List_child3 &L, adr_child3 P);

void delete_first_child3(List_child3 &L, adr_child3 &P);
void delete_last_child3(List_child3 &L, adr_child3 &P);
void delete_child3(List_child3 &L, adr_child3 &P);

void print_list_child3(List_child3 L, bool all);
adr_child3 find_element_child3(List_child3 L, info_child3 x);


#endif // CHILD3_H_INCLUDED
