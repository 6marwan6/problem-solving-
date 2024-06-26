#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int r,c,waste,test_C,f_notwaste=0;
    cin>>r>>c>>waste>>test_C;
    vector<pair<unsigned short,unsigned short>> wasteland(waste);
     vector<pair<unsigned short,unsigned short>> cases(test_C);
     vector<unsigned short> no_waste_row(r);
for(int i=0;i<waste;i++){
        int a;
   cin>> a>>wasteland[i].second;
wasteland[i].first=a;
    no_waste_row[a-1]++;
}
for(int i=0;i<test_C;i++){
   cin>> cases[i].first>>cases[i].second;
}

for(int i=0;i<test_C;i++){
        int count=0;
        f_notwaste=0;
        for(int j=0;j<waste;j++)
    if(wasteland[j].first==cases[i].first && wasteland[j].second==cases[i].second){
        cout<<"Waste"<<endl;
        f_notwaste=1;
        if(wasteland[j].first==cases[i].first && wasteland[j].second<cases[i].second)waste_in_my_row++
        break;
    }
    if(f_notwaste==0){
       for(int j=0;j<cases[i].first;j++) {
            if(j!=cases[i].first-1)
count+=no_waste_row[j];
else for(int s=0;s<cases[i].second;s++){
    if(wasteland[i].first)
}
       }
if((cases[i].second+c*(cases[i].first-1)-count )%3==1)cout<<"Carrots"<<endl;
    else if((cases[i].second+c*(cases[i].first-1)-count )%3==2)cout<<"Kiwis"<<endl;
    else cout<<"Grapes"<<endl;
    }
}
    return 0;
}
