//function outside class
class person{
    
    public:
    void show();
        
};
void person::show()
{
    cout<<"this is show";
}
int main()
{
    person p1;
    p1.show();
}
