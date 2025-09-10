void EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2719C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2719C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4C2719A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C2719A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventBuddyPointEntity__CreatePrimaryKey(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBuddyPointEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.questPhase, v2);
}


int32_t EventBuddyPointEntity__GetPosPoint(EventBuddyPointEntity_o *this, int32_t posIdx, const MethodInfo *method)
{
  _DWORD *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned int v8; // w8

  if ( (byte_4C2719B & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    byte_4C2719B = 1;
  }
  v5 = (_DWORD *)sub_1C2D538(int___TypeInfo, 6);
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  v8 = v5[6];
  if ( !v8
    || (v5[8] = this->fields.pointPos1, v8 == 1)
    || (v5[9] = this->fields.pointPos2, v8 <= 2)
    || (v5[10] = this->fields.pointPos3, v8 == 3)
    || (v5[11] = this->fields.pointPos4, v8 <= 4)
    || (v5[12] = this->fields.pointPos5, v8 == 5)
    || (v5[13] = this->fields.pointPos6, v8 <= posIdx) )
  {
    sub_1C2D6F4(v5, v6, v7);
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