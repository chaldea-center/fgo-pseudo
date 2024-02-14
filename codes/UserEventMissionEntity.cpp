void __fastcall UserEventMissionEntity___ctor(UserEventMissionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215C38 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4215C38 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventMissionEntity__CreatePK(
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  if ( (byte_4215C36 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&missionId);
    byte_4215C36 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           missionId,
           (const MethodInfo_171354C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  int64_t TodayStartTime; // x0
  int64_t updatedAt; // x19

  if ( (byte_4215C37 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4215C37 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  TodayStartTime = NetworkManager__getTodayStartTime(0LL);
  updatedAt = this->fields.updatedAt;
  if ( TodayStartTime > updatedAt )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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