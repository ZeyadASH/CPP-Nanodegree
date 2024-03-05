#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {
    
    //////////////////////
    //1D Vector Access
    /////////////////////
    
    vector<int> a = {0, 1, 2, 3, 4};
    cout << "The First Element of Vector a is " << a[0] <<"\n";
    cout << "The Second Element of Vector a is " << a[1] <<"\n";
    cout << "The Third Element of Vector a is " << a[2] <<"\n";
    
    //Getting a Vector's Length
    cout << "The Length of Vector a is 1x"<< a.size()<<"\n";

    ////////////////////////
    //2D Vector Access
    ///////////////////////
    
    vector<vector<int>> board = {{0, 1, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 0, 0},
                                 {0, 0, 0, 0, 1, 0}};
                                 
    cout << "The Element in third row second column is of Vector board is " 
         << board[2][1] << "\n";
         
    
    //Getting a Vector's Length
    cout << "The Length of Vector board is " 
         << board.size()<<"x"<<board[0].size()<<"\n";
    
}
