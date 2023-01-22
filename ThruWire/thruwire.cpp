#include <stdio.h>
#include <stdlib.h>
#include "Vthruwire.h"
#include "verilated.h"

int main(int argc, char **argv){
	Verilated::commandArgs(argc, argv);
	Vthruwire *tb = new Vthruwire;
	
	// Now run the design for 20 testcases
	
	for(int i=0;i<=20;++i){
		tb->i_sw = i&1;
		tb->eval();

		printf("k = %2d, sw = %d, led = %d\n",i,tb->i_sw,tb->o_led);
	}
	return 0;
}

