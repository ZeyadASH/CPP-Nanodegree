/* Vector Containers

- 1D Vectors

C++ also has several container types that can be used for storing data.
We will start with vectors, as these will be used throughout this lesson,
but we will also introduce other container types as needed.

Vectors are a sequence of elements of a single type, and have useful methods for getting the size,
testing if the vector is empty, and adding elements to the vector.

- 2D Vectors

Unfortunately, there isn't a built-in way to print vectors in C++ using cout. You will learn how to access vector elements and you will write your own function to print vectors later. For now, you can see how vectors are created and stored. Below, you can see how to nest vectors to create 2D containers.

*/

#include <iostream>
#include <vector>

using std::cout, std::vector;

int main()
{
    //1D vectors
    vector<int> v1 = {0,1,2};
    vector<int> v2{3,4,5};
    vector<int> v3{6,7,8};
    
    //2D vectors
    vector<vector<int>> v2d{{1,2},{3,4}};
    
    //printing results:
    cout << "1D vectors:\n\tVector 1 the first element [0] is " << v1[0];
    
    cout << "2D vector:\n\tVector2D the second row & first column [1,0] is " << v2d[1,0];
    
}
