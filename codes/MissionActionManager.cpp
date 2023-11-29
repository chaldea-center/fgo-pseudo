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

  if ( (byte_40F7BC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff);
    byte_40F7BC3 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B16F98(
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

  if ( (byte_40F7BC5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7BC5 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v4, v5, v6, v7, v8, v9);
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
    UnityEngine_Object__Destroy_34809464(v11, 0LL);
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

  if ( (byte_40F7BC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7BC4 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v6, v7, v8, v9, v10, v11);
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
      UnityEngine_Object__Destroy_34809464(v13, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21
  WebViewManager_o *v17; // x0
  EventRewardRootComponent_o *basePanel; // x0
  __int64 v19; // x9
  MissionActionManager_o *v20; // x0
  bool v21; // w1
  const MethodInfo *v22; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_40F7BC6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, skip);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v5);
    sub_B16FFC(&Method_MissionActionManager_doMissionAction__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40F7BC6 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v16, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v16, 0LL),
        (v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (basePanel = (EventRewardRootComponent_o *)v17->fields.basePanel) == 0LL )
  {
    sub_B170D4();
  }
  v19 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v19
    && (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v19 - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(basePanel, 0LL);
  }
  else
  {
    v20 = (MissionActionManager_o *)sub_B173C8(basePanel);
    MissionActionManager___doMissionAction_b__9_1(v20, v21, v22);
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
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21
  WebViewManager_o *v17; // x0
  TerminalSceneComponent_o *basePanel; // x0
  __int64 v19; // x9
  MissionActionManager_o *v20; // x0
  const MethodInfo *v21; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_40F7BC7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, skip);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_MissionActionManager_doMissionAction__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_B16FFC(&TerminalSceneComponent_TypeInfo, v8);
    byte_40F7BC7 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v16, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v16, 0LL),
        (v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (basePanel = (TerminalSceneComponent_o *)v17->fields.basePanel) == 0LL )
  {
    sub_B170D4();
  }
  v19 = *(&TerminalSceneComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v19
    && (TerminalSceneComponent_c *)basePanel->klass->_2.typeHierarchy[v19 - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_19157196(basePanel, 0LL);
  }
  else
  {
    v20 = (MissionActionManager_o *)sub_B173C8(basePanel);
    MissionActionManager___doMissionAction_b__9_2(v20, v21);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0

  if ( (byte_40F7BC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40F7BC8 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v4 )
      sub_B170D4();
    MissionNotifyManager__EndPause(v4, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v36; // x21
  __int64 *v37; // x8
  System_Collections_Generic_List_Enumerator_T__o *v38; // x0
  WebViewManager_o *v39; // x0
  EventMissionActionMaster_o *v40; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x22
  EventMissionActionInfo_o *v52; // x21
  BattleServantConfConponent_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F7BBF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v13);
    sub_B16FFC(&EventMissionActionInfo_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_40F7BBF = 1;
  }
  memset(&v62, 0, sizeof(v62));
  memset(&v61, 0, sizeof(v61));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            MasterData_WarQuestSelectionMaster,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v29 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromIDnType;
    v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                    v25,
                                                                                                    v26,
                                                                                                    v27,
                                                                                                    v28);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v30,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v62,
      v29,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v62,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v62.fields.current;
      v36 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v31, v32, v33, v34);
      EventMissionActionInfo___ctor_22515852(v36, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v30 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v37 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v38 = &v62;
    goto LABEL_19;
  }
  v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v39
    || (v40 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v39,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_24:
    sub_B170D4();
  }
  v41 = EventMissionActionMaster__getEntityListFromIDnType(v40, missionID, progressType, 0LL);
  if ( !v41 )
    return;
  v46 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v41;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    v46,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v51 = v61.fields.current;
    v52 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v47, v48, v49, v50);
    EventMissionActionInfo___ctor(v52, (EventMissionActionEntity_o *)v51, 0LL);
    if ( !v30 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
  }
  v37 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
  v38 = &v61;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    v38,
    (const MethodInfo_2074050 *)*v37);
  if ( !v30 )
    goto LABEL_24;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (BattleServantConfConponent_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v30,
    eventMissionActionList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (BattleServantConfConponent_c *)v30;
  sub_B16F98(p_eventMissionActionList, (System_Int32_array **)v30, v55, v56, v57, v58, v59, v60);
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
  WebViewManager_o *Instance; // x0
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionActionAddEntity__o *v24; // x21
  MissionActionManager___c_c *v25; // x0
  struct MissionActionManager___c_StaticFields *v26; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_0; // x19
  Il2CppObject *v28; // x20
  struct MissionActionManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 *v36; // x8
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v37; // x0
  System_Predicate_T__o *v38; // x1
  WebViewManager_o *v39; // x0
  EventMissionActionMaster_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_EventMissionActionEntity__o *v45; // x19
  MissionActionManager___c_c *v46; // x8
  struct MissionActionManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_1; // x20
  Il2CppObject *v49; // x21
  struct MissionActionManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_40F7BC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&progressType);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Predicate_EventMissionActionEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v10);
    sub_B16FFC(&System_Predicate_EventMissionActionEntity__TypeInfo, v11);
    sub_B16FFC(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&Method_MissionActionManager___c__checkScroll_b__8_0__, v14);
    sub_B16FFC(&Method_MissionActionManager___c__checkScroll_b__8_1__, v15);
    sub_B16FFC(&MissionActionManager___c_TypeInfo, v16);
    byte_40F7BC1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            MasterData_WarQuestSelectionMaster,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType || (v24 = EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v39 )
    {
      v40 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v39,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( v40 )
      {
        v45 = EventMissionActionMaster__getEntityListFromIDnType(v40, missionID, progressType, 0LL);
        v46 = MissionActionManager___c_TypeInfo;
        if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v46 = MissionActionManager___c_TypeInfo;
        }
        static_fields = v46->static_fields;
        _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            static_fields = MissionActionManager___c_TypeInfo->static_fields;
          }
          v49 = (Il2CppObject *)static_fields->__9;
          _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                               System_Predicate_EventMissionActionEntity__TypeInfo,
                                                                               v41,
                                                                               v42,
                                                                               v43,
                                                                               v44);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__8_1,
            v49,
            Method_MissionActionManager___c__checkScroll_b__8_1__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
          v50 = MissionActionManager___c_TypeInfo->static_fields;
          v50->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v50->__9__8_1,
            (System_Int32_array **)_9__8_1,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
        }
        if ( v45 )
        {
          v36 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v37 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v45;
          v38 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                   v37,
                   v38,
                   (const MethodInfo_2F26564 *)*v36);
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  v25 = MissionActionManager___c_TypeInfo;
  if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v25 = MissionActionManager___c_TypeInfo;
  }
  v26 = v25->static_fields;
  _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v26->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v26 = MissionActionManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                                                         v20,
                                                                         v21,
                                                                         v22,
                                                                         v23);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__8_0,
      v28,
      Method_MissionActionManager___c__checkScroll_b__8_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    v29 = MissionActionManager___c_TypeInfo->static_fields;
    v29->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v37 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v24;
  v38 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(v37, v38, (const MethodInfo_2F26564 *)*v36);
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
  AvalonSceneManager_o *v10; // x0
  __int64 v11; // x3
  __int64 v12; // x4
  WebViewManager_o *v13; // x0
  EventRewardRootComponent_o *basePanel; // x0
  __int64 v15; // x9
  WebViewManager_o *v16; // x0
  WebViewManager_o *v17; // x8
  UnityEngine_Object_c *v18; // x0
  AvalonSceneManager_o *v19; // x0
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v20; // x8
  EventMissionActionInfo_o *v21; // x8
  WebViewManager_o *v22; // x0
  System_String_array *v23; // x0
  WebViewManager_o *v24; // x0
  __int64 v25; // x9
  AvalonSceneManager_o *v26; // x0
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v27; // x8
  EventMissionActionInfo_o *v28; // x8
  ScriptManager_c **v29; // x22
  UnityEngine_Object_c **v30; // x28
  __int64 *v31; // x26
  WebViewManager_o *v32; // x0
  System_String_array *v33; // x25
  System_Action_c **v34; // x27
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x23
  __int64 v40; // x9
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v60; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct System_String_array *vals; // x21
  MissionActionManager_o *v68; // x0
  __int64 v69; // x1
  const MethodInfo *v70; // x2
  int max_length; // w8
  int v72; // w22
  AvalonSceneManager_o *Instance; // x0
  WebViewManager_o *v74; // x0
  __int64 v75; // x9
  System_String_o *ValMessage; // x20
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  ScriptManager_CallbackFunc_o *v81; // x0
  __int64 *v82; // x8
  CommonUI_o *v83; // x20
  System_String_o *v84; // x21
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Action_o *v89; // x22
  AvalonSceneManager_o *v90; // x0
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v91; // x8
  WebViewManager_o *v92; // x0
  System_String_array *v93; // x20
  CommonUI_o *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  System_Action_o *v99; // x22
  WebViewManager_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  __int64 v107; // x9
  System_Int32_array **lastAssetName; // x1
  AvalonSceneManager_o *v109; // x0
  AvalonSceneManager_o *v110; // x0
  WebViewManager_o *v111; // x0
  MasterMissionComponent_o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  ScriptManager_CallbackFunc_o *v117; // x21
  ScriptManager_c *v118; // x0
  WebViewManager_o *v119; // x0
  WebViewManager_o *v120; // x8
  UnityEngine_Object_c *v121; // x0
  UnityEngine_Object_o *callbackFunc; // x20
  WebViewManager_o *v123; // x0
  struct System_Action_o *v124; // x8
  CompleteMissionListViewManager_o *data; // x20
  int32_t v126; // w21
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  System_Action_o *v131; // x22
  AvalonSceneManager_o *v132; // x0
  WebViewManager_o *v133; // x0
  MasterMissionComponent_o *v134; // x0
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v136; // w21
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  System_Action_o *v141; // x22
  WebViewManager_o *v142; // x0
  System_String_array *VoiceIds; // x21
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  System_Action_o *v148; // x22
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  System_Action_o *v153; // x23
  __int64 v154; // x9
  int32_t ValID; // w0
  const MethodInfo *v156; // x3
  WebViewManager_o *v157; // x0
  __int64 v158; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v160; // w22
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  System_Action_o *v165; // x23
  WebViewManager_o *v166; // x0
  MasterMissionComponent_o *v167; // x20
  System_String_array *v168; // x21
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  System_Action_o *v173; // x22

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  v7 = &ScriptManager_TypeInfo;
  while ( 2 )
  {
    if ( (byte_40F7BC2 & 1) == 0 )
    {
      sub_B16FFC(v4, method);
      sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v41);
      sub_B16FFC(&EventRewardRootComponent_TypeInfo, v42);
      sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v43);
      sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v44);
      sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v45);
      sub_B16FFC(&Method_MissionActionManager__doMissionAction_b__9_0__, v46);
      sub_B16FFC(&Method_MissionActionManager__doMissionAction_b__9_1__, v47);
      sub_B16FFC(&Method_MissionActionManager__doMissionAction_b__9_2__, v48);
      sub_B16FFC(&Method_MissionActionManager__doMissionAction_b__9_3__, v49);
      sub_B16FFC(&Method_MissionActionManager_VoiceEnds__, v50);
      sub_B16FFC(v6, v51);
      sub_B16FFC(v5, v52);
      sub_B16FFC(v7, v53);
      sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v54);
      sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v55);
      sub_B16FFC(&TerminalTransitionInfo_TypeInfo, v56);
      sub_B16FFC(&StringLiteral_1, v57);
      byte_40F7BC2 = 1;
    }
    eventMissionActionList = this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_129;
    if ( eventMissionActionList->fields._size <= 0 )
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
          v60 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          UnityEngine_Object__Destroy_34809464(v60, 0LL);
        }
      }
      return;
    }
    v9 = eventMissionActionList->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMissionActionList,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
    if ( !v9 )
      goto LABEL_129;
    switch ( v9->fields.missionActionType )
    {
      case 1:
        Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Instance )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene(Instance, 72, 0LL) )
        {
          v110 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !v110 )
            goto LABEL_129;
          if ( !AvalonSceneManager__checkNowScene(v110, 34, 0LL) )
            return;
          v111 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !v111 )
            goto LABEL_129;
          v112 = *(MasterMissionComponent_o **)&v111[11].fields.isButtonEnable;
          if ( !v112 )
            goto LABEL_129;
          MasterMissionComponent__stopSvtVoice(v112, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v81 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v113, v114, v115, v116);
          v82 = &Method_MissionActionManager__doMissionAction_b__9_1__;
LABEL_94:
          v117 = v81;
          ScriptManager_CallbackFunc___ctor(v81, (Il2CppObject *)this, *v82, 0LL);
          v118 = *v7;
          if ( (BYTE3((*v7)->vtable._0_Equals.methodPtr) & 4) != 0 && !v118->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v118);
          ScriptManager__PlayScenario(ValMessage, v117, 0, 0LL);
          return;
        }
        this->fields.isVoicePlaying = 0;
        v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v74 )
          goto LABEL_129;
        basePanel = (EventRewardRootComponent_o *)v74->fields.basePanel;
        if ( !basePanel )
          goto LABEL_129;
        v75 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v75
          && (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v75 - 1] == EventRewardRootComponent_TypeInfo )
        {
          EventRewardRootComponent__stopSvtVoice(basePanel, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v9, 0LL);
          v81 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v77, v78, v79, v80);
          v82 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          goto LABEL_94;
        }
        goto LABEL_130;
      case 2:
        v83 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v84 = EventMissionActionInfo__getValMessage(v9, 0LL);
        v89 = (System_Action_o *)sub_B170CC(*v4, v85, v86, v87, v88);
        System_Action___ctor(v89, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
        if ( !v83 )
          goto LABEL_129;
        CommonUI__OpenNotificationDialog(
          v83,
          (System_String_o *)StringLiteral_1,
          v84,
          v89,
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
        v90 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v90 )
          goto LABEL_129;
        if ( AvalonSceneManager__checkNowScene(v90, 72, 0LL) )
        {
          v91 = this->fields.eventMissionActionList;
          if ( !v91 )
            goto LABEL_129;
          optionId = v91->fields._size < 1 ? 0LL : (__int64)v91->fields._items->m_Items[0];
          ValID = EventMissionActionInfo__getValID(v9, 0LL);
          MissionActionManager__addMissionAction(this, ValID, 3, v156);
          v157 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !v157 )
            goto LABEL_129;
          basePanel = (EventRewardRootComponent_o *)v157->fields.basePanel;
          if ( !basePanel )
            goto LABEL_129;
          v158 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
          if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v158
            && (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v158 - 1] == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(basePanel, 0LL);
            v160 = EventMissionActionInfo__getValID(v9, 0LL);
            v165 = (System_Action_o *)sub_B170CC(*v4, v161, v162, v163, v164);
            System_Action___ctor(v165, (Il2CppObject *)this, *v6, 0LL);
            if ( !missionItemListViewManager )
              goto LABEL_129;
            EventMissionItemListViewManager__setNextMissionInfo(
              missionItemListViewManager,
              v9,
              (EventMissionActionInfo_o *)optionId,
              v160,
              v165,
              0LL);
            return;
          }
LABEL_130:
          sub_B173C8(basePanel);
          goto LABEL_131;
        }
        v119 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v119 )
          goto LABEL_129;
        v120 = v119;
        v121 = *v5;
        callbackFunc = (UnityEngine_Object_o *)v120[11].fields.callbackFunc;
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v121);
        if ( UnityEngine_Object__op_Inequality(callbackFunc, 0LL, 0LL) )
        {
          v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v123 )
          {
            v124 = v123[11].fields.callbackFunc;
            if ( v124 )
            {
              data = (CompleteMissionListViewManager_o *)v124->fields.data;
              v126 = EventMissionActionInfo__getValID(v9, 0LL);
              v131 = (System_Action_o *)sub_B170CC(*v4, v127, v128, v129, v130);
              System_Action___ctor(v131, (Il2CppObject *)this, *v6, 0LL);
              if ( data )
              {
                CompleteMissionListViewManager__setNextMissionInfo(data, v126, v131, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        v132 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v132 )
          goto LABEL_129;
        if ( AvalonSceneManager__checkNowScene(v132, 34, 0LL) )
        {
          v133 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( v133 )
          {
            v134 = *(MasterMissionComponent_o **)&v133[11].fields.isButtonEnable;
            if ( v134 )
            {
              listViewManager = MasterMissionComponent__get_listViewManager(v134, 0LL);
              v136 = EventMissionActionInfo__getValID(v9, 0LL);
              v141 = (System_Action_o *)sub_B170CC(*v4, v137, v138, v139, v140);
              System_Action___ctor(v141, (Il2CppObject *)this, *v6, 0LL);
              if ( listViewManager )
              {
                MasterMissionListViewManager__setNextMissionInfo(listViewManager, v136, v141, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        return;
      case 4:
        v10 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v10 )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene(v10, 72, 0LL) )
          continue;
        optionId = (unsigned int)v9->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_57;
        v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v13 )
          goto LABEL_129;
        basePanel = (EventRewardRootComponent_o *)v13->fields.basePanel;
        if ( !basePanel )
          goto LABEL_129;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v15 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v15
          || (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v15 - 1] != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        if ( (_DWORD)optionId != basePanel->fields._currentEventSvtId_k__BackingField )
          continue;
LABEL_57:
        optionId = sub_B170CC(TerminalTransitionInfo_TypeInfo, method, v2, v11, v12);
        TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)optionId, 0LL);
        if ( !optionId )
          goto LABEL_129;
        *(_DWORD *)(optionId + 16) = v9->fields.missionId;
        vals = v9->fields.vals;
        *(_DWORD *)(optionId + 48) = v9->fields.optionId;
        *(_QWORD *)(optionId + 32) = vals;
        sub_B16F98(
          (BattleServantConfConponent_o *)(optionId + 32),
          (System_Int32_array **)vals,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
        if ( !vals )
          goto LABEL_129;
        max_length = vals->max_length;
        if ( max_length < 1 )
          goto LABEL_86;
        v72 = 0;
        while ( 2 )
        {
          if ( v72 >= (unsigned int)max_length )
            goto LABEL_132;
          v68 = (MissionActionManager_o *)System_Int32__Parse(vals->m_Items[v72], 0LL);
          if ( (_DWORD)v68 != 800 )
          {
            max_length = vals->max_length;
            v72 += 2;
            if ( v72 >= max_length )
              goto LABEL_86;
            continue;
          }
          break;
        }
        v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v100 )
          goto LABEL_129;
        basePanel = (EventRewardRootComponent_o *)v100->fields.basePanel;
        if ( !basePanel )
          goto LABEL_129;
        v107 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v107
          || (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v107 - 1] != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        lastAssetName = (System_Int32_array **)basePanel->fields.lastAssetName;
        *(_QWORD *)(optionId + 40) = lastAssetName;
        sub_B16F98((BattleServantConfConponent_o *)(optionId + 40), lastAssetName, v101, v102, v103, v104, v105, v106);
LABEL_86:
        MissionActionManager__SetBackGroundUntouchableWhileMissionAction(v68, 0, v70);
        this->fields.isGoneTerminal = 1;
        v109 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v109 )
          goto LABEL_129;
        AvalonSceneManager__transitionScene(v109, 34, 1, (Il2CppObject *)optionId, 0LL);
        if ( !this->fields.isVoicePlaying )
          goto LABEL_49;
        return;
      case 5:
        optionId = (unsigned int)v9->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_33;
        v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v24 )
          goto LABEL_129;
        basePanel = (EventRewardRootComponent_o *)v24->fields.basePanel;
        if ( !basePanel )
          goto LABEL_129;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v25 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v25
          || (EventRewardRootComponent_c *)basePanel->klass->_2.typeHierarchy[v25 - 1] != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        if ( (_DWORD)optionId != basePanel->fields._currentEventSvtId_k__BackingField )
          continue;
LABEL_33:
        v26 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v26 )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene(v26, 72, 0LL) )
          continue;
        v27 = this->fields.eventMissionActionList;
        this->fields.isVoicePlaying = 1;
        if ( !v27 )
          goto LABEL_129;
        if ( v27->fields._size >= 1 )
        {
          v28 = v27->fields._items->m_Items[0];
          if ( v28 )
          {
            if ( v28->fields.missionActionType == 8 )
            {
              v142 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( v142 )
              {
                optionId = (__int64)v142->fields.basePanel;
                VoiceIds = EventMissionActionInfo__getVoiceIds(v9, 0LL);
                v148 = (System_Action_o *)sub_B170CC(*v4, v144, v145, v146, v147);
                System_Action___ctor(v148, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                v153 = (System_Action_o *)sub_B170CC(*v4, v149, v150, v151, v152);
                System_Action___ctor(v153, (Il2CppObject *)this, *v6, 0LL);
                if ( optionId )
                {
                  v154 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) >= (unsigned int)v154
                    && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v154 - 8) == EventRewardRootComponent_TypeInfo )
                  {
                    EventRewardRootComponent__playEventMissionSvtVoice_17552816(
                      (EventRewardRootComponent_o *)optionId,
                      VoiceIds,
                      v148,
                      v153,
                      0LL);
                    return;
                  }
LABEL_131:
                  v68 = (MissionActionManager_o *)sub_B173C8(optionId);
LABEL_132:
                  sub_B17100(v68, v69, v70);
                  sub_B170A0();
                }
              }
LABEL_129:
              sub_B170D4();
            }
          }
        }
        v29 = v7;
        v30 = v5;
        v31 = v6;
        v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v32 )
          goto LABEL_129;
        optionId = (__int64)v32->fields.basePanel;
        v33 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
        v34 = v4;
        v39 = (System_Action_o *)sub_B170CC(*v4, v35, v36, v37, v38);
        System_Action___ctor(v39, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
        if ( !optionId )
          goto LABEL_129;
        v40 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) < (unsigned int)v40
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v40 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_131;
        }
        EventRewardRootComponent__playEventMissionSvtVoice((EventRewardRootComponent_o *)optionId, v33, v39, 0LL);
        v4 = v34;
        v6 = v31;
        v5 = v30;
        v7 = v29;
        continue;
      case 6:
        v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v93 = v9->fields.vals;
        v94 = (CommonUI_o *)v92;
        v99 = (System_Action_o *)sub_B170CC(*v4, v95, v96, v97, v98);
        System_Action___ctor(v99, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
        if ( !v94 )
          goto LABEL_129;
        CommonUI__OpenImageDialogWithAssets(v94, v93, v99, 0LL, 0LL, 0LL);
        return;
      case 7:
        v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v16 )
          goto LABEL_129;
        v17 = v16;
        v18 = *v5;
        optionId = (__int64)v17[11].fields.callbackFunc;
        if ( (BYTE3((*v5)->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v18);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
          continue;
        v19 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v19 )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene(v19, 34, 0LL) )
          continue;
        v20 = this->fields.eventMissionActionList;
        if ( !v20 )
          goto LABEL_129;
        if ( v20->fields._size >= 1 )
        {
          v21 = v20->fields._items->m_Items[0];
          if ( v21 )
          {
            if ( v21->fields.missionActionType == 8 )
            {
              v166 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !v166 )
                goto LABEL_129;
              v167 = *(MasterMissionComponent_o **)&v166[11].fields.isButtonEnable;
              v168 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
              v173 = (System_Action_o *)sub_B170CC(*v4, v169, v170, v171, v172);
              System_Action___ctor(v173, (Il2CppObject *)this, *v6, 0LL);
              if ( !v167 )
                goto LABEL_129;
              MasterMissionComponent__playEventMissionSvtVoice_27290276(v167, v168, v173, 0LL);
              return;
            }
          }
        }
        v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v22 )
          goto LABEL_129;
        optionId = *(_QWORD *)&v22[11].fields.isButtonEnable;
        v23 = EventMissionActionInfo__getVoiceIds(v9, 0LL);
        if ( !optionId )
          goto LABEL_129;
        MasterMissionComponent__playEventMissionSvtVoice((MasterMissionComponent_o *)optionId, v23, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SafeActionListFromIDnType; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *current; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x24
  EventMissionActionInfo_o *v42; // x25
  const MethodInfo *v43; // x1
  WebViewManager_o *v44; // x0
  EventMissionActionMaster_o *v45; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIDnType; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  EventMissionActionInfo_o *v53; // x21
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+10h] [xbp-B0h] BYREF
  int v55[2]; // [xsp+28h] [xbp-98h]
  int v56; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40F7BBE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v15);
    sub_B16FFC(&EventMissionActionInfo_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v22);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_40F7BBE = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  v56 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                                                                  *(_QWORD *)&missionID,
                                                                                                  *(_QWORD *)&progressType,
                                                                                                  restricted,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v25;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventMissionActionList,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_32:
    sub_B170D4();
  }
  if ( restricted )
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType(MasterData_WarQuestSelectionMaster, missionID, progressType, 0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_16;
  }
  else
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIDnType(MasterData_WarQuestSelectionMaster, missionID, progressType, 0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_16;
  }
  if ( SafeActionListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      SafeActionListFromIDnType,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v58 = v54;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v58,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v58.fields.current;
      v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v42 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v36, v37, v38, v39);
      EventMissionActionInfo___ctor_22515852(v42, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v41 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v41,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v55[0] = 232;
    v56 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v58,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v56 = 0;
    goto LABEL_30;
  }
LABEL_16:
  v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v44 )
    goto LABEL_32;
  v45 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v44,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !v45 )
    goto LABEL_32;
  if ( restricted )
  {
    EntityListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionMaster__getSafeActionListFromIDnType(v45, missionID, progressType, 0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_30;
  }
  else
  {
    EntityListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionMaster__getEntityListFromIDnType(v45, missionID, progressType, 0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_30;
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v57,
      EntityListFromIDnType,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v57,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v51 = v57.fields.current;
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v53 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v47, v48, v49, v50);
      EventMissionActionInfo___ctor(v53, (EventMissionActionEntity_o *)v51, 0LL);
      if ( !v52 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v55[0] = 232;
    ++v56;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v57,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v56 )
    {
      if ( v55[v56 - 1] == 232 )
        --v56;
    }
  }
LABEL_30:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v43);
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
  WebViewManager_o *Instance; // x0
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v31; // x23
  MissionActionManager___c_c *v32; // x0
  struct MissionActionManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_0; // x24
  Il2CppObject *v35; // x25
  struct MissionActionManager___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewManager_o *v43; // x0
  EventMissionActionMaster_o *v44; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *EntityListFromIDnType; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v50; // x20
  MissionActionManager___c_c *v51; // x0
  struct MissionActionManager___c_StaticFields *v52; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_1; // x21
  Il2CppObject *v54; // x22
  struct MissionActionManager___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  MissionNotifyManager_o *v62; // x0

  if ( (byte_40F7BC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Predicate_EventMissionActionEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v15);
    sub_B16FFC(&System_Predicate_EventMissionActionEntity__TypeInfo, v16);
    sub_B16FFC(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B16FFC(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v21);
    sub_B16FFC(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v22);
    sub_B16FFC(&MissionActionManager___c_TypeInfo, v23);
    byte_40F7BC0 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  v26 = restricted
      ? EventMissionActionAddMaster__GetSafeActionListFromIDnType(
          MasterData_WarQuestSelectionMaster,
          missionID,
          progressType,
          0LL)
      : EventMissionActionAddMaster__GetEntityListFromIDnType(
          MasterData_WarQuestSelectionMaster,
          missionID,
          progressType,
          0LL);
  v31 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v26;
  if ( !v26 )
    goto LABEL_42;
  if ( v26->fields._size >= 1 )
  {
    v32 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v32 = MissionActionManager___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = MissionActionManager___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                                                           v27,
                                                                           v28,
                                                                           v29,
                                                                           v30);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_0,
        v35,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
      v36 = MissionActionManager___c_TypeInfo->static_fields;
      v36->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v36->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v31,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      goto LABEL_40;
    }
  }
  if ( (v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL
    || (v44 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v43,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL
    || (!restricted
      ? (EntityListFromIDnType = EventMissionActionMaster__getEntityListFromIDnType(v44, missionID, progressType, 0LL))
      : (EntityListFromIDnType = EventMissionActionMaster__getSafeActionListFromIDnType(
                                   v44,
                                   missionID,
                                   progressType,
                                   0LL)),
        (v50 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)EntityListFromIDnType) == 0LL) )
  {
LABEL_42:
    sub_B170D4();
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    v51 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v51 = MissionActionManager___c_TypeInfo;
    }
    v52 = v51->static_fields;
    _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v52->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v52 = MissionActionManager___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)v52->__9;
      _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_EventMissionActionEntity__TypeInfo,
                                                                           v46,
                                                                           v47,
                                                                           v48,
                                                                           v49);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_1,
        v54,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_EventMissionActionEntity___ctor__);
      v55 = MissionActionManager___c_TypeInfo->static_fields;
      v55->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v55->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v50,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      v62 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( v62 )
      {
        MissionNotifyManager__StartPause(v62, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F861B & 1) == 0 )
  {
    sub_B16FFC(&MissionActionManager___c_TypeInfo, v1);
    byte_40F861B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MissionActionManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MissionActionManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.missionActionType == 6;
}