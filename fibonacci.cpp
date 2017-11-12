#include <iostream>
using namespace std;

void fibonacciIterative(int n){
  int temp1 = 0;
  int temp2 = 1;
  int nextTerm;
  cout << "Fibonacci: ";
  cout << temp1 << " " << temp2 << " ";
  
  for(int i = 2; i < n; i++){
    nextTerm = temp1 + temp2;
    cout << nextTerm << " ";
    temp1 = temp2;
    temp2 = nextTerm;
  }
  
}

int main(){
  int n;
  cout << "Enter number in Fibonacci series: ";
  cin >> n;
  fibonacciIterative(n);
  return 0;
}
