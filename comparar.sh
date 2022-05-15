#!/usr/bin/expect -f
set timeout 5
spawn ./comparar
expect "insere o primeiro valor:\r"
send -- "5\r"
expect "Insere o segundo valor:\r"
send -- "7"
expect eof
