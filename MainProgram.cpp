#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
---------------------------------------
PART 1 — Variables and Arithmetic
---------------------------------------
*/

int addNumbers(int a, int b)
{
  int sum=0;
  sum = a+b;
  return sum;

}



/*
---------------------------------------
PART 2 — Loops
---------------------------------------
*/

int sumUpToN(int n)
{
    int sum=0;
    int a=1;
    while(a<=n){
        sum=sum+a;
        a++;
    }
    return sum;
    // TODO
    // Using a loop calculate the sum
    // 1 + 2 + 3 + ... + n
}



/*
---------------------------------------
PART 3 — Vectors
---------------------------------------
*/

int findMaximum(vector<int> numbers)
{
    int max = numbers[0];
    for(int a=0;a<numbers.size();a++){
        if(max<numbers[a]){
            max=numbers[a];
        }
    }
    return max;
    // TODO
    // Return the largest number in the vector
}



/*
---------------------------------------
PART 4 — Strings
---------------------------------------
*/

string reverseString(string text)
{
   
   string ters= "";
   for(int a=text.length()-1;a>=0;a--){
       ters=ters+text[a];
   }
   return ters;
    // TODO
    // Return the reversed version of the string
}



/*
---------------------------------------
PART 5 — Simple Class
---------------------------------------
*/

class Student
{
private:
    string name;
    int grade;

public:
  Student(string a,int b){
      name=a;
      grade=b;
  }
    // TODO
    // Create a constructor that receives
    // name and grade

void printInfo(){
    cout<<"name= "<< name<<endl;
    cout<<"grade= "<<grade<<endl;
}
    // TODO
    // Create a function printInfo()
    // that prints:
    // Name: <name>
    // Grade: <grade>

};



/*
---------------------------------------
MAIN FUNCTION
---------------------------------------
*/

int main()
{
    cout << "C++ Review Lab\n";

    /*
    PART 1 TEST
    */

    cout << "Sum of 4 + 5 = "
         << addNumbers(4,5)
         << endl;

    /*
    PART 2 TEST
    */

    cout << "Sum up to 10 = "
         << sumUpToN(10)
         << endl;


    /*
    PART 3 TEST
    */

    vector<int> numbers = {3,7,2,9,5};

    cout << "Maximum value = "
         << findMaximum(numbers)
         << endl;


    /*
    PART 4 TEST
    */

    cout << "Reverse of hello = "
         << reverseString("hello")
         << endl;


    /*
    PART 5 TEST
    */

    Student s("Alice", 90);

    s.printInfo();


    return 0;
}
