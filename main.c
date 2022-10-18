#include <msp430.h> 
#include <limits.h>

/**
 * main.c
 */
int sum(int n1, int n2){
    int y = n1+n2;
    return y;
}
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	int a = INT_MAX; //integer max
	int b = 1;
	int c = sum (a,b);
	while(1);
	return 0;
}


