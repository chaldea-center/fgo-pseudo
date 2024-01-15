void __fastcall EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array **v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F9C33 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F9C33 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.value, v4, v5, v6, v7, v8, v9, v10);
  this->fields.priority = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_40F9C34 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__long__string___, *(_QWORD *)&type);
    byte_40F9C34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string_(
           id,
           type,
           value,
           (const MethodInfo_18C27C0 *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *__fastcall EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}