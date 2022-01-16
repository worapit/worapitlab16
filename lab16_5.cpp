#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *t,int *w,int *e,int *r){
	int data[4] = {50,100,500,1000};
	*t = data[rand()%4];
	*w = data[rand()%4];
	while(*t == *w){
		*w = data[rand()%4];
	}
	*e = data[rand()%4];
	while(*e == *t or *e == *w){
		*e = data[rand()%4];
	}
	*r = data[rand()%4];
	while(*r == *t or *r == *w or *r == *e){
		*r = data[rand()%4];
	}
	
}
