void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4C0FDE0;
  if ( qword_4C0FDE0 )
  {
    sub_1C180E4(qword_4C0FDE0 + 64);
    operator delete(v0);
  }
  qword_4C0FDE0 = 0LL;
}