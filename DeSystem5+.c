#include <stdio.h>
#include <string.h>
#include <time.h>

//include
int c;
//int clockcmd = 0;
char maxchatcmd[100];
void max_awnswer1();
char contine [50];
int  numcmd = 0;
char stringcmd[50];
void handle_command(int cmd);
void handle_max();
void shutdown_ui();
void handle_clockcmd();
//SystemInfo system_variables();
int system2_variables();



void app_calculator();
void module_home();
void app_news();
void app_max();
void app_clock();
void app_clock2( int *value);
void app_calendar();
void app_calendar2();
void handle_calendar(int cmd1calendar);
void app_calendar_date();
void app_d_esysinfo(float *sysinfo, int *cmdinfo, float *ui_version, float *ux_version, char *sys_info_brand);
void app_d_esysinfo_ui();
void app_d_notes(char *note, int *d_note_cmd);
void app_d_notes_ui();






void shutdown_ui() {
	printf("-----------------------------------------\n");
	printf("|                                       |\n");
	printf("|            Shutting down...           |\n");
	printf("|										|\n");
	printf("-----------------------------------------\n");
	
}



int main(int argc, char *argv[])



{
	while(1) {

		module_home();
		scanf( " %d",  &numcmd);
		while ((c = getchar()) != '\n' && c != EOF) {}
		if (numcmd == 1) {
			shutdown_ui();
			break;
		} else {

			handle_command(numcmd);
			numcmd = 0;


		}
		


		
	
		
	} // main loop & core

	return 0;
	
	
} //Core



typedef struct {
	int d_note_cmd;
	char note[99];

} v_note;

v_note notes_variables() {
	v_note vn;

	vn.d_note_cmd = 0;
	strcpy(vn.note, "create");

	return vn;

	//variables for D.Note
}









typedef struct {
	float sysinfo;
	float ui_version;
	int cmdinfo;
	float ux_version;
	char sys_info_brand[15];

} SystemInfo;


SystemInfo system_variables() {
	SystemInfo info;

	info.sysinfo = 5.0;
	info.ui_version = 3.5;
	info.cmdinfo = 0; 
	info.ux_version = 6.0;
	strcpy(info.sys_info_brand, "D.electronics");

	return info;
	

 //variables for app_d_esysinfo
}

int system2_variables() {
	int clockcmd = 0;
	return clockcmd;

	
}





void handle_command(int numcmd) {

	switch (numcmd) {
		case 2: app_calculator(); break;
		case 3: app_news(); break;
		case 4: app_max(); break;
		case 5: {
			int clockcmd = system2_variables();
			app_clock2(&clockcmd);
			break;
		}
		case 6: app_calendar(); break;
		case 7: {

			SystemInfo info = system_variables();

			app_d_esysinfo(
				&info.sysinfo,
				&info.cmdinfo,
				&info.ui_version,
				&info.ux_version,
				info.sys_info_brand
				
			);
			break;


		}
		case 8: {
			v_note vn = notes_variables();

			app_d_notes(
				vn.note,
				&vn.d_note_cmd

			);


			break;
		}
			

		}
	}




void module_home() {
	printf("----------------------------------------\n");
	printf("| 1: shutdown							 |\n");
	printf("| 2: calculator                          |\n");
	printf("| 3: news                                |\n");
	printf("| 4: max                                 |\n");
	printf("| 5: clock                               |\n");
	printf("| 6: calendar                            |\n");
	printf("| 7: D.eSystem version                   |\n");
	printf("| 8: D.Note                              |\n");
	printf("----------------------------------------\n\n");
	printf("D.eShell > ");
	//homesreen		
}









void app_calculator() {
	int cmdcalculator = 0;
	double num1 = 0;
	double num2 = 0;
	while(1) {

		printf("-----------------------------------------------\n");
		printf("|Choose an operator with one of these numbers!|\n");
		printf("| 1: +                                        |\n");
		printf("| 2: -                                        |\n");
		printf("| 3: *                                        |\n");
		printf("| 4: /                                        |\n");
		printf("| 5: close                                    |\n");
		printf("-----------------------------------------------\n\n");
		scanf("%d", &cmdcalculator);
		
		while ((c = getchar()) != '\n' && c != EOF) {}
		printf("D.eShell > \n");
		// calculator main menu

		if (cmdcalculator == 5) {
			return;
			break;

			
		} else if (cmdcalculator == 1) {
			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num1);
			
			while ((c = getchar()) != '\n' && c != EOF) {}

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);
			
			while ((c = getchar()) != '\n' && c != EOF) {}
			double sum = num1 + num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");

		} else if (cmdcalculator == 2) {
			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n");
			scanf("%lf", &num1);
			
			while ((c = getchar()) != '\n' && c != EOF) {}

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);
			 
			while ((c = getchar()) != '\n' && c != EOF) {}
			double sum = num1 - num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");
			

		} else if (cmdcalculator == 3) {
			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n");
			scanf("%lf", &num1);

			 
			while ((c = getchar()) != '\n' && c != EOF) {}

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);

			
			while ((c = getchar()) != '\n' && c != EOF) {}

			double sum = num1 * num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");

		} else if (cmdcalculator == 4) {

			printf("---------------------------------------\n");
			printf("|      Type  your first number!!      |\n");
			printf("---------------------------------------\n");
			scanf("%lf", &num1);
			
			while ((c = getchar()) != '\n' && c != EOF) {}

			printf("---------------------------------------\n");
			printf("|     Type  your second number!!      |\n");
			printf("---------------------------------------\n"); 
			scanf("%lf", &num2);
			
			while ((c = getchar()) != '\n' && c != EOF) {}

			double sum = num1 / num2;
			printf("-----------------------------------------\n");
			printf("| sum:                                \n");
			printf("| %lf                                 \n", sum);
			printf("-----------------------------------------\n");
		}

		 printf("-----------------------------------------\n");
		 printf("|       Type anything to continue        |\n");
		 printf("-----------------------------------------\n");
		 scanf("%49s", contine);
		 
		 while ((c = getchar()) != '\n' && c != EOF) {}

                

	} // calculator
}




void app_news() {
	int cmdnews = 0;

	while(1) {


		printf("--------------------------------------\n");
     	printf("|               D.News               |\n");
    	printf("| 1: news                            |\n");
    	printf("| 2: home                            |\n");
    	printf("--------------------------------------\n");
		scanf("%d", &cmdnews);

		
		while ((c = getchar()) != '\n' && c != EOF) {} 
		

		
	
 		if (cmdnews == 1) {

			printf("--------------------------------------\n");
        	printf("|               D.News               |\n");
        	printf("| D.eSystem 4 came out and it is     |\n");
        	printf("| the first D.eSystem which uses C.  |\n");
        	printf("|                                    |\n");
        	printf("| There is a big leak that           |\n");
        	printf("| D.eSystem 4 was the last Python    |\n");
        	printf("| based D.eSystem.                   |\n");
			printf("|									 |\n");
			printf("| Type anything to continue			 |\n");
        	printf("--------------------------------------\n");

		} 	else if (cmdnews == 2) {
			return;
			break;

		}
		
		scanf("%49s", contine);

		
		while ((c = getchar()) != '\n' && c != EOF) {}
	}



} //News





void app_max() {

	

	printf("-------------------------------------\n");
    printf("|                Max                |\n");
    printf("|                                   |\n");
    printf("|       What can I do for you       |\n");
    printf("|                                   |\n");
    printf("|   Type home to close this app!!   |\n");
    printf("-------------------------------------\n");


	
    while ((c = getchar()) != '\n' && c != EOF) {}

	 //fgets(maxchatcmd, sizeof(maxchatcmd), stdin);
	 //maxchatcmd[strcspn(maxchatcmd, "\n")] = 0;
	 handle_max();



}


void handle_max() {

	while(1) {


		fgets(maxchatcmd, sizeof(maxchatcmd), stdin);
	 	maxchatcmd[strcspn(maxchatcmd, "\n")] = 0;


		if (strcasecmp(maxchatcmd, "hi") == 0) {
                    printf("--------------------\n");
                    printf("|  hello friend    |\n");
                    printf("--------------------\n");

                    


                } else if (strcasecmp(maxchatcmd, "Who are you") == 0) {

                    printf("--------------------------\n");
                    printf("| I am Max, the chatbot  |\n");
                    printf("| from D.eSystem 5.      |\n");
                    printf("--------------------------\n");

                } else if (strcasecmp(maxchatcmd, "How old are you") == 0) {

                    printf("------------------------------------\n");
                    printf("| I was introduced in december 2024|\n");
                    printf("------------------------------------\n");
                } else if (strcasecmp(maxchatcmd, "What is this") == 0) {

                    printf("-----------------------\n");
                    printf("| This is D.eSystem 5 |\n");
                    printf("-----------------------\n");

                } else if (strcasecmp(maxchatcmd, "What is the best OS") == 0) {

                    printf("------------------------\n");
                    printf("| Its D.eSystem 5      |\n");
                    printf("------------------------\n");

                } else if (strcasecmp(maxchatcmd, "be funny") == 0) {

                    printf("------------------------\n");
                    printf("| hahahahahahahahahaha |\n");
                    printf("------------------------\n");
                } else if (strcasecmp(maxchatcmd, "home") == 0) {

					return;
					
				}
                {
                    /* code */
                }
                


                printf("-----------------------------------------\n");
                printf("|       Type 1 thing to continue        |\n");
                printf("-----------------------------------------\n");

				scanf("%49s", contine);;
				while ((c = getchar()) != '\n' && c != EOF) {} 
				
				printf("-------------------------------------\n");
    			printf("|                Max                |\n");
    			printf("|                                   |\n");
    			printf("|       What can I do for you       |\n");
    			printf("|                                   |\n");
    			printf("|   Type home to close this app!!   |\n");
   	 			printf("-------------------------------------\n");

	}
				
				



	



} //Max chatbot











void app_clock() {

	int clockcmd = system2_variables();
	


	printf("--------------------------------------------\n");
    printf("|                  Clock                   |\n");
    printf("|                                          |\n");
    printf("| 1: time                                  |\n");
    printf("| 2: home                                  |\n");
    printf("--------------------------------------------\n");

	
	app_clock2(&clockcmd);


}


void app_clock2(int *value) {
	while(1) {
		

		printf("--------------------------------------------\n");
    	printf("|                  Clock                   |\n");
    	printf("|                                          |\n");
    	printf("| 1: time                                  |\n");
    	printf("| 2: home                                  |\n");
    	printf("--------------------------------------------\n");


		scanf("%d", value);
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (*value == 1) {
			
			time_t now;
            struct  tm * info;

			time(&now);
			info = localtime(&now);


			printf("--------------------------------------------\n");
            printf("|                  Clock                   |\n");
            printf("|                                          |\n");
            printf("| time: %02d:%02d:%02d                           |\n",
                    info->tm_hour, info->tm_min, info->tm_sec);
			printf(" Type anything to continue!!               |\n");
            printf("--------------------------------------------\n");

			scanf("%49s", contine);
			while ((c = getchar()) != '\n' && c != EOF) {}

			


            

			printf("--------------------------------------------\n");
    		printf("|                  Clock                   |\n");
    		printf("|                                          |\n");
    		printf("| 1: time                                  |\n");
    		printf("| 2: home                                  |\n");
    		printf("--------------------------------------------\n");
			
			
		} else if (*value == 2) {

			return; 
			break;
		}




        
	}

} //clock









void app_calendar() {
	printf("--------------------------------------------\n");
    printf("|                 Calendar                 |\n");
    printf("| 1: date                                  |\n");
    printf("| 2: home                                  |\n");
    printf("--------------------------------------------\n");

	app_calendar2 ();

}

void app_calendar2() {

	int cmdcalend;
	scanf("%d", &cmdcalend);
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (cmdcalend == 1) {
		time_t date;
		struct tm * info;
		time(&date);
		info = localtime(&date);

		printf("--------------------------------------------\n");
		printf("|                Date today                |\n");
		printf("|                                          |\n");
		printf("| %02d.%02d.%04d                               |\n",
				info->tm_mday,
				info->tm_mon + 1,
				info->tm_year + 1900);
		printf("|										   |\n");
		printf("|        Type anything to continue!        |\n");
		printf("--------------------------------------------\n");

		scanf("%49s", contine);
		while ((c = getchar()) != '\n' && c != EOF) {}
		app_calendar();
	} else if (cmdcalend == 2) {
		return;
	} //calendar
}











void app_d_esysinfo(float *sysinfo, int *cmdinfo, float *ui_version, float *ux_version, char *sys_info_brand) {
	while (1) {
		app_d_esysinfo_ui();
		scanf("%d", cmdinfo);
		while ((c = getchar()) != '\n' && c != EOF) {}

		if(*cmdinfo == 1) {
			printf("--------------------\n");
			printf("|    OS version    |\n");
			printf("|                  |\n");
			printf("|  D.eSystem   %f  |\n", *sysinfo);
			printf("--------------------\n");


		} else if(*cmdinfo == 2) {

			printf("--------------------\n");
			printf("|    UI version    |\n");
			printf("|                  |\n");
			printf("| D.Touch UI m  %f|\n", *ui_version);
			printf("--------------------\n");

		} else if(*cmdinfo == 3) {


			printf("--------------------\n");
            printf("|    UX version    |\n");
            printf("|                  |\n");
            printf("|   String UX %f   |\n", *ux_version);
            printf("--------------------\n");
		} else if(*cmdinfo == 4) {
			printf("--------------------\n");
			printf("|      brand:      |\n");
			printf("|                  |\n");
			printf("|  %s              |\n", sys_info_brand);
			printf("--------------------\n");

		} else if(*cmdinfo == 5) {
			return;

		}

	}
	




} //D.eSystem info


void app_d_esysinfo_ui() {

	printf("--------------------\n");
	printf("| 1: OS version    |\n");
	printf("| 2: UI version    |\n");
	printf("| 3: UX version    |\n");
	printf("| 4: brand         |\n");
	printf("| 5: home          |\n");
	printf("--------------------\n");
} //D.eSystem main UI











void app_d_notes(char *note, int *d_note_cmd) {
	while (1) {

		app_d_notes_ui();
		scanf("%d", d_note_cmd);
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (*d_note_cmd == 1) {
			printf("----------------\n");
			printf("| Create a note|\n");
			printf("----------------\n");

			fgets(note, 99, stdin);


		} else if (*d_note_cmd == 2) {
			printf("|--------------------------------------------------------------------\n");
			printf("| Note:");
			printf("| %-99s|\n", note);
			printf("|--------------------------------------------------------------------\n");


		} else if (*d_note_cmd == 3) {
			return;
		} else {
			printf("-----------------\n");
			printf("|Unknown command|\n");
			printf("-----------------\n");
		}




	}
} //D.Note



void app_d_notes_ui() {
	printf("--------------------------------------------\n");
	printf("|                  Notes                   |\n");
	printf("|                                          |\n");
	printf("| 1: create note                           |\n");
	printf("| 2: show notes                            |\n");
	printf("| 3: home                                  |\n");
	printf("--------------------------------------------\n");

} //D.Note UI