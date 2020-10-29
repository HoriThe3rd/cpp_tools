Stopwatch
=======

# Overview

This class provides a stopwatch to measure a duration time of your program.

## Usage

Start:  
Just make a stopwatch object like below to start measuring the time.

```cpp
stopwatch* obj0 = new stopwatch;
```

or you can use type inference like below.

```cpp
auto obj0 = stopwatch;
```

Stop:  
Just call the destructor of the object like below to stop measuring the time.

```cpp
delete obj0;
```