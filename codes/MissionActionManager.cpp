void MissionActionManager___ctor(MissionActionManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        MissionActionManager_o *this,
        bool onoff,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CCAF2B & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4CCAF2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, onoff, 0);
}


void MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.afterVoiceCallback,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void MissionActionManager__TerminateMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  System_Action_o *afterVoiceCallback; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4CCAF2D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF2D = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0);
    this->fields.afterVoiceCallback = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.afterVoiceCallback, 0, v4, v5, v6, v7, v8, v9);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v11, 0);
  }
}


void MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4CCAF2C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF2C = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0);
      this->fields.afterVoiceCallback = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.afterVoiceCallback, 0, v5, v6, v7, v8, v9, v10);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v12, 0);
    }
  }
  else
  {
    this->fields.isVoicePlaying = 0;
  }
}


void MissionActionManager___doMissionAction_b__9_0(MissionActionManager_o *this, bool skip, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v10; // x1
  __int64 naturalAligment; // x9
  MissionActionManager_o *v12; // x0
  bool v13; // w1
  const MethodInfo *v14; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_4CCAF2E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&EventRewardRootComponent_TypeInfo);
    sub_1C713B0(&Method_MissionActionManager_doMissionAction__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (MissionActionManager_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CCAF2E = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v8, v3, Method_MissionActionManager_doMissionAction__, 0);
  if ( !v6
    || (CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0 )
  {
    sub_1C71608(myFSM, v10);
  }
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( myFSM->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[naturalAligment - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0);
  }
  else
  {
    sub_1C719A4(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v12, v13, v14);
  }
}


void MissionActionManager___doMissionAction_b__9_1(MissionActionManager_o *this, bool skip, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v10; // x1
  __int64 naturalAligment; // x9
  MissionActionManager_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_4CCAF2F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_MissionActionManager_doMissionAction__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (MissionActionManager_o *)sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CCAF2F = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v8, v3, Method_MissionActionManager_doMissionAction__, 0);
  if ( !v6
    || (CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0 )
  {
    sub_1C71608(myFSM, v10);
  }
  naturalAligment = TerminalSceneComponent_TypeInfo->_2.naturalAligment;
  if ( myFSM->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[naturalAligment - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_45623688(myFSM, 0);
  }
  else
  {
    sub_1C719A4(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v12, v13);
  }
}


void MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v5; // w8

  if ( (byte_4CCAF30 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CCAF30 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, method);
    mPauseCount = Instance->fields.mPauseCount;
    if ( mPauseCount )
    {
      v5 = mPauseCount - 1;
      Instance->fields.mPauseCount = v5;
      if ( !v5 )
        MissionNotifyManager__CancelPause(Instance, method);
    }
    this->fields.isStopMissionNotify = 0;
  }
  MissionActionManager__doMissionAction(this, method);
}


void MissionActionManager__addMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_object__o *v11; // x20
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo_35962C4 *v26; // x1
  System_Collections_Generic_List_Enumerator_object__o *v27; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v28; // x0
  System_Collections_Generic_List_object__o *v29; // x21
  Il2CppObject *v30; // x22
  EventMissionActionInfo_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  GrandQuestFolderBoardItem_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CCAF27 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1C713B0(&EventMissionActionInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCAF27 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_32;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0);
  if ( EntityListFromIDnType )
  {
    v10 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType;
    v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      v10,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v54 = v52;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v54,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v54.fields._current;
      v13 = (EventMissionActionInfo_o *)sub_1C715FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_45048740(v13, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v11 )
        sub_1C71608(v14, v15);
      items = v11->fields._items;
      v23 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C71608(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v13,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v13;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v13, v16, v17, v18, v19, v20, v21);
      }
    }
    v26 = (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v27 = &v54;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0 )
  {
LABEL_32:
    sub_1C71608(Instance, v8);
  }
  v28 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0);
  if ( !v28 )
    return;
  v29 = (System_Collections_Generic_List_object__o *)v28;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    v29,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v53 = v52;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v30 = v53.fields._current;
    v31 = (EventMissionActionInfo_o *)sub_1C715FC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v31, (EventMissionActionEntity_o *)v30, 0);
    if ( !v11 )
      sub_1C71608(v32, v33);
    v40 = v11->fields._items;
    v41 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
    ++v11->fields._version;
    if ( !v40 )
      sub_1C71608(v32, v33);
    v42 = v11->fields._size;
    if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v31,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v40->obj.klass + v42;
      v11->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)v31;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v31, v34, v35, v36, v37, v38, v39);
    }
  }
  v27 = &v53;
  v26 = (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v27, v26);
  if ( !v11 )
    goto LABEL_32;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (GrandQuestFolderBoardItem_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v11,
    eventMissionActionList,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (GrandQuestFolderBoardItem_c *)v11;
  sub_1C71354(p_eventMissionActionList, (int32_t)v11, v46, v47, v48, v49, v50, v51);
}


bool MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  MissionActionManager___c_c *v9; // x0
  System_Predicate_object__o *_9__8_0; // x19
  Il2CppObject *v11; // x20
  struct MissionActionManager___c_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x0
  System_Predicate_T__o *v21; // x1
  MissionActionManager___c_c *v22; // x8
  DataManager_o *v23; // x19
  System_Predicate_object__o *_9__8_1; // x20
  Il2CppObject *v25; // x21
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4CCAF29 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C713B0(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_1C713B0(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_MissionActionManager___c__checkScroll_b__8_0__);
    sub_1C713B0(&Method_MissionActionManager___c__checkScroll_b__8_1__);
    sub_1C713B0(&MissionActionManager___c_TypeInfo);
    byte_4CCAF29 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0);
  if ( !EntityListFromIDnType
    || (v8 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0);
        v22 = MissionActionManager___c_TypeInfo;
        v23 = Instance;
        if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v22 = MissionActionManager___c_TypeInfo;
        }
        _9__8_1 = (System_Predicate_object__o *)v22->static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = MissionActionManager___c_TypeInfo;
          }
          v25 = (Il2CppObject *)v22->static_fields->__9;
          _9__8_1 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_object____ctor(_9__8_1, v25, Method_MissionActionManager___c__checkScroll_b__8_1__, 0);
          static_fields = MissionActionManager___c_TypeInfo->static_fields;
          static_fields->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_1,
            (int32_t)_9__8_1,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
        }
        if ( v23 )
        {
          v19 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v20 = (System_Collections_Generic_List_object__o *)v23;
          v21 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_object___Exists(v20, v21, (const MethodInfo_3810D44 *)*v19);
        }
      }
    }
LABEL_25:
    sub_1C71608(Instance, v6);
  }
  v9 = MissionActionManager___c_TypeInfo;
  if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v9 = MissionActionManager___c_TypeInfo;
  }
  _9__8_0 = (System_Predicate_object__o *)v9->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = MissionActionManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__8_0 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v11, Method_MissionActionManager___c__checkScroll_b__8_0__, 0);
    v12 = MissionActionManager___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v12->__9__8_0, (int32_t)_9__8_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v20 = v8;
  v21 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_object___Exists(v20, v21, (const MethodInfo_3810D44 *)*v19);
}


void MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventRewardRootComponent_o *optionId; // x23
  System_Action_c **v4; // x28
  UnityEngine_Object_c **v5; // x24
  intptr_t *v6; // x26
  void *eventMissionActionList; // x0
  EventMissionActionInfo_o *v9; // x25
  __int64 v10; // x9
  __int64 v11; // x9
  Il2CppObject *v12; // x0
  Il2CppObject *Item; // x0
  UnityEngine_Object_c **v14; // x20
  intptr_t *v15; // x24
  System_String_array *v16; // x25
  System_Action_c **v17; // x26
  System_Action_o *v18; // x28
  __int64 v19; // x9
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v21; // x19
  __int64 naturalAligment; // x9
  System_String_o *ValMessage; // x20
  ScriptManager_CallbackFunc_o *v24; // x0
  intptr_t *v25; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v27; // x21
  System_Action_o *v28; // x22
  EventMissionActionInfo_o *v29; // x20
  Il2CppObject *v30; // x0
  System_String_array *v31; // x20
  CommonUI_o *v32; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_String_array *vals; // x21
  int32_t v42; // w8
  const MethodInfo *v43; // x2
  int max_length; // w8
  int v45; // w22
  ScriptManager_CallbackFunc_o *v46; // x21
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x8
  CompleteMissionListViewManager_o *v49; // x20
  int32_t ValID; // w21
  System_Action_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x9
  __int64 v59; // x1
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v61; // w21
  System_Action_o *v62; // x22
  int32_t v63; // w0
  const MethodInfo *v64; // x3
  __int64 v65; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v67; // w22
  System_Action_o *v68; // x23
  EventRewardRootComponent_o *v69; // x20
  System_String_array *VoiceIds; // x21
  System_Action_o *v71; // x23
  System_Action_o *v72; // x24
  __int64 v73; // x9
  MasterMissionComponent_o *v74; // x20
  System_String_array *v75; // x21
  System_Action_o *v76; // x22
  MissionActionManager_o *v77; // x0
  int32_t v78; // w1
  int32_t v79; // w2
  const MethodInfo *v80; // x3

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  while ( 2 )
  {
    if ( (byte_4CCAF2A & 1) == 0 )
    {
      sub_1C713B0(v4);
      sub_1C713B0(&ScriptManager_CallbackFunc_TypeInfo);
      sub_1C713B0(&EventRewardRootComponent_TypeInfo);
      sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
      sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      sub_1C713B0(&Method_MissionActionManager__doMissionAction_b__9_0__);
      sub_1C713B0(&Method_MissionActionManager__doMissionAction_b__9_1__);
      sub_1C713B0(&Method_MissionActionManager__doMissionAction_b__9_2__);
      sub_1C713B0(&Method_MissionActionManager__doMissionAction_b__9_3__);
      sub_1C713B0(&Method_MissionActionManager_VoiceEnds__);
      sub_1C713B0(v6);
      sub_1C713B0(v5);
      sub_1C713B0(&ScriptManager_TypeInfo);
      sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1C713B0(&TerminalTransitionInfo_TypeInfo);
      sub_1C713B0(&StringLiteral_1/*""*/);
      byte_4CCAF2A = 1;
    }
    eventMissionActionList = this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_126;
    if ( *((int *)eventMissionActionList + 6) > 0 )
    {
      eventMissionActionList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                 0,
                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      if ( !this->fields.eventMissionActionList )
        goto LABEL_126;
      v9 = (EventMissionActionInfo_o *)eventMissionActionList;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
        0,
        (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      if ( !v9 )
        goto LABEL_126;
      switch ( v9->fields.missionActionType )
      {
        case 1:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
          {
            this->fields.isVoicePlaying = 0;
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
            if ( !eventMissionActionList )
              goto LABEL_126;
            naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)naturalAligment
              || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL)
                                                + 8 * naturalAligment
                                                - 8) != EventRewardRootComponent_TypeInfo )
            {
LABEL_127:
              sub_1C719A4(eventMissionActionList);
LABEL_128:
              sub_1C719A4(optionId);
LABEL_129:
              sub_1C71610(eventMissionActionList);
            }
            EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0);
            ValMessage = EventMissionActionInfo__getValMessage(v9, 0);
            v24 = (ScriptManager_CallbackFunc_o *)sub_1C715FC(ScriptManager_CallbackFunc_TypeInfo);
            v25 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          }
          else
          {
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
              return;
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 173);
            if ( !eventMissionActionList )
              goto LABEL_126;
            MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0);
            ValMessage = EventMissionActionInfo__getValMessage(v9, 0);
            v24 = (ScriptManager_CallbackFunc_o *)sub_1C715FC(ScriptManager_CallbackFunc_TypeInfo);
            v25 = &Method_MissionActionManager__doMissionAction_b__9_1__;
          }
          v46 = v24;
          ScriptManager_CallbackFunc___ctor(v24, (Il2CppObject *)this, *v25, 0);
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          ScriptManager__PlayScenario(ValMessage, v46, 0, 0);
          return;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = EventMissionActionInfo__getValMessage(v9, 0);
          v28 = (System_Action_o *)sub_1C715FC(*v4);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0);
          if ( !Instance )
            goto LABEL_126;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v27,
            v28,
            150,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0.0,
            0,
            0);
          return;
        case 3:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
          {
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              v47 = (UnityEngine_Object_o *)*((_QWORD *)eventMissionActionList + 172);
              if ( !(*v5)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v5);
              if ( UnityEngine_Object__op_Inequality(v47, 0, 0) )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v48 = *((_QWORD *)eventMissionActionList + 172);
                  if ( v48 )
                  {
                    v49 = *(CompleteMissionListViewManager_o **)(v48 + 72);
                    ValID = EventMissionActionInfo__getValID(v9, 0);
                    v51 = (System_Action_o *)sub_1C715FC(*v4);
                    System_Action___ctor(v51, (Il2CppObject *)this, *v6, 0);
                    if ( v49 )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(v49, ValID, v51, 0);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
                    return;
                  eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 173);
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0);
                      v61 = EventMissionActionInfo__getValID(v9, 0);
                      v62 = (System_Action_o *)sub_1C715FC(*v4);
                      System_Action___ctor(v62, (Il2CppObject *)this, *v6, 0);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v61, v62, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_126;
          }
          eventMissionActionList = this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v29 = *((int *)eventMissionActionList + 6) < 1
              ? 0LL
              : (EventMissionActionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                              0,
                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v63 = EventMissionActionInfo__getValID(v9, 0);
          MissionActionManager__addMissionAction(this, v63, 3, v64);
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v65 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) >= (unsigned int)v65
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v65 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0);
            v67 = EventMissionActionInfo__getValID(v9, 0);
            v68 = (System_Action_o *)sub_1C715FC(*v4);
            System_Action___ctor(v68, (Il2CppObject *)this, *v6, 0);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v9, v29, v67, v68, 0);
              return;
            }
            goto LABEL_126;
          }
          goto LABEL_127;
        case 4:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
            continue;
          optionId = (EventRewardRootComponent_o *)(unsigned int)v9->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_74;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v10 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v10
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v10 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *((_DWORD *)eventMissionActionList + 329) )
            continue;
LABEL_74:
          v34 = sub_1C715FC(TerminalTransitionInfo_TypeInfo);
          TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v34, 0);
          if ( !v34 )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          *(_DWORD *)(v34 + 16) = v9->fields.missionId;
          vals = v9->fields.vals;
          v42 = v9->fields.optionId;
          *(_QWORD *)(v34 + 32) = vals;
          *(_DWORD *)(v34 + 48) = v42;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)vals, v35, v36, v37, v38, v39, v40);
          if ( !vals )
            goto LABEL_126;
          max_length = vals->max_length;
          if ( max_length < 1 )
            goto LABEL_103;
          v45 = 0;
          while ( 2 )
          {
            if ( v45 >= (unsigned int)max_length )
              goto LABEL_129;
            eventMissionActionList = (void *)System_Int32__Parse(vals->m_Items[v45], 0);
            if ( (_DWORD)eventMissionActionList != 800 )
            {
              max_length = vals->max_length;
              v45 += 2;
              if ( v45 >= max_length )
                goto LABEL_103;
              continue;
            }
            break;
          }
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v58 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v58
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v58 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          v59 = *((_QWORD *)eventMissionActionList + 197);
          *(_QWORD *)(v34 + 40) = v59;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 40), v59, v52, v53, v54, v55, v56, v57);
LABEL_103:
          MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
            (MissionActionManager_o *)eventMissionActionList,
            0,
            v43);
          this->fields.isGoneTerminal = 1;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventMissionActionList,
            34,
            1,
            (Il2CppObject *)v34,
            0);
          goto LABEL_50;
        case 5:
          optionId = (EventRewardRootComponent_o *)(unsigned int)v9->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_24;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v11 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v11
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v11 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *((_DWORD *)eventMissionActionList + 329) )
            continue;
LABEL_24:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
            continue;
          eventMissionActionList = this->fields.eventMissionActionList;
          this->fields.isVoicePlaying = 1;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( *((int *)eventMissionActionList + 6) >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)eventMissionActionList,
                     0,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( Item )
            {
              if ( HIDWORD(Item[1].monitor) == 8 )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v69 = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 4);
                  VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0);
                  v71 = (System_Action_o *)sub_1C715FC(*v4);
                  System_Action___ctor(v71, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0);
                  v72 = (System_Action_o *)sub_1C715FC(*v4);
                  System_Action___ctor(v72, (Il2CppObject *)this, *v6, 0);
                  if ( v69 )
                  {
                    v73 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
                    if ( v69->klass->_2.naturalAligment >= (unsigned int)v73
                      && (EventRewardRootComponent_c *)v69->klass->_2.typeHierarchy[v73 - 1] == EventRewardRootComponent_TypeInfo )
                    {
                      EventRewardRootComponent__playEventMissionSvtVoice_32409164(v69, VoiceIds, v71, v72, 0);
                    }
                    else
                    {
                      sub_1C719A4(v69);
                      MissionActionManager__addMissionAction(v77, v78, v79, v80);
                    }
                    return;
                  }
                }
LABEL_126:
                sub_1C71608(eventMissionActionList, method);
              }
            }
          }
          v14 = v5;
          v15 = v6;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 4);
          v16 = EventMissionActionInfo__getVoiceIds(v9, 0);
          v17 = v4;
          v18 = (System_Action_o *)sub_1C715FC(*v4);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0);
          if ( !optionId )
            goto LABEL_126;
          v19 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( optionId->klass->_2.naturalAligment < (unsigned int)v19
            || (EventRewardRootComponent_c *)optionId->klass->_2.typeHierarchy[v19 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_128;
          }
          EventRewardRootComponent__playEventMissionSvtVoice(optionId, v16, v18, 0);
          v4 = v17;
          v6 = v15;
          v5 = v14;
          continue;
        case 6:
          v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = v9->fields.vals;
          v32 = (CommonUI_o *)v30;
          v33 = (System_Action_o *)sub_1C715FC(*v4);
          System_Action___ctor(v33, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0);
          if ( !v32 )
            goto LABEL_126;
          CommonUI__OpenImageDialogWithAssets(v32, v31, v33, 0, 0, 0);
          return;
        case 7:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 172);
          if ( !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0, 0) )
            continue;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
            continue;
          eventMissionActionList = this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( *((int *)eventMissionActionList + 6) >= 1 )
          {
            v12 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventMissionActionList,
                    0,
                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( v12 )
            {
              if ( HIDWORD(v12[1].monitor) == 8 )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v74 = (MasterMissionComponent_o *)*((_QWORD *)eventMissionActionList + 173);
                  v75 = EventMissionActionInfo__getVoiceIds(v9, 0);
                  v76 = (System_Action_o *)sub_1C715FC(*v4);
                  System_Action___ctor(v76, (Il2CppObject *)this, *v6, 0);
                  if ( v74 )
                  {
                    MasterMissionComponent__playEventMissionSvtVoice_46238092(v74, v75, v76, 0);
                    return;
                  }
                }
                goto LABEL_126;
              }
            }
          }
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 173);
          eventMissionActionList = EventMissionActionInfo__getVoiceIds(v9, 0);
          if ( !optionId )
            goto LABEL_126;
          MasterMissionComponent__playEventMissionSvtVoice(
            (MasterMissionComponent_o *)optionId,
            (System_String_array *)eventMissionActionList,
            0);
          continue;
        case 8:
          continue;
        default:
          return;
      }
    }
    break;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
    (MissionActionManager_o *)eventMissionActionList,
    0,
    v2);
LABEL_50:
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5);
      UnityEngine_Object__Destroy_71724608(v21, 0);
    }
  }
}


void MissionActionManager__setMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x24
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v21; // x24
  EventMissionActionInfo_o *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 *v35; // x8
  System_Collections_Generic_List_Enumerator_object__o *v36; // x0
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *v39; // x23
  System_Collections_Generic_List_object__o *v40; // x21
  EventMissionActionInfo_o *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4CCAF26 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1C713B0(&EventMissionActionInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCAF26 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v9;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventMissionActionList,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0 )
  {
LABEL_39:
    sub_1C71608(Instance, v18);
  }
  if ( restricted )
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
  }
  else
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
  }
  if ( SafeActionListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      SafeActionListFromIDnType,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v56 = v54;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v56.fields._current;
      v21 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v22 = (EventMissionActionInfo_o *)sub_1C715FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_45048740(v22, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v21 )
        sub_1C71608(v23, v24);
      items = v21->fields._items;
      v32 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1C71608(v23, v24);
      size = v21->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)v22,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v22;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
      }
    }
    v35 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v36 = &v56;
    goto LABEL_35;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( restricted )
  {
    EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                                                           (EventMissionActionMaster_o *)Instance,
                                                                           missionID,
                                                                           progressType,
                                                                           0);
    if ( !EntityListFromIDnType )
      goto LABEL_36;
  }
  else
  {
    EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getEntityListFromIDnType(
                                                                           (EventMissionActionMaster_o *)Instance,
                                                                           missionID,
                                                                           progressType,
                                                                           0);
    if ( !EntityListFromIDnType )
      goto LABEL_36;
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      EntityListFromIDnType,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v39 = v55.fields._current;
      v40 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v41 = (EventMissionActionInfo_o *)sub_1C715FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v41, (EventMissionActionEntity_o *)v39, 0);
      if ( !v40 )
        sub_1C71608(v42, v43);
      v50 = v40->fields._items;
      v51 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v40->fields._version;
      if ( !v50 )
        sub_1C71608(v42, v43);
      v52 = v40->fields._size;
      if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)v41,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v50->obj.klass + v52;
        v40->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)v41;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v53 + 4), (int32_t)v41, v44, v45, v46, v47, v48, v49);
      }
    }
    v35 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v36 = &v55;
LABEL_35:
    System_Collections_Generic_List_Enumerator_object___Dispose(v36, (const MethodInfo_35962C4 *)*v35);
  }
LABEL_36:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v38);
}


void MissionActionManager__setStatusMissionNotify(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x23
  MissionActionManager___c_c *v12; // x0
  System_Predicate_object__o *_9__7_0; // x24
  Il2CppObject *v14; // x25
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  MissionActionManager___c_c *v23; // x0
  System_Predicate_object__o *_9__7_1; // x21
  Il2CppObject *v25; // x22
  struct MissionActionManager___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4CCAF28 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_1C713B0(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_1C713B0(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__);
    sub_1C713B0(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__);
    sub_1C713B0(&MissionActionManager___c_TypeInfo);
    byte_4CCAF28 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)(restricted
                            ? EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                (EventMissionActionAddMaster_o *)Instance,
                                missionID,
                                progressType,
                                0)
                            : EventMissionActionAddMaster__GetEntityListFromIDnType(
                                (EventMissionActionAddMaster_o *)Instance,
                                missionID,
                                progressType,
                                0));
  v11 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v12 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v12 = MissionActionManager___c_TypeInfo;
    }
    _9__7_0 = (System_Predicate_object__o *)v12->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MissionActionManager___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__7_0 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_object____ctor(_9__7_0, v14, Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, 0);
      static_fields = MissionActionManager___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0,
        (int32_t)_9__7_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v11,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_3810D44 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)(restricted
                            ? EventMissionActionMaster__getSafeActionListFromIDnType(
                                (EventMissionActionMaster_o *)Instance,
                                missionID,
                                progressType,
                                0)
                            : EventMissionActionMaster__getEntityListFromIDnType(
                                (EventMissionActionMaster_o *)Instance,
                                missionID,
                                progressType,
                                0));
  v22 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v23 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v23 = MissionActionManager___c_TypeInfo;
    }
    _9__7_1 = (System_Predicate_object__o *)v23->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MissionActionManager___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__7_1 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_object____ctor(_9__7_1, v25, Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, 0);
      v26 = MissionActionManager___c_TypeInfo->static_fields;
      v26->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v26->__9__7_1, (int32_t)_9__7_1, v27, v28, v29, v30, v31, v32);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v22,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_3810D44 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance[3].monitor);
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_35:
      sub_1C71608(Instance, v10);
    }
  }
}


void MissionActionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCAF31 & 1) == 0 )
  {
    sub_1C713B0(&MissionActionManager___c_TypeInfo);
    byte_4CCAF31 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)MissionActionManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionActionManager___c___ctor(MissionActionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MissionActionManager___c___checkScroll_b__8_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.missionActionType == 3;
}


bool MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.missionActionType == 3;
}


bool MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.missionActionType == 6;
}


bool MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.missionActionType == 6;
}