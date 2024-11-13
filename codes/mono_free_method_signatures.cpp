void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4B28570;
  if ( qword_4B28570 )
  {
    sub_1BB4798(qword_4B28570 + 64);
    operator delete(v0);
  }
  qword_4B28570 = 0LL;
}