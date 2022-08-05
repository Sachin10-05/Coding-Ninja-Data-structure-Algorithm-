1) What will be the output of the following code ?
   #include <iostream>
   using namespace std;
   #include <cstring>
   class Student
   {
     public :
     char *name;
     int rollNo;

     // Constructor 1
     Student(int num)
     {
        rollNo = num;
        name = new char[10];
        strcpy(name, "abc");
     }

     // Constructor 2
     Student(int num, char *str)
     {
        rollNo = num;
        name = new char[strlen(str) + 1];
        strcpy(name, str);
     }
     
     void print()
     {
        cout << name << " "  <<  rollNo << " ";
     }
   };

   int main() 
   {
      Student s1(101);
      s1.print();
      char str[] ="xyz";
      Student *s2 = new Student(150, str);
      s2 -> print();
   }

   a) Error
   b) GarbageValue 101 xyz 150
   c) abc 101 xyz 150 ✔
   d) None





//******************************************************************************************************************************************************************* 

2) #include <iostream>
   using namespace std;
   class Student
   {
    public :
        char *name;
        int rollNo;

        void print()
        {
            cout << name << " "  <<  rollNo << " ";
        }
   };

   int main() 
   {
      char name[] = "Misha";
      Student s1;
      s1.name = name;
      s1.rollNo = 101;

      name[0] = 'N';
      Student s2;
      s2.name = name;
      s2.rollNo = 102;

      s1.print();
      s2.print();
   }

   a) Misha 101 Nisha 102 
   b) Nisha 101 Nisha 102 ✔
   c) Misha 101 Misha 102
   d) Nisha 101 Misha 102
    
     
     
     
     
//******************************************************************************************************************************************************************* 
     
3) class Student 
   {
    public :
      const int rollNumber;
      int age;
   };
   
   int main() 
   {
      Student s1;
      s1.rollNumber = 101;
      s1.age = 20;
      cout << s1.rollNumber << " " << s1.age;
   }

   a) 101 20
   b) Garbage
   c) Compilation Error ✔
   d) None 
   
   
   
   
   
//******************************************************************************************************************************************************************* 

4) class Student 
   {
    public :
    const int rollNumber;
    int age;
    Student(int r, int a) : rollNumber(r), age(a) 
    {
    }
   };
   
   int main() 
   {
      Student s1(100, 23);
      cout << s1.rollNumber << " " << s1.age;
   }
      
   a) Error
   b) 100 Garbage
   c) 100 23 ✔
   d) Garbage Garbage
   
   
   
   
   
   
//******************************************************************************************************************************************************************* 

5) class Student 
   {
    public :
    const int rollNumber;
    int age;
    int &x;
    Student(int r, int a) : rollNumber(r), age(a) 
    {
    }
   };
   
   int main() 
   {
    Student s1(100, 23);
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
   }

   a) 100 23 23
   b) 100 23 Garbage
   c) Error ✔
   d) None
   
   
   
   
   
   
//******************************************************************************************************************************************************************* 

6) Member function
   If a member function does not alter any data in the class, that may be declared as ....................
     
   a) constant member function ✔
   b) private member function
   c) static member function
   d) None
   
   
   
   
  
//******************************************************************************************************************************************************************* 
   ✨✨✨
7) class Student 
    {
    public :

    int rollNumber;
    int age;
    };
   
   int main() 
   {
      Student s1;
      Student const s2 = s1;
      s1.rollNumber = 101;
      s1.age = 20;
      cout << s2.rollNumber << " " << s2.age;
   }

   a) 101 20
   b) Error
   c) Garbage Garbage ✔
   d) None

   

     


//******************************************************************************************************************************************************************* 

8) class Student 
   {
    int rollNumber;
    public :
       int age;
       Student(int r) 
       {
        rollNumber = r;
       }
       int getRollNumber() 
       {
        return rollNumber;
       }
   };
  
  int main() 
  {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
  }

  a) 101
  b) 0
  c) Garbage
  d) Error ✔
  
  
  
  
  
  
//*******************************************************************************************************************************************************************

9) class Student 
   {
    public :
    int rollNumber;
    static int totalStudents;
   };
   int Student::totalStudents = 20;
   int main() 
   {
      Student s;
    // Correct statement to access totalStudents
   }

   a) totalStudents
   b) s.totalStudents
   c) Student.totalStudents
   d) Student :: totalStudents ✔
   
   
   
   
   
//*******************************************************************************************************************************************************************

10) class Student 
    {
    public :
    int rollNumber;
    static int getRollNumber() {
        return rollNumber;
    }
    };
    int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
    }
    
    a) 101
    b) 0
    c) Compilation Error ✔
    d) Error
    
    
    
    
    
    
//******************************************************************************************************************************************************************

11) class Student {
    public :
    int rollNumber;
    static int totalStudents;

    Student() {
        totalStudents++;
    }
    };

    int Student::totalStudents = 20;
    int main() {
    Student s1, s2, s3, s4;
    cout << Student :: totalStudents;
    }

    Ans:- 24 ✔











































