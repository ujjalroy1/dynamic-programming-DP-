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
   
    ll t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         ll arr[n];
         for(ll i=0;i<n;i++)
         {
             cin>>arr[i];
         }
      
         ll dp[n];
         dp[0]=0;
         dp[1]=abs(arr[0]-arr[1]);
         for(ll i=2;i<n;i++)
         {
             dp[i]=min(abs(arr[i]-arr[i-1])+dp[i-1],abs(arr[i]-arr[i-2])+dp[i-2]);

         }
        
       cout<<dp[n-1]<<endl;
    }

    return 0;
}
