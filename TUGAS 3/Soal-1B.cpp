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