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
  __int64 v12; // x20
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  v13 = this;
  if ( (byte_40F7BFC & 1) == 0 )
  {
    sub_B16FFC(&StoneShopEffect_Kind_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6281/*"ExtendFriendMax"*/, v3);
    sub_B16FFC(&StringLiteral_2762/*"BattleContinue"*/, v4);
    sub_B16FFC(&StringLiteral_6282/*"ExtendServantEquipMax"*/, v5);
    sub_B16FFC(&StringLiteral_1979/*"ApRecover"*/, v6);
    sub_B16FFC(&StringLiteral_6283/*"ExtendServantMax"*/, v7);
    byte_40F7BFC = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v8 = &StringLiteral_2762/*"BattleContinue"*/;
      return (System_String_o *)*v8;
    }
    if ( this == 2 )
    {
      v8 = &StringLiteral_1979/*"ApRecover"*/;
      return (System_String_o *)*v8;
    }
  }
  else
  {
    switch ( this )
    {
      case 11:
        v8 = &StringLiteral_6281/*"ExtendFriendMax"*/;
        return (System_String_o *)*v8;
      case 12:
        v8 = &StringLiteral_6283/*"ExtendServantMax"*/;
        return (System_String_o *)*v8;
      case 13:
        v8 = &StringLiteral_6282/*"ExtendServantEquipMax"*/;
        return (System_String_o *)*v8;
    }
  }
  v11 = j_il2cpp_value_box_0(StoneShopEffect_Kind_TypeInfo, &v13);
  if ( !v11 )
    sub_B170D4();
  v12 = v11;
  v9 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 360LL))(
                            v11,
                            *(_QWORD *)(*(_QWORD *)v11 + 368LL));
  v13 = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
  return v9;
}