//Split words of a camel case string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str; cin>>str;
    int n=str.size();
    string word;

    for(int i=0; i<n; i++){
        if(isupper(str[i])){
            cout<<word<<endl;
            word= str[i];
        }
        else    word+=str[i];
    }
    cout<<word;
    return 0;
}
