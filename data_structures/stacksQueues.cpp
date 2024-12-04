#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {

  //stacks
  cout << "Stacks: " << "\n";
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(5);

  cout << s.top() << "\n";
  s.pop();
  cout << s.top() << "\n";
  

  //queues
  cout << "Queues: " << "\n";
  queue<int> q;
  q.push(3);
  q.push(2);
  q.push(5);
  cout << q.front() << "\n";
  q.pop();
  cout << q.front() << "\n";

}
