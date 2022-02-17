#ifndef bib_H // предотвр. повторное включение
#define bib_H //создаем некую переменную
#include <string>
extern int loadfromfile (std::string, int*, int&);
extern int savefile (std::string, int*, int);
extern double average (int*, int);
extern double dispers (int*, int);
extern double qotcl (int*, int);
#endif
