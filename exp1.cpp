#include<iostream>
using namespace std;
int main()
{
    int mathSize,sciSize;
    int common; //students who like both the subjects
    cout<<"Enter the size pf students who like maths: ";
    cin>>mathSize;
    int mathArr[mathSize];
    cout<<"Enter the roll number of students who like maths"<<endl;
    for(int i=0;i<mathSize;i++)
        cin>>mathArr[i];
    
    cout<<"Enter the size of students who like science: ";
    cin>>sciSize;
    int sciArr[sciSize];
    cout<<"Enter the roll number of students who like science"<<endl;
    for (int i = 0; i < sciSize; i++)
        cin>>sciArr[i];
    cout<<"Enter number of students who like both the subjects: ";
    cin>>common;

    int mathOnly[mathSize-common]; // set to determine students who like maths only
    int sciOnly[sciSize-common]; // set to determine students who like science only
    int Union[mathSize+sciSize-common]; // set to determine students who either like maths or science

    int pnt=0;
    //Finding the students who like maths only
    for (int i = 0; i < mathSize; i++)
    {
        int j;
        for(j=0;j<sciSize;j++)
        {
            if(mathArr[i]==sciArr[j])
                break;
        }
        if(j==sciSize)
        {
            mathOnly[pnt]=mathArr[i];
            pnt++;
        }
    }

    pnt=0;

    //Finding the students who like science only
    for (int i = 0; i < sciSize; i++)
    {
        int j;
        for(j=0;j<mathSize;j++)
        {
            if(sciArr[i]==mathArr[j])
                break;
        }
        if(j==mathSize)
        {
            sciOnly[pnt]=sciArr[i];
            pnt++;
        }
    }
    pnt=0;

    //Finding students who like eiter maths or science
    for (int i = 0; i < mathSize; i++)
    {
       Union[pnt]=mathArr[i];
        pnt++;
    }
    for(int i=0;i<sciSize;i++)
    {
        int j;
        for(j=0;j<mathSize;j++)
        {
            if(sciArr[i]==mathArr[j])
                break;
        }
        if(j==mathSize)
        {
            Union[pnt]=sciArr[i];
            pnt++;
        }
    }
    //Displaying students who like maths only
    cout<<"Following are the students who like maths only"<<endl;
    for(int i=0;i<(mathSize-common);i++)
        cout<<mathOnly[i]<<" ";
    cout<<endl;

    //Displaying students who like science only
    cout<<"Following are the students who like science only"<<endl;
    for(int i=0;i<(sciSize-common);i++)
        cout<<sciOnly[i]<<" ";
    cout<<endl;

    //Displaying students who like either subjects
    cout<<"Following are the students who like either maths or science"<<endl;
    for(int i=0;i<(mathSize+sciSize-common);i++)
        cout<<Union[i]<<" ";
    cout<<endl;
    return 0;
}