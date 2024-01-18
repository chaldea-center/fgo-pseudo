bool __fastcall EmojiUtility__IsEmojiChar(uint16_t ch, const MethodInfo *method)
{
  int v4; // w9

  if ( (byte_418BD59 & 1) == 0 )
  {
    sub_B2C35C(&char_TypeInfo, method);
    byte_418BD59 = 1;
  }
  if ( (BYTE3(char_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  if ( System_Char__IsSurrogate(ch, 0LL) )
    return 1;
  if ( ch <= 0x26BCu )
  {
    if ( ch > 0x25A9u )
    {
      switch ( ch )
      {
        case 0x2648u:
        case 0x2649u:
        case 0x264Au:
        case 0x264Bu:
        case 0x264Cu:
        case 0x264Du:
        case 0x264Eu:
        case 0x264Fu:
        case 0x2650u:
        case 0x2651u:
        case 0x2652u:
        case 0x2653u:
        case 0x2660u:
        case 0x2663u:
        case 0x2665u:
        case 0x2666u:
        case 0x2668u:
        case 0x267Bu:
        case 0x267Eu:
        case 0x267Fu:
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
          return 1;
        case 0x2654u:
        case 0x2655u:
        case 0x2656u:
        case 0x2657u:
        case 0x2658u:
        case 0x2659u:
        case 0x265Au:
        case 0x265Bu:
        case 0x265Cu:
        case 0x265Du:
        case 0x265Eu:
        case 0x265Fu:
        case 0x2661u:
        case 0x2662u:
        case 0x2664u:
        case 0x2667u:
        case 0x2669u:
        case 0x266Au:
        case 0x266Bu:
        case 0x266Cu:
        case 0x266Du:
        case 0x266Eu:
        case 0x266Fu:
        case 0x2670u:
        case 0x2671u:
        case 0x2672u:
        case 0x2673u:
        case 0x2674u:
        case 0x2675u:
        case 0x2676u:
        case 0x2677u:
        case 0x2678u:
        case 0x2679u:
        case 0x267Au:
        case 0x267Cu:
        case 0x267Du:
        case 0x2680u:
        case 0x2681u:
        case 0x2682u:
        case 0x2683u:
        case 0x2684u:
        case 0x2685u:
        case 0x2686u:
        case 0x2687u:
        case 0x2688u:
        case 0x2689u:
        case 0x268Au:
        case 0x268Bu:
        case 0x268Cu:
        case 0x268Du:
        case 0x268Eu:
        case 0x268Fu:
        case 0x2690u:
        case 0x2691u:
        case 0x2698u:
        case 0x269Au:
        case 0x269Du:
        case 0x269Eu:
        case 0x269Fu:
        case 0x26ACu:
        case 0x26ADu:
        case 0x26AEu:
        case 0x26AFu:
          return ch == 10175;
        default:
          if ( ((unsigned int)ch - 9723 > 0x3F || ((1LL << ((unsigned __int8)ch + 5)) & 0x800000042648006FLL) == 0)
            && ((unsigned int)ch - 9642 > 0x16 || ((1 << (ch + 86)) & 0x401003) == 0) )
          {
            return ch == 10175;
          }
          return 1;
      }
    }
    if ( ch > 0x2319u )
    {
      if ( (unsigned int)ch - 9167 <= 0x2B && ((1LL << ((unsigned __int8)ch + 49)) & 0xE1FFC000001LL) != 0
        || (unsigned int)ch - 8986 <= 0xE && ((1 << (ch - 26)) & 0x4003) != 0 )
      {
        return 1;
      }
      v4 = 9410;
      goto LABEL_56;
    }
    if ( ch > 0x2121u )
    {
      if ( (unsigned int)ch - 8596 <= 0x16 && ((1 << (ch + 108)) & 0x60003F) != 0 || ch == 8482 )
        return 1;
      v4 = 8505;
      goto LABEL_56;
    }
    if ( ch > 0x2001u )
    {
      if ( (unsigned int)ch - 8194 <= 0x3A && ((1LL << ((unsigned __int8)ch - 2)) & 0x40000000000080BLL) != 0
        || ch == 8265 )
      {
        return 1;
      }
      v4 = 8419;
      goto LABEL_56;
    }
    if ( ch != 169 && ch != 174 )
      return ch == 10175;
    return 1;
  }
  if ( ch <= 0x2743u )
  {
    if ( ((unsigned int)ch - 9917 > 0x3D || ((1LL << ((unsigned __int8)ch + 67)) & 0x3DF8300000D60983LL) == 0)
      && ((unsigned int)ch - 9981 > 0x37 || ((1LL << ((unsigned __int8)ch + 3)) & 0xC0080002A4F921LL) == 0) )
    {
      return ch == 10175;
    }
    return 1;
  }
  if ( ch <= 0x2B04u )
  {
    if ( ((unsigned int)ch - 10052 > 0x20 || ((1LL << ((unsigned __int8)ch - 68)) & 0x1000B8509LL) == 0)
      && ((unsigned int)ch - 10133 > 0x1B || ((1 << (ch + 107)) & 0x8001007) == 0)
      && (unsigned int)ch - 10548 >= 2 )
    {
      return ch == 10175;
    }
    return 1;
  }
  if ( ch <= 0x302Fu )
  {
    if ( ((unsigned int)ch - 11035 > 0x3A || ((1LL << ((unsigned __int8)ch - 27)) & 0x420000000000003LL) == 0)
      && (unsigned int)ch - 11013 >= 3 )
    {
      return ch == 10175;
    }
    return 1;
  }
  if ( ch > 0x3298u )
  {
    if ( (unsigned int)ch - 65038 >= 2 )
    {
      v4 = 12953;
      goto LABEL_56;
    }
    return 1;
  }
  if ( ch == 12336 || ch == 12349 )
    return 1;
  v4 = 12951;
LABEL_56:
  if ( ch == v4 )
    return 1;
  return ch == 10175;
}


// local variable allocation has failed, the output may be wrong!
uint16_t __fastcall EmojiUtility__ValidateNameText(
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