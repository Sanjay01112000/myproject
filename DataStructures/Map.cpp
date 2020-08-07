#include<iostream>
#include<map>
using namespace std;

int main()
{  

    map<int,int> first_map{ {1,2} , {2,3}  };
    // creates a map m with keys 1,2,3 and 
     //   their corresponding values 2,3,4 
    //Creates a map  copy_of_first_map which is copy of first_map
    map<int,int> copy_of_first_map(first_map);

    //Creates an empty  map with no elements 
    map<char , int > second_map ;

    
    //to insert value into the map we can use = operator
    second_map['A'] = 65;
    second_map['B'] = 66;

    //at() : Returns a reference to the mapped value of the element identified with key k.
    first_map.at(1) = 10;
    first_map.at(2) = 20;
    //to access a mapped value you can use [] operator
    first_map[4] =30;

    //size() : Returns the number of elements in the map container.
    cout<<"Size of first_map is "<<first_map.size()<<endl;
    cout<<"Size of copy_of_first_map is "<<copy_of_first_map.size()<<endl;
    cout<<"Size of second_map is "<<second_map.size()<<endl;

    //count(k) : this function search the  container and return count of elements  which are equivalent to  "k" 
    //In map every key is unique therefore it  return 1 if the container contains an element equivalent to k, or zero otherwise.
    cout<<"Number of keys which are  equivalent to 1 is "<<first_map.count(1)<<endl;

    //find(k) : Searches the container for an element with a key equivalent to k and returns an iterator to it if found, 
    //otherwise it returns an iterator to map::end.
    for(int i=1;i<5;i+=1){
        auto it = first_map.find(i);
        
        if (it !=first_map.end())
        cout<<it->first<<" is present in the map\n";
        else 
        cout<<"Element is not present in the map\n" ;
    }
    //lower_bound(k) : returns an iterator  pointing to the  key which is equivalent to k if it is found,
    //otherwise returns an iterator pointing to the immediate next key which is just greater than k
    auto it2 = first_map.lower_bound(1);
    cout<<"Lower bound of 1 contains key = "<<it2->first<<"  value = "<<it2->second<<endl;
    

    it2 = first_map.lower_bound(3);
    //since 3 is not in our first_map therefore it returns an iterator to next key which is just greater than 3
   cout<<"Lower bound of 3 contains key = "<<it2->first<<"  value = "<<it2->second<<endl;

    //upper_bound(val) :  returns an iterator pointing to the immediate next element which is just greater than val 
    //otherwise it return an iterator to set::end
    it2 = first_map.upper_bound(1);
     cout<<"Upper bound of 1 contains key = "<<it2->first<<"  value = "<<it2->second<<endl;

     //clear() :  Removes all the element of map and make size 0
     copy_of_first_map.clear();
     if(copy_of_first_map.empty())//returns true if size of map is 0,else false
     cout<<"Map is empty";
}