#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=3,k=1;
    vector<vector<int>> mat(n,vector<int>(n));
    int top,left,right,bottom,row,col;
    top=left=0;
    right=n-1;
    bottom=n-1;
    while(top<=bottom && left<=right){
        // top represents the starting row index
        // bottom represents the ending row index
        // left represents the starting col index
        // right represents the ending col index

        for(int i=left;i<=right;i++){
            mat[top][i]=k;
            k++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            mat[i][right]=k;
            k++;
        }
        right--;

        if(top<=bottom){
        for(int i=right;i>=left;i--){
            mat[bottom][i]=k;
            k++;
        }
        bottom--;
        }

        if(left<=right){
        for(int i=bottom;i>=top;i--){
            mat[i][left]=k;
            k++;
        }
        left++;
        }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}