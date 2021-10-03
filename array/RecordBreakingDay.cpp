#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    system("CLS");
    int n;
    int ans=2;
    int count = 0;
    int mx=0;
    cout<<"Enter the Length of array: "<<endl;
    cin>>n;
    
    int arr[n];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            if(arr[i]>arr[i+1]){
                count++;
            }
        }
        mx = max(mx,arr[i]);
    }
    cout<<count;
    return 0;
}