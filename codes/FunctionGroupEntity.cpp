void FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7677 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7677 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4CC7674 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC7674 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *FunctionGroupEntity__CreatePrimaryKey(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FunctionGroupEntity__CreatePK(this->fields.funcId, this->fields.eventId, v2);
}


int32_t FunctionGroupEntity__GetCheckEventQuest(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7676 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17972/*"checkEventQuest"*/);
    byte_4CC7676 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17972/*"checkEventQuest"*/, 0, 0);
}


System_String_o *FunctionGroupEntity__GetIconDetailText(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7675 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20198/*"iconDetailText"*/);
    byte_4CC7675 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20198/*"iconDetailText"*/, 0, 0);
}