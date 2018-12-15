# Time Complexity
## Codility
### url : https://app.codility.com/programmers/lessons/3-time_complexity/

Use of time complexity makes it easy to estimate the running time of a program. Performing
an accurate calculation of a program’s operation time is a very labour-intensive process
(it depends on the compiler and the type of computer or speed of the processor). Therefore, we
will not make an accurate measurement; just a measurement of a certain order of magnitude.
Complexity can be viewed as the maximum number of primitive operations that a program
may execute. Regular operations are single additions, multiplications, assignments etc. We
may leave some operations uncounted and concentrate on those that are performed the largest
number of times. Such operations are referred to as dominant.

The number of dominant operations depends on the specific input data. We usually want
to know how the performance time depends on a particular aspect of the data. This is most
frequently the data size, but it can also be the size of a square matrix or the value of some
input variable.