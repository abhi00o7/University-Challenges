#include <stdio.h>
// Program that performs array operations// Array classclass array{
    int arrA[MAX],location,item,nA;
    int arrB[MAX],nB;
    int arr_merge[MAX+MAX],nM;
    public:
    array(){
       location=0;item=0;nA=0;
       nB=0;nM=0;
    }
    void init(); //initial data assignmentvoid traverse(); //process is display (assumed)void insert();
    void del();
    void search();
    void sort();
    void merge();
};

void array :: init(){
     clrscr();
     cout<<"\n\n*****Initialize Array*****\n";
     int choice,i;
     while(1){
    cout<<"\n\n1) Array A\n";
    cout<<"2) Array B\n";
    cout<<"3) Array Merge\n";
    cout<<"4) Return\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
         case 1 : cout<<"\n\n--Array A--\n";
              cout<<"Total elements to be inserted : ";
              cin>>nA;
              for(i=0;i<nA;i++)
             cin>>arrA[i];
              break;
         case 2 : cout<<"\n\n--Array B--\n";
              cout<<"Total elements to be inserted : ";
              cin>>nB;
              for(i=0;i<nB;i++)
             cin>>arrB[i];
              break;
         case 3 : cout<<"\n\n--Array Merge--\n";
              cout<<"Total elements to be inserted : ";
              cin>>nM;
              for(i=0;i<nM;i++)
             cin>>arr_merge[i];
              break;
         case 4 : goto end;
         default : cout<<"\n\nInvalid Position\n";
    }
     }
end:
}

void array :: traverse(){
     clrscr();
     cout<<"\n\n*****Display Process during Traversing*****\n";
     int choice,i;
     while(1){
    cout<<"\n\n1) Array A\n";
    cout<<"2) Array B\n";
    cout<<"3) Array Merge\n";
    cout<<"4) Return\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
         case 1 : cout<<"\n\n--Array A--\n";
              for(i=0;i<nA;i++)
             cout<<setw(5)<<arrA[i];
              break;
         case 2 : cout<<"\n\n--Array B--\n";
              for(i=0;i<nB;i++)
             cout<<setw(5)<<arrB[i];
              break;
         case 3 : cout<<"\n\n--Array Merge--\n";
              for(i=0;i<nM;i++)
             cout<<setw(5)<<arr_merge[i];
              break;
         case 4 : goto end;
         default : cout<<"\n\nInvalid Position\n";
    }
    getch();
     }
end:
}


/*All Operations Except Merging are  performed on arrA*/void array :: insert(){
     clrscr();
     int i;
     cout<<"\n\n*****Inserting Element*****\n";
     if(nA >= MAX){
    cout<<"\nArray is Full\nInsertion Not Possible\n";
    goto end;
     }
     cout<<"\nEnter Location of insertion : ";
     cin>>location;
     location--;
     if(location<0 || location>=nA)
     {
    cout<<"\n\nInvalid Position\n";
    goto end;
     }
     cout<<"Enter Item value to be inserted : ";
     cin>>item;
     for(i=nA-1;i>=location;i--){
     arrA[i+1] = arrA[i];
     }
     arrA[location]=item;
     nA++;
     cout<<"\nItem is Inserted\n";
end:
     getch();
}

void array :: del(){
     clrscr();
     int i;
     cout<<"\n\n*****Deleting Element*****\n";
     if(nA < 0){
    cout<<"\nArray is Empty\nDeletion Not Possible\n";
    goto end;
     }
     cout<<"\nEnter Location of deletion : ";
     cin>>location;
     location--;
     if(location<0 || location>=nA)
     {
    cout<<"\n\nInvalid Position\n";
    goto end;
     }
     cout<<"\nItem deleted is : "<<arrA[location];
     for(i=location;i<nA;i++){
     arrA[i] = arrA[i+1];
     }
     arrA[nA-1]=0;
     nA--;
 end:
      getch();
}

void array :: search(){
     clrscr();
     int i,found=-1;
     cout<<"\n\n*****Searching Element*****\n";
     cout<<"\nEnter Item value to be search : ";
     cin>>item;
     for(i=0;i<nA;i++){
     if(arrA[i] == item){
        found=i+1;
        break;
     }
     }
     if(found==-1)
     cout<<"\nSearch NOT FOUND\n";
     else
     cout<<"\nSearch is FOUND at "<<found<<" location\n";
     getch();
}

void array :: sort(){
     clrscr();
     int i,j,temp;
     cout<<"\n\n*****Sorting Element*****\n";
     for(i=0;i<nA;i++){
    for(j=i;j<nA;j++){
      if(arrA[i] > arrA[j]){
         temp    = arrA[i];
         arrA[i] = arrA[j];
         arrA[j] = temp;
      }
    }
     }
    cout<<"\nData are Sorted\n";
    getch();
}

void array :: merge(){
     clrscr();
     int i,j;
     cout<<"\n\n*****Merging Arrays*****\n";
     for(i=0;i<nA;i++)
    arr_merge[i]=arrA[i];

     for(j=0;j<nB;j++,i++)
    arr_merge[i]=arrB[j];

     nM=nA+nB;
     cout<<"\nArrays are Merged\n";
     getch();
}

// Program that accesses array class and displays result.


#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
#define MAX 10
#include "array.cpp"void main()
{
   int choice;
   array obj;
   while(1){
   clrscr();
   cout<<"\t\tALL ARRAY OPERATIONS\n\n";
   cout<<"\t\t1) Initialise Data\n";
   cout<<"\t\t2) Traverse (Display Process)\n";
   cout<<"\t\t3) Insert\n";
   cout<<"\t\t4) Delete\n";
   cout<<"\t\t5) Search\n";
   cout<<"\t\t6) Sort\n";
   cout<<"\t\t7) Merge\n";
   cout<<"\t\t8) Exit\n";
   cout<<"\t\tEnter your Choice :  ";
   cin>>choice;
   switch(choice){
     case 1 :  obj.init();
           break;
     case 2 :  obj.traverse();
           break;
     case 3 :  obj.insert();
           break;
     case 4 :  obj.del();
           break;
     case 5 :  obj.search();
           break;
     case 6 :  obj.sort();
           break;
     case 7 :  obj.merge();
           break;
     case 8 :  gotoout;
     default:  cout<<"\n\n\t\tInvalid Choice\n\n";
           getch();
           break;
   }
 }
 out:
}