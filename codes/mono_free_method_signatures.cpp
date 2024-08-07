void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A10E30;
  if ( qword_4A10E30 )
  {
    sub_1B4E9B8(qword_4A10E30 + 64);
    operator delete(v0);
  }
  qword_4A10E30 = 0LL;
}