#ifndef PARENT2_H_INCLUDED
#define PARENT2_H_INCLUDED

#include "../tipe_data.h"

#include <iostream>
using namespace std;

typedef struct elm_parent2 *adr_parent2;

struct elm_parent2 {
    info_parent2 info;
};

struct List_parent2 {
};

void create_list_parent2(List_parent2 &L);
adr_parent2 alokasi_parent2(info_parent2 x);

void insert_last_parent2(List_parent2 &L, adr_parent2 P);

void delete_first_parent2(List_parent2 &L, adr_parent2 &P);
void delete_last_parent2(List_parent2 &L, adr_parent2 &P);
void delete_parent2(List_parent2 &L, adr_parent2 &P);

void print_info_parent2(List_parent2 L, bool all);
adr_parent2 find_element_parent2(List_parent2 L, info_parent2 x);


#endif // PARENT2_H_INCLUDED
