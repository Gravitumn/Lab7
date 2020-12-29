#include <iostream>
using namespace std;

int main()
{
  char rank;
  int c=0;
  cout<< "Input your rank: ";
  cin>>rank;

  if(rank=='S'){
    cout << "You have received Super Ultra Rare Unit!!!"<<endl;
    if(c!=1)c=1;
  }
  if(rank=='A'||c==1){
    cout<<"You have received 5 gems."<<endl;
    if(c!=1)c=1;
  }
  if(rank=='B'||c==1){
    cout << "You have received 1 gems."<<endl;
    if(c!=1)c=1;
  }
  if(rank == 'C'||c==1){
    cout << "You have received 2000 coins."<<endl;
    if(c!=1)c=1;
  }
  if(rank == 'D'||c==1){
    cout << "You have received very KAK items."<<endl;
  }
  return 0;
}
