void __fastcall EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *v6; // x1
  struct System_String_o **p_value; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B163FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B163FF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  v6 = StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  p_value = &this->fields.value;
  sub_1BCA784((PartyOrganizationUtility_o *)p_value, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  *((_DWORD *)p_value + 2) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_4B16400 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__long__string___, *(_QWORD *)&type, value);
    byte_4B16400 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object_(
           id,
           type,
           (Il2CppObject *)value,
           (const MethodInfo_2F11594 *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *__fastcall EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}