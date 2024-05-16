# <h1 align="center">Tugas Teori Strukdat</h1>
<p align="center">Destina Bekti Setyaningsih (2311110018) / Sains Data</p>

### SubCPMK 2:
1.	Terdapat tiga algoritma sorting yang umum digunakan yakni, Bubble Sort, Selection Sort, dan Merge Sort. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!

Jawab:
Menurut Buku yang saya baca,
> Bubble Sort -> algoritma pengurutan yang sederhana yang mempunyai skema proses dengan proses dengan menukar elemen/anggota yang berdekatan secara berulang setelah dilakukan perbandingan yang hasil urutannya tidak sesuai.

Urutan Bubble Sort:
- Atur indeks pertama menjadi 0.
- Lalu, bandingkan nilai pada indeks A dengan indeks B/ indeks berikutnya.
- Jika nilai tersebut di urutan yang salah, maka kita akan tukar.
- Lalu tambah indeks, jika indeks saat ini kurang dari panjang array, maka kita ulangi proses dari langkah yang ke-2.
- Ulangi seluruh proses dari langkah 1 sampai langkah yang dimana tidak bisa lagi untuk ditukar.

> Selection Sort -> pemilihan membandingkan data array berulang-ulang untuk menemukan elemen/anggota yang lebih kecil/minuman (sortir menaik) dari bagian yang belum dibandingkan dan memposisikan diposisi awal. Dalam tahap ini proses pengurutan bertipe seleksi elemen yang lebih kecil/minimum dari sub elemen yang belum diurutkan selanjutnya dipindahkan posisi ke sub elemen yang sudah diurutkan.

Urutan Seelection Sort:
- Langkah pertama kita atur indeks menjadi 0.
- Lalu, kita temuakn dulu nilai terkecil dalam bagian yang belum diurutkan dari array.
- Setelah itu, tukar nilai terkecil dengan elemen pertama dalam bagian yang belum diurutkan.
- Lalu tambahkan indeks pertama, dan ulangi seluruh proses dari langkah 2 sampai kebagian yang belum diurutkan habis.

> Merge Sort -> algoritma yang menggunakan teknik divide-and-conquer, cara kerjanya dengan membagi array menjadi sub array yang lebih kecil, mengurutkannya, dan kemudian mereka menangkas kembali.

Urutan Merge Sort:
- Pertama kita bagi array menjadi 2 bagian.
- Lalu, urutkan setiap bagian dan gabungkan 2 bagian yang telah diurutkan dengan membandingkan elemen tersebut, serta membangunkan array baru yang telah diurutkan. [1]

2. Pemilik kos khusus putri memiliki 15 kamar kos dengan nama penyewanya: Zelda, Zelin, Vareline, Xelfa, Lauren, Aundrey, Stella, kate, Celine, Paishley, Briella, Cherly, Chelsea, Gretha, dan Michella. Supaya mudah dalam melakukan pencarian, Pemilik kos itu akan mengurutkan nama - nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu pemilik kost tersebut dengan menggunakan algoritma Bubble Sort!

Jawab:
```C++
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
```
### Output:
![Screenshot 2024-05-11 090359](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/ab2f849b-9bed-4e44-a53c-d6057764eb54)

Interpretasi:
Program diatas yaitu untuk memasukkan dan mengecek data nama - nama penyewa kamar kost putri tersebut supaya mudah untuk mencarinya. Tujuan program ini dibuat supaya pengguna bisa memahami fungsi dari "Bubble Sort".
Cara Kerjanya yaitu, Kita cari dan masukan dulu daftar nama-nama penyewa kamar tersebut, setelah itu di urutkan nama - nama tersebut. 

Fungsi Kode - Kode terssebut:
- "Void BubbleSort" -> untuk mengetahui kalau ini tuh menggunakan string dan integer dalam setiap kodenya.
- "for" -> untuk pengulangan pada setiap elemen.
Algoritma Bubble Sort bekerja dengan cara membandingkan pasangan elemen yang saling berdekatan dan mengembalikan mereka jika mereka dalam urutan salah.

### SubCPMK 3:
1. Menurut Modul dan Buku yang saya baca,
Sequential Search (metode pencarian berurutan) -> proses membandingkan setiap elemen dalam list atau array satu per satu secara beruntun, mulai dari elemen pertama, sampai elemen terakhir (elemen yang dicarikan sudah ditemukan). 
Teknik algoritma Sequential Search adalah teknik yang sederhana dan cocok digunakan baik array maupun linked list. [2][a]

> Alur Jalannya Algoritma Sequential Search :
- Input (z) data yang sedang dicari.
- Lalu, bandingkan data (z) tersebut sampai indeks terakhir.
- Setelah itu, jika ada data yang sama dengan data (z) maka akan mencetak dengan output "ada".
- Namun, jika tidak ada data yang sama dengan data (z) maka akan mencetak dengan output "tidak ada".

> Best Case dan Worst Case :
- Best Case -> jika data yang dicari terletak didepan maka membutuhkan waktu yang minimal, sedangkan
- Worst Case -> jika data yang dicari terletak dibelakang maka membutuhkan waktu yang maksimal. [2][b]

> Contoh :
Data = 1,8,2,4,6,5
Bestcase ketika Z = 1
Worstcase ketika z = 5 

Binary Search -> algoritma pencarian biner yang paling efektif. Algoritma ini memanfaatkan kumpulan elemen yang telah diurutkan dengan mengabaikan setengah dari elemen, setelah dilakukan satu perbandingan. [2][a]

Algoritma ini lebih cepat dari sequential search, dan teknik pencariannya yaitu data dibagi menjadi dua bagian untuk setiap kali proses pencarian. Cara mecari nilai tengah : 
posisi tengah = posisi awal + posisi akhir/2.

> Alur Jalannya Algoritma Binary Search :
- Data diambil dari posisi awal sampai ke posisi akhir.
- Kemudian cari posisi data tengah dengan rumus : (posisi awal + posisi akhir/2).
- Kemudian data yang sedang dicari dibandingkan dengan data yang ada ditengah, apakah data tersebut sama atau lebih kecil atau justru lebih besar?.
- Jika data tersebut sama, berarti data itu sudah ketemu.
- Jika data tersebut lebih besar, maka ulangi langkah 2 dengan posisi awal, seperti (posisi tengah + 1).
- Lalu, jika data tersebut lebih kecil, maka ulangi langkah 2 dengan posisi akhir, seperti (posisi tengah - 1).

> Best Case dan Worst Case :
- Best Case -> jika data yang dicari terletak di posisi tengah, sedangkan
- Worst Case -> jika data yang dicari tidak ditemukan. [2][b]

> Contoh :
Data = 2,6,1,2,3,5,7
Bestcase ketika z = 2 (T(n) = 1)
Worstcase ketika z = 26 (T(n)= 6 atau n/2)

2. Diketahui data = 2, 6, 2, 4, 2, 5, 6, 7, 1, 8. Hitunglah berapa banyak
angka 2 dengan menggunakan algoritma Sequential Search!

```C++
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

int main() {
    vector<int> data = {2, 6, 2, 4, 2, 5, 6, 7, 1, 8};

    int jumlahDua = countTwo(data);

    cout << "Jumlah angka 2 dalam data adalah: " << jumlahDua << endl;

    return 0;
}
```
### Output:
![Screenshot 2024-05-11 090633](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/983b180f-d0ac-4511-b3f8-e9afcdc51ed4)

Interpretasi:
Program diatas yaitu untuk menghitung jumlah angka yang ada didata tersebut. Tujuan program ini dibuat supaya pengguna bisa memahami fungsi dari "Sequential Search".
Cara Kerjanya yaitu, Kita input dulu datanya, setelah itu di hitung berapa angka terbanyak yang ada didata tersebut.

Fungsi Kode - Kode terssebut:
- Fungsi "countfours" -> untuk menghitung jumlah angka 2, berbeda lagi jika ingin menghitung angka 1 atau angka lainnya.
- Fungsi "num == 2" -> untuk memilih angka mana yang mau dihitung.
- Fungsi " vector<int>" -> untuk mendefinisikan kalau tipe data vektor hanya dapat menyimpan bilangan bulat saja.

3. Tulislah sebuah fungsi program dengan kondisi sebagai berikut:
Terdapat sebuah sorted array of strings yang mana terdapat string kosong diantaranya, carilah lokasi/indeks dari kata yang dicari! 

```C++
#include <iostream>
#include <vector>
#include <algorithm>

int searchWord(const std::vector<std::string>& words, const std::string& word) {
    int left = 0;
    int right = words.size() - 1;

    // binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // melewati string yang kosong.
        while (mid < words.size() && words[mid].empty()) {
            mid++;
        }

        // mengecek apakah kata tersebut sudah ditemukan atau belum
        if (words[mid] == word) {
            return mid;
        }

        // adjust search range
        if (words[mid] < word) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Kalimat tidak ditemukan 
    return -1;
}

int main() {
    std::vector<std::string> words = {"Adi", "", "", "", "bermain", "", "bola", "", "", "sedang"};
    std::string word = "bola";

    int index = searchWord(words, word);

    if (index != -1) {
        std::cout << "Word \"" << word << "\" found at index " << index << "." << std::endl;
    } else {
        std::cout << "Word \"" << word << "\" not found." << std::endl;
    }

    return 0;
}
```

### Output:
![Screenshot 2024-05-11 090720](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/b5d5834c-9658-4e11-9719-b0c028d1a10c)

Interpretasi:
Program diatas yaitu untuk menghitung jumlah indeks dan mengetahui elemen mana yang ada diindeks 6. Tujuan program ini dibuat supaya pengguna bisa memahami materi "Binary Search" dan mengetahui bahwa algortima ini lebih mudah dari mudah dan cepat daripada Sequantial Search.

Fungsi Kode - Kode tersebut:
- "vector" -> untuk menyimpan elemen - elemen dengan tipe data yang berbeda, seperti numerik, karakter, atau bahkan boolean.
- "string" -> untuk menyimpan sekumpulan karakter, seperti huruf, angka, atau bahkan simbol.
- "std::string word = "bola";" -> untuk menunjukkan elemen "bola" berada di indeks yang keberapa?..
- "if (index != -1)" -> untuk kasih tahu nih kalo indeks yang tidak ditemukan berarti akan menjadi -1. dst...

### SubCPMK 4:
1. (A) Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct!

Jawab:
Struct digunakan untuk mendeklarasikan tipe data yang merupakan kumpulan dari sejumlah tipe data primitif/tipe data kompleks lainnya serta memberinya nama sebagai pengenal tipe data. Secara fisik, struct disimpan dalam lokasi memori yang berurutan. [3][a]

Dalam bahasa indonesia tipe structure (struct) yang dikenal dengan istilah struktur. Sesuai dengan namanya, struct adalah tipe data bentukan yang menyimpan lebih dari satu variabel bertipe sama maupun berbeda. 

Oleh karena itu , dapat dianalogikan bahwa struct merupakan sebuah "pembungkus" dari beberapa tipe data yang dibei nama sesuai keinginan. 
Variabel/data elemen yang disebut juga sebagai "variabel/data member" ini dapat memiliki tipe data dan panjang data yang berbeda. Maka dari itu struct dapat digunakan untuk mengelompokkan beberapa data dengan tipe data berbeda dalam sebuah tipe data baru. [3][b]

(B) Buatlah sebuah contoh program dari struct! 

```C++
#include <iostream>
#include <string>
using namespace std;
 
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
```

### Output:
![Screenshot 2024-05-15 091711](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/daef4fa7-c8d1-40e3-adf5-e1d9b5869bda)

Interpretasi:
Program diatas yaitu untuk memasukkan nama barang skincare dan harga barang skincare. Tujuannya untuk mengetahui materi "struct".

Fungsi - fungsi kode program:
- "string" -> menggunakan fungsi ini untuk menyimpan barisan karakter.
- "integer" -> untuk bilangan bulat.
- "Skincare sc" -> untuk membuat variabel dengan tipe skincare.
- "cout" -> untuk mencetak string nama.


### SubCPMK 5:
3. Buatlah sebuah program untuk mengecek apakah linked list adalah sebuah palindrom!  

```C++
#include <iostream>
#include <stack>

using namespace std;

// Struktur node untuk linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = nullptr;
    return node;
}

// Fungsi untuk mengecek apakah linked list adalah palindrom
bool isPalindrome(Node* head) {
    // Inisialisasi stack untuk simpan node
    stack<Node*> stack;
    Node* curr = head;

    // Push node ke stack
    while (curr != nullptr) {
        stack.push(curr);
        curr = curr->next;
    }

    // Cek apakah linked list adalah palindrom
    curr = head;
    while (curr != nullptr) {
        if (curr->data != stack.top()->data) {
            return false;
        }
        stack.pop();
        curr = curr->next;
    }

    return true;
}

// Fungsi untuk mencetak linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Membuat linked list: 1 -> 2 -> 3 -> 2 -> 1
    Node* head = newNode(10);
    head->next = newNode(100);
    head->next->next = newNode(1000);
    head->next->next->next = newNode(10000);
    head->next->next->next->next = newNode(100000);

    // Mencetak linked list
    cout << "Linked List: ";
    printList(head);

    // Mengecek apakah linked list adalah palindrom
    if (isPalindrome(head)) {
        cout << "Linked List adalah palindrom." << endl;
    } else {
        cout << "Linked List bukan palindrom." << endl;
    }

    return 0;
}
```

### Output:
![Screenshot 2024-05-15 091807](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/b1310673-1642-455f-8aa7-9821c567bc87)

### SubCPMK 6:
1. Tulislah sebuah program dari operasi stack seperti pop, push, isEmpty, isFull, dll(min 5)! 

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Novel Insecurity");
    pushArrayBuku("Novel Misteri Dunia");
    pushArrayBuku("Novel Cantik itu Luka");
    pushArrayBuku("Novel Konspirasi Alam semesta");
    pushArrayBuku("Novel Overthinking");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Novel Self Healing");
    cetakArrayBuku();

    cout << "\n";

    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}
```
### Output:
![Screenshot 2024-05-15 091851](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/21937f16-0312-4251-a12a-0ba0f2c9c613)

Interpretasi:
Interpretasi: Dari program diatas kita bisa menyimpulkan bahwa ketika kita ingin menyimpan sebuah data, kita bisa menggunakan kode "stack".

Program diatas juga dapatb yaitu menyimpan data judul - judul novel. Tujuan program ini dibuat supaya pengguna bisa memahami fungsi dari "stack" yaitu, bisa menyimpan data, tidak hanya itu ,tetapi juga bisa untuk menambahkan data, dan menghapus data pada posisi akhir pada stack.

Cara kerjanya yaitu, pengguna memasukkan judul - judul buku seperti "Novel Insecurity", "Novel Misteri Dunia", "Novel Cantik itu Luka", dsb.. Lalu mereka mengubah indeks ke-2 menjadi Novel Self Healing. Selain itu program ini mempunyai beberapa kode yang memiliki fungsinya masing - masing seperti:

- Fungsi Utama "main" -> untuk menambah, mengubah, menghapus pada stack.
- Fungsi "isFull" -> untuk mengecek apakah data stack penuh atau tidak.
- Fungsi "isEmpty" -> untuk mengecek apakah data stack kosong atau tidak.
- Fungsi "pushArray" -> untuk menambahkan dan memasukan judul buku ke stack.
- Fungsi "destroyArray" -> untuk menghapus semua buku yang ada didalam stack.
- Fungsi "countstack" -> Untuk mengembalikan jumlah buku ke dalam stack.

### SubCPMK 7:
1. Tulislah sebuah program dari operasi queue seperti enqueue/add, dequeue/remove, isEmpty, isFull, dll(min 5)! 

```C++
#include <iostream>
#include <string>

struct QueueNode {
    std::string nama;
    std::string nim;
    QueueNode* next;
};

class Antrian {
private:
    QueueNode* front;
    QueueNode* rear;
    int size;

public:
    Antrian() : front(nullptr), rear(nullptr), size(0) {}

    ~Antrian() {
        while (front != nullptr) {
            QueueNode* temp = front;
            front = front->next;
            delete temp;
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == 5;
    }

    void enqueue(std::string nama, std::string nim) {
        if (isFull()) {
            std::cout << "Antrian Penuh" << std::endl;
            return;
        }

        QueueNode* newNode = new QueueNode();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Antrian kosong" << std::endl;
            return;
        }

        QueueNode* temp = front;
        front = front->next;
        delete temp;
        size--;

        if (isEmpty()) {
            rear = nullptr;
        }
    }

    int count() {
        return size;
    }

    void clear() {
        while (front != nullptr) {
            QueueNode* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
        size = 0;
    }

    void view() {
        std::cout << "Data antrian mahasiswa: " << std::endl;
        QueueNode* temp = front;
        int i = 1;
        while (temp != nullptr) {
            std::cout << i << ". Nama: " << temp->nama << ", NIM: " << temp->nim << std::endl;
            temp = temp->next;
            i++;
        }
    }
};

int main() {
    Antrian antrian;

    antrian.enqueue("Destina", "2311110018");
    antrian.enqueue("Satrio", "2331110070");
    antrian.enqueue("Billy", "23331100100");
    antrian.enqueue("Zelda", "23330310085");
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.dequeue();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.dequeue();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.dequeue();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    antrian.clear();
    antrian.view();
    std::cout << "Jumlah antrian = " << antrian.count() << std::endl;
    return 0;
}
```
### Output:
![Screenshot 2024-05-15 091924](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/9e7fd1bb-337f-4410-bc12-8965b7ea8301)

Interpretasi:
Interpretasi: Program diatas yaitu untuk memasukkan data NIM dan Nama dari Mahasiswa, lalu diurutkan untuk menjadi sebuah antrian. Tujuan program ini dibuat supaya pengguna bisa memahami fungsi dari "queue", yaitu untuk membantu mengelola dan menyimpan operasi data pada FIFO. Contoh cara kerjanya yaitu jika ada elemen data yang terdiri dari 5 indeks (A, B, C, D, E, F), yang dimana data (A) yaitu untuk keluar dari antrian dan juga urutan paling depan dari sebuah antrian, sedangkan data (F) yaitu data untuk masuk dari antrian dan juga urutan paling akhir dari sebuah antrian.

Fungsi kode - kode diatas:

- "antrian.enqueue" -> untuk menambahkan data antrian menjadi 4 antrian.
- "antrian.view" -> untuk menampilkan semua data Mahasiswa.
- "antrian.count" -> untuk mencetak jumlah elemen data yang ada didalam antrian.
- "antrian.dequeue" -> untuk menghapus satu - persatu data yang ada didalam antrian.
- "antrian.clear" -> untuk menghapus atau mengosonngkan semua antrian tersebut.

Penjelasan output: Ada 4 data antrian NIM dan Nama Mahasiswa yaitu antrian 1 atas nama Destina, antrian 2 atas nama Satrio, antrian 3 atas nama Billy, dan antrian terakhir atas nama Zelda. Pertama kali saat dipanggil otomatis Destina dong, setelah Destina selesai mengantri dia maju dong, dan otomatis antrian itu tetap bergilir sampai di antrian terakhir yaitu antrian Zelda. Nah setelah Zelda selesai mengantri otomatis antrian itu kosong dong, dan itulah yang dimaksud dengan struktur data Queue ini.



