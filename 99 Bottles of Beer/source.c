#include<stdio.h>
int main(){
	for(int i=99;i>1;i--){
        printf("%i bottles of beer on the wall, %i bottles of beer.\nTake one down and pass it around, %i bottle%s of beer on the wall.\n\n",i,i,i-1,(i-1==1)?"":"s");
    }
	printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n\nNo more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.");
	return 0;
}