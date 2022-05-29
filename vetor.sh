#!/usr/bin/expect -f
set timeout 1
spawn ./vetor
expect "insira 5 números\r"
send -- "5\r"
send -- "7\r"
send -- "1\r"
send -- "2\r"
send -- "9\r"
expect eof
