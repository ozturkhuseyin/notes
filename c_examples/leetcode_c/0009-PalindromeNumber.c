long power(int base, int power);

bool isPalindrome(int x){
    int temp_x = x;
    int len_x = 0;

    if ((x < 0)) {
        return false;
    } else {
        while(1)
        {
            temp_x /= 10;
            len_x++;
            
            if (temp_x == 0) {break;}
        }
    }
    
    temp_x = x;
    long reversed_x = 0;
    
    for (int i = len_x; i > 0; --i)
    {
        reversed_x += (temp_x % 10) * (long)power(10, i);
        temp_x = (temp_x - (temp_x % 10)) / 10;
    }
    
    reversed_x /= 10;
    
    if (x == reversed_x) {
        return true;
    } else {
        return false;
    }
}

long power(int base, int power)
{
    long ret = 1;
    
    for (int i = 0; i < power; i++)
    {
        ret *= base;
    }
    
    return ret;
}
