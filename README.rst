=======
signals
=======

Print the list of signal numbers in the current platform.

This is a little like the "trap -l" command, except that:

* The output is somewhat better machine-readable
* It categorizes the signals as per the GNU C Library Manual, see
  "Standard Signals"

Usage
=====

Just run make::

   make

The output should look like this::

    Program error signals
     8  SIGFPE
     4  SIGILL
    11  SIGSEGV
     7  SIGBUS
     6  SIGABRT
     6  SIGIOT
     5  SIGTRAP
    31  SIGSYS
    Termination signals
    15  SIGTERM
     2  SIGINT
     3  SIGQUIT
     9  SIGKILL
     1  SIGHUP
    Alarm signals
    14  SIGALRM
    26  SIGVTALRM
    27  SIGPROF
    Async I/O signals
    29  SIGIO
    23  SIGURG
    29  SIGPOLL
    Job control signals
    17  SIGCHLD
    18  SIGCONT
    19  SIGSTOP
    20  SIGTSTP
    21  SIGTTIN
    22  SIGTTOU
    Operation error signals
    13  SIGPIPE
    24  SIGXCPU
    25  SIGXFSZ
    Miscellaneous signals
    10  SIGUSR1
    12  SIGUSR2
    28  SIGWINCH

If some signals are missing, feel free to submit a pull request.
