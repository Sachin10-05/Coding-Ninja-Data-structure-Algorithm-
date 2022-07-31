                                                                            VOID POINTER
                                                                            ************

1) Void pointer can point to which type of objects ?
a) int
b) double
c) float
d) All ✔





2) Example of Implicit typecasting - 
int main()
{
  int d = 65;
  int i = d;
  char ch = i;  
  cout << ch << endl;
}
Ans: - A ✔





3) 
#include <iostream>
using namespace std;

void updateValue(int *p)
{
    *p = 610 % 255;
}

int main()
{
    char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch;
}
Ans:- d ✔





//*******************************************************************************************************************************************************************
                                                                       REFERENCE & PASS BY REFERENCE
                                                                       ******************************

4) What is the correct syntax of declaring and defining a reference?
a) int a = 10; int &b; b = a;
b) int a = 10; int &b = a; ✔
c) int a = 10; int b = &a;
d) int a = 10; int &b = &a;
Explaination :- Here in option b, (&b = a) means the variable b and i are pointing to same address & making changes in any of them gets reflected to both 
                of the variables.
  
  
  
  
  
5)
#include <iostream>
using namespace std;
void func(int p)
{
    cout << p << " ";
}
int main()
{
    int i = 10;
    int &p = i;
    func(p++);
    cout << i;
}
Ans:- 10 11 ✔





6)
#include <iostream>
using namespace std;
void func(int i, int& j, int p)
{
    i++;
    j++;
    p++;
}
int main()
{
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}
Explaination:- Here only change will reflect in value of j because j is passed to function using " PASS BY REFERENCE " i.e, (int &j). 
Ans:- 10 7 10 ✔





//********************************************************************************************************************************************************************
                                                                        DYNAIC MEMORY ALLOCATION
                                                                        ************************

7) In CPP, dynamic memory allocation is done using ______________ operator.
a) calloc()
b) malloc()
c) allocate
d) new ✔





8) Deallocate memory
How will you free the memory allocated by following program -
#include <iostream>
using namespace std;    
int main() 
{
    int *a = new int;
}
a) free a;
b) delete *a;
c) delete a; ✔
d) new a;





9) Dynamic Array Creation: 
Correct statement for creating an integer array of size 5, dynamically -
a) int *arr[] = new int[5];
b) int *arr = new int[5]; ✔
c) int arr = new int[5];
d) int *arr[5] = new int;





10) Deallocate Array
Correct statement for deallocating the array is -
a) delete [] arr; ✔
b) delete arr;
c) delete *arr;
d) delete [] *arr;





11) Delete memory
On deleting a dynamic memory, if the pointer value is not modified, then the pointer points to?
a) NULL
b) Other dynamically allocated memory
c) The same deleted memory location ✔
d) It points back to location it was initialized with





//*******************************************************************************************************************************************************************
                                                                  DYNAMIC ALLOCATION OF 2D-ARRAY
                                                                  ******************************

12) 2D-Array Dynamic Creation:
How to Dynamically create a Two Dimensional Array in C++?  ✨✨✨
a) int *twoDArray = new int[10][10];
b) int **twoDArray = new int*[10]; ✔
c) int **twoDArray = new int[10][10];





13) Jagged Array
Can we create Jagged Arrays in C++ ?
a) Yes ✔ 
b) No
Expaination: A jagged array is an array whose elements are arrays, possibly of different sizes. A jagged array is sometimes called an "array of arrays." 





14) Delete 2D array  ✨✨✨
Given the following CPP Program. Select the CORRECT Syntax of deleting this 2D array? Check all that apply.
#include <iostream>
using namespace std;
int main()
{
    int **twoDArray = new int*[10];
    for(int i = 0; i < 10; i++)
        *(twoDArray + i) = new int[10];
}


Options are -
A.  delete twoDArray [][];

B.  for(int i = 0; i < 10; i++)
      delete twoDArray[i];
      delete twoDArray[];

C.  for(int i = 0; i < 10; i++)
      delete [] twoDArray[i];
      delete[] twoDArray;

D.  for(int i = 0; i < 10; i++)
      delete twoDArray[i][];
      delete[] twoDArray;

a) A
b) B
c) C ✔
d) D





//*********************************************************************************************************************************************************************
                                                                    MACROS & GLOBAL VARIABLE
                                                                    ************************

15)
What is the output of the following program?
#include<iostream>
using namespace std;
int x = 1;
void print()
{
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main()
{
    print();
    return 0;
}
a) 1
b) 2
c) 3 ✔
d) Error





16)
What is the output of the following program?
#include <iostream>
using namespace std;
#define MULTIPLY(a, b) a*b

int main()
{
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
Ans: - 16 ✔
Explaination : "MULTIPLY(a, b)" will be replaced by "a*b" in code.
                So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. And according to operator precedence, 
                multiply operator (*) has higher precedence than plus operator (+). 
                So, 3*3 will be evaluated first. Hence expression will become : 2+9+5 = 16.





17)
What is the output of the following program?
#include <iostream>
using namespace std;
#define SQUARE(x) x*x

int main()
{
    int x = 36 / SQUARE(6);
    cout << x;
    return 0;
}
Ans:- 36 ✔





//*********************************************************************************************************************************************************************
                                                                INLINE & DEFAULT ARGUMENT
                                                                *************************

18) Inline function
Inline functions are useful when ______
a) Function is large with many nested loops
b) Function has many static variables
c) Function is small and we want to avoid function call overhead. ✔
d) None of the above
Ans:- Inline functions are used to reduce the function call overhead. Inline function is a function that is expanded in line when it is called.
  
  
  
  
  
19) Default parameter ✨✨
#include<iostream>
using namespace std;
int getValue(int x = 0, int y = 0, int z)
{  
    return (x + y + z); 
}

int main()
{
   cout << getValue(10);
   return 0;
}
a) 10
b) 0
c) 20
d) Compilation Error ✔ 
Expalaination: Default parameters must be added last in C++ functions
  
  
  
  
  
20) Default Argument
Which of the following statement is correct?
a) Only one parameter of a function can be a default parameter.
b) Minimum one parameter of a function must be a default parameter.
c) All the parameters of a function can be default parameters. ✔
d) No parameter of a function can be default.
  
  
  
  
  
//********************************************************************************************************************************************************************
                                                                  CONSTANT VARIABLE
                                                                  *****************
  
21)
What is the output of the following program ?
#include <iostream>
using namespace std;
int main()
{
    int  const  p = 5;
    cout << ++p;
    return 0;
}
a) 5
b) 6
c) Error ✔
d) Garbage
Explaination:- Values of constant variables cannot be altered





22)
#include <iostream>
using namespace std;
int main()
{
    int p = 5;
    int const *q = &p;
    p++;
    cout << p << endl;
    return 0;
}
a) Error
b) 5
c) 6 ✔
d) None
  
  
  
  
  
23) 👌👌
Which statement(s) will give an error for the following code
#include <iostream>
using namespace std;
int main()
{
    int p = 5;
    int const *q = &p;
}
a) p++;
b) q++;
c) (*q)++;  ✔
  
  
  
  
  
24) 👌👌
Which statement(s) will give an error for the following code -
#include <iostream>
using namespace std;
int main()
{
    int p = 5;
    int * const q = &p;
}
a) p++;
b) q++; ✔
c) (*q)++; 
  
  
  
  
  
25)
Which statement(s) will give an error for the following code -
#include <iostream>
using namespace std;
int main()
{
    int p = 5;
    int const * const q = &p;
}
a) p++;
b) (*q)++; ✔
c) q++; ✔
  
  
  
  
  
26)
Which statement(s) will give an error for the following code -
#include <iostream>
using namespace std;
int main()
{
    const int p = 5;
    int const *q = &p;
}
a) p++; ✔
b) (*q)++; ✔
c) q++; 
  
  
  
  
  
  
  
  
  
  
  
  
  
  

