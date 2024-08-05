void __fastcall EventDataLostBattleResetEntity___ctor(EventDataLostBattleResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF583 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF583 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventDataLostBattleResetEntity__CreatePK(
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_49FF582 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FF582 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           dataLostBattleId,
           idx,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventDataLostBattleResetEntity__CreatePrimaryKey(
        EventDataLostBattleResetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventDataLostBattleResetEntity__CreatePK(this->fields.dataLostBattleId, this->fields.idx, v2);
}