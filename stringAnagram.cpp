#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="Army";
    string s2="mary";
    int map[26] = {0};
    for(auto ch: s1){
        int index = tolower(ch)-'a';
        map[index] = 1;
    }
    int count=0;
    for(auto ch: s2){
        int index = tolower(ch)-'a';
        if(map[index] == 1) count++;
    }
    if(count == s1.length()) cout<<"It is an Anagram";
    else cout<<"Not an Anagram";
}

