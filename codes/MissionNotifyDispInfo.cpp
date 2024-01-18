void __fastcall MissionNotifyDispInfo___ctor(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionNotifyDispInfo__ContainsMissionCondType(
        MissionNotifyDispInfo_o *this,
        System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *missionCondTypeHashSet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x21
  __int64 v12; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  unsigned __int64 v14; // x22
  __int64 v16; // x0
  WarEntity_o *v17; // [xsp+8h] [xbp-48h] BYREF
  EventMissionConditionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4187349 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, missionCondTypeHashSet);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4187349 = 1;
  }
  entity = 0LL;
  v17 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
        !entity)
    || (targetIds = entity->fields.targetIds) == 0LL )
  {
LABEL_23:
    sub_B2C434(Instance, v10);
  }
  v12 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v12 < 1 )
    return 0;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
    {
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    if ( !v13 )
      goto LABEL_23;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v13,
                                  &v17,
                                  targetIds->m_Items[v14 + 1],
                                  (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v17 || !missionCondTypeHashSet )
        goto LABEL_23;
      Instance = (DataManager_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                    missionCondTypeHashSet,
                                    (int32_t)v17->fields.age,
                                    (const MethodInfo_2D87A7C *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v12) = targetIds->max_length;
    if ( (__int64)++v14 >= (int)v12 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionNotifyDispInfo__HasFlag(MissionNotifyDispInfo_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventMissionConditionEntity_o *Entity; // x0

  if ( (byte_4187348 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4187348 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
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
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  System_String_o *v8; // x1

  if ( (byte_418734A & 1) == 0 )
  {
    sub_B2C35C(&SceneList_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_418734A = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  NowSceneName = AvalonSceneManager__getNowSceneName(Instance, 0LL);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(10, 0LL);
  if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
    return 1;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  v8 = SceneList__getSceneName(38, 0LL);
  return System_String__op_Equality(NowSceneName, v8, 0LL);
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