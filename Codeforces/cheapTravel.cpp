#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
#define nl cout<<ln;

int main()
{

   #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n,m,a,b,amount=0;
    cin>>n>>m>>a>>b;

    
    if(m>n && b<a){
        amount+=b;
    }else{
        amount+=(n/m)*b;
        if(b<a && n%m !=0){
            amount+=b;
        }else{
            amount+=(n%m)*a;
        }
    }
    
    
    cout<<amount;


    return 0;

}