void __fastcall EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w1
  struct System_String_o **p_value; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A70077 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    sub_1B90010(&StringLiteral_1/*""*/, v3);
    byte_4A70077 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  v4 = (int)StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  p_value = &this->fields.value;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_value, v4, v6, v7);
  *((_DWORD *)p_value + 2) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_4A70078 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_long__long__string___, *(_QWORD *)&type);
    byte_4A70078 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object_(
           id,
           type,
           (Il2CppObject *)value,
           (const MethodInfo_2E8CB20 *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *__fastcall EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}