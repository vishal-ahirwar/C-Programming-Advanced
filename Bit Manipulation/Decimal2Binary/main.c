unsigned long long int Dec2Bin(unsigned long int dec)
{
    unsigned long long int bin={0};
    unsigned int Pos={1};

    while(dec!=0)
    {
        if(dec%2)
        {
            bin+=(Pos);
            Pos*=10;
        }else
        {
            Pos*=10;
        };
        dec/=2;

    };
    
    return bin;
};
