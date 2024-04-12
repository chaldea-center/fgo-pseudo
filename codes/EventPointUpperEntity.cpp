void __fastcall EventPointUpperEntity___ctor(EventPointUpperEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B03D5 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B03D5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventPointUpperEntity__CreatePK(
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B03D4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B03D4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           version,
           id,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventPointUpperEntity__CreatePrimaryKey(
        EventPointUpperEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventPointUpperEntity__CreatePK(this->fields.version, this->fields.id, this->fields.priority, v2);
}