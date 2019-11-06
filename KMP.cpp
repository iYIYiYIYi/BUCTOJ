
#include<iostream>
using namespace std;
#include <string.h>
#define Maxsize 100
typedef char Mystring[Maxsize];

int index(Mystring M, Mystring P){
    int pi = 0,mi = 0,plen = strlen(P),mlen = strlen(M);
    while(pi<plen&&mi<mlen){
        if(P[pi]==M[mi]){
			mi++;
            pi++;
        }else {
        	mi = mi - pi;
            pi = 0;
        }
    }
    if(pi == plen)
    	return mi-pi;
    else
    	return -1;
}
int main(){


}
