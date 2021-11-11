// h2b(*arr hex)

// this is a function that inputs an array value
// in hexidecimal form and outputs its binary equivalent

#include <math.h>

int h2b(int hex){
    int res = 0;
    // split hex into an array
    int len = sizeof(hex) / sizeof(hex[0]);
    // iterate through, turning letter values to numbers
    for(int i = 0; i < len - 1; i++){
        if(hex[i] = 'A'){
            hex[i] = 10;
        }
        if(hex[i] = 'B'){
            hex[i] = 11;
        }
        if(hex[i] = 'C'){
            hex[i] = 12;
        }
        if(hex[i] = 'D'){
            hex[i] = 13;
        }
        if(hex[i] = 'E'){
            hex[i] = 14;
        }
        if(hex[i] = 'F'){
            hex[i] = 15;
        }
    }
    // find binary equivalent for each option
    for(int i = 0; i < len - 1; i++){
        int value = 0, count = 0, res = 0;
        int decimal = hex[i];
	    unsigned long num = 0;
        while(decimal > 0){
            num = num * 10 + (decimal % 2);
            decimal = decimal / 2;
            //printf("%lu\t%d\n", num, decimal);
            count++;
        }
        unsigned long temp = 0;
        while(num != 0){ // code for reversing int
            temp = num % 10;
            res = res * 10 + temp;
            num = num / 10;
            //printf("%lu\t%lu\t%lu\n", temp, res, num);
        }
        // if the lenth of binary isn't long enough, add zeroes to correct for zero dropping
        int check = 0;
        unsigned long resCheck = res;
        while(resCheck > 0){ //get the number of values
            resCheck = resCheck / 10;
            check++;
        }
        //printf("%d\t%d\n", count, check);
        if(count != check){ // if the number of values that should be in it is smaller than what is actually in it:
            count = count - check; // get the difference
            res = res * pow(10, count); // multiply: 1 * 1000 = 1000 in binary = 8 in decimal
        }
    }
    // return output
    return res;
}