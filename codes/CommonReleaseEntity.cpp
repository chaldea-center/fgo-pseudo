void __fastcall CommonReleaseEntity___ctor(CommonReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B669DC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B669DC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.condGroup = 0LL;
  *(_QWORD *)&this->fields.condId = 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommonReleaseEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4B669DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4B669DD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CommonReleaseEntity__CreatePrimaryKey(
        CommonReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CommonReleaseEntity__CreatePK(this->fields.id, this->fields.priority, v2);
}


bool __fastcall CommonReleaseEntity__IsMatch(
        CommonReleaseEntity_o *this,
        int32_t inCondType,
        int32_t inCondId,
        int32_t inCondNum,
        const MethodInfo *method)
{
  return this->fields.condType == inCondType && this->fields.condId == inCondId && this->fields.condNum == inCondNum;
}


bool __fastcall CommonReleaseEntity__IsMatchQuestClear(
        CommonReleaseEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  return this->fields.condType == 1 && this->fields.condId == questId;
}


bool __fastcall CommonReleaseEntity__IsMatchQuestClearPhase(
        CommonReleaseEntity_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  return this->fields.condType == 46 && this->fields.condId == questId && this->fields.condNum == questPhase;
}


bool __fastcall CommonReleaseEntity__IsMatch_39969120(
        CommonReleaseEntity_o *this,
        CommonReleaseEntity_o *other,
        const MethodInfo *method)
{
  return other
      && this->fields.condGroup == other->fields.condGroup
      && this->fields.condType == other->fields.condType
      && this->fields.condId == other->fields.condId
      && this->fields.condNum == other->fields.condNum;
}