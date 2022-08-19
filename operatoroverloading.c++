class furniture
{
    public:
    int table;
    
    furniture(){}
    
    furniture(int table)
    {
        this->table=table;
    }
    furniture operator + (furniture obj)
{
    furniture harshit(0);
    harshit.table=table+obj.table;
        return harshit;
}
};

int main() {
 furniture f1(12);
    furniture f2(2);
    furniture f3;
    f3=f1+f2;
    cout<<f3.table;
    
}
