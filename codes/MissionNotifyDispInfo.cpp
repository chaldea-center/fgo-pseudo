void __fastcall MissionNotifyDispInfo___ctor(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionNotifyDispInfo__ContainsMissionCondType(
        MissionNotifyDispInfo_o *this,
        System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *missionCondTypeHashSet,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Int32_array *targetIds; // x21
  __int64 v8; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x20
  unsigned __int64 v10; // x22
  __int64 v12; // x0
  WarEntity_o *v13; // [xsp+8h] [xbp-48h] BYREF
  EventMissionConditionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AE7FD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE7FD = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)EventMissionConditionMaster__TryGetEntity(
                                (EventMissionConditionMaster_o *)Instance,
                                &entity,
                                this->fields.eventMissionId,
                                this->fields.missionProgressType,
                                this->fields.id,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_23;
  if ( entity->fields.condType != 22 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
        !entity)
    || (targetIds = entity->fields.targetIds) == 0LL )
  {
LABEL_23:
    sub_B52A5C(Instance, v6);
  }
  v8 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
      v12 = sub_B52A88(Instance);
      sub_B52A28(v12, 0LL);
    }
    if ( !v9 )
      goto LABEL_23;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v9,
                                  &v13,
                                  targetIds->m_Items[v10 + 1],
                                  (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v13 || !missionCondTypeHashSet )
        goto LABEL_23;
      Instance = (DataManager_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                    missionCondTypeHashSet,
                                    (int32_t)v13->fields.age,
                                    (const MethodInfo_24DC044 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v8) = targetIds->max_length;
    if ( (__int64)++v10 >= (int)v8 )
      return 0;
  }
}


bool __fastcall MissionNotifyDispInfo__HasFlag(MissionNotifyDispInfo_o *this, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventMissionConditionEntity_o *Entity; // x0

  if ( (byte_42AE7FC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE7FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  Entity = EventMissionConditionMaster__GetEntity(
             (EventMissionConditionMaster_o *)Instance,
             this->fields.eventMissionId,
             this->fields.missionProgressType,
             this->fields.id,
             0LL);
  if ( Entity )
    LOBYTE(Entity) = EventMissionConditionEntity__HasFlag(Entity, flag, 0LL);
  return (char)Entity;
}


bool __fastcall MissionNotifyDispInfo__IsBattle(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  System_String_o *v7; // x1

  if ( (byte_42AE7FE & 1) == 0 )
  {
    sub_B52984(&SceneList_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AE7FE = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  NowSceneName = AvalonSceneManager__getNowSceneName(Instance, 0LL);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(10, 0LL);
  if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
    return 1;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  v7 = SceneList__getSceneName(38, 0LL);
  return System_String__op_Equality(NowSceneName, v7, 0LL);
}


bool __fastcall MissionNotifyDispInfo__IsDispPossible(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t missionProgressType; // w8
  int32_t v5; // w1
  int32_t progressFrom; // w20
  int32_t progressTo; // w21
  _BOOL8 HasFlag; // x0
  const MethodInfo *v9; // x1

  missionProgressType = this->fields.missionProgressType;
  if ( missionProgressType != 4 )
  {
    if ( missionProgressType == 3 )
    {
      v5 = 4;
    }
    else
    {
      if ( missionProgressType != 2 )
        return 1;
      v5 = 2;
    }
    goto LABEL_11;
  }
  progressFrom = this->fields.progressFrom;
  progressTo = this->fields.progressTo;
  if ( progressFrom >= progressTo
    || this->fields.condition > progressTo
    || !(HasFlag = MissionNotifyDispInfo__HasFlag(this, 16, v2)) )
  {
    if ( progressFrom >= progressTo )
      return 1;
    v5 = 8;
LABEL_11:
    HasFlag = MissionNotifyDispInfo__HasFlag(this, v5, v2);
    if ( !HasFlag )
      return 1;
  }
  return !MissionNotifyDispInfo__IsBattle((MissionNotifyDispInfo_o *)HasFlag, v9);
}