#include <iostream>
#include <string>


std::string::iterator searchForVowel() {

}

std::string reverseVowels(std::string str) {
    std::string vowels = "AaEeIiOoUu";
    std::string::iterator begin = str.begin(), end = str.end();

    for (unsigned i = 0; i < str.size(); i++) {
    }

    return str;
}

int main() {
    std::cout << reverseVowels("hello") << std::endl;
    return 0;
}