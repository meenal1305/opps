// Diamond problem
class person
{
  public:
    int rollno;
    void show (string s)
    {
        cout<<"this is person "<< s<<endl;
    }
};
class A:public person
{

};
class B:public person
{
};
class c:public A,public B
{
    
};


int main() {
    
    c ob;
    
    ob.A :: show("girl ");
    
  
}
