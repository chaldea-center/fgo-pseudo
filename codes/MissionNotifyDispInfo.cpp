void MissionNotifyDispInfo___ctor(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionNotifyDispInfo__ContainsMissionCondType(
        MissionNotifyDispInfo_o *this,
        System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *missionCondTypeHashSet,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *targetIds; // x21
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned __int64 v11; // x22
  Il2CppObject *v13; // [xsp+0h] [xbp-50h] BYREF
  EventMissionConditionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2AE74 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AE74 = 1;
  }
  v13 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (Il2CppObject *)EventMissionConditionMaster__TryGetEntity(
                               (EventMissionConditionMaster_o *)Instance,
                               &entity,
                               this->fields.eventMissionId,
                               this->fields.missionProgressType,
                               this->fields.id,
                               0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_23;
  if ( entity->fields.condType != 22 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
        !entity)
    || (targetIds = entity->fields.targetIds) == 0 )
  {
LABEL_23:
    sub_1C2D6EC(Instance, v6);
  }
  max_length = targetIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)max_length )
      sub_1C2D6F4(Instance, v6, v7);
    if ( !v10 )
      goto LABEL_23;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 v10,
                                 &v13,
                                 targetIds->m_Items[v11],
                                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v13 || !missionCondTypeHashSet )
        goto LABEL_23;
      Instance = (Il2CppObject *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                   (System_Collections_Generic_HashSet_T__o *)missionCondTypeHashSet,
                                   (int32_t)v13[1].monitor,
                                   (const MethodInfo_363CFF8 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(max_length) = targetIds->max_length;
    if ( (__int64)++v11 >= (int)max_length )
      return 0;
  }
}


bool MissionNotifyDispInfo__HasFlag(MissionNotifyDispInfo_o *this, int32_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  EventMissionConditionEntity_o *Entity; // x0

  if ( (byte_4C2AE73 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2AE73 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v6);
  }
  Entity = EventMissionConditionMaster__GetEntity(
             (EventMissionConditionMaster_o *)Instance,
             this->fields.eventMissionId,
             this->fields.missionProgressType,
             this->fields.id,
             0);
  if ( Entity )
    LOBYTE(Entity) = EventMissionConditionEntity__HasFlag(Entity, flag, 0);
  return (char)Entity;
}


bool MissionNotifyDispInfo__IsBattle(MissionNotifyDispInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  System_String_o *v7; // x1

  if ( (byte_4C2AE75 & 1) == 0 )
  {
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2AE75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)Instance, 0);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(10, 0);
  if ( System_String__op_Equality(NowSceneName, SceneName, 0) )
    return 1;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  v7 = SceneList__getSceneName(38, 0);
  return System_String__op_Equality(NowSceneName, v7, 0);
}


bool MissionNotifyDispInfo__IsDispPossible(MissionNotifyDispInfo_o *this, const MethodInfo *method)
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