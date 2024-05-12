void __fastcall SvtAppendPassiveSkillUnlockMaster___ctor(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4390F61 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
    byte_4390F61 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    370,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SvtAppendPassiveSkillUnlockEntity_o *__fastcall SvtAppendPassiveSkillUnlockMaster__GetEntity(
        SvtAppendPassiveSkillUnlockMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4390F5F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
    byte_4390F5F = 1;
  }
  PK = SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&num);
  return (SvtAppendPassiveSkillUnlockEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                  PK,
                                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__GetEntity__);
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

  if ( (byte_4390F60 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
    byte_4390F60 = 1;
  }
  PK = SvtAppendPassiveSkillUnlockEntity__CreatePK(svtId, num, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_SvtAppendPassiveSkillUnlockMaster__SvtAppendPassiveSkillUnlockEntity__string__TryGetEntity__);
}