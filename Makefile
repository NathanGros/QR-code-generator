make :
	gcc -o qrcode_maker.exe qr.c -lraylib -lm
	./qrcode_maker.exe
