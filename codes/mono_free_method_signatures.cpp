void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4CD8490;
  if ( qword_4CD8490 )
  {
    sub_1C48CA4(qword_4CD8490 + 64);
    operator delete(v0);
  }
  qword_4CD8490 = 0;
}