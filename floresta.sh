#!/usr/bin/expect -f
set timeout 1
spawn ./nota
expect "Insira a primeira nota: \r"
send -- "15\r"
expect "Insira a segunda nota: \r"
send -- "20\r"
expect eof
