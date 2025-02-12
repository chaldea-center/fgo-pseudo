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

  if ( (byte_4BB36C7 & 1) == 0 )
  {
    sub_1C13D24(&StoneShopEffect_Kind_TypeInfo, method);
    sub_1C13D24(&StringLiteral_6489/*"Expression of type '{0}' cannot be used for return type '{1}'"*/, v3);
    sub_1C13D24(&StringLiteral_3267/*"BattleBondOffset"*/, v4);
    sub_1C13D24(&StringLiteral_6490/*"Expression.NodeType"*/, v5);
    sub_1C13D24(&StringLiteral_2416/*"AnyUri"*/, v6);
    sub_1C13D24(&StringLiteral_6491/*"Expression.Type"*/, v7);
    byte_4BB36C7 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v8 = &StringLiteral_3267/*"BattleBondOffset"*/;
      return (System_String_o *)*v8;
    }
    if ( this == 2 )
    {
      v8 = &StringLiteral_2416/*"AnyUri"*/;
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
    v8 = &StringLiteral_6489/*"Expression of type '{0}' cannot be used for return type '{1}'"*/;
    return (System_String_o *)*v8;
  }
  if ( this == 12 )
  {
    v8 = &StringLiteral_6491/*"Expression.Type"*/;
    return (System_String_o *)*v8;
  }
  if ( this != 13 )
    goto LABEL_16;
  v8 = &StringLiteral_6490/*"Expression.NodeType"*/;
  return (System_String_o *)*v8;
}