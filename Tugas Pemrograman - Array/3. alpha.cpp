#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int alpha[50];

    for(int i=0; i < 50; i++)
    {
        alpha[i]= i*i;
        if(i >25)
        {
            alpha[i]= 3*i;
        }
    }

    for(int i=0; i < 50; i++)
    {
        if(i%10 == 0)
        {
            cout << "\n";
        }
        cout << setw(4) << alpha[i] << " ";
    }

}
