System_String_o *Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  System_String_o *v14; // x20
  int32_t *v15; // x1
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3689C & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_803/*"+"*/);
    sub_1C32C20(&StringLiteral_25262/*"×"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3689C = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v14 = System_String__Concat_63518544((System_String_o *)StringLiteral_803/*"+"*/, unitString, 0);
    v18 = num;
    v15 = &v18;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v14 = System_String__Concat_63518544((System_String_o *)StringLiteral_25262/*"×"*/, unitString, 0);
    v15 = &v17;
    v17 = num;
  }
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v15, v8, v9, v10, v11, v12, v13);
  return System_String__Format(v14, v16, 0);
}


bool Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool Gift__IsCommandCode_40328188(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool Gift__IsCostumeGet(int32_t type, const MethodInfo *method)
{
  return type == 10;
}


bool Gift__IsCostumeRelease(int32_t type, const MethodInfo *method)
{
  return type == 9;
}


bool Gift__IsEquip(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool Gift__IsEventPointBuff(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool Gift__IsEventPointBuff_40328212(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtGet_40327844(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsEventSvtJoin_40327868(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsItem_40327744(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsServant(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 6 )
    LOBYTE(v2) = 0;
  else
    return (0x61u >> (type - 1)) & 1;
  return v2;
}


bool Gift__IsServant_40327796(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 6 )
    LOBYTE(v2) = 0;
  else
    return (0x61u >> (type - 1)) & 1;
  return v2;
}