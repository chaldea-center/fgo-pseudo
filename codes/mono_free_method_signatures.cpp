void mono_free_method_signatures()
{
  void *v0; // x19
  __int64 v1; // [xsp+8h] [xbp-18h] BYREF

  v0 = (void *)qword_5983358;
  if ( qword_5983358 )
  {
    v1 = qword_5983358 + 64;
    sub_2216674(&v1);
    operator delete(v0);
  }
  qword_5983358 = 0;
}