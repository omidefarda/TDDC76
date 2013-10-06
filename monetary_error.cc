#include "monetary_error.h"

using namespace std;

  throw monetary_error();

  try{
      } catch (monetary_error & ex){
    cout << ex.what() << endl;
  }

