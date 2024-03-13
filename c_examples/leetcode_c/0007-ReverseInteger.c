long power(int base, int power)
{
    long ret = 1;

    for (int i = 0; i < power; i++)
    {
        ret *= 10;
    }

    return ret;
}

int reverse(int x){
    long temp_x = x; 
    int len = 0;

    int is_negative;

    if (x < 0)
    {
        is_negative = 1;
        temp_x *= -1;
    } else if (x > 0) {
        is_negative = 0;
    } else if (x == 0) {
        return 0;
    }

    if ((x > 2147483647) | (x < -2147483647)) {return 0;}

    while (1)
    {
        temp_x /= 10;
        len ++;

        if(temp_x == 0) {break;}
    }

    temp_x = x;
    
    if ((len > 9) & ((temp_x % 10) > 2)) {return 0;}
    if (is_negative) {temp_x *= -1;}
    
    long ret = 0;
    for (int i = len; i > 0; i--)
    {
        ret += (temp_x % 10) * power(10, i);
        temp_x = (temp_x - (temp_x % 10)) / 10;
    }
    
    ret /= 10;

    if (ret > 2147483647) {return 0;}
    
    if (is_negative) {
        ret *= -1;
    }
    
    return ret;
}
