set timeout 1
spawn ./floresta
expect "Qual a maior floresta do mundo:\r"
send -- "1\r"
expect eof
