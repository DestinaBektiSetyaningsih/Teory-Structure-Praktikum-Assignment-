#include <iostream>
#include <stack>

using namespace std;

// Struktur node linked list
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