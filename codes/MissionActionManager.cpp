void __fastcall MissionActionManager___ctor(MissionActionManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        MissionActionManager_o *this,
        bool onoff,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5E441 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4A5E441 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, onoff, 0LL);
}


void __fastcall MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.afterVoiceCallback,
      (int32_t)callback,
      (int32_t)method,
      v3);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall MissionActionManager__TerminateMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  System_Action_o *afterVoiceCallback; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4A5E443 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E443 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterVoiceCallback, 0, v4, v5);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v7, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4A5E442 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E442 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterVoiceCallback, 0, v5, v6);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v8, 0LL);
    }
  }
  else
  {
    this->fields.isVoicePlaying = 0;
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_0(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v10; // x1
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v12; // x0
  bool v13; // w1
  const MethodInfo *v14; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_4A5E444 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&Method_MissionActionManager_doMissionAction__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (MissionActionManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E444 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v6
    || (CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1B8880C(myFSM, v10);
  }
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    sub_1B88ACC(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v12, v13, v14);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_1(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v10; // x1
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_4A5E445 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_MissionActionManager_doMissionAction__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (MissionActionManager_o *)sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5E445 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v6
    || (CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, v8, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1B8880C(myFSM, v10);
  }
  methodPtr_low = LOBYTE(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_42100076(myFSM, 0LL);
  }
  else
  {
    sub_1B88ACC(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v12, v13);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v5; // w8

  if ( (byte_4A5E446 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5E446 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, method);
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


void __fastcall MissionActionManager__addMissionAction(
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
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  const MethodInfo_3278300 *v22; // x1
  System_Collections_Generic_List_Enumerator_object__o *v23; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x21
  Il2CppObject *v26; // x22
  EventMissionActionInfo_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  ServantStatusBattleListViewItem_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5E43D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1B885B0(&EventMissionActionInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E43D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_32;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v10 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType;
    v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      v10,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v42 = v40;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v42.fields._current;
      v13 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42169072(v13, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v11 )
        sub_1B8880C(v14, v15);
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B8880C(v14, v15);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v13,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v13;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
      }
    }
    v22 = (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v23 = &v42;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_32:
    sub_1B8880C(Instance, v8);
  }
  v24 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v24 )
    return;
  v25 = (System_Collections_Generic_List_object__o *)v24;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v25,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v26 = v41.fields._current;
    v27 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v27, (EventMissionActionEntity_o *)v26, 0LL);
    if ( !v11 )
      sub_1B8880C(v28, v29);
    v32 = v11->fields._items;
    v33 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
    ++v11->fields._version;
    if ( !v32 )
      sub_1B8880C(v28, v29);
    v34 = v11->fields._size;
    if ( (unsigned int)v34 >= v32->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v27,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->obj.klass + v34;
      v11->fields._size = v34 + 1;
      v35[4] = (Il2CppClass *)v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v27, v30, v31);
    }
  }
  v23 = &v41;
  v22 = (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v23, v22);
  if ( !v11 )
    goto LABEL_32;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (ServantStatusBattleListViewItem_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v11,
    eventMissionActionList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (ServantStatusBattleListViewItem_c *)v11;
  sub_1B88554(p_eventMissionActionList, (int32_t)v11, v38, v39);
}


bool __fastcall MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
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
  __int64 *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x0
  System_Predicate_T__o *v17; // x1
  MissionActionManager___c_c *v18; // x8
  DataManager_o *v19; // x19
  System_Predicate_object__o *_9__8_1; // x20
  Il2CppObject *v21; // x21
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5E43F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1B885B0(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_MissionActionManager___c__checkScroll_b__8_0__);
    sub_1B885B0(&Method_MissionActionManager___c__checkScroll_b__8_1__);
    sub_1B885B0(&MissionActionManager___c_TypeInfo);
    byte_4A5E43F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType
    || (v8 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v18 = MissionActionManager___c_TypeInfo;
        v19 = Instance;
        if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v18 = MissionActionManager___c_TypeInfo;
        }
        _9__8_1 = (System_Predicate_object__o *)v18->static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = MissionActionManager___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v18->static_fields->__9;
          _9__8_1 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_object____ctor(_9__8_1, v21, Method_MissionActionManager___c__checkScroll_b__8_1__, 0LL);
          static_fields = MissionActionManager___c_TypeInfo->static_fields;
          static_fields->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v23, v24);
        }
        if ( v19 )
        {
          v15 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v16 = (System_Collections_Generic_List_object__o *)v19;
          v17 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_object___Exists(v16, v17, (const MethodInfo_34FDE60 *)*v15);
        }
      }
    }
LABEL_25:
    sub_1B8880C(Instance, v6);
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
    _9__8_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v11, Method_MissionActionManager___c__checkScroll_b__8_0__, 0LL);
    v12 = MissionActionManager___c_TypeInfo->static_fields;
    v12->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->__9__8_0, (int32_t)_9__8_0, v13, v14);
  }
  v15 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v16 = v8;
  v17 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_object___Exists(v16, v17, (const MethodInfo_34FDE60 *)*v15);
}


void __fastcall MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventRewardRootComponent_o *optionId; // x23
  System_Action_c **v4; // x28
  UnityEngine_Object_c **v5; // x24
  __int64 *v6; // x26
  void *eventMissionActionList; // x0
  EventMissionActionInfo_o *v9; // x25
  __int64 v10; // x9
  __int64 v11; // x9
  Il2CppObject *v12; // x0
  Il2CppObject *Item; // x0
  UnityEngine_Object_c **v14; // x20
  __int64 *v15; // x24
  System_String_array *v16; // x25
  System_Action_c **v17; // x26
  System_Action_o *v18; // x28
  __int64 v19; // x9
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v21; // x19
  __int64 methodPtr_low; // x9
  System_String_o *ValMessage; // x20
  ScriptManager_CallbackFunc_o *v24; // x0
  __int64 *v25; // x8
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
  struct System_String_array *vals; // x21
  int32_t v38; // w8
  const MethodInfo *v39; // x2
  int max_length; // w8
  int v41; // w22
  ScriptManager_CallbackFunc_o *v42; // x21
  UnityEngine_Object_o *v43; // x20
  __int64 v44; // x8
  CompleteMissionListViewManager_o *v45; // x20
  int32_t ValID; // w21
  System_Action_o *v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x9
  __int64 v51; // x1
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v53; // w21
  System_Action_o *v54; // x22
  int32_t v55; // w0
  const MethodInfo *v56; // x3
  __int64 v57; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v59; // w22
  System_Action_o *v60; // x23
  EventRewardRootComponent_o *v61; // x20
  System_String_array *VoiceIds; // x21
  System_Action_o *v63; // x23
  System_Action_o *v64; // x24
  __int64 v65; // x9
  MasterMissionComponent_o *v66; // x20
  System_String_array *v67; // x21
  System_Action_o *v68; // x22
  MissionActionManager_o *v69; // x0
  int32_t v70; // w1
  int32_t v71; // w2
  const MethodInfo *v72; // x3

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  while ( 2 )
  {
    if ( (byte_4A5E440 & 1) == 0 )
    {
      sub_1B885B0(v4);
      sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
      sub_1B885B0(&EventRewardRootComponent_TypeInfo);
      sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
      sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      sub_1B885B0(&Method_MissionActionManager__doMissionAction_b__9_0__);
      sub_1B885B0(&Method_MissionActionManager__doMissionAction_b__9_1__);
      sub_1B885B0(&Method_MissionActionManager__doMissionAction_b__9_2__);
      sub_1B885B0(&Method_MissionActionManager__doMissionAction_b__9_3__);
      sub_1B885B0(&Method_MissionActionManager_VoiceEnds__);
      sub_1B885B0(v6);
      sub_1B885B0(v5);
      sub_1B885B0(&ScriptManager_TypeInfo);
      sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1B885B0(&TerminalTransitionInfo_TypeInfo);
      sub_1B885B0(&StringLiteral_1/*""*/);
      byte_4A5E440 = 1;
    }
    eventMissionActionList = this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_126;
    if ( *((int *)eventMissionActionList + 6) > 0 )
    {
      eventMissionActionList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                 0,
                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      if ( !this->fields.eventMissionActionList )
        goto LABEL_126;
      v9 = (EventMissionActionInfo_o *)eventMissionActionList;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
        0,
        (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      if ( !v9 )
        goto LABEL_126;
      switch ( v9->fields.missionActionType )
      {
        case 1:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            this->fields.isVoicePlaying = 0;
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
            if ( !eventMissionActionList )
              goto LABEL_126;
            methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)methodPtr_low
              || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL)
                                                + 8 * methodPtr_low
                                                - 8) != EventRewardRootComponent_TypeInfo )
            {
LABEL_127:
              sub_1B88ACC(eventMissionActionList);
LABEL_128:
              sub_1B88ACC(optionId);
LABEL_129:
              sub_1B88814(eventMissionActionList, method);
            }
            EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
            v24 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
            v25 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          }
          else
          {
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
              return;
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 173);
            if ( !eventMissionActionList )
              goto LABEL_126;
            MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
            v24 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
            v25 = &Method_MissionActionManager__doMissionAction_b__9_1__;
          }
          v42 = v24;
          ScriptManager_CallbackFunc___ctor(v24, (Il2CppObject *)this, *v25, 0LL);
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          ScriptManager__PlayScenario(ValMessage, v42, 0, 0LL);
          return;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v27 = EventMissionActionInfo__getValMessage(v9, 0LL);
          v28 = (System_Action_o *)sub_1B887FC(*v4);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
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
            0LL,
            0.0,
            0LL);
          return;
        case 3:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              v43 = (UnityEngine_Object_o *)*((_QWORD *)eventMissionActionList + 172);
              if ( !(*v5)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v5);
              if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v44 = *((_QWORD *)eventMissionActionList + 172);
                  if ( v44 )
                  {
                    v45 = *(CompleteMissionListViewManager_o **)(v44 + 72);
                    ValID = EventMissionActionInfo__getValID(v9, 0LL);
                    v47 = (System_Action_o *)sub_1B887FC(*v4);
                    System_Action___ctor(v47, (Il2CppObject *)this, *v6, 0LL);
                    if ( v45 )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(v45, ValID, v47, 0LL);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
                    return;
                  eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 173);
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0LL);
                      v53 = EventMissionActionInfo__getValID(v9, 0LL);
                      v54 = (System_Action_o *)sub_1B887FC(*v4);
                      System_Action___ctor(v54, (Il2CppObject *)this, *v6, 0LL);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v53, v54, 0LL);
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
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v55 = EventMissionActionInfo__getValID(v9, 0LL);
          MissionActionManager__addMissionAction(this, v55, 3, v56);
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v57 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) >= (unsigned int)v57
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v57 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v59 = EventMissionActionInfo__getValID(v9, 0LL);
            v60 = (System_Action_o *)sub_1B887FC(*v4);
            System_Action___ctor(v60, (Il2CppObject *)this, *v6, 0LL);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v9, v29, v59, v60, 0LL);
              return;
            }
            goto LABEL_126;
          }
          goto LABEL_127;
        case 4:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
            continue;
          optionId = (EventRewardRootComponent_o *)(unsigned int)v9->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_74;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v10 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v10
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v10 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *((_DWORD *)eventMissionActionList + 321) )
            continue;
LABEL_74:
          v34 = sub_1B887FC(TerminalTransitionInfo_TypeInfo);
          TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v34, 0LL);
          if ( !v34 )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          *(_DWORD *)(v34 + 16) = v9->fields.missionId;
          vals = v9->fields.vals;
          v38 = v9->fields.optionId;
          *(_QWORD *)(v34 + 32) = vals;
          *(_DWORD *)(v34 + 48) = v38;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)vals, v35, v36);
          if ( !vals )
            goto LABEL_126;
          max_length = vals->max_length;
          if ( max_length < 1 )
            goto LABEL_103;
          v41 = 0;
          while ( 2 )
          {
            if ( v41 >= (unsigned int)max_length )
              goto LABEL_129;
            eventMissionActionList = (void *)System_Int32__Parse(vals->m_Items[v41], 0LL);
            if ( (_DWORD)eventMissionActionList != 800 )
            {
              max_length = vals->max_length;
              v41 += 2;
              if ( v41 >= max_length )
                goto LABEL_103;
              continue;
            }
            break;
          }
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v50 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v50
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v50 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          v51 = *((_QWORD *)eventMissionActionList + 193);
          *(_QWORD *)(v34 + 40) = v51;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 40), v51, v48, v49);
LABEL_103:
          MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
            (MissionActionManager_o *)eventMissionActionList,
            0,
            v39);
          this->fields.isGoneTerminal = 1;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventMissionActionList,
            34,
            1,
            (Il2CppObject *)v34,
            0LL);
          goto LABEL_50;
        case 5:
          optionId = (EventRewardRootComponent_o *)(unsigned int)v9->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_24;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v11 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v11
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v11 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *((_DWORD *)eventMissionActionList + 321) )
            continue;
LABEL_24:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
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
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( Item )
            {
              if ( HIDWORD(Item[1].monitor) == 8 )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v61 = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 4);
                  VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0LL);
                  v63 = (System_Action_o *)sub_1B887FC(*v4);
                  System_Action___ctor(v63, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                  v64 = (System_Action_o *)sub_1B887FC(*v4);
                  System_Action___ctor(v64, (Il2CppObject *)this, *v6, 0LL);
                  if ( v61 )
                  {
                    v65 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v61->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v65
                      && (EventRewardRootComponent_c *)v61->klass->_2.typeHierarchy[v65 - 1] == EventRewardRootComponent_TypeInfo )
                    {
                      EventRewardRootComponent__playEventMissionSvtVoice_45969280(v61, VoiceIds, v63, v64, 0LL);
                    }
                    else
                    {
                      sub_1B88ACC(v61);
                      MissionActionManager__addMissionAction(v69, v70, v71, v72);
                    }
                    return;
                  }
                }
LABEL_126:
                sub_1B8880C(eventMissionActionList, method);
              }
            }
          }
          v14 = v5;
          v15 = v6;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 4);
          v16 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
          v17 = v4;
          v18 = (System_Action_o *)sub_1B887FC(*v4);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
          if ( !optionId )
            goto LABEL_126;
          v19 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(optionId->klass->vtable._0_Equals.methodPtr) < (unsigned int)v19
            || (EventRewardRootComponent_c *)optionId->klass->_2.typeHierarchy[v19 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_128;
          }
          EventRewardRootComponent__playEventMissionSvtVoice(optionId, v16, v18, 0LL);
          v4 = v17;
          v6 = v15;
          v5 = v14;
          continue;
        case 6:
          v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = v9->fields.vals;
          v32 = (CommonUI_o *)v30;
          v33 = (System_Action_o *)sub_1B887FC(*v4);
          System_Action___ctor(v33, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
          if ( !v32 )
            goto LABEL_126;
          CommonUI__OpenImageDialogWithAssets(v32, v31, v33, 0LL, 0LL, 0LL);
          return;
        case 7:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 172);
          if ( !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
            continue;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            continue;
          eventMissionActionList = this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( *((int *)eventMissionActionList + 6) >= 1 )
          {
            v12 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventMissionActionList,
                    0,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( v12 )
            {
              if ( HIDWORD(v12[1].monitor) == 8 )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v66 = (MasterMissionComponent_o *)*((_QWORD *)eventMissionActionList + 173);
                  v67 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
                  v68 = (System_Action_o *)sub_1B887FC(*v4);
                  System_Action___ctor(v68, (Il2CppObject *)this, *v6, 0LL);
                  if ( v66 )
                  {
                    MasterMissionComponent__playEventMissionSvtVoice_43337920(v66, v67, v68, 0LL);
                    return;
                  }
                }
                goto LABEL_126;
              }
            }
          }
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 173);
          eventMissionActionList = EventMissionActionInfo__getVoiceIds(v9, 0LL);
          if ( !optionId )
            goto LABEL_126;
          MasterMissionComponent__playEventMissionSvtVoice(
            (MasterMissionComponent_o *)optionId,
            (System_String_array *)eventMissionActionList,
            0LL);
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
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5);
      UnityEngine_Object__Destroy_69459380(v21, 0LL);
    }
  }
}


void __fastcall MissionActionManager__setMissionAction(
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v17; // x24
  EventMissionActionInfo_o *v18; // x25
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 *v27; // x8
  System_Collections_Generic_List_Enumerator_object__o *v28; // x0
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x23
  System_Collections_Generic_List_object__o *v32; // x21
  EventMissionActionInfo_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5E43C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_1B885B0(&EventMissionActionInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E43C = 1;
  }
  memset(&v44, 0, sizeof(v44));
  memset(&v43, 0, sizeof(v43));
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v9;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventMissionActionList, (int32_t)v9, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B8880C(Instance, v14);
  }
  if ( restricted )
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
  }
  else
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
  }
  if ( SafeActionListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      SafeActionListFromIDnType,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v44 = v42;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v44.fields._current;
      v17 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v18 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_42169072(v18, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v17 )
        sub_1B8880C(v19, v20);
      items = v17->fields._items;
      v24 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1B8880C(v19, v20);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
      }
    }
    v27 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v28 = &v44;
    goto LABEL_35;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( restricted )
  {
    EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                                                           (EventMissionActionMaster_o *)Instance,
                                                                           missionID,
                                                                           progressType,
                                                                           0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_36;
  }
  else
  {
    EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getEntityListFromIDnType(
                                                                           (EventMissionActionMaster_o *)Instance,
                                                                           missionID,
                                                                           progressType,
                                                                           0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_36;
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      EntityListFromIDnType,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v31 = v43.fields._current;
      v32 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v33 = (EventMissionActionInfo_o *)sub_1B887FC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v33, (EventMissionActionEntity_o *)v31, 0LL);
      if ( !v32 )
        sub_1B8880C(v34, v35);
      v38 = v32->fields._items;
      v39 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v32->fields._version;
      if ( !v38 )
        sub_1B8880C(v34, v35);
      v40 = v32->fields._size;
      if ( (unsigned int)v40 >= v38->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)v33,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &v38->obj.klass + v40;
        v32->fields._size = v40 + 1;
        v41[4] = (Il2CppClass *)v33;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v33, v36, v37);
      }
    }
    v27 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v28 = &v43;
LABEL_35:
    System_Collections_Generic_List_Enumerator_object___Dispose(v28, (const MethodInfo_3278300 *)*v27);
  }
LABEL_36:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v30);
}


void __fastcall MissionActionManager__setStatusMissionNotify(
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
  System_Collections_Generic_List_object__o *v18; // x20
  MissionActionManager___c_c *v19; // x0
  System_Predicate_object__o *_9__7_1; // x21
  Il2CppObject *v21; // x22
  struct MissionActionManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5E43E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_1B885B0(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__);
    sub_1B885B0(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__);
    sub_1B885B0(&MissionActionManager___c_TypeInfo);
    byte_4A5E43E = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)(restricted
                            ? EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                (EventMissionActionAddMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL)
                            : EventMissionActionAddMaster__GetEntityListFromIDnType(
                                (EventMissionActionAddMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL));
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
      _9__7_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__7_0,
        v14,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        0LL);
      static_fields = MissionActionManager___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v11,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_34FDE60 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)(restricted
                            ? EventMissionActionMaster__getSafeActionListFromIDnType(
                                (EventMissionActionMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL)
                            : EventMissionActionMaster__getEntityListFromIDnType(
                                (EventMissionActionMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL));
  v18 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v19 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v19 = MissionActionManager___c_TypeInfo;
    }
    _9__7_1 = (System_Predicate_object__o *)v19->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = MissionActionManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__7_1 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__7_1,
        v21,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        0LL);
      v22 = MissionActionManager___c_TypeInfo->static_fields;
      v22->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__7_1, (int32_t)_9__7_1, v23, v24);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v18,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_34FDE60 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance[3].monitor);
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_35:
      sub_1B8880C(Instance, v10);
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E447 & 1) == 0 )
  {
    sub_1B885B0(&MissionActionManager___c_TypeInfo);
    byte_4A5E447 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MissionActionManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall MissionActionManager___c___ctor(MissionActionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.missionActionType == 6;
}