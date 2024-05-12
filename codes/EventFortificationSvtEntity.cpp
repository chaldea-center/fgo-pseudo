void __fastcall EventFortificationSvtEntity___ctor(EventFortificationSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CBD2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CBD2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventFortificationSvtEntity__CreatePK(
        int32_t eventId,
        int32_t fortificationIdx,
        int32_t position,
        const MethodInfo *method)
{
  if ( (byte_438CBD1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438CBD1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           fortificationIdx,
           position,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventFortificationSvtEntity__CreatePrimaryKey(
        EventFortificationSvtEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventFortificationSvtEntity__CreatePK(
           this->fields.eventId,
           this->fields.fortificationIdx,
           this->fields.position,
           v2);
}