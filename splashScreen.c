#include <stdio.h>
#include <unistd.h> // for usleep function

// ROS THREE
const char teamTxt[] =
"\t    ______     ______     ______        ______   __  __     ______     ______     ______\n\
\t   /\\  == \\   /\\  __ \\   /\\  ___\\      /\\__  _\\ /\\ \\_\\ \\   /\\  == \\   /\\  ___\\   /\\  ___\n\
\t   \\ \\  __<   \\ \\ \\/\\ \\  \\ \\___  \\     \\/_/\\ \\/ \\ \\  __ \\  \\ \\  __<   \\ \\  __\\   \\ \\  __\\ \n\
\t    \\ \\_\\ \\_\\  \\ \\_____\\  \\/\\_____\\       \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_____\\\n\
\t     \\/_/ /_/   \\/_____/   \\/_____/        \\/_/   \\/_/\\/_/   \\/_/ /_/   \\/_____/   \\/_____/\n\
";

// PRESENT
const char presentTxt[] =
"\t\t\t\t  ______   ______     ______     ______     ______     __   __     ______\n\
\t\t\t\t /\\  == \\ /\\  == \\   /\\  ___\\   /\\  ___\\   /\\  ___\\   /\\ \"-.\\ \\   /\\__  _\\\n\
\t\t\t\t \\ \\  _-/ \\ \\  __<   \\ \\  __\\   \\ \\___  \\  \\ \\  __\\   \\ \\ \\-.  \\  \\/_/\\ \\/\n\
\t\t\t\t  \\ \\_\\    \\ \\_\\ \\_\\  \\ \\_____\\  \\/\\_____\\  \\ \\_____\\  \\ \\_\\\\\"\\_\\    \\ \\_\\\n\
\t\t\t\t   \\/_/     \\/_/ /_/   \\/_____/   \\/_____/   \\/_____/   \\/_/ \\/_/     \\/_/\n\
";

void showSplashScreen() {
	int i, j;
	
	// lompat ke bagian bawah console
    for ( i = 0; i < 150; i++) 
		printf("\n"); 
	
	printf("%s\n", teamTxt);
	printf("%s\n", presentTxt);
	
	// [modified] from http://HelloACM.com, http://CodingForSpeed.com
    j = 300000;
    for (i = 0; i < 28; i ++) {
        usleep(j); // bergerak lebih cepat
        j = (int)(j * 0.9); // mengurangi durasi sleep setiap perulangan
        printf("\n"); // bergerak sebaris keatas
    }
}
