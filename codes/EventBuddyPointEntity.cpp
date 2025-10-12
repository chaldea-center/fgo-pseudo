void EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37890 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37890 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4C3788E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C3788E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventBuddyPointEntity__CreatePrimaryKey(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBuddyPointEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.questPhase, v2);
}


int32_t EventBuddyPointEntity__GetPosPoint(EventBuddyPointEntity_o *this, int32_t posIdx, const MethodInfo *method)
{
  _DWORD *v5; // x0
  unsigned int v6; // w8

  if ( (byte_4C3788F & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3788F = 1;
  }
  v5 = (_DWORD *)sub_1C32CC8(int___TypeInfo, 6);
  if ( !v5 )
    sub_1C32E7C(0);
  v6 = v5[6];
  if ( !v6
    || (v5[8] = this->fields.pointPos1, v6 == 1)
    || (v5[9] = this->fields.pointPos2, v6 <= 2)
    || (v5[10] = this->fields.pointPos3, v6 == 3)
    || (v5[11] = this->fields.pointPos4, v6 <= 4)
    || (v5[12] = this->fields.pointPos5, v6 == 5)
    || (v5[13] = this->fields.pointPos6, v6 <= posIdx) )
  {
    sub_1C32E84(v5);
  }
  return v5[posIdx + 8];
}


bool EventBuddyPointEntity__IsHideBuddyPointResult(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


bool EventBuddyPointEntity__IsNotBuddyPointBuff(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}