#include<iostream>
#include<stdio.h>
using namespace std;
int NaturalSum(int num){
    int sum=(num*(num+1)/2);
    return sum;
}
int main(){
    int n;
    system("CLS");
    cout<<"Enter n to find the sum of first n natural numbers: ";
    cin>>n;
    cout<<"The Sum of first "<< n <<" natural number is: "<<NaturalSum(n);
    return 0;
}