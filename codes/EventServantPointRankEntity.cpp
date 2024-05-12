void __fastcall EventServantPointRankEntity___ctor(EventServantPointRankEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438ECE5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438ECE5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventServantPointRankEntity__CreatePK(
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  if ( (byte_438ECE4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438ECE4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtPoint,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantPointRankEntity__CreatePrimaryKey(
        EventServantPointRankEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventServantPointRankEntity__CreatePK(this->fields.eventId, this->fields.svtPoint, v2);
}