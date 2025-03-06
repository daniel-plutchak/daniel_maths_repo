#include <iostream>
using namespace std;

void square(int val);

int main(){
    cout << "GitHub Test" << endl;
    square(5);
    return 0;
}

void square(int val) {
    cout << val * val << endl;
}