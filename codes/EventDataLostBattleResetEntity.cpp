void __fastcall EventDataLostBattleResetEntity___ctor(EventDataLostBattleResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E0F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6E0F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventDataLostBattleResetEntity__CreatePK(
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4AB6E0E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4AB6E0E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           dataLostBattleId,
           idx,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventDataLostBattleResetEntity__CreatePrimaryKey(
        EventDataLostBattleResetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventDataLostBattleResetEntity__CreatePK(this->fields.dataLostBattleId, this->fields.idx, v2);
}