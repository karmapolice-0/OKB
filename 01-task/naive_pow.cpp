#include <iostream>

double iPow(double b, int n)
{
    /**
     * Computes a power with an integer exponent
     * @param b the base of the power
     * @param n an integer representing the exponent of the power
     * O(n)
     */
    double power = b;
    if (b == 0 && n <= 0)
        // throw IllegalArgumentException("Undefined.");
        std::cout << "Undefined.\n";
    else if (b == 0 && n > 0)
        power = 0;
    else if (n == 0)
        power = 1;
    else if (b == 1)
        power = 1;
    else if ((b > 0 || b < 0) && n == 1)
        power = b;
    else if ((b > 0 || b < 0) && n == -1)
        power = 1 / b;
    else if (b == -1 && n % 2 == 0)
        power = 1;
    else if (b == -1 && n % 2 != 0)
        power = -1;
    else if ((b > 0 || b < 0) && n > 0)
    {
        for (int i = 1; i != n; i++)
            b *= power;
        power = b;
    }
    else if ((b > 0 || b < 0) && n < 0)
    {
        for (int i = 1; i != n; i++)
            b *= power;
        power = 1 / b;
    }
    return power;
}

int main()
{
    return 0;
}