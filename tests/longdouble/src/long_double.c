long double long_double_ops(long double *a) {
    long double b = 1.3L;

    (*a)++;
    ++*a;
    b++;
    ++b;

    *a -= b;
    b += *a;

    *a /= 2;
    b /= 2;

    (*a)--;
    --*a;
    b--;
    --b;

    *a *= 3;
    b *= 3;

    *a += 1;
    b += 1;

    b = ++*a;
    b = (*a)++;
    *a = --b;
    *a = b--;

    return b;
}

double cast2double(long double a) {
    return (double) a;
}

float cast2float(long double a) {
    return (float) a;
}

unsigned int cast2uint(long double a) {
    return (float) a;
}
