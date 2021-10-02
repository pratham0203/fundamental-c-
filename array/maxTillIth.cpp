#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    system("CLS");
    int n,ith;
    int max=0;
    cout<<"Enter the number of Elements: "<<endl;
    cin>>n;
    int arr[n];
    for(int k =0; k <n; k++){
        cin>>arr[k];
    }
    cout<<"Enter the ith index"<<endl;
    cin>>ith;

        for(int j=0;j<=ith;j++){
            if(max < arr[j]){
                max = arr[j];
            }
    }
    cout<<"The Max element till "<<ith+1<<" element is "<<max;

    return 0;
}