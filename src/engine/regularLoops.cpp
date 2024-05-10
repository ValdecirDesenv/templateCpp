/** 
 * This code aims to provide a tutorial explanation for a specific C++ basic course,
 * intended for certain individuals. It covers the fundamental structure of C++11 Loops.
*/

#include "regularLoops.h"
#include <vector>
#include <map>
#include <iostream>
#include <string>


using namespace std;

Regular_loops::Regular_loops() {
}

Regular_loops::~Regular_loops() {
}
/// @brief The overall time complexity of this loop is O(n), where n is the size of the array.
/**
 * The auto keyword enhances readability, reduces redundancy, and enables the use of generic programming constructs.
 * However, it's essential to use it judiciously and ensure that the deduced types are clear and predictable.
*/
void Regular_loops::runAllLoops(){

     cout  << "ok regular loops \n\n";
     vector<int> v{0,1,2,3,4,5}; 
     for (auto &&i : v)       // Use for (auto i : v) when you want to work with copies of the elements and don't need to 
     {                        // modify the original elements.
          cout << i << ' ';   // Use for (auto &&i : v) when you want to avoid unnecessary copies and may want to modify or       
     }                        // move the elements in v.
     cout  << "\n";

     int a[]{3,4,5,6,7,8,4,5};
     for (auto n : a)
     {
          cout << n << ' ';   
     }
     cout  << "\n";

     string str{"Checing this one out!"};
     for (auto ch : str)
     {
          cout << ch << ' ';   
     }

     cout  << "\n";
     map<int, string> nicknames{{1, "first"},{2,"second"},{3,"third"}};
     for (auto ndx : nicknames)
     {
          cout << ndx.first << " , " << ndx.second << endl;   
     }
     cout  << "\n";

}