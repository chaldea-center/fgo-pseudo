void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4BDA078;
  if ( qword_4BDA078 )
  {
    sub_1C04B8C(qword_4BDA078 + 64);
    operator delete(v0);
  }
  qword_4BDA078 = 0LL;
}