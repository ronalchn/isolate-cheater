## Isolate Cheater

Demonstrates programs that may try to cheat inside the process isolator (found in MOE).

### Testing

```sh
sudo ./prepare # copies isolate to bin/ directory, with setsuid flag, but executable only by $SUDO_GID
./test
```

### Cheaters

#### metafile-writer

This program attempts to cheat by opening file descriptor 3 which is often assigned to the metafile (when active), and writes false data to it.

### Other evil programs

#### system-cronjob-writer

This program can be used for privilege escalation attacks. It writes an evil script which when run, adds a user to the sudo group, granting it root access. A user which has access to the process isolater can use then write this script to a system cronjob for example, to grant themselves root access.

### Log

Output of `./test` run against past versions of isolate.

File format is `test.yyyy-mm-dd-commithash.log`.


