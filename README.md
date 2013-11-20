== Isolate Cheater

Demonstrates programs that may try to cheat inside the process isolator (found in MOE).

=== Testing

```sh
sudo ./prepare # copies isolate to tmp/ directory
./test
```

=== Cheaters

==== metafile-writer

This program attempts to cheat by opening file descriptor 3 which is often assigned to the metafile (when active), and writes false data to it.

=== Log

Output of `./test` run against past versions of isolate.

File format is `test.yyyy-mm-dd-commithash.log`.


