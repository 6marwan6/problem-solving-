#include <iostream>
#include <iomanip>
using namespace std;
int gcd(int a, int b)
{
    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
int main()
{
    int step,mode;

    while(cin>>step >>mode){

   if( gcd( step,mode)==1)  {cout<<setw(10)<<step<<setw(10)<<mode<<"    ";
   cout<<"Good Choice\n\n";
   }

   else cout<<setw(10)<<step<<setw(10)<<mode<<"    "<<"Bad Choice\n\n";

    }
    return 0;
}
