System_String_o *__fastcall StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  __int64 *v3; // x8
  System_String_o *v4; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = this;
  if ( (byte_42AEDCD & 1) == 0 )
  {
    sub_B52984(&StoneShopEffect_Kind_TypeInfo);
    sub_B52984(&StringLiteral_6342/*"ExtendFriendMax"*/);
    sub_B52984(&StringLiteral_2805/*"BattleContinue"*/);
    sub_B52984(&StringLiteral_6343/*"ExtendServantEquipMax"*/);
    sub_B52984(&StringLiteral_2007/*"ApRecover"*/);
    sub_B52984(&StringLiteral_6344/*"ExtendServantMax"*/);
    byte_42AEDCD = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v3 = &StringLiteral_2805/*"BattleContinue"*/;
      return (System_String_o *)*v3;
    }
    if ( this == 2 )
    {
      v3 = &StringLiteral_2007/*"ApRecover"*/;
      return (System_String_o *)*v3;
    }
  }
  else
  {
    switch ( this )
    {
      case 11:
        v3 = &StringLiteral_6342/*"ExtendFriendMax"*/;
        return (System_String_o *)*v3;
      case 12:
        v3 = &StringLiteral_6344/*"ExtendServantMax"*/;
        return (System_String_o *)*v3;
      case 13:
        v3 = &StringLiteral_6343/*"ExtendServantEquipMax"*/;
        return (System_String_o *)*v3;
    }
  }
  v6 = j_il2cpp_value_box_0(StoneShopEffect_Kind_TypeInfo, &v9);
  if ( !v6 )
    sub_B52A5C(0LL, v7);
  v8 = v6;
  v4 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 360LL))(
                            v6,
                            *(_QWORD *)(*(_QWORD *)v6 + 368LL));
  v9 = *(_DWORD *)j_il2cpp_object_unbox_0(v8);
  return v4;
}