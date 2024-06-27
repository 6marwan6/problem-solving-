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
        int count=0,waste_in_my_row=0;
        f_notwaste=0;
        int c1=cases[i].first;
        int c2=cases[i].second;
        for(int j=0;j<waste;j++)
    if(wasteland[j].first==c1 && wasteland[j].second==c2){
        cout<<"Waste"<<endl;
        f_notwaste=1;
         break;
        }
        else if(wasteland[j].first==c1 && wasteland[j].second<c2)waste_in_my_row++;
    if(f_notwaste==0){
       for(int j=0;j<c1-1;j++) {
count+=no_waste_row[j];

       }
if((c2+c*(c1-1)-count-waste_in_my_row )%3==1)cout<<"Carrots"<<endl;
    else if((c2+c*(c1-1)-count-waste_in_my_row )%3==2)cout<<"Kiwis"<<endl;
    else cout<<"Grapes"<<endl;
    }
}
    return 0;
}
