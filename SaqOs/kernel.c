void saqker_main () {
    volatile char* output = (volatile char*) 0xB8000; // variable 'output' points to 0xB8000
    output[0] = 'S'; // letter s white font with black background
    output[1] = 0x07;
    output[2] = 'a';
    output[3] = 0x07;
    output[4] = 'q';
    output[5] = 0x07;
    output[6] = 'K';
    output[7] = 0x07;
    output[8] = 'e';
    output[9] = 0x07;
    output[10] = 'r';
    output[11] = 0x07;
    output[12] = 'n';
    output[13] = 0x07;
    output[14] = 'e';
    output[15] = 0x07;
    output[16] = 'l';
    output[17] = 0x07;

} 
//tbfh i actually dont know what else to do so thats it ig
