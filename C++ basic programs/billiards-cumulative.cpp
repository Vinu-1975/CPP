#include<bits/stdc++.h>
using namespace std;

/**int main(){
    int n;
    cin>>n;
    int diff=0,lead=0;
    int winner;
    int sum1=0,sum2=0;
    while(n--){
        int p1,p2;
        cin>>p1>>p2;
        sum1+=p1;
        sum2+=p2;
        if(sum1>sum2){
            diff=sum1-sum2;
            if(diff>lead){
                lead=diff;
                winner=1;
            }
            
        }else{
            diff=sum2-sum1;
            if(diff>lead){
                lead=diff;
                winner=2;
            }
        }
    }cout<<winner<<" "<<lead;
}**/

int main()
{
    int t;
    cin >> t;
    int lead1 = 0, lead2 = 0, d1 = 0, d2 = 0, m = 0, n = 0;
    while (t--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        m = m + p1;
        n = n + p2;
        if (m > n)
        {
            d1 = m - n;
        }
        if (n > m)
        {
            d2 = n - m;
        }
        if (d1 > lead1)
        {
            lead1 = d1;
        }
        if (d2 > lead2)
        {
            lead2 = d2;
        }
    }
    if (lead1 > lead2)
    {
        cout << 1 << " " << lead1 << endl;
    }
    if (lead2 > lead1)
    {
        cout << 2 << " " << lead2 << endl;
    }
    return 0;
}
