void UserQuestRouteMaster___ctor(UserQuestRouteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3191B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string___ctor__);
    byte_4D3191B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    293,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserQuestRouteEntity_o *UserQuestRouteMaster__GetEntity(
        UserQuestRouteMaster_o *this,
        int64_t userId,
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31919 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__GetEntity__);
    byte_4D31919 = 1;
  }
  PK = (Il2CppObject *)UserQuestRouteEntity__CreatePK(userId, questId, routeId, *(const MethodInfo **)&routeId);
  return (UserQuestRouteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_34681D4 *)Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserQuestRouteMaster__TryGetEntity(
        UserQuestRouteMaster_o *this,
        UserQuestRouteEntity_o **entity,
        int64_t userId,
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D3191A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__TryGetEntity__);
    byte_4D3191A = 1;
  }
  PK = (Il2CppObject *)UserQuestRouteEntity__CreatePK(userId, questId, routeId, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserQuestRouteMaster__UserQuestRouteEntity__string__TryGetEntity__);
}


bool UserQuestRouteMaster__haveRouteId(
        UserQuestRouteMaster_o *this,
        int64_t user_id,
        int32_t quest_id,
        int32_t route_id,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  UserQuestRouteEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  return UserQuestRouteMaster__TryGetEntity(this, &entity, user_id, quest_id, route_id, v5);
}