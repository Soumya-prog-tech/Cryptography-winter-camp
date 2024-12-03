#include<iostream>

using namespace std;
const int M = 1e9 + 7; // This M is used to prevent overflow
//Recurrsive method 
//Time complexity - o(log(b))
int binexporecurr(int a,int b)
{
     
     
    
     if(b==0) return 1;
      int res = binexporecurr(a,b/2);
     if(b&1)   //b&1 is 1 if b is odd and 0 if b is even
     {
         return (a*((res*1ll*res)%M))%M; // 1ll is used to convert the multiplication into long type
     }
     else
     {
        return (res*1ll*res)%M; // 1ll is used to convert the multiplication into long type
     }
     
}
int main() 
{
    int a,b;
    cin>>a>>b;
    cout<<binexporecurr(a,b);
}
