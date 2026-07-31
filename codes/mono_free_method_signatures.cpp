void mono_free_method_signatures()
{
  void *v0; // x19
  __int64 v1; // [xsp+8h] [xbp-18h] BYREF

  v0 = (void *)qword_594B080;
  if ( qword_594B080 )
  {
    v1 = qword_594B080 + 64;
    sub_2202864(&v1);
    operator delete(v0);
  }
  qword_594B080 = 0;
}