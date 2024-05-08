#include <iostream>
#include <cstring>

void reverseString(char* str) {
    int length = std::strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        str[i] ^= str[length - i - 1];
        str[length - i - 1] ^= str[i];
        str[i] ^= str[length - i - 1];
    }
}

int main() {
    char message[] = "Hello, World!";
    reverseString(message);

    for (int i = 0; i < std::strlen(message); ++i) {
        std::cout << message[i];
    }

    std::cout << '\n';

    return 0;
}
