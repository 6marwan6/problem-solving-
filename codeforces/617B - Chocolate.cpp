#include <iostream>

using namespace std;

int main()
{
    int n,begin=0,end=0,flag_b=0 ,flag_z=0,flag_one=0,c=0;
    long long count=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    if(arr[i]==1){flag_one=1;
    c++;}
    }
    if(flag_one==0){
        cout<<0;
    return 0;
    }
    if(c<2){
        cout<<c;
        return 0;
    }else{
    for(int i=0;i<n;i++){
            if(arr[i]==1 &&flag_b==0){
                   begin=i;
            flag_b=1;
        }else if(arr[i]==0 && flag_b==1)flag_z=1;
        else if(arr[i]==1 && flag_z==0){
        begin=i;
        }else if(arr[i]==1){
        end=i;
        count *=end-begin;
        begin=i;
        flag_z=0;
        }
    }

    cout<<count;
    }
    return 0;
}
