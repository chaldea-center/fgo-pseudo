void ExRoomMissionStatusResolver___ctor(ExRoomMissionStatusResolver_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExRoomMissionStatusResolver__IsDisplayTarget(
        ExRoomMissionStatusResolver_o *this,
        EventMissionEntity_o *missionEntity,
        int64_t now,
        const MethodInfo *method)
{
  return missionEntity && missionEntity->fields.startedAt <= now && missionEntity->fields.closedAt >= now;
}


int32_t ExRoomMissionStatusResolver__Resolve(
        ExRoomMissionStatusResolver_o *this,
        EventMissionEntity_o *missionEntity,
        UserEventMissionEntity_o *userEventMissionEntity,
        int32_t progressType,
        int64_t now,
        const MethodInfo *method)
{
  if ( !missionEntity )
    return 0;
  if ( missionEntity->fields.startedAt > now )
    return 1;
  if ( missionEntity->fields.closedAt < now )
    return 5;
  if ( userEventMissionEntity && UserEventMissionEntity__isAchieveMission(userEventMissionEntity, 0) )
    return 4;
  if ( (unsigned int)(progressType - 2) >= 3 )
    return 0;
  return progressType - 1;
}