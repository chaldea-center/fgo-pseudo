void FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A2E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938A2E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_5938A2B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938A2B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *FunctionGroupEntity__CreatePrimaryKey(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FunctionGroupEntity__CreatePK(this->fields.funcId, this->fields.eventId, v2);
}


int32_t FunctionGroupEntity__GetCheckEventQuest(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A2D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18698/*"checkEventQuest"*/);
    byte_5938A2D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18698/*"checkEventQuest"*/, 0, 0);
}


System_String_o *FunctionGroupEntity__GetIconDetailText(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A2C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21049/*"iconDetailText"*/);
    byte_5938A2C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21049/*"iconDetailText"*/, 0, 0);
}