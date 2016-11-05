/*
  Parenthesis Balance I
  URI Online Judge | 1068
  https://www.urionlinejudge.com.br/judge/en/problems/view/1068
*/
#include <iostream>
#include <stack>

using namespace std;

bool parenthesis_well_balanced(const string&);

int main()
{
  string s;
  while(getline(cin, s))
    cout << (parenthesis_well_balanced(s) ? "correct" : "incorrect") << endl;
  return 0;
}

bool parenthesis_well_balanced(const string& s){
  stack<char> stack;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '('){
      stack.push(s[i]);
    } else if(s[i] == ')'){
      if(stack.empty())
	return false;
      else
	stack.pop();
    }
  }
  
  return stack.empty();
}
