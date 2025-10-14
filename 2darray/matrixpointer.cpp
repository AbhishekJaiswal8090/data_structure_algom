#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {{0, 1, 2},
                        {3, 4, 5},
                        {6, 7, 8}};
    cout << endl;
    cout<<matrix<<endl; /*returns hexadecimal val which is memory loaction*/
    cout<<matrix+1;
}