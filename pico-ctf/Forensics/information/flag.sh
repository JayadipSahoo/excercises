#!/usr/bin/env bash
strings cat.jpg |less
#found base64  encoded 
#cGljb0NURnt0aGVfbTN0YWRhdGFfMXNfbW9kaWZpZWR9
# to decode 
echo 'cGljb0NURnt0aGVfbTN0YWRhdGFfMXNfbW9kaWZpZWR9' |base64 --d 
#picoCTF{the_m3tadata_1s_modified}
