/// Jawaban subCPMK (2) Nomer 2

#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string nama[], int x) {
    for(int y = 0; y < x-1; y++) {
        for(int z = 0; z < x-y-1; z++) {
            if(nama[z] > nama[z+1]) {
                swap(nama[z], nama[z+1]);
            }
        }
    }
}

/// Masukkan data
int main() {
    string nama[] = {"Zelda", "Zelin", "Vareline", "Xelfa", "Lauren", "Aundrey", "Stella", "kate", "Celine", "Paishley", "Briella", "Cherly", "Chelsea", "Gretha", "Michella"};
    int x = sizeof(nama)/sizeof(nama[0]);

    bubbleSort(nama, x);

    cout << "15 Nama penyewa kamar kost putri setelah diurutkan: ";
    for(int y = 0; y < x; y++) {
        cout << nama[y] << " ";
    }
    cout << endl;

    return 0;
}