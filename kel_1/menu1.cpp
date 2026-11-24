#include "../tipe_data.h"
#include "menu1.h"
#include "parent1.h"
#include "child1.h"


void menu_1(List_parent1 &L_p1, List_child1 &L_c1){

    adr_parent1 P_p1;
    adr_child1 P_c1;
    adr_rel1 P_r1;

    info_parent1 x_p1;
    info_child1 x_c1;

    int pilihan;
    do {
        cout << "\n==================================================\n";
        cout << "  Contoh Menu M-N dengan List RELASI di dalam PARENT \n";
        cout << "==================================================\n";
        cout << "1. Insert PARENT Baru\n";
        cout << "2. Show List PARENT\n";
        cout << "3. Search PARENT\n";
        cout << "4. Insert CHILD Baru\n";
        cout << "5. Show List CHILD\n";
        cout << "6. Search CHILD\n";
        cout << "7. Add CHILD ke dalam PARENT\n";
        cout << "8. Remove CHILD dari PARENT\n";
        cout << "9. Delete PARENT\n";
        cout << "10. Print All\n";
        cout << "0. Kembali\n";
        cout << "Pilih modul: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "1. Insert PARENT Baru\n";
            break;
        case 2:
            cout << "2. Show List PARENT\n";
            break;
        case 3:
            cout << "3. Search PARENT\n";
            break;
        case 4:
            cout << "4. Insert CHILD Baru\n";
            break;
        case 5:
            cout << "5. Show List CHILD\n";
            break;
        case 6:
            cout << "6. Search CHILD\n";
            break;
        case 7:
            cout << "7. Add CHILD ke dalam PARENT\n";
            break;
        case 8:
            cout << "8. Remove CHILD dari PARENT\n";
            break;
        case 9:
            cout << "9. Delete PARENT\n";
            break;
        case 10:
            cout << "10. Print All\n";
            break;
        case 0:
            cout << "Kembali ke menu utama.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);
}
