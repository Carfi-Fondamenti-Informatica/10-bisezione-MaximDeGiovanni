#include <iostream>
using namespace std;
#include "cmath"

int main() {
   double a, b, x, err;

    do {
        cout << "insierire estremi" << endl;
        cin >> a >> b;

    } while((funzione(a)*funzione(b))>=0);

    do {

        x = ((a + b) / 2);


        if (funzione(x) == 0) {
            cout << x/1000000 << endl;
            cout << funzione(x)/1000000 << endl;

            break;
        }


            if (funzione(a) * funzione(b) < 0) {
                b = x;
            } else {
                a = x;
            }

            err = abs(((b - a) / 2));

    } while (err>= 1/ pow(M_E, -6));

    cout << x/1000000 << endl;
    cout << funzione(x)/1000000 << endl;

   return 0;
}
