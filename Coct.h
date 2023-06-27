float GravityForce(float force) {
    return force * 8002;
}

float JumpForce(float force) {
    return force * 2;
}

bool High(float a, float b) {
    return a + 1 == b;
}

bool Low(float a, float b){
    return a - 1 == b;
}