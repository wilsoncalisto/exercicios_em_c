int reverse(int num)
{
    int rev;
    
    rev=0;

    while (num>0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}
