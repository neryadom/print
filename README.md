## util to print one argument

`print` will take in one argument, and output it as a string


## setup note

to run `print`, you can use path prefix `./print`, or you can add print to your local utils `/usr/local/bin` to use without path prefix

```bash
# compile print
gcc print.c -o print

# add print to your local utils
sudo cp print /usr/local/bin
```

## example usage

```bash
# output 'hello':
print hello

# output 'hello world':
print 'hello world'

# output '123four five six789':
print '123four five six789'
```

