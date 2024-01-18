void __fastcall UserServantAppendPassiveSkillMaster___ctor(
        UserServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185E25 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__,
      method);
    byte_4185E25 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    367,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *__fastcall UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4185E23 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__,
      userId);
    byte_4185E23 = 1;
  }
  PK = UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                    PK,
                                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


bool __fastcall UserServantAppendPassiveSkillMaster__TryGetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        UserServantAppendPassiveSkillEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4185E24 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4185E24 = 1;
  }
  PK = UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}