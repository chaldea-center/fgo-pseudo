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

  if ( (byte_596F684 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_861/*"+"*/);
    sub_2213A60(&StringLiteral_26668/*"×"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F684 = 1;
  }
  if ( (unsigned int)(type - 5) > 0xFFFFFFFD )
  {
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_861/*"+"*/, unitString, 0);
    v9 = &v12;
    v12 = num;
  }
  else
  {
    if ( type == 8 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v8 = System_String__Concat_75651716((System_String_o *)StringLiteral_26668/*"×"*/, unitString, 0);
    v9 = &v11;
    v11 = num;
  }
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v9);
  return System_String__Format(v8, v10, 0);
}


bool Gift__IsCommandCode(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool Gift__IsCommandCode_47388336(int32_t type, const MethodInfo *method)
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


bool Gift__IsEventPointBuff_47388360(int32_t type, const MethodInfo *method)
{
  return type == 12;
}


bool Gift__IsEventSvtGet(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtGet_47388004(int32_t type, const MethodInfo *method)
{
  return type == 7;
}


bool Gift__IsEventSvtJoin(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsEventSvtJoin_47388028(int32_t type, const MethodInfo *method)
{
  return type == 6;
}


bool Gift__IsItem(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsItem_47387928(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 2) < 4;
}


bool Gift__IsServant(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 8) & (0xC2u >> type);
}


bool Gift__IsServant_47387968(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 8) & (0xC2u >> type);
}