//SARA KANYAL
// 23070123115
// EXP_11B
# include<iostream>
using namespace std;
class cuboid
{
    public:
    double h = 2.0,b = 3.0,l = 4.0;
    double volume()
    {
        double vol = h * b * l;
        cout<<"Volume "<<vol<<endl;
    }

};
int main()
{
    cuboid c1;
    c1.volume();
  
}