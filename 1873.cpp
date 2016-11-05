/*
  Rock-paper-scissors-lizard-Spock
  URI Online Judge | 1873
  https://www.urionlinejudge.com.br/judge/en/problems/view/1873
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

string foo(map<string, vector<string> >&, string&, string&);

int main()
{
  string a, b;
  int c;

  map<string, vector<string> > map;
  map["lagarto"].push_back("papel");
  map["lagarto"].push_back("spock");
  map["papel"].push_back("pedra");
  map["papel"].push_back("spock");
  map["pedra"].push_back("lagarto");
  map["pedra"].push_back("tesoura");
  map["spock"].push_back("pedra");
  map["spock"].push_back("tesoura");
  map["tesoura"].push_back("lagarto");
  map["tesoura"].push_back("papel");

  cin >> c;
  for (int i = 0; i < c; ++i){
    cin >> a >> b;
    cout << foo(map, a, b) << endl;
  }
  return 0;
}

string foo(map<string, vector<string> >& map, string& a, string& b)
{
  if(a == b)
    return "empate";
  else if(map[a][0] == b || map[a][1] == b)
    return "rajesh";
  else
    return "sheldon";
}
