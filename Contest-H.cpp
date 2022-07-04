#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max_order = 15;
    int total = 0;
    int left = 0;
    int result = 0;
    int offer = n/max_order;
    int mx = 0;
        if(n>=max_order)
        {
            if(offer>1)
            {
                mx = 200*offer;
                left = n-max_order;
                total = max_order*800-mx;
                result = left*800+total;
            }
            else
            {
                left = n-max_order;
                total = max_order*800-200;
                result = left*800+total;

            }
        }
        else if(n<max_order)
        {
            result= n*800;
        }

    cout<<result;
    return 0;
}

