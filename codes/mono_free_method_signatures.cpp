void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4B55F60;
  if ( qword_4B55F60 )
  {
    sub_1BC5830(qword_4B55F60 + 64);
    operator delete(v0);
  }
  qword_4B55F60 = 0LL;
}