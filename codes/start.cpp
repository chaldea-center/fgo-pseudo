void start()
{
  __int64 v0; // x19
  void **v1; // x21

  v0 = 384LL;
  do
  {
    v1 = (void **)&byte_40F2860[v0];
    if ( (byte_40F2860[v0 - 24] & 1) != 0 )
      operator delete(*(v1 - 1));
    if ( (*(_BYTE *)(v1 - 6) & 1) != 0 )
      operator delete(*(void **)&byte_40F2860[v0 - 32]);
    v0 -= 48LL;
  }
  while ( v0 );
}