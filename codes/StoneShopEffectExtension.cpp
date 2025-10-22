System_String_o *StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  __int64 *v3; // x8
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_4C55C73 & 1) == 0 )
  {
    sub_1C3E564(&StoneShopEffect_Kind_TypeInfo);
    sub_1C3E564(&StringLiteral_6372/*"ExtendFriendMax"*/);
    sub_1C3E564(&StringLiteral_3113/*"BattleContinue"*/);
    sub_1C3E564(&StringLiteral_6373/*"ExtendServantEquipMax"*/);
    sub_1C3E564(&StringLiteral_2286/*"ApRecover"*/);
    sub_1C3E564(&StringLiteral_6374/*"ExtendServantMax"*/);
    byte_4C55C73 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v3 = &StringLiteral_3113/*"BattleContinue"*/;
      return (System_String_o *)*v3;
    }
    if ( this == 2 )
    {
      v3 = &StringLiteral_2286/*"ApRecover"*/;
      return (System_String_o *)*v3;
    }
LABEL_16:
    v6 = this;
    v5.klass = (System_Enum_c *)StoneShopEffect_Kind_TypeInfo;
    v5.monitor = (void *)-1LL;
    return System_Enum__ToString(&v5, 0);
  }
  if ( this == 11 )
  {
    v3 = &StringLiteral_6372/*"ExtendFriendMax"*/;
    return (System_String_o *)*v3;
  }
  if ( this == 12 )
  {
    v3 = &StringLiteral_6374/*"ExtendServantMax"*/;
    return (System_String_o *)*v3;
  }
  if ( this != 13 )
    goto LABEL_16;
  v3 = &StringLiteral_6373/*"ExtendServantEquipMax"*/;
  return (System_String_o *)*v3;
}