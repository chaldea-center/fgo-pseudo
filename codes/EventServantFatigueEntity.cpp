void __fastcall EventServantFatigueEntity___ctor(EventServantFatigueEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5E9F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5E9F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantFatigueEntity__CreatePK(
        int32_t eventId,
        int32_t svtId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4AB5E9E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&svtId);
    byte_4AB5E9E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           svtId,
           priority,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventServantFatigueEntity__CreatePrimaryKey(
        EventServantFatigueEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventServantFatigueEntity__CreatePK(this->fields.eventId, this->fields.svtId, this->fields.priority, v2);
}