#include <iostream>

#include "tipe_data.h"

#include "kel_1/parent1.h"
#include "kel_1/child1.h"
#include "kel_1/relasi1.h"
#include "kel_1/menu1.h"

#include "kel_2/parent2.h"
#include "kel_2/child2.h"
#include "kel_2/relasi2.h"
#include "kel_2/menu2.h"

#include "kel_3/parent3.h"
#include "kel_3/child3.h"
#include "kel_3/menu3.h"

using namespace std;

List_parent1 L_p1;
List_child1 L_c1;

List_parent2 L_p2;
List_child2 L_c2;
List_rel2 L_r2;

List_parent3 L_p3;


void main_menu();

int main()
{
    main_menu();
    return 0;
}

void main_menu(){
    int pilihan;
    do {
        cout << "\n==================================================\n";
        cout << "1. Test Kelompok 1\n";
        cout << "2. Test Kelompok 2\n";
        cout << "3. Test Kelompok 3\n";
        cout << "4. Test Integrasi\n";
        cout << "0. Keluar\n";
        cout << "Pilih modul: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << ">> Membuka Modul Kelompok 1\n";
            menu_1(L_p1, L_c1);
            break;
        case 2:
            cout << ">> Membuka Modul Kelompok 2\n";
            menu_2(L_p2, L_c2, L_r2);
            break;
        case 3:
            cout << ">> Membuka Modul Kelompok 3\n";
            menu_3(L_p3);
            break;
        case 4:
            cout << ">> Modul Test Integrasi\n";
            break;
        case 0:
            cout << "Sistem ditutup.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);
}
