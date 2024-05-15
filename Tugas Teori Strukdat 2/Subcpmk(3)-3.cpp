/// Jawaban CPMK 3 Nomer 3

#include <iostream>
#include <vector>
#include <algorithm>

int searchWord(const std::vector<std::string>& words, const std::string& word) {
    int left = 0;
    int right = words.size() - 1;

    // binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // skip empty strings
        while (mid < words.size() && words[mid].empty()) {
            mid++;
        }

        // check if word is found
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