// h2d(*arr hex)

// this is a function that inputs an array value
// in hexidecimal form and outputs its decimal equivalent

void h2d(int *hex){ //ex. hex: [2,4,E]
    int *res = 0;
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
    //iterate:
    for(int i = 0; i < len - 1; i++){
        int carry = 0;
    // if not last iteration: add carry to hex value and multiply by 16
        if(i == len - 2){
            *res = (*res + hex[i]) * 16;
        }
        else{ // if last carry: only add carry to hex value
            *res = *res + hex[i];
        }
    }
}