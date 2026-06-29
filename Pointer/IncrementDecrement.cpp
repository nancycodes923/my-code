#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,};

    int a=10;
    int*ptr = &a;

    cout<<ptr<<endl;
    ptr++; // ptr--; for decrement
    cout<<ptr<<endl;// +4 because of int data type
    return 0;//-4 in decrement int data type
}
// cout<<*arr<<endl; // pointer => 1
//cout<<*(arr+1)<<endl; // pointer => 2
// cout<<*(arr+2)<<endl;// pointer =>3 