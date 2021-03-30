/* Write function RemoveExclamationMarks which removes all exclamation marks from a given string. */

#include <string>
#include <iostream>
using namespace std;

std::string removeExclamationMarks(std::string str){
  for (int i = 0; i<str.size(); i++){
    if (str[i] == '!'){
      str.erase(i--, 1);
    }
  }
  return str;
}