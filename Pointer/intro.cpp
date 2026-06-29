#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a= 10;
    int* ptr = &a; // pointer variable that holds
    // the address of variable a
     int** parPtr2 = &ptr;

    cout<< &ptr<<endl;
    cout<< parPtr2<<endl;
    return 0;
}
