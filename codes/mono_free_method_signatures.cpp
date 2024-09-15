void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4A402C0;
  if ( qword_4A402C0 )
  {
    sub_1B60178(qword_4A402C0 + 64);
    operator delete(v0);
  }
  qword_4A402C0 = 0LL;
}