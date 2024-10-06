System_String_o *__fastcall StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8
  System_Enum_o v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h]

  if ( (byte_4A6EE93 & 1) == 0 )
  {
    sub_1B90010(&StoneShopEffect_Kind_TypeInfo, method);
    sub_1B90010(&StringLiteral_6332/*"ExtendFriendMax"*/, v3);
    sub_1B90010(&StringLiteral_3233/*"BattleContinue"*/, v4);
    sub_1B90010(&StringLiteral_6333/*"ExtendServantEquipMax"*/, v5);
    sub_1B90010(&StringLiteral_2388/*"ApRecover"*/, v6);
    sub_1B90010(&StringLiteral_6334/*"ExtendServantMax"*/, v7);
    byte_4A6EE93 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v8 = &StringLiteral_3233/*"BattleContinue"*/;
      return (System_String_o *)*v8;
    }
    if ( this == 2 )
    {
      v8 = &StringLiteral_2388/*"ApRecover"*/;
      return (System_String_o *)*v8;
    }
LABEL_16:
    v11 = this;
    v10.klass = (System_Enum_c *)StoneShopEffect_Kind_TypeInfo;
    v10.monitor = (void *)-1LL;
    return System_Enum__ToString(&v10, 0LL);
  }
  if ( this == 11 )
  {
    v8 = &StringLiteral_6332/*"ExtendFriendMax"*/;
    return (System_String_o *)*v8;
  }
  if ( this == 12 )
  {
    v8 = &StringLiteral_6334/*"ExtendServantMax"*/;
    return (System_String_o *)*v8;
  }
  if ( this != 13 )
    goto LABEL_16;
  v8 = &StringLiteral_6333/*"ExtendServantEquipMax"*/;
  return (System_String_o *)*v8;
}