#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {

  cout << "Maps" << "\n";
  map<string, int> m1;
  m1["monkey"] = 4;
  m1["banana"] = 3;
  m1["harp"] = 99;

  cout << m1["banana"] << "\n";

  if(m1.count("abcd")) {
    cout << "Key exists" << "\n";
  }

  for(auto &x: m1) {
    cout << x.first << " " << x.second << "\n";
  }

  return 0;
}
