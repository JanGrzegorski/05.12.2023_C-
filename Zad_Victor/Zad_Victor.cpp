#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    srand(time(NULL));
    vector <int> tablica;

    for (size_t i = 0; i < 5; i++)
    {
        int los = rand() % 100 + 1;
        tablica.push_back(los);
    }
    sort(tablica.begin(), tablica.end());
    for (size_t i = 0; i < tablica.size(); i++) {
        cout << tablica[i] << endl;
    }
    {

    }
    return EXIT_SUCCESS;
}

