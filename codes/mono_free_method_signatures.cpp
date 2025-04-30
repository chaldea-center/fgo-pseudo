void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A5F9D0;
  if ( qword_4A5F9D0 )
  {
    sub_1B70370(qword_4A5F9D0 + 64);
    operator delete(v0);
  }
  qword_4A5F9D0 = 0LL;
}