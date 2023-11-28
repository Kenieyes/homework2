#include <iostream>
using std::cin, std::cout, std::endl, std::string;
int main()   {
     int metr;
    int kilo;
    int metr1;
    string kilos = "километров";
    string metrs = "метров";
    string metrs1 = "метров";
    cout << "Введите количество метров: ";
    cin >> metr;
    kilo = metr / 1000;
    metr1 = metr % 1000;
    if (metr % 10 == 1) {
        metrs = "метр";
    }
    if ((metr % 10 == 2 metr % 10 == 3 metr % 10 == 4) &&
     (metr % 100 != 12 && metr % 100 != 13 && metr % 100 != 14)) {
        metrs = "метра";
    }
    if (metr1 % 10 == 1) {
        metrs1 = "метр";
    }
    if ((metr1 % 10 == 2 metr1 % 10 == 3 metr1 % 10 == 4) &&
     (metr1 % 100 != 12 && metr1 % 100 != 13 && metr1 % 100 != 14)) {
        metrs1 = "метра";
    }
    if (kilo % 10 == 1) {
        kilos = "километр";
    }
    if ((kilo % 10 == 2 kilo % 10 == 3 kilo % 10 == 4) &&
     (kilo % 100 != 12 && kilo % 100 != 13 && kilo % 100 != 14)) {
        kilos = "километра";
    }
    cout << metr << " " << metrs << " = " << kilo << " " <<
     kilos << " " << metr1 << " " << metrs << endl;
    return 0;
}