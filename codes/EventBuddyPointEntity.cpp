void __fastcall EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A250 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A250 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_418A24E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questId);
    byte_418A24E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v9; // x0

  if ( (byte_418A24F & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&posIdx);
    byte_418A24F = 1;
  }
  v5 = (_DWORD *)sub_B2C374(int___TypeInfo, 6LL);
  if ( !v5 )
    sub_B2C434(0LL, v6);
  v7 = v5[6];
  if ( !v7
    || (v5[8] = this->fields.pointPos1, v7 == 1)
    || (v5[9] = this->fields.pointPos2, v7 <= 2)
    || (v5[10] = this->fields.pointPos3, v7 == 3)
    || (v5[11] = this->fields.pointPos4, v7 <= 4)
    || (v5[12] = this->fields.pointPos5, v7 == 5)
    || (v5[13] = this->fields.pointPos6, v7 <= posIdx) )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
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