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

  if ( (byte_5937525 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_861/*"+"*/);
    sub_21FFC50(&StringLiteral_26616/*"×"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937525 = 1;
  }
  if ( (unsigned int)(type - 5) > 0xFFFFFFFD )
  {
    v8 = System_String__Concat_75438412((System_String_o *)StringLiteral_861/*"+"*/, unitString, 0);
    v9 = &v12;
    v12 = num;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v8 = System_String__Concat_75438412((System_String_o *)StringLiteral_26616/*"×"*/, unitString, 0);
    v9 = &v11;
    v11 = num;
  }
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, v9);
  return System_String__Format(v8, v10, 0);
}


bool Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool Gift__IsCommandCode_47357784(int32_t type, const MethodInfo *method)
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


bool Gift__IsEventPointBuff_47357808(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtGet_47357452(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsEventSvtJoin_47357476(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsItem_47357376(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsServant(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 8) & (0xC2u >> type);
}


bool Gift__IsServant_47357416(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 8) & (0xC2u >> type);
}