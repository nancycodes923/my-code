#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "Nancy Pandey";

    reverse(str.begin(), str.end());//iterators
    cout<< str<<endl;
    return 0;
}