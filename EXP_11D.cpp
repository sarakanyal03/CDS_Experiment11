//SARA KANYAL
// 23070123115
// EXP_11D
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
        return vol;
    }

    void disp(double vol)
    {
        cout<<"Volume "<<vol<<endl;

    }

};
int main()
{
    cuboid c1;
    double v = c1.volume();
    c1.disp(v);
  
}