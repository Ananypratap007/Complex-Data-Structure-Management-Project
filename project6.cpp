// Project 6
// CS 2413 Data Structures
// Spring 2023

#include <iostream>
#include <string> // for storing string
#include <fstream> // for reading a file again and again
#include <map> 
#include <unordered_map>
#include <vector>
#include <chrono>

using namespace std;

// Hash function for unordered_map
struct MyHash
{
    size_t operator()(const int& key) const
    {
        return key % 26;
    }
};

// Display function for map
void displayMap(map<int, vector<string> >& m)
{
    cout << "Map:" << endl;
    for(map<int, vector<string> >::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << ": ";
        for(vector<string>::iterator s = it->second.begin(); s != it->second.end(); ++s)
        {
            cout << *s << " ";
        }
        cout << endl;
    }
}

// Display function for unordered_map
void displayUnorderedMap(unordered_map<int, vector<string>, MyHash>& m)
{
    cout << "Unordered Map:" << endl;
    for(unordered_map<int, vector<string>, MyHash>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << ": ";
        for(vector<string>::iterator s = it->second.begin(); s != it->second.end(); ++s)
        {
            cout << *s << " ";
        }
        cout << endl;
    }
}

int main()
{
    string fileName; // to read in the name of the fileInput from redirected input

    cin >> fileName;
    cout << "Name of fileInput: " << fileName << endl;

    // MAP
    map<int, vector<string> > m1;
    // open a fileName in read mode
    ifstream fI; 
    fI.open(fileName);

    char option;
    string temp;
    // reading and performing operations
    // start timer
    //commented out time part to match the output from the screenshot
  //found this from stackoverflow because with time.h, I was getting 0 for all the cases
//  auto start_time = std::chrono::high_resolution_clock::now();
    while(fI >> option)
    {
        fI >> temp;
        // create the structure - map - m1

        //handling insertion 
        if(option == 'I')
        {
            int key = temp.length();
            m1[key].push_back(temp);
        }
        //handling deletion
        else if(option == 'R')
        {
            int key = temp.length();
            auto it = m1.find(key);
            if(it != m1.end())
            {
                vector<string>& v = it->second;
                for(auto i = v.begin(); i != v.end(); )
                {
                    if(*i == temp)
                    {
                        i = v.erase(i);
                    }
                    else
                    {
                        ++i;
                    }
                }
                if(v.empty())
                {
                    m1.erase(it);
                }
            }
        }
    }
    // stop timer
//auto end_time = std::chrono::high_resolution_clock::now();

    // Display contents of map
    displayMap(m1);

    //Calculate the time 
 
    // std::chrono::duration<double> elapsed_time = end_time - start_time;
    // std::cout << "Elapsed time for map: " << elapsed_time.count() << " seconds\n";


    // close the opened file
    fI.close();

    // UNORDERED MAP
    unordered_map<int, vector<string>, MyHash> m2;
    // open a file again in read mode
    fI.open(fileName);

    // start timer
    // auto start_timeUN = std::chrono::high_resolution_clock::now();
    while(fI >> option)
    {
        fI >> temp;
        // create the structure - unordered map - m2

        //handling insertion 
        if(option == 'I')
        {
            int key = temp.length();
            m2[key].push_back(temp);
        }
        //handling deletion
        //first searching for the value
        else if(option == 'R')
        {
            int key = temp.length();
            auto it = m2.find(key);
            if(it != m2.end())
            {
                vector<string>& v = it->second;
                for(auto i = v.begin(); i != v.end(); )
                {
                    if(*i == temp)
                    { i = v.erase(i);
                }
                else
                {
                    ++i;
                }
            }
            if(v.empty())
            {
                m2.erase(it);
            }
        }
    }
}
// stop timer
 //auto end_timeUN = std::chrono::high_resolution_clock::now();
   

// Display contents of unordered map
displayUnorderedMap(m2);

//   std::chrono::duration<double> elapsed_timeUN = end_timeUN - start_timeUN;
//     std::cout << "Elapsed time for Unordered Map: " << elapsed_timeUN.count() << " seconds\n";
// close the opened file
fI.close();

return 0;
}