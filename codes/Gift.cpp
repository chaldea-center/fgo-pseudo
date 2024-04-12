System_String_o *__fastcall Gift__CountTextWithPrefix(
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

  if ( (byte_42B1B21 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_701/*"+"*/);
    sub_B52984(&StringLiteral_23899/*"×"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1B21 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v8 = System_String__Concat_44568316((System_String_o *)StringLiteral_701/*"+"*/, unitString, 0LL);
    v12 = num;
    v9 = &v12;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v8 = System_String__Concat_44568316((System_String_o *)StringLiteral_23899/*"×"*/, unitString, 0LL);
    v9 = &v11;
    v11 = num;
  }
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v9);
  return System_String__Format(v8, v10, 0LL);
}


bool __fastcall Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCommandCode_28236720(int32_t type, const MethodInfo *method)
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


bool __fastcall Gift__IsEventPointBuff_28236744(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtGet_28236364(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsEventSvtJoin_28236388(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsItem_28236268(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsServant(int32_t type, const MethodInfo *method)
{
  if ( type != 1 )
    LOBYTE(type) = (type | 1) == 7;
  return type;
}


bool __fastcall Gift__IsServant_28236324(int32_t type, const MethodInfo *method)
{
  return type == 1 || (type | 1) == 7;
}