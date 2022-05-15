#!/usr/bin/expect -f
set timeout 1
spawn ./espera
expect "Escreva o número 20:\r"
send -- "5\r"
expect "Escreva o número 20:\r"
send -- "20\r"
expect eof
