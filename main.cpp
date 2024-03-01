 #include <iostream>
using namespace std;

int main() {
    int año;

    cout << "Ingrese el año: ";
    cin >> año;

    if (año % 4 == 0 && año % 100 != 0 || año % 400 == 0) {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " No es un año bisiesto." << endl;
    }


}