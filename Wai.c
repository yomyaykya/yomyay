int main(int argc, char **argv)
{
<<<<<<< HEAD
printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
printf("Hello %s!\n",name);
printf("Hello, %s!\n",name);
=======
char first[255], last[255];
printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */
printf("Hello %s %s!\n", first, last);
>>>>>>> b02ef4e59157435d98ddddffcc68fbec2859f6b8
return 0;
}