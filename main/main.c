extern int other(void);
int mysqlrt(void);

int
mysqlrt(void)
{
	return 1;
}
int
main()
{
	return mysqlrt() + other();
}
