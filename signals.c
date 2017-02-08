#include <stdio.h>
#include <signal.h>

#define PRINT_SIG(name) printf ("%2d  SIG" #name "\n", SIG##name)

int
main (void)
{
  puts ("Program error signals");
  PRINT_SIG (FPE);
  PRINT_SIG (ILL);
  PRINT_SIG (SEGV);
  PRINT_SIG (BUS);
  PRINT_SIG (ABRT);
  PRINT_SIG (IOT);
  PRINT_SIG (TRAP);
#ifdef SIGEMT
  PRINT_SIG (EMT);
#endif
  PRINT_SIG (SYS);

  puts ("Termination signals");
  PRINT_SIG (TERM);
  PRINT_SIG (INT);
  PRINT_SIG (QUIT);
  PRINT_SIG (KILL);
  PRINT_SIG (HUP);

  puts ("Alarm signals");
  PRINT_SIG (ALRM);
  PRINT_SIG (VTALRM);
  PRINT_SIG (PROF);

  puts ("Async I/O signals");
  PRINT_SIG (IO);
  PRINT_SIG (URG);
  PRINT_SIG (POLL);

  puts ("Job control signals");
  PRINT_SIG (CHLD);
  PRINT_SIG (CONT);
  PRINT_SIG (STOP);
  PRINT_SIG (TSTP);
  PRINT_SIG (TTIN);
  PRINT_SIG (TTOU);

  puts ("Operation error signals");
  PRINT_SIG (PIPE);
#ifdef SIGLOST
  PRINT_SIG (LOST);
#endif
  PRINT_SIG (XCPU);
  PRINT_SIG (XFSZ);

  puts ("Miscellaneous signals");
  PRINT_SIG (USR1);
  PRINT_SIG (USR2);
  PRINT_SIG (WINCH);
#ifdef SIGINFO
  PRINT_SIG (INFO);
#endif
  return 0;
}
