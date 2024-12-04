#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> vec = {4,2,5,3,5,8,3};
    sort(vec.begin(), vec.end());

    sort(vec.rbegin(), vec.rend());

    int n = 5;
    int arr[] = {5,4,3,2,1};
    sort(arr, arr+n);

    string s = "monkey";
    sort(s.begin(), s.end());

    // sort with comparison
  vector<pair<int,int>> vv;
  vv.push_back({1,5});
  vv.push_back({2,3});
  vv.push_back({1,2});
  sort(vv.begin(), vv.end());

  for(int i=0; i<vv.size(); i++) {
    cout << vv[i].first << ", " << vv[i].second << "\n";
  }
}
