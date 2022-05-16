#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool isValid(string s, int l, int r) {
  stack<int> ss;
  for (int i = l; i <= r; i++) {
    switch (s[i]) {
      case '{':
      case '[':
      case '(':
        ss.push(s[i]);
        break;
      case '}':
        if (ss.empty() && s[i] != '{') return false;
        ss.pop();
        break;
      case ']':
        if (ss.empty() && s[i] != '[') return false;
        ss.pop();
        break;
      case ')':
        if (ss.empty() && s[i] != '(') return false;
        ss.pop();
        break;
    }
  }
  return ss.empty();
}

string removeOuterParentheses(string s) {
  string res = "";
  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j < s.size(); j++) {
      if (!isValid(s, i, j)) {
        cout << "!isValid: " << s.substr(i, j - i + 1) << endl;
        continue;
      };
      cout << s.substr(i, j - i + 1) << endl;
      res = res + s.substr(i + 1, j - i - 1);
      i = j;
      break;
    }
  }
  return res;
}

int main() {
  string res = removeOuterParentheses("(()())(())");
  cout << "res" << res << endl;
  return 0;
}