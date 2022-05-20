#!/usr/bin/expect -f
set timeout 1
spawn ./decisao
expect "Escreva um número de zero a cem:\r"
send -- "23\r"
expect eof
