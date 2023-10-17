#include<iostream>
using namespace std;

int main(){

     int num;
     cout<<"Enter a  number in binary ";
     cin>>num;

     int rem , ans=0 , mul=1;

     while(num>0)
     {
       //reminder
        rem = num%10;
       //quotient 
        num/=10;
       //answer
        ans= rem*mul +ans;
       //multiple
        mul*=2;
     }
     cout<<"Decimal of a number is :"<<ans;
}
