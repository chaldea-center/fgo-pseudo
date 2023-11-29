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
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v11; // x0
  WarQuestSelectionMaster_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *targetIds; // x21
  __int64 v16; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  unsigned __int64 v18; // x22
  WarEntity_o *v20; // [xsp+8h] [xbp-48h] BYREF
  EventMissionConditionEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F7D3A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, missionCondTypeHashSet);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F7D3A = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !EventMissionConditionMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          this->fields.eventMissionId,
          this->fields.missionProgressType,
          this->fields.id,
          0LL) )
    return 0;
  if ( !entity )
    goto LABEL_23;
  if ( entity->fields.condType != 22 )
    return 0;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11
    || (v12 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v11,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
        !entity)
    || (targetIds = entity->fields.targetIds) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  v16 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v16 < 1 )
    return 0;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)v12;
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)v16 )
    {
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    if ( !v17 )
      goto LABEL_23;
    v12 = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         v17,
                                         &v20,
                                         targetIds->m_Items[v18 + 1],
                                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( !v20 || !missionCondTypeHashSet )
        goto LABEL_23;
      v12 = (WarQuestSelectionMaster_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                           missionCondTypeHashSet,
                                           (int32_t)v20->fields.age,
                                           (const MethodInfo_21DA97C *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
      if ( ((unsigned __int8)v12 & 1) != 0 )
        return 1;
    }
    LODWORD(v16) = targetIds->max_length;
    if ( (__int64)++v18 >= (int)v16 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionNotifyDispInfo__HasFlag(MissionNotifyDispInfo_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionConditionEntity_o *Entity; // x0

  if ( (byte_40F7D39 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F7D39 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = EventMissionConditionMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
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
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  System_String_o *v7; // x1

  if ( (byte_40F7D3B & 1) == 0 )
  {
    sub_B16FFC(&SceneList_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40F7D3B = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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