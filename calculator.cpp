#include <iostream>
#include <cmath>
#include <string>
void gg(double x,double y,char op,std::string& ans);
int main()
{
    int x;
    int y;
    std::string ans;
    char op;

    std::cout<<"This is an test mode of claculator.\n"<<"Fill the following condition.\n";
    std::cout<<"x:";
    std::cin>>x;std::cout<<std::endl;
    std::cout<<"y:";
    std::cin>>y;std::cout<<std::endl;
    std::cout<<"Choose an operator:";
    std::cin>> op;
    gg(x,y,op,ans);
    std::cout<<ans;
    return 0;
}

void gg(double x,double y,char op,std::string& ans)
{
   switch(op)
   {
    case '+':
             ans=x+y;
             std::cout<<ans;
             break;
             

    case '-':
             ans=x-y;
             std::cout<<ans;
             break;
    case '*':
             ans=x*y;
             std::cout<<ans;
             break;
    case '/':
             ans=x/y;
             std::cout<<ans;         
             break;
   }
    
}   