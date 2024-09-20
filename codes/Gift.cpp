System_String_o *__fastcall Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_String_o *v11; // x20
  int32_t *v12; // x1
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A154 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_860/*"+"*/);
    sub_1B885B0(&StringLiteral_25163/*"×"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A154 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_860/*"+"*/, unitString, 0LL);
    v15 = num;
    v12 = &v15;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_25163/*"×"*/, unitString, 0LL);
    v12 = &v14;
    v14 = num;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v12, v8, v9, v10);
  return System_String__Format(v11, v13, 0LL);
}


bool __fastcall Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCommandCode_37688232(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCostumeGet(int32_t type, const MethodInfo *method)
{
  return type == 10;
}


bool __fastcall Gift__IsCostumeRelease(int32_t type, const MethodInfo *method)
{
  return type == 9;
}


bool __fastcall Gift__IsEquip(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool __fastcall Gift__IsEventPointBuff(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventPointBuff_37688256(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtGet_37687888(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsEventSvtJoin_37687912(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool __fastcall Gift__IsItem_37687788(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool __fastcall Gift__IsServant(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 6 )
    LOBYTE(v2) = 0;
  else
    return (0x61u >> (type - 1)) & 1;
  return v2;
}


bool __fastcall Gift__IsServant_37687840(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 6 )
    LOBYTE(v2) = 0;
  else
    return (0x61u >> (type - 1)) & 1;
  return v2;
}