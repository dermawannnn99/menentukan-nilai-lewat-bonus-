#include <iostream>
#include <string>

using namespace std;

int main() {
    int bonus, gaji, tunjangan;
    string jabatan;

    cout << "Masukkan nilai bonus: ";
    cin >> bonus;

    if (bonus == 250000) {
        jabatan = "Manager";
        gaji = 5000000;
        tunjangan = 100000;
    } else if (bonus == 0) {
        jabatan = "OfficeBoy";
        gaji = 3000000;
        tunjangan = 200000;
    } else if (bonus == 300000) {
        jabatan = "Staf";
        gaji = 4000000;
        tunjangan = 100000;
    } else if (bonus ==100000) {
        jabatan = "Lainnya";
        gaji = 2000000;
        tunjangan = 100000;
    } else {
        cout << "Bonus tidak diketahui, masukan nilai bonus yang tepat" << endl;
        return 1;
    }

    cout << "Jabatan: " << jabatan << endl;
    cout << "Gaji: " << gaji << endl;
    cout << "Tunjangan: " << tunjangan << endl;
    cout << "Bonus: " << bonus << endl;

    return 0;
}