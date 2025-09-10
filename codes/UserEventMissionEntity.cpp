void UserEventMissionEntity___ctor(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C280CF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280CF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventMissionEntity__CreatePK(int64_t userId, int32_t missionId, const MethodInfo *method)
{
  if ( (byte_4C280CD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C280CD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserEventMissionEntity__CreatePrimaryKey(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventMissionEntity__CreatePK(this->fields.userId, this->fields.missionId, v2);
}


bool UserEventMissionEntity__IsTodayMissionData(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  int64_t TodayStartTime; // x0
  int64_t updatedAt; // x19

  if ( (byte_4C280CE & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C280CE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  TodayStartTime = NetworkManager__getTodayStartTime(0);
  updatedAt = this->fields.updatedAt;
  if ( TodayStartTime > updatedAt )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return updatedAt < NetworkManager__getNextDayStartTime(0);
}


bool UserEventMissionEntity__isAchieveMission(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionProgressType == 5;
}


bool UserEventMissionEntity__isClearMission(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionProgressType == 4;
}