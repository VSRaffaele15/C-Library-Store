int Multiply(int a) {
    return a * a;
}

int Divide(int a) {
    return a / a;
}

int Pow(int a) {
    int i, p;
    p=1;
    for (i=1; i<=a; ++i) {
        p=p*a;
    };
    return p;
}

