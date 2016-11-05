/*
  Counting Characters
  URI Online Judge | 2108
  https://www.urionlinejudge.com.br/judge/en/problems/view/2108
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

vector<string> counting_characters_and_biggest_word(const string& s);

int main()
{
  string s, aux, biggest_word;

  while(true){
    getline(cin, s);
    if(s[0] == '0')
      break;
    vector<string> v_aux = counting_characters_and_biggest_word(s);
    cout << v_aux[0] << endl;
    if (v_aux[1].length() >= biggest_word.length()){
      biggest_word = v_aux[1];
    }
  }

  cout << "\nThe biggest word: " << biggest_word << endl;
  return 0;
}

vector<string> counting_characters_and_biggest_word(const string& s)
{
  int len = s.length(); 
  vector<string> v;
  string aux, biggest_word, num_seq_str;
  for(int i = 0; i < len; i++){
    if(isalpha(s[i]))
      aux += s[i];
    
    if(s[i] == ' ' || i == len-1){

      if(aux.length() >= biggest_word.length())
	biggest_word = aux;

      if(i == len-1)
	num_seq_str += to_string(aux.length());
      else
	num_seq_str += to_string(aux.length()) + '-';
      
      aux = "";
    }
  }
  v.push_back(num_seq_str);
  v.push_back(biggest_word);
  return v;
}
