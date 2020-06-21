void delay(volatile int d)
{
   while(d--) ;

}
int led_on(int which)
{
    unsigned int *pGFCON = 0x56000050;
    unsigned int *pGFDAT = 0x56000054;

    if (which == 4)
    {
        /*设置GPF4为输出引脚*/
        *pGFCON = 0x100;
    }
    else if (which == 5)
    {
        *pGFCON = 0x400;
    }
    /*配置GPF4输出为0*/
    *pGFDAT = 0x0;
    return 0;
}
