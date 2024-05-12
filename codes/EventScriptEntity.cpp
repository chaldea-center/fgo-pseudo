void __fastcall EventScriptEntity___ctor(EventScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438EC68 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438EC68 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventScriptEntity__CreatePK(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_438EC67 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438EC67 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           flagId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventScriptEntity__CreatePrimaryKey(EventScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventScriptEntity__CreatePK(this->fields.eventId, this->fields.flagId, v2);
}


int32_t __fastcall EventScriptEntity__getType(EventScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.playType;
}