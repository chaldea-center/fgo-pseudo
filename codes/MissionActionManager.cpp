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

  if ( (byte_596A0F6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_596A0F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, onoff, 0);
}


void MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.afterVoiceCallback,
      (int32_t)callback,
      (System_String_o *)method,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x19

  if ( (byte_596A0F8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0F8 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0);
    this->fields.afterVoiceCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.afterVoiceCallback, 0, v4, v5, v6, v7, v8, v9);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__Destroy_83459800(v15, 0);
  }
}


void MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x19

  if ( (byte_596A0F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A0F7 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0);
      this->fields.afterVoiceCallback = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.afterVoiceCallback, 0, v5, v6, v7, v8, v9, v10);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      UnityEngine_Object__Destroy_83459800(v16, 0);
    }
  }
  else
  {
    this->fields.isVoicePlaying = 0;
  }
}


void MissionActionManager___doMissionAction_b__10_0(MissionActionManager_o *this, bool skip, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 naturalAligment; // x9
  MissionActionManager_o *v16; // x0
  bool v17; // w1
  const MethodInfo *v18; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_596A0F9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_MissionActionManager_doMissionAction__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (MissionActionManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596A0F9 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, v3, Method_MissionActionManager_doMissionAction__, 0);
  if ( !v8
    || (CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0 )
  {
    sub_2213CDC(myFSM, v12);
  }
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( myFSM->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[naturalAligment - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0);
  }
  else
  {
    v16 = (MissionActionManager_o *)sub_221405C(myFSM, EventRewardRootComponent_TypeInfo, v13, v14);
    MissionActionManager___doMissionAction_b__10_1(v16, v17, v18);
  }
}


void MissionActionManager___doMissionAction_b__10_1(MissionActionManager_o *this, bool skip, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 naturalAligment; // x9
  MissionActionManager_o *v16; // x0
  const MethodInfo *v17; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_596A0FA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_MissionActionManager_doMissionAction__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (MissionActionManager_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A0FA = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, v3, Method_MissionActionManager_doMissionAction__, 0);
  if ( !v8
    || (CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0 )
  {
    sub_2213CDC(myFSM, v12);
  }
  naturalAligment = TerminalSceneComponent_TypeInfo->_2.naturalAligment;
  if ( myFSM->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[naturalAligment - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_52367936(myFSM, 0);
  }
  else
  {
    v16 = (MissionActionManager_o *)sub_221405C(myFSM, TerminalSceneComponent_TypeInfo, v13, v14);
    MissionActionManager___doMissionAction_b__10_2(v16, v17);
  }
}


void MissionActionManager___doMissionAction_b__10_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v5; // w8

  if ( (byte_596A0FB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596A0FB = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, method);
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


void MissionActionManager___doMissionAction_b__10_4(MissionActionManager_o *this, const MethodInfo *method)
{
  this->fields.isMasterMissionVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, method);
}


void MissionActionManager___doMissionAction_b__10_5(MissionActionManager_o *this, const MethodInfo *method)
{
  this->fields.isMasterMissionVoicePlaying = 0;
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo_40FBAD4 *v26; // x1
  System_Collections_Generic_List_Enumerator_object__o *v27; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v28; // x0
  System_Collections_Generic_List_object__o *v29; // x21
  Il2CppObject *v30; // x22
  EventMissionActionInfo_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  MissionNaviTransitionBoardItem_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  __int64 v52; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o *v53; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+10h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+28h] [xbp-78h] BYREF

  if ( (byte_596A0F2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_2213A60(&EventMissionActionInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A0F2 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  memset(&v54, 0, sizeof(v54));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_30;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0);
  if ( EntityListFromIDnType )
  {
    v10 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType;
    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      v10,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v52 = 0;
    v53 = &v55;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v55.fields._current;
      v13 = (EventMissionActionInfo_o *)sub_2213CCC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_52779268(v13, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v11
        || (items = v11->fields._items,
            v23 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__,
            ++v11->fields._version,
            !items) )
      {
        sub_2213CDC(v14, v15);
      }
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v13,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v13, v16, v17, v18, v19, v20, v21);
      }
    }
    v26 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v27 = &v55;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0 )
  {
LABEL_30:
    sub_2213CDC(Instance, v8);
  }
  v28 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0);
  if ( !v28 )
    return;
  v29 = (System_Collections_Generic_List_object__o *)v28;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    v29,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v52 = 0;
  v53 = &v54;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v30 = v54.fields._current;
    v31 = (EventMissionActionInfo_o *)sub_2213CCC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v31, (EventMissionActionEntity_o *)v30, 0);
    if ( !v11
      || (v40 = v11->fields._items,
          v41 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__,
          ++v11->fields._version,
          !v40) )
    {
      sub_2213CDC(v32, v33);
    }
    v42 = v11->fields._size;
    if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v31,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v40->obj.klass + v42;
      v11->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)v31;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v31, v34, v35, v36, v37, v38, v39);
    }
  }
  v27 = &v54;
  v26 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v27, v26);
  if ( !v11 )
    goto LABEL_30;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (MissionNaviTransitionBoardItem_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v11,
    eventMissionActionList,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (MissionNaviTransitionBoardItem_c *)v11;
  sub_2213A04(p_eventMissionActionList, (int32_t)v11, v46, v47, v48, v49, v50, v51);
}


bool MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x21
  MissionActionManager___c_c *v11; // x0
  struct MissionActionManager___c_StaticFields *v12; // x8
  System_Predicate_object__o *_9__9_0; // x19
  Il2CppObject *v14; // x20
  struct MissionActionManager___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x0
  System_Predicate_T__o *v23; // x1
  __int64 *v24; // x8
  __int64 v25; // x2
  MissionActionManager___c_c *v26; // x8
  DataManager_o *v27; // x19
  struct MissionActionManager___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__9_1; // x20
  Il2CppObject *v30; // x21
  struct MissionActionManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_596A0F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_2213A60(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_MissionActionManager___c__checkScroll_b__9_0__);
    sub_2213A60(&Method_MissionActionManager___c__checkScroll_b__9_1__);
    sub_2213A60(&MissionActionManager___c_TypeInfo);
    byte_596A0F4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0);
  if ( !EntityListFromIDnType
    || (v10 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0);
        v26 = MissionActionManager___c_TypeInfo;
        v27 = Instance;
        if ( !*(&MissionActionManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v6, v25);
          v26 = MissionActionManager___c_TypeInfo;
        }
        static_fields = v26->static_fields;
        _9__9_1 = (System_Predicate_object__o *)static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( !*(&v26->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v26, v6, v25);
            static_fields = MissionActionManager___c_TypeInfo->static_fields;
          }
          v30 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_object____ctor(_9__9_1, v30, Method_MissionActionManager___c__checkScroll_b__9_1__, 0);
          v31 = MissionActionManager___c_TypeInfo->static_fields;
          v31->__9__9_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__9_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v31->__9__9_1,
            (int32_t)_9__9_1,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
        }
        if ( v27 )
        {
          v22 = (System_Collections_Generic_List_object__o *)v27;
          v23 = (System_Predicate_T__o *)_9__9_1;
          v24 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          return System_Collections_Generic_List_object___Exists(v22, v23, (const MethodInfo_448429C *)*v24);
        }
      }
    }
LABEL_25:
    sub_2213CDC(Instance, v6);
  }
  v11 = MissionActionManager___c_TypeInfo;
  if ( !*(&MissionActionManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v8, v9);
    v11 = MissionActionManager___c_TypeInfo;
  }
  v12 = v11->static_fields;
  _9__9_0 = (System_Predicate_object__o *)v12->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v8, v9);
      v12 = MissionActionManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)v12->__9;
    _9__9_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_object____ctor(_9__9_0, v14, Method_MissionActionManager___c__checkScroll_b__9_0__, 0);
    v15 = MissionActionManager___c_TypeInfo->static_fields;
    v15->__9__9_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = v10;
  v23 = (System_Predicate_T__o *)_9__9_0;
  v24 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  return System_Collections_Generic_List_object___Exists(v22, v23, (const MethodInfo_448429C *)*v24);
}


void MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 eventMissionActionList; // x0
  EventMissionActionInfo_o *v5; // x25
  int missionActionType; // w8
  int32_t v7; // w28
  __int64 v8; // x3
  __int64 v9; // x9
  Il2CppObject *v10; // x0
  __int64 v11; // x29
  System_String_array *v12; // x25
  System_Action_o *v13; // x28
  EventRewardRootComponent_o *v14; // x0
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x28
  Il2CppObject *Item; // x0
  MasterMissionComponent_o *v18; // x29
  System_String_array *v19; // x25
  System_Action_o *v20; // x28
  int32_t optionId; // w28
  __int64 v22; // x9
  __int64 v23; // x2
  __int64 v24; // x8
  __int64 naturalAligment; // x11
  __int64 v26; // x29
  EventMissionActionInfo_o *v27; // x20
  Il2CppObject *v28; // x20
  System_String_o *ValMessage; // x21
  System_Action_o *v30; // x22
  const MethodInfo_47A29F8 *v31; // x0
  __int64 v32; // x9
  System_String_o *v33; // x20
  ScriptManager_CallbackFunc_o *v34; // x0
  intptr_t v35; // x2
  __int64 v36; // x2
  UnityEngine_Object_o *v37; // x20
  __int64 v38; // x8
  CompleteMissionListViewManager_o *v39; // x20
  int32_t ValID; // w21
  System_Action_o *v41; // x22
  ScriptManager_CallbackFunc_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_Object_o *v50; // x19
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v52; // w21
  System_Action_o *v53; // x22
  int32_t v54; // w0
  const MethodInfo *v55; // x3
  __int64 v56; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v58; // w22
  System_Action_o *v59; // x23
  Il2CppObject *Instance; // x0
  System_String_array *vals; // x20
  CommonUI_o *v62; // x21
  System_Action_o *v63; // x22
  EventRewardRootComponent_o *v64; // x20
  System_Action_o *v65; // x21
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x9
  MasterMissionComponent_o *v69; // x20
  System_Action_o *v70; // x21
  __int64 v71; // x20
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct System_String_array *v78; // x21
  int32_t missionId; // w8
  int32_t v80; // w9
  const MethodInfo *v81; // x2
  int max_length; // w8
  int v83; // w22
  __int64 v84; // x21
  __int64 v85; // x1
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  const MethodInfo_47A29F8 *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  UnityEngine_Object_o *gameObject; // x20
  MasterMissionComponent_o *v96; // x20
  System_String_array *VoiceIds; // x21
  System_Action_o *v98; // x22
  __int64 v99; // x20
  System_String_array *v100; // x21
  System_Action_o *v101; // x22
  System_Action_o *v102; // x23
  EventRewardRootComponent_o *v103; // x0
  MissionActionManager_o *v104; // x0
  int32_t v105; // w1
  int32_t v106; // w2
  const MethodInfo *v107; // x3

  while ( 1 )
  {
    if ( (byte_596A0F5 & 1) == 0 )
    {
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
      sub_2213A60(&EventRewardRootComponent_TypeInfo);
      sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
      sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      sub_2213A60(&Method_MissionActionManager__doMissionAction_b__10_0__);
      sub_2213A60(&Method_MissionActionManager__doMissionAction_b__10_1__);
      sub_2213A60(&Method_MissionActionManager__doMissionAction_b__10_2__);
      sub_2213A60(&Method_MissionActionManager__doMissionAction_b__10_3__);
      sub_2213A60(&Method_MissionActionManager__doMissionAction_b__10_4__);
      sub_2213A60(&Method_MissionActionManager__doMissionAction_b__10_5__);
      sub_2213A60(&Method_MissionActionManager_VoiceEnds__);
      sub_2213A60(&Method_MissionActionManager_doMissionAction__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      sub_2213A60(&ScriptManager_TypeInfo);
      sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_2213A60(&TerminalTransitionInfo_TypeInfo);
      sub_2213A60(&StringLiteral_1/*""*/);
      byte_596A0F5 = 1;
    }
    eventMissionActionList = (__int64)this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_155;
    if ( *(int *)(eventMissionActionList + 24) <= 0 )
      break;
    eventMissionActionList = (__int64)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                        0,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
    if ( !this->fields.eventMissionActionList )
      goto LABEL_155;
    v5 = (EventMissionActionInfo_o *)eventMissionActionList;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
      0,
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
    if ( !v5 )
      goto LABEL_155;
    missionActionType = v5->fields.missionActionType;
    if ( missionActionType > 5 )
    {
      switch ( missionActionType )
      {
        case 7:
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          v16 = *(UnityEngine_Object_o **)(eventMissionActionList + 1384);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v15);
          if ( !UnityEngine_Object__op_Inequality(v16, 0, 0) )
          {
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_155;
            if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
            {
              eventMissionActionList = (__int64)this->fields.eventMissionActionList;
              this->fields.isMasterMissionVoicePlaying = 1;
              if ( !eventMissionActionList )
                goto LABEL_155;
              if ( *(int *)(eventMissionActionList + 24) >= 1 )
              {
                Item = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)eventMissionActionList,
                         0,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
                if ( Item )
                {
                  if ( HIDWORD(Item[1].monitor) == 8 )
                  {
                    eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( eventMissionActionList )
                    {
                      v96 = *(MasterMissionComponent_o **)(eventMissionActionList + 1392);
                      VoiceIds = EventMissionActionInfo__getVoiceIds(v5, 0);
                      v98 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v98,
                        (Il2CppObject *)this,
                        Method_MissionActionManager__doMissionAction_b__10_4__,
                        0);
                      if ( v96 )
                      {
                        MasterMissionComponent__playEventMissionSvtVoice_54007496(v96, VoiceIds, v98, 0);
                        return;
                      }
                    }
                    goto LABEL_155;
                  }
                }
              }
              eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !eventMissionActionList )
                goto LABEL_155;
              v18 = *(MasterMissionComponent_o **)(eventMissionActionList + 1392);
              v19 = EventMissionActionInfo__getVoiceIds(v5, 0);
              v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v20, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__10_5__, 0);
              if ( !v18 )
                goto LABEL_155;
              MasterMissionComponent__playEventMissionSvtVoice_54007496(v18, v19, v20, 0);
            }
          }
          break;
        case 8:
          if ( this->fields.isMasterMissionVoicePlaying || !v5->fields.optionId )
            goto LABEL_161;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          v24 = *(_QWORD *)(eventMissionActionList + 32);
          if ( v24
            && (naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment,
                *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)naturalAligment) )
          {
            if ( *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * naturalAligment - 8) == EventRewardRootComponent_TypeInfo )
              v26 = *(_QWORD *)(eventMissionActionList + 32);
            else
              v26 = 0;
          }
          else
          {
            v26 = 0;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v23);
          eventMissionActionList = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
          if ( (eventMissionActionList & 1) == 0 )
            goto LABEL_161;
          if ( !v26 )
            goto LABEL_155;
          if ( v5->fields.optionId == *(_DWORD *)(v26 + 1316) )
          {
LABEL_161:
            if ( this->fields.isVoicePlaying )
            {
              eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( eventMissionActionList )
              {
                v64 = *(EventRewardRootComponent_o **)(eventMissionActionList + 32);
                v65 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v65, (Il2CppObject *)this, Method_MissionActionManager_doMissionAction__, 0);
                if ( v64 )
                {
                  v68 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
                  if ( v64->klass->_2.naturalAligment >= (unsigned int)v68
                    && (EventRewardRootComponent_c *)v64->klass->_2.typeHierarchy[v68 - 1] == EventRewardRootComponent_TypeInfo )
                  {
                    EventRewardRootComponent__AddEndVoiceCallBack(v64, v65, 0);
                  }
                  else
                  {
                    v104 = (MissionActionManager_o *)sub_221405C(v64, EventRewardRootComponent_TypeInfo, v66, v67);
                    MissionActionManager__addMissionAction(v104, v105, v106, v107);
                  }
                  return;
                }
              }
              goto LABEL_155;
            }
            if ( this->fields.isMasterMissionVoicePlaying )
            {
              eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( eventMissionActionList )
              {
                v69 = *(MasterMissionComponent_o **)(eventMissionActionList + 1392);
                v70 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(v70, (Il2CppObject *)this, Method_MissionActionManager_doMissionAction__, 0);
                if ( v69 )
                {
                  MasterMissionComponent__AddEndVoiceCallBack(v69, v70, 0);
                  return;
                }
              }
              goto LABEL_155;
            }
          }
          break;
        case 6:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          vals = v5->fields.vals;
          v62 = (CommonUI_o *)Instance;
          v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v63, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__10_3__, 0);
          if ( v62 )
          {
            CommonUI__OpenImageDialogWithAssets(v62, vals, v63, 0, 0, 0);
            return;
          }
          goto LABEL_155;
        default:
          return;
      }
    }
    else
    {
      if ( missionActionType <= 3 )
      {
        if ( missionActionType != 1 )
        {
          if ( missionActionType == 2 )
          {
            v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            ValMessage = EventMissionActionInfo__getValMessage(v5, 0);
            v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v30, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__10_2__, 0);
            if ( v28 )
            {
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)v28,
                (System_String_o *)StringLiteral_1/*""*/,
                ValMessage,
                v30,
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
            }
            goto LABEL_155;
          }
          if ( missionActionType != 3 )
            return;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
          {
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              v37 = *(UnityEngine_Object_o **)(eventMissionActionList + 1384);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v36);
              if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
              {
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v38 = *(_QWORD *)(eventMissionActionList + 1384);
                  if ( v38 )
                  {
                    v39 = *(CompleteMissionListViewManager_o **)(v38 + 80);
                    ValID = EventMissionActionInfo__getValID(v5, 0);
                    v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(v41, (Il2CppObject *)this, Method_MissionActionManager_doMissionAction__, 0);
                    if ( v39 )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(v39, ValID, v41, 0);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
                    return;
                  eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1392);
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0);
                      v52 = EventMissionActionInfo__getValID(v5, 0);
                      v53 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(v53, (Il2CppObject *)this, Method_MissionActionManager_doMissionAction__, 0);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v52, v53, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_155;
          }
          eventMissionActionList = (__int64)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_155;
          v27 = *(int *)(eventMissionActionList + 24) < 1
              ? 0LL
              : (EventMissionActionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                              0,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v54 = EventMissionActionInfo__getValID(v5, 0);
          MissionActionManager__addMissionAction(this, v54, 3, v55);
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_155;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v56 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) >= (unsigned int)v56
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v56 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0);
            v58 = EventMissionActionInfo__getValID(v5, 0);
            v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v59, (Il2CppObject *)this, Method_MissionActionManager_doMissionAction__, 0);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v5, v27, v58, v59, 0);
              return;
            }
            goto LABEL_155;
          }
LABEL_156:
          eventMissionActionList = sub_221405C(eventMissionActionList, method, v2, v8);
LABEL_157:
          sub_2213CE4(eventMissionActionList);
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_155;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
        {
          v31 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          this->fields.isVoicePlaying = 0;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance(v31);
          if ( !eventMissionActionList )
            goto LABEL_155;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_155;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v32 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v32
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v32 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_156;
          }
          EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0);
          v33 = EventMissionActionInfo__getValMessage(v5, 0);
          v34 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
          v35 = Method_MissionActionManager__doMissionAction_b__10_0__;
        }
        else
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
            return;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1392);
          if ( !eventMissionActionList )
            goto LABEL_155;
          MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0);
          v33 = EventMissionActionInfo__getValMessage(v5, 0);
          v34 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
          v35 = Method_MissionActionManager__doMissionAction_b__10_1__;
        }
        v42 = v34;
        ScriptManager_CallbackFunc___ctor(v34, (Il2CppObject *)this, v35, 0);
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v43, v44);
        ScriptManager__PlayScenario(v33, v42, 0, 0);
        return;
      }
      if ( missionActionType == 4 )
      {
        eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_155;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
        {
          optionId = v5->fields.optionId;
          if ( !optionId )
            goto LABEL_132;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_155;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v22 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v22
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v22 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_156;
          }
          if ( optionId == *(_DWORD *)(eventMissionActionList + 1316) )
          {
LABEL_132:
            v71 = sub_2213CCC(TerminalTransitionInfo_TypeInfo);
            TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v71, 0);
            if ( v71 )
            {
              v78 = v5->fields.vals;
              missionId = v5->fields.missionId;
              v80 = v5->fields.optionId;
              *(_QWORD *)(v71 + 32) = v78;
              *(_DWORD *)(v71 + 16) = missionId;
              *(_DWORD *)(v71 + 48) = v80;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v71 + 32), (int32_t)v78, v72, v73, v74, v75, v76, v77);
              if ( v78 )
              {
                max_length = v78->max_length;
                if ( max_length < 1 )
                  goto LABEL_143;
                v83 = 0;
                while ( 1 )
                {
                  if ( v83 >= (unsigned int)max_length )
                    goto LABEL_157;
                  eventMissionActionList = System_Int32__Parse(v78->m_Items[v83], 0);
                  if ( (_DWORD)eventMissionActionList == 800 )
                    break;
                  max_length = v78->max_length;
                  v83 += 2;
                  if ( v83 >= max_length )
                    goto LABEL_143;
                }
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v84 = *(_QWORD *)(eventMissionActionList + 32);
                  eventMissionActionList = sub_1FFEA10(v84, EventRewardRootComponent_TypeInfo);
                  if ( eventMissionActionList )
                  {
                    v85 = *(_QWORD *)(sub_1FFEA10(v84, EventRewardRootComponent_TypeInfo) + 1576);
                    *(_QWORD *)(v71 + 40) = v85;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v71 + 40), v85, v86, v87, v88, v89, v90, v91);
LABEL_143:
                    MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
                      (MissionActionManager_o *)eventMissionActionList,
                      0,
                      v81);
                    v92 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
                    this->fields.isGoneTerminal = 1;
                    eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance(v92);
                    if ( eventMissionActionList )
                    {
                      AvalonSceneManager__transitionScene(
                        (AvalonSceneManager_o *)eventMissionActionList,
                        34,
                        1,
                        (Il2CppObject *)v71,
                        0);
                      if ( !this->fields.isVoicePlaying )
                      {
                        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93, v94);
                        if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
                          goto LABEL_105;
                      }
                      return;
                    }
                  }
                }
              }
            }
LABEL_155:
            sub_2213CDC(eventMissionActionList, method);
          }
        }
      }
      else
      {
        v7 = v5->fields.optionId;
        if ( !v7 )
          goto LABEL_17;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_155;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
        if ( !eventMissionActionList )
          goto LABEL_155;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v9 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v9
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v9 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_156;
        }
        if ( v7 == *(_DWORD *)(eventMissionActionList + 1316) )
        {
LABEL_17:
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_155;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
          {
            eventMissionActionList = (__int64)this->fields.eventMissionActionList;
            this->fields.isVoicePlaying = 1;
            if ( !eventMissionActionList )
              goto LABEL_155;
            if ( *(int *)(eventMissionActionList + 24) >= 1 )
            {
              v10 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)eventMissionActionList,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
              if ( v10 )
              {
                if ( HIDWORD(v10[1].monitor) == 8 )
                {
                  eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    v99 = *(_QWORD *)(eventMissionActionList + 32);
                    v100 = EventMissionActionInfo__getVoiceIds(v5, 0);
                    v101 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(v101, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0);
                    v102 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(v102, (Il2CppObject *)this, Method_MissionActionManager_doMissionAction__, 0);
                    eventMissionActionList = sub_1FFEA10(v99, EventRewardRootComponent_TypeInfo);
                    if ( eventMissionActionList )
                    {
                      v103 = (EventRewardRootComponent_o *)sub_1FFEA10(v99, EventRewardRootComponent_TypeInfo);
                      EventRewardRootComponent__playEventMissionSvtVoice_38732880(v103, v100, v101, v102, 0);
                      return;
                    }
                  }
                  goto LABEL_155;
                }
              }
            }
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_155;
            v11 = *(_QWORD *)(eventMissionActionList + 32);
            v12 = EventMissionActionInfo__getVoiceIds(v5, 0);
            v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v13, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0);
            eventMissionActionList = sub_1FFEA10(v11, EventRewardRootComponent_TypeInfo);
            if ( !eventMissionActionList )
              goto LABEL_155;
            v14 = (EventRewardRootComponent_o *)sub_1FFEA10(v11, EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__playEventMissionSvtVoice(v14, v12, v13, 0);
          }
        }
      }
    }
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
    (MissionActionManager_o *)eventMissionActionList,
    0,
    v2);
  if ( !this->fields.isVoicePlaying )
  {
    v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
    if ( UnityEngine_Object__op_Inequality(v47, 0, 0) )
    {
LABEL_105:
      v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
      UnityEngine_Object__Destroy_83459800(v50, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v21; // x24
  EventMissionActionInfo_o *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_object__o *v35; // x0
  __int64 *v36; // x8
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v38; // x1
  Il2CppObject *v39; // x23
  System_Collections_Generic_List_object__o *v40; // x21
  EventMissionActionInfo_o *v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596A0F1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_2213A60(&EventMissionActionInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A0F1 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v9;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventMissionActionList,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( restricted )
  {
    if ( !Instance )
      goto LABEL_39;
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
LABEL_10:
    if ( SafeActionListFromIDnType->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v54,
        SafeActionListFromIDnType,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
      v56 = v54;
      v54.fields._list = 0;
      *(_QWORD *)&v54.fields._index = &v56;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v56,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
      {
        current = v56.fields._current;
        v21 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
        v22 = (EventMissionActionInfo_o *)sub_2213CCC(EventMissionActionInfo_TypeInfo);
        EventMissionActionInfo___ctor_52779268(v22, (EventMissionActionAddEntity_o *)current, 0);
        if ( !v21
          || (items = v21->fields._items,
              v32 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__,
              ++v21->fields._version,
              !items) )
        {
          sub_2213CDC(v23, v24);
        }
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v22,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
        }
      }
      v35 = &v56;
      v36 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
      goto LABEL_36;
    }
    goto LABEL_20;
  }
  if ( !Instance )
    goto LABEL_39;
  SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIDnType(
                                                                             (EventMissionActionAddMaster_o *)Instance,
                                                                             missionID,
                                                                             progressType,
                                                                             0);
  if ( SafeActionListFromIDnType )
    goto LABEL_10;
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !restricted )
  {
    if ( Instance )
    {
      EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getEntityListFromIDnType(
                                                                             (EventMissionActionMaster_o *)Instance,
                                                                             missionID,
                                                                             progressType,
                                                                             0);
      if ( !EntityListFromIDnType )
        goto LABEL_37;
      goto LABEL_27;
    }
LABEL_39:
    sub_2213CDC(Instance, v18);
  }
  if ( !Instance )
    goto LABEL_39;
  EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                                                         (EventMissionActionMaster_o *)Instance,
                                                                         missionID,
                                                                         progressType,
                                                                         0);
  if ( !EntityListFromIDnType )
    goto LABEL_37;
LABEL_27:
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
      EntityListFromIDnType,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    v54.fields._list = 0;
    *(_QWORD *)&v54.fields._index = &v55;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v55,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v39 = v55.fields._current;
      v40 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v41 = (EventMissionActionInfo_o *)sub_2213CCC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v41, (EventMissionActionEntity_o *)v39, 0);
      if ( !v40
        || (v50 = v40->fields._items,
            v51 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__,
            ++v40->fields._version,
            !v50) )
      {
        sub_2213CDC(v42, v43);
      }
      v52 = v40->fields._size;
      if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)v41,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v50->obj.klass + v52;
        v40->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)v41;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v41, v44, v45, v46, v47, v48, v49);
      }
    }
    v35 = &v55;
    v36 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_36:
    System_Collections_Generic_List_Enumerator_object___Dispose(v35, (const MethodInfo_40FBAD4 *)*v36);
  }
LABEL_37:
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
  const MethodInfo_47A29F8 *v9; // x0
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x23
  MissionActionManager___c_c *v14; // x0
  struct MissionActionManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__8_0; // x24
  Il2CppObject *v17; // x25
  struct MissionActionManager___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x20
  MissionActionManager___c_c *v27; // x0
  struct MissionActionManager___c_StaticFields *v28; // x8
  System_Predicate_object__o *_9__8_1; // x21
  Il2CppObject *v30; // x22
  struct MissionActionManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_596A0F3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_2213A60(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_2213A60(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_MissionActionManager___c__setStatusMissionNotify_b__8_0__);
    sub_2213A60(&Method_MissionActionManager___c__setStatusMissionNotify_b__8_1__);
    sub_2213A60(&MissionActionManager___c_TypeInfo);
    byte_596A0F3 = 1;
  }
  v9 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isStopMissionNotify = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v9);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( restricted )
  {
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                  (EventMissionActionAddMaster_o *)Instance,
                                  missionID,
                                  progressType,
                                  0);
  }
  else
  {
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)EventMissionActionAddMaster__GetEntityListFromIDnType(
                                  (EventMissionActionAddMaster_o *)Instance,
                                  missionID,
                                  progressType,
                                  0);
  }
  v13 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_37;
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v14 = MissionActionManager___c_TypeInfo;
    if ( !*(&MissionActionManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v11, v12);
      v14 = MissionActionManager___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__8_0 = (System_Predicate_object__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v14->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v14, v11, v12);
        static_fields = MissionActionManager___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_object____ctor(_9__8_0, v17, Method_MissionActionManager___c__setStatusMissionNotify_b__8_0__, 0);
      v18 = MissionActionManager___c_TypeInfo->static_fields;
      v18->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__8_0, (int32_t)_9__8_0, v19, v20, v21, v22, v23, v24);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v13,
           (System_Predicate_T__o *)_9__8_0,
           (const MethodInfo_448429C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      goto LABEL_35;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( restricted )
  {
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                  (EventMissionActionMaster_o *)Instance,
                                  missionID,
                                  progressType,
                                  0);
  }
  else
  {
    if ( !Instance )
      goto LABEL_37;
    Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                  (EventMissionActionMaster_o *)Instance,
                                  missionID,
                                  progressType,
                                  0);
  }
  v26 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
LABEL_37:
    sub_2213CDC(Instance, v11);
  if ( SLODWORD(Instance->fields.m_CancellationTokenSource) >= 1 )
  {
    v27 = MissionActionManager___c_TypeInfo;
    if ( !*(&MissionActionManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v11, v25);
      v27 = MissionActionManager___c_TypeInfo;
    }
    v28 = v27->static_fields;
    _9__8_1 = (System_Predicate_object__o *)v28->__9__8_1;
    if ( !_9__8_1 )
    {
      if ( !*(&v27->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v27, v11, v25);
        v28 = MissionActionManager___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)v28->__9;
      _9__8_1 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_object____ctor(_9__8_1, v30, Method_MissionActionManager___c__setStatusMissionNotify_b__8_1__, 0);
      v31 = MissionActionManager___c_TypeInfo->static_fields;
      v31->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->__9__8_1, (int32_t)_9__8_1, v32, v33, v34, v35, v36, v37);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v26,
           (System_Predicate_T__o *)_9__8_1,
           (const MethodInfo_448429C *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance->fields.masterDataBytes);
LABEL_35:
        this->fields.isStopMissionNotify = 1;
        return;
      }
      goto LABEL_37;
    }
  }
}


void MissionActionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A0FC & 1) == 0 )
  {
    sub_2213A60(&MissionActionManager___c_TypeInfo);
    byte_596A0FC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionActionManager___c_TypeInfo->static_fields,
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


bool MissionActionManager___c___checkScroll_b__9_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.missionActionType == 3;
}


bool MissionActionManager___c___checkScroll_b__9_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.missionActionType == 3;
}


bool MissionActionManager___c___setStatusMissionNotify_b__8_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.missionActionType == 6;
}


bool MissionActionManager___c___setStatusMissionNotify_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.missionActionType == 6;
}