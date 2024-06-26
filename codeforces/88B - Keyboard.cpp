#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

int main()
{
    int r,c,x,length,flag=0,flag2=0,flag_S=0,k=0,count_S=0,count=0,l=0;
    char first;
    int checked[26]={0};
    int increase[26]={0};
    vector<pair<int,int>> S_loc;
    vector<pair<int,int>> letter_loc(10000);
    cin>>r>>c>>x;
    char arr[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
            char a;
        cin>>a;
        arr[i][j]=a;
        if(i==0 &&j==0)first=a;
        if(a=='S'){
                S_loc.push_back(make_pair(i,j));
                count_S++;
        flag_S=1;
        }
       else {
            letter_loc[(a-97)+26*checked[a-97]].first=i;
       letter_loc[(a-97)+26*checked[a-97]].second=j;
       checked[a-97]++;
       if(checked[a-97]>l)l=checked[a-97];
       }
    }
    }
    cin>>length;
    char line[length];
    for(int i=0;i<length;i++){
        cin>>line [i];
    }
    int visited[26]={0};
     int visited_cap[26]={0};


    for(int i=0;i<length;i++){
            flag=0;flag2=0;
            char a=line[i];

        if(a>96 &&visited[a-97]==0){

           if(letter_loc[a-97].first==0 &&letter_loc[a-97].second==0 &&a!=first){
             cout<<"-1"<<endl;
  goto end;
           }else visited[a-97]=1;
        }

    else if(a<91 &&visited[a-65]==1 &&visited_cap[a-65]==0){
            if(flag_S==0){
                 cout<<"-1"<<endl;
    goto end;
            }
        visited_cap[a-65]=1;
        for(int v=0;v<checked[a-65];v++){
                int c_i=letter_loc[(a-65)+26*v].first;
        int c_j=letter_loc[(a-65)+26*v].second;
        for(int s=0;s<count_S;s++){
            if(sqrt(pow(c_i-S_loc[s].first,2)+pow(c_j-S_loc[s].second,2))<=x){
                    flag=1;
               goto endif1;
            }
        }
        }
        endif1:
        if(flag==0){
        increase[a-65]++;
        }
    }else if(a<91&&visited[a-65]==0 &&visited_cap[a-65]==0 ){
        if(flag_S==0){
                 cout<<"-1"<<endl;
    goto end;
            }
    if(letter_loc[a-65].first==0 &&letter_loc[a-65].second==0 &&a!=(first-32)){
             cout<<"-1"<<endl;
    goto end;
           }else {visited[a-65]=1;
    visited_cap[a-65]=1;
    for(int v=0;v<checked[a-65];v++){
    int c_i=letter_loc[(a-65)+26*v].first;
        int c_j=letter_loc[(a-65)+26*v].second;
        for(int s=0;s<count_S;s++){
            if(sqrt(pow(c_i-S_loc[s].first,2)+pow(c_j-S_loc[s].second,2))<=x){
                    flag2=1;
                    //cout<<a<<c_i<<c_j<<S_loc[s].first<<S_loc[s].second;
               goto endif2;
            }
        }
    }
    endif2:
        if(flag2==0){
        increase[a-65]++;
           }
    }
    }
    if(increase[a-65]>0 && a<91){count++;}

    }
     cout<<count<<endl;
    end:
    return 0;
}