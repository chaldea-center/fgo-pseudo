void __fastcall EventServantPointRankEntity___ctor(EventServantPointRankEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5EAF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5EAF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantPointRankEntity__CreatePK(
        int32_t eventId,
        int32_t svtPoint,
        const MethodInfo *method)
{
  if ( (byte_4AB5EAE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtPoint);
    byte_4AB5EAE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           svtPoint,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventServantPointRankEntity__CreatePrimaryKey(
        EventServantPointRankEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventServantPointRankEntity__CreatePK(this->fields.eventId, this->fields.svtPoint, v2);
}