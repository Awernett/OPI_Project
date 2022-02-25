#include "math.h"
#include "bib.h"
#include <fstream>
#include <string.h>
using namespace std;

int loadfromfile (string fn, int* lm, int& length){
	ifstream f;
	f.open(fn);
	f >> length;
	for(int i=0;i < length; i++){
		string s = "";
		f >> s;
		lm[i] = atoi(s.c_str()); // потоковая функция, передача информации
	}
f.close();
}


int savefile (string sfn, int* sm, int length){
	ofstream f;
	f.open(sfn);
	f << length << endl;
	for(int i=0;i < length; i++){
		f << sm[i] << endl; // потоковая функция, передача информации
	}
f.close();
}


double average(int* avf, int length) {
	int i, j, x;
	double Summ;
	Summ = 0;
	i = 0;
	j = length - 1;
	while (i <= j) {
		Summ = Summ + avf[i];
		i++;
	}
	return (Summ / length);
}

double dispers(int* dispf, int length) {
	int i, j, g;
	double S, aver;
	i = 0;
	j = length - 1;
	aver = average(dispf, length);
	while (i < j)
	{
		S = S + (dispf[i] - aver)*(dispf[i] - aver);
		i++;
	}
	return (S / length);
}

int summ(int* summf, int length) {

}