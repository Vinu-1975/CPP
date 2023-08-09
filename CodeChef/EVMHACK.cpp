#include <iostream>
#include <algorithm>
using namespace std;
/*
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], d[3];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        int min = *min_element(a, a + 3);
        sum1 = sum1 - min;
        // cout<<sum1<<endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> d[i];
            sum2 += d[i];
        }
        // scout<<sum2<<endl;
        int max = *max_element(d, d + 3);
        if (sum1 + max > (sum2 / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int sum1=a+b+c;int sum2=d+e+f;
        int min,max;
        if(a<b){
            if(a>c){
                min=c;
            }else{
                min=a;
            }
        }else{
            if(b<c){
                min=b;
            }else{
                min=c;
            }
        }if(d>e){
            if(d>f){
                max=d;
            }else{
                max=f;
            }
        }else{
            if(e>f){
                max=e;
            }else{
                max=f;
            }
        }
        if((sum1-min+max)>(sum2/2)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}