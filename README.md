# STL (Standard Template Library)
<!-- ALL-CONTRIBUTORS-BADGE:START - Do not remove or modify this section -->
[![All Contributors](https://img.shields.io/badge/all_contributors-1-orange.svg?style=flat-square)](#contributors-)
<!-- ALL-CONTRIBUTORS-BADGE:END -->

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

### STL has four components

* Algorithms
* Containers
* Functions
* Iterators


<h3 align="center">Algorithms</h3>

The header algorithm defines a collection of functions especially designed to be used on ranges of elements.They act on containers and provide means for various operations for the contents of the containers.

* Algorithm
   * Sorting
   * Searching
   * Important STL Algorithms
   * Useful Array algorithms
   * Partition Operations
   
* Numeric
   * valarray class
  
  
<h3 align="center">Containers</h3>


Containers or container classes store objects and data. There are in total seven standard “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

* Sequence Containers: implement data structures which can be accessed in a sequential manner.
  * vector
  * list
  * deque
  * arrays
  * forward_list( Introduced in C++11)
  
* Container Adaptors : provide a different interface for sequential containers.
  * queue
  * priority_queue
  * stack
  
* Associative Containers : implement sorted data structures that can be quickly searched (O(log n) complexity).
  * set
  * multiset
  * map
  * multimap
  
* Unordered Associative Containers : implement unordered data structures that can be quickly searched
  * unordered_set (Introduced in C++11)
  * unordered_multiset (Introduced in C++11)
  * unordered_map (Introduced in C++11)
  * unordered_multimap (Introduced in C++11)

![](https://github.com/CormacKrum/STL/blob/master/ss1.png)
<p align="center">Flowchart of Adaptive Containers and Unordered Containers</p>

![](https://github.com/CormacKrum/STL/blob/master/ss2.png)
<p align="center">Flowchart of Sequence conatiners and ordered containers</p>

<h3 align="center">Functions</h3>

The STL includes classes that overload the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passed.

  * Functors

<h3 align="center">Iterators</h3>

As the name suggests, iterators are used for working upon a sequence of values. They are the major feature that allow generality in STL.

  * Iterators
  
    #### Types of Iterators :

    * Input Iterators:
    
      A entity through which you can read data from container and move ahead. For Example - A Keyboard
    * Output Iterators:
    
      A entity through which you can write into the container and move ahead. For Example - A Printer
    * Forward Iterator:
    
      Iterator with functionalities of input and output iterator in single direction.For Example - Singly Linked List
    * Bidirectional Iterators:
    
      Forward Iterator that can move in both directions.
    * Random-Access Iterators:
    
      Random Access Iterator is an iterator that can read/write in both directions and also can take jumps.
  
<h3 align="center">Utility Library</h3>

Defined in header "utility".

  * pair

## Contributors ✨

Thanks goes to these wonderful people ([emoji key](https://allcontributors.org/docs/en/emoji-key)):

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tr>
    <td align="center"><a href="http://JayantGoel001.github.io"><img src="https://avatars.githubusercontent.com/u/54479676?v=4?s=100" width="100px;" alt=""/><br /><sub><b>Jayant Goel</b></sub></a><br /><a href="https://github.com/JayantGoel001/STL/commits?author=JayantGoel001" title="Code">💻</a> <a href="#ideas-JayantGoel001" title="Ideas, Planning, & Feedback">🤔</a> <a href="https://github.com/JayantGoel001/STL/commits?author=JayantGoel001" title="Tests">⚠️</a> <a href="#maintenance-JayantGoel001" title="Maintenance">🚧</a> <a href="https://github.com/JayantGoel001/STL/commits?author=JayantGoel001" title="Documentation">📖</a> <a href="#content-JayantGoel001" title="Content">🖋</a></td>
  </tr>
</table>

<!-- markdownlint-restore -->
<!-- prettier-ignore-end -->

<!-- ALL-CONTRIBUTORS-LIST:END -->

This project follows the [all-contributors](https://github.com/all-contributors/all-contributors) specification. Contributions of any kind welcome!