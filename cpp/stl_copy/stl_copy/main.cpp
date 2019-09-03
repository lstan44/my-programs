//
//  main.cpp
//  stl_copy
//
//  Created by Stanley Lalanne on 9/3/19.
//  Copyright © 2019 Stanley Lalanne. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int>origin;
    
    
    for(int i=0; i<20; i++){
        origin.push_back(i);
    }
    std::vector<int>destination(origin.size());
    std::copy(origin.begin(), origin.end(), destination.begin());
    
    //for(auto i:destination) std::cout<<i <<" ";
    
    
    // does copy work on arrays
    
    
    int arr[] ={1,2,3,4,5};
    int arr2[5];
    
    std::copy(arr+0, arr+5,arr2+0); //valid
    
    for(auto i:arr2) std::cout<<i <<" ";
    
    return 0;
}
