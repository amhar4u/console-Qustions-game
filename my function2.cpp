#include <iostream>
using namespace std;

void myfunction(){int c, answer;
 cout<<" 1. 1,4,9,16,25,........... WHAT IS THE 25TH ELEMENT ? \n\n 1.200 \t 2.425 \t 3.625\n\n\t";
 cin>>answer;
 cout<<endl;
 cout<<endl;
 cout<<endl;
 if(answer==3)
 {
    c=c+1;
 }
 else
 {
  c==c;
 }
   cout<<" 2. 1,4,9,16,25,........... WHAT IS THE 16TH ELEMENT ? \n\n 1.200 \t 2.256 \t 3.625\n\n\t";
 cin>>answer;
 if(answer==2)
 {
    c=c+1;
 }
 else
 {
  c==c;
 }
}



int main(){
int category;
cout<<"\t\t\t 1. MATHEMATICS \t\t 2. SCIENCE \t\t 3. HISTORY \n\n\n\t\t\t\t\t 4. GEOGRAPHY \t\t\t 5. COUNRIES\n\n SELECT THE CATEGORY -- ";
cin>>category;
cout<<endl;
cout<<endl;
cout<<endl;
int c=0;
if(category==1)
{
    myfunction();
}

return 0;
}

