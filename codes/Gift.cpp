System_String_o *__fastcall Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_String_o *v14; // x20
  int32_t *v15; // x1
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FD518 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, unitString);
    sub_1B64870(&StringLiteral_861/*"+"*/, v7);
    sub_1B64870(&StringLiteral_25065/*"×"*/, v8);
    sub_1B64870(&StringLiteral_1/*""*/, v9);
    byte_49FD518 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v14 = System_String__Concat_61383576((System_String_o *)StringLiteral_861/*"+"*/, unitString, 0LL);
    v18 = num;
    v15 = &v18;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v14 = System_String__Concat_61383576((System_String_o *)StringLiteral_25065/*"×"*/, unitString, 0LL);
    v15 = &v17;
    v17 = num;
  }
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v15, v11, v12, v13);
  return System_String__Format(v14, v16, 0LL);
}


bool __fastcall Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCommandCode_37381088(int32_t type, const MethodInfo *method)
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


bool __fastcall Gift__IsEventPointBuff_37381112(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtGet_37380744(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsEventSvtJoin_37380768(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool __fastcall Gift__IsItem_37380644(int32_t type, const MethodInfo *method)
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


bool __fastcall Gift__IsServant_37380696(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 6 )
    LOBYTE(v2) = 0;
  else
    return (0x61u >> (type - 1)) & 1;
  return v2;
}