4/14/20 - Notes (CS)

Inheritance - Destructor, Derived Class, Constructor, Protected, and Hierarchy:

- Destroying derived-class object
     - Chain of destuctor calls
       works in reverse order
       works in a hierarchial manner
- Base-class constructors are not inherited by derived classes.
- Objects always executes first in the class 
- Conversion constructor converts pointer string to pointer character.
- If you have a object then you can have a copy constructor when you make a copy of the object.
- You can check if your constructor works if you put brasis above it and below it. This lets the object go in scope and get out of scope immediately. 
- The access specifier you put in the base class will be the one that cross platforms to the derived class. (Link for better understanding: https://prnt.sc/rz9pj7)
       Public to Public, Protected to Protected, but for Private it's Private to everything.

(1) Quiz Question: What is the relationship between the base class and derived class in inheritance?
(2) Quiz Question: What is the other advantage of using inheritance.

4/14/20 - Continued (CS)

Polymorphism:
- Each object performs the correct tasks for that object's type.
- New classses can be added with little to nothing modification to existing code due to readability.

-Polymorphism occurs when a program invokes a virtual function through a base-class pointer reference. 
    -C++ dynamically chooses the correct function for the class from which the          object was instantiated.

-Polymorphism promotes extensibility: Software written to invoke polymorphic behavior is written independently of the types of objects to which the messages are sent.

(3) Quiz Question: What is polymorphism?

Polymorphism is a broad topic, but in short, it's when an object invokes a pointer base-class reference. An example of this would be many types of games like Pacman, Flappy bird, etc. This example would be best set because the game function calls and displays the object/character in the game moving, walking, shooting, etc.

(4) Quiz Question: What is the advantage of Polymorphism?

Polymorphism promotes extensibility: Software written to invoke polymorphic behavior is written independently of the types of objects to which the messages are sent. An example of this would be, as a woman at the same time is a mother, a wife, an employee. So the same person posses different behavior in different situations. This is called polymorphism.

- In C++ you're able to develop your own data types.
- Scalable class and able to modify better objects and functions better.

Demonstration,

- Invoking base-class functions from derived-class objects.
- Aiming derived-class pointers at base-class objects.
- Derived-class member-function valls via base-call pointers.
- Demonstrating polymorphism using virtual functions
     - Base-class pointers aimed at derived-class objects
            - (See this for better reference: https://prnt.sc/s0o590 
               and also this: https://prnt.sc/s0o6bw
               and also this: https://prnt.sc/s0o870)