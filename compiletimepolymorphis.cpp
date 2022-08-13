class shape{
    public:
    int area(int a)
    {
        return a*a;
    }
    int area(int a,int b)
    {
        return a*b;
    }
};
int main(){
        shape sq;
        shape rec;
    cout<<sq.area(2)<<endl;
    cout<<rec.area(2,4);
}
