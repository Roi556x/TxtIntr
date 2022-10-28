#include <iostream>
#include <getopt.h>
using namespace std;
int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Rus");
    { if (argc==1)
        {
            cout<<"Чтобы вывести операцию суммы, напишите: -s (аргументы)"<< endl;
            cout<<"Чтобы вывести операцию вычитания, напишите: -p (аргументы)"<<endl;
        }
    
    char i, opt, summa = 0, substraction = 0, x, b=1, a;
    while ((opt = getopt (argc, argv, "s:p")) != -1){
        switch (opt) 
        {
            case 's':
                for (i=2; i<argc; i++)
                {
                    x = strtol(argv[i], NULL, 10);
                    summa=summa+x;
                }
                printf("Summa result is %d\n", summa);
            break;
            case 'p':
            {
                a= strtol(argv[2], NULL, 10);
                for (int i=2; i<argc; i++)
                {
                    x = strtol(argv[i], NULL, 10);
                   substraction=x-substraction;
                    
                }
                printf("Substraction result is %d\n", substraction);
            break;
            }
        }
    }
}
}
