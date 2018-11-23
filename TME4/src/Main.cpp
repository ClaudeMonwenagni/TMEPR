#include"TME4_9.h"
#include"TME4_10.h"
#include"TME4_13.h"
#include"TME4_12.h"
#include<vector>

using namespace pr;
using namespace ps;

int main(){

		int nbt;
		int nbj;
		Barrier b(nbj);
		Pool pool(nbt);

		vector<int> results(nbj);
		pool.start(nbt);

		for(int i=0;i<nbj;++i){
			pool.submit(new MonJob(i,&results[i]));
		}



		//Q.14

		b.waitFor();
		pool.stop();

		return 0;


}



