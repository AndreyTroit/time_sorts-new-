#include "arraywork.hpp"

using namespace std;

void swap(int& a, int& b){
    int s = a;
    a = b;
    b = s;
}

void randomFill(int* ar, int size, int minel, int maxel){
    srand(time(nullptr));
    for(int i = 0; i < size; i++){
        ar[i] = (rand() % (maxel - minel)) + minel;
    }
}

void showEl(int* ar, int size){
        for(int i = 0; i < size; i++){
                cout << ar[i] << ' ';
        }
        cout << '\n' << endl;
}

