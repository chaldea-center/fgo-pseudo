void __fastcall UserQuestInfoMaster___ctor(UserQuestInfoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185DFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string___ctor__, method);
    byte_4185DFB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    57,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestInfoEntity_o *__fastcall UserQuestInfoMaster__GetEntity(
        UserQuestInfoMaster_o *this,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4185DF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__GetEntity__, userId);
    byte_4185DF9 = 1;
  }
  PK = UserQuestInfoEntity__CreatePK(userId, questId, *(const MethodInfo **)&questId);
  return (UserQuestInfoEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__GetEntity__);
}


bool __fastcall UserQuestInfoMaster__TryGetEntity(
        UserQuestInfoMaster_o *this,
        UserQuestInfoEntity_o **entity,
        int64_t userId,
        int32_t questId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4185DFA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__TryGetEntity__, entity);
    byte_4185DFA = 1;
  }
  PK = UserQuestInfoEntity__CreatePK(userId, questId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserQuestInfoMaster__UserQuestInfoEntity__string__TryGetEntity__);
}