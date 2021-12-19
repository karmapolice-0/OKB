#include <iostream>
#include <math.h>

#define ll long long
#define ld long double

/*
 * O(log(n))
 */
ll fastPow(ll base, ll power)
{
    ll res = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            res *= base;
        }
        base *= base;
        power = power >> 1;
    }
    return res;
}
ll fastPow(ll base, ll power, ll mod)
{
    ll res = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        power = power >> 1;
    }
    return res;
}

// n - amount of iterations
ld ln_v1(ld x, int n)
{
    ld res = 0;
    for (int k = 0; k < n; k++)
    {
        ld c = 2 * k + 1;
        ld a = fastPow(x - 1, c);
        ld b = fastPow(x + 1, c);
        res += a / (b * c);
    }
    return 2 * res;
}

ld ln_v2(ld x, int n)
{
    ld a = x - 1;
    ld aIter = (x - 1) * (x - 1);
    ld b = 1;
    ld bIter = 2;
    ld c = x + 1;
    ld cIter = fastPow(x + 1, 2);
    ld ln = a / (b * c);

    for (int k = 1; k < n; k++)
    {
        a *= aIter;
        b += bIter;
        c *= cIter;
        ln += a / (b * c);
    }
    return 2 * ln;
}

int main()
{
    ld g;
    int iterations;
    std::cin >> g >> iterations;
    std::cout << ln_v2(g, iterations) << '\n'
              << "perfect res is: " << std::log(g) << std::endl;

    return 0;
}