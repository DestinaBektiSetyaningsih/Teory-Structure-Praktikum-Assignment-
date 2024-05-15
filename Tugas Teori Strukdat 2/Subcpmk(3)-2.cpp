// Jawaban subCPMK (3) Nomer 2.

#include <iostream>
#include <vector>

using namespace std;

int countTwo(const vector<int>& data) {
    int count = 0;
    for (int num : data) {
        if (num == 2) {
            count++;
        }
    }
    return count;
}

/// Masukkan data
int main() {
    vector<int> data = {2, 6, 2, 4, 2, 5, 6, 7, 1, 8};

    int jumlahDua = countTwo(data);

    cout << "Jumlah angka 2 dalam data adalah: " << jumlahDua << endl;

    return 0;
}
