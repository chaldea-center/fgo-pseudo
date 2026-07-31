void EventDataLostBattleResetEntity___ctor(EventDataLostBattleResetEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A78 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A78 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventDataLostBattleResetEntity__CreatePK(
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_5939A77 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A77 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           dataLostBattleId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventDataLostBattleResetEntity__CreatePrimaryKey(
        EventDataLostBattleResetEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventDataLostBattleResetEntity__CreatePK(this->fields.dataLostBattleId, this->fields.idx, v2);
}