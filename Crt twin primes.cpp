cpp
#include <iostream>
using namespace std;

int main()
{
    int x;                //Deklaracija spremenjivke
    cin >> x;
    bool test = true;       

    for (int i = 3; i < x; i++)
    {
        for (int j = 2; j < i/2; j++)
            if (i%j == 0)                   //Preverjanje, če je številon s števca praštevilo
            {
                test = false;
                break;
            }
        if (test == true)
        {
            for (int j = 2; j < (i+2)/2; j++)
                if ((i + 2) % j == 0)                   //prevejra, če je števec plus 2 praštevilo
                {
                    test = false;
                    break;
                }
        }
        if (test == true)                                  
                cout << i << "-" << i + 2 << endl;
        test = true;
    }

    return 0;
}
