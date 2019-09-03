//
//  main.cpp
//  stl_binary_search
//
//  Created by Stanley Lalanne on 9/3/19.
//  Copyright © 2019 Stanley Lalanne. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    
    int arr1[] = {1,2,7,5,2,1,0};
    int arr2[] = {0,2,4,7,9,122,145};
    
    
    if(std::binary_search( arr2+0, arr1+7, 0) ){
        std::cout<<"TRUE\n";
    }
    
    
    // here binary search does not work because the array is not sorted
    if(std::binary_search( arr1+0, arr1+7, 0) ){
        std::cout<<"TRUE\n";
    }
    
    std::sort(arr1+0, arr1+7); //arr1 is sorted here
    
    // therefore binary search will work here on arr1
    if(std::binary_search( arr1+0, arr1+7, 0) ){
        std::cout<<"TRUE\n";
    }
    
    return 0;
}

