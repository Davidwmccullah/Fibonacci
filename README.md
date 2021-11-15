<h1>

Fibonacci Sequence Calculator
</h1>

<h2>

David McCullah
</h2>

<h3>

Purpose
</h3>

<p>

This program will calculate the nth number in the regular Fibonacci sequence. N can be sufficiently large, but runtime will increase exponentially.

</p>

<h3>

Dependencies
</h3>

<p>

```
cmake version 3.21.3

gcc version 11.1.0 (GCC)
```

</p>

<h3>

Syntax
</h3>

<p>

Make a build directory in:
```
Fibonacci/build
```

In the build directory, run CMake:
```
cmake ..
```

Then build the executable:
```
make
```

Now the Program is ready:
```
./fibonacci [NUMBER]
```
</p>

<h3>

Output
</h3>

<p>

The program will return errors for multiple conditions.

Return Code | Definition | Description
---|---|---
0 | Success | No error occured.
1 | Syntax Error | The executable did not recieve two arguments. (i. e., ./[EXECUTABLE_NAME] [NUMBER])
2 | Argument Error | The argument passed was not a whole number.

On a success, the program will output the nth number in the Fibonacci sequence as:
```
Fibonacci #[N]:
        [VALUE]
```

Example:
```
Fibonacci #67:
        44945570212853
```
</p>
