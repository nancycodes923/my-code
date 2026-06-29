#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="Nancy Pandey";// dynamic => runtime resize
    cout<< str<< endl;// contiguous{stored in back to back memory addresses with no gaps}
   for(int i=0; i<str.length(); i++){// for iteration print
    cout << str[i]<< " ";
    // or
    // for(char ch: str){
    // cout<< ch<<" ";
   
}

   
    str= "he,lo";
    cout<< str<<endl;

    char chArr[] = " Nancy Pandey";
    // can't be modified in character
    return 0;
}
/*/ string str;
getline (cin, str);
cout<<"output:"<< str<< endl;// we can input any string fron this 
 string str1 = "Nancy";
string str2 = " Pandey";
string str1 = "nancy";
cout << str1.length()<< endl;
cout<<(str1== str2)<< endl;
cout<<(str1< str2)<<endl;
string str3 = str1 + str2; // concatenation { adding two strings}
cout<< str3 << endl;
/*/
