/*mp1.c by Nghia Tran*/
#include <stdio.h>
#include "/mnt/nfs/clasnetappvm/fs3/dwjones/2630mp1.h"

int main(){
	int index = 0;
	char tempText;
	int tempKey = 0;
    while(key[index] != -1){ // condition to assign temporary holders until index of key is less than -1
        tempKey = key[index];
        tempText = text[key[index]];
        printf("%c", tempText);
            if (key[index + 1] < -1){//this loop goes back through the loop x amount of times equal to absolute value of the key that was < -1
                for (int negative = 0; negative < key[index + 1]*-1; negative = negative+1)
                printf("%c", text[tempKey+1+negative]);
                }
                index = index + 1;
    }
    return 0;
}

