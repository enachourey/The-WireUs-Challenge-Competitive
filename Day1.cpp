//continuous column-wise traversal of matrix

#include<iostream>
using namespace std;

int main(){
    cout<<"enter dimension of matrix:";
    int n; cin>>n;

    if(n<=0){
        cout<<"Invalid";
        return 0;
    }

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)  cin>>arr[i][j];
    }

    for(int i=0; i<n; i++){
        if(i&1){
            for(int j=n-1; j>=0; j--)  cout<<arr[j][i]<<",";
        }
        else{
            for(int j=0; j<n; j++)  cout<<arr[j][i]<<",";
        }
    }
    cout<<"END";

    return 0;
}
