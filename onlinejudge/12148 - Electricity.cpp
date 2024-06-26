#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{

   int n,c_day,c_month,c_year,c_cons,n_day,n_month,n_year,n_cons;

        while(cin>>n && n!=0){
int count=0,total=0;
            for(int i=0;i<n;i++){
             cin >> n_day >> n_month >> n_year >> n_cons;


if(i!=0){
   if(n_year==c_year){
    if(n_month==c_month){
           if(n_day==(c_day+1)){count++;
            total+=n_cons-c_cons;
           }
    }else{
    if(c_month==1 &&n_month==2 &&c_day==31 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }
           if(((n_year%4==0) && (n_year%100!=0) )|| (n_year%400==0)){
           if(c_month==2 &&n_month==3 &&c_day==29 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }}else{
            if(c_month==2 &&n_month==3 &&c_day==28 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }
           }
           if(c_month==3 &&n_month==4 &&c_day==31 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==4 &&n_month==5 &&c_day==30 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==5 &&n_month==6 &&c_day==31 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==6 &&n_month==7 &&c_day==30 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==7 &&n_month==8 &&c_day==31 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==8 &&n_month==9 &&c_day==31 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==9 &&n_month==10 &&c_day==30 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==10 &&n_month==11 &&c_day==31 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }if(c_month==11 &&n_month==12 &&c_day==30 &&n_day==1){count++;
            total+=n_cons-c_cons;
           }

    }

   }else if(n_year==(c_year+1)){
           if(c_month==12 &&c_day==31 &&n_month==1&&n_day==1){count++;
            total+=n_cons-c_cons;
           }
           }

}
c_day=n_day;
c_month=n_month;
c_year=n_year;
c_cons=n_cons;
            }


cout<<count<<" "<<total<<endl;

    }



    return 0;


}

