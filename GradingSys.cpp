#include<iostream>
#include<string>
using namespace std;
class students
{
    string name;
    float grade;
    public:
    void get()
    {
        cout<<"Enter the name of student: ";
        cin>>name;
        cout<<"Enter grade: ";
        cin>>grade;
    }
    void display()
    { 
        cout<<"Name of student: "<<name<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
    float tellgrade()
    {
        return grade;
    }
};

int main()
{
    float avg=0;
    int j;
    cout<<"Enter the number of students: ";
    cin>>j;
    students s[j];
    for(int a=0;a<j;a++)
    {
        s[a].get();
    }
    int sum=0;
    for(int x=0;x<j;x++)
    {
        sum=sum+s[x].tellgrade();
    }
    avg=sum/j;
    int index1,index2=0;
    int min=s[0].tellgrade();
    int max=s[0].tellgrade();
    for (int x=1;x<j;x++) 
        {
            if(min>s[x].tellgrade())
            {
                min=s[x].tellgrade();
                index1=x;
            }
        }
    for (int y=1;y<j;y++) 
        {
            if(max<s[y].tellgrade())
            {
                max=s[y].tellgrade();
                index2=y;
            }
        }    
    cout<<"Average grades are: "<<avg<<endl;
    cout<<"Student with highest grades is: "<<endl;
    s[index2].display();
    cout<<"Student with lowest grades is: "<<endl;
    s[index1].display();
}
