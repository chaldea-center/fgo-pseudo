void __fastcall EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAD47 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BAD47 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_49BAD45 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_49BAD45 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_2F0013C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventBuddyPointEntity__CreatePrimaryKey(
        EventBuddyPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBuddyPointEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.questPhase, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventBuddyPointEntity__GetPosPoint(
        EventBuddyPointEntity_o *this,
        int32_t posIdx,
        const MethodInfo *method)
{
  _DWORD *v5; // x0
  __int64 v6; // x1
  unsigned int v7; // w8

  if ( (byte_49BAD46 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, *(_QWORD *)&posIdx);
    byte_49BAD46 = 1;
  }
  v5 = (_DWORD *)sub_1B4D038(int___TypeInfo, 6LL);
  if ( !v5 )
    sub_1B4D1EC(0LL, v6);
  v7 = v5[6];
  if ( !v7
    || (v5[8] = this->fields.pointPos1, v7 == 1)
    || (v5[9] = this->fields.pointPos2, v7 <= 2)
    || (v5[10] = this->fields.pointPos3, v7 == 3)
    || (v5[11] = this->fields.pointPos4, v7 <= 4)
    || (v5[12] = this->fields.pointPos5, v7 == 5)
    || (v5[13] = this->fields.pointPos6, v7 <= posIdx) )
  {
    sub_1B4D1F4(v5, v6);
  }
  return v5[posIdx + 8];
}


bool __fastcall EventBuddyPointEntity__IsHideBuddyPointResult(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


bool __fastcall EventBuddyPointEntity__IsNotBuddyPointBuff(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}