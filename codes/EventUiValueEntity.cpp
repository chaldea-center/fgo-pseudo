void __fastcall EventUiValueEntity___ctor(EventUiValueEntity_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4350FF4 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350FF4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.value = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.value, v3, v4, v5, v6, v7, v8, v9);
  this->fields.priority = 0;
}


System_String_o *__fastcall EventUiValueEntity__CreatePK(
        int32_t id,
        int32_t type,
        System_String_o *value,
        const MethodInfo *method)
{
  if ( (byte_4350FF5 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_long__long__string___);
    byte_4350FF5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string_(
           id,
           type,
           value,
           (const MethodInfo_1CA2ADC *)Method_DataEntityBase_CreateMultiplePK_long__long__string___);
}


System_String_o *__fastcall EventUiValueEntity__CreatePrimaryKey(EventUiValueEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventUiValueEntity__CreatePK(this->fields.id, this->fields.type, this->fields.value, v2);
}