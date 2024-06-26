#include <iostream>
 
using namespace std;
 
int main()
{
    int no_element,begin,end,count_l=0,count_r=0,f=0;
    string in;
    cin >>no_element >>in;
    for(int i=0;i<no_element;i++){
        if(in[i]!='.'&&f==0){begin=i;f=1;
        if(in[i]=='L')count_l++;
        else count_r++;
        }
        else if(in[i]=='L')count_l++;
        else if(in[i]=='R')count_r++;
    }
    int no_char=count_l+count_r;
    if(count_r==0){
    end=begin+no_char;
    cout<<end<<" "<<begin;
    }else{
        begin++;
        if(count_l==0)end=begin+no_char-count_l;
         else end=begin+no_char-count_l-1;
    cout<<begin<<" "<<end;
    }
 
    return 0;
}