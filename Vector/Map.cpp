#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;

    m.insert({"camera", 25});
    m.emplace("camera" , 25);
    m.erase("tv");

    for(auto p: m){
        cout<< p.first << " "<< p.second << endl;
    }

    if(m.find("camera") != m.end()){
        cout << "found\n";
    } else{
        cout << "not found\n";
    }

    cout << "count =" << m["laptop"] << endl;
    return 0;
}
