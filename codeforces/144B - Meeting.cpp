#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int xa,ya,xb,yb,n,flag_out=0;
    cin>>xa>>ya>>xb>>yb>>n;
   vector<pair<int,int>> cord (n);
   vector<int> rad(n);
   for(int i=0;i<n;i++){
    cin>>cord[i].first>>cord[i].second>>rad[i];
   }
   int no_generals=(abs(xb-xa)+1)*2+2*(abs(ya-yb)-1);

    for(int r=min(xa,xb);r<=max(xa,xb);r++){
        for(int c=min(yb,ya);c<=max(ya,yb);c++){
                if(r!=xa && r!=xb && c!=ya && c!=yb)continue;
                for(int j=0;j<n;j++){
            if(sqrt(pow(cord[j].first-r,2)+pow(cord[j].second-c,2))<=rad[j]){
                no_generals--;
                break;
            }
                }
        }
    }
   cout<<no_generals;
    return 0;
}
