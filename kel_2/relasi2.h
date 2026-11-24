#ifndef RELASI2_H_INCLUDED
#define RELASI2_H_INCLUDED

#include "parent2.h"
#include "child2.h"

#include <iostream>
using namespace std;

typedef struct elm_rel2 *adr_rel2;

struct elm_rel2{
    adr_parent2 parent;
    adr_child2 child;
};

struct List_rel2{
};

void create_list_rel2(List_rel2 &L);
adr_rel2 alokasi_rel2(adr_parent2 parent, adr_child2 child);

void insert_last_rel2(List_rel2 &L, adr_rel2 P);

void delete_first_rel2(List_rel2 &L, adr_rel2 &P);
void delete_last_rel2(List_rel2 &L, adr_rel2 &P);
void delete_rel2(List_rel2 &L, adr_rel2 &P);

void print_info_rel2(List_rel2 L, bool all);
adr_rel2 find_element_rel2(List_rel2 L, adr_parent2 parent, adr_child2 child);

#endif // RELASI2_H_INCLUDED
