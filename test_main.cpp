#include <iostream>

class Point{
 private:
    int x, y;
 public:
    Point():Point(0,0){}
    Point(const Point &other) : Point(other.x,other.y){}
    
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    int getX (){
        return this-> x;
    }
    int getY (){
        return this-> y;
    }
    void setX(const int &x){
        if(x>=-50 && x<=50){
            this->x = x;
        }else{
            std::cout<<"x>=-50 && x<=50";

        }
    }
    void setY(const int &x){
        if(y>=-50 && y<=50){
            this->y = y;
        }else{
            std::cout<<"y>=-50 && y<=50";
            
        }
    }
};


int main()
{
<<<<<<< HEAD
    Point test_point(0,5);
    
    test_point.setX(-7);
    std::cout<<"X= "<<test_point.getX()<<"\n";
    std::cout<<"Y= "<<test_point.getY()<<"\n";

=======
    std::cout<<"Hello Insaf"<<"\n";
    std::cout<<"Hello Insaf"<<"\n";
    std::cout<<"Hello World"<<"\n";
    std::cout<<"Hello Insaf"<<"\n";
    insaf(1,2);
>>>>>>> 912923db94067c78f80c8a3772c8cc180d1f4cd5
    return 0;
}
