//
//  CC.cpp
//  DenseGraph
//
//  Created by Doctor on 7/26/13.
//  Copyright (c) 2013 Eventagrate. All rights reserved.
//

#include "CC.h"

#include "GRAPH.h"
#include <iostream>

template <class Graph> vector<Edge> edges(Graph &G) {
    int E = 0;
    vector <Edge> a(G.E());
    for (int v = 0; v < G.V(); v++)
    {
        typename Graph::adjIterator A(G, v);
        for (int w = A.beg(); !A.end(); w = A.nxt())
            if (G.directed() || v < w)
                a[E++] = Edge(v, w);
    }
    return a;
}
