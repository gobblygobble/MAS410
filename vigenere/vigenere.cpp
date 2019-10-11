#include <iostream>
#include <cstdlib>
#include <cstring>

class Box {
public:
    Box();
    void PrintBox();
    uint CalculateBox();
    uint A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;
};

Box::Box() {
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    G = 0;
    H = 0;
    I = 0;
    J = 0;
    J = 0;
    K = 0;
    M = 0;
    N = 0;
    O = 0;
    P = 0;
    Q = 0;
    R = 0;
    S = 0;
    T = 0;
    U = 0;
    V = 0;
    W = 0;
    X = 0;
    Y = 0;
    Z = 0;
}

void Box::PrintBox() {
    std::cout << "A: " << A << ", "
              << "B: " << B << ", "
              << "C: " << C << ", "
              << "D: " << D << ", "
              << "E: " << E << ", "
              << "F: " << F << ", "
              << "G: " << G << ", "
              << "H: " << H << ", "
              << "I: " << I << ", "
              << "J: " << J << ", "
              << "K: " << K << ", "
              << "L: " << L << ", "
              << "M: " << M << ", "
              << "N: " << N << ", "
              << "O: " << O << ", "
              << "P: " << P << ", "
              << "Q: " << Q << ", "
              << "R: " << R << ", "
              << "S: " << S << ", "
              << "T: " << T << ", "
              << "U: " << U << ", "
              << "V: " << V << ", "
              << "W: " << W << ", "
              << "X: " << X << ", "
              << "Y: " << Y << ", "
              << "Z: " << Z << std::endl;
}

uint Box::CalculateBox() {
    uint retval = 0;
    retval += (uint)(A * (A - 1) / 2);
    retval += (uint)(B * (B - 1) / 2);
    retval += (uint)(C * (C - 1) / 2);
    retval += (uint)(D * (D - 1) / 2);
    retval += (uint)(E * (E - 1) / 2);
    retval += (uint)(F * (F - 1) / 2);
    retval += (uint)(G * (G - 1) / 2);
    retval += (uint)(H * (H - 1) / 2);
    retval += (uint)(I * (I - 1) / 2);
    retval += (uint)(J * (J - 1) / 2);
    retval += (uint)(K * (K - 1) / 2);
    retval += (uint)(L * (L - 1) / 2);
    retval += (uint)(M * (M - 1) / 2);
    retval += (uint)(N * (N - 1) / 2);
    retval += (uint)(O * (O - 1) / 2);
    retval += (uint)(P * (P - 1) / 2);
    retval += (uint)(Q * (Q - 1) / 2);
    retval += (uint)(R * (R - 1) / 2);
    retval += (uint)(S * (S - 1) / 2);
    retval += (uint)(T * (T - 1) / 2);
    retval += (uint)(U * (U - 1) / 2);
    retval += (uint)(V * (V - 1) / 2);
    retval += (uint)(W * (W - 1) / 2);
    retval += (uint)(X * (X - 1) / 2);
    retval += (uint)(Y * (Y - 1) / 2);
    retval += (uint)(Z * (Z - 1) / 2);
}

int main(void) {
    
    std::string ciphertext = "BNVSNSIHQCEELSSKKYERIFJKXUMBGYKAMQLJTYAVFBKVTDVBPVVRJYYLAOKYMPQSCGDLFSRLLPROYGESEBUUALRWXMMASAZLGLEDFJBZAVVPXWICGJXASCBYEHOSNMULKCEAHTQOKMFLEBKFXLRRFDTZXCIWBJSICBGAWDVYDHAVFJXZIBKCGJIWEAHTTOEWTUHKRQVVRGZBXYIREMMASCSPBNLHJMBLRFFJELHWEYLWISTFVVYFJCMHYUYRUFSFMGESIGRLWALSWMNUHSIMYYITCCQPZSICEHBCCMZFEGVJYOCDEMMPGHVAAUMELCMOEHVLTIPSUYILVGFLMVWDVYDBTHFRAYISYSGKVSUUHYHGGCKTMBLRX";

    Box* total = new Box();
    Box* counter = new Box();
    
    float IC, ic;
    std::string::iterator it = ciphertext.begin();
    int len = ciphertext.length();
    int myloc = 1;
    // calculate total IC
    while (myloc <= len) {
        if (*it == 'A') total->A++;
        else if (*it == 'B') total->B++;
        else if (*it == 'C') total->C++;
        else if (*it == 'D') total->D++;
        else if (*it == 'E') total->E++;
        else if (*it == 'F') total->F++;
        else if (*it == 'G') total->G++;
        else if (*it == 'H') total->H++;
        else if (*it == 'I') total->I++;
        else if (*it == 'J') total->J++;
        else if (*it == 'K') total->K++;
        else if (*it == 'L') total->L++;
        else if (*it == 'M') total->M++;
        else if (*it == 'N') total->N++;
        else if (*it == 'O') total->O++;
        else if (*it == 'P') total->P++;
        else if (*it == 'Q') total->Q++;
        else if (*it == 'R') total->R++;
        else if (*it == 'S') total->S++;
        else if (*it == 'T') total->T++;
        else if (*it == 'U') total->U++;
        else if (*it == 'V') total->V++;
        else if (*it == 'W') total->W++;
        else if (*it == 'X') total->X++;
        else if (*it == 'Y') total->Y++;
        else if (*it == 'Z') total->Z++;
        myloc += 1;
        if (myloc > len) break;
        for (int i = 0; i < 1; ++i)
            ++it;
    }
    IC = (float)(total->CalculateBox()) / (len * (len - 1) / 2);
    std::cout << "Total IC value: " << IC << std::endl;
    
    int jumpsize = 6;
    int lettercount;
    //myloc = 1;
    std::cout << "ic values: ";
    // calculate ic with jumps
    for (int start = 0; start < jumpsize; ++start) {
        it = ciphertext.begin();
        for (int i = 0; i < start; ++ i)
            ++it;
        myloc = 1;
        lettercount = 0;
        while (myloc <= len) {
            if (*it == 'A') counter->A++;
            else if (*it == 'B') counter->B++;
            else if (*it == 'C') counter->C++;
            else if (*it == 'D') counter->D++;
            else if (*it == 'E') counter->E++;
            else if (*it == 'F') counter->F++;
            else if (*it == 'G') counter->G++;
            else if (*it == 'H') counter->H++;
            else if (*it == 'I') counter->I++;
            else if (*it == 'J') counter->J++;
            else if (*it == 'K') counter->K++;
            else if (*it == 'L') counter->L++;
            else if (*it == 'M') counter->M++;
            else if (*it == 'N') counter->N++;
            else if (*it == 'O') counter->O++;
            else if (*it == 'P') counter->P++;
            else if (*it == 'Q') counter->Q++;
            else if (*it == 'R') counter->R++;
            else if (*it == 'S') counter->S++;
            else if (*it == 'T') counter->T++;
            else if (*it == 'U') counter->U++;
            else if (*it == 'V') counter->V++;
            else if (*it == 'W') counter->W++;
            else if (*it == 'X') counter->X++;
            else if (*it == 'Y') counter->Y++;
            else if (*it == 'Z') counter->Z++;
            lettercount++;
            myloc += jumpsize;
            if (myloc > len) break;
            for (int i = 0; i < jumpsize; ++i)
                ++it;
        }
        ic = (float)(counter->CalculateBox()) / (lettercount * (lettercount - 1) / 2);
        std::cout << ic << " ";
        delete counter;
        counter = new Box();
    }
    std::cout << std::endl;
    return 0;
}
