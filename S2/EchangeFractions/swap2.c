struct fract_t {
        int num;
        int denum;
};

void swap(struct fract_t *a, struct fract_t *b)
{
     int i = a->num;
     int j = a->denum;
     a->num = b->num;
     a->denum = b->denum;
     b->num = i;
     b->denum = j;
}
