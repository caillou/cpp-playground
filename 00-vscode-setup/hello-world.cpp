// vs code setup for cpp,
// c.f. https://code.visualstudio.com/docs/cpp/config-clang-mac#_prerequisites

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
