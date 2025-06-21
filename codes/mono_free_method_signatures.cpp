void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4B2D618;
  if ( qword_4B2D618 )
  {
    sub_1BB4FB0(qword_4B2D618 + 64);
    operator delete(v0);
  }
  qword_4B2D618 = 0LL;
}