//writing on a text file
#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  
  ofstream Myfile("example.txt");
  if(Myfile.is_open())
  {
    Myfile<< "This is a line.\n" ;
    Myfile<< "This is another line.\n";
    Myfile.close();
  }
  else{
    cout<<"Unable to open file";
  }

   return 0;
}