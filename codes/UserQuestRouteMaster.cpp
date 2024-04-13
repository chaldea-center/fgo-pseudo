void __fastcall UserQuestRouteMaster___ctor(UserQuestRouteMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6ACA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6ACA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    286,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestRouteEntity_o *__fastcall UserQuestRouteMaster__GetEntity(
        UserQuestRouteMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E6AC8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__GetEntity__,
      userId,
      questId,
      *(_QWORD *)&routeId);
    byte_42E6AC8 = 1;
  }
  PK = UserQuestRouteEntity__CreatePK(userId, questId, routeId, *(const MethodInfo **)&routeId);
  return (UserQuestRouteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserQuestRouteMaster__TryGetEntity(
        UserQuestRouteMaster_o *this,
        UserQuestRouteEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E6AC9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&questId);
    byte_42E6AC9 = 1;
  }
  PK = UserQuestRouteEntity__CreatePK(userId, questId, routeId, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__TryGetEntity__);
}


bool __fastcall UserQuestRouteMaster__haveRouteId(
        UserQuestRouteMaster_o *this,
        int64_t user_id,
        int32_t quest_id,
        int32_t route_id,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  UserQuestRouteEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  return UserQuestRouteMaster__TryGetEntity(this, &entity, user_id, quest_id, route_id, v5);
}