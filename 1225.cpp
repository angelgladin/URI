/*
  Letter Frequency
  URI Online Judge | 1255
  https://www.urionlinejudge.com.br/judge/en/problems/view/1255
*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct letter{
  int n;
  char c;
};

string foo(const string&);

int main()
{
  int t;
  string s;
  cin >> t;
  cin.ignore();
  for(int i = 0; i < t; i++){
    getline(cin, s);
    cout << foo(s) << endl;
  }
  return 0;
}

inline bool compare_by_n(const letter& s1, const letter& s2)
{
  return s1.n > s2.n;
}

inline bool compare_by_c(const letter& s1, const letter& s2)
{
  return s1.c < s2.c;
}

string foo(const string& s)
{
  vector<letter> letter_vector, letter_vector_aux;
  string frequency;
  letter l;
  int max = -1;
  
  for(int i = 0; i < 26; i++){
    l.n = 0;
    l.c = 97 + i;
    letter_vector.push_back(l);
  }

  for(int i = 0; i < s.length(); i++){
    if(isalpha(s[i])){
      if(isupper(s[i]))
	letter_vector[s[i] - 65].n += 1;
      else
	letter_vector[s[i] - 97].n += 1;   
    }
  }
  
  sort(letter_vector.begin(), letter_vector.end(), compare_by_n);

  max = letter_vector[0].n;

  for(int i = 0; i < 26; i++){
    if(letter_vector[i].n != 0 && letter_vector[i].n == max)
      letter_vector_aux.push_back(letter_vector[i]);
    else
      break;
  }
  
  sort(letter_vector_aux.begin(), letter_vector_aux.end(), compare_by_c);
  
  for(int i = 0; i < letter_vector_aux.size(); i++){
    frequency += letter_vector_aux[i].c;
  }

  return frequency;
}
