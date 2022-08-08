class base{
public:
    void name(){
    cout<<"meenal"<<endl;
    }
protected:
    void surname()
    {
cout<<"Agrawal"<<endl;
        }
    private:
    void age(){
        cout<<"20"<<endl;
    }
};

class derived:private base
{
    
};

int main() {
    derived b;
    b.name();
     b.surname();
     b.age();

}
