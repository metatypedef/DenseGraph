//
//  IO.cpp
//  DenseGraph
//
//  Created by Doctor on 7/26/13.
//  Copyright (c) 2013 Eventagrate. All rights reserved.
//

#include "IO.h"

#include "GRAPH.h"
#include <iostream>

using namespace std;

template <class Graph> void IO<Graph>::show(const Graph &G) {
    for (int s = 0; s < G.V(); s++) {
        cout.width(2); cout << s << ":";
        typename Graph :: adjIterator A(G, s);
        for (int t = A.beg(); !A.end(); t = A.nxt()) {
            cout.width(2); cout << t << " ";
        }
        cout << endl;
    }
}