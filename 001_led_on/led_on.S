/*
*点亮LED：gpf4
*/
.text
.global _start

_start:
/*
*配置GPF4为输出引脚
*把GPFCON 0x56000050 |= (1<<8)
*/
ldr r1, =0x56000050
ldr r0, =0x100
str r0, [r1]


/*
*设置GPF4输出高电平
* GPFDAT 0x56000054 |= (1<<4)
*/
ldr r1, =0x56000054
ldr r0, =0x0
str r0, [r1]

halt:
    b halt
