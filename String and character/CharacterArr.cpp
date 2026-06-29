#include<iostream>
using namespace std;

int main(){
 /*   char str[]= "hello"; // string literals

    cout << str[2] << endl; // constant pointers
    return 0;
}/**/
  char str[100];

  cout <<"enter char aray :";
  cin>> str;// it ignores the spaces and next word in sentence
  // hello world 
  // output will be 
  // hello " it ignores the world"
  // we use cin.getline

  cout << "output:"<< str<< endl;
  return 0;
}