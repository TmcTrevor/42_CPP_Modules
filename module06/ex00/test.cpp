#include <iostream>
#include <string>

using namespace std;
int  main(int ac, char  **argv)
{
    //float i = 2;
    double d = atof(argv[1]);
    char a = static_cast<char>(d);
    int e = static_cast<int>(d);
    cout << a << endl;
    cout << e << endl;
}