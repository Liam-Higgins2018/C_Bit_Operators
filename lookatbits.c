	#include <stdio.h>
	#include <inttypes.h>

	void printbits(uint_t s){
	for(int i = 63; i > 0; i--)
	{
		printf("%d",((1 << i) & s) ? 1 : 0 );
	}
}

	int main(int argc, char *argv[]){
		uint64_t r = 65; 
		printbits(s);
		printf("%llx\t%lld\n", r, r);

		return 0;

}
