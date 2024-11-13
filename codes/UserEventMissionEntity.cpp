void __fastcall UserEventMissionEntity___ctor(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16E86 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventMissionEntity__CreatePK(
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_4B16E84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&missionId, method);
    byte_4B16E84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventMissionEntity__CreatePrimaryKey(
        UserEventMissionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventMissionEntity__CreatePK(this->fields.userId, this->fields.missionId, v2);
}


bool __fastcall UserEventMissionEntity__IsTodayMissionData(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t TodayStartTime; // x0
  __int64 v5; // x1
  int64_t updatedAt; // x19

  if ( (byte_4B16E85 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16E85 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  updatedAt = this->fields.updatedAt;
  if ( TodayStartTime > updatedAt )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  return updatedAt < NetworkManager__getNextDayStartTime(0LL);
}


bool __fastcall UserEventMissionEntity__isAchieveMission(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionProgressType == 5;
}


bool __fastcall UserEventMissionEntity__isClearMission(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  return this->fields.missionProgressType == 4;
}