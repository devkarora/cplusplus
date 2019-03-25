#include<iostream>
#include<math.h>
using namespace std;

//enum day {mon=1,tue,wed,thu=10 ,fri,sat,sun};

//typedef int marks;

//defining structures

struct  rectangle {
    int length;
    int breadth;
    };
struct  card {
int face;
int shape;
int color;
};

int main()
{
    /*
    int a,b,c;
    cout<<"Hello World"<<endl;
    cout<<"Type 2 variables :";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum is " <<c<<endl;

    string a;
    cout<<"What is your name?"<<endl;
     getline(cin,a);
    //cin>>a;
    cout<<"Welcome "<<a<<endl;
    //Becaise there are two words it reads only one
    //to get the full line
    */

    /*
    int x;
    char x;
    bool x;
    long double x;
    cout<<sizeof(x)<<endl;
    return 0;

    cout<<INT_MIN<<"   "<<INT_MAX;


    float day = 12;
    float distance=12345e-8L;
    cout<<day<<"    "<<distance;
*/

// Working with overflow
    /*
    char x=127;
    x++;
    cout<<(int)x<<endl;
    char y=-128;
    y--;
    cout<<(int)y<<endl;
    char z=129;
    y--;
    cout<<(int)z<<endl;
    int e=INT_MAx;
    e++;
    cout<<(int)e<<endl;
    return 0;
    */
//Operators and Expressions
//area of circle

/*
    float r ,area;
    cout<<"Enter the radius of the circle"<<endl;
     cin>>r;
         area=3.1416f*r*r;

    cout<<"The area of circle is: "<<area<<ends;

    int a,b,c;
    float root;
    cout<<"Enter a,b,c respectively"<<endl;
    cin>>a>>b>>c;

   root= float(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"Sqrt of a b c is : "<<root;

    */
  //compound assignment operator
    /*int x ,y ;
    cin>>x>>y;
    x+=y;
    cout<<x;

    //increment and decrement operators
    int x , y ,z1,z2;
    cin>>x>>y;
    z1=x++;
    z2=++y;

    cout<<x<<" "<<z1<<" "<<y<<" "<<z2;*/
    //bitwise operator
    //int x,y,z;

    //x=11;y=7;
    //z=x&y;
    //z=x|y;
    //z=x^y;
    //char x=5,y;
    //y=x<<1;
    //char z=x>>1;//right shift
    //y=~x;
    //cout<<(int)y<<endl;

/*
    //using enum to define our own variables
    day d,e;
    d=tue;
        //cout<<tue<<endl;
    cout<<d<<" "<<e<<endl;
  */

 // marks m1,m2;
   // m1=10;m2=100;
    //m1,m2 are of type int only;
/*
    //execrize 1
    //area of circle taking radius as input;
    int r;float area;
    cout<<"Please enter radius of circle to find out area"<<endl;
    cin>>r;
    area = 3.1416*r*r;
    cout<<"Area : "<<area;

    float ns,bs,pa,pd;
    cout<<"Please enter your basic salary /n your percentage allowance /n percentage of deduction"<<endl;
    cin>>bs>>pa>>pd ;
    ns=bs+(bs*pa/100)-(bs*pd/100);
    cout<<"Your Net Salary "<<ns;

//if(-10)
    if(0)
{
    cout<<"Dev";
}
else{
    cout<<"K Arora";
}

// LAST ELSE BELONGS OT LAST IF
//check if a person is young or not
int age;
cin>>age;
//if(age>12&&age<50)
//if(age>12 , age<=50) // note here the first condition is not evaluate in decision making
if(age<12||age>=50)
    {
    cout<<"Person is young"<<endl;
}
else{
        cout<<"The Person is not young";
}


//program to check whether the denominator is zero or not.
int a,b;float c;
cin>>a>>b;
c =a/(float)b;
if(b==0)
{
    cout<<"Invalid input Divison by 0  ";
}
else{
    cout<<"Output:"<<c<<endl;
}

//some basic programs of if else
//short circuit in conditional operators
//try not to make an incremental operator

int a ,b,c,i;
a=10;b=5;i=1;
//if(a>b && ++i>0)
  if(a>b ||++i>0)//check for a<b to understand its working
{

}
cout<<i<<endl;

*/
//DYNAMIC DECLARATION
/*
if a variable is just to be used inside an if statement or it has a scope
then just declare it inside an if statement only because
it will consume less memory , if the if statement is executed
the memory will be free and hence can be used by some else variable.

if (int k=b*b ; k<c)
{
}
the variable k above has the scope of the above block and when the
program ends it will allocate its memory to another variable
*/
/*
    //take values in an array and store them and them print them
    int i ,j,k;
    cout<<"How many values you want to add in arrray?"<<endl;
    cin>>i;
    char arr[i];
    cout<<"Enter values in the array"<<i<<endl;

    for ( j=0;j<i;j++)
    {

         cout<<"Enter Values:"<<endl;
         cin>>arr[j];
    }

    cout<<"Entered values are:"<<endl;

    for ( j=0;j<i;j++){

        cout<<arr[j]<<endl;
    }

*/

/*
//trying to code patters

//rectangle
int i,j,k;
for(i=0;i<21;i++)
{
    cout<<"/";
}
    cout<<""<<endl;
for(j=0;j<4;j++)
{
    cout<<"/";
    for(k=0;k<19;k++)
    {
     cout<<" ";
    }
    cout<<"/"<<endl;
}
for(i=0;i<21;i++)
{
    cout<<"/";
}

//trying out autohotkey
// it works
*/

//arrays

//int a[5]={1,2,3};
//cout<<a[2]<<endl;
//structures
//struct rectangle rect={2,3};
//int area;
//changing length and breadth
//rect.length=4;rect.breadth=5;
//area=rect.length*rect.breadth;
//cout<<area<<endl;

//52 structures for whole deck of cards

/*for(int i=0;i<=51;i++)
{
    struct card i;
    for(int j=0;)
}
*/
//array of structures with initializations
//struct card deck[52]={{1,0,0},{1,2,1}};
//cout<<deck[0].shape<<endl;;
//above is incorrect try of implementation
//instead use array of structures

//pointers
int a=12;
int *p;
p=&a;

cout<<a<<" "<<*p<<endl;
//p holds address of data variable a

//p=new int[5];

//int[4]=2;


    return 0;
}



