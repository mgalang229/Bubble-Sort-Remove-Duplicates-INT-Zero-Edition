#include <iostream>
using namespace std;

int main(){

  int n, temp, pogi[5], pogi2[5];

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "\nEnter " << n << " numbers: ";
  for(int i = 0; i < n; i++){
    cin >> pogi[i];
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1; j++){
      if(pogi[j] > pogi[j+1]){
        temp = pogi[j];
        pogi[j] = pogi[j+1];
        pogi[j+1] = temp;
      }
    }
  }

  cout << "\nBubble Sort: ";
  for(int i = 0; i < n; i++){
    cout << pogi[i] << " ";
  }

  int counter = 0;
  for(int i = 0; i < n; i++){
    if(pogi[i] != pogi[i+1]){
      pogi2[counter] = pogi[i];
      counter++;
    }
  }

  cout << "\nRemoved Duplicates: ";
  for(int i = 0; i < counter; i++){
    cout << pogi2[i] << " ";
  }


  return 0;
}
