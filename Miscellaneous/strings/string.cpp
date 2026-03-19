#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string str;
    // getline(cin, str);
    // cout << str << endl;
    // cout << str[0] << endl;
    // cout << str[1] << endl;
    // cout << str[1] << endl;

    // for each loop
    string hlo;
    hlo = "hello brotha ";
    // for (int i = 0; i < hlo.length(); i++)
    // {
    //     cout << hlo[i] << endl;
    // }

    // cout << "for each lloop" << endl;
    // for (char ch : hlo)
    // {
    //     cout << ch << ",";
    // }

    // string member function
    cout << hlo.at(3);
    cout << endl;
    cout << hlo.substr(1, 5) << endl;

    cout << hlo.find("llo") << endl;
    return 0;
}