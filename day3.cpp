#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int m= heights.size(), ans=0;
        stack<int> s;
        for(int j=0; j<m; j++) {
            if(s.empty() || heights[s.top()]<heights[j]) s.push(j);
            else {
                while(!s.empty() && heights[s.top()]>=heights[j]) {
                    int ht= heights[s.top()]; s.pop();
                    if(!s.empty()) ans= max(ans, (j-s.top()-1)*ht);
                    else ans= max(ans, j*ht);
                }
                s.push(j);
            }
        }
        while(!s.empty()) {
            int ht= heights[s.top()]; s.pop();
            if(!s.empty()) ans= max(ans, (m-s.top()-1)*ht);
            else ans= max(ans, m*ht);
        }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> heights(n);
    for(int i=0; i<n; i++)  cin>>heights[i];
    cout<<largestRectangleArea(heights);
    return 0;
}
