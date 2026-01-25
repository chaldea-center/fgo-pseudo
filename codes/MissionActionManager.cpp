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

  if ( (byte_4CE8418 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4CE8418 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, onoff, 0);
}


void MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_1C7BA8C(&this->fields.afterVoiceCallback, callback);
  }
  else
  {
    ActionExtensions__Call(callback, 0);
  }
}


void MissionActionManager__TerminateMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  System_Action_o *afterVoiceCallback; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4CE841A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE841A = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0);
    this->fields.afterVoiceCallback = 0;
    sub_1C7BA8C(&this->fields.afterVoiceCallback, 0);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v5, 0);
  }
}


void MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4CE8419 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8419 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0);
      this->fields.afterVoiceCallback = 0;
      sub_1C7BA8C(&this->fields.afterVoiceCallback, 0);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v6, 0);
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
  if ( (byte_4CE841B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&EventRewardRootComponent_TypeInfo);
    sub_1C7BAE8(&Method_MissionActionManager_doMissionAction__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (MissionActionManager_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CE841B = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v8, v3, Method_MissionActionManager_doMissionAction__, 0);
  if ( !v6
    || (CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0 )
  {
    sub_1C7BD40(myFSM, v10);
  }
  naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
  if ( myFSM->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[naturalAligment - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0);
  }
  else
  {
    v12 = (MissionActionManager_o *)sub_1C7C0DC(myFSM);
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
  if ( (byte_4CE841C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AvalonSceneManager_TypeInfo);
    sub_1C7BAE8(&Method_MissionActionManager_doMissionAction__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (MissionActionManager_o *)sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE841C = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v8, v3, Method_MissionActionManager_doMissionAction__, 0);
  if ( !v6
    || (CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0 )
  {
    sub_1C7BD40(myFSM, v10);
  }
  naturalAligment = TerminalSceneComponent_TypeInfo->_2.naturalAligment;
  if ( myFSM->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[naturalAligment - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_45868472(myFSM, 0);
  }
  else
  {
    v12 = (MissionActionManager_o *)sub_1C7C0DC(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v12, v13);
  }
}


void MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v5; // w8

  if ( (byte_4CE841D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CE841D = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, method);
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
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo_35BDF94 *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o *v21; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x21
  Il2CppObject *v24; // x22
  EventMissionActionInfo_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CE8414 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1C7BAE8(&EventMissionActionInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8414 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      v10,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v36 = v34;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v36.fields._current;
      v13 = (EventMissionActionInfo_o *)sub_1C7BD34(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_46391936(v13, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v11 )
        sub_1C7BD40(v14, v15);
      items = v11->fields._items;
      v17 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C7BD40(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v13,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v13;
        sub_1C7BA8C(v19 + 4, v13);
      }
    }
    v20 = (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v21 = &v36;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0 )
  {
LABEL_32:
    sub_1C7BD40(Instance, v8);
  }
  v22 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0);
  if ( !v22 )
    return;
  v23 = (System_Collections_Generic_List_object__o *)v22;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v23,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v24 = v35.fields._current;
    v25 = (EventMissionActionInfo_o *)sub_1C7BD34(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v25, (EventMissionActionEntity_o *)v24, 0);
    if ( !v11 )
      sub_1C7BD40(v26, v27);
    v28 = v11->fields._items;
    v29 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
    ++v11->fields._version;
    if ( !v28 )
      sub_1C7BD40(v26, v27);
    v30 = v11->fields._size;
    if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v25,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->obj.klass + v30;
      v11->fields._size = v30 + 1;
      v31[4] = (Il2CppClass *)v25;
      sub_1C7BA8C(v31 + 4, v25);
    }
  }
  v21 = &v35;
  v20 = (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v21, v20);
  if ( !v11 )
    goto LABEL_32;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v11,
    eventMissionActionList,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  *p_eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v11;
  sub_1C7BA8C(p_eventMissionActionList, v11);
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
  __int64 *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x0
  System_Predicate_T__o *v15; // x1
  MissionActionManager___c_c *v16; // x8
  DataManager_o *v17; // x19
  System_Predicate_object__o *_9__8_1; // x20
  Il2CppObject *v19; // x21
  struct MissionActionManager___c_StaticFields *static_fields; // x0

  if ( (byte_4CE8416 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C7BAE8(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_1C7BAE8(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_MissionActionManager___c__checkScroll_b__8_0__);
    sub_1C7BAE8(&Method_MissionActionManager___c__checkScroll_b__8_1__);
    sub_1C7BAE8(&MissionActionManager___c_TypeInfo);
    byte_4CE8416 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0);
        v16 = MissionActionManager___c_TypeInfo;
        v17 = Instance;
        if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          Instance = (DataManager_o *)j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v16 = MissionActionManager___c_TypeInfo;
        }
        _9__8_1 = (System_Predicate_object__o *)v16->static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = MissionActionManager___c_TypeInfo;
          }
          v19 = (Il2CppObject *)v16->static_fields->__9;
          _9__8_1 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_object____ctor(_9__8_1, v19, Method_MissionActionManager___c__checkScroll_b__8_1__, 0);
          static_fields = MissionActionManager___c_TypeInfo->static_fields;
          static_fields->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          Instance = (DataManager_o *)sub_1C7BA8C(&static_fields->__9__8_1, _9__8_1);
        }
        if ( v17 )
        {
          v13 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v14 = (System_Collections_Generic_List_object__o *)v17;
          v15 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_object___Exists(v14, v15, (const MethodInfo_383F428 *)*v13);
        }
      }
    }
LABEL_25:
    sub_1C7BD40(Instance, v6);
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
    _9__8_0 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v11, Method_MissionActionManager___c__checkScroll_b__8_0__, 0);
    v12 = MissionActionManager___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_1C7BA8C(&v12->__9__8_0, _9__8_0);
  }
  v13 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v14 = v8;
  v15 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_object___Exists(v14, v15, (const MethodInfo_383F428 *)*v13);
}


void MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventRewardRootComponent_o *optionId; // x23
  System_Action_c **v4; // x28
  UnityEngine_Object_c **v5; // x24
  intptr_t *v6; // x26
  __int64 eventMissionActionList; // x0
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
  TerminalTransitionInfo_o *v34; // x20
  struct System_String_array *vals; // x21
  int32_t v36; // w8
  const MethodInfo *v37; // x2
  int max_length; // w8
  int v39; // w22
  ScriptManager_CallbackFunc_o *v40; // x21
  UnityEngine_Object_o *v41; // x20
  __int64 v42; // x8
  CompleteMissionListViewManager_o *v43; // x20
  int32_t ValID; // w21
  System_Action_o *v45; // x22
  __int64 v46; // x9
  struct System_String_o *v47; // x1
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v49; // w21
  System_Action_o *v50; // x22
  int32_t v51; // w0
  const MethodInfo *v52; // x3
  __int64 v53; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v55; // w22
  System_Action_o *v56; // x23
  EventRewardRootComponent_o *v57; // x20
  System_String_array *VoiceIds; // x21
  System_Action_o *v59; // x23
  System_Action_o *v60; // x24
  __int64 v61; // x9
  MasterMissionComponent_o *v62; // x20
  System_String_array *v63; // x21
  System_Action_o *v64; // x22
  MissionActionManager_o *v65; // x0
  int32_t v66; // w1
  int32_t v67; // w2
  const MethodInfo *v68; // x3

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  while ( 2 )
  {
    if ( (byte_4CE8417 & 1) == 0 )
    {
      sub_1C7BAE8(v4);
      sub_1C7BAE8(&ScriptManager_CallbackFunc_TypeInfo);
      sub_1C7BAE8(&EventRewardRootComponent_TypeInfo);
      sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
      sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      sub_1C7BAE8(&Method_MissionActionManager__doMissionAction_b__9_0__);
      sub_1C7BAE8(&Method_MissionActionManager__doMissionAction_b__9_1__);
      sub_1C7BAE8(&Method_MissionActionManager__doMissionAction_b__9_2__);
      sub_1C7BAE8(&Method_MissionActionManager__doMissionAction_b__9_3__);
      sub_1C7BAE8(&Method_MissionActionManager_VoiceEnds__);
      sub_1C7BAE8(v6);
      sub_1C7BAE8(v5);
      sub_1C7BAE8(&ScriptManager_TypeInfo);
      sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1C7BAE8(&TerminalTransitionInfo_TypeInfo);
      sub_1C7BAE8(&StringLiteral_1/*""*/);
      byte_4CE8417 = 1;
    }
    eventMissionActionList = (__int64)this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_126;
    if ( *(int *)(eventMissionActionList + 24) > 0 )
    {
      eventMissionActionList = (__int64)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                          0,
                                          (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      if ( !this->fields.eventMissionActionList )
        goto LABEL_126;
      v9 = (EventMissionActionInfo_o *)eventMissionActionList;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
        0,
        (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      if ( !v9 )
        goto LABEL_126;
      switch ( v9->fields.missionActionType )
      {
        case 1:
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
          {
            this->fields.isVoicePlaying = 0;
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
            if ( !eventMissionActionList )
              goto LABEL_126;
            naturalAligment = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)naturalAligment
              || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL)
                                                + 8 * naturalAligment
                                                - 8) != EventRewardRootComponent_TypeInfo )
            {
LABEL_127:
              sub_1C7C0DC(eventMissionActionList);
LABEL_128:
              eventMissionActionList = sub_1C7C0DC(optionId);
LABEL_129:
              sub_1C7BD48(eventMissionActionList);
            }
            EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0);
            ValMessage = EventMissionActionInfo__getValMessage(v9, 0);
            v24 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
            v25 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          }
          else
          {
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
              return;
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1360);
            if ( !eventMissionActionList )
              goto LABEL_126;
            MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0);
            ValMessage = EventMissionActionInfo__getValMessage(v9, 0);
            v24 = (ScriptManager_CallbackFunc_o *)sub_1C7BD34(ScriptManager_CallbackFunc_TypeInfo);
            v25 = &Method_MissionActionManager__doMissionAction_b__9_1__;
          }
          v40 = v24;
          ScriptManager_CallbackFunc___ctor(v24, (Il2CppObject *)this, *v25, 0);
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          ScriptManager__PlayScenario(ValMessage, v40, 0, 0);
          return;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = EventMissionActionInfo__getValMessage(v9, 0);
          v28 = (System_Action_o *)sub_1C7BD34(*v4);
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
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
          {
            eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              v41 = *(UnityEngine_Object_o **)(eventMissionActionList + 1352);
              if ( !(*v5)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v5);
              if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
              {
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v42 = *(_QWORD *)(eventMissionActionList + 1352);
                  if ( v42 )
                  {
                    v43 = *(CompleteMissionListViewManager_o **)(v42 + 72);
                    ValID = EventMissionActionInfo__getValID(v9, 0);
                    v45 = (System_Action_o *)sub_1C7BD34(*v4);
                    System_Action___ctor(v45, (Il2CppObject *)this, *v6, 0);
                    if ( v43 )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(v43, ValID, v45, 0);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
                    return;
                  eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1360);
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0);
                      v49 = EventMissionActionInfo__getValID(v9, 0);
                      v50 = (System_Action_o *)sub_1C7BD34(*v4);
                      System_Action___ctor(v50, (Il2CppObject *)this, *v6, 0);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v49, v50, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_126;
          }
          eventMissionActionList = (__int64)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v29 = *(int *)(eventMissionActionList + 24) < 1
              ? 0LL
              : (EventMissionActionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                              0,
                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v51 = EventMissionActionInfo__getValID(v9, 0);
          MissionActionManager__addMissionAction(this, v51, 3, v52);
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v53 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) >= (unsigned int)v53
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v53 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0);
            v55 = EventMissionActionInfo__getValID(v9, 0);
            v56 = (System_Action_o *)sub_1C7BD34(*v4);
            System_Action___ctor(v56, (Il2CppObject *)this, *v6, 0);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v9, v29, v55, v56, 0);
              return;
            }
            goto LABEL_126;
          }
          goto LABEL_127;
        case 4:
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
            continue;
          optionId = (EventRewardRootComponent_o *)(unsigned int)v9->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_74;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v10 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v10
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v10 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *(_DWORD *)(eventMissionActionList + 1316) )
            continue;
LABEL_74:
          v34 = (TerminalTransitionInfo_o *)sub_1C7BD34(TerminalTransitionInfo_TypeInfo);
          TerminalTransitionInfo___ctor(v34, 0);
          if ( !v34 )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          v34->fields.missionId = v9->fields.missionId;
          vals = v9->fields.vals;
          v36 = v9->fields.optionId;
          v34->fields.afterActionVals = vals;
          v34->fields.optionId = v36;
          eventMissionActionList = sub_1C7BA8C(&v34->fields.afterActionVals, vals);
          if ( !vals )
            goto LABEL_126;
          max_length = vals->max_length;
          if ( max_length < 1 )
            goto LABEL_103;
          v39 = 0;
          while ( 2 )
          {
            if ( v39 >= (unsigned int)max_length )
              goto LABEL_129;
            eventMissionActionList = System_Int32__Parse(vals->m_Items[v39], 0);
            if ( (_DWORD)eventMissionActionList != 800 )
            {
              max_length = vals->max_length;
              v39 += 2;
              if ( v39 >= max_length )
                goto LABEL_103;
              continue;
            }
            break;
          }
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v46 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v46
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v46 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          v47 = *(struct System_String_o **)(eventMissionActionList + 1576);
          v34->fields.voiceAssetName = v47;
          eventMissionActionList = sub_1C7BA8C(&v34->fields.voiceAssetName, v47);
LABEL_103:
          MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
            (MissionActionManager_o *)eventMissionActionList,
            0,
            v37);
          this->fields.isGoneTerminal = 1;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 32);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v11 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v11
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v11 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *(_DWORD *)(eventMissionActionList + 1316) )
            continue;
LABEL_24:
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0) )
            continue;
          eventMissionActionList = (__int64)this->fields.eventMissionActionList;
          this->fields.isVoicePlaying = 1;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( *(int *)(eventMissionActionList + 24) >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)eventMissionActionList,
                     0,
                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( Item )
            {
              if ( HIDWORD(Item[1].monitor) == 8 )
              {
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v57 = *(EventRewardRootComponent_o **)(eventMissionActionList + 32);
                  VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0);
                  v59 = (System_Action_o *)sub_1C7BD34(*v4);
                  System_Action___ctor(v59, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0);
                  v60 = (System_Action_o *)sub_1C7BD34(*v4);
                  System_Action___ctor(v60, (Il2CppObject *)this, *v6, 0);
                  if ( v57 )
                  {
                    v61 = EventRewardRootComponent_TypeInfo->_2.naturalAligment;
                    if ( v57->klass->_2.naturalAligment >= (unsigned int)v61
                      && (EventRewardRootComponent_c *)v57->klass->_2.typeHierarchy[v61 - 1] == EventRewardRootComponent_TypeInfo )
                    {
                      EventRewardRootComponent__playEventMissionSvtVoice_32579652(v57, VoiceIds, v59, v60, 0);
                    }
                    else
                    {
                      v65 = (MissionActionManager_o *)sub_1C7C0DC(v57);
                      MissionActionManager__addMissionAction(v65, v66, v67, v68);
                    }
                    return;
                  }
                }
LABEL_126:
                sub_1C7BD40(eventMissionActionList, method);
              }
            }
          }
          v14 = v5;
          v15 = v6;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = *(EventRewardRootComponent_o **)(eventMissionActionList + 32);
          v16 = EventMissionActionInfo__getVoiceIds(v9, 0);
          v17 = v4;
          v18 = (System_Action_o *)sub_1C7BD34(*v4);
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
          v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = v9->fields.vals;
          v32 = (CommonUI_o *)v30;
          v33 = (System_Action_o *)sub_1C7BD34(*v4);
          System_Action___ctor(v33, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0);
          if ( !v32 )
            goto LABEL_126;
          CommonUI__OpenImageDialogWithAssets(v32, v31, v33, 0, 0, 0);
          return;
        case 7:
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = *(EventRewardRootComponent_o **)(eventMissionActionList + 1352);
          if ( !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0, 0) )
            continue;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0) )
            continue;
          eventMissionActionList = (__int64)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( *(int *)(eventMissionActionList + 24) >= 1 )
          {
            v12 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventMissionActionList,
                    0,
                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( v12 )
            {
              if ( HIDWORD(v12[1].monitor) == 8 )
              {
                eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v62 = *(MasterMissionComponent_o **)(eventMissionActionList + 1360);
                  v63 = EventMissionActionInfo__getVoiceIds(v9, 0);
                  v64 = (System_Action_o *)sub_1C7BD34(*v4);
                  System_Action___ctor(v64, (Il2CppObject *)this, *v6, 0);
                  if ( v62 )
                  {
                    MasterMissionComponent__playEventMissionSvtVoice_47459804(v62, v63, v64, 0);
                    return;
                  }
                }
                goto LABEL_126;
              }
            }
          }
          eventMissionActionList = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = *(EventRewardRootComponent_o **)(eventMissionActionList + 1360);
          eventMissionActionList = (__int64)EventMissionActionInfo__getVoiceIds(v9, 0);
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
      UnityEngine_Object__Destroy_71870148(v21, 0);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v15; // x24
  EventMissionActionInfo_o *v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  __int64 *v23; // x8
  System_Collections_Generic_List_Enumerator_object__o *v24; // x0
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v26; // x1
  Il2CppObject *v27; // x23
  System_Collections_Generic_List_object__o *v28; // x21
  EventMissionActionInfo_o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4CE8413 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1C7BAE8(&EventMissionActionInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8413 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  v9 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v9;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_1C7BA8C(&this->fields.eventMissionActionList, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0 )
  {
LABEL_39:
    sub_1C7BD40(Instance, v12);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      SafeActionListFromIDnType,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v38 = v36;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v38.fields._current;
      v15 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v16 = (EventMissionActionInfo_o *)sub_1C7BD34(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_46391936(v16, (EventMissionActionAddEntity_o *)current, 0);
      if ( !v15 )
        sub_1C7BD40(v17, v18);
      items = v15->fields._items;
      v20 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1C7BD40(v17, v18);
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v16,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v16;
        sub_1C7BA8C(v22 + 4, v16);
      }
    }
    v23 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v24 = &v38;
    goto LABEL_35;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      EntityListFromIDnType,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v27 = v37.fields._current;
      v28 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v29 = (EventMissionActionInfo_o *)sub_1C7BD34(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v29, (EventMissionActionEntity_o *)v27, 0);
      if ( !v28 )
        sub_1C7BD40(v30, v31);
      v32 = v28->fields._items;
      v33 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v28->fields._version;
      if ( !v32 )
        sub_1C7BD40(v30, v31);
      v34 = v28->fields._size;
      if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v29,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &v32->obj.klass + v34;
        v28->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1C7BA8C(v35 + 4, v29);
      }
    }
    v23 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v24 = &v37;
LABEL_35:
    System_Collections_Generic_List_Enumerator_object___Dispose(v24, (const MethodInfo_35BDF94 *)*v23);
  }
LABEL_36:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v26);
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
  System_Collections_Generic_List_object__o *v16; // x20
  MissionActionManager___c_c *v17; // x0
  System_Predicate_object__o *_9__7_1; // x21
  Il2CppObject *v19; // x22
  struct MissionActionManager___c_StaticFields *v20; // x0

  if ( (byte_4CE8415 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_1C7BAE8(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_1C7BAE8(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C7BAE8(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__);
    sub_1C7BAE8(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__);
    sub_1C7BAE8(&MissionActionManager___c_TypeInfo);
    byte_4CE8415 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      _9__7_0 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_object____ctor(_9__7_0, v14, Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, 0);
      static_fields = MissionActionManager___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_1C7BA8C(&static_fields->__9__7_0, _9__7_0);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v11,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_383F428 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
  v16 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v17 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v17 = MissionActionManager___c_TypeInfo;
    }
    _9__7_1 = (System_Predicate_object__o *)v17->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = MissionActionManager___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__7_1 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_object____ctor(_9__7_1, v19, Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, 0);
      v20 = MissionActionManager___c_TypeInfo->static_fields;
      v20->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_1C7BA8C(&v20->__9__7_1, _9__7_1);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v16,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_383F428 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance[3].monitor);
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_35:
      sub_1C7BD40(Instance, v10);
    }
  }
}


void MissionActionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE841E & 1) == 0 )
  {
    sub_1C7BAE8(&MissionActionManager___c_TypeInfo);
    byte_4CE841E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v1;
  sub_1C7BA8C(MissionActionManager___c_TypeInfo->static_fields, v1);
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
    sub_1C7BD40(this, 0);
  return x->fields.missionActionType == 3;
}


bool MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.missionActionType == 3;
}


bool MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.missionActionType == 6;
}


bool MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.missionActionType == 6;
}