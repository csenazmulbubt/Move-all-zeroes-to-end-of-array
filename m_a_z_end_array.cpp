#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        vector<int> v;
        for(int i=0;i<n;i++)
            if(arr[i]!=0)
                v.push_back(arr[i]);
        while(v.size()<n)
            v.push_back(0);
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

}

}
