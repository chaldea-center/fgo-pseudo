void __fastcall EventScriptEntity___ctor(EventScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1631E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1631E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventScriptEntity__CreatePK(int32_t eventId, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4B1631D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&flagId, method);
    byte_4B1631D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           flagId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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