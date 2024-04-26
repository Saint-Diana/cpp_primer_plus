// floatnum.cpp -- floating-point types
#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);   // fixed-point(6 places after point)
    float tub = 10.0 / 3.0;         // good to about 6 places
    double mint = 10.0 / 3.0;       // good to about 15 places
    const float million = 1.0E6;

    cout << "tub = " << tub;                            // 3.333333
    cout << ", a million tubs = " << million * tub;     // 3333333.250000
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;                 // 33333332.000000

    cout << "mint = " << mint << " and a million mints = "; // 3.333333
    cout << million * mint << endl;                         // 3333333.333333
    return 0;
}