#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    int n;
    int ans=2;
    cout<<"Enter the Length of array: "<<endl;
    cin>>n;
    
    int arr[n];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    int pd = arr[1]-arr[0];
    int j = 2;
    int current = 2;

    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            current++;
        }
        else{
            pd = arr[j]-arr[j-1];
            current = 2;
        }
        ans = max(ans,current);
        j++;
    }
cout<<ans;
    return 0;
}