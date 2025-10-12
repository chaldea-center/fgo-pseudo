void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4C48B50;
  if ( qword_4C48B50 )
  {
    sub_1C1CBD8(qword_4C48B50 + 64);
    operator delete(v0);
  }
  qword_4C48B50 = 0;
}