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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct System_Int32_array *targetIds; // x21
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  unsigned __int64 v14; // x22
  Il2CppObject *v16; // [xsp+0h] [xbp-50h] BYREF
  EventMissionConditionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A01874 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, missionCondTypeHashSet);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_1B64870(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A01874 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = (Il2CppObject *)EventMissionConditionMaster__TryGetEntity(
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___),
        !entity)
    || (targetIds = entity->fields.targetIds) == 0LL )
  {
LABEL_23:
    sub_1B64ACC(Instance, v10);
  }
  v12 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v12 < 1 )
    return 0;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
      sub_1B64AD4(Instance, v10);
    if ( !v13 )
      goto LABEL_23;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 v13,
                                 &v16,
                                 targetIds->m_Items[v14 + 1],
                                 (const MethodInfo_30D61D4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v16 || !missionCondTypeHashSet )
        goto LABEL_23;
      Instance = (Il2CppObject *)System_Collections_Generic_HashSet_Int32Enum___Contains(
                                   (System_Collections_Generic_HashSet_T__o *)missionCondTypeHashSet,
                                   (int32_t)v16[1].monitor,
                                   (const MethodInfo_3368500 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Contains__);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  EventMissionConditionEntity_o *Entity; // x0

  if ( (byte_4A01873 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, *(_QWORD *)&flag);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A01873 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *NowSceneName; // x19
  System_String_o *SceneName; // x0
  System_String_o *v8; // x1

  if ( (byte_4A01875 & 1) == 0 )
  {
    sub_1B64870(&SceneList_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4A01875 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
  NowSceneName = AvalonSceneManager__getNowSceneName((AvalonSceneManager_o *)Instance, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(10, 0LL);
  if ( System_String__op_Equality(NowSceneName, SceneName, 0LL) )
    return 1;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
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