#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void FlipCoin()
{
    srand(time(0));
    int counter = 0, hcount = 0, tcount = 0;
    int nflip, outcome;

    cout << "Enter number of coin flips: ";
    cin >> nflip;
    cout << "\n";
    while(counter < nflip)
    {
        outcome = rand() % 3 + 1;
        if(outcome == 1)
        {
            cout << "Heads\n";
            hcount++;
        }else{
            cout << "Tails\n";
            tcount++;
        }
        counter++;
    }
    cout << "\n";
    cout << "Heads: " << hcount << endl;
    cout << "Tails: " << tcount << endl;
    cout << "Number of flips: " << hcount + tcount << endl;
}

int main()
{
    FlipCoin();
    return 0;
}






