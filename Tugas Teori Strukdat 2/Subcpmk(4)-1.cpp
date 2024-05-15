#include <iostream>
#include <string>
using namespace std;
/// Mendeklarasikan 
struct Skincare{
    string Nama;                      
    int Harga;
      
};
 
int main(){
 
    Skincare sc;
 
    sc.Nama  = "La Roche Posay";
    sc.Harga = 600000;
    
    
    cout <<"DATA SKINCARE"<<endl;
    cout <<"--------------------"<<endl;
    cout <<"Nama Skincare   : " << sc.Nama <<endl;
    cout <<"Harga           : " << sc.Harga <<endl;
    
      
    return 0;
}