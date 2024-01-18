void __fastcall EventDataLostBattleResetEntity___ctor(EventDataLostBattleResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A32F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A32F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventDataLostBattleResetEntity__CreatePK(
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418A32E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_418A32E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           dataLostBattleId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventDataLostBattleResetEntity__CreatePrimaryKey(
        EventDataLostBattleResetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventDataLostBattleResetEntity__CreatePK(this->fields.dataLostBattleId, this->fields.idx, v2);
}