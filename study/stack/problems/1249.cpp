#include <iostream>
#include <stack>
#include <vector>

using namespace std;

string minRemoveToMakeValid(string s) {
  int cnt = 0;
  string res = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ')' && cnt == 0) {
      continue;
    } else if (s[i] == ')') {
      cnt--;
      res += s[i];
    } else if (s[i] == '(') {
      cnt++;
      res += s[i];
    } else {
      res += s[i];
    }
  }
  for (int i = res.size() - 1, j = cnt; i >= 0; i--) {
    if (j == 0) break;
    if (res[i] == '(') {
      res.erase(i, 1);
      j--;
    }
  }
  return res;
}

int main() {
  string res = minRemoveToMakeValid("))((");
  cout << "res" << res << endl;
  return 0;
}