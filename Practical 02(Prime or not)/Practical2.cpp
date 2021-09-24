#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int N,c;
  cout<<"Enter Number\n";
  cin>>N;

  for(int i=2;i<=sqrt(N);i++)
  {
     if(N%i==0)
     {
         c=0;
         break;
     }
  }   
  if(N==1||N==0)
  {
     cout<<"Not a Prime Number\n";
  }
  else if(c==0)
  {
     cout<<"Not a Prime Number\n";
  }
  else
  {
     cout<<"Prime Number\n";
  }
  
  return 0;
       
}