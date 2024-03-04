#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    /***************************************************
     * Code your program here
     ***************************************************/
}