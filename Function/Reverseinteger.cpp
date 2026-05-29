#include<iostream>
using namespace std;
int reverse(int n){
    int rev= 0;
    while (n!=0)
    {
        int digit = n%10;
        cout<<digit<<endl;
        rev = rev*10 + digit;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<endl;
    cout<<"Reversed number is: "<<reverse(n)<<endl;
    return 0;
}