//
//  IO.h
//  DenseGraph
//
//  Created by Doctor on 7/26/13.
//  Copyright (c) 2013 Eventagrate. All rights reserved.
//

#ifndef __DenseGraph__IO__
#define __DenseGraph__IO__

#include <iostream>

template <class Graph> class IO {
public:
    static void show(const Graph &);
    static void scanEZ(Graph &);
    static void scan(Graph &);
};

#endif /* defined(__DenseGraph__IO__) */
