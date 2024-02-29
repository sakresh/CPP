// This program finds whether the given IP address is a valid IPV4 address or not. If valid return 1 else return 0

#include <bits/stdc++.h>
using namespace std;

int main(){
    string ip = "222.111.111.111";
    int pos = 0;
    int count = 0;
    int i;
    for(i = 0; i < ip.length(); i++){
        if(ip[i] == '.'){
            if(stoi(ip.substr(pos, i)) >= 0 || stoi(ip.substr(pos, i)) <= 255 ){
                count++;
                if(count == 3) break;
            }
        }
    }
    if(stoi(ip.substr(i+1,ip.length())) >= 0 || stoi(ip.substr(i+1,ip.length())) <= 255 ){
        count++;
    }
    if(count == 4){
        cout<<"1"<<'\n';
    }
    else{
        cout<<"0"<<'\n';
    }
}
