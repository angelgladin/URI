/*
  Number Frequence
  URI Online Judge | 1171
  https://www.urionlinejudge.com.br/judge/en/problems/view/1171
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> number_frequence(vector<int>&);

int main()
{
  int t, aux;
  vector<int> v;
  vector<string> v_n_frequence;

  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> aux;
    v.push_back(aux);
  }

  v_n_frequence = number_frequence(v);
  for(vector<string>::iterator it = v_n_frequence.begin();
      it != v_n_frequence.end(); ++it){
    cout << *it << endl;
  }
  
  return 0;
}

vector<string> number_frequence(vector<int>& v){
  int n;
  vector<string> v_aux;
  map<int, int> m;
  string sentence;

  for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
    n = *it;
    if(m.count(n) == 0)
      m[n] = 1;
    else
      m[n] += 1;
  }
  
  for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it){
    sentence = to_string(it -> first) + " aparece " +
      to_string(it -> second) + " vez(es)";
    v_aux.push_back(sentence);
  }
  
  return v_aux;
}
