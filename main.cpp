#include <iostream>

using namespace std;

int main()
{
   short trimestru, profitTrimestru1 = 3000 , profitTrimestru2 = 5000, profitTrimestru3 = 4000, profitTrimestru4 = 2500, bilant = 8375;
   cout << " Profitul carui trimestru doriti sa verificati?" << endl;
   cin >> trimestru;

   if (trimestru > 4 || trimestru <= 0)
    cout << "Valoare trimestru incorecta" <<endl;
     else
     {
        if ( trimestru == 2)
        cout << "Profitul firmei este " << profitTrimestru2 << endl;
        if ( trimestru == 3)
        cout << "Profitul firmei este " << profitTrimestru3 << endl;
        if ( trimestru == 4)
        cout << "Profitul firmei este " << profitTrimestru4 << endl;
        else if (trimestru == 1)
            cout << "Profitul firmul in trimestru I este " << profitTrimestru1 << " si bilantrul anului anterior este " << bilant;
     }
    return 0;
}
