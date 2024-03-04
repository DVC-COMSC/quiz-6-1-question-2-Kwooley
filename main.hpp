#include <iostream>
#include <fstream>

using namespace std;

int writeFile(string filename);

int writeFile(string filename)
{
    /***************************************************
     * Code your program here
     ***************************************************/
    ofstream ofs;
    int N;
    int eid;
    double salary;
    string ename, dname;

    ofs.open(filename);
    if (!ofs)
    {
        cerr << "File Open Error\n";
        exit(0);
    }
    cout << "Enter the number of Employee: ";
    cin >> N;
    ofs << N << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> eid >> ename >> dname >> salary;
        ofs << eid << "\t" << ename << "\t" << dname << "\t" << salary << endl;
    }
    ofs.close();
    return N;
}

int readFile(string filename)
{
    int N=0;
    ifstream ifs;
    int eid;
    string ename, dname;
    double salary;

    ifs.open(filename);
    if (!ifs)
    {
        cerr << "File Open Error\n";
        exit(0);
    }
    ifs >> N;
    for (int i = 0; i < N; i++)
    {
        ifs >> eid >> ename >> dname >> salary;
        cout << eid << "\t" << ename << "\t" << dname << "\t" << salary << endl;
    }
    return N;
}
