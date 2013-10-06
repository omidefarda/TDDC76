#include <iostream>
#include "monetary_error.h"

using namespace std;

void fun(){
  throw monetary_error();
}

int main(){
  try{
    fun();
  } catch (monetary_error & ex){
    cout << ex.what() << endl;
  }
}
