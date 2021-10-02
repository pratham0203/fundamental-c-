#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    int n=0;
    int max;
    int count=0;
    cout<<"Enter the number of Elements"<<endl;
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    for(int i=0;i<n;i++){
        max = arr[i];
        for(int j=i+1;j<n;j++){
            if(max<arr[j]){
                break;
            }
            else{
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;

}