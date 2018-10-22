#include <iostream>
#include <vector>

using namespace std;

void vectorize(vector<int>& pizza, int newNote) {
        pizza.push_back(newNote);

        for(int i = 0; i < pizza.size(); i++) {
            cout << "note n° " << i << " valeur : " << pizza[i] << endl;
        }
}
