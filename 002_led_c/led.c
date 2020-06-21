int main()
{
    unsigned int *pGFCON = 0x56000050;
    unsigned int *pGFDAT = 0x56000054;

    /*设置GPF4为输出引脚*/
    *pGFCON = 0x100;

    /*配置GPF4输出为0*/
    *pGFDAT = 0x0;
    return 0;
}
