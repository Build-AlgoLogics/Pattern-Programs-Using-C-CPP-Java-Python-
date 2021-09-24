/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

#include <iostream>
using namespace std;

int main() {
    int numRows = 7; 
    int rowVal;     
    int colVal;     
    char patternSymbol = '*';   

    for(rowVal = numRows; rowVal >= 1; rowVal--) {
        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            cout<<"  ";
        } 

        for(colVal = 1; colVal <= rowVal; colVal++) {
            cout<<patternSymbol<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

