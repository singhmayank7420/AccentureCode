struct marks
{
	 int sub[3];
	 int total;
};
void main()
{
	int i,j;
	struct marks student[3]={45,67,81,0,75,53,69,0,57,36,71,0};
	struct marks total;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			student[i].total=student[i].total+student[i].sub[j];
			total.sub[j]=total.sub[j]+student[i].sub[j];
		}
		total.total=total.total+student[i].total;
	}
	printf("\n STUDENT\t\tTOTAL\n");
	for(i=0;i<=2;i++)
	{
		printf("\nstudent[%d]\t\t%d",i+1,student[i].total);
		
	}
	printf("\nSUBJECT\t\tTOTAL\n");
	for(j=0;j<=2;j++)
	{
		printf("\nstudent[%d]\t\t%d",j+1,total.sub[j]);
	}
	printf("\nGRAND TOTAL\t\t%d",total.total);
}//this is the new change
