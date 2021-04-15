#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std; /*Eðer kullanmaz isen coutun baþýna std:: koyman gerekir.*/


int main()
{
		int a = 100; int b = 200;
		int *p = &a; int *q = &b;
		//p = q;
		printf("%d - %d - %p - %p - %p - %p", a, b, p, q, a, b);
}
