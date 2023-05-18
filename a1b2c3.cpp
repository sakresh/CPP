#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char ch[10];
    cin>>ch;
    vector<char> c;
    vector<int> n;
    int i=0;
    while(ch[i]!='\0'){
        if(isalpha(ch[i])){
            c.push_back(ch[i]);
        }
        else{
            n.push_back(((int)ch[i])-48);
        }
        i++;
    }
    for(int k=0;k<c.size();k++){
        for(int j=0;j<n[k];j++){
            cout<<c[k];
        }
    }
}