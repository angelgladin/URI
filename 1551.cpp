/*
  Complete Sentence
  URI Online Judge | 1551
  https://www.urionlinejudge.com.br/judge/en/problems/view/1551
*/

#include <iostream>
#include <set>

using namespace std;

string sentence_status(const string& s);

int main ()
{
  int t;
  string s;
  cin >> t;
  cin.ignore();
  for(int i = 0; i < t; i++){
    getline(cin, s);
    cout << sentence_status(s) << endl;
  }
  return 0;
}

string sentence_status(const string& s)
{
  set<char> set;
  for(int i = 0; i < s.length(); i++)
    if(isalpha(s[i]))
      set.insert(s[i]);

  if(set.size() == 26)
    return "frase completa";
  else if (set.size() < 26 && set.size() >= 13)
    return "frase quase completa";
  else
    return "frase mal elaborada";
}
