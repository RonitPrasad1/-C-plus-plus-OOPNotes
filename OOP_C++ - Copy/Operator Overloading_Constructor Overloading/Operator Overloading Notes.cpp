4/9/20 - Notes

Operator Overloading, Friend function, ostream, istream, keyword:

- Operator Overloading is when you overload an existing function and also it allows you to call an existing function a different name based on the scope. 
  It's important because it's a type of polymorphism and it helps with user interface.

- Some are not member functions because they need to access a class's private data members.
- If it's a friend function, it can access both public and private members of a class.
- ostream and istream basically are cin and cout, but instead of: ob.print() we can do cout << ob and cin >> ob;
- Operator Overloading and classing ostream and istream let's you have a cleaner interface and shows that you think widely because it allows C++ operators to work with user-defined classes/objects.
- The keyword is simply " + ". 

Example: - Copy the link and search it up and see the Ex of the above/below notes -
https://cdn.discordapp.com/attachments/658505958410027008/697924549605326918/image0.png

- It first makes Complex object called res. This is a temporary object that will hold the results after   the addition.
- Then, it takes "res's" private data member, real, and assigns it to the addition of 2 other   Complex objects.
- It does the same for the "imag" data member and returns this temp object because it now has the result of addition of the 2 other object's private data members