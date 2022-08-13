class instrument{
  public:
    
        int price=00;
    string type="default";
    
   virtual void show()
    {
        cout<<price<<" and "<<type<<endl;
    }
    };
class flute:public instrument
{
public:
    void show()
    {
     price = 630;
     type = "wind";
            cout<<price<<" and "<<type<<endl;
    }
};
class keyboard:public instrument{
public:
    void show()
{
    price=1200;
    type="electronic";
               cout<<price<<" and "<<type<<endl;
}
};
class guitar:public instrument{

    void show()
{
    price=6000;
    type="strings";
               cout<<price<<" and "<<type<<endl;
}
};


void display(instrument *in){
for(int i=0;i<10;i++)
    {
        in->show();
    }
    cout<<endl;
};
int main(){
    instrument *in;
    flute f;
    keyboard k;
    guitar g;
    display(&f);
     display(&k);
     display(&g);
}
