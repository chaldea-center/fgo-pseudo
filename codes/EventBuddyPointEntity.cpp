void __fastcall EventBuddyPointEntity___ctor(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB8DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB8DD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBuddyPointEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_42EB8DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, questId, questPhase, method);
    byte_42EB8DB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           questId,
           questPhase,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventBuddyPointEntity__CreatePrimaryKey(
        EventBuddyPointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventBuddyPointEntity__CreatePK(this->fields.eventId, this->fields.questId, this->fields.questPhase, v2);
}


int32_t __fastcall EventBuddyPointEntity__GetPosPoint(
        EventBuddyPointEntity_o *this,
        int32_t posIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _DWORD *v6; // x0
  __int64 v7; // x1
  unsigned int v8; // w8
  __int64 v10; // x0

  if ( (byte_42EB8DC & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, posIdx, (_DWORD)method, v3);
    byte_42EB8DC = 1;
  }
  v6 = (_DWORD *)sub_B5D5DC(int___TypeInfo, 6LL);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
  v8 = v6[6];
  if ( !v8
    || (v6[8] = this->fields.pointPos1, v8 == 1)
    || (v6[9] = this->fields.pointPos2, v8 <= 2)
    || (v6[10] = this->fields.pointPos3, v8 == 3)
    || (v6[11] = this->fields.pointPos4, v8 <= 4)
    || (v6[12] = this->fields.pointPos5, v8 == 5)
    || (v6[13] = this->fields.pointPos6, v8 <= posIdx) )
  {
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
  }
  return v6[posIdx + 8];
}


bool __fastcall EventBuddyPointEntity__IsHideBuddyPointResult(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


bool __fastcall EventBuddyPointEntity__IsNotBuddyPointBuff(EventBuddyPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}