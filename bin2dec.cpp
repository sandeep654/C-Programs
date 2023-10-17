#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number ";
    cin>>num;

    int rem,ans=0,mul=1;

    while(num)
    {
       // reminder
        rem= num%2 ;
    
     
       //answer
       ans+=rem*mul ;


       //multiple by 10
       mul*=10 ;
       
     //quotient
         num/=2; }
    cout<<"Binary of a number is "<<ans; 
}