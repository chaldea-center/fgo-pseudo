__int64 __fastcall BrotliEncoderSetParameter(__int64 a1, int a2, unsigned int a3)
{
  if ( *(_DWORD *)(a1 + 6556) )
    return 0;
  switch ( a2 )
  {
    case 0:
      *(_DWORD *)a1 = a3;
      break;
    case 1:
      *(_DWORD *)(a1 + 4) = a3;
      break;
    case 2:
      *(_DWORD *)(a1 + 8) = a3;
      break;
    case 3:
      *(_DWORD *)(a1 + 12) = a3;
      break;
    case 4:
      if ( a3 > 1 )
        return 0;
      *(_DWORD *)(a1 + 32) = a3 != 0;
      break;
    case 5:
      *(_QWORD *)(a1 + 24) = a3;
      break;
    case 6:
      *(_DWORD *)(a1 + 36) = a3 != 0;
      break;
    case 7:
      *(_DWORD *)(a1 + 64) = a3;
      break;
    case 8:
      *(_DWORD *)(a1 + 68) = a3;
      break;
    case 9:
      if ( a3 > 0x40000000 )
        return 0;
      *(_QWORD *)(a1 + 16) = a3;
      break;
    default:
      return 0;
  }
  return 1;
}