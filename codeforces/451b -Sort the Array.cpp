#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size,begin,end,b_flag=0,no_flag=0,j=0;
    cin>>size;
    int arr[size];
  for (int i=0;i<size;i++)cin>>arr[i];
            vector<int>sorted(arr,arr+size);
            sort(sorted.begin(),sorted.end());
for (int i=0;i<size;i++){
    if(arr[i]!=sorted[i] && b_flag==0){
        begin=i;
        b_flag=1;
    }
    if(arr[i]!=sorted[i] && b_flag==1){
        end=i;
    }
}

for (int i=begin;i<=end;i++){
    if(arr[i]!=sorted[end-j]){
        cout<<"no"<<endl;
        no_flag=1;
        break;
    }
    j++;
}
if(no_flag==0){
        cout<<"yes"<<endl;
        cout<<begin+1<<" "<<end+1<<endl;
}

    return 0;
}
