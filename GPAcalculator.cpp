#include<iostream>
using namespace std;

double gradef(char grade[]){
    double gradeP;

        if(grade[0]=='A' || grade[0]=='a' && grade[1]=='+')  gradeP=4.00;
   else if(grade[0]=='A' || grade[0]=='a' && grade[1]=='\0') gradeP=3.75;
   else if(grade[0]=='A' || grade[0]=='a' && grade[1]=='-')  gradeP=3.50;
   else if(grade[0]=='B' || grade[0]=='b' && grade[1]=='+')  gradeP=3.25;
   else if(grade[0]=='B' || grade[0]=='b' && grade[1]=='-')  gradeP=2.75;
   else if(grade[0]=='C' || grade[0]=='c' && grade[1]=='+')  gradeP=2.50;
   else if(grade[0]=='C' || grade[0]=='c' && grade[1]=='-')  gradeP=2.25;
   else if(grade[0]=='D' || grade[0]=='d' && grade[1]=='\0') gradeP=2.00;
   else if(grade[0]=='F' || grade[0]=='f' && grade[1]=='\0') gradeP=0.00;
        else cout<<"Invalid grade\n";
        return gradeP;
}
int main()
{
    int n;
    double creditH,gradeP,sum=0,creditS=0,cGPA;
    char grade[10];

    cout<<"Enter the number of subject:\n";  //subject input
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the grade of"<<" "<<i+1<<"no. subject\n";
        cin>>grade;
        gradeP=gradef(grade); //converting char grade to number
        cout<<"Enter credit hour of respective subject: \n";
        cin >> creditH; //credit hour input
        sum=sum+creditH*gradeP; // weight of grade
        creditS=creditS+creditH; //sum of credit
    }
    cGPA=sum/creditS;

    cout<<"Your CGPA is : "<<cGPA;

}
