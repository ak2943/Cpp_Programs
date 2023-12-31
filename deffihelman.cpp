#include <cmath>
#include <iostream>
using namespace std;
long long int power(long long int a, long long int b,long long int P)
{
    if (b == 1)
        return a;
    else
        return (((long long int)pow(a, b)) % P);
}
int main()
{
    long long int P, G, x, a, y, b, ka, kb;
 
    P = 21; 
    cout << "The value of P : " << P << endl;
 
    G = 9; 
    cout << "The value of G : " << G << endl;
 
    // Alice will choose the private key a
    a = 7; 
    cout << "The private key a for Alice : " << a << endl;
 
    x = power(G, a, P); // gets the generated key
 
    // Bob will choose the private key b
    b = 3; // b is the chosen private key
    cout << "The private key b for Bob : " << b << endl;
 
    y = power(G, b, P); 
 
    // Generating the secret key after the exchange
    ka = power(y, a, P); 
    kb = power(x, b, P); 
    cout << "Secret key for the Alice is : " << ka << endl;
    cout << "Secret key for the Alice is : " << kb << endl;
 
    return 0;
}
