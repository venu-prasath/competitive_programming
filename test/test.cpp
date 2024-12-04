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

    vector<int> vec = {4,2,5,3,5,8,3};
    sort(vec.begin(), vec.end());

    sort(vec.rbegin(), vec.rend());

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
  std::sort(vv.begin(), vv.end());

  // sets
  set<int> ss;
  ss.insert(3);
  ss.insert(2);
  ss.insert(5);
  std::cout << ss.count(3) << "\n";
  std::cout << ss.count(4) << "\n";
  ss.erase(3);
  ss.insert(4);

  std::cout << ss.count(3) << "\n";
  std::cout << ss.count(4) << "\n";

  set<int> s2 = {2, 5, 6, 8 };
  std::cout << s2.size() << "\n";
  for(auto x: s2) {
    std::cout << x << "\n";
  }

  // unordered sets
  unordered_set<int> s3;
  s3.insert(3);
  s3.insert(2);
  s3.insert(5);
  std::cout << s3.count(3) << "\n";
  std::cout << s3.count(4) << "\n";
  s3.erase(3);
  s3.insert(4);

  std::cout << s3.count(3) << "\n";
  std::cout << s3.count(4) << "\n";

  set<int> s4 = {2, 5, 6, 8 };
  std::cout << s4.size() << "\n";
  for(auto x: s4) {
    std::cout << x << "\n";
  }


}
