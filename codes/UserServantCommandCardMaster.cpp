void __fastcall UserServantCommandCardMaster___ctor(UserServantCommandCardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43893E9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__);
    byte_43893E9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    280,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string___ctor__);
}


UserServantCommandCardEntity_o *__fastcall UserServantCommandCardMaster__GetEntity(
        UserServantCommandCardMaster_o *this,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43893E7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__);
    byte_43893E7 = 1;
  }
  PK = UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)svtId);
  return (UserServantCommandCardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__GetEntity__);
}


bool __fastcall UserServantCommandCardMaster__TryGetEntity(
        UserServantCommandCardMaster_o *this,
        UserServantCommandCardEntity_o **entity,
        int64_t userId,
        int64_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43893E8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__);
    byte_43893E8 = 1;
  }
  PK = UserServantCommandCardEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserServantCommandCardMaster__UserServantCommandCardEntity__string__TryGetEntity__);
}