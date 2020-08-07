#include<iostream>
#include<set>//Do not forget to add this library while working on set or multiset
#include<iterator>
using namespace std;


int main()
{  
    //Creates an empty multiset without any elements
    multiset <int , greater<int> > first_multiset;
    //Are you wondering what does this greater<int> do.
    //To know  the answer compare result of first_multiset and second_multiset

    
    cout<<"Size of first_multiset is "<<first_multiset.size()<<endl;
    //return size of first_multiset (i.e. 0)

    for(int i=1;i<8;++i)
    first_multiset.insert(i*10);//insert value 10 20 30 40 50 60 70 in first_multiset
    first_multiset.insert(50);// 50 will be added again to the multiset unlike set 


    multiset<int> second_multiset(first_multiset.begin() , first_multiset.end());
   

    cout<<"--------------------------Content of first set--------------------------"<<endl;
     for(multiset <int , greater<int> >::iterator  it= first_multiset.begin(); it!=first_multiset.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"--------------------------Content of second set--------------------------"<<endl;
    for(auto it = second_multiset.begin();it!=second_multiset.end();++it)
    {
        cout<<*it<<" ";
    }
     cout<<endl;

     //now let's see some more important function
     second_multiset.erase(10); //after execution second_multiset : 20 30 40 50 50 60 70  

    auto itr1 =second_multiset.find(60) ; //itr1 will points                        ^
    second_multiset.erase(itr1,second_multiset.end());//this will erase element in range[itr1,second_multiset.end)

   
    //lower_bound(val) : returns an iterator pointing to the element in the container which is equivalent to val passed in the parameter.
    //  first_multiset :                                          70 60 50 50 40 30 20 10
     auto itr2  = first_multiset.lower_bound(20);           //                      ^
    cout<<"Lower bound of 20 is "<<*itr2<<endl;
    
    itr2 = first_multiset.lower_bound(50);                  //          ^         
    //there is two values equivalent to 50                     
    cout<<"Lower bound of 50 is "<<*itr2<<endl;
    ++itr2;                                                 //             ^               
    cout<<"Element next to  50 is "<<*itr2<<endl;

    itr2 = first_multiset.lower_bound(80);
    //since 80 is not in our first set therefore 
    //it returns an iterator to set::end
   cout<<"Lower bound of 80 is "<<*itr2<<endl;


    //upper_bound(val) :  returns an iterator pointing to 
    //the immediate next element which is just greater than val 
    //otherwise it return an iterator to set::end
    itr2 = first_multiset.upper_bound(30);                  //                       ^
     cout<<"Upper bound of 30 is "<<*itr2<<endl;

     //let's see upperbound(50)
    itr2 = first_multiset.upper_bound(50);                  //                ^      
     cout<<"Upper bound of 50 is "<<*itr2<<endl;

    cout<<"Number of 50 present in first_multiset is "<<first_multiset.count(50)<<endl;
    return 0;
}