#include<iostream>
using namespace std;

int main(){
    string s; int i;
    cout << "Enter string: ";
    cin >> s;

    //hasing
    int jash[26]={0};
    for(i=0;i<s.size();i++){
        jash[s[i]-'a']++;
    }

    int x;
    cout << "Enter number of elements u want to fetch";
    cin >> x;
    for(i=0;i<x;i++){
        char c;
        cin >> c;
        cout<< jash[c-'a'] << endl ;
    }
    return 0;
}