#include <iostream>
#include <vector>
#include <string>

using namespace std;

void consecutive_integer(int input);

int main()
{
  long int input;
  
  while(true){

    cin >> input;
    if (input == -1) break;

    consecutive_integer(input); 
    
  }
  
}

void consecutive_integer(int input){

  int right, tmp_right= 0;
  int left, tmp_left= 0;
  int d = 0;

  while (true){
    
    d++;
    
    if (2*input%d != 0) continue;
    
    right = (2*input/d-1+d)/2;
    left = right - d +1;
    cout << input << " = " << left << " + ... + " << right << endl;
    if ((left+right)*(right-left+1)/2 != input) continue;
    if (left<1 || right<1) break;
    tmp_left = left;
    tmp_right = right;

  }
  cout << tmp_left << " " << tmp_right<< endl;
  
  cout << d<< endl;
  
  
  cout << input << " = " << tmp_left << " + ... + " << tmp_right << endl;
}