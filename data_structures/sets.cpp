#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
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

  auto it = s4.begin();
  cout << *it << "\n";

  for(auto it2 = s4.begin(); it2 != s4.end(); it2++) {
    cout << *it2 << "\n";
  }

  auto it3 = s4.end(); it3--;
  cout << *it3 << "\n";

  auto it4 = s4.lower_bound(5);
  if(it4 == s4.begin()) {
    cout << *it4 << "\n";
  } else if(it4 == s4.end()) {
    it4--;
    cout << *it4 << "\n";
  } else {
    int a = *it4; it4--;
    int b = *it4;
    if(5-b < a-5) cout << b << "\n";
    else cout << a << "\n";
  }

  cout << "Multi set" << "\n";
  multiset<int> ms;
  ms.insert(5);
  ms.insert(5);
  ms.insert(5);

  cout << ms.count(5) << "\n";

  ms.erase(ms.find(5));
  cout << ms.count(5) << "\n";

  bitset<10> bs;
  bs[1] = 1;
  bs[3] = 1;
  bs[5] = 1;
  bs[7] = 1;

  cout << bs << "\n";

  bitset<10> bs2(string("0010011010"));
  cout << bs2 << "\n";

  cout << bs.count() << "\n";

  cout << (bs&bs2) << "\n";
  cout << (bs|bs2) << "\n";
  cout << (bs^bs2) << "\n";

}
