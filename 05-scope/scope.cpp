// vs code setup for cpp,
// c.f. https://code.visualstudio.com/docs/cpp/config-clang-mac#_prerequisites

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    string lastWord;
    for (const string &word : msg)
    {
        lastWord = word;
        cout << word << " ";
    }
    cout << lastWord;
    cout << endl;
}
