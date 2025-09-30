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

alnum characters do not need to be wrapped with single quotes. strings containing special characters may break parsing. it is therefore recommended to wrap them in single quotes `' '`

```bash
# output 'hello':
print hello

# output 'hello world':
print 'hello world'

# output '123four five six789':
print '123four five six789'

# output '123'
print 123

# output ' '
print  

# output '!!!'
print '!!!'
```

