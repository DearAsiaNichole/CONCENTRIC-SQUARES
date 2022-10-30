#include <iostream>

using namespace std;

//RECURSIVE FUNCTION
void recursive_function(char userInput[], int arr_size, int l){

//cout<<"\nENTERING RECURISVE FUNCTION\n "<< endl;
  ////  cout << "DISPLAYING ARRAY INPUT\n" << endl;
    //for (int i = 0; i < 5; i++) {
         //cout << userInput[i];
    //    }
int k=arr_size;
int j= 2*arr_size;
//cout << "the value of j is: "<<j <<endl;
//cout << "the value of k is: "<<k <<endl;
//cout << "the value of l is: "<<l <<endl;


    //BASE CASE
    if (k == 0) {
        return;
    }
//PRINTING OUT Y K C O R
    int i = 1;
    for(i; i<=j; i++){
        cout<<userInput[k] <<" ";
    }
    //PRINTING OUT Y
    cout<<endl;
    cout<<userInput[l] <<" ";
    cout<<userInput[4] <<" ";





    //RECURSIVE CALL
    recursive_function(userInput, k-1, l);

}

int main()
{
    int i;
    int arr_size = 5;
    int l=5;
    char userInput[6];
    cout << "Please enter 5 characters!" << endl;
    cout << "\nHINT: If you cant think of anything try: ROCKY" << endl;
    for (i =1 ; i < 6; i++) {
        cin >> userInput[i];
        }
    //RECURSIVE CALL
    recursive_function(userInput,arr_size, l);

    cout << "DISPLAYING ARRAY INPUT" << endl;
    for (i = 1; i < 6; i++) {
         cout << userInput[i];
        }
}
