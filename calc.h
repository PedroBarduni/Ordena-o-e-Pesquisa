int fatLoop(int inputValue) {
    int result = 1;
    for(int i=inputValue; i > 0; i--) {
        result*=i; 
    }    
    return result;
}

int fatRecursive(int inputValue) {
    int total;
    if (inputValue == 0) return 1;
    total = inputValue * fatRecursive(inputValue - 1);
    return total;
}

int sum(int number1, int number2) {
    return number1 + number2;
}

int sub(int number1, int number2) {
    return number1 - number2;
}
