#include <iostream>
using namespace std;

int main(){
  int i=0;
  int j=1;
  int sum;
  int N; 
  cout << "N" << endl;
  cin >> N; 
  for(int k=1; k<N; k++){
    sum=i+j;
    i=j;
    j=sum;
  }
  cout << j << endl;
 return 0;
}
    
