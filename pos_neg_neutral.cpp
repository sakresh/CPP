#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the values of the array : \n";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    float positive=0,negative=0,neutral=0,len=v.size();
    for(int i=0;i<n;i++){
        if(v[i]>0){
            positive++;
        }
        else if(v[i]<0){
            negative++;
        }
        else{
            neutral++;
        }
    }
    cout<<positive/len<<endl<<negative/len<<endl<<neutral/len;
}