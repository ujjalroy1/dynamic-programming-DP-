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
void Add(ll &Set,ll val)
{
         if((Set&(1<<(val-1)))==0)
        {
           Set=Set^(1<<(val-1));
        }
}
void Remove(ll &Set,ll val)
{
     Set=Set^(1<<(val-1));
}
void display(ll Set)
{
    for(ll i=0;i<32;i++)
    {
        if(Set&(1<<i))
        {
           cout<<i+1<< " ";
        }

    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
     ll Set=10;
     display(Set);
     Remove(Set,2LL);
     display(Set);
     Add(Set,10);
     display(Set);
    return 0;
}
