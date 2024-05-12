void __fastcall FunctionGroupEntity___ctor(FunctionGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D91C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D91C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall FunctionGroupEntity__CreatePK(int32_t funcId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_438D919 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D919 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           funcId,
           eventId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  if ( (byte_438D91B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17747/*"checkEventQuest"*/);
    byte_438D91B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17747/*"checkEventQuest"*/, 0, 0LL);
}


System_String_o *__fastcall FunctionGroupEntity__GetIconDetailText(
        FunctionGroupEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D91A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19663/*"iconDetailText"*/);
    byte_438D91A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19663/*"iconDetailText"*/, 0LL, 0LL);
}