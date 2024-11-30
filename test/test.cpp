#include <bits/stdc++.h>


#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i=a; i<=b; i++)
#define SQ(a) (a)*(a)

using namespace std;

int
main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    double x = 0.3*3 + 0.1;
    printf("%.20f\n", x);

    if(abs(x-1) < 1e-9) {
      printf("x is 1\n");
    }

    typedef long long ll;

    ll a = 12345123123;
    ll b = 12312312312;

    cout << a*b << "\n";

    typedef vector<int> vi;
    typedef pair<int,int> pi;
    typedef vector<pi> vp;
    
    vp v;
    v.PB(MP(1,2));
    v.PB(MP(3,4));
    int d = v[0].F + v[1].S;

    REP(i,1,10) {
      printf("%d\n",i);
    }

    //sorting

    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin(), v.end());

    sort(v.rbegin(), v.rend());

    int n = 5;
    int arr[] = {5,4,3,2,1};
    std::sort(arr, arr+n);

    std::string s = "monkey";
    std::sort(s.begin(), s.end());

    // sort with comparison
  vector<pair<int,int>> vv;
  vv.push_back({1,5});
  vv.push_back({2,3});
  vv.push_back({1,2});
  std::sort(vv.begin(), v.end())
    

}
