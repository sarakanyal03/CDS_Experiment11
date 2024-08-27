//SARA KANYAL
// 23070123115
// EXP_11C
# include<iostream>
using namespace std;
class cuboid
{
    private:
    double h = 10.0,b = 20.0,l = 3.0;
    public:
    double volume()
    {
        double vol;
        vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}