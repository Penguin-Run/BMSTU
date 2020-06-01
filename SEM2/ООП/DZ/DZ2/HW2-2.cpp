// ANSII:  https://www.learncpp.com/cpp-tutorial/chars/

#include <iostream>
#include <stdlib.h>
#include <string>

typedef struct coding {
    std::string st;
    std::string code;
    std::string encrypted_st;
}coding;

void st_input(coding &code) {
    getline(std::cin, code.st);
    getline(std::cin, code.code);
}

std::string encryption(coding &code) {
    for (int i = 0; i < code.st.size(); i++) {
        char t = code.code[i];
        if ((code.st[i] + atoi(&t)) < 127) {
            code.encrypted_st.push_back((char)((int)code.st[i] + (int)atoi(&t)));
        }
    }
    std::cout << code.encrypted_st << std::endl;
    return code.encrypted_st;
}

std::string decryption(coding &code) {
    std::string decrypted;
    for (int i = 0; i < code.encrypted_st.size(); i++) {
        char t = code.code[i];
        if (code.encrypted_st[i] != 95) decrypted.push_back((char)((int)code.encrypted_st[i] - (int)atoi(&t)));
    }
    std::cout << decrypted << std::endl;
    return decrypted;
}


int main() {
    coding code = {"", "", ""};
    st_input(code);

    encryption(code);

    decryption(code);

    return 0;
}


// Tests:
// Joe is missing
// 312 34 4731453

// Viral lonely to sea
// 31206 312061 12 063