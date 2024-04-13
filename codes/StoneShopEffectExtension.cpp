System_String_o *__fastcall StoneShopEffectExtension__GetDisplayName(int32_t this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 *v20; // x8
  System_String_o *v21; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  int32_t v26; // [xsp+Ch] [xbp-14h] BYREF

  v26 = this;
  if ( (byte_42E7AF4 & 1) == 0 )
  {
    sub_B5D5C4(&StoneShopEffect_Kind_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6378/*"ExtendFriendMax"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2829/*"BattleContinue"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6379/*"ExtendServantEquipMax"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2012/*"ApRecover"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6380/*"ExtendServantMax"*/, v17, v18, v19);
    byte_42E7AF4 = 1;
  }
  if ( this <= 10 )
  {
    if ( this == 1 )
    {
      v20 = &StringLiteral_2829/*"BattleContinue"*/;
      return (System_String_o *)*v20;
    }
    if ( this == 2 )
    {
      v20 = &StringLiteral_2012/*"ApRecover"*/;
      return (System_String_o *)*v20;
    }
  }
  else
  {
    switch ( this )
    {
      case 11:
        v20 = &StringLiteral_6378/*"ExtendFriendMax"*/;
        return (System_String_o *)*v20;
      case 12:
        v20 = &StringLiteral_6380/*"ExtendServantMax"*/;
        return (System_String_o *)*v20;
      case 13:
        v20 = &StringLiteral_6379/*"ExtendServantEquipMax"*/;
        return (System_String_o *)*v20;
    }
  }
  v23 = j_il2cpp_value_box_0(StoneShopEffect_Kind_TypeInfo, &v26);
  if ( !v23 )
    sub_B5D69C(0LL, v24);
  v25 = v23;
  v21 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 360LL))(
                             v23,
                             *(_QWORD *)(*(_QWORD *)v23 + 368LL));
  v26 = *(_DWORD *)j_il2cpp_object_unbox_0(v25);
  return v21;
}