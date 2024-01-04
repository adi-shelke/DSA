if (n == 1)
        return x % m;
    int temp = x;
    if (n % 2 == 0)
    {
        int i = n / 2;
        while (i > 0)
        {
            temp *= n / 2;
            i--;
        }
        temp *= temp;
        return temp % m;
    }
    else
    {
        int i = n / 2;
        while (i > 0)
        {
            temp *= n / 2;
            i--;
        }
        temp *= temp;
        temp *= x;
        return temp % m;
    }