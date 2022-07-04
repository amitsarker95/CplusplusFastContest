#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;

int fast_area = a*b;
int second_area = c*d;


if(fast_area >= second_area){
    cout<<fast_area;
}else if(second_area >= fast_area){
   cout<<second_area;
}


return 0;
}
