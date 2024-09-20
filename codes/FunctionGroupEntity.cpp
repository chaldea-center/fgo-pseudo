void __fastcall FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3AD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B3AD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4A5B3AA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B3AA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_4A5B3AC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17940/*"checkEventQuest"*/);
    byte_4A5B3AC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17940/*"checkEventQuest"*/, 0, 0LL);
}


System_String_o *__fastcall FunctionGroupEntity__GetIconDetailText(
        FunctionGroupEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B3AB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20079/*"iconDetailText"*/);
    byte_4A5B3AB = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20079/*"iconDetailText"*/, 0LL, 0LL);
}