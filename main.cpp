#include <iostream>
#include "cmath"
using namespace std;

double f (double y) {
    y=(pow(y,2)* cos(y))+1;

    return y;
}
double riduzione (double x) {
    double y, z;
    y=x*10000;
    z=double (y)-int(y);

    return z/10000;


}

int main() {

    double a, b, x, err;

    do {
        cout << "insierire estremi" << endl;
        cin >> a >> b;

    } while((f(a)*f(b))>=0);

    do {

        x = ((a + b) / 2);


        if (f(x) == 0) {
            cout << x << endl;
            break;
        }


            if (f(x) * f(b) < 0) {
                a = x;
            } else {
                b = x;
            }

            err = abs(((b - a) / 2));

    } while (err >=  pow(10, -6));

    cout << x-riduzione(x) << endl;

    return 0;
}
