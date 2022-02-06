#include <signal.h>
#include <stdio.h>
#include <stdatomic.h>

typedef struct sh_pair sh_pair;
struct sh_pair 
extern sh_pair const sh_pairs[];
extern size_t const sh_known;
extern _Atomic(unsigned long) sh_counts[];
inline void sh_count(int sig);
inline unsigned long sh_counted(int sig);
inline void sh_count(int sig); 
inline unsigned long sh_counted(int sig);
typedef void sh_handler(int);
void sh_print(FILE* io, int sig, char const* filename, size_t line, char const* string);
sh_handler* sh_enable(int sig, sh_handler* hnd);