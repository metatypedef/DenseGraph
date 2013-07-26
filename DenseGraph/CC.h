//
//  CC.h
//  DenseGraph
//
//  Created by Doctor on 7/26/13.
//  Copyright (c) 2013 Eventagrate. All rights reserved.
//

#ifndef __DenseGraph__CC__
#define __DenseGraph__CC__

#include <iostream>

template <class Graph> class CC {
private:
    // implementation-dependent code
public:
    CC(const Graph &);
    int count();
    bool connect(int, int);
};

#endif /* defined(__DenseGraph__CC__) */
