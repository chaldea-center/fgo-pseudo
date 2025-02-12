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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BB827B & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff);
    byte_4BB827B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v5);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, onoff, 0LL);
}


void __fastcall MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.afterVoiceCallback,
      (int64_t)callback,
      (int64_t)method,
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4BB827D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB827D = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.afterVoiceCallback, 0LL, v4, v5, v6, v7, v8, v9);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v11, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4BB827C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB827C = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.afterVoiceCallback, 0LL, v6, v7, v8, v9, v10, v11);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70721988(v13, 0LL);
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
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v17; // x0
  bool v18; // w1
  const MethodInfo *v19; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_4BB827E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, skip);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&EventRewardRootComponent_TypeInfo, v5);
    sub_1C13D24(&Method_MissionActionManager_doMissionAction__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    byte_4BB827E = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v11
    || (CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1C13F80(myFSM, v15);
  }
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    sub_1C14240(myFSM);
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
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v15; // x1
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v17; // x0
  const MethodInfo *v18; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_4BB827F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, skip);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&Method_MissionActionManager_doMissionAction__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_1C13D24(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BB827F = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v13, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v11
    || (CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1C13F80(myFSM, v15);
  }
  methodPtr_low = LOBYTE(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_43397292(myFSM, 0LL);
  }
  else
  {
    sub_1C14240(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v17, v18);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v5; // w8

  if ( (byte_4BB8280 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB8280 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1C13F80(0LL, method);
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
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_object__o *v25; // x22
  System_Collections_Generic_List_object__o *v26; // x20
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  const MethodInfo_33BEBE4 *v41; // x1
  System_Collections_Generic_List_Enumerator_object__o *v42; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v43; // x0
  System_Collections_Generic_List_object__o *v44; // x21
  Il2CppObject *v45; // x22
  EventMissionActionInfo_o *v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  PartyOrganizationUtility_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BB8277 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v13);
    sub_1C13D24(&EventMissionActionInfo_TypeInfo, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v19);
    sub_1C13D24(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4BB8277 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  memset(&v68, 0, sizeof(v68));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_32;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v25 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType;
    v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v67,
      v25,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v69 = v67;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v69,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v69.fields._current;
      v28 = (EventMissionActionInfo_o *)sub_1C13F70(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43269212(v28, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v26 )
        sub_1C13F80(v29, v30);
      items = v26->fields._items;
      v38 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1C13F80(v29, v30);
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v28,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v26->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v28;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v28, v31, v32, v33, v34, v35, v36);
      }
    }
    v41 = (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v42 = &v69;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_32:
    sub_1C13F80(Instance, v23);
  }
  v43 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v43 )
    return;
  v44 = (System_Collections_Generic_List_object__o *)v43;
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    v44,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v68 = v67;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v45 = v68.fields._current;
    v46 = (EventMissionActionInfo_o *)sub_1C13F70(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v46, (EventMissionActionEntity_o *)v45, 0LL);
    if ( !v26 )
      sub_1C13F80(v47, v48);
    v55 = v26->fields._items;
    v56 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
    ++v26->fields._version;
    if ( !v55 )
      sub_1C13F80(v47, v48);
    v57 = v26->fields._size;
    if ( (unsigned int)v57 >= v55->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        (Il2CppObject *)v46,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      v26->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v46;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v46, v49, v50, v51, v52, v53, v54);
    }
  }
  v42 = &v68;
  v41 = (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v42, v41);
  if ( !v26 )
    goto LABEL_32;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (PartyOrganizationUtility_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v26,
    eventMissionActionList,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (PartyOrganizationUtility_c *)v26;
  sub_1C13CC8(p_eventMissionActionList, (int64_t)v26, v61, v62, v63, v64, v65, v66);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_object__o *v18; // x21
  MissionActionManager___c_c *v19; // x0
  System_Predicate_object__o *_9__8_0; // x19
  Il2CppObject *v21; // x20
  struct MissionActionManager___c_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 *v29; // x8
  System_Collections_Generic_List_object__o *v30; // x0
  System_Predicate_T__o *v31; // x1
  MissionActionManager___c_c *v32; // x8
  DataManager_o *v33; // x19
  System_Predicate_object__o *_9__8_1; // x20
  Il2CppObject *v35; // x21
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BB8279 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&progressType);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v8);
    sub_1C13D24(&System_Predicate_EventMissionActionEntity__TypeInfo, v9);
    sub_1C13D24(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C13D24(&Method_MissionActionManager___c__checkScroll_b__8_0__, v12);
    sub_1C13D24(&Method_MissionActionManager___c__checkScroll_b__8_1__, v13);
    sub_1C13D24(&MissionActionManager___c_TypeInfo, v14);
    byte_4BB8279 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType
    || (v18 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v32 = MissionActionManager___c_TypeInfo;
        v33 = Instance;
        if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v32 = MissionActionManager___c_TypeInfo;
        }
        _9__8_1 = (System_Predicate_object__o *)v32->static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32);
            v32 = MissionActionManager___c_TypeInfo;
          }
          v35 = (Il2CppObject *)v32->static_fields->__9;
          _9__8_1 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_object____ctor(_9__8_1, v35, Method_MissionActionManager___c__checkScroll_b__8_1__, 0LL);
          static_fields = MissionActionManager___c_TypeInfo->static_fields;
          static_fields->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__8_1,
            (int64_t)_9__8_1,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
        }
        if ( v33 )
        {
          v29 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v30 = (System_Collections_Generic_List_object__o *)v33;
          v31 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_object___Exists(v30, v31, (const MethodInfo_362D7F8 *)*v29);
        }
      }
    }
LABEL_25:
    sub_1C13F80(Instance, v16);
  }
  v19 = MissionActionManager___c_TypeInfo;
  if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v19 = MissionActionManager___c_TypeInfo;
  }
  _9__8_0 = (System_Predicate_object__o *)v19->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = MissionActionManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__8_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_object____ctor(_9__8_0, v21, Method_MissionActionManager___c__checkScroll_b__8_0__, 0LL);
    v22 = MissionActionManager___c_TypeInfo->static_fields;
    v22->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v22->__9__8_0, (int64_t)_9__8_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v30 = v18;
  v31 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_object___Exists(v30, v31, (const MethodInfo_362D7F8 *)*v29);
}


void __fastcall MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventRewardRootComponent_o *optionId; // x23
  System_Action_c **v4; // x28
  UnityEngine_Object_c **v5; // x24
  __int64 *v6; // x26
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *eventMissionActionList; // x0
  EventMissionActionInfo_o *v26; // x25
  __int64 v27; // x9
  __int64 v28; // x9
  Il2CppObject *v29; // x0
  Il2CppObject *Item; // x0
  UnityEngine_Object_c **v31; // x20
  __int64 *v32; // x24
  System_String_array *v33; // x25
  System_Action_c **v34; // x26
  System_Action_o *v35; // x28
  __int64 v36; // x9
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v38; // x19
  __int64 methodPtr_low; // x9
  System_String_o *ValMessage; // x20
  ScriptManager_CallbackFunc_o *v41; // x0
  __int64 *v42; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v44; // x21
  System_Action_o *v45; // x22
  EventMissionActionInfo_o *v46; // x20
  Il2CppObject *v47; // x0
  System_String_array *v48; // x20
  CommonUI_o *v49; // x21
  System_Action_o *v50; // x22
  __int64 v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t vals; // x21
  int32_t v59; // w8
  const MethodInfo *v60; // x2
  int v61; // w8
  int v62; // w22
  ScriptManager_CallbackFunc_o *v63; // x21
  UnityEngine_Object_o *syncRoot; // x20
  Il2CppObject *v65; // x8
  CompleteMissionListViewManager_o *monitor; // x20
  int32_t ValID; // w21
  System_Action_o *v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x9
  int64_t v76; // x1
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v78; // w21
  System_Action_o *v79; // x22
  int32_t v80; // w0
  const MethodInfo *v81; // x3
  __int64 v82; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v84; // w22
  System_Action_o *v85; // x23
  EventRewardRootComponent_o *v86; // x20
  System_String_array *VoiceIds; // x21
  System_Action_o *v88; // x23
  System_Action_o *v89; // x24
  __int64 v90; // x9
  MasterMissionComponent_o *klass; // x20
  System_String_array *v92; // x21
  System_Action_o *v93; // x22
  MissionActionManager_o *v94; // x0
  int32_t v95; // w1
  int32_t v96; // w2
  const MethodInfo *v97; // x3

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  while ( 2 )
  {
    if ( (byte_4BB827A & 1) == 0 )
    {
      sub_1C13D24(v4, method);
      sub_1C13D24(&ScriptManager_CallbackFunc_TypeInfo, v8);
      sub_1C13D24(&EventRewardRootComponent_TypeInfo, v9);
      sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v10);
      sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v11);
      sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v12);
      sub_1C13D24(&Method_MissionActionManager__doMissionAction_b__9_0__, v13);
      sub_1C13D24(&Method_MissionActionManager__doMissionAction_b__9_1__, v14);
      sub_1C13D24(&Method_MissionActionManager__doMissionAction_b__9_2__, v15);
      sub_1C13D24(&Method_MissionActionManager__doMissionAction_b__9_3__, v16);
      sub_1C13D24(&Method_MissionActionManager_VoiceEnds__, v17);
      sub_1C13D24(v6, v18);
      sub_1C13D24(v5, v19);
      sub_1C13D24(&ScriptManager_TypeInfo, v20);
      sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
      sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
      sub_1C13D24(&TerminalTransitionInfo_TypeInfo, v23);
      sub_1C13D24(&StringLiteral_1/*""*/, v24);
      byte_4BB827A = 1;
    }
    eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_126;
    if ( eventMissionActionList->fields._size > 0 )
    {
      eventMissionActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              eventMissionActionList,
                                                                              0,
                                                                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      if ( !this->fields.eventMissionActionList )
        goto LABEL_126;
      v26 = (EventMissionActionInfo_o *)eventMissionActionList;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
        0,
        (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      if ( !v26 )
        goto LABEL_126;
      switch ( v26->fields.missionActionType )
      {
        case 1:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            this->fields.isVoicePlaying = 0;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
            if ( !eventMissionActionList )
              goto LABEL_126;
            methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
            {
LABEL_127:
              sub_1C14240(eventMissionActionList);
LABEL_128:
              sub_1C14240(optionId);
LABEL_129:
              sub_1C13F88(eventMissionActionList, method);
            }
            EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v26, 0LL);
            v41 = (ScriptManager_CallbackFunc_o *)sub_1C13F70(ScriptManager_CallbackFunc_TypeInfo);
            v42 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          }
          else
          {
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
              return;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList[34].klass;
            if ( !eventMissionActionList )
              goto LABEL_126;
            MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v26, 0LL);
            v41 = (ScriptManager_CallbackFunc_o *)sub_1C13F70(ScriptManager_CallbackFunc_TypeInfo);
            v42 = &Method_MissionActionManager__doMissionAction_b__9_1__;
          }
          v63 = v41;
          ScriptManager_CallbackFunc___ctor(v41, (Il2CppObject *)this, *v42, 0LL);
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          ScriptManager__PlayScenario(ValMessage, v63, 0, 0LL);
          return;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v44 = EventMissionActionInfo__getValMessage(v26, 0LL);
          v45 = (System_Action_o *)sub_1C13F70(*v4);
          System_Action___ctor(v45, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
          if ( !Instance )
            goto LABEL_126;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v44,
            v45,
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
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              syncRoot = (UnityEngine_Object_o *)eventMissionActionList[33].fields._syncRoot;
              if ( !(*v5)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v5);
              if ( UnityEngine_Object__op_Inequality(syncRoot, 0LL, 0LL) )
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v65 = eventMissionActionList[33].fields._syncRoot;
                  if ( v65 )
                  {
                    monitor = (CompleteMissionListViewManager_o *)v65[4].monitor;
                    ValID = EventMissionActionInfo__getValID(v26, 0LL);
                    v68 = (System_Action_o *)sub_1C13F70(*v4);
                    System_Action___ctor(v68, (Il2CppObject *)this, *v6, 0LL);
                    if ( monitor )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(monitor, ValID, v68, 0LL);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
                    return;
                  eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList[34].klass;
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0LL);
                      v78 = EventMissionActionInfo__getValID(v26, 0LL);
                      v79 = (System_Action_o *)sub_1C13F70(*v4);
                      System_Action___ctor(v79, (Il2CppObject *)this, *v6, 0LL);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v78, v79, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_126;
          }
          eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v46 = eventMissionActionList->fields._size < 1
              ? 0LL
              : (EventMissionActionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                              eventMissionActionList,
                                              0,
                                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v80 = EventMissionActionInfo__getValID(v26, 0LL);
          MissionActionManager__addMissionAction(this, v80, 3, v81);
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v82 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v82
            && (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v82 - 1] == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v84 = EventMissionActionInfo__getValID(v26, 0LL);
            v85 = (System_Action_o *)sub_1C13F70(*v4);
            System_Action___ctor(v85, (Il2CppObject *)this, *v6, 0LL);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v26, v46, v84, v85, 0LL);
              return;
            }
            goto LABEL_126;
          }
          goto LABEL_127;
        case 4:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
            continue;
          optionId = (EventRewardRootComponent_o *)(unsigned int)v26->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_74;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v27 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v27
            || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v27 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != eventMissionActionList[32].fields._version )
            continue;
LABEL_74:
          v51 = sub_1C13F70(TerminalTransitionInfo_TypeInfo);
          TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v51, 0LL);
          if ( !v51 )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          *(_DWORD *)(v51 + 16) = v26->fields.missionId;
          vals = (int64_t)v26->fields.vals;
          v59 = v26->fields.optionId;
          *(_QWORD *)(v51 + 32) = vals;
          *(_DWORD *)(v51 + 48) = v59;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v51 + 32), vals, v52, v53, v54, v55, v56, v57);
          if ( !vals )
            goto LABEL_126;
          v61 = *(_DWORD *)(vals + 24);
          if ( v61 < 1 )
            goto LABEL_103;
          v62 = 0;
          while ( 2 )
          {
            if ( v62 >= (unsigned int)v61 )
              goto LABEL_129;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)System_Int32__Parse(
                                                                                    *(System_String_o **)(vals + 8LL * v62 + 32),
                                                                                    0LL);
            if ( (_DWORD)eventMissionActionList != 800 )
            {
              v61 = *(_DWORD *)(vals + 24);
              v62 += 2;
              if ( v62 >= v61 )
                goto LABEL_103;
              continue;
            }
            break;
          }
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v75 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v75
            || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v75 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          v76 = (int64_t)eventMissionActionList[39].monitor;
          *(_QWORD *)(v51 + 40) = v76;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v51 + 40), v76, v69, v70, v71, v72, v73, v74);
LABEL_103:
          MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
            (MissionActionManager_o *)eventMissionActionList,
            0,
            v60);
          this->fields.isGoneTerminal = 1;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventMissionActionList,
            34,
            1,
            (Il2CppObject *)v51,
            0LL);
          goto LABEL_50;
        case 5:
          optionId = (EventRewardRootComponent_o *)(unsigned int)v26->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_24;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v28 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v28
            || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v28 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != eventMissionActionList[32].fields._version )
            continue;
LABEL_24:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
            continue;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
          this->fields.isVoicePlaying = 1;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( eventMissionActionList->fields._size >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     eventMissionActionList,
                     0,
                     (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( Item )
            {
              if ( HIDWORD(Item[1].monitor) == 8 )
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v86 = (EventRewardRootComponent_o *)eventMissionActionList->fields._syncRoot;
                  VoiceIds = EventMissionActionInfo__getVoiceIds(v26, 0LL);
                  v88 = (System_Action_o *)sub_1C13F70(*v4);
                  System_Action___ctor(v88, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                  v89 = (System_Action_o *)sub_1C13F70(*v4);
                  System_Action___ctor(v89, (Il2CppObject *)this, *v6, 0LL);
                  if ( v86 )
                  {
                    v90 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v86->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v90
                      && (EventRewardRootComponent_c *)v86->klass->_2.typeHierarchy[v90 - 1] == EventRewardRootComponent_TypeInfo )
                    {
                      EventRewardRootComponent__playEventMissionSvtVoice_31319116(v86, VoiceIds, v88, v89, 0LL);
                    }
                    else
                    {
                      sub_1C14240(v86);
                      MissionActionManager__addMissionAction(v94, v95, v96, v97);
                    }
                    return;
                  }
                }
LABEL_126:
                sub_1C13F80(eventMissionActionList, method);
              }
            }
          }
          v31 = v5;
          v32 = v6;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)eventMissionActionList->fields._syncRoot;
          v33 = EventMissionActionInfo__getVoiceIds(v26, 0LL);
          v34 = v4;
          v35 = (System_Action_o *)sub_1C13F70(*v4);
          System_Action___ctor(v35, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
          if ( !optionId )
            goto LABEL_126;
          v36 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(optionId->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36
            || (EventRewardRootComponent_c *)optionId->klass->_2.typeHierarchy[v36 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_128;
          }
          EventRewardRootComponent__playEventMissionSvtVoice(optionId, v33, v35, 0LL);
          v4 = v34;
          v6 = v32;
          v5 = v31;
          continue;
        case 6:
          v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v48 = v26->fields.vals;
          v49 = (CommonUI_o *)v47;
          v50 = (System_Action_o *)sub_1C13F70(*v4);
          System_Action___ctor(v50, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
          if ( !v49 )
            goto LABEL_126;
          CommonUI__OpenImageDialogWithAssets(v49, v48, v50, 0LL, 0LL, 0LL);
          return;
        case 7:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)eventMissionActionList[33].fields._syncRoot;
          if ( !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
            continue;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            continue;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( eventMissionActionList->fields._size >= 1 )
          {
            v29 = System_Collections_Generic_List_object___get_Item(
                    eventMissionActionList,
                    0,
                    (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( v29 )
            {
              if ( HIDWORD(v29[1].monitor) == 8 )
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  klass = (MasterMissionComponent_o *)eventMissionActionList[34].klass;
                  v92 = EventMissionActionInfo__getVoiceIds(v26, 0LL);
                  v93 = (System_Action_o *)sub_1C13F70(*v4);
                  System_Action___ctor(v93, (Il2CppObject *)this, *v6, 0LL);
                  if ( klass )
                  {
                    MasterMissionComponent__playEventMissionSvtVoice_44400124(klass, v92, v93, 0LL);
                    return;
                  }
                }
                goto LABEL_126;
              }
            }
          }
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)eventMissionActionList[34].klass;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)EventMissionActionInfo__getVoiceIds(
                                                                                  v26,
                                                                                  0LL);
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
      v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5);
      UnityEngine_Object__Destroy_70721988(v38, 0LL);
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
  System_Collections_Generic_List_object__o *v25; // x24
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v37; // x24
  EventMissionActionInfo_o *v38; // x25
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 *v51; // x8
  System_Collections_Generic_List_Enumerator_object__o *v52; // x0
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v54; // x1
  Il2CppObject *v55; // x23
  System_Collections_Generic_List_object__o *v56; // x21
  EventMissionActionInfo_o *v57; // x22
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BB8276 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v15);
    sub_1C13D24(&EventMissionActionInfo_TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v22);
    sub_1C13D24(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v23);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4BB8276 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  memset(&v71, 0, sizeof(v71));
  v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v25;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.eventMissionActionList,
    (int64_t)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_39:
    sub_1C13F80(Instance, v34);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      SafeActionListFromIDnType,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v72 = v70;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v72,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v72.fields._current;
      v37 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v38 = (EventMissionActionInfo_o *)sub_1C13F70(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_43269212(v38, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v37 )
        sub_1C13F80(v39, v40);
      items = v37->fields._items;
      v48 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v37->fields._version;
      if ( !items )
        sub_1C13F80(v39, v40);
      size = v37->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          (Il2CppObject *)v38,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v37->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v38;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v38, v41, v42, v43, v44, v45, v46);
      }
    }
    v51 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v52 = &v72;
    goto LABEL_35;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      EntityListFromIDnType,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v71,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v55 = v71.fields._current;
      v56 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v57 = (EventMissionActionInfo_o *)sub_1C13F70(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v57, (EventMissionActionEntity_o *)v55, 0LL);
      if ( !v56 )
        sub_1C13F80(v58, v59);
      v66 = v56->fields._items;
      v67 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v56->fields._version;
      if ( !v66 )
        sub_1C13F80(v58, v59);
      v68 = v56->fields._size;
      if ( (unsigned int)v68 >= v66->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v57,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &v66->obj.klass + v68;
        v56->fields._size = v68 + 1;
        v69[4] = (Il2CppClass *)v57;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v57, v60, v61, v62, v63, v64, v65);
      }
    }
    v51 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v52 = &v71;
LABEL_35:
    System_Collections_Generic_List_Enumerator_object___Dispose(v52, (const MethodInfo_33BEBE4 *)*v51);
  }
LABEL_36:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v54);
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
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x23
  MissionActionManager___c_c *v24; // x0
  System_Predicate_object__o *_9__7_0; // x24
  Il2CppObject *v26; // x25
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x20
  MissionActionManager___c_c *v35; // x0
  System_Predicate_object__o *_9__7_1; // x21
  Il2CppObject *v37; // x22
  struct MissionActionManager___c_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4BB8278 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v13);
    sub_1C13D24(&System_Predicate_EventMissionActionEntity__TypeInfo, v14);
    sub_1C13D24(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1C13D24(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v18);
    sub_1C13D24(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v19);
    sub_1C13D24(&MissionActionManager___c_TypeInfo, v20);
    byte_4BB8278 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
  v23 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v24 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v24 = MissionActionManager___c_TypeInfo;
    }
    _9__7_0 = (System_Predicate_object__o *)v24->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = MissionActionManager___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__7_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__7_0,
        v26,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        0LL);
      static_fields = MissionActionManager___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v23,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_362D7F8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
  v34 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v35 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v35 = MissionActionManager___c_TypeInfo;
    }
    _9__7_1 = (System_Predicate_object__o *)v35->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = MissionActionManager___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v35->static_fields->__9;
      _9__7_1 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_object____ctor(
        _9__7_1,
        v37,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        0LL);
      v38 = MissionActionManager___c_TypeInfo->static_fields;
      v38->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v38->__9__7_1, (int64_t)_9__7_1, v39, v40, v41, v42, v43, v44);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v34,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_362D7F8 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance[3].monitor);
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_35:
      sub_1C13F80(Instance, v22);
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB8281 & 1) == 0 )
  {
    sub_1C13D24(&MissionActionManager___c_TypeInfo, v1);
    byte_4BB8281 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)MissionActionManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.missionActionType == 6;
}