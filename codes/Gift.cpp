System_String_o *__fastcall Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v11; // x20
  int32_t *v12; // x1
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188EF4 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, unitString);
    sub_B2C35C(&StringLiteral_691/*"+"*/, v7);
    sub_B2C35C(&StringLiteral_23705/*"×"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4188EF4 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_691/*"+"*/, unitString, 0LL);
    v15 = num;
    v12 = &v15;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_23705/*"×"*/, unitString, 0LL);
    v12 = &v14;
    v14 = num;
  }
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v12);
  return System_String__Format(v11, v13, 0LL);
}


bool __fastcall Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCommandCode_27324480(int32_t type, const MethodInfo *method)
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


bool __fastcall Gift__IsEventPointBuff_27324504(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtGet_27324124(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsEventSvtJoin_27324148(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsItem_27324028(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsServant(int32_t type, const MethodInfo *method)
{
  if ( type != 1 )
    LOBYTE(type) = (type | 1) == 7;
  return type;
}


bool __fastcall Gift__IsServant_27324084(int32_t type, const MethodInfo *method)
{
  return type == 1 || (type | 1) == 7;
}