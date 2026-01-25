void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4CFF658;
  if ( qword_4CFF658 )
  {
    sub_1C533DC(qword_4CFF658 + 64);
    operator delete(v0);
  }
  qword_4CFF658 = 0;
}