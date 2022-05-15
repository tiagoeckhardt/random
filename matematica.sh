#!/usr/bin/expect -f
set timeout 1
spawn ./matematica
expect "Digite o primeiro valor: \r"
send -- "5\r"
expect "Digite outro valor: \r"
send -- "7\r"
expect eof
