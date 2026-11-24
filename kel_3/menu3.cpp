#include "../tipe_data.h"
#include "menu3.h"
#include "parent3.h"
#include "child3.h"


void menu_3(List_parent3 &L_p3) {

    adr_parent3 P_p3;
    adr_child3 P_c3;


    info_parent3 x_p3;
    info_child3 x_c3;

    int pilihan;
    do {
        cout << "\n==================================================\n";
        cout << "  Contoh Menu 1-N Tanpa List RELASI \n";
        cout << "==================================================\n";
        cout << "1. Insert PARENT Baru\n";
        cout << "2. Show List PARENT\n";
        cout << "3. Search PARENT\n";
        cout << "4. Add CHILD baru ke dalam PARENT\n";
        cout << "5. Show List CHILD dalam PARENT\n";
        cout << "6. Search CHILD dalam PARENT\n";
        cout << "7. Remove CHILD dari PARENT\n";
        cout << "8. Delete PARENT\n";
        cout << "9. Print All\n";
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
        cout << "4. Add CHILD baru ke dalam PARENT\n";
            break;
        case 5:
        cout << "5. Show List CHILD dalam PARENT\n";
            break;
        case 6:
        cout << "6. Search CHILD dalam PARENT\n";
            break;
        case 7:
        cout << "7. Remove CHILD dari PARENT\n";
            break;
        case 8:
        cout << "8. Delete PARENT\n";
            break;
        case 9:
        cout << "9. Print All\n";
            break;
        case 0:
            cout << "Kembali ke menu utama.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);
}
