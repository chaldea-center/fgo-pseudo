void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A0E708;
  if ( qword_4A0E708 )
  {
    sub_1B4E080(qword_4A0E708 + 64);
    operator delete(v0);
  }
  qword_4A0E708 = 0LL;
}