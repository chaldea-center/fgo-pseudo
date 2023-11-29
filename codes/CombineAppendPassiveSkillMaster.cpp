void __fastcall CombineAppendPassiveSkillMaster___ctor(
        CombineAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9AA8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string___ctor__,
      method);
    byte_40F9AA8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    370,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineAppendPassiveSkillEntity_o *__fastcall CombineAppendPassiveSkillMaster__GetEntity(
        CombineAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F9AA6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40F9AA6 = 1;
  }
  PK = CombineAppendPassiveSkillEntity__CreatePK(svtId, num, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineAppendPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__GetEntity__);
}


CombineAppendPassiveSkillEntity_o *__fastcall CombineAppendPassiveSkillMaster__GetEntityWithTryNum(
        CombineAppendPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v9; // x4
  CombineAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( CombineAppendPassiveSkillMaster__TryGetEntity(this, &entity, svtId, num, skillLv, v5) )
    return entity;
  else
    return CombineAppendPassiveSkillMaster__GetEntity(this, svtId, 0, skillLv, v9);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineAppendPassiveSkillMaster__TryGetEntity(
        CombineAppendPassiveSkillMaster_o *this,
        CombineAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F9AA7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_40F9AA7 = 1;
  }
  PK = CombineAppendPassiveSkillEntity__CreatePK(svtId, num, skillLv, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__TryGetEntity__);
}


bool __fastcall CombineAppendPassiveSkillMaster__TryGetEntityWithTryNum(
        CombineAppendPassiveSkillMaster_o *this,
        CombineAppendPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x5

  return CombineAppendPassiveSkillMaster__TryGetEntity(this, entity, svtId, num, skillLv, method)
      || CombineAppendPassiveSkillMaster__TryGetEntity(this, entity, svtId, 0, skillLv, v10);
}