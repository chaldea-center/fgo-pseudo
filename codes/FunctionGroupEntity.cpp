void __fastcall FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FED74 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FED74 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_49FED71 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_49FED71 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall FunctionGroupEntity__CreatePrimaryKey(
        FunctionGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FunctionGroupEntity__CreatePK(this->fields.funcId, this->fields.eventId, v2);
}


int32_t __fastcall FunctionGroupEntity__GetCheckEventQuest(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FED73 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17873/*"checkEventQuest"*/, method);
    byte_49FED73 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17873/*"checkEventQuest"*/, 0, 0LL);
}


System_String_o *__fastcall FunctionGroupEntity__GetIconDetailText(
        FunctionGroupEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FED72 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_20003/*"iconDetailText"*/, method);
    byte_49FED72 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20003/*"iconDetailText"*/, 0LL, 0LL);
}