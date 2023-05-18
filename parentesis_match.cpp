#include <bits/stdc++.h>
using namespace std;

int main() {
    string ch;
    cin>>ch;
    int c=0;
    for(auto i:ch){
        if(i=='(') c++;
        if(i==')') c--;
    }
    cout<<(c==0);
}