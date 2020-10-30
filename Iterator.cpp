#include "Iterator.h"
using namespace std;

Iterator::Iterator(Aggregate** a, int n){
	for(int i=0; i<n; i++){this->array.push_back(a[i]);}
}
