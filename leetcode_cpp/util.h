//
// util.h
// leetcode_cpp
// 
// Created by Jeffrey Wang on 16/11/2020.
// Copyright © 2020 eagersoft.io. All rights reserved.
// 


//
// Created by Jeffery Wang on 11/16/20.
//

#pragma once

#ifndef LEETCODE_CPP_UTIL_H
#define LEETCODE_CPP_UTIL_H

#include <iostream>
#include <vector>

using namespace std;

namespace Util{
    template<class T>
    void printVector(vector<T> &v){
        cout << "{ ";
        for(auto &item: v)
            cout << item << ", ";
        cout << "}" << endl;
    }
}

#endif //LEETCODE_CPP_UTIL_H
