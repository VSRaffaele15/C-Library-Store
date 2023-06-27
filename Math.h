int power(int m, int n);
int tricle(int m, int n);

int power(int m, int n) {
    int i, p;
    p=1;
    for (i=1; i<=n; ++i) {
        p=p*m;
    };
    return p;
}

int tricle(int m, int n) { // tricle() is a custom Math operator which repeats the pow
    int i, p;
    p=1;
    for (i=1; i<=n; ++i) {
        p=power(p, m);
    }
}