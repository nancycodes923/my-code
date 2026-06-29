#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int> :: iterator it;/* to remove this add auto in next line 
    like in backward we did /*/

    for( it = vec.begin(); it != vec.end(); it++){// for forward
        cout << *(it)<< " ";
    }

    cout<<endl;
    return 0;
}
/* for backward iteration
for (auto it = vec.rbegin(); it != vec.rend(); it++){
}/*/