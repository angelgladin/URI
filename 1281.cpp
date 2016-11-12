/*
  Going to the Market
  URI Online Judge | 1281
  https://www.urionlinejudge.com.br/judge/en/problems/view/1281
*/
#include <iostream>
#include <iomanip>
#include<unordered_map>

using namespace std;

int main()
{
  int n, p, p_c, m;
  double m_p, tot = 0.00;
  string aux;
  unordered_map<string, double> map;
  
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> m;
    for(int j = 0; j < m; j++){
      cin >> aux >> m_p;
      map[aux] = m_p;
    }
    cin >> p;
    for(int k = 0; k < p; k++){
      cin >> aux >> p_c; 
      tot += map[aux] * p_c;
    }
    printf("R$ %.2f\n", tot);
    tot = 0;
  }
  return 0;
}
