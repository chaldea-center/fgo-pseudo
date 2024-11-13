System_String_o *__fastcall StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 *v14; // x8
  System_Enum_o v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+18h] [xbp-28h]

  if ( (byte_4B151F4 & 1) == 0 )
  {
    sub_1BCA7E0(&StoneShopEffect_Kind_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6454/*"ExtendFriendMax"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3256/*"BattleContinue"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_6455/*"ExtendServantEquipMax"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_2407/*"ApRecover"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6456/*"ExtendServantMax"*/, v12, v13);
    byte_4B151F4 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v14 = &StringLiteral_3256/*"BattleContinue"*/;
      return (System_String_o *)*v14;
    }
    if ( this == 2 )
    {
      v14 = &StringLiteral_2407/*"ApRecover"*/;
      return (System_String_o *)*v14;
    }
LABEL_16:
    v17 = this;
    v16.klass = (System_Enum_c *)StoneShopEffect_Kind_TypeInfo;
    v16.monitor = (void *)-1LL;
    return System_Enum__ToString(&v16, 0LL);
  }
  if ( this == 11 )
  {
    v14 = &StringLiteral_6454/*"ExtendFriendMax"*/;
    return (System_String_o *)*v14;
  }
  if ( this == 12 )
  {
    v14 = &StringLiteral_6456/*"ExtendServantMax"*/;
    return (System_String_o *)*v14;
  }
  if ( this != 13 )
    goto LABEL_16;
  v14 = &StringLiteral_6455/*"ExtendServantEquipMax"*/;
  return (System_String_o *)*v14;
}