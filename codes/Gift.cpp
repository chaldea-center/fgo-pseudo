System_String_o *Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v8; // x20
  int32_t *v9; // x1
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CED568 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_801/*"+"*/);
    sub_1C7BAE8(&StringLiteral_25522/*"×"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED568 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v8 = System_String__Concat_64176912((System_String_o *)StringLiteral_801/*"+"*/, unitString, 0);
    v12 = num;
    v9 = &v12;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v8 = System_String__Concat_64176912((System_String_o *)StringLiteral_25522/*"×"*/, unitString, 0);
    v9 = &v11;
    v11 = num;
  }
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v9);
  return System_String__Format(v8, v10, 0);
}


bool Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool Gift__IsCommandCode_40988868(int32_t type, const MethodInfo *method)
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


bool Gift__IsEventPointBuff_40988892(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtGet_40988524(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsEventSvtJoin_40988548(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsItem_40988424(int32_t type, const MethodInfo *method)
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


bool Gift__IsServant_40988476(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 6 )
    LOBYTE(v2) = 0;
  else
    return (0x61u >> (type - 1)) & 1;
  return v2;
}