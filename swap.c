void swap_max(int a[], int l, int n )
{
    int pos =n;
    int max=a[n];
    for (int i=n;i<l;i++)
    {
        if(max<a[i])
          { max=a[i];
           pos = i; }
    }
    int an=a[pos];
    a[pos]=a[n];
    a[n]=an;
}
void ssort(int a[], int l)
{
  for(int i=0;i<l;i++)
     {  swap_max(a,l,i); }
      
}
