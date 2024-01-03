#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class type1>
#define ll long long int
#define endl "\n"
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using ordered_multiset = tree <type1, null_type, less_equal <type1>, rb_tree_tag, tree_order_statistics_node_update>;
 //ordered_multiset <ll> kek;(declaration for multiorder set)
// ordered_set o_set;(declaration)
//kek.order_of_key(i);(strictly less then i for multi order set)
//o_set.order_of_key(5) ;(strictly less then i for multi order set)
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   

      ll n,k,i;
      cin>>n>>k;
      ll dp[n+1];
      ll arr[n+1];
      for(i=1;i<=n;i++)cin>>arr[i];
      dp[1]=0;
      for(i=2;i<=n;i++)
      {
          ll mi=(ll)1e16;
          for(ll j=1;j<=k;j++)
          {
              if(i-j>=1)
              {
                 ll r;
                 r=abs(arr[i]-arr[i-j])+dp[i-j];
                 mi=min(mi,r);
               //  cout<<mi<<" "<<i<<" "<<j<<endl;
              }

          }
          
          dp[i]=mi;
         
      }
      cout<<dp[n]<<endl;

    return 0;
}
