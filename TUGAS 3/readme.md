# <h1 align="center">TUGAS 3 TEORI ALSTRUKDAT</h1>
<p align="center">Destina Bekti Setyaningsih (2311110018) / Sains Data</p>

### PRIORITY QUEUE

Priority Queue (pengembangan lebih lanjut dari  konsep antrian ) adalah antrian yang setiap komponen  terdiri dari kunci dan nilai. 
Priority Queue mirip seperti antrian, tapi bedanya priority queue seperti antrian yang dilebih diprioritaskan atau VVIP. Dengan kata lain penghapusan/pengurangan anggota selalu dilakukan di awal antrian, dan penambahan  anggota selalu dilakukan di akhir antrian. Berdasarkan prioritas anggota, namun perhatikan hal berikut: Prioritas  dalam antrian prioritas diketahui (anggota dengan prioritas lebih tinggi  selalu  sebelum anggota dengan prioritas lebih rendah).Jalur Prioritas Misalnya, ketika mengantri di depan rumah sakit, orang dengan penyakit yang lebih serius akan selalu mengantri terlebih dahulu. Pada kasus ini, prioritas antrian  dalam rumah sakit adalah tingkat keparahan pasien.

Validasi antrian prioritas: (prioritas  lebih tinggi relatif terhadap nilai lebih rendah) Jika nilai prioritas data yang akan ditransfer lebih rendah dari prioritas data pertama, ke transfer data ke push awal, lalu push data setelah tail (backpush), jika nilai prioritas data yang didorong lebih besar atau sama dengan nilai data tail. Secara terpisah, jika data dengan nilai prioritas yang sama ditempatkan pada antrian terakhir dari antrian dengan nilai prioritas yang sama, maka data tersebut akan dipindahkan ke tengah antrian. Implementasi Antrian Prioritas Contoh implementasi antrian prioritas  adalah heap tree [1].

Antrian prioritas adalah  bentuk struktur data berdasarkan struktur antrian umum. Antrian prioritas mempunyai implementasi berupa implementasi menggunakan  struktur data heap. Implementasi ini memiliki 3  atribut utama: heap, comparator, dan load. Fungsi heap ini memungkinkan Anda menyisipkan atau menghapus elemen dalam  kompleksitas waktu logaritmik. Antrian prioritas  secara keseluruhan membentuk pohon biner  seimbang Saat membuat pohon biner ini, tinggi minimum yang terbentuk adalah Tinggi pohon minimum ini menimbulkan kompleksitas waktu saat memanipulasi daun secara logaritmik [2].

Antrean Prioritas adalah struktur data khusus yang dapat menyimpan elemen dengan nilai prioritas tertentu. Konsep dasar antrian prioritas mirip dengan antrian biasa, hanya saja setiap item dalam antrian prioritas mempunyai nilai prioritas yang menentukan urutan penerimaannya. Item dengan nilai prioritas tertinggi yang diambil terlebih dahulu, bukan item yang paling lama berada dalam antrian. Pada dasarnya, Antrean Prioritas dapat diimplementasikan  menggunakan struktur data dasar seperti heap atau pohon pencarian biner, dan dapat melakukan operasi penyisipan dan penghapusan  dalam waktu logaritmik. Struktur data ini memungkinkan Anda mengakses elemen dengan nilai prioritas tertinggi dengan mudah tanpa memindahkan semua elemen lainnya [3].
 
### Contoh Priority Queue:
```C++
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
```
#### Output:
![Screenshot 2024-06-22 130533](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/2bd97a95-76b3-4f2b-a60b-fb8bcfa6a9f9)

Interpretasi:
Program diatas adalah program priority queue. Dari output diatas kita bisa mengetahui bahwa antrian yang memiliki nilai tinggi ialah yang paling spesial, contohnya seperti "boli" memiliki nilai 6.

Fungsi kode-kode progra diatas:
- "int NILAI;" = untuk menyimpan nilai.
- "string NAMA;" = untuk memyimpan nama.
= "pq.empty" = untuk mengecek apakah antrian tersebut kosong atau tidak.
- "pq.pop" = untuk menghapus elemen atas dari antrian.
- "pq.top" = untuk mengambil elemen dari atas.

### HASH TABLE

Hashing adalah teknik untuk melakukan penambahan,
penghapusan dan pencarian dengan consistent normal time. Untuk menambahkan information atau pencarian, ditentukan key dari information tersebut dan digunakan sebuah fungsi hash untuk menetapkan lokasi untuk key tersebut. Hash tables adalah clusters dengan sel-sel yang ukurannya telah ditentukan dan dapat berisi information atau key yang berkesesuaian
dengan information. Untuk setiap key, digunakan fungsi hash untuk memetakan key pada bilangan dalam rentang hingga H-size-1 [4].

![Screenshot 2024-06-22 140425](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/cea09cb3-dd4a-4947-8d71-6f3fe8b70925)

Hashing adalah teknik yang digunakan untuk mengatur item data ke dalam daftar item yang relatif konstan melalui penekanan tombol dan kemudian mengaksesnya untuk menentukan posisinya dalam daftar. Fungsi hash adalah fungsi yang memanipulasi kunci item data dalam daftar untuk mengidentifikasi posisi aslinya dalam daftar. Fungsi ini mengalokasikan daftar data yang diubah ukurannya  ke ukuran tetap. Nilai kembalian  fungsi hash disebut nilai hash [5]. 

Tabel hash adalah struktur data yang terdiri dari tabel dan fungsi yang tujuannya adalah memetakan nilai kunci unik  setiap record ke nomor (hash) posisi record  dalam tabel. Kelebihan struktur tabel hash  ini adalah waktu aksesnya sangat cepat jika record yang dicari langsung terdapat pada nomor hash di lokasi tersebut. Rephrase Namun dalam praktiknya, kamu akan sering menemukan tabel hash  yang catatannya memiliki nomor hash yang sama (bertabrakan). Pemetaan fungsi hash  yang digunakan bukanlah pemetaan satu-ke-satu (dapat menghasilkan nomor hash yang sama antara dua record yang tidak sama), sehingga dapat terjadi tabrakan saat menempatkan record yang ada. Untuk mengatasi masalah ini, Anda harus menerapkan kebijakan resolusi konflik untuk menentukan posisi rekaman dalam tabel. Kebijakan penyelesaian konflik umumnya memeriksa tabel  kosong di lokasi setelah lokasi konflik. Tabel hash menggunakan memori  utama berupa array dengan tambahan algoritma untuk mempercepat pengolahan data. Pada dasarnya tabel hash adalah penyimpanan data yang menggunakan nilai kunci yang berasal dari nilai data itu sendiri. Nilai hash ditentukan menggunakan nilai kunci ini. Dengan kata lain, fungsi hash adalah fungsi sederhana yang menghitung nilai hash  dari nilai kunci data [6].

Hal - hal yang perlu di perhatikan dalam membuat "Hash FUnction":  
- Table size(m)
- Key value (k)
- Hash index (h) [4].

### Contoh Priority Queue:
```C++
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 5;

struct Mahasiswa
{
    string name;
    long NIM;
    int grade;
    Mahasiswa *next; 

    Mahasiswa(string nama, long NIM, int nilai) : name(nama), NIM(NIM), grade(nilai), next(nullptr) {}
};

class HashTable
{
private:
    Mahasiswa **table; 
    int hash_func(long key)
    {
        return key % MAX_SIZE;
    }

public:
    HashTable()
    {
        table = new Mahasiswa *[MAX_SIZE](); 
    }

    ~HashTable()
    {
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            Mahasiswa *current = table[i];
            while (current != nullptr)
            {
                Mahasiswa *temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    
    void insert(string nama, long NIM, int nilai)
    {
        int index = hash_func(NIM);                                 
        Mahasiswa *new_mahasiswa = new Mahasiswa(nama, NIM, nilai); 
        new_mahasiswa->next = table[index];                         
        table[index] = new_mahasiswa;
    }

    void remove(long NIM)
    {
        int index = hash_func(NIM);        
        Mahasiswa *current = table[index]; 
        Mahasiswa *prev = nullptr;         
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                if (prev == nullptr)
                {
                    table[index] = current->next; 
                }
                else
                {
                    prev->next = current->next; 
                }
                delete current; 
                cout << "Mahasiswa dengan NIM " << NIM << " telah dihapus." << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan." << endl;
    }

    Mahasiswa *cari_NIM(long NIM)
    {
        int index = hash_func(NIM); 
        Mahasiswa *current = table[index]; 
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                return current; 
            }
            current = current->next;
        }
        return nullptr;
    }

    void cari_nilai(int awal, int akhir)
    {
        cout << "+---------------------+-----------------+---------------+" << endl;
        cout << "|       Name          |       NIM       |     Grade     |" << endl;
        cout << "+---------------------+-----------------+---------------+" << endl;
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            Mahasiswa *current = table[i]; 
            while (current != nullptr)
            {
              
                if (current->grade >= awal && current->grade <= akhir)
                {
                    cout << "| " << setw(19) << left << current->name
                         << "| " << setw(15) << current->NIM
                         << "| " << setw(13) << current->grade << " |" << endl;
                }
                current = current->next;
            }
        }
        cout << "+---------------------+-----------------+---------------+" << endl;
    }

    void traverse()
    {
        cout << "+---------------------+-----------------+---------------+" << endl;
        cout << "|       Name          |       NIM       |     Grade     |" << endl;
        cout << "+---------------------+-----------------+---------------+" << endl;
      
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            Mahasiswa *current = table[i]; 
            while (current != nullptr)
            {

                cout << "| " << setw(19) << left << current->name
                     << "| " << setw(15) << current->NIM
                     << "| " << setw(13) << current->grade << " |" << endl;
                current = current->next;
            }
        }
        cout << "+---------------------+-----------------+---------------+" << endl;
    }
};

int main()
{
    HashTable ht;

    int pilih, nilai, awal, akhir;
    string nama;
    long long NIM;

    do
    {
        cout << "\nMenu:" << endl;
        cout << "1. Menambahkan Data Mahasiswa" << endl;
        cout << "2. Menghapus Data Mahasiswa" << endl;
        cout << "3. Mencari berdasarkan NIM" << endl;
        cout << "4. Mencari berdasarkan Nilai" << endl;
        cout << "5. Menampilkan Semua Data" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            cout << "Masukkan nama : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan NIM : ";
            cin >> NIM;
            cout << "Masukkan nilai : ";
            cin >> nilai;
            ht.insert(nama, NIM, nilai);
            cout << "Data berhasil ditambahkan" << endl;
            break;
        case 2:
            cout << "Masukkan NIM yang ingin dihapus : ";
            cin >> NIM;
            ht.remove(NIM);
            break;
        case 3:
            cout << "Masukkan NIM yang ingin dicari : ";
            cin >> NIM;
            {
                Mahasiswa *mahasiswa_ptr = ht.cari_NIM(NIM);
                if (mahasiswa_ptr)
                {
                    cout << "Ditemukan mahasiswa dengan NIM " << NIM << " bernama " << mahasiswa_ptr->name << 
                    " dan memiliki nilai " << mahasiswa_ptr->grade << endl;
                }
                else
                {
                    cout << "Mahasiswa dengan NIM " << NIM << " tidak ditemukan" << endl;
                }
            }
            break;
        case 4:
            cout << "Masukkan nilai awal : ";
            cin >> awal;
            cout << "Masukkan nilai akhir : ";
            cin >> akhir;
            ht.cari_nilai(awal, akhir);
            break;
        case 5:
            ht.traverse();
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilih != 6);

    return 0;
}
```
#### Output:
![Screenshot 2024-06-22 142119](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/d5d5e4b1-564f-4755-8b65-31f8fa9bc62a)

Interpretasi:
Interpretasi: Program diatas adalah program "Hash Table", struktur data ini menggunakan teknik penambahan, penghapusan, dan pencarian dengan menggunakan constant average time. Ukuran Hash table (H-size) biasanya lebih besar dari jumlah data yang hendak disimpan. Hash tabel juga memiliki "Load Factor" untuk membandingkan antara data yang disimpan dengan ukuran tablenya. Tujuan program ini untuk mengetahui bahwa setiap key yang digunakan untuk memetakan kunci pada bilangan dalam rentang 0 hingga H size -1, dan tujuan lain supaya pengguna memahami fungsi dari materi struktur data ini.

> Fungsi kode program diatas:
- "insert(string nama, long NIM, int nilai)" -> untuk menyisipkan data (nama) data (NIM), dan data (nnilai) ke dalam hash map. Jika kunci dalam hash map sudah ada, maka nilai akan diupdate, begitupun sebaliknya. Jika kunci dalam hash map tidak ada, maka akan membuat node baru dan disimpan ke dalam ektor.
- "remove(long NIM)" -> untuk menghapus data (NIM) dari hash map berdasarkan NIM. Jika kunci ditemukan, maka node akan dihapus dari vektor tersebut.
- "cari_nilai(int awal, int akhir)" -> untuk mencari nilai sesuai berdasarkan urutan nilai di awal dan nilai di akhir.
- "traverse()" -> untuk menampilkan semua data mahasiswa dalam hash table.

>Cara kerja program diatas:
- Pertama, masukkan dulu kode yang ada di hash table, lalu masukkan nama mahasiswa, NIM, serta nilai mahasiswa, lalu urutkan lagi sesuai kamu mau masukkin berapa mahasiswa.
- Kedua, setelah udah dimasukkan dan diurutkan, kamu bisa langsung next ke list berikutnya yaitu list "menghapus data mahasiswa", setelah itu data akan otomatis terhapus dari hash map atau hash table.
- Ketiga, setelah itu kita pergi ke list no 3 "mencari berdasarkan NIM", list tersebut akan meminta "NIM cari sendiri".
- Keempat, setelah itu kita bisa pergi lagi ke list no 4,"mencari berdasarkan nilai", nah nilai disini yang dimasukkan itu (nilai akhir) dan (nilai awal), dan otomatis mengeluarkan output dalam berbentuk tabel.
- Dst ya...

### REKURSIF 

Rekursif ialah suatu proses yang memanggil dirinya sendiri. Dalam rekursif sebenarnya mengandung pengertian prosedur atau fungsi, tetapi yang menjadi perbedaan kalau rekursif bisa memanggil dirinya sendiri, sedangkan prosedur harus dipanggil lewat pemanggil prosedur. Rekursi merupakan suatu teknik dalam dunia matematika dimana definisi suatu fungsi mencakup fungsi itu sendiri. Dalam dunia pemrograman, rekursi diimplementasikan pada fungsi yang memanggil itu sendiri [7]. 

Definisi rekursif selalu dimulai dengan kasus penghentian, penghenti,  atau kasus dasar dari suatu masalah.Dalam hal ini terjadi jika nilai y = 0. Definisi rekursif yang lebih kompleks mengandung esensi pemecahan masalah, namun lebih sederhana. Dalam hal ini, dulu x dipangkatkan  y, namun sekarang bentuk dipangkatkan y menjadi lebih sederhana: y – 1. Hal ini dimaksudkan untuk "memandu" masalah kompleks ke  kasus dasar atau penghenti rekursinya [8].

Contoh:
Bagaimana kita dapat mendefnisikan fungsi faktorial 
f(n) = n!
f(0) = 1

karena (n+1)! = n!(n+1) maka
       f(n+1) = (n+1)f(n)

f(0) = 1
f(1) = 1 -> f(0) = 1.1 = 1
f(2) = 2 -> f(1) = 2.1 = 2
f(3) = 3 -> f(2) = 3.2 = 6
f(4) = 4 -> f(3) = 4.6 = 24

![Screenshot 2024-06-22 140844](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/40aded9f-4361-4b44-a807-f4ebaf957b4e)

##### Contoh Rekursif:
```C++
#include<iostream>
using namespace std;

void rekursif(int a){
    if(n > 0){
        cout << "ini adalah rekursif, materi alstrukdat yang ke-10" << endl;
        n--;
        rekursif(n);
    }
}

int main(){
    rekursif(3);
}
```
#### Output:
![Screenshot 2024-06-22 143311](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/f1a1dc7c-4449-4c65-9457-2286c930ae76)

Interpretasikan:
Program diatas adalah program rekursif.
ketika kita ingin memanggil berapa banyak rekursif tersebut dengan memakai kode "rekursif()", maka kita berikan integer untuk menampilkan jumlah datanya. kode "n--;" kenapa bisa (--)? agar supaya N bernilai 0. Lalu setelah itu kita manggil materi itu sendiri.  

penjelasan output:
jadi program diatas yaitu untuk mencetak kata "ini adalah rekursif, materi alstrukdat yang ke-10", nah sebelum mencetak kita masukkan terlebih dahulu jumlah data yang mau dicetak dengan menggunakan kode "rekursif(3)", setelah itu output akan keluar deh. 

### GRAPH AND TREE

##### Tree 
Pohon adalah jenis struktur data linier dengan pola mirip pohon. Jenis data ini termasuk  dalam struktur data hierarki karena sering  digunakan untuk menyimpan dan mengatur data pada tingkat yang berbeda. Oleh karena itu, tipe ini sering dilihat sebagai kumpulan node yang saling berhubungan. Setiap node terdiri dari beberapa data atau link dari node lain. Pohon biner adalah  istilah yang umum digunakan untuk jenis ini, dimana setiap node mempunyai hingga dua anak: anak kiri dan anak kanan. Pohon biner sering kali diimplementasikan menggunakan tautan. 

![Screenshot 2024-06-22 141134](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/f859e20f-dc90-41a5-9ec0-6a3c439437b7)

> Istilah lain yang termasuk dalam jenis ini adalah: 
a. Root = simpul teratas. 
b. Node Anak / Child Node = anak dari setiap node. 
c. Node Induk / Parent Node = simpul, simpul anak berisi.
d. Siblings = node yang berasal dari node induk yang sama
e. Simpul daun = simpul yang sudah tidak mempunyai keturunan lagi.
f. Node internal=node  dengan setidaknya satu node anak. 
g. Tepi / Edge = garis yang menghubungkan dua titik simpul pada pohon.
h. Tinggi Simpul = jumlah tepi dari simpul hingga simpul daun terdalam.
i. Kedalaman Simpul = jumlah tepi dari akar ke simpul.
j. Tinggi Pohon = panjang jalur terpanjang dari simpul akar ke simpul daun pohon.
k = Derajat Simpul = jumlah cabang yang terhubung pada simpul tersebut.
l. Subpohon = setiap simpul pohon dan turunannya.

- Keuntungan = Proses pengambilan data  cepat dan efisien, dapat melintasi subpohon dengan sedikit usaha, mencerminkan hubungan data struktural, dan sangat cocok untuk membangun hierarki data. 

- Kerugian = Entri data memakan waktu  lama karena harus menyesuaikan dengan urutan nilai [9].

##### Graph 

Grafik adalah jenis struktur data yang terdiri dari berbagai node yang saling berhubungan. Node jenis ini disebut node, dan terdapat garis-garis yang menghubungkan  setiap node. Tipe ini biasanya digunakan  untuk membangun jaringan tertentu, seperti jaringan komputer atau jaringan telepon. Grafik mendeskripsikan kumpulan objek yang pasangan objeknya dihubungkan melalui tautan. Objek yang saling berhubungan diwakili oleh titik-titik yang disebut simpul, dan hubungan yang menghubungkan simpul-simpul tersebut disebut tepi. Di dunia nyata, grafik atau Google Maps sering digunakan saat mengikuti rute pendek. Grafik diklasifikasikan menjadi dua jenis: grafik berarah dan grafik tidak berarah. Graf berarah = garis yang menghubungkan semua simpul. Sedangkan graf tak berarah = tidak semua simpul dihubungkan oleh garis. Jika suatu simpul tidak terhubung dengan simpul lain maka disebut simpul yatim piatu (orphan vertex). Advantage = Membantu melihat hubungan antar node dengan cepat, dan juga cocok  untuk diagram yang tidak memuat banyak  node. Kerugian = Mengubah data membutuhkan waktu [9].

![Screenshot 2024-06-22 141215](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/f60946d9-f9d9-4af7-a40a-84d094d79a63)

### Contoh Graph and Tree:
```C++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Graph {
    vector<string> simpul_graph;
    vector<vector<int>> bobot_graph;
};

int main() {
    int jumlah_simpul;
    int nama_2311110018;
    
    cout << "Masukkan Jumlah Simpul: ";
    cin >> jumlah_simpul;
    
    Graph graf;
    graf.simpul_graph.resize(jumlah_simpul);
    graf.bobot_graph.resize(jumlah_simpul, vector<int>(jumlah_simpul));
    
    cout << "Masukkan Nama Simpul" << endl;
    for (int i = 0; i < jumlah_simpul; ++i) {
        cout << "Simpul " << i+1 << " : ";
        cin >> graf.simpul_graph[i];
    }
    
    cout << "Masukkan Bobot Antar Simpul" << endl;
    for (int i = 0; i < jumlah_simpul; ++i) {
        for (int j = 0; j < jumlah_simpul; ++j) {
            cout << graf.simpul_graph[i] << "-->" << graf.simpul_graph[j] << " = ";
            cin >> graf.bobot_graph[i][j];
        }
    }
    
    
    cout << "\t";
    for (int i = 0; i < jumlah_simpul; ++i) {
        cout << graf.simpul_graph[i] << "\t";
    }
    cout << endl;
    
    for (int i = 0; i < jumlah_simpul; ++i) {
        cout << graf.simpul_graph[i] << "\t";
        for (int j = 0; j < jumlah_simpul; ++j) {
            cout << graf.bobot_graph[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
```
#### Output:
![Screenshot 2024-06-22 142228](https://github.com/DestinaBektiSetyaningsih/Teory-Structure-Praktikum-Assignment-/assets/162566980/f0144a8e-6e66-4c95-bea0-cc80e52dae72)

Interpretasi:
Interpretasi: Program diatas adalah program untuk membuat graph, yang dimana dalam graph tersebut terdapat simpul dan bobot graph. Tujuan program ini dibuat supaya pembaca dapat memahami materi Graph ini, dan mengetahui bahwa graf bisa untuk menggambarkan koneksi antar pulau di Palu dan di Bali.

Cara kerja program diatas = cara kerjanya yaitu pertama kita masukkan terlebih dahulu jumlah simpulnya yaitu (2), lalu kita masukkan nama simpul 1 (BALI) dan simpul 2 (PALU), setelah itu tentukan bobot antar simpul, bobot ini di ibaratkan dengan titik jarak wilayah A dengan wilayah B, seperti wilayah BALI - BALI = 0, BALI - PALU = 3, PALU - BALI = 4, dan PALU - PALU = 0. Nah selesai deh, setelah itu bobot akan membentuk sebuah matriks, jadi kita tahu bahwa jarak dari BALI - PALU yaitu 3, dan PALU - BALI = 4, sedangkan PALU - PALU = 0 dan BALI - BALI = 0, karena ya di ibaratkan titik wilayah A bertemu dengan A jadi 0, begitupun dengan wilayah B bertemu dengan B jadi 0 juga.

> Kode diatas memiliki beberapa fungsi, seperti:
- "simpul_graph" -> sebuah vektor string yang bisa untuk menyimpan nama - nama dalam simpul graf tersebut.
- "bobot_graph" -> sebuah vektor integer yang bisa untuk menyimpan bobot - bobot dalam simpul graf tersebut.

## Referensi 
[1] Furqan, An. “Heap & Priority Queue Struktur Data.” Www.academia.edu, www.academia.edu/9951798/Heap_and_Priority_Queue_Struktur_Data. Accessed 21 June 2024.

[2] AMANDA, TANIA FIDELA. “Stack, Queue, Priority Queue | PDF.” Scribd, www.scribd.com/document/517079990/STACK-QUEUE-PRIORITY-QUEUE. Accessed 21 June 2024.

[3] PRATAMA, RICZKY. “Priority Queue: Konsep Dan Penggunaan Dalam Algoritma.” Medium, 22 July 2023, medium.com/@furatamarizuki/priority-queue-konsep-dan-penggunaan-dalam-algoritma-f4c1cd117ba. Accessed 21 June 2024.

[4] baskoro, fajar. “Fajarbaskoro: Hash Table.” Fajarbaskoro, fajarbaskoro.blogspot.com/2021/06/hash-table.html. Accessed 19 June 2024. 

[5] Modul Online http://aren.cs.ui.ac.id/sda/resources/sda2010/15_hashtable.pdf 

[6] Studocu. (n.d.). Summary Hash Table - MODUL HASH TABLE by:  Andreas Putra Wijaya  Christopher Putra  Stefano - Studocu. https://www.studocu.com/id/document/universitas-pelita-harapan/struktur-data-konsentrasi-matematika-komputasi/summary-hash-table/28853068

[7] M.TI, Anita Sindar RMS, ST. STRUKTUR DATA DAN ALGORITMA DENGAN C++. Google Books, CV. AA. RIZKY, 28 Nov. 2019, books.google.co.id/books?hl=en&lr=&id=GP_ADwAAQBAJ&oi=fnd&pg=PR7&dq=fungsi+rekursif+bahasa+c%2B%2B&ots=86f5Uu4MbV&sig=fYVQEJbnpCIjoQXGkdSYClouta8&redir_esc=y#v=onepage&q=fungsi%20rekursif%20bahasa%20c%2B%2B&f=false. Accessed 22 June 2024. 

[8] Modul Online https://sisfo.itp.ac.id/bahanajar/BahanAjar/Harison/6%20rekursif%20%20induksi%20matematik.pdf 

[9] https://www.google.co.id/books/edition/DASAR_PEMROGRAMAN_Teori_Aplikasi/HZnCEAAAQBAJ?hl=en&gbpv=1&dq=materi+graph+and+tree+dalam+struktur+data&pg=PA52&printsec=frontcover