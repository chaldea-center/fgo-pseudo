void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4C34610;
  if ( qword_4C34610 )
  {
    sub_1C2571C(qword_4C34610 + 64);
    operator delete(v0);
  }
  qword_4C34610 = 0LL;
}