#!/usr/bin/expect -f
set timeout 1
spawn ./petalas.c
expect "Digite o número de pétalas: \r"
send -- "3\r"
expect eof
