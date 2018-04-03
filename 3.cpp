#include<iostream>
#include<string>
using namespace std;
class country 
{ 
        protected: 
                           char cname[30]; 
                           float pprc; 
                           float Iprc; 
                           float ratio; 
        public: 

                          country(){ } 
                          virtual void getdata() 
                    { 
                      //        cout<<"Enter Country Name "; 
                              cin>>cname; 
                       //       cout<<"Enter the % of Polio "; 
                              cin>>pprc; 
                         //     cout<<"Enter the % of Literacy "; 
                              cin>>Iprc; 
                     } 
                        virtual void display() 
                    { 
                        
                        cout<<"Country Name "<<cname<<endl; 
                        cout<<"Country Polio% "<<pprc<<endl; 
                        cout<<"Country Lit. % "<<Iprc<<endl; 
                        cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl; 
                    } 
}; 
           class state: public country 
    { 
    protected:
      char sname[30];
      float pprs,iprs,ratios;
public:
   void disp(){cout<<"Welcome";}
   void getdata()
   {
    cin>>sname>>pprs>>iprs;
   }
   void display()
   {
    cout<<"State Name "<<sname<<endl;
    cout<<"State Polio% "<<pprs<<endl;
    cout<<"State Lit.% "<<iprs<<endl;
    cout<<"The Measure od Interdependency "<<float (pprs/iprs)<<endl;
   }
//STUDENT CODE HERE
};
int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  country *c,d;

  state s;
  c = &s;
  d.getdata();

  c->getdata();
  d.display();
  c->display();


    return 0;
}
