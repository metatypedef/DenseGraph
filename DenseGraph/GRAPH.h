//
//  GRAPH.h
//  DenseGraph
//
//  Created by Doctor on 7/26/13.
//  Copyright (c) 2013 Eventagrate. All rights reserved.
//

#ifndef __DenseGraph__GRAPH__
#define __DenseGraph__GRAPH__

#include <iostream>
#include <vector>

#include "IO.h"

using namespace std;


struct Edge {
    int v, w;
    
    Edge(int v = -1, int w = -1) : v(v), w(w) {
    
    }
};

class Graph {
    
private:
    // Implementation-dependent code
public:
    Graph(int, bool);
    ~Graph();
    int V() const;
    int E() const;
    bool directed() const;
    int insert(Edge);
    int remove(Edge);
    bool edge(int, int);
    class adjIterator {
    public:
        adjIterator(const Graph &, int);
        int beg();
        int nxt();
        bool end();
    };
};

#endif /* defined(__DenseGraph__GRAPH__) */
