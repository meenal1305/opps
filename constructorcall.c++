// diamond problem constructor call
class person
{
  public:
    int rollno;

    person()
    {
        
    }
    
    person(string s)
    {
        cout<<"this is person "<< s<<endl;
    }
};
class A:public person
{
 using person::person;
 public:
    A(){}
   
};

class B:public person
{
public:
    B(){}
    using person::person;
};
class c:public A,public B
{
public:
    using A::A;
    
    c(){}
};


int main() {
    
    c ob("girl");
    
    
  
}
