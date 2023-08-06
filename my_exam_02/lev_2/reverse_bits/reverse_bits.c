unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;
    while(i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return(res);

}
int main()
{
    unsigned char input_byte = 0b01010101; // Example input: 85 (in decimal)
    unsigned char reversed_byte = reverse_bits(input_byte);

    printf("Input byte: 0x%X\n", input_byte);         // Output: Input byte: 0x55
    printf("Reversed byte: 0x%X\n", reversed_byte);   // Output: Reversed byte: 0xA0

    return 0;
}