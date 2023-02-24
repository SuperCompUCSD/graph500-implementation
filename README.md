# Graph500 Implentation

this project is a much less cool and much slower version of the _blazingly-fast_ Rust implementation available here :D
github.com/ritobanrc/graph500-rs/

# Kernel 1: Graph deez -- Generate the graph

## Graph Representation
 - adjacency list
 - edge list
 - adjacency matrix
    - compressed sparse rows and compressed sparse collumns

## RNG genrator
- xor generator

## Graph Generation

# Kernel 2: node search

## Search algorithm

## 


# Kernel 3: Lowest cost path finder :))

## 

# Papers to Read to make it fast vroom vroom
graph500 references to read: 

https://www2.eecs.berkeley.edu/Pubs/TechRpts/2011/EECS-2011-117.pdf
* clever modification of BFS, switching between "top down" and "bottom up" steps -- designed for graph500, seems to get very good results

https://ieeexplore.ieee.org/stampPDF/getPDF.jsp?tp=&arnumber=6969392&ref=
* wanna do BFS on FPGAs? woah

https://github.com/du00d/ParallelFirstSearch/blob/main/graph_gen/graph_generator.cpp
* Nice very readable C++ implementation 


https://arxiv.org/abs/2105.06145 -- Efficient Stepping Algorithms and Implementations for Parallel Shortest Paths
* says delta-stepping is generally better than radius stepping (although delta has no known worst case bound, while radius does)
* proposes a few new algorithms that get 1.3 - 2.5x faster

Papers that paralllelize SSSP:
https://dl.acm.org/doi/abs/10.1145/2925426.2926287
https://ieeexplore.ieee.org/abstract/document/6877269
https://ieeexplore.ieee.org/abstract/document/7763835
