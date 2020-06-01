#include <iostream>
#include <fstream>

using namespace std;


int main() {
    // reading line to write to initial file
    string text;
    getline(cin, text);

    // creating initial file F
    fstream fileF;
    string fileF_name = "F.txt";
    fileF.open(fileF_name, ios::out);
    if (fileF.is_open()) {
        fileF << text << endl;
        fileF.close();
    } else cout << "Could not create file: " << fileF_name << endl;

    // reading from file F
    string text_from_fileF;
    fileF.open(fileF_name, ios::in);
    if (fileF.is_open()) {
        getline(fileF, text_from_fileF);
        fileF.close();
    } else cout << "Could not open file: " << fileF_name << endl;
    cout << "File F text:" << endl << text_from_fileF << endl << endl;

    // parsing text from F to write it in G
    string parsed_text = text_from_fileF;
    for (char & i : parsed_text) {
        if (((int)i >= 65) && ((int)i <= 90)) {
            i = (char)((int)i + 32);
        }
    }

    // writing parsed text to G and printing that text
    fstream fileG;
    string fileG_name = "G.txt";
    fileG.open(fileG_name, ios::out);
    if (fileG.is_open()) {
        fileG << parsed_text << endl;
    } else cout << "Could not create file: " << fileG_name << endl;
    cout << "File G text:" << endl << parsed_text << endl;

    return 0;
}