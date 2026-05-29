#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int num = 1;
    for (int i = 0; i<n; i++) {
        for (int j = 1; j<n; j++) {
            cout << num << " ";
             num ++ ;
        }
        cout << endl;
    }
    cout<<"after the loop num is "<<num<<endl;
    
    return 0;
}