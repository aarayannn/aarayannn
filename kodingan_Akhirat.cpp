int main() {
    Muslim muslim;
    
    while (true) {
        muslim.solat();
        muslim.puasa();
        muslim.zakat();
        
        if (muslim.die()) {
            break;
        }
    }
    
    return 0;
}
