void __fastcall SvtAppendPassiveSkillUnlockMaster___ctor(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE4AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EE4AA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    370,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtAppendPassiveSkillUnlockEntity_o *__fastcall SvtAppendPassiveSkillUnlockMaster__GetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EE4A8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__,
      svtId,
      num,
      method);
    byte_42EE4A8 = 1;
  }
  PK = SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&num);
  return (SvtAppendPassiveSkillUnlockEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                  PK,
                                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SvtAppendPassiveSkillUnlockMaster__TryGetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        SvtAppendPassiveSkillUnlockEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EE4A9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42EE4A9 = 1;
  }
  PK = SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
}