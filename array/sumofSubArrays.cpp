#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    int n;
    int sum=0;
    cout<<"Enter the number of Elements: "<<endl;
    cin>>n;
    int arr[n];
    for(int k =0; k <n; k++){
        cin>>arr[k];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum = sum + arr[j]; 
            cout<<sum<<endl;          
        }
    }
    return 0;
}