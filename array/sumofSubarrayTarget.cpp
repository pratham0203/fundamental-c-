#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    int n;
    int s;
    cout<<"Enter the number of Elements"<<endl;
    cin>>n;
    cout<<"Enter the Number Sum"<<endl;
    cin>>s;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0,j=0,en=-1, st=-1, sum=0;

    while(j<n && sum+arr[j]<=s){
    sum = sum+arr[j];
    j++;
    }

    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
    }
    while(j<n){
        sum = sum+arr[j];
        while(sum>s){
            sum = sum - arr[i];
            i++; 
        }
        if(s==sum){
            st =  i+1;
            en = j+1;
            break;
        }
    j++;
    }

cout<<st<<" "<<en<<endl;
    return 0;
}