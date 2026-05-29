#include<iostream>
using namespace std;
int fibonacci(int n){
int a=0,b=1;
for(int i=1;i<=n;i++){
    int next = a+b;
    a=b;
    b=next;
}
return a;
}
int main(){
    int n;
    cin >> n;
    cout<<fibonacci(n)<<endl;
    return 0;
}
    