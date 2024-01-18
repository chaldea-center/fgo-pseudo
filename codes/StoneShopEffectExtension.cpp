System_String_o *__fastcall StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8
  System_String_o *v9; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x20
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = this;
  if ( (byte_4185768 & 1) == 0 )
  {
    sub_B2C35C(&StoneShopEffect_Kind_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6299/*"ExtendFriendMax"*/, v3);
    sub_B2C35C(&StringLiteral_2774/*"BattleContinue"*/, v4);
    sub_B2C35C(&StringLiteral_6300/*"ExtendServantEquipMax"*/, v5);
    sub_B2C35C(&StringLiteral_1985/*"ApRecover"*/, v6);
    sub_B2C35C(&StringLiteral_6301/*"ExtendServantMax"*/, v7);
    byte_4185768 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v8 = &StringLiteral_2774/*"BattleContinue"*/;
      return (System_String_o *)*v8;
    }
    if ( this == 2 )
    {
      v8 = &StringLiteral_1985/*"ApRecover"*/;
      return (System_String_o *)*v8;
    }
  }
  else
  {
    switch ( this )
    {
      case 11:
        v8 = &StringLiteral_6299/*"ExtendFriendMax"*/;
        return (System_String_o *)*v8;
      case 12:
        v8 = &StringLiteral_6301/*"ExtendServantMax"*/;
        return (System_String_o *)*v8;
      case 13:
        v8 = &StringLiteral_6300/*"ExtendServantEquipMax"*/;
        return (System_String_o *)*v8;
    }
  }
  v11 = j_il2cpp_value_box_0(StoneShopEffect_Kind_TypeInfo, &v14);
  if ( !v11 )
    sub_B2C434(0LL, v12);
  v13 = v11;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                            v11,
                            *(_QWORD *)(*(_QWORD *)v11 + 368LL));
  v14 = *(_DWORD *)j_il2cpp_object_unbox_0(v13);
  return v9;
}