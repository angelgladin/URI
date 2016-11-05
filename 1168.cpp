/*
  LED
  URI Online Judge | 1168
  https://www.urionlinejudge.com.br/judge/en/problems/view/1168
*/
#include <iostream>
#include <map>
using namespace std;

string get_number_of_leds(map<int, int>&, string&);

int main ()
{
  map<int, int> m;
  int t;
  string s;
  m[0] = 6;  m[1] = 2;  m[2] = 5;  m[3] = 5;  m[4] = 4;
  m[5] = 5;  m[6] = 6;  m[7] = 3;  m[8] = 7;  m[9] = 6;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> s;
    cout << get_number_of_leds(m, s) << endl;
  }
  return 0;
}

string get_number_of_leds(map<int, int>& m, string& s)
{
  int t = 0;
  for(int i = 0; i < s.length(); i++)
    t += m[s[i] - '0'];
  return to_string(t) + " leds";
}
