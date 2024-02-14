void __fastcall MissionActionManager___ctor(MissionActionManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        MissionActionManager_o *this,
        bool onoff,
        const MethodInfo *method)
{
  AutomatedAction_o *Instance; // x0

  if ( (byte_421457E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff);
    byte_421457E = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D840(
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

  if ( (byte_4214580 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214580 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v4, v5, v6, v7, v8, v9);
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
    UnityEngine_Object__Destroy_34935276(v11, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_421457F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421457F = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v6, v7, v8, v9, v10, v11);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v13, 0LL);
    }
  }
  else
  {
    this->fields.isVoicePlaying = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager___doMissionAction_b__9_0(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v16; // x9
  MissionActionManager_o *v17; // x0
  bool v18; // w1
  const MethodInfo *v19; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_4214581 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, skip);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_MissionActionManager_doMissionAction__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4214581 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v14, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v14, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B0D97C(myFSM);
  }
  v16 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v16
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[v16 - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    v17 = (MissionActionManager_o *)sub_B0DC70(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v17, v18, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager___doMissionAction_b__9_1(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v16; // x9
  MissionActionManager_o *v17; // x0
  const MethodInfo *v18; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_4214582 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, skip);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v4);
    sub_B0D8A4(&Method_MissionActionManager_doMissionAction__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
    byte_4214582 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v14, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v14, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B0D97C(myFSM);
  }
  v16 = *(&TerminalSceneComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v16
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[v16 - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_17453448(myFSM, 0LL);
  }
  else
  {
    v17 = (MissionActionManager_o *)sub_B0DC70(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v17, v18);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  int32_t mPauseCount; // w8
  int32_t v6; // w8

  if ( (byte_4214583 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4214583 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v4 )
      sub_B0D97C(0LL);
    mPauseCount = v4->fields.mPauseCount;
    if ( mPauseCount )
    {
      v6 = mPauseCount - 1;
      v4->fields.mPauseCount = v6;
      if ( !v6 )
        MissionNotifyManager__CancelPause(v4, method);
    }
    this->fields.isStopMissionNotify = 0;
  }
  MissionActionManager__doMissionAction(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__addMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v26; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  BattleServantConfConponent_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_421457A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v13);
    sub_B0D8A4(&EventMissionActionInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_421457A = 1;
  }
  memset(&v43, 0, sizeof(v43));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_19;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v26 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromIDnType;
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                    v24,
                                                                                                    v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v43,
      v26,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v43,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v43.fields.current;
      v31 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v28, v29);
      EventMissionActionInfo___ctor_26645076(v31, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v27 )
        sub_B0D97C(v32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v27,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v43,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    if ( v27 )
    {
      eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
      p_eventMissionActionList = (BattleServantConfConponent_o *)&this->fields.eventMissionActionList;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
        eventMissionActionList,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
      p_eventMissionActionList->klass = (BattleServantConfConponent_c *)v27;
      sub_B0D840(p_eventMissionActionList, (System_Int32_array **)v27, v37, v38, v39, v40, v41, v42);
      return;
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_19;
  if ( EventMissionActionMaster__getEntityListFromIDnType(
         (EventMissionActionMaster_o *)Instance,
         missionID,
         progressType,
         0LL) )
  {
    sub_B0D974(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v33, v34);
    JUMPOUT(0x1768388LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionActionAddEntity__o *v21; // x21
  MissionActionManager___c_c *v22; // x0
  struct MissionActionManager___c_StaticFields *v23; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_0; // x19
  Il2CppObject *v25; // x20
  struct MissionActionManager___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 *v33; // x8
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v34; // x0
  System_Predicate_T__o *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  DataManager_o *v38; // x19
  MissionActionManager___c_c *v39; // x8
  struct MissionActionManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_1; // x20
  Il2CppObject *v42; // x21
  struct MissionActionManager___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_421457C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&progressType);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v8);
    sub_B0D8A4(&Method_System_Predicate_EventMissionActionEntity___ctor__, v9);
    sub_B0D8A4(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v10);
    sub_B0D8A4(&System_Predicate_EventMissionActionEntity__TypeInfo, v11);
    sub_B0D8A4(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&Method_MissionActionManager___c__checkScroll_b__8_0__, v14);
    sub_B0D8A4(&Method_MissionActionManager___c__checkScroll_b__8_1__, v15);
    sub_B0D8A4(&MissionActionManager___c_TypeInfo, v16);
    byte_421457C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType || (v21 = EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v38 = Instance;
        v39 = MissionActionManager___c_TypeInfo;
        if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v39 = MissionActionManager___c_TypeInfo;
        }
        static_fields = v39->static_fields;
        _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            static_fields = MissionActionManager___c_TypeInfo->static_fields;
          }
          v42 = (Il2CppObject *)static_fields->__9;
          _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                               System_Predicate_EventMissionActionEntity__TypeInfo,
                                                                               v36,
                                                                               v37);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__8_1,
            v42,
            Method_MissionActionManager___c__checkScroll_b__8_1__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
          v43 = MissionActionManager___c_TypeInfo->static_fields;
          v43->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v43->__9__8_1,
            (System_Int32_array **)_9__8_1,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
        }
        if ( v38 )
        {
          v33 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v34 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v38;
          v35 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                   v34,
                   v35,
                   (const MethodInfo_2FC5F74 *)*v33);
        }
      }
    }
LABEL_29:
    sub_B0D97C(Instance);
  }
  v22 = MissionActionManager___c_TypeInfo;
  if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v22 = MissionActionManager___c_TypeInfo;
  }
  v23 = v22->static_fields;
  _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v23->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v23 = MissionActionManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                                                         v19,
                                                                         v20);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__8_0,
      v25,
      Method_MissionActionManager___c__checkScroll_b__8_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    v26 = MissionActionManager___c_TypeInfo->static_fields;
    v26->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v34 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v21;
  v35 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(v34, v35, (const MethodInfo_2FC5F74 *)*v33);
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
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x23
  __int64 v27; // x9
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v46; // x19
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_String_array *vals; // x21
  const MethodInfo *v54; // x2
  int max_length; // w8
  int v56; // w22
  __int64 v57; // x9
  System_String_o *ValMessage; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  ScriptManager_CallbackFunc_o *v61; // x0
  __int64 *v62; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  System_Action_o *v67; // x22
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v68; // x8
  WebViewManager_o *v69; // x0
  System_String_array *v70; // x20
  CommonUI_o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  System_Action_o *v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x9
  System_Int32_array **v82; // x1
  __int64 v83; // x1
  __int64 v84; // x2
  ScriptManager_CallbackFunc_o *v85; // x21
  ScriptManager_c *v86; // x0
  __int64 v87; // x8
  UnityEngine_Object_c *v88; // x0
  UnityEngine_Object_o *v89; // x20
  __int64 v90; // x8
  CompleteMissionListViewManager_o *v91; // x20
  int32_t v92; // w21
  __int64 v93; // x1
  __int64 v94; // x2
  System_Action_o *v95; // x22
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v97; // w21
  __int64 v98; // x1
  __int64 v99; // x2
  System_Action_o *v100; // x22
  System_String_array *VoiceIds; // x21
  __int64 v102; // x1
  __int64 v103; // x2
  System_Action_o *v104; // x22
  __int64 v105; // x1
  __int64 v106; // x2
  System_Action_o *v107; // x23
  __int64 v108; // x9
  int32_t ValID; // w0
  const MethodInfo *v110; // x3
  __int64 v111; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v113; // w22
  __int64 v114; // x1
  __int64 v115; // x2
  System_Action_o *v116; // x23
  MasterMissionComponent_o *v117; // x20
  System_String_array *v118; // x21
  __int64 v119; // x1
  __int64 v120; // x2
  System_Action_o *v121; // x22
  __int64 v122; // x0

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  v7 = &ScriptManager_TypeInfo;
  while ( 2 )
  {
    if ( (byte_421457D & 1) == 0 )
    {
      sub_B0D8A4(v4, method);
      sub_B0D8A4(&ScriptManager_CallbackFunc_TypeInfo, v28);
      sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v29);
      sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v30);
      sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v31);
      sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v32);
      sub_B0D8A4(&Method_MissionActionManager__doMissionAction_b__9_0__, v33);
      sub_B0D8A4(&Method_MissionActionManager__doMissionAction_b__9_1__, v34);
      sub_B0D8A4(&Method_MissionActionManager__doMissionAction_b__9_2__, v35);
      sub_B0D8A4(&Method_MissionActionManager__doMissionAction_b__9_3__, v36);
      sub_B0D8A4(&Method_MissionActionManager_VoiceEnds__, v37);
      sub_B0D8A4(v6, v38);
      sub_B0D8A4(v5, v39);
      sub_B0D8A4(v7, v40);
      sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v41);
      sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42);
      sub_B0D8A4(&TerminalTransitionInfo_TypeInfo, v43);
      sub_B0D8A4(&StringLiteral_1/*""*/, v44);
      byte_421457D = 1;
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
          v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          UnityEngine_Object__Destroy_34935276(v46, 0LL);
        }
      }
      return;
    }
    v9 = *(EventMissionActionInfo_o **)(*(_QWORD *)(eventMissionActionList + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMissionActionList,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
    if ( !v9 )
      goto LABEL_129;
    switch ( v9->fields.missionActionType )
    {
      case 1:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            return;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
          if ( !eventMissionActionList )
            goto LABEL_129;
          MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v61 = (ScriptManager_CallbackFunc_o *)sub_B0D974(ScriptManager_CallbackFunc_TypeInfo, v83, v84);
          v62 = &Method_MissionActionManager__doMissionAction_b__9_1__;
LABEL_94:
          v85 = v61;
          ScriptManager_CallbackFunc___ctor(v61, (Il2CppObject *)this, *v62, 0LL);
          v86 = *v7;
          if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v86);
          ScriptManager__PlayScenario(ValMessage, v85, 0, 0LL);
          return;
        }
        this->fields.isVoicePlaying = 0;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v57 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v57
          && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v57 - 8) == EventRewardRootComponent_TypeInfo )
        {
          EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v61 = (ScriptManager_CallbackFunc_o *)sub_B0D974(ScriptManager_CallbackFunc_TypeInfo, v59, v60);
          v62 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          goto LABEL_94;
        }
        goto LABEL_130;
      case 2:
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v64 = EventMissionActionInfo__getValMessage(v9, 0LL);
        v67 = (System_Action_o *)sub_B0D974(*v4, v65, v66);
        System_Action___ctor(v67, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
        if ( !Instance )
          goto LABEL_129;
        CommonUI__OpenNotificationDialog(
          Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v64,
          v67,
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
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   72,
                                   0LL);
        if ( (eventMissionActionList & 1) != 0 )
        {
          v68 = this->fields.eventMissionActionList;
          if ( !v68 )
            goto LABEL_129;
          optionId = v68->fields._size < 1 ? 0LL : (__int64)v68->fields._items->m_Items[0];
          ValID = EventMissionActionInfo__getValID(v9, 0LL);
          MissionActionManager__addMissionAction(this, ValID, 3, v110);
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
          if ( !eventMissionActionList )
            goto LABEL_129;
          v111 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v111
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v111 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v113 = EventMissionActionInfo__getValID(v9, 0LL);
            v116 = (System_Action_o *)sub_B0D974(*v4, v114, v115);
            System_Action___ctor(v116, (Il2CppObject *)this, *v6, 0LL);
            if ( !missionItemListViewManager )
              goto LABEL_129;
            EventMissionItemListViewManager__setNextMissionInfo(
              missionItemListViewManager,
              v9,
              (EventMissionActionInfo_o *)optionId,
              v113,
              v116,
              0LL);
            return;
          }
LABEL_130:
          sub_B0DC70(eventMissionActionList);
          goto LABEL_131;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v87 = eventMissionActionList;
        v88 = *v5;
        v89 = *(UnityEngine_Object_o **)(v87 + 1240);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v88);
        if ( UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            v90 = *(_QWORD *)(eventMissionActionList + 1240);
            if ( v90 )
            {
              v91 = *(CompleteMissionListViewManager_o **)(v90 + 64);
              v92 = EventMissionActionInfo__getValID(v9, 0LL);
              v95 = (System_Action_o *)sub_B0D974(*v4, v93, v94);
              System_Action___ctor(v95, (Il2CppObject *)this, *v6, 0LL);
              if ( v91 )
              {
                CompleteMissionListViewManager__setNextMissionInfo(v91, v92, v95, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
            if ( eventMissionActionList )
            {
              listViewManager = MasterMissionComponent__get_listViewManager(
                                  (MasterMissionComponent_o *)eventMissionActionList,
                                  0LL);
              v97 = EventMissionActionInfo__getValID(v9, 0LL);
              v100 = (System_Action_o *)sub_B0D974(*v4, v98, v99);
              System_Action___ctor(v100, (Il2CppObject *)this, *v6, 0LL);
              if ( listViewManager )
              {
                MasterMissionListViewManager__setNextMissionInfo(listViewManager, v97, v100, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        return;
      case 4:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          continue;
        optionId = (unsigned int)v9->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_57;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        optionId = sub_B0D974(TerminalTransitionInfo_TypeInfo, method, v2);
        TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)optionId, 0LL);
        if ( !optionId )
          goto LABEL_129;
        *(_DWORD *)(optionId + 16) = v9->fields.missionId;
        vals = v9->fields.vals;
        *(_DWORD *)(optionId + 48) = v9->fields.optionId;
        *(_QWORD *)(optionId + 32) = vals;
        sub_B0D840(
          (BattleServantConfConponent_o *)(optionId + 32),
          (System_Int32_array **)vals,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        if ( !vals )
          goto LABEL_129;
        max_length = vals->max_length;
        if ( max_length < 1 )
          goto LABEL_86;
        v56 = 0;
        while ( 2 )
        {
          if ( v56 >= (unsigned int)max_length )
            goto LABEL_132;
          eventMissionActionList = System_Int32__Parse(vals->m_Items[v56], 0LL);
          if ( (_DWORD)eventMissionActionList != 800 )
          {
            max_length = vals->max_length;
            v56 += 2;
            if ( v56 >= max_length )
              goto LABEL_86;
            continue;
          }
          break;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v81 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v81
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v81 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        v82 = *(System_Int32_array ***)(eventMissionActionList + 1544);
        *(_QWORD *)(optionId + 40) = v82;
        sub_B0D840((BattleServantConfConponent_o *)(optionId + 40), v82, v75, v76, v77, v78, v79, v80);
LABEL_86:
        MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
          (MissionActionManager_o *)eventMissionActionList,
          0,
          v54);
        this->fields.isGoneTerminal = 1;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( eventMissionActionList )
              {
                optionId = *(_QWORD *)(eventMissionActionList + 24);
                VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0LL);
                v104 = (System_Action_o *)sub_B0D974(*v4, v102, v103);
                System_Action___ctor(v104, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                v107 = (System_Action_o *)sub_B0D974(*v4, v105, v106);
                System_Action___ctor(v107, (Il2CppObject *)this, *v6, 0LL);
                if ( optionId )
                {
                  v108 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) >= (unsigned int)v108
                    && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v108 - 8) == EventRewardRootComponent_TypeInfo )
                  {
                    EventRewardRootComponent__playEventMissionSvtVoice_18341844(
                      (EventRewardRootComponent_o *)optionId,
                      VoiceIds,
                      v104,
                      v107,
                      0LL);
                    return;
                  }
LABEL_131:
                  eventMissionActionList = sub_B0DC70(optionId);
LABEL_132:
                  v122 = sub_B0D9A8(eventMissionActionList);
                  sub_B0D948(v122, 0LL);
                }
              }
LABEL_129:
              sub_B0D97C(eventMissionActionList);
            }
          }
        }
        v19 = v7;
        v20 = v5;
        v21 = v6;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        optionId = *(_QWORD *)(eventMissionActionList + 24);
        v22 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
        v23 = v4;
        v26 = (System_Action_o *)sub_B0D974(*v4, v24, v25);
        System_Action___ctor(v26, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
        if ( !optionId )
          goto LABEL_129;
        v27 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) < (unsigned int)v27
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v27 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_131;
        }
        EventRewardRootComponent__playEventMissionSvtVoice((EventRewardRootComponent_o *)optionId, v22, v26, 0LL);
        v4 = v23;
        v6 = v21;
        v5 = v20;
        v7 = v19;
        continue;
      case 6:
        v69 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v70 = v9->fields.vals;
        v71 = (CommonUI_o *)v69;
        v74 = (System_Action_o *)sub_B0D974(*v4, v72, v73);
        System_Action___ctor(v74, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
        if ( !v71 )
          goto LABEL_129;
        CommonUI__OpenImageDialogWithAssets(v71, v70, v74, 0LL, 0LL, 0LL);
        return;
      case 7:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v12 = eventMissionActionList;
        v13 = *v5;
        optionId = *(_QWORD *)(v12 + 1240);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
          continue;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !eventMissionActionList )
                goto LABEL_129;
              v117 = *(MasterMissionComponent_o **)(eventMissionActionList + 1248);
              v118 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
              v121 = (System_Action_o *)sub_B0D974(*v4, v119, v120);
              System_Action___ctor(v121, (Il2CppObject *)this, *v6, 0LL);
              if ( !v117 )
                goto LABEL_129;
              MasterMissionComponent__playEventMissionSvtVoice_21037824(v117, v118, v121, 0LL);
              return;
            }
          }
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__setMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SafeActionListFromIDnType; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *current; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x24
  EventMissionActionInfo_o *v39; // x25
  __int64 v40; // x0
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIDnType; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *v45; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  EventMissionActionInfo_o *v47; // x21
  __int64 v48; // x0
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+10h] [xbp-B0h] BYREF
  int v50[2]; // [xsp+28h] [xbp-98h]
  int v51; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4214579 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v15);
    sub_B0D8A4(&EventMissionActionInfo_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v22);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4214579 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  memset(&v52, 0, sizeof(v52));
  v51 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                  *(_QWORD *)&missionID,
                                                                                                  *(_QWORD *)&progressType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v25;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventMissionActionList,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_32:
    sub_B0D97C(Instance);
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
      &v49,
      SafeActionListFromIDnType,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v53 = v49;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v53.fields.current;
      v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v39 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v35, v36);
      EventMissionActionInfo___ctor_26645076(v39, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v38 )
        sub_B0D97C(v40);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v50[0] = 232;
    v51 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v51 = 0;
    goto LABEL_30;
  }
LABEL_16:
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      &v52,
      EntityListFromIDnType,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v52,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v45 = v52.fields.current;
      v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v47 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v43, v44);
      EventMissionActionInfo___ctor(v47, (EventMissionActionEntity_o *)v45, 0LL);
      if ( !v46 )
        sub_B0D97C(v48);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v46,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v50[0] = 232;
    ++v51;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v52,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v51 )
    {
      if ( v50[v51 - 1] == 232 )
        --v51;
    }
  }
LABEL_30:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__setStatusMissionNotify(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v27; // x23
  MissionActionManager___c_c *v28; // x0
  struct MissionActionManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_0; // x24
  Il2CppObject *v31; // x25
  struct MissionActionManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v41; // x20
  MissionActionManager___c_c *v42; // x0
  struct MissionActionManager___c_StaticFields *v43; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_1; // x21
  Il2CppObject *v45; // x22
  struct MissionActionManager___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_421457B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v13);
    sub_B0D8A4(&Method_System_Predicate_EventMissionActionEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v15);
    sub_B0D8A4(&System_Predicate_EventMissionActionEntity__TypeInfo, v16);
    sub_B0D8A4(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B0D8A4(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v21);
    sub_B0D8A4(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v22);
    sub_B0D8A4(&MissionActionManager___c_TypeInfo, v23);
    byte_421457B = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
  v27 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance;
  if ( !Instance )
    goto LABEL_42;
  if ( Instance->fields._size >= 1 )
  {
    v28 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v28 = MissionActionManager___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = MissionActionManager___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                                                           v25,
                                                                           v26);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_0,
        v31,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
      v32 = MissionActionManager___c_TypeInfo->static_fields;
      v32->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v32->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v27,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_2FC5F74 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)(restricted
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
  v41 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance;
  if ( !Instance )
    goto LABEL_42;
  if ( Instance->fields._size >= 1 )
  {
    v42 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v42 = MissionActionManager___c_TypeInfo;
    }
    v43 = v42->static_fields;
    _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v43->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v43 = MissionActionManager___c_TypeInfo->static_fields;
      }
      v45 = (Il2CppObject *)v43->__9;
      _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_EventMissionActionEntity__TypeInfo,
                                                                           v39,
                                                                           v40);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_1,
        v45,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
      v46 = MissionActionManager___c_TypeInfo->static_fields;
      v46->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v46->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v41,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_2FC5F74 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++Instance[1].fields._version;
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_42:
      sub_B0D97C(Instance);
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MissionActionManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212726 & 1) == 0 )
  {
    sub_B0D8A4(&MissionActionManager___c_TypeInfo, v1);
    byte_4212726 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MissionActionManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MissionActionManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionActionManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.missionActionType == 6;
}