```C++
#include <iostream>
#include <algorithm>

int main() {
    int arrA[] = {2, 1, 3, 1};
    int panjangArrA = sizeof(arrA) / sizeof(arrA[0]);

    std::sort(arrA, arrA + panjangArrA);

    bool duplikat = std::adjacent_find(arrA, arrA + panjangArrA) != arrA + panjangArrA;

    std::cout << std::boolalpha << duplikat;

    return 0;
}
```

### Output
![Screenshot 2024-06-22 151028](https://github.com/rennanvra/Algoritma-dan-Struktur-Data/assets/162566980/538dd113-8daf-4539-9df5-2b9de1df06c3)

Interpretasi:
Program diatas yaitu program Algoritma Sort. Program ini menggunakan fungsi sort. 

contoh kode program:
- "int panjangArr" -> untuk menghitung panjang array dengan menggunakan rumus sizeof(arrA) / sizeof(arrA[0]).
- "std::sort" -> untuk mengurutkan array
- "bool duplikat" -> untuk mengecek duplikat dengan menggunakan fungsi adjacent_find
- "std::cout" -> untuk menampilkan hasil

Cara Kerja Program:
Program algoritma sort tersebut akan memproses duplikat pada array, jika terdeteksi ada duplikat maka akan bernilai true, dan begitupun sebaliknya jika tidak mendeteksi adanya duplikatpada array maka akan bernilai false.