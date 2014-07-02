#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    int in = 0;

    while (1)
    {
        cin >> in;

        if (in == 42)
            break;
        else
            cout << in << "\n";
    };

    return 0;
}
