#ifndef bib_H 
#define bib_H 
#include <string>
/*!
* \brief loadfromfile function.
*
* Details about loadfromfile function.
*/

/*! \fn int *loadfromfile(string fn, int* lm, int& length)
*   \brief An example function.
*	\param fn string - file name.
*   \return a sum of x and y.
*/
extern int loadfromfile (std::string, int*, int&);
extern int savefile (std::string, int*, int);
extern double average (int*, int);
extern double dispers (int*, int);
extern double qotcl (int*, int);
#endif
