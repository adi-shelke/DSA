#include<iostream>
using namespace std;

struct product{
    int productCode;
    int productPrice;
};

void insert(product prod[],int *prodCount);
void pr(product prod[],int prodCount);
void search(product prod[],int prodCount);

int main()
{
    product prod[10];
    int ch;
    int prodCount=0;
    do{
        cout<<"\n\nEnter your choice number from below: "<<endl;
    cout<<"1) Insert Record\t2) Display Database\t3) Search Record\t4) Delete Record\t5) Update Record\t 6) Sort\t7) Exit"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        insert(prod,&prodCount);
        break;
    case 2:
        pr(prod,prodCount);
        break;
    case 3:
        search(prod,prodCount);
        break;
    // case 4:
    //     pr(prod);
    //     break;
    // case 5:
    //     pr(prod);
    //     break;
    // case 6:
    //     pr(prod);
    //     break;
    
    default:
        break;
    }
    }while (ch!=0);
    
    
    // insert(prod);
    // pr(prod);

}

void insert(product prod[],int *prodCount)
{
    if(*prodCount>=10)
        cout<<"The database is full"<<endl;
    else
    {
        int prodCode,prodPrice;
        cout<<"Enter the product code and price:"<<endl;
        cin>>prodCode>>prodPrice;
        prod[*prodCount].productCode=prodCode;
        prod[*prodCount].productPrice=prodPrice;
        *prodCount=*prodCount+1;
    }
}
void pr(product prod[],int prodCount)
{
   for (int i = 0; i <prodCount; i++)
   {
        cout<<prod[i].productCode<<"\t"<<prod[i].productPrice<<endl;
   }
}
void search(product prod[],int prodCount)
{
    int key;
    cout<<"Enter the product id to search: ";
    cin>>key;
    int flag=0;
    for(int i=0;i<prodCount;i++)
    {
        if(prod[i].productCode==key)
        {
            cout<<"Product found with following details"<<endl;
            cout<<"Product Code: "<<prod[i].productCode<<"\nProduct Price: "<<prod[i].productPrice<<endl;
            flag=1;
            break;
        }
    }
        if(flag==0)
            cout<<"Productnot found"<<endl;

}
