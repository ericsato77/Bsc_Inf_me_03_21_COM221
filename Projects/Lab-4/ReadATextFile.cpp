//reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main () {
    string line;
  
  ofstream Myfile("example.txt");
  if(Myfile.is_open())
  {
    while(getline(Myfile,line))
    {
    cout<<line<< '\n';
    }
    Myfile.close();
    }
  else{
    cout<<"Unable to open file";
  }

   return 0;
}