#include <iostream>

using namespace std;


int main(int argc, char* argv[]){

  // int answer;
  // cout << "enter an option " << endl;
  // cin >> answer;
 // cout <<"Hello, " <<  argv[10] << endl;
  if(argc < 1)
    cout << "Hello, user" << endl;
  else
    cout <<"Hello, " <<  argv[10] << endl;


  return 0;
}

