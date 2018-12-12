// you can use includes, for example:
// #include &lt;algorithm&gt;
// you can write to stdout for debugging purposes, e.g.
// cout &lt;&lt; "this is a debug message" &lt;&lt; endl;
 
int solution(vector&lt;int&gt; &amp;A) {
    // write your code in C++11 (g++ 4.8.2)
    int curXor = 0;
    for(auto const &amp;e : A) {
        curXor ^= e;
    }
    return curXor;
}