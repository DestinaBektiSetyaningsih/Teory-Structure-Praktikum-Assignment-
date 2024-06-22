/// Contoh Rekursif
#include<iostream>
using namespace std;

void rekursif(int n){
    if(n > 0){
        cout << "ini adalah rekursif, materi alstrukdat yang ke-10" << endl;
        n--;
        rekursif(n);
    }
}

int main(){
    rekursif(3);
}