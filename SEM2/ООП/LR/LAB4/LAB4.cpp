#include <iostream>
#include <time.h>


int main() {
    srand(time(NULL));

    int mas[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mas[i][j] = rand() % 200 - 100;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << mas[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    int* adresses[4];
    for (int i = 0; i < 4; i++) {
        int rowMin = RAND_MAX; int rowMinj;
        for (int j = 0; j < 4; j++) {
            if (mas[i][j] < rowMin) {
                rowMin = mas[i][j];
                rowMinj = j;
            }
        }
        // change min with the first element of the row
        int t = mas[i][0];
        mas[i][0] = rowMin;
        mas[i][rowMinj] = t;
        adresses[i] = &mas[i][0];
    }

    // print matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << mas[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << adresses[i] << "  " << std::endl;
    }
    
    return 0;
}