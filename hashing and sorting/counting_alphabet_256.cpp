#include <iostream>
using namespace std;

int main(){
    string s; int i;
    cin >> s;
    
    int hash[256]={};
    for(i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    int x;
    cin >> x;
    for (i=0;i<x;i++){
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}