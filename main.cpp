#include <iostream>

using namespace std;

// Es una agrupacion nada mas

namespace Seccion1
{

    float suma (float a, float b)
    {
        return a + b;
    }
    float resta (float a, float b)
    {
        return a - b;
    }

    float multiplica(float a, float b)
    {
        return a * b;
    }
    float divide(float a, float b)
    {
        return a / b;
    }


} //end namespace Seccion1

int main()
{
    cout << Seccion1::suma(1, 2) << endl;

    return 0;
}


