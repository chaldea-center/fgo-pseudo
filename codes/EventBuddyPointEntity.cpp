void __fastcall EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216E96 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216E96 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_4216E94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_4216E94 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  unsigned int v6; // w8
  __int64 v8; // x0

  if ( (byte_4216E95 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&posIdx);
    byte_4216E95 = 1;
  }
  v5 = (_DWORD *)sub_B0D8BC(int___TypeInfo, 6LL);
  if ( !v5 )
    sub_B0D97C(0LL);
  v6 = v5[6];
  if ( !v6
    || (v5[8] = this->fields.pointPos1, v6 == 1)
    || (v5[9] = this->fields.pointPos2, v6 <= 2)
    || (v5[10] = this->fields.pointPos3, v6 == 3)
    || (v5[11] = this->fields.pointPos4, v6 <= 4)
    || (v5[12] = this->fields.pointPos5, v6 == 5)
    || (v5[13] = this->fields.pointPos6, v6 <= posIdx) )
  {
    v8 = sub_B0D9A8(v5);
    sub_B0D948(v8, 0LL);
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