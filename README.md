# ci-minimal

Build minimal ci for fun.

## Using system GoogleTest

GoogleTest is build as an internal dependency, however, if you would like to
use a pre-installed googletest in the system path, add the following to the
project's `CMakeLists.txt` .

```
enable_testing()
find_package(GTest REQUIRED)

# Link your own targets against GTest::GTest, GTest::Main
# etc. as appropriate
```
