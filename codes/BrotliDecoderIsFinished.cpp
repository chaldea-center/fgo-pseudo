bool __fastcall BrotliDecoderIsFinished(__int64 a1)
{
  if ( *(_DWORD *)a1 != 26 )
    return 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x80000000) != 0 || !*(_QWORD *)(a1 + 120) )
    return 1;
  return *(int *)(a1 + 76) - *(_QWORD *)(a1 + 376) + *(_QWORD *)(a1 + 368) * *(int *)(a1 + 88) == 0;
}