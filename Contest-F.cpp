#include<bits/stdc++.h>
using namespace std;


int main(){
int a,b,c;

cin>>a>>b>>c;


int big = 0;


if(a>b && a>c){
    big = a;
}else if(b>c && b>a){
    big = b;
}else{
    big = c;
}

if(big == a+b || big == a+c || big == b+c){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}

return 0;
}
