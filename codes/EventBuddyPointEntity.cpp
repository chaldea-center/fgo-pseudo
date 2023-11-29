void __fastcall EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC57F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FC57F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_40FC57D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_40FC57D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v7; // x2
  unsigned int v8; // w8

  if ( (byte_40FC57E & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&posIdx);
    byte_40FC57E = 1;
  }
  v5 = (_DWORD *)sub_B17014(int___TypeInfo, 6LL, method);
  if ( !v5 )
    sub_B170D4();
  v8 = v5[6];
  if ( !v8
    || (v5[8] = this->fields.pointPos1, v8 == 1)
    || (v5[9] = this->fields.pointPos2, v8 <= 2)
    || (v5[10] = this->fields.pointPos3, v8 == 3)
    || (v5[11] = this->fields.pointPos4, v8 <= 4)
    || (v5[12] = this->fields.pointPos5, v8 == 5)
    || (v5[13] = this->fields.pointPos6, v8 <= posIdx) )
  {
    sub_B17100(v5, v6, v7);
    sub_B170A0();
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