#include <iostream>
#include <typeinfo>
#include <vector>
#include "math.h"
#include "vector.h"
#include <sstream>
#include <fstream>
#include <string>


//using namespace std;

int main()
{
    /*
    int note = 0;
    string input = "";
    vector<int>notes;
    while(true)
    {
        cout << "enter your notes" << endl;
        getline(cin, input);

        istringstream converter(input);

        if(!(converter >> note))
        {
            break;
        }
        vectorize(notes, note);
    }
    ofstream outf("bulletin.txt", ios::app);
    if(outf){
        for(int i = 0; i < notes.size(); i++) {
        outf << notes[i] << endl;
        }
    }
    */
    std::string line;

    std::ifstream inf("bulletin.txt");
    if(inf)
    {
        while(getline(inf, line))
        {
            std::cout << line << std::endl;
        }
    }
    std::cout << ajouterDeux(5) << std::endl;
    return 0;
}
