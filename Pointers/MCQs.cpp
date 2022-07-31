1) Pointer Declaration
//********************

Which of the following is the proper declaration of a pointer?
a) int x;
b) int &x;
c) int *x; ✔
d) ptr x;





2) Address of variable
//********************

Which of the following gives the memory address of integer variable a ?
a) *a;
b) a;
c) &a;  ✔
d) address(a);





3) Address of variable
//********************

Which of the following gives the memory address of variable 'b' pointed by pointer 'a' i.e.
int b = 10;
int *a = &b;
a) a  ✔
b) *a
c) &a
d) address(a)



  
  
4) Pointer Output
//***************

What will happen in this code?
int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;
a) b is assigned to a
b) p now points to b  ✔
c) a is assigned to b
d) q now points to a





5) 
int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  “ << b << endl;
a)  7 17
b)  17 7
c)  7 7  ✔
d)  17 17
      
      

  
  
6) 
int a = 50;
int *ptr = &a;
int *q = ptr;
(*q)++;
cout << a  << endl;
a) 50
b) 51 ✔
c) Error
d) None of these





7)
int a = 50;
int *ptr = &a;
cout << (*ptr)++ << “ “;
cout << a << endl;
a) 50 51 ✔
b) 51 50
c) 51 51
d) 50 50

  
  
  
  
8) 
int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;
a) 10
b) 0
c) Error ✔





9) 
int a = 7; 
int b = 17; 
int *c = &b; 
*c = 7; 
cout << a << " " << b << endl;
a) 18 18
b) 7 18
c) 17 7
d) 7 7 ✔





10) 
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;
a) 2.5 10.5 2.5
b) 2.5 11.5 2.5
c) 2.5 2.5 2.5 ✔
d) 11.5 11.5 2.5

  

  
  
11)
int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;
a) Garbage_value 7
b) 7 Garbage_value ✔
c) 8 8
d) 7 7
  
  
  
  
  
12)
Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -
int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;
Ans :- 412 ✔
  
  
  
  
  
13)
Assume memory address of variable ‘a’ is : 200 and a double variable is of size 8 bytes, what will be the output -
double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;
Ans:- 208 ✔



14)
Assume integer takes 4 bytes and integer pointer 8 bytes.
int a[5];
int *c;
cout << sizeof(a) << “ “ << sizeof(c);
a) 8 8
b) 5 8
c) 20 8 ✔
d) 20 4
  
  
  
  
  
15)
int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1);
Ans:- 1 2 ✔





16)
Assume that address of 0th index of array ‘a’ is : 200.
What is the output -
int a[6] = {1, 2, 3};
cout << a << “ “ << &a;
a) Error
b) 200 204
c) 200 200 ✔
d) 1 200
e) 200 1

  
  
  
  
17)
Assume that address of 0th index of array ‘a’ is : 200. What is the output -
int a[3] = {1, 2, 3};
cout << *(a + 2);
Ans:- 3 ✔





18) ✨✨✨✨✨✨
Assume address of 0th index of array 'a' is 200.
What is the output -
int a[6] = {1, 2, 3};
int *b = a;   //it works in case of array
cout << b[2];
a) Error
b) 3 ✔
c) 1
d) 200
e) 212

  
  
  
  
19)
Assume address of 0th index of array 'a' is 200.
What is the output -
int a[] = {1, 2, 3, 4, 5};
cout << *(a) << " " << *(a + 4);
a) Error
b) 200 216
c) 1 5 ✔
d) None of these





20)
int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p << endl;
a) 1
b) 2
c) Garbage value
d) Error ✔





21) Character & Pointers
//**********************

char ch = 'a';
char* ptr = &ch;
ch++;
cout << *ptr << endl;
a) a
b) b ✔
c) 97
d) 98
  
  
  
  
  
22)
Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
a) 200
b) x
c) xyz ✔
d) None of these





23) ✨✨
Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;
a) 201 
b) y  
c) xyz  
d) yz ✔





24)
char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
Ans:- h h ✔





25)Pointer & Function
//*******************

Figure out the correct output of the following code.
void changeSign(int *p)
{
  *p = (*p)  *  -1;
}
int main()
{
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}
a) -10 ✔
b) 10
c) Error
d) None of the above





26) 
void fun(int a[]) 
{
    cout << a[0] << " ";
}

int main() 
{
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}
Ans:- 2 1 ✔





27)
What will be the output ?
void square(int *p)
{
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main()
{
 int a = 10;
 square(&a);
 cout << a << endl;
}
a) 100
b) 10 ✔
c) Error
d) None of these





28) Double Pointer
//****************

int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
a) 10 21 ✔
b) 11 20
c) 11 21
d) 10 20
Explaination: p points to a. q points to p directly and a through p (double pointer). *q — value stored in p is changed to address of b instead of that of a. 
              (*p)++ — value that p points to, which now is of b, is incremented by 1 (b becomes 21). Value of a remains unchanged.

  
  


29)
int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ + 4;
cout << a << " " << b << endl;
a) 100 104 
b) 101 104 ✔
c) 101 105
d) 100 105


  
  

30)
What will be the output ?
int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++;
int *r = *q;
(*r)++;
cout << a << " " << b << endl;
a) 102 100 ✔
b) 101 100
c) 101 101
d) 102 101



  
  
31)
What will be the output ?
void increment(int **p)
{
  (**p)++;
}

int main()
{
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}
a) 10
b) 11 ✔
c) Error
d) None of these





32) 
Find the output :
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;
}
a) 12
b) 14
c) 13 ✔
d) error





33)
#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}
a) 10,20,30,40,50,
b) 50,40,30,20,10,
c) 10,30,20,40,50, ✔
d) None of these





34)
#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}
a) fg ✔
b) cdef
c) defg
d) abcd





35) Characters & Pointers
#include <iostream>
using namespace std;
int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
  return 0;
}
a) ABCDEFGHIJ ✔
b) AAAAAAAAAA
c) JJJJJJJJ
d) none of the mentioned





36)
#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}
a) geeksforgeeks geeksquiz geeksforgeeks geeksquiz
b) geeksquiz geeksforgeeks geeksquiz geeksforgeeks
c) geeksquiz geeksforgeeks geeksforgeeks geeksquiz ✔
d) Compiler Error





37)
#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}
a) 90.5 3 ✔
b) 90.5 12
c) 10.0 12
d) undefined





38)
#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != ‘\0’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}
a) AAAABBBBCCCCDDDD
b) ABCD
c) A65AAB66BBC67CCD68DD ✔
d) Compilation Error





39)
#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}
a) 7 6 14
b) 14 7 5
c) 14 7 6 ✔
d) 14 6 5



  
  
40)
#include<iostream>
using namespace std;
int main()
{
  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;
  return 0;
}
a) 8 8 8
b) 10 10 10 ✔
c) 9 10 11
d) 9 10 10


  
  

41)
int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() 
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}
a) 21
b) 18
c) 19 ✔
d) 14



