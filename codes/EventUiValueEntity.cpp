void __fastcall EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array **v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E84F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E84F4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  v8 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.value, v8, v9, v10, v11, v12, v13, v14);
  this->fields.priority = 0;
}


System_String_o *__fastcall EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_42E84F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__long__string___, type, (_DWORD)value, method);
    byte_42E84F5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string_(
           id,
           type,
           value,
           (const MethodInfo_1AE3788 *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *__fastcall EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}