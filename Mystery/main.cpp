#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    string mystery;
    cout << "Enter a mystery word:" << endl;
    cin >> mystery;
    cout <<  "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << "let's do this !" << endl;
    string newTry;
    string groundMe(mystery);
    string mix;
    while (groundMe.size() > 0)
    {
        int index(rand()%groundMe.size());
        mix.push_back(groundMe[index]);
        groundMe.erase(index, 1);
    }
    do
    {
        cout << "try to guess the word behind: " << mix << endl;
        cin >> newTry;
    }
    while (newTry.compare(mystery) != 0);
    return 0;
}
