#include <iostream>
using namespace std;

struct employee
{
    string name;
    string StaffID;
    float salary;
};

int main()
{
    int n, choice;
    cout<<"Select your choice"<<endl;
    cout<<"Enter 1: Enter Number Employees"<<endl;
    cout<<"Enter 2: Exit"<<endl;
    cout<<"Your choice: ";
    cin>>choice;
    
    if(choice ==1)
    {
        cout<<"\nEnter number of employees: ";
        cin>>n;
        
        employee EmpR[n];
        
        for(int i=0;i<=n-1; i++)
        {
            cout<<"\n\nEmployee"<<i+1<<endl;
            cout<<"\tEnter name: ";
            cin>>EmpR[i].name;
            cout<<"\tEnter Staff ID: ";
            cin>>EmpR[i].StaffID;
            cout<<"\tEnter salary: ";
            cin>>EmpR[i].salary;
        }
        
    cout<<"\n\nSelect your choice"<<endl;
    cout<<"Enter 1:Show Employee Record"<<endl;
    cout<<"Press 2:Exit";
    cout<<"Your choice:";
    cin>>choice;
    
    if(choice==1)
    {
    for(int i=0;i<=n-1;i++)
    {
        cout<<"\nEmployee"<<i+1<<endl;
        cout<<"\tStaff Name"<<EmpR[i].name<<endl;
        cout<<"\tStaff ID"<<EmpR[i].StaffID<<endl;
        cout<<"\tStaff Salary"<<EmpR[i].salary<<endl;
    }
    }
    else cout<<"Thank you for fucking with me";
}
else cout<<"Thank you ";
        
}
