#include "lib.h"

bool primo(int n, int i){
    if(n % i == 0){
        if(n == i){
            return true;
        }
        else{
            return false;
        }
    }
    primo(n, i + 1);
}
