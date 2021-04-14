#include<stdio.h>
int main(){
	char a[12][50]={
		{"Twelve Drummers Drumming,"},
		{"Eleven Pipers Piping,"},
		{"Ten Lords-a-Leaping,"},
		{"Nine Ladies Dancing,"},
		{"Eight Maids-a-Milking,"},
		{"Seven Swans-a-Swimming,"},
		{"Six Geese-a-Laying,"},
		{"Five Gold Rings,"},
		{"Four Calling Birds,"},
		{"Three French Hens,"},
		{"Two Turtle Doves, and"},
		{"A Partridge in a Pear Tree."}
	};
	char b[12][15]={
		{"First"},
		{"Second"},
		{"Third"},
		{"Fourth"},
		{"Fifth"},
		{"Sixth"},
		{"Seventh"},
		{"Eighth"},
		{"Ninth"},
		{"Tenth"},
		{"Eleventh"},
		{"Twelfth"}
	};
	for(int i=0;i<12;i++){
		printf("On the %s day of Christmas\nMy true love sent to me\n",b[i]);
		for(int j=12-i-1;j<12;j++) printf("%s\n",a[j]);
		printf("\n");
	}
	return 0;
}