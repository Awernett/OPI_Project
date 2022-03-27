/*!
* \file
* \brief Main file
*  This is the library file of this project.
*/
#include "math.h"
#include "bib.h"
#include <fstream>
#include <string.h>
using namespace std;


int loadfromfile(string fn, int* lm, int& length) {
	ifstream f;
	f.open(fn);
	f >> length;
	for (int i = 0; i < length; i++) {
		string s = "";
		f >> s;
		lm[i] = atoi(s.c_str());
	}
	f.close();
}


int savefile(string sfn, int* sm, int length) {
	ofstream f;
	f.open(sfn);
	f << length << endl;
	for (int i = 0; i < length; i++) {
		f << sm[i] << endl;
	}
	f.close();
}

/*!
 * @brief average(int* avf, int length)
 *
 * A function that calculates the average value of a number series in a file
 *
 * @param avf Pointer to the beginning of the file.
 * @param length Length of the file.
 *
 * @return Double, the average value of a number series.
 */
double average(int* avf, int length) {
	int i, j, x;
	double S;
	S = 0;
	i = 0;
	j = length - 1;
	while (i <= j) {
		S = S + avf[i];
		i++;
	}
	return (S / length);
}

/*!
 * @brief dispers(int* dispf, int length)
 *
 * A function that calculates the dispersion of a number series in a file.
 * 
 * @param dispvf Pointer to the beginning of the file.
 * @param length Length of the file.
 *
 * @return Double, dispersion of a number series.
 */
double dispers(int* dispf, int length) {

	int i, j, g;
	double S, av;
	i = 0;
	j = length - 1;
	av = average(dispf, length);
	while (i < j)
	{
		S = S + (dispf[i] - av)*(dispf[i] - av);
		i++;
	}
	return (S / length);
}
/*!
 * @brief qotcl(int* qf, int length)
 *
 * A function for calculating the standard deviation of a number series in a file.
 *
 * @param qf Pointer to the beginning of the file.
 * @param length Length of the file.
 *
 * @return Double, standard deviation of a number series.
 */
double qotcl(int* qf, int length) {
	double d;
	double ans;
	d = dispers(qf, length);
	ans = sqrt(d);
	return (ans);
}