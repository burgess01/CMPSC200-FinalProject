// b2d(int binary)
// this is a function that inputs an integer value
// in binary form and outputs its decimal equivalent

#include <math.h>

int b2d(int binary){
    int value = 0, res = 0, count = 0;
	unsigned long r = binary;
	int temp = binary;

	while(temp > 0){ //get the number of values
		temp = temp / 10;
		count++;
	}
	int q = 10;
	int sub = 0;
	while(count > 0){
		int beta = pow(10, count-1);
		//printf("%lu\t%d\n", binary, beta);
		q = r / beta;
		if(count > 1){
			res = (res + q) * 2;
		}
		else{
			res = (res + q);
		}
		//printf("%d\n", res);
		r = r % beta;
		//printf("%d\t%lu\t%d\n", q, r, count);
		count--;	
	}
	return res;
}