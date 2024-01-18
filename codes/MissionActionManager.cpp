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
  __int64 v5; // x1

  if ( (byte_41872E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff);
    byte_41872E5 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
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
    sub_B2C2F8(
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

  if ( (byte_41872E7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41872E7 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v4, v5, v6, v7, v8, v9);
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
    UnityEngine_Object__Destroy_35314896(v11, 0LL);
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

  if ( (byte_41872E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41872E6 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v6, v7, v8, v9, v10, v11);
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
      UnityEngine_Object__Destroy_35314896(v13, 0LL);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v14; // x1
  __int64 v15; // x9
  MissionActionManager_o *v16; // x0
  bool v17; // w1
  const MethodInfo *v18; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_41872E8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, skip);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v5);
    sub_B2C35C(&Method_MissionActionManager_doMissionAction__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_41872E8 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v12, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B2C434(myFSM, v14);
  }
  v15 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v15
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[v15 - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    v16 = (MissionActionManager_o *)sub_B2C728(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v16, v17, v18);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v14; // x1
  __int64 v15; // x9
  MissionActionManager_o *v16; // x0
  const MethodInfo *v17; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_41872E9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, skip);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v4);
    sub_B2C35C(&Method_MissionActionManager_doMissionAction__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    byte_41872E9 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v12, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B2C434(myFSM, v14);
  }
  v15 = *(&TerminalSceneComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v15
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[v15 - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_18835492(myFSM, 0LL);
  }
  else
  {
    v16 = (MissionActionManager_o *)sub_B2C728(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v16, v17);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  int32_t mPauseCount; // w8
  int32_t v6; // w8

  if ( (byte_41872EA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41872EA = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v4 )
      sub_B2C434(0LL, method);
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
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v25; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 *v31; // x8
  System_Collections_Generic_List_Enumerator_T__o *v32; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v33; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v34; // x21
  Il2CppObject *v35; // x22
  EventMissionActionInfo_o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  BattleServantConfConponent_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_41872E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v13);
    sub_B2C35C(&EventMissionActionInfo_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_41872E1 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  memset(&v47, 0, sizeof(v47));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v25 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromIDnType;
    v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v26,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      v25,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v48.fields.current;
      v28 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27194656(v28, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v26 )
        sub_B2C434(v29, v30);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v31 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v32 = &v48;
    goto LABEL_19;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_24:
    sub_B2C434(Instance, v23);
  }
  v33 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v33 )
    return;
  v34 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    v34,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v35 = v47.fields.current;
    v36 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v36, (EventMissionActionEntity_o *)v35, 0LL);
    if ( !v26 )
      sub_B2C434(v37, v38);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
  }
  v31 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
  v32 = &v47;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    v32,
    (const MethodInfo_20EA428 *)*v31);
  if ( !v26 )
    goto LABEL_24;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (BattleServantConfConponent_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    eventMissionActionList,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (BattleServantConfConponent_c *)v26;
  sub_B2C2F8(p_eventMissionActionList, (System_Int32_array **)v26, v41, v42, v43, v44, v45, v46);
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
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *v20; // x21
  MissionActionManager___c_c *v21; // x0
  struct MissionActionManager___c_StaticFields *v22; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_0; // x19
  Il2CppObject *v24; // x20
  struct MissionActionManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 *v32; // x8
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v33; // x0
  System_Predicate_T__o *v34; // x1
  DataManager_o *v35; // x19
  MissionActionManager___c_c *v36; // x8
  struct MissionActionManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_1; // x20
  Il2CppObject *v39; // x21
  struct MissionActionManager___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_41872E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&progressType);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Predicate_EventMissionActionEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v10);
    sub_B2C35C(&System_Predicate_EventMissionActionEntity__TypeInfo, v11);
    sub_B2C35C(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_MissionActionManager___c__checkScroll_b__8_0__, v14);
    sub_B2C35C(&Method_MissionActionManager___c__checkScroll_b__8_1__, v15);
    sub_B2C35C(&MissionActionManager___c_TypeInfo, v16);
    byte_41872E3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType || (v20 = EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v35 = Instance;
        v36 = MissionActionManager___c_TypeInfo;
        if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v36 = MissionActionManager___c_TypeInfo;
        }
        static_fields = v36->static_fields;
        _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            static_fields = MissionActionManager___c_TypeInfo->static_fields;
          }
          v39 = (Il2CppObject *)static_fields->__9;
          _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__8_1,
            v39,
            Method_MissionActionManager___c__checkScroll_b__8_1__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
          v40 = MissionActionManager___c_TypeInfo->static_fields;
          v40->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v40->__9__8_1,
            (System_Int32_array **)_9__8_1,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
        }
        if ( v35 )
        {
          v32 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v33 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v35;
          v34 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                   v33,
                   v34,
                   (const MethodInfo_2EF4CEC *)*v32);
        }
      }
    }
LABEL_29:
    sub_B2C434(Instance, v18);
  }
  v21 = MissionActionManager___c_TypeInfo;
  if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v21 = MissionActionManager___c_TypeInfo;
  }
  v22 = v21->static_fields;
  _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v22->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v22 = MissionActionManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__8_0,
      v24,
      Method_MissionActionManager___c__checkScroll_b__8_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    v25 = MissionActionManager___c_TypeInfo->static_fields;
    v25->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v33 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v20;
  v34 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(v33, v34, (const MethodInfo_2EF4CEC *)*v32);
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
  __int64 v26; // x1
  __int64 v27; // x1
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
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v44; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_String_array *vals; // x21
  const MethodInfo *v52; // x2
  int max_length; // w8
  int v54; // w22
  __int64 v55; // x9
  System_String_o *ValMessage; // x20
  ScriptManager_CallbackFunc_o *v57; // x0
  __int64 *v58; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v60; // x21
  System_Action_o *v61; // x22
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v62; // x8
  WebViewManager_o *v63; // x0
  System_String_array *v64; // x20
  CommonUI_o *v65; // x21
  System_Action_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x9
  System_Int32_array **v74; // x1
  ScriptManager_CallbackFunc_o *v75; // x21
  ScriptManager_c *v76; // x0
  __int64 v77; // x8
  UnityEngine_Object_c *v78; // x0
  UnityEngine_Object_o *v79; // x20
  __int64 v80; // x8
  CompleteMissionListViewManager_o *v81; // x20
  int32_t v82; // w21
  System_Action_o *v83; // x22
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v85; // w21
  System_Action_o *v86; // x22
  System_String_array *VoiceIds; // x21
  System_Action_o *v88; // x22
  System_Action_o *v89; // x23
  __int64 v90; // x9
  int32_t ValID; // w0
  const MethodInfo *v92; // x3
  __int64 v93; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v95; // w22
  System_Action_o *v96; // x23
  MasterMissionComponent_o *v97; // x20
  System_String_array *v98; // x21
  System_Action_o *v99; // x22
  __int64 v100; // x0

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  v7 = &ScriptManager_TypeInfo;
  while ( 2 )
  {
    if ( (byte_41872E4 & 1) == 0 )
    {
      sub_B2C35C(v4, method);
      sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v26);
      sub_B2C35C(&EventRewardRootComponent_TypeInfo, v27);
      sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v28);
      sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v29);
      sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v30);
      sub_B2C35C(&Method_MissionActionManager__doMissionAction_b__9_0__, v31);
      sub_B2C35C(&Method_MissionActionManager__doMissionAction_b__9_1__, v32);
      sub_B2C35C(&Method_MissionActionManager__doMissionAction_b__9_2__, v33);
      sub_B2C35C(&Method_MissionActionManager__doMissionAction_b__9_3__, v34);
      sub_B2C35C(&Method_MissionActionManager_VoiceEnds__, v35);
      sub_B2C35C(v6, v36);
      sub_B2C35C(v5, v37);
      sub_B2C35C(v7, v38);
      sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v39);
      sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v40);
      sub_B2C35C(&TerminalTransitionInfo_TypeInfo, v41);
      sub_B2C35C(&StringLiteral_1/*""*/, v42);
      byte_41872E4 = 1;
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
          v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          UnityEngine_Object__Destroy_35314896(v44, 0LL);
        }
      }
      return;
    }
    v9 = *(EventMissionActionInfo_o **)(*(_QWORD *)(eventMissionActionList + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMissionActionList,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
    if ( !v9 )
      goto LABEL_129;
    switch ( v9->fields.missionActionType )
    {
      case 1:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            return;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
          if ( !eventMissionActionList )
            goto LABEL_129;
          MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v57 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
          v58 = &Method_MissionActionManager__doMissionAction_b__9_1__;
LABEL_94:
          v75 = v57;
          ScriptManager_CallbackFunc___ctor(v57, (Il2CppObject *)this, *v58, 0LL);
          v76 = *v7;
          if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v76);
          ScriptManager__PlayScenario(ValMessage, v75, 0, 0LL);
          return;
        }
        this->fields.isVoicePlaying = 0;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v55 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v55
          && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v55 - 8) == EventRewardRootComponent_TypeInfo )
        {
          EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v57 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
          v58 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          goto LABEL_94;
        }
        goto LABEL_130;
      case 2:
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v60 = EventMissionActionInfo__getValMessage(v9, 0LL);
        v61 = (System_Action_o *)sub_B2C42C(*v4);
        System_Action___ctor(v61, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
        if ( !Instance )
          goto LABEL_129;
        CommonUI__OpenNotificationDialog(
          Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v60,
          v61,
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
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   72,
                                   0LL);
        if ( (eventMissionActionList & 1) != 0 )
        {
          v62 = this->fields.eventMissionActionList;
          if ( !v62 )
            goto LABEL_129;
          optionId = v62->fields._size < 1 ? 0LL : (__int64)v62->fields._items->m_Items[0];
          ValID = EventMissionActionInfo__getValID(v9, 0LL);
          MissionActionManager__addMissionAction(this, ValID, 3, v92);
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
          if ( !eventMissionActionList )
            goto LABEL_129;
          v93 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v93
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v93 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v95 = EventMissionActionInfo__getValID(v9, 0LL);
            v96 = (System_Action_o *)sub_B2C42C(*v4);
            System_Action___ctor(v96, (Il2CppObject *)this, *v6, 0LL);
            if ( !missionItemListViewManager )
              goto LABEL_129;
            EventMissionItemListViewManager__setNextMissionInfo(
              missionItemListViewManager,
              v9,
              (EventMissionActionInfo_o *)optionId,
              v95,
              v96,
              0LL);
            return;
          }
LABEL_130:
          sub_B2C728(eventMissionActionList);
          goto LABEL_131;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v77 = eventMissionActionList;
        v78 = *v5;
        v79 = *(UnityEngine_Object_o **)(v77 + 1240);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v78);
        if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            v80 = *(_QWORD *)(eventMissionActionList + 1240);
            if ( v80 )
            {
              v81 = *(CompleteMissionListViewManager_o **)(v80 + 64);
              v82 = EventMissionActionInfo__getValID(v9, 0LL);
              v83 = (System_Action_o *)sub_B2C42C(*v4);
              System_Action___ctor(v83, (Il2CppObject *)this, *v6, 0LL);
              if ( v81 )
              {
                CompleteMissionListViewManager__setNextMissionInfo(v81, v82, v83, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
            if ( eventMissionActionList )
            {
              listViewManager = MasterMissionComponent__get_listViewManager(
                                  (MasterMissionComponent_o *)eventMissionActionList,
                                  0LL);
              v85 = EventMissionActionInfo__getValID(v9, 0LL);
              v86 = (System_Action_o *)sub_B2C42C(*v4);
              System_Action___ctor(v86, (Il2CppObject *)this, *v6, 0LL);
              if ( listViewManager )
              {
                MasterMissionListViewManager__setNextMissionInfo(listViewManager, v85, v86, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        return;
      case 4:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          continue;
        optionId = (unsigned int)v9->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_57;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        optionId = sub_B2C42C(TerminalTransitionInfo_TypeInfo);
        TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)optionId, 0LL);
        if ( !optionId )
          goto LABEL_129;
        *(_DWORD *)(optionId + 16) = v9->fields.missionId;
        vals = v9->fields.vals;
        *(_DWORD *)(optionId + 48) = v9->fields.optionId;
        *(_QWORD *)(optionId + 32) = vals;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(optionId + 32),
          (System_Int32_array **)vals,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        if ( !vals )
          goto LABEL_129;
        max_length = vals->max_length;
        if ( max_length < 1 )
          goto LABEL_86;
        v54 = 0;
        while ( 2 )
        {
          if ( v54 >= (unsigned int)max_length )
            goto LABEL_132;
          eventMissionActionList = System_Int32__Parse(vals->m_Items[v54], 0LL);
          if ( (_DWORD)eventMissionActionList != 800 )
          {
            max_length = vals->max_length;
            v54 += 2;
            if ( v54 >= max_length )
              goto LABEL_86;
            continue;
          }
          break;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v73 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v73
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v73 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        v74 = *(System_Int32_array ***)(eventMissionActionList + 1544);
        *(_QWORD *)(optionId + 40) = v74;
        sub_B2C2F8((BattleServantConfConponent_o *)(optionId + 40), v74, v67, v68, v69, v70, v71, v72);
LABEL_86:
        MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
          (MissionActionManager_o *)eventMissionActionList,
          0,
          v52);
        this->fields.isGoneTerminal = 1;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( eventMissionActionList )
              {
                optionId = *(_QWORD *)(eventMissionActionList + 24);
                VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0LL);
                v88 = (System_Action_o *)sub_B2C42C(*v4);
                System_Action___ctor(v88, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                v89 = (System_Action_o *)sub_B2C42C(*v4);
                System_Action___ctor(v89, (Il2CppObject *)this, *v6, 0LL);
                if ( optionId )
                {
                  v90 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) >= (unsigned int)v90
                    && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v90 - 8) == EventRewardRootComponent_TypeInfo )
                  {
                    EventRewardRootComponent__playEventMissionSvtVoice_19033512(
                      (EventRewardRootComponent_o *)optionId,
                      VoiceIds,
                      v88,
                      v89,
                      0LL);
                    return;
                  }
LABEL_131:
                  eventMissionActionList = sub_B2C728(optionId);
LABEL_132:
                  v100 = sub_B2C460(eventMissionActionList);
                  sub_B2C400(v100, 0LL);
                }
              }
LABEL_129:
              sub_B2C434(eventMissionActionList, method);
            }
          }
        }
        v19 = v7;
        v20 = v5;
        v21 = v6;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        optionId = *(_QWORD *)(eventMissionActionList + 24);
        v22 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
        v23 = v4;
        v24 = (System_Action_o *)sub_B2C42C(*v4);
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
        v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v64 = v9->fields.vals;
        v65 = (CommonUI_o *)v63;
        v66 = (System_Action_o *)sub_B2C42C(*v4);
        System_Action___ctor(v66, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
        if ( !v65 )
          goto LABEL_129;
        CommonUI__OpenImageDialogWithAssets(v65, v64, v66, 0LL, 0LL, 0LL);
        return;
      case 7:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v12 = eventMissionActionList;
        v13 = *v5;
        optionId = *(_QWORD *)(v12 + 1240);
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v13);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
          continue;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !eventMissionActionList )
                goto LABEL_129;
              v97 = *(MasterMissionComponent_o **)(eventMissionActionList + 1248);
              v98 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
              v99 = (System_Action_o *)sub_B2C42C(*v4);
              System_Action___ctor(v99, (Il2CppObject *)this, *v6, 0LL);
              if ( !v97 )
                goto LABEL_129;
              MasterMissionComponent__playEventMissionSvtVoice_21085348(v97, v98, v99, 0LL);
              return;
            }
          }
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v34; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x24
  EventMissionActionInfo_o *v38; // x25
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIDnType; // x0
  Il2CppObject *v43; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  EventMissionActionInfo_o *v45; // x21
  __int64 v46; // x0
  __int64 v47; // x1
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+10h] [xbp-B0h] BYREF
  int v49[2]; // [xsp+28h] [xbp-98h]
  int v50; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_41872E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v15);
    sub_B2C35C(&EventMissionActionInfo_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v22);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_41872E0 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&v51, 0, sizeof(v51));
  v50 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v25;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventMissionActionList,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_32:
    sub_B2C434(Instance, v34);
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
      &v48,
      SafeActionListFromIDnType,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v52 = v48;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v52,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v52.fields.current;
      v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v38 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27194656(v38, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v37 )
        sub_B2C434(v39, v40);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v37,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v49[0] = 232;
    v50 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v52,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v50 = 0;
    goto LABEL_30;
  }
LABEL_16:
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      &v51,
      EntityListFromIDnType,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v51,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v43 = v51.fields.current;
      v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v45 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v45, (EventMissionActionEntity_o *)v43, 0LL);
      if ( !v44 )
        sub_B2C434(v46, v47);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v44,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v49[0] = 232;
    ++v50;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v51,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v50 )
    {
      if ( v49[v50 - 1] == 232 )
        --v50;
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
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v26; // x23
  MissionActionManager___c_c *v27; // x0
  struct MissionActionManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_0; // x24
  Il2CppObject *v30; // x25
  struct MissionActionManager___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v38; // x20
  MissionActionManager___c_c *v39; // x0
  struct MissionActionManager___c_StaticFields *v40; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_1; // x21
  Il2CppObject *v42; // x22
  struct MissionActionManager___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_41872E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v13);
    sub_B2C35C(&Method_System_Predicate_EventMissionActionEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v15);
    sub_B2C35C(&System_Predicate_EventMissionActionEntity__TypeInfo, v16);
    sub_B2C35C(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B2C35C(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v21);
    sub_B2C35C(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v22);
    sub_B2C35C(&MissionActionManager___c_TypeInfo, v23);
    byte_41872E2 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
  v26 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance;
  if ( !Instance )
    goto LABEL_42;
  if ( Instance->fields._size >= 1 )
  {
    v27 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v27 = MissionActionManager___c_TypeInfo;
    }
    static_fields = v27->static_fields;
    _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        static_fields = MissionActionManager___c_TypeInfo->static_fields;
      }
      v30 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_0,
        v30,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
      v31 = MissionActionManager___c_TypeInfo->static_fields;
      v31->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v31->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v26,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
  v38 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance;
  if ( !Instance )
    goto LABEL_42;
  if ( Instance->fields._size >= 1 )
  {
    v39 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v39 = MissionActionManager___c_TypeInfo;
    }
    v40 = v39->static_fields;
    _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v40->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v40 = MissionActionManager___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)v40->__9;
      _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_1,
        v42,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
      v43 = MissionActionManager___c_TypeInfo->static_fields;
      v43->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v43->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v38,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_2EF4CEC *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++Instance[1].fields._version;
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_42:
      sub_B2C434(Instance, v25);
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D25 & 1) == 0 )
  {
    sub_B2C35C(&MissionActionManager___c_TypeInfo, v1);
    byte_4185D25 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionActionManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.missionActionType == 6;
}