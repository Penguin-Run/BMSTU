#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str, str0;
    std::getline (std::cin,str);
    str0 = str;

    std::vector<std::string*> deleted_words;

    int i = 0;
    std::string p; bool is_oo = 0;
    while (str[i]) {
        if ((str[i] == ' ') || (i == str.size()-1)) {
            if ((p.size() != 0) && (is_oo)) {
                    std::string *t = new std::string;
                    *t = p;
                    deleted_words.push_back(t);
                    str.erase(i - p.size(), p.size()+1);
                    i -= p.size()+1;
            }
            p.erase(0, p.size());
            is_oo = 0;
        } else {
            p.push_back(str[i]);
            if (i == str.size()-2) p.push_back(str[i+1]);
            if ((str[i] == 'o') && (str[i+1] == 'o')) is_oo = 1;
        }

        i++;
    }
    std::cout << std::endl;


    std::cout << str0 << std::endl;
    std::cout << str << std::endl << std::endl;

    std::cout << "Deleted words: " << std::endl;
    for (int i = 0; i < deleted_words.size(); i++) {
        std::cout << i+1 << ". " << (*(deleted_words[i])) << std::endl;
        delete deleted_words[i];
    }



    return 0;
}
// swimming pool wool cool mool i agree that wheel is cool butoo ook vool