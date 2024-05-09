#include <iostream>
using namespace std;

void swap(int *x, int *y); // function declaration

int main() {
    int varA = 25;
    int varB = 100;
    
    cout << "varA before swap: " << varA << endl; // varA is 25
    cout << "VarB before swap: " << varB << endl; // varB is 100
    
    swap(&varA, &varB);
    
    cout << "varA after swap: " << varA << endl; // varA is 100
    cout << "VarB after swap: " << varB << endl; // varB is 25
    
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
