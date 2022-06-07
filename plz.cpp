#pragma GCC optimze("Ofast")
#include "bits/stdc++.h"
using namespace std;
#define mod 1000000007
#define M2 998244353
#define ll long long
#define pll pair<ll,ll>
#define inf 1e18
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define flb(i,a,b) for(ll i=b-1;i>=a;i--)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vll vector<int>
#define N 500005
#define all(c) c.begin(),c.end()
#define sz(s) (int)s.size()
//#define o_set(T) tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>

//member functions :
//to delete an element
//s.erase(s.find_by_order(s.order_of_key(ele)));
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set
/*SOME BITMASK KNOWLEDGE
1)x & (x - 1):sets the last one bit of x to zero
power of two exactly when x & (x − 1) = 0.
2)x & -x:sets all the one bits to zero, except last one bit
3)x | (x - 1):inverts all the bits after the last one bit*/

//debugging template
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a, b) cout << a << " " << b << endl
#define p3(a, b, c) cout << a << " " << b << " " << c << endl
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl

void solve()
{
   cout<<1;

}


signed main()
{
   std::ios::sync_with_stdio(false);
   int T=1;
   cin>>T;
   // cin.ignore(); must be there when using getline(cin, s)
   while(T--)
   {
      solve();
   }
   return 0;
}
