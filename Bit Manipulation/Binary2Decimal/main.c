
double pow(double X,double Y)
{
    if(Y==0)
    {
        return 1;
    }else if(Y==1)
    {
        return X;
    }
    else
    {
        double temp={X};

        for(int i=0;i<Y;++i)
        {
            X*=temp;
        };

        return X;
    };

};

long int Bin2Dec(unsigned long long int bin)
{

    long int dec={0};
    unsigned int BitPos=0;
    while(bin!=0)
    {
        if(bin%10)
        {
            dec+=(pow(2,BitPos));

            ++BitPos;

        }else
        {
            ++BitPos;
        };
        bin/=10;
    };

    return dec;
}