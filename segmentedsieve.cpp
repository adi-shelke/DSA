#include <vector>
#include <math.h>
#include <iostream>
#define N 1000000
using namespace std;
bool sieve[N + 1];

void createSieve()
{
    for (int i = 2; i <= N; i++)
        sieve[i] = true;
    for (int i = 2; i * i <= N; i++)
        if (sieve[i] == true)
            for (int j = i * i; j <= N; j++)
                sieve[j] = false;
}

vector<int> generatePrimes(int n)
{
    vector<int> ds;
    for (int i = 2; i <= n; i++)
        if (sieve[i] == true)
        {
            ds.push_back(i);
        }

    // for (auto el : ds)
    //     cout << el << " ";

    return ds;
}
int main()
{
    int l, r;
    cin >> l >> r;
    createSieve();

    // generating all primes till sqrt of r
    vector<int> primes = generatePrimes(sqrt(r));

    // create a dummmy array of size r-l+1 and make every element as 1;
    vector<int> dummy(r - l + 1, 1);

    // mark all multiples of prime in dummy
    for (auto el : primes)
    {
        int firstMultiple = (l / el) * el;
        if (firstMultiple < l)
            firstMultiple += el;

        for (int i = max(firstMultiple, el * el); i <= r; i += el)
            dummy[i - l] = false;
    }

    // get all primes as answer
    for (int i = l; i <= r; i++)
        if (dummy[i - l] == 1)
            cout << i << " ";

    return 0;
}