#include<iostream>
#include<set>//Do not forget to add this library while working on set
#include<iterator>
using namespace std;


int main()
{   
    //create a set with five integer value
    set <int> first{10,20,30,40,50};
    //Another way to create a set
    set <int> second (first);
    set < string > third ;


     //size() : returns the number of elements in the set container.
     cout<< "Size of first set is "<<first.size()<<endl;
     cout<< "Size of second set is "<<second.size()<<endl;
     cout<< "Size of third set is "<<third.size()<<endl;

    
    //insert(val) :It is a built-in function in C++ STL which insert elements in the set container
    // or inserts the elements from a position to another position in the set to a different set.
    third.insert("Algo");
    third.insert("Point");
    // the insertion operation checks whether each inserted element is equivalent to an element already in the container,
    // and if so, the element is not inserted, returning an iterator to this existing element (if the function returns a value).
    auto itr = second.insert(second.begin(), 1); 
    //insert(pos,val)  start searching  from the given pos(iterator) and insert  value of val if element equivalent to val does not exist 
    //else return an iterator  to the existing element.
    itr = second.insert(itr, 2); 
    itr = second.insert(itr, 3); 
    itr = second.insert(itr, 4); 
    itr = second.insert(itr, 5);
    

    

    cout<<"--------------------------Content of first set--------------------------"<<endl;
     for(set<int>::iterator  it= first.begin(); it!=first.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"--------------------------Content of second set--------------------------"<<endl;
    for(auto it = second.begin();it!=second.end();++it)
    {
        cout<<*it<<" ";
    }
     cout<<endl;
     cout<<"--------------------------Content of third  set--------------------------"<<endl;
    for(auto it = third.begin();it!=third.end();++it)
    {
        cout<<*it<<" ";
    }
     cout<<endl;
    

    //clear() : removes all the element from set and the size of container changes to 0.
    third.clear();

    //empty() : returns true if the container size is 0, false otherwise.
    if(third.empty())
    third.insert("AlgoPoint");

    

    //count(val) : this function takes "val" as input parameter
    // and return 1 if the container contains an element equivalent to val, or zero otherwise.
    for(int i=10;i<=100;i+=20)
    {
        if(first.count(i) && second.count(i))
        {
            cout<<i<<" is an element of both set.\n";
        }
        else
        {
             cout<<i<<" is not an element of both set.\n";
        }
        
    }
    

    //find(val) : Return an iterator if val is present in set container otherwise return an iterator to set::end
    
        auto it1 = first.find(20);
        cout<<*it1<<" is present in the set.\n";
   

    //erase() : Removes from the set container either a single element or a range of elements ([first,last)).
    //This effectively reduces the container size by the number of elements removed, which are destroyed.
    first.erase(first.begin());
                                // 1 2 3 4 5 
    auto it2= second.begin();  //  ^
    ++it2;                     //    ^
    second.erase(it2,second.end());
    third.erase("Algo");//search by given val and remove the value from set container.


    //lower_bound(val) : returns an iterator  pointing to the  element which is equivalent if it is found,
    //otherwise returns an iterator pointing to the immediate next element which is just greater than val
    it2 = first.lower_bound(20);
    cout<<"Lower bound of 20 is "<<*it2<<endl;
    first.insert(70);//inserting a new element in first set it becomes   20 30 40 50 70
    it2 = first.lower_bound(60);
    //since 60 does not exist in our first set it returns an iterator to next element (i.e. 70)
    cout<<"Lower bound of 60 is "<<*it2<<endl;

    it2 = first.lower_bound(80);
    //since 80 is not in our first set therefore it returns an iterator to set::end
   cout<<"Lower bound of 80 is "<<*it2<<endl;

    //upper_bound(val) :  returns an iterator pointing to the immediate next element which is just greater than val 
    //otherwise it return an iterator to set::end
    it2 = first.upper_bound(30);
     cout<<"Upper bound of 30 is "<<*it2<<endl;

    
     

  cout<<"--------------------------Content of first set--------------------------"<<endl;
     for(set<int>::iterator  it= first.begin(); it!=first.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"--------------------------Content of second set--------------------------"<<endl;
    for(auto it = second.begin();it!=second.end();++it)
    {
        cout<<*it<<" ";
    }
     cout<<endl;
     cout<<"--------------------------Content of third  set--------------------------"<<endl;
    for(auto it = third.begin();it!=third.end();++it)
    {
        cout<<*it<<" ";
    }
     cout<<endl;

    return 0;
}