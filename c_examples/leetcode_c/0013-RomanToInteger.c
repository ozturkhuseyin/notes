typedef enum {
    I,
    V,
    X,
    L,
    C,
    D,
    M 
} roman_e;

const int roman_numbers[] = {1, 5, 10, 50, 100, 500, 1000};

int calc_roman(char s)
{
    switch (s)
    {
        case 'I':
            return roman_numbers[I];
        case 'V':
            return roman_numbers[V];
        case 'X':
            return roman_numbers[X];
        case 'L':
            return roman_numbers[L];
        case 'C':
            return roman_numbers[C];
        case 'D':
            return roman_numbers[D];
        case 'M':
            return roman_numbers[M];
    }
    return 0;
}

int romanToInt(char * s){
    char *temp_len = s;
    
    int len = 0;
    int check = 0;
    
    // check all chars
    while (*temp_len != '\0')
    {
        if (*temp_len == 'I' | *temp_len == 'V' | *temp_len == 'X' | *temp_len == 'L' | *temp_len == 'C' |*temp_len == 'D' | *temp_len == 'M') {
            check++;
        }
        
        temp_len++;
        len++;
    }
    
    if (len != check) {
        return 0;
    }
    
    // parse
    int func;   // 0 +, 1 -
    int sum = 0;
    
    for (int i = 0; i < len; i++)
    {
        if ((*(s + i) == *(s + i + 1)) & (i != len)) {
            func = 0;
        } else {
            if (calc_roman(*(s + i)) < calc_roman(*(s + i + 1)) ) {
                func = 1;
            } else {
                func = 0;
            }
        }
        
        if (!func) {
            sum += calc_roman(*(s + i));
        } else {
            sum -= calc_roman(*(s + i));
        }
    }
    
    return sum;
}
