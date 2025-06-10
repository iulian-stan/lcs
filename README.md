# Longest Common Subsequence (LCS)

Simple app that computes [longest common subsequence](https://en.wikipedia.org/wiki/Longest_common_subsequence) of two strings passed by the user via the commandline.

This implementation uses dynamic programming with tabulation (no recursion) and returns only the first solution.

Running the example with CMake:

1. Create a build folder
    ```
    mkdir build && cd build
    ```

2. Generate the project
    ```
    cmake ..
    ```

3. Build the project
    ```
    cmake --build .
    ```

4. Run the generated example
    ```
    > LCS.exe
    Enter first string : 321654987
    Enter second string : 123654789
    Longest Common Subsequence : 36549
    ```