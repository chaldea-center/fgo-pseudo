void __fastcall FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A4F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A4F7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_418A4F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_418A4F5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall FunctionGroupEntity__CreatePrimaryKey(
        FunctionGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FunctionGroupEntity__CreatePK(this->fields.funcId, this->fields.eventId, v2);
}


System_String_o *__fastcall FunctionGroupEntity__GetIconDetailText(
        FunctionGroupEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A4F6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19272/*"iconDetailText"*/, method);
    byte_418A4F6 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19272/*"iconDetailText"*/, 0LL, 0LL);
}