/* Your function takes two arguments:

current father's age (years)
current age of his son (years)
Сalculate how many years ago the father was twice as old as his son (or in how many years he will be twice as old). */

#include <iostream>
using namespace std;

int twice_as_old(int dad, int son) {
  int father_target = son * 2;
  if (dad - father_target > 0){
    return dad-father_target;
  }else{
    return father_target - dad;
  }
  
  return 0;
}