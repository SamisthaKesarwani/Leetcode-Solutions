# Leetcode-Solutions

A collection of my solutions to LeetCode problems, organized by topic. This repository documents my journey of practicing Data Structures and Algorithms (DSA), improving problem-solving skills, and preparing for technical interviews.

I am currently solving the NeetCode 150 problems as part of my DSA preparation.

Approches -

* 217 - Contain Duplicate : using set -> if element is appeared before ? True : False
* 242 - Valid Anagram : two map -> if both map character freq equal ? True : False
* 1 - Two Sum : map -> takes one element -> sub from req. sum -> find remaining -> if found ? return index : empty
* 49 - Group Anagrams -> map<str,vec> -> sort and store -> res vector -> pair.second
* 347 - Top k frequent elements : map -> priority queue (min heap) -> remove elements if size of queue > k -> store it in ans
* 238 - Product of array except self : using prefix & postfix -> prefix(0-n-1) -> postfix(n-1-0) -> direct in res
* 36 - Valid sudoku : 9 hashset(row,col,box) -> row/cols(if elt present) : true ? false -> box r/3+3+c/3 : true ? false