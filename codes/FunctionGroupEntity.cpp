void FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56FE6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C56FE6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C56FE3 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C56FE3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_30F7BF8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *FunctionGroupEntity__CreatePrimaryKey(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FunctionGroupEntity__CreatePK(this->fields.funcId, this->fields.eventId, v2);
}


int32_t FunctionGroupEntity__GetCheckEventQuest(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56FE5 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17962/*"checkEventQuest"*/);
    byte_4C56FE5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17962/*"checkEventQuest"*/, 0, 0);
}


System_String_o *FunctionGroupEntity__GetIconDetailText(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56FE4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_20140/*"iconDetailText"*/);
    byte_4C56FE4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20140/*"iconDetailText"*/, 0, 0);
}