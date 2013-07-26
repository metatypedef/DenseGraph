//
//  main.cpp
//  DenseGraph
//
//  Created by Doctor on 7/26/13.
//  Copyright (c) 2013 Eventagrate. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "GRAPH.h"
#include "IO.h"
#include "CC.h"

int main(int argc, char *argv[])
{
    int V = atoi(argv[1]);
    Graph G(V, false);
    IO<Graph>::scan(G);
    if (V < 20) IO<Graph>::show(G);
    cout << G.E() << " edges ";
    CC<Graph> Gcc(G);
    //cout << Gcc.count() << " components" << endl;
}
