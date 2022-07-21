#include <iostream>
using namespace std;

//recursive function
void toh_move(int n, int from, int holder, int to);


int main() {
  int ndisks;
  cout << "How many disks would you like to move?" << endl;
  cin >> ndisks;
  toh_move(ndisks, 1, 2, 3);
  return 0;
} 

void toh_move(int n, int from, int holder, int to) 
{
  //base case
  if (n == 1) 
  {
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
  }

  //recursive step
  if(n > 1)
  {
    toh_move(n-1, from, to, holder);
    cout << "Move disk " << n << " from peg " << from << " to peg " << to << endl;
    toh_move(n-1, holder, from, to) ;
  }
}