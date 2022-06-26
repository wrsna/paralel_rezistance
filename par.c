#include<stdio.h>
#include<string.h>

int main(int argc, char** argv){
	float gPar = 0;
	float rPar = 0;
	float r[argc];

	for(int i=1; i<argc; i++){
		sscanf(argv[i], "%f", &r[i]);
		gPar = gPar + (1/(r[i]));
	}

	rPar = 1/gPar;

	printf("paralel resistance is: %f\n",rPar);

	return rPar;
}
