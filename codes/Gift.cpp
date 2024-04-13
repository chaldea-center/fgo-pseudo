System_String_o *__fastcall Gift__CountTextWithPrefix(
        int32_t type,
        System_String_o *unitString,
        int32_t num,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_String_o *v17; // x20
  int32_t *v18; // x1
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA446 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)unitString, num, method);
    sub_B5D5C4(&StringLiteral_699/*"+"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_24017/*"×"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42EA446 = 1;
  }
  if ( (unsigned int)(type - 3) < 2 )
  {
    v17 = System_String__Concat_44577788((System_String_o *)StringLiteral_699/*"+"*/, unitString, 0LL);
    v21 = num;
    v18 = &v21;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v17 = System_String__Concat_44577788((System_String_o *)StringLiteral_24017/*"×"*/, unitString, 0LL);
    v18 = &v20;
    v20 = num;
  }
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v18);
  return System_String__Format(v17, v19, 0LL);
}


bool __fastcall Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall Gift__IsCommandCode_28425356(int32_t type, const MethodInfo *method)
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


bool __fastcall Gift__IsEventPointBuff_28425380(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool __fastcall Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtGet_28425000(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool __fastcall Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsEventSvtJoin_28425024(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool __fastcall Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsItem_28424904(int32_t type, const MethodInfo *method)
{
  return (type & 0xFFFFFFFE) == 2 || (type | 1) == 5;
}


bool __fastcall Gift__IsServant(int32_t type, const MethodInfo *method)
{
  if ( type != 1 )
    LOBYTE(type) = (type | 1) == 7;
  return type;
}


bool __fastcall Gift__IsServant_28424960(int32_t type, const MethodInfo *method)
{
  return type == 1 || (type | 1) == 7;
}