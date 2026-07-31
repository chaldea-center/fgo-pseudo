bool EmojiUtility__IsEmojiChar(uint16_t ch, const MethodInfo *method)
{
  bool result; // w0
  int v4; // w9

  if ( !*(_DWORD *)(qword_594C0B0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0B0, method);
  if ( System_Char__IsSurrogate(ch, 0) )
    return 1;
  result = 1;
  if ( ch <= 0x2691u )
  {
    if ( ch > 0x25A9u )
    {
      if ( ((unsigned int)ch - 9800 > 0x37 || ((1LL << ((unsigned __int8)ch - 72)) & 0xC8000169000FFFLL) == 0)
        && ((unsigned int)ch - 9723 > 0x3F || ((1LL << ((unsigned __int8)ch + 5)) & 0x800000042648006FLL) == 0)
        && ((unsigned int)ch - 9642 > 0x16 || ((1 << (ch + 86)) & 0x401003) == 0) )
      {
        return 0;
      }
      return result;
    }
    if ( ch > 0x2319u )
    {
      if ( (unsigned int)ch - 9167 <= 0x2B && ((1LL << ((unsigned __int8)ch + 49)) & 0xE1FFC000001LL) != 0
        || (unsigned int)ch - 8986 <= 0xE && ((1 << (ch - 26)) & 0x4003) != 0 )
      {
        return result;
      }
      v4 = 9410;
    }
    else if ( ch > 0x2121u )
    {
      if ( (unsigned int)ch - 8596 <= 0x16 && ((1 << (ch + 108)) & 0x60003F) != 0 || ch == 8482 )
        return result;
      v4 = 8505;
    }
    else
    {
      if ( ch <= 0x2001u )
      {
        if ( ch == 169 || ch == 174 )
          return result;
        return 0;
      }
      if ( (unsigned int)ch - 8194 <= 0x3A && ((1LL << ((unsigned __int8)ch - 2)) & 0x40000000000080BLL) != 0
        || ch == 8265 )
      {
        return result;
      }
      v4 = 8419;
    }
LABEL_50:
    if ( ch == v4 )
      return result;
    return 0;
  }
  if ( ch <= 0x2727u )
  {
    switch ( ch )
    {
      case 0x2692u:
      case 0x2693u:
      case 0x2694u:
      case 0x2695u:
      case 0x2696u:
      case 0x2697u:
      case 0x2699u:
      case 0x269Bu:
      case 0x269Cu:
      case 0x26A0u:
      case 0x26A1u:
      case 0x26A2u:
      case 0x26A3u:
      case 0x26A4u:
      case 0x26A5u:
      case 0x26A6u:
      case 0x26A7u:
      case 0x26A8u:
      case 0x26A9u:
      case 0x26AAu:
      case 0x26ABu:
      case 0x26B0u:
      case 0x26B1u:
      case 0x26B2u:
      case 0x26BDu:
      case 0x26BEu:
      case 0x26C4u:
      case 0x26C5u:
      case 0x26C8u:
      case 0x26CEu:
      case 0x26CFu:
      case 0x26D1u:
      case 0x26D3u:
      case 0x26D4u:
      case 0x26E9u:
      case 0x26EAu:
      case 0x26F0u:
      case 0x26F1u:
      case 0x26F2u:
      case 0x26F3u:
      case 0x26F4u:
      case 0x26F5u:
      case 0x26F7u:
      case 0x26F8u:
      case 0x26F9u:
      case 0x26FAu:
      case 0x26FDu:
      case 0x2702u:
      case 0x2705u:
      case 0x2708u:
      case 0x2709u:
      case 0x270Au:
      case 0x270Bu:
      case 0x270Cu:
      case 0x270Fu:
      case 0x2712u:
      case 0x2714u:
      case 0x2716u:
        return result;
      default:
        return 0;
    }
    return result;
  }
  if ( ch > 0x2B04u )
  {
    if ( ch <= 0x302Fu )
    {
      if ( ((unsigned int)ch - 11035 > 0x3A || ((1LL << ((unsigned __int8)ch - 27)) & 0x420000000000003LL) == 0)
        && (unsigned int)ch - 11013 >= 3 )
      {
        return 0;
      }
      return result;
    }
    if ( ch > 0x3298u )
    {
      if ( (unsigned int)ch - 65038 < 2 )
        return result;
      v4 = 12953;
    }
    else
    {
      if ( ch == 12336 || ch == 12349 )
        return result;
      v4 = 12951;
    }
    goto LABEL_50;
  }
  if ( ((unsigned int)ch - 10024 > 0x3C || ((1LL << ((unsigned __int8)ch - 40)) & 0x1000B85090001801LL) == 0)
    && ((unsigned int)ch - 10133 > 0x2A || ((1LL << ((unsigned __int8)ch + 107)) & 0x40008001007LL) == 0)
    && (unsigned int)ch - 10548 >= 2 )
  {
    return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
uint16_t EmojiUtility__ValidateNameText(
        System_String_o *text,
        int32_t charIndex,
        uint16_t addedChar,
        const MethodInfo *method)
{
  if ( EmojiUtility__IsEmojiChar(addedChar, *(const MethodInfo **)&charIndex) )
    return 0;
  else
    return addedChar;
}