#include<iostream>
#include<stdio.h>
using namespace std;
int reverse(int num){
    int rem=0;
    int ans=0;
    while(num>0){
        rem = num % 10;
        ans = ans*10 +rem;
        num = num/10;
    }
    return ans;
}
int BinarySum(int x, int y){
    int ans=0;
    int prevCarry=0;
    while(x>0 && y>0){
        if(x%2==0 && y%2==0){
            ans = ans*10 + prevCarry;
            prevCarry=0;
        }
        else if(x%10 == 1 && y%10 == 0 || x%10 == 0 && y%10 == 1){
            if(prevCarry==1){
                ans = ans*10 + 0;
                prevCarry =1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry=0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        x = x/10;
        y = y/10;
    }
    while (x>0)
    {
        if(prevCarry==1){
                if(x%10==1){
                    ans = ans*10 +0;
                    prevCarry = 1;
                }
                else{
                    ans = ans*10 +1;
                    prevCarry =0;

                }
        }
        else{
            ans = ans*10 + (x%10);
        }
        x= x/10;
    }
    while (y>0)
    {
        if(prevCarry==1){
                if(y%10==1){
                    ans = ans*10 +0;
                    prevCarry = 1;
                }
                else{
                    ans = ans*10 +1;
                    prevCarry =0;

                }
        }
        else{
            ans = ans*10 + (y%10);
        }
        y = y/10;
    }
    if(prevCarry==1){
        ans = ans*10 + 1;
    }
    int n_ans = reverse(ans);
    return n_ans;
}
int main(){
    int a,b;
    system("CLS");
    cout<<"Enter the 2 Binary numbers to add: "<<endl;
    cin>>a>>b;
    cout<<"The Sum is:\n"<<BinarySum(a,b);
    return 0;
}