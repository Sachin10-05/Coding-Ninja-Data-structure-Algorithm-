1) Which of these statements is used to allocate memory for an object dynamically ?
   a) malloc
   b) alloc
   c) new  ✔
   d) give
   
   
   
   
   
2) Which of the following is/are a valid statement(s) to create an object of class Bird in C++ ?
   a) Bird b = new Bird;
   b) Bird *b = new Bird; ✔    //dynamic declaration
   c) Bird b; ✔                // static declaration of object
   d) new Bird b;





3) Figure out the correct statement
   class Car
   {
     public : 
     int price;
   };

   int main() 
   {
      Car c; 
      //Figure out the correct statement to set the price of the car object referred to by c to “10000”
   }

   a) c->price = 10000
   b) Car.price = 10000
   c) c.price = 10000; ✔
   
   
   
  
  
4) What is the output -
   #include <iostream>
   using namespace std;
   class Student 
   {
    int rollNumber;
   };
   
   int main() 
   {
    Student s;
    cout << s.rollNumber;
   }

   a) GarbageValue
   b) 0
   c) Compilation Error ✔
   d) None
   
   
   
   
   
5) What will be the output of the following program ?
   #include <iostream>
   using namespace std;
   class Shape
   {
    public : 
    int height;
    int width;
   };

   int main() 
   {
    Shape *s = new Shape();
    s -> height = 1;
    cout << s -> height;
   }

   a) Error
   b) 0
   c) 1  ✔
   d) GarbageValue
   
   
   
   
   
6) Which statement is not true in C++ language ?
   a) A public member of a class can be accessed outside the class.
   b) A private member of a class cannot be accessed by the functions of the same class. ✔
   c) A private member of a class cannot be accessed outside the same class.
   d) None of the above
   
   
   
   
   
7) What will be the Output ?
   #include <iostream>
   using namespace std;
   class Box
   {
    public :
    int width;
    int height;
    int length;
    void volume()
    {
        cout << length * width * height;
    }
   ;

   int main() 
   {
    Box b;
    b.height = 5;
    b.width = 4;
    b.volume();
   }
     
   a) Error
   b) 0
   c) 20
   d) Garbage value ✔
   Explaination: Height and width are initialised to 5 and 4 respectively but length is not initialised.Default value for an integer data member 
                 of a class is garbage value, hence length contains garbage value. Volume will thus be garbage value.

                   
                   
                   
                   
8) What will be the output of the following code ?
   #include <iostream>
   using namespace std;
   class Student
   {
    public :
    char *name;
    int rollNo;
    Student(int num)
    {
        rollNo = num;
    }

    void print()
    {
        cout << rollNo;
    }
   };

   int main() 
   {
    Student s(12);
    s.print();
   }
     
   Ans:- 12 ✔
     
     
     
     
     
9) What will be the output of the following code ?
   #include <iostream>
   using namespace std;
   class Student
   {
    public :
    char name;
    int rollNo;

    Student(int num)  //constructor
    {
        rollNo = num;
    }

    void print()
    {
        cout << name << " "  <<  rollNo;
    }
   };

   int main() 
   {
    Student *s = new Student();
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
   }
     
   a) GarbageValue 0
   b) GarbageValue 15
   c) Compilation Error ✔
   Explaination: There is Compilation error - “constructor Student() is undefined” because the default constructor is available only till the point we don’t 
                 create our own constructor. So Student class has only one constructor which require roll number as argument, hence we should pass integer as 
                 argument while creating any Student object.
   
                   
                   
                   
                   
10) Find Incorrect Statement
    Which of the following statements are not true about destructor?  
    1. It is invoked when object goes out of the scope  // True
    2. Like constructor, it can also have parameters    //False
    3. It can be declared in private section  // True
    4. It bears same name as that of the class and precedes tilde sign. //True
     
    a) Only 2, 4
    b) Only 2, 3
    c) Only 1, 3
    d) Only 1, 4
    e) Only 2 ✔
      
      
      
      
      
11) Assume class DEMO. Which of the following statement(s) responsible to invoke copy constructor?
    1. DEMO D2(D1); //  Here D1 is an already created object of class  DEMO
    2. D2 = D1; // Here D1, D2 are already created objects of class DEMO
     
    a) Only 1 ✔
    b) Only 2
    c) Both 1 and 2
      
      
      
      
      
12) Consider following piece of code:
    class Pair
    {
      public :
      int first;
      int second;
    };

    int main()
    {
      Pair *p1 = new Pair;
      Pair p2;
    }
    Which of the following statement is feasible ?
      
    a) p2 = p1;
    b) p2 = *p1; ✔
    c) Both 1 and 2 are correct.
    d) None of the above
      
      
      
      
      
13) Consider following piece of code:
    #include<iostream>
    using namespace std;
    class Pair
    {
      public :
      int first;
      int second;
    };
    int main()
    {
      Pair p1;
      p1.first = 10;
      p1.second = 20;
      Pair p2;
      p2 = p1;
      cout << p2.first << " " << p2.second << endl;
    }
    What will be the output ?
      
    a) 10 20  ✔
    b) Error
    c) Garbage_value Garbage_value
      
      
 

      
      
      
      
      









