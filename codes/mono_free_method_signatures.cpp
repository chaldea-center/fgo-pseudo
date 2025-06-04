void mono_free_method_signatures()
{
  void *v0; // x19

  v0 = (void *)qword_4B131A8;
  if ( qword_4B131A8 )
  {
    sub_1BACFC0(qword_4B131A8 + 64);
    operator delete(v0);
  }
  qword_4B131A8 = 0LL;
}