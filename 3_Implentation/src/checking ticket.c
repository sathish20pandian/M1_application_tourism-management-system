void checking_ticket(userprofile <em>hello) { while(hello!=NULL) { if(!strcmp(hello-&gt;user_fname,current_client)) break; hello=hello-&gt;next; } if(!strcmp(hello-&gt;user_place,"\0") || hello-&gt;ticket_price==0.0 || hello-&gt;user_numtick==0) { printf("You do not have a ticket booked yet\n"); return; } float tot=0.0; tot=(hello-&gt;ticket_price)</em>(hello-&gt;user_numtick);
printf("You have booked %d tickets for a sum total of P %f for tour code %s\n",hello-&gt;user_numtick,tot,hello-&gt;user_place);
}