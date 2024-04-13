void __fastcall MissionNotifyDispInfo___ctor(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionNotifyDispInfo__ContainsMissionCondType(
        MissionNotifyDispInfo_o *this,
        System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *missionCondTypeHashSet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  struct System_Int32_array *targetIds; // x21
  __int64 v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x20
  unsigned __int64 v23; // x22
  __int64 v25; // x0
  WarEntity_o *v26; // [xsp+8h] [xbp-48h] BYREF
  EventMissionConditionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E7406 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventMissionCondDetailMaster___,
      (_DWORD)missionCondTypeHashSet,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v6, v7, v8);
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E7406 = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
        !entity)
    || (targetIds = entity->fields.targetIds) == 0LL )
  {
LABEL_23:
    sub_B5D69C(Instance, v19);
  }
  v21 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v21 < 1 )
    return 0;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)v21 )
    {
      v25 = sub_B5D6C8(Instance);
      sub_B5D668(v25, 0LL);
    }
    if ( !v22 )
      goto LABEL_23;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v22,
                                  &v26,
                                  targetIds->m_Items[v23 + 1],
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v26 || !missionCondTypeHashSet )
        goto LABEL_23;
      Instance = (DataManager_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                    missionCondTypeHashSet,
                                    (int32_t)v26->fields.age,
                                    (const MethodInfo_2501E74 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v21) = targetIds->max_length;
    if ( (__int64)++v23 >= (int)v21 )
      return 0;
  }
}


bool __fastcall MissionNotifyDispInfo__HasFlag(MissionNotifyDispInfo_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventMissionConditionEntity_o *Entity; // x0

  if ( (byte_42E7405 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E7405 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  System_String_o *v12; // x1

  if ( (byte_42E7407 & 1) == 0 )
  {
    sub_B5D5C4(&SceneList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E7407 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  NowSceneName = AvalonSceneManager__getNowSceneName(Instance, 0LL);
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(10, 0LL);
  if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
    return 1;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  v12 = SceneList__getSceneName(38, 0LL);
  return System_String__op_Equality(NowSceneName, v12, 0LL);
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