// inciso a
float cubo( float numero )
{
    return numero * numero * numero;
}
//inciso b
srand(time(0));
int numeroAleatorio = rand();
//inciso c
float y = 123.45678f;
int x;

x = static_cast<int>(y);
cout << static_cast<float>(x) << endl;
//inciso d
double cuadrado( double number )
{
    return number * number;
}
//inciso e
int suma( int n )
{
    if ( 0 == n )
        return 0;
    else
        return n + suma( n - 1 );
}


