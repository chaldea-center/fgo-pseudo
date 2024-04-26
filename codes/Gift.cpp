System_String_o *__fastcall Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v8; // x2
  System_String_o *v9; // x20
  int32_t *v10; // x1
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4353144 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_704/*"+"*/);
    sub_B70694(&StringLiteral_24089/*"×"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353144 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v9 = System_String__Concat_44758168((System_String_o *)StringLiteral_704/*"+"*/, unitString, 0LL);
    v13 = num;
    v10 = &v13;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v9 = System_String__Concat_44758168((System_String_o *)StringLiteral_24089/*"×"*/, unitString, 0LL);
    v10 = &v12;
    v12 = num;
  }
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v10, v8);
  return System_String__Format(v9, v11, 0LL);
}


bool __fastcall Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCommandCode_27752192(int32_t type, const MethodInfo *method)
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


bool __fastcall Gift__IsEventPointBuff_27752216(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtGet_27751836(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsEventSvtJoin_27751860(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsItem_27751740(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsServant(int32_t type, const MethodInfo *method)
{
  if ( type != 1 )
    LOBYTE(type) = (type | 1) == 7;
  return type;
}


bool __fastcall Gift__IsServant_27751796(int32_t type, const MethodInfo *method)
{
  return type == 1 || (type | 1) == 7;
}