#include<bits/stdc++.h>
using namespace std;

string asciiDifference(string str){
    string ans;
    int n=str.size();

    for(int i=0; i<n-1; i++){
        ans += str[i];
        ans += to_string(str[i+1]-str[i]);
    }
    ans+=str[n-1];

    return ans;

}

int main(){
    string str;
    cin>>str;
    cout<<asciiDifference(str);
    return 0;
}
