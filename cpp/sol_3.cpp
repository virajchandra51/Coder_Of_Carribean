#include <fstream>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin>>n;
  int total = 0;
  while(n--) {
    // Account for CRLF if required
    // line.erase(std::remove_if(std::begin(line), std::end(line), [](auto c) { return !isprint(c); }), std::end(line));
    int min_1, max_1, min_2, max_2;
    cin>>min_1>>max_1>>min_2>>max_2;
    if ((min_1 >= min_2 && max_1 <= max_2) ||
        (min_1 <= min_2 && max_1 >= max_2)) {
      total += 1;
    }
  }
  cout<<total<<endl;
  return 0;
}
