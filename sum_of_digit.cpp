#include<iostream>
using namespace std;

int main(){

 int num;
 cout<<"Enter a number ";
 cin>>num;
/*
 while(num){
  // remainder
  rem=num%10;

  //Quotient
  num /=10;
  // answer
  ans+=rem ;
 }
cout<<"Sum of digits of a number "<<ans<<endl;

  while(ans){
    int output,x;
  // remainder
  x=ans%10;

  //Quotient
  ans /=10;
  // answer
  output+=x ;
  }

 cout<<"sum of digits in single digit  "<<output;
 */
while(num>9){
    int ans=0,rem;
while(num)
{  
rem=num%10;
num= num/10;
ans= ans+rem;
}
num=ans;
}
cout<<"sum of digits of number in single digit "<< num;
}