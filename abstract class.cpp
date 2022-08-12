class chocolate
{
  virtual void dite()=0;
};
class fivestar:public chocolate
{
public:
void dite()
{
cout<<"Calories 70"<<endl;
cout<<"Saturated Fat 3g"<<endl;
cout<<"Sodium 30mg"<<endl;
cout<<"Total Carbohydrates 9g"<<endl;
}
};
int main() {
   fivestar f;
     f.dite();
}
