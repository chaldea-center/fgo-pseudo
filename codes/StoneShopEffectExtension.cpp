System_String_o *__fastcall StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 *v4; // x8
  System_String_o *v5; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x20
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = this;
  if ( (byte_4350E05 & 1) == 0 )
  {
    sub_B70694(&StoneShopEffect_Kind_TypeInfo);
    sub_B70694(&StringLiteral_6391/*"ExtendFriendMax"*/);
    sub_B70694(&StringLiteral_2838/*"BattleContinue"*/);
    sub_B70694(&StringLiteral_6392/*"ExtendServantEquipMax"*/);
    sub_B70694(&StringLiteral_2017/*"ApRecover"*/);
    sub_B70694(&StringLiteral_6393/*"ExtendServantMax"*/);
    byte_4350E05 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v4 = &StringLiteral_2838/*"BattleContinue"*/;
      return (System_String_o *)*v4;
    }
    if ( this == 2 )
    {
      v4 = &StringLiteral_2017/*"ApRecover"*/;
      return (System_String_o *)*v4;
    }
  }
  else
  {
    switch ( this )
    {
      case 11:
        v4 = &StringLiteral_6391/*"ExtendFriendMax"*/;
        return (System_String_o *)*v4;
      case 12:
        v4 = &StringLiteral_6393/*"ExtendServantMax"*/;
        return (System_String_o *)*v4;
      case 13:
        v4 = &StringLiteral_6392/*"ExtendServantEquipMax"*/;
        return (System_String_o *)*v4;
    }
  }
  v7 = j_il2cpp_value_box_0(StoneShopEffect_Kind_TypeInfo, &v10, v2);
  if ( !v7 )
    sub_B7076C(0LL, v8);
  v9 = v7;
  v5 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 360LL))(
                            v7,
                            *(_QWORD *)(*(_QWORD *)v7 + 368LL));
  v10 = *(_DWORD *)j_il2cpp_object_unbox_0(v9);
  return v5;
}