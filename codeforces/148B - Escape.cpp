#include <iostream>

using namespace std;

int main()
{
    int vp,vd,t,f,c,count=0;
    double dis_p=0,dis_d=0,time_catch=0,time_return=0;
  cin>>vp>>vd>>t>>f>>c;
  if(vd<=vp){cout<<0<<endl;goto end;}
  dis_p+=vp*t;
while(dis_p<c){
    time_catch=dis_p/(vd-vp);
    dis_p+=time_catch*vp;
    if(dis_p>=c)break;
    dis_d=dis_p;
    count++;
    time_return=vd/dis_d + f;
    dis_p+=time_return*vp;
}
cout<<count<<endl;
end:
    return 0;
}
