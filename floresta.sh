#!/usr/bin/expect -f
set timeout 1
spawn ./comparar
expect "Qual a maior floresta do mundo:\r"
send -- "1\r"
expect eof
