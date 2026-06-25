# WEE CEE PEE 

This repository contains theory notes from the Competitive Programmer's Handbook (CSES) and selected problem sets for each week, providing a structured workspace to read, code, and submit.

---

## Week 1: Brushing the Basics

### Theory Notes (CP Handbook Chapters 1–5)
* **Time Complexity:** Understanding how code scales. Aim for `O(N)` or `O(N log N)` for `N = 10^5`. 
* **Sorting:** Built-in sorting algorithms are extremely optimized. Grouping elements or establishing a greedy order is often step one in CP.
* **Data Structures:** Master dynamic arrays (vectors), sets (balanced BSTs), and maps. Know when to use `unordered` vs `ordered` variants.
* **Complete Search:** Generating subsets and permutations recursively to brute-force small constraints.
* **Prefix Sums (Static Range Queries):** Precomputing an array `P` where `P[i]` is the sum from index `0` to `i`. Any subsegment sum `[L, R]` can be found in `O(1)` time using `P[R] - P[L-1]`.
* **Two Pointers / Sliding Window:** Maintaining two indices to scan an array in `O(N)` time, often replacing nested loops.

## Week 2: Greedy Algorithms
### Theory Notes (CP Handbook Chapter 6)

The Greedy Choice: A greedy algorithm builds a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit.

Scheduling: When given multiple events with start and end times, sorting by end time and greedily picking the next non-overlapping event yields the maximum number of events.

Tasks and Deadlines: Sorting tasks by duration (shortest first) minimizes penalty and maximizes the total score.

Data Compression: Huffman coding builds optimal prefix codes by repeatedly combining the two least frequent characters.

## Week 3: Dynamic Programming
### Theory Notes (CP Handbook Chapter 7)
Concept: DP is applied when a problem can be broken down into overlapping subproblems with optimal substructure. It's essentially smart recursion with caching (Memoization) or iterative table filling (Tabulation).

Coin Problem: A classic example. Unlike the greedy approach (which fails on certain coin denominations), DP checks all possible transitions: dp[x] = min(dp[x - c] + 1) for all coins c.

Longest Increasing Subsequence (LIS): Finding the longest strictly increasing subsequence in O(N^2) using standard DP, or O(N log N) using DP with binary search.

Paths in a Grid: Counting paths from top-left to bottom-right by transitioning from the top or left cell: dp[y][x] = dp[y-1][x] + dp[y][x-1].

Combinatorics: Leveraging binomial coefficients, permutations, and modular arithmetic for counting DP states.

## Week 4: Graphs
### Theory Notes (CP Handbook Chapters 11–13)
Graph Representation: Adjacency lists (e.g., vector<int> adj[N]) are the standard way to represent graphs in CP due to memory efficiency (O(V + E)).

Depth-First Search (DFS): Follows a single path as deep as possible before backtracking. Essential for finding connected components, cycle detection, and topological sorting.

Breadth-First Search (BFS): Explores the graph layer by layer. Perfect for finding the shortest path in unweighted graphs.
