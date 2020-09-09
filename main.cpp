#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
        string item;
        cout<<"What item? ";
        cin.ignore();
        getline(cin,item);
        list.push_back(item);
    }
  }while( input != 'q' && input != 'Q' );



  int in = 1;
  cout << endl;
  cout << "~~~~ MY GROCERIES ~~~~" << endl;
  if (!list.empty()) {
      for (vector<string>::const_iterator i = list.begin(); i != list.end(); ++i) {
          cout << in++ << ". " << *i << endl;
      }
  } else {
      cout << "there are no items on the list.\n";
  }

  return 0;
}
