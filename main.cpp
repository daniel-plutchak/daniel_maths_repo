#include <iostream>
using namespace std;

void power(int base, int exp);

int main(){
    cout << "GitHub Test" << endl;
    power(5, 3);
    return 0;
}

void power(int base, int exp) {
    int val = 1;
    for (int i = 0; i < exp; ++i) {
        val *= base;
    }
    cout << val << endl;
}