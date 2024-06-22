/// Contoh Program Priority Queue

#include <iostream>
#include <queue>

using namespace std;

struct Elemen {
    int NILAI;
    string NAMA;
};

bool operator<(const Elemen& a, const Elemen& b) {
    return a.NILAI < b.NILAI;
}

int main() {
    priority_queue<Elemen> pq;

    pq.push({4, "RUBYy"});
    pq.push({5, "CHIKO"});
    pq.push({3, "CHOKI"});
    pq.push({6, "BOLI"});

    cout << "Isi priority queue:" << endl;
    while (!pq.empty()) {
        Elemen elemen = pq.top();
        cout << "NILAI: " << elemen.NILAI << ", NAMA: " << elemen.NAMA << endl;
        pq.pop();
    }

    return 0;
}