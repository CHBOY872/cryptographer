# CRYPTOGRAPHER
The project for cryptographing messages. You can set your message into this programm and you can get a cryptographed message. Also, if you would like to decrypt this message, you can also use this programm.

### FOR LINUX:
If you would like to crypt your message, write that in terminal:

    ./main crypt
    
If you would like to decrypt, write that:
    
    ./main decrypt

Also, you can use this program by redirecting I/O streams:
If you want to put your input message into "main.txt", write:
    
    ./main crypt > main.txt
    
If you want to crypt message from "main.txt", write:

    ./main crypt < main.txt
    
If you want to crypt message from "main.txt" and put crypted message into "crypted.txt", write:

    ./main crypt < main.txt > crypted.txt
    
If you want to put your decrypt message into "main.txt", write:
    
    ./main decrypt > main.txt
    
If you want to decrypt message from "main.txt", write:

    ./main decrypt < main.txt
    
If you want to decrypt message from "main.txt" and put decrypted message into "decrypt.txt", write:

    ./main decrypt < main.txt > decrypt.txt
