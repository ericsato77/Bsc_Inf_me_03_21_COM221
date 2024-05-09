//obtain file size
#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  streampos begin;
  streampos end;

  ifstream Myfile("example.bin", ios::binary);
  begin=Myfile.tellg();
  Myfile.seekg (0, ios::end);
  end=Myfile.tellg();
  Myfile.close();
  
    cout<<"sise is:"<<(end-begin)<<"bytes.\n";

   return 0;
}