#include <stddef.h>
#include <stdio.h>

extern "C"
{
    typedef struct circular circular;
    circular *circular_init(circular *c, size_t max_len);
    void circular_destroy(circular *c);
    circular *circular_new(size_t len);
    void circular_delete(circular *c);
    circular *circular_append(circular *c, double value);
    double circular_pop(circular *c);
    double *circular_element(circular *c, size_t pos);
    size_t circular_getlength(circular *c);
    circular *circular_resize(circular *c, size_t max_len);
    void circular_fput(circular *c, FILE *s);
}