
#include <iostream>
using namespace std;

//MULTIDIMENSIONAL LOOPING ARRAY, INT DECLARED DURING INITIALIZATION
int main()
{
    int i;
    int j;
    string cars[3] = {"Ca", "Cb", "Cd"};
    string Car [3] = {"CA", "CB", "CD"};
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            cout << cars[j]<<" ";
    }
    cout << Car[i]<<" "<<endl;
    }
    return 0;
}

