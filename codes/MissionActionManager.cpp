void __fastcall MissionActionManager___ctor(MissionActionManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        MissionActionManager_o *this,
        bool onoff,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_43504CC & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_43504CC = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  AutomatedAction__SetBackGroundUntouchable(Instance, onoff, 0LL);
}


void __fastcall MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.afterVoiceCallback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall MissionActionManager__TerminateMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  System_Action_o *afterVoiceCallback; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v11; // x19

  if ( (byte_43504CE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43504CE = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v4, v5, v6, v7, v8, v9);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v11, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_43504CD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43504CD = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v5, v6, v7, v8, v9, v10);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v12, 0LL);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  MissionActionManager_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_43504CF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&EventRewardRootComponent_TypeInfo);
    sub_B70694(&Method_MissionActionManager_doMissionAction__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (MissionActionManager_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43504CF = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v7, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B7076C(myFSM, v9);
  }
  v10 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[v10 - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    v11 = (MissionActionManager_o *)sub_B70A60(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v11, v12, v13);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_1(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v5; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  MissionActionManager_o *v11; // x0
  const MethodInfo *v12; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_43504D0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_MissionActionManager_doMissionAction__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (MissionActionManager_o *)sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_43504D0 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v7, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B7076C(myFSM, v9);
  }
  v10 = *(&TerminalSceneComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[v10 - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_18546388(myFSM, 0LL);
  }
  else
  {
    v11 = (MissionActionManager_o *)sub_B70A60(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v11, v12);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_43504D1 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_43504D1 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v3 )
      sub_B7076C(0LL, v4);
    MissionNotifyManager__EndPause(v3, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v10; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 *v16; // x8
  System_Collections_Generic_List_Enumerator_T__o *v17; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v18; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v19; // x21
  Il2CppObject *v20; // x22
  EventMissionActionInfo_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  BattleServantConfConponent_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_43504C8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_B70694(&EventMissionActionInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504C8 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v10 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromIDnType;
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      v10,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v33.fields.current;
      v13 = (EventMissionActionInfo_o *)sub_B70764(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27396076(v13, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v11 )
        sub_B7076C(v14, v15);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v16 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v17 = &v33;
    goto LABEL_19;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_24:
    sub_B7076C(Instance, v8);
  }
  v18 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v18 )
    return;
  v19 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    v19,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v20 = v32.fields.current;
    v21 = (EventMissionActionInfo_o *)sub_B70764(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v21, (EventMissionActionEntity_o *)v20, 0LL);
    if ( !v11 )
      sub_B7076C(v22, v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
  }
  v16 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
  v17 = &v32;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    v17,
    (const MethodInfo_22212C8 *)*v16);
  if ( !v11 )
    goto LABEL_24;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (BattleServantConfConponent_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
    eventMissionActionList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (BattleServantConfConponent_c *)v11;
  sub_B70630(p_eventMissionActionList, (System_Int32_array **)v11, v26, v27, v28, v29, v30, v31);
}


bool __fastcall MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *v8; // x21
  MissionActionManager___c_c *v9; // x0
  struct MissionActionManager___c_StaticFields *v10; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_0; // x19
  Il2CppObject *v12; // x20
  struct MissionActionManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 *v20; // x8
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v21; // x0
  System_Predicate_T__o *v22; // x1
  DataManager_o *v23; // x19
  MissionActionManager___c_c *v24; // x8
  struct MissionActionManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_1; // x20
  Il2CppObject *v27; // x21
  struct MissionActionManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_43504CA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_B70694(&Method_System_Predicate_EventMissionActionEntity___ctor__);
    sub_B70694(&Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_B70694(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_MissionActionManager___c__checkScroll_b__8_0__);
    sub_B70694(&Method_MissionActionManager___c__checkScroll_b__8_1__);
    sub_B70694(&MissionActionManager___c_TypeInfo);
    byte_43504CA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType || (v8 = EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v23 = Instance;
        v24 = MissionActionManager___c_TypeInfo;
        if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v24 = MissionActionManager___c_TypeInfo;
        }
        static_fields = v24->static_fields;
        _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            static_fields = MissionActionManager___c_TypeInfo->static_fields;
          }
          v27 = (Il2CppObject *)static_fields->__9;
          _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__8_1,
            v27,
            Method_MissionActionManager___c__checkScroll_b__8_1__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
          v28 = MissionActionManager___c_TypeInfo->static_fields;
          v28->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_B70630(
            (BattleServantConfConponent_o *)&v28->__9__8_1,
            (System_Int32_array **)_9__8_1,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
        }
        if ( v23 )
        {
          v20 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v21 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v23;
          v22 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                   v21,
                   v22,
                   (const MethodInfo_3025F14 *)*v20);
        }
      }
    }
LABEL_29:
    sub_B7076C(Instance, v6);
  }
  v9 = MissionActionManager___c_TypeInfo;
  if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v9 = MissionActionManager___c_TypeInfo;
  }
  v10 = v9->static_fields;
  _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v10->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v10 = MissionActionManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)v10->__9;
    _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__8_0,
      v12,
      Method_MissionActionManager___c__checkScroll_b__8_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    v13 = MissionActionManager___c_TypeInfo->static_fields;
    v13->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v21 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v8;
  v22 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(v21, v22, (const MethodInfo_3025F14 *)*v20);
}


void __fastcall MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 optionId; // x20
  System_Action_c **v4; // x23
  UnityEngine_Object_c **v5; // x26
  __int64 *v6; // x27
  ScriptManager_c **v7; // x28
  EventMissionActionInfo_o *v9; // x25
  __int64 eventMissionActionList; // x0
  __int64 v11; // x9
  __int64 v12; // x8
  UnityEngine_Object_c *v13; // x0
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v14; // x8
  EventMissionActionInfo_o *v15; // x8
  __int64 v16; // x9
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v17; // x8
  EventMissionActionInfo_o *v18; // x8
  ScriptManager_c **v19; // x22
  UnityEngine_Object_c **v20; // x28
  __int64 *v21; // x26
  System_String_array *v22; // x25
  System_Action_c **v23; // x27
  System_Action_o *v24; // x23
  __int64 v25; // x9
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v27; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_String_array *vals; // x21
  const MethodInfo *v35; // x2
  int max_length; // w8
  int v37; // w22
  __int64 v38; // x9
  System_String_o *ValMessage; // x20
  ScriptManager_CallbackFunc_o *v40; // x0
  __int64 *v41; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v43; // x21
  System_Action_o *v44; // x22
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v45; // x8
  WebViewManager_o *v46; // x0
  System_String_array *v47; // x20
  CommonUI_o *v48; // x21
  System_Action_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x9
  System_Int32_array **v57; // x1
  ScriptManager_CallbackFunc_o *v58; // x21
  ScriptManager_c *v59; // x0
  __int64 v60; // x8
  UnityEngine_Object_c *v61; // x0
  UnityEngine_Object_o *v62; // x20
  __int64 v63; // x8
  CompleteMissionListViewManager_o *v64; // x20
  int32_t v65; // w21
  System_Action_o *v66; // x22
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v68; // w21
  System_Action_o *v69; // x22
  System_String_array *VoiceIds; // x21
  System_Action_o *v71; // x22
  System_Action_o *v72; // x23
  __int64 v73; // x9
  int32_t ValID; // w0
  const MethodInfo *v75; // x3
  __int64 v76; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v78; // w22
  System_Action_o *v79; // x23
  MasterMissionComponent_o *v80; // x20
  System_String_array *v81; // x21
  System_Action_o *v82; // x22
  __int64 v83; // x0

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  v7 = &ScriptManager_TypeInfo;
  while ( 2 )
  {
    if ( (byte_43504CB & 1) == 0 )
    {
      sub_B70694(v4);
      sub_B70694(&ScriptManager_CallbackFunc_TypeInfo);
      sub_B70694(&EventRewardRootComponent_TypeInfo);
      sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__);
      sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      sub_B70694(&Method_MissionActionManager__doMissionAction_b__9_0__);
      sub_B70694(&Method_MissionActionManager__doMissionAction_b__9_1__);
      sub_B70694(&Method_MissionActionManager__doMissionAction_b__9_2__);
      sub_B70694(&Method_MissionActionManager__doMissionAction_b__9_3__);
      sub_B70694(&Method_MissionActionManager_VoiceEnds__);
      sub_B70694(v6);
      sub_B70694(v5);
      sub_B70694(v7);
      sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_B70694(&TerminalTransitionInfo_TypeInfo);
      sub_B70694(&StringLiteral_1/*""*/);
      byte_43504CB = 1;
    }
    eventMissionActionList = (__int64)this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_129;
    if ( *(int *)(eventMissionActionList + 24) <= 0 )
    {
      MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        (MissionActionManager_o *)eventMissionActionList,
        0,
        v2);
      if ( !this->fields.isVoicePlaying )
      {
LABEL_49:
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v5)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v5);
        if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
        {
          v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          UnityEngine_Object__Destroy_36067208(v27, 0LL);
        }
      }
      return;
    }
    v9 = *(EventMissionActionInfo_o **)(*(_QWORD *)(eventMissionActionList + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMissionActionList,
      0,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
    if ( !v9 )
      goto LABEL_129;
    switch ( v9->fields.missionActionType )
    {
      case 1:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            return;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
          if ( !eventMissionActionList )
            goto LABEL_129;
          MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v40 = (ScriptManager_CallbackFunc_o *)sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
          v41 = &Method_MissionActionManager__doMissionAction_b__9_1__;
LABEL_94:
          v58 = v40;
          ScriptManager_CallbackFunc___ctor(v40, (Il2CppObject *)this, *v41, 0LL);
          v59 = *v7;
          if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v59);
          ScriptManager__PlayScenario(ValMessage, v58, 0, 0LL);
          return;
        }
        this->fields.isVoicePlaying = 0;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v38 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v38
          && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v38 - 8) == EventRewardRootComponent_TypeInfo )
        {
          EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v40 = (ScriptManager_CallbackFunc_o *)sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
          v41 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          goto LABEL_94;
        }
        goto LABEL_130;
      case 2:
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v43 = EventMissionActionInfo__getValMessage(v9, 0LL);
        v44 = (System_Action_o *)sub_B70764(*v4);
        System_Action___ctor(v44, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
        if ( !Instance )
          goto LABEL_129;
        CommonUI__OpenNotificationDialog(
          Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v43,
          v44,
          150,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0LL,
          0LL);
        return;
      case 3:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   72,
                                   0LL);
        if ( (eventMissionActionList & 1) != 0 )
        {
          v45 = this->fields.eventMissionActionList;
          if ( !v45 )
            goto LABEL_129;
          optionId = v45->fields._size < 1 ? 0LL : (__int64)v45->fields._items->m_Items[0];
          ValID = EventMissionActionInfo__getValID(v9, 0LL);
          MissionActionManager__addMissionAction(this, ValID, 3, v75);
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
          if ( !eventMissionActionList )
            goto LABEL_129;
          v76 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v76
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v76 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v78 = EventMissionActionInfo__getValID(v9, 0LL);
            v79 = (System_Action_o *)sub_B70764(*v4);
            System_Action___ctor(v79, (Il2CppObject *)this, *v6, 0LL);
            if ( !missionItemListViewManager )
              goto LABEL_129;
            EventMissionItemListViewManager__setNextMissionInfo(
              missionItemListViewManager,
              v9,
              (EventMissionActionInfo_o *)optionId,
              v78,
              v79,
              0LL);
            return;
          }
LABEL_130:
          sub_B70A60(eventMissionActionList);
          goto LABEL_131;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v60 = eventMissionActionList;
        v61 = *v5;
        v62 = *(UnityEngine_Object_o **)(v60 + 1240);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v61);
        if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            v63 = *(_QWORD *)(eventMissionActionList + 1240);
            if ( v63 )
            {
              v64 = *(CompleteMissionListViewManager_o **)(v63 + 64);
              v65 = EventMissionActionInfo__getValID(v9, 0LL);
              v66 = (System_Action_o *)sub_B70764(*v4);
              System_Action___ctor(v66, (Il2CppObject *)this, *v6, 0LL);
              if ( v64 )
              {
                CompleteMissionListViewManager__setNextMissionInfo(v64, v65, v66, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
            if ( eventMissionActionList )
            {
              listViewManager = MasterMissionComponent__get_listViewManager(
                                  (MasterMissionComponent_o *)eventMissionActionList,
                                  0LL);
              v68 = EventMissionActionInfo__getValID(v9, 0LL);
              v69 = (System_Action_o *)sub_B70764(*v4);
              System_Action___ctor(v69, (Il2CppObject *)this, *v6, 0LL);
              if ( listViewManager )
              {
                MasterMissionListViewManager__setNextMissionInfo(listViewManager, v68, v69, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        return;
      case 4:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          continue;
        optionId = (unsigned int)v9->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_57;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v11 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v11
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v11 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        if ( (_DWORD)optionId != *(_DWORD *)(eventMissionActionList + 1260) )
          continue;
LABEL_57:
        optionId = sub_B70764(TerminalTransitionInfo_TypeInfo);
        TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)optionId, 0LL);
        if ( !optionId )
          goto LABEL_129;
        *(_DWORD *)(optionId + 16) = v9->fields.missionId;
        vals = v9->fields.vals;
        *(_DWORD *)(optionId + 48) = v9->fields.optionId;
        *(_QWORD *)(optionId + 32) = vals;
        sub_B70630(
          (BattleServantConfConponent_o *)(optionId + 32),
          (System_Int32_array **)vals,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( !vals )
          goto LABEL_129;
        max_length = vals->max_length;
        if ( max_length < 1 )
          goto LABEL_86;
        v37 = 0;
        while ( 2 )
        {
          if ( v37 >= (unsigned int)max_length )
            goto LABEL_132;
          eventMissionActionList = System_Int32__Parse(vals->m_Items[v37], 0LL);
          if ( (_DWORD)eventMissionActionList != 800 )
          {
            max_length = vals->max_length;
            v37 += 2;
            if ( v37 >= max_length )
              goto LABEL_86;
            continue;
          }
          break;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v56 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v56
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v56 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        v57 = *(System_Int32_array ***)(eventMissionActionList + 1544);
        *(_QWORD *)(optionId + 40) = v57;
        sub_B70630((BattleServantConfConponent_o *)(optionId + 40), v57, v50, v51, v52, v53, v54, v55);
LABEL_86:
        MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
          (MissionActionManager_o *)eventMissionActionList,
          0,
          v35);
        this->fields.isGoneTerminal = 1;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        AvalonSceneManager__transitionScene(
          (AvalonSceneManager_o *)eventMissionActionList,
          34,
          1,
          (Il2CppObject *)optionId,
          0LL);
        if ( !this->fields.isVoicePlaying )
          goto LABEL_49;
        return;
      case 5:
        optionId = (unsigned int)v9->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_33;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v16 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v16
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v16 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        if ( (_DWORD)optionId != *(_DWORD *)(eventMissionActionList + 1260) )
          continue;
LABEL_33:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   72,
                                   0LL);
        if ( (eventMissionActionList & 1) == 0 )
          continue;
        v17 = this->fields.eventMissionActionList;
        this->fields.isVoicePlaying = 1;
        if ( !v17 )
          goto LABEL_129;
        if ( v17->fields._size >= 1 )
        {
          v18 = v17->fields._items->m_Items[0];
          if ( v18 )
          {
            if ( v18->fields.missionActionType == 8 )
            {
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( eventMissionActionList )
              {
                optionId = *(_QWORD *)(eventMissionActionList + 24);
                VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0LL);
                v71 = (System_Action_o *)sub_B70764(*v4);
                System_Action___ctor(v71, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                v72 = (System_Action_o *)sub_B70764(*v4);
                System_Action___ctor(v72, (Il2CppObject *)this, *v6, 0LL);
                if ( optionId )
                {
                  v73 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) >= (unsigned int)v73
                    && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v73 - 8) == EventRewardRootComponent_TypeInfo )
                  {
                    EventRewardRootComponent__playEventMissionSvtVoice_19171256(
                      (EventRewardRootComponent_o *)optionId,
                      VoiceIds,
                      v71,
                      v72,
                      0LL);
                    return;
                  }
LABEL_131:
                  eventMissionActionList = sub_B70A60(optionId);
LABEL_132:
                  v83 = sub_B70798(eventMissionActionList);
                  sub_B70738(v83, 0LL);
                }
              }
LABEL_129:
              sub_B7076C(eventMissionActionList, method);
            }
          }
        }
        v19 = v7;
        v20 = v5;
        v21 = v6;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        optionId = *(_QWORD *)(eventMissionActionList + 24);
        v22 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
        v23 = v4;
        v24 = (System_Action_o *)sub_B70764(*v4);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
        if ( !optionId )
          goto LABEL_129;
        v25 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) < (unsigned int)v25
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v25 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_131;
        }
        EventRewardRootComponent__playEventMissionSvtVoice((EventRewardRootComponent_o *)optionId, v22, v24, 0LL);
        v4 = v23;
        v6 = v21;
        v5 = v20;
        v7 = v19;
        continue;
      case 6:
        v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v47 = v9->fields.vals;
        v48 = (CommonUI_o *)v46;
        v49 = (System_Action_o *)sub_B70764(*v4);
        System_Action___ctor(v49, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
        if ( !v48 )
          goto LABEL_129;
        CommonUI__OpenImageDialogWithAssets(v48, v47, v49, 0LL, 0LL, 0LL);
        return;
      case 7:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v12 = eventMissionActionList;
        v13 = *v5;
        optionId = *(_QWORD *)(v12 + 1240);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
          continue;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   34,
                                   0LL);
        if ( (eventMissionActionList & 1) == 0 )
          continue;
        v14 = this->fields.eventMissionActionList;
        if ( !v14 )
          goto LABEL_129;
        if ( v14->fields._size >= 1 )
        {
          v15 = v14->fields._items->m_Items[0];
          if ( v15 )
          {
            if ( v15->fields.missionActionType == 8 )
            {
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !eventMissionActionList )
                goto LABEL_129;
              v80 = *(MasterMissionComponent_o **)(eventMissionActionList + 1248);
              v81 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
              v82 = (System_Action_o *)sub_B70764(*v4);
              System_Action___ctor(v82, (Il2CppObject *)this, *v6, 0LL);
              if ( !v80 )
                goto LABEL_129;
              MasterMissionComponent__playEventMissionSvtVoice_25861196(v80, v81, v82, 0LL);
              return;
            }
          }
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        optionId = *(_QWORD *)(eventMissionActionList + 1248);
        eventMissionActionList = (__int64)EventMissionActionInfo__getVoiceIds(v9, 0LL);
        if ( !optionId )
          goto LABEL_129;
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
}


void __fastcall MissionActionManager__setMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x24
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x24
  EventMissionActionInfo_o *v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIDnType; // x0
  Il2CppObject *v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  EventMissionActionInfo_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+10h] [xbp-B0h] BYREF
  int v33[2]; // [xsp+28h] [xbp-98h]
  int v34; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_43504C7 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__);
    sub_B70694(&EventMissionActionInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43504C7 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v9;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventMissionActionList,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_32:
    sub_B7076C(Instance, v18);
  }
  if ( restricted )
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType((EventMissionActionAddMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_16;
  }
  else
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIDnType((EventMissionActionAddMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_16;
  }
  if ( SafeActionListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      SafeActionListFromIDnType,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v36 = v32;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v36.fields.current;
      v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v22 = (EventMissionActionInfo_o *)sub_B70764(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27396076(v22, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v21 )
        sub_B7076C(v23, v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v33[0] = 232;
    v34 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v34 = 0;
    goto LABEL_30;
  }
LABEL_16:
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( restricted )
  {
    EntityListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionMaster__getSafeActionListFromIDnType((EventMissionActionMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_30;
  }
  else
  {
    EntityListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionMaster__getEntityListFromIDnType((EventMissionActionMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_30;
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      EntityListFromIDnType,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v27 = v35.fields.current;
      v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v29 = (EventMissionActionInfo_o *)sub_B70764(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v29, (EventMissionActionEntity_o *)v27, 0LL);
      if ( !v28 )
        sub_B7076C(v30, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v33[0] = 232;
    ++v34;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v34 )
    {
      if ( v33[v34 - 1] == 232 )
        --v34;
    }
  }
LABEL_30:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v25);
}


void __fastcall MissionActionManager__setStatusMissionNotify(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionActionAddEntity__o *Instance; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v11; // x23
  MissionActionManager___c_c *v12; // x0
  struct MissionActionManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_0; // x24
  Il2CppObject *v15; // x25
  struct MissionActionManager___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v23; // x20
  MissionActionManager___c_c *v24; // x0
  struct MissionActionManager___c_StaticFields *v25; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_1; // x21
  Il2CppObject *v27; // x22
  struct MissionActionManager___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_43504C9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__);
    sub_B70694(&Method_System_Predicate_EventMissionActionEntity___ctor__);
    sub_B70694(&Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    sub_B70694(&System_Predicate_EventMissionActionEntity__TypeInfo);
    sub_B70694(&System_Predicate_EventMissionActionAddEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__);
    sub_B70694(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__);
    sub_B70694(&MissionActionManager___c_TypeInfo);
    byte_43504C9 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = restricted
           ? EventMissionActionAddMaster__GetSafeActionListFromIDnType(
               (EventMissionActionAddMaster_o *)Instance,
               missionID,
               progressType,
               0LL)
           : EventMissionActionAddMaster__GetEntityListFromIDnType(
               (EventMissionActionAddMaster_o *)Instance,
               missionID,
               progressType,
               0LL);
  v11 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance;
  if ( !Instance )
    goto LABEL_42;
  if ( Instance->fields._size >= 1 )
  {
    v12 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v12 = MissionActionManager___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = MissionActionManager___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_0,
        v15,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
      v16 = MissionActionManager___c_TypeInfo->static_fields;
      v16->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v16->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v11,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_3025F14 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      goto LABEL_40;
    }
  }
  if ( (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL
    || (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL
    || (!restricted
      ? (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)EventMissionActionMaster__getEntityListFromIDnType(
                                                                                        (EventMissionActionMaster_o *)Instance,
                                                                                        missionID,
                                                                                        progressType,
                                                                                        0LL))
      : (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                                                                        (EventMissionActionMaster_o *)Instance,
                                                                                        missionID,
                                                                                        progressType,
                                                                                        0LL)),
        (v23 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance) == 0LL) )
  {
LABEL_42:
    sub_B7076C(Instance, v10);
  }
  if ( Instance->fields._size >= 1 )
  {
    v24 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v24 = MissionActionManager___c_TypeInfo;
    }
    v25 = v24->static_fields;
    _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v25->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v25 = MissionActionManager___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)v25->__9;
      _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_1,
        v27,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
      v28 = MissionActionManager___c_TypeInfo->static_fields;
      v28->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v28->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v23,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_3025F14 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
LABEL_40:
        this->fields.isStopMissionNotify = 1;
        return;
      }
      goto LABEL_42;
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MissionActionManager___c_StaticFields *static_fields; // x0

  if ( (byte_434F3ED & 1) == 0 )
  {
    sub_B70694(&MissionActionManager___c_TypeInfo);
    byte_434F3ED = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MissionActionManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionActionManager___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.missionActionType == 6;
}