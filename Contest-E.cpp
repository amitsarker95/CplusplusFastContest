#include<bits/stdc++.h>
using namespace std;

int main(){
int total_day,offer,pernight,last_day;

 cin>>total_day>>offer>>pernight>>last_day;
 int total_expence = 0;
if(total_day<=offer){
    total_expence += total_day*pernight;
}else if(total_day>offer){

    total_expence += offer*pernight;
    total_expence += (total_day-offer) * last_day;
}
cout<<total_expence<<endl;


return 0;
}





