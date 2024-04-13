void __fastcall CombineAppendPassiveSkillMaster___ctor(
        CombineAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D6A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8D6A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    371,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string___ctor__);
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

  if ( (byte_42E8D68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&skillLv);
    byte_42E8D68 = 1;
  }
  PK = CombineAppendPassiveSkillEntity__CreatePK(svtId, num, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineAppendPassiveSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23FB260 *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_42E8D69 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42E8D69 = 1;
  }
  PK = CombineAppendPassiveSkillEntity__CreatePK(svtId, num, skillLv, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CombineAppendPassiveSkillMaster__CombineAppendPassiveSkillEntity__string__TryGetEntity__);
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