#include<iostream>
using namespace std;
class Shape{
 public:
 //CODE   
 virtual void show()=0;     
};

class Rectangle : public Shape{

 public:
  //CODE 
  void show()
  {
    cout<<"Showing a Rectangle"<<endl;
  } 
};

class Circle : public Shape{
     
  public:
//CODE    
    void show()
    {
      cout<<"Showing a Circle"<<endl;
    }
};

int main() {
    Shape * ptr;
    int choice;
    cin >> choice;
    
    if (choice == 1)
        ptr = new Rectangle();
      else if(choice == 2)
            ptr = new Circle();
        
    ptr->show();    
    return 0;
}
