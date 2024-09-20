void __fastcall EventServantPointRankEntity___ctor(EventServantPointRankEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B2C1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventServantPointRankEntity__CreatePK(
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  if ( (byte_4A5B2C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B2C0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtPoint,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantPointRankEntity__CreatePrimaryKey(
        EventServantPointRankEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventServantPointRankEntity__CreatePK(this->fields.eventId, this->fields.svtPoint, v2);
}