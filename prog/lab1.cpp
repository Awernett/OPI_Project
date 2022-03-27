/*!
* \file
* \brief Main file
*  This is the main file of this project
*/

#include <iostream>
#include <bib.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

const int maxlength=1000;
int m_init[maxlength]; 
int n; 
/*!
 * @brief printhelp
 * 
 * Function, dedicated to give out key information about the capabilities of this project.
 *
 * 
 * @return Information about functions and their parameters.
 */
void printhelp()
{
  setlocale (LC_ALL, "rus");
  cout << " -a (filename) - имя входного файла "<< endl << " -b (filename) - имя выходного файла " << endl << "-o (параметр) - операция над файлом (вычисление среднего(aver), вычисление дисперсии(disp), " << endl << "вычисление среднеквадратичного отклонения(sq))" << endl;
}

/*!
 * @brief printerror
 *
 * Function, dedicated to give out information about an error, that may have occured.
 *
 *
 * @return Information about errors.
 */
void printerror()
{
	cout<<"error"<<endl;
}

/*!
 * @brief Entry point
 *
 * Execution of the program
 * starts here.
 *
 * @param argc Number of arguments
 * @param argv List of arguments
 *
 * @return Program exit status
 */
int main(int argc, char *argv[])
{
int rs;
string infn="";
string outfn="";
string op="";
while ((rs = getopt(argc,argv,":a:b:o:h")) != -1) {
switch (rs) {
case 'a': infn.assign(optarg); break;
case 'b': outfn.assign(optarg); break;
case 'h': printhelp(); exit(0);
case 'o': op.assign(optarg); break;
case ':': printerror(); exit(1);
case '?': printerror(); exit(1);
default: printerror; exit(1);
};
}
if((infn=="")||(op=="")||(outfn==""))
{
printerror();
return(1);
}
loadfromfile(infn,m_init,n);
if (op=="aver") {
cout << average(m_init,n) << endl;
}
if (op=="disp") {
cout << dispers(m_init,n);
}
if (op=="sq") {
cout << qotcl(m_init,n);
}
return(0);
}