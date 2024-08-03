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

  if ( (byte_49FF756 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff);
    byte_49FF756 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B6406C(
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

  if ( (byte_49FF758 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF758 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterVoiceCallback, 0, v4, v5);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v7, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v9; // x19

  if ( (byte_49FF757 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF757 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.afterVoiceCallback, 0, v6, v7);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v9, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v18; // x0
  bool v19; // w1
  const MethodInfo *v20; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF759 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, skip);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v5);
    sub_1B640C8(&Method_MissionActionManager_doMissionAction__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    byte_49FF759 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v15, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v13
    || (CommonUI__maskFadein(v13, DEFAULT_FADE_TIME, v15, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1B64324(myFSM);
  }
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    sub_1B645E4(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v18, v19, v20);
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
  __int64 v10; // x1
  __int64 v11; // x2
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v18; // x0
  const MethodInfo *v19; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF75A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, skip);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_MissionActionManager_doMissionAction__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    this = (MissionActionManager_o *)sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    byte_49FF75A = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v15, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v13
    || (CommonUI__maskFadein(v13, DEFAULT_FADE_TIME, v15, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1B64324(myFSM);
  }
  methodPtr_low = LOBYTE(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_41761100(myFSM, 0LL);
  }
  else
  {
    sub_1B645E4(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v18, v19);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v5; // w8

  if ( (byte_49FF75B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FF75B = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
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
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x22
  System_Collections_Generic_List_object__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v31; // x21
  __int64 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo_322A0AC *v39; // x1
  System_Collections_Generic_List_Enumerator_object__o *v40; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  Il2CppObject *v47; // x22
  EventMissionActionInfo_o *v48; // x21
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  ServantStatusBattleListViewItem_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FF752 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v13);
    sub_1B640C8(&EventMissionActionInfo_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v19);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_49FF752 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  memset(&v61, 0, sizeof(v61));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_32;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v26 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType;
    v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                         v24,
                                                         v25);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      v26,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v62 = v60;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v62.fields._current;
      v31 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v28, v29);
      EventMissionActionInfo___ctor_41995308(v31, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v27 )
        sub_1B64324(v32);
      items = v27->fields._items;
      v36 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1B64324(v32);
      size = v27->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)v31,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v27->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
      }
    }
    v39 = (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v40 = &v62;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_32:
    sub_1B64324(Instance);
  }
  v41 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v41 )
    return;
  v44 = (System_Collections_Generic_List_object__o *)v41;
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    v44,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v47 = v61.fields._current;
    v48 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v45, v46);
    EventMissionActionInfo___ctor(v48, (EventMissionActionEntity_o *)v47, 0LL);
    if ( !v27 )
      sub_1B64324(v49);
    v52 = v27->fields._items;
    v53 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
    ++v27->fields._version;
    if ( !v52 )
      sub_1B64324(v49);
    v54 = v27->fields._size;
    if ( (unsigned int)v54 >= v52->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        (Il2CppObject *)v48,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = &v52->obj.klass + v54;
      v27->fields._size = v54 + 1;
      v55[4] = (Il2CppClass *)v48;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v48, v50, v51);
    }
  }
  v40 = &v61;
  v39 = (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v40, v39);
  if ( !v27 )
    goto LABEL_32;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (ServantStatusBattleListViewItem_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v27,
    eventMissionActionList,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (ServantStatusBattleListViewItem_c *)v27;
  sub_1B6406C(p_eventMissionActionList, (int32_t)v27, v58, v59);
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
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  MissionActionManager___c_c *v20; // x0
  System_Predicate_object__o *_9__8_0; // x19
  Il2CppObject *v22; // x20
  struct MissionActionManager___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x0
  System_Predicate_T__o *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  MissionActionManager___c_c *v31; // x8
  DataManager_o *v32; // x19
  System_Predicate_object__o *_9__8_1; // x20
  Il2CppObject *v34; // x21
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_49FF754 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&progressType);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v8);
    sub_1B640C8(&System_Predicate_EventMissionActionEntity__TypeInfo, v9);
    sub_1B640C8(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_MissionActionManager___c__checkScroll_b__8_0__, v12);
    sub_1B640C8(&Method_MissionActionManager___c__checkScroll_b__8_1__, v13);
    sub_1B640C8(&MissionActionManager___c_TypeInfo, v14);
    byte_49FF754 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType
    || (v19 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v31 = MissionActionManager___c_TypeInfo;
        v32 = Instance;
        if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v31 = MissionActionManager___c_TypeInfo;
        }
        _9__8_1 = (System_Predicate_object__o *)v31->static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = MissionActionManager___c_TypeInfo;
          }
          v34 = (Il2CppObject *)v31->static_fields->__9;
          _9__8_1 = (System_Predicate_object__o *)sub_1B64314(
                                                    System_Predicate_EventMissionActionEntity__TypeInfo,
                                                    v29,
                                                    v30);
          System_Predicate_object____ctor(_9__8_1, v34, Method_MissionActionManager___c__checkScroll_b__8_1__, 0LL);
          static_fields = MissionActionManager___c_TypeInfo->static_fields;
          static_fields->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_1, (int32_t)_9__8_1, v36, v37);
        }
        if ( v32 )
        {
          v26 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v27 = (System_Collections_Generic_List_object__o *)v32;
          v28 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_object___Exists(v27, v28, (const MethodInfo_34ADD00 *)*v26);
        }
      }
    }
LABEL_25:
    sub_1B64324(Instance);
  }
  v20 = MissionActionManager___c_TypeInfo;
  if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v20 = MissionActionManager___c_TypeInfo;
  }
  _9__8_0 = (System_Predicate_object__o *)v20->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = MissionActionManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__8_0 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                              v17,
                                              v18);
    System_Predicate_object____ctor(_9__8_0, v22, Method_MissionActionManager___c__checkScroll_b__8_0__, 0LL);
    v23 = MissionActionManager___c_TypeInfo->static_fields;
    v23->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->__9__8_0, (int32_t)_9__8_0, v24, v25);
  }
  v26 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v27 = v19;
  v28 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_object___Exists(v27, v28, (const MethodInfo_34ADD00 *)*v26);
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
  void *eventMissionActionList; // x0
  EventMissionActionInfo_o *v26; // x25
  __int64 v27; // x9
  __int64 v28; // x9
  Il2CppObject *v29; // x0
  Il2CppObject *Item; // x0
  UnityEngine_Object_c **v31; // x20
  __int64 *v32; // x24
  System_String_array *v33; // x25
  System_Action_c **v34; // x26
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x28
  __int64 v38; // x9
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v40; // x19
  __int64 methodPtr_low; // x9
  System_String_o *ValMessage; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  ScriptManager_CallbackFunc_o *v45; // x0
  __int64 *v46; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x22
  EventMissionActionInfo_o *v52; // x20
  Il2CppObject *v53; // x0
  System_String_array *v54; // x20
  CommonUI_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  System_Action_o *v58; // x22
  __int64 v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_String_array *vals; // x21
  int32_t v63; // w8
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  int max_length; // w8
  int v67; // w22
  __int64 v68; // x1
  __int64 v69; // x2
  ScriptManager_CallbackFunc_o *v70; // x21
  UnityEngine_Object_o *v71; // x20
  __int64 v72; // x8
  CompleteMissionListViewManager_o *v73; // x20
  int32_t ValID; // w21
  __int64 v75; // x1
  __int64 v76; // x2
  System_Action_o *v77; // x22
  int32_t v78; // w2
  int32_t v79; // w3
  __int64 v80; // x9
  __int64 v81; // x1
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v83; // w21
  __int64 v84; // x1
  __int64 v85; // x2
  System_Action_o *v86; // x22
  int32_t v87; // w0
  const MethodInfo *v88; // x3
  __int64 v89; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v91; // w22
  __int64 v92; // x1
  __int64 v93; // x2
  System_Action_o *v94; // x23
  EventRewardRootComponent_o *v95; // x20
  System_String_array *VoiceIds; // x21
  __int64 v97; // x1
  __int64 v98; // x2
  System_Action_o *v99; // x23
  __int64 v100; // x1
  __int64 v101; // x2
  System_Action_o *v102; // x24
  __int64 v103; // x9
  MasterMissionComponent_o *v104; // x20
  System_String_array *v105; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  System_Action_o *v108; // x22
  MissionActionManager_o *v109; // x0
  int32_t v110; // w1
  int32_t v111; // w2
  const MethodInfo *v112; // x3

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  while ( 2 )
  {
    if ( (byte_49FF755 & 1) == 0 )
    {
      sub_1B640C8(v4, method);
      sub_1B640C8(&ScriptManager_CallbackFunc_TypeInfo, v8);
      sub_1B640C8(&EventRewardRootComponent_TypeInfo, v9);
      sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v10);
      sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v11);
      sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v12);
      sub_1B640C8(&Method_MissionActionManager__doMissionAction_b__9_0__, v13);
      sub_1B640C8(&Method_MissionActionManager__doMissionAction_b__9_1__, v14);
      sub_1B640C8(&Method_MissionActionManager__doMissionAction_b__9_2__, v15);
      sub_1B640C8(&Method_MissionActionManager__doMissionAction_b__9_3__, v16);
      sub_1B640C8(&Method_MissionActionManager_VoiceEnds__, v17);
      sub_1B640C8(v6, v18);
      sub_1B640C8(v5, v19);
      sub_1B640C8(&ScriptManager_TypeInfo, v20);
      sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
      sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
      sub_1B640C8(&TerminalTransitionInfo_TypeInfo, v23);
      sub_1B640C8(&StringLiteral_1/*""*/, v24);
      byte_49FF755 = 1;
    }
    eventMissionActionList = this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_126;
    if ( *((int *)eventMissionActionList + 6) > 0 )
    {
      eventMissionActionList = System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                 0,
                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      if ( !this->fields.eventMissionActionList )
        goto LABEL_126;
      v26 = (EventMissionActionInfo_o *)eventMissionActionList;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
        0,
        (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      if ( !v26 )
        goto LABEL_126;
      switch ( v26->fields.missionActionType )
      {
        case 1:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            this->fields.isVoicePlaying = 0;
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
              sub_1B645E4(eventMissionActionList);
LABEL_128:
              sub_1B645E4(optionId);
LABEL_129:
              sub_1B6432C(eventMissionActionList, v64);
            }
            EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v26, 0LL);
            v45 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v43, v44);
            v46 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          }
          else
          {
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
              return;
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 173);
            if ( !eventMissionActionList )
              goto LABEL_126;
            MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v26, 0LL);
            v45 = (ScriptManager_CallbackFunc_o *)sub_1B64314(ScriptManager_CallbackFunc_TypeInfo, v68, v69);
            v46 = &Method_MissionActionManager__doMissionAction_b__9_1__;
          }
          v70 = v45;
          ScriptManager_CallbackFunc___ctor(v45, (Il2CppObject *)this, *v46, 0LL);
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          ScriptManager__PlayScenario(ValMessage, v70, 0, 0LL);
          return;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v48 = EventMissionActionInfo__getValMessage(v26, 0LL);
          v51 = (System_Action_o *)sub_1B64314(*v4, v49, v50);
          System_Action___ctor(v51, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
          if ( !Instance )
            goto LABEL_126;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v48,
            v51,
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
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              v71 = (UnityEngine_Object_o *)*((_QWORD *)eventMissionActionList + 172);
              if ( !(*v5)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v5);
              if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v72 = *((_QWORD *)eventMissionActionList + 172);
                  if ( v72 )
                  {
                    v73 = *(CompleteMissionListViewManager_o **)(v72 + 72);
                    ValID = EventMissionActionInfo__getValID(v26, 0LL);
                    v77 = (System_Action_o *)sub_1B64314(*v4, v75, v76);
                    System_Action___ctor(v77, (Il2CppObject *)this, *v6, 0LL);
                    if ( v73 )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(v73, ValID, v77, 0LL);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
                    return;
                  eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 173);
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0LL);
                      v83 = EventMissionActionInfo__getValID(v26, 0LL);
                      v86 = (System_Action_o *)sub_1B64314(*v4, v84, v85);
                      System_Action___ctor(v86, (Il2CppObject *)this, *v6, 0LL);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v83, v86, 0LL);
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
          v52 = *((int *)eventMissionActionList + 6) < 1
              ? 0LL
              : (EventMissionActionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)eventMissionActionList,
                                              0,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v87 = EventMissionActionInfo__getValID(v26, 0LL);
          MissionActionManager__addMissionAction(this, v87, 3, v88);
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v89 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) >= (unsigned int)v89
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v89 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v91 = EventMissionActionInfo__getValID(v26, 0LL);
            v94 = (System_Action_o *)sub_1B64314(*v4, v92, v93);
            System_Action___ctor(v94, (Il2CppObject *)this, *v6, 0LL);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v26, v52, v91, v94, 0LL);
              return;
            }
            goto LABEL_126;
          }
          goto LABEL_127;
        case 4:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
            continue;
          optionId = (EventRewardRootComponent_o *)(unsigned int)v26->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_74;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v27 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v27
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v27 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *((_DWORD *)eventMissionActionList + 321) )
            continue;
LABEL_74:
          v59 = sub_1B64314(TerminalTransitionInfo_TypeInfo, method, v2);
          TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v59, 0LL);
          if ( !v59 )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          *(_DWORD *)(v59 + 16) = v26->fields.missionId;
          vals = v26->fields.vals;
          v63 = v26->fields.optionId;
          *(_QWORD *)(v59 + 32) = vals;
          *(_DWORD *)(v59 + 48) = v63;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)vals, v60, v61);
          if ( !vals )
            goto LABEL_126;
          max_length = vals->max_length;
          if ( max_length < 1 )
            goto LABEL_103;
          v67 = 0;
          while ( 2 )
          {
            if ( v67 >= (unsigned int)max_length )
              goto LABEL_129;
            eventMissionActionList = (void *)System_Int32__Parse(vals->m_Items[v67], 0LL);
            if ( (_DWORD)eventMissionActionList != 800 )
            {
              max_length = vals->max_length;
              v67 += 2;
              if ( v67 >= max_length )
                goto LABEL_103;
              continue;
            }
            break;
          }
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          v80 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v80
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v80 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          v81 = *((_QWORD *)eventMissionActionList + 193);
          *(_QWORD *)(v59 + 40) = v81;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 40), v81, v78, v79);
LABEL_103:
          MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
            (MissionActionManager_o *)eventMissionActionList,
            0,
            v65);
          this->fields.isGoneTerminal = 1;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventMissionActionList,
            34,
            1,
            (Il2CppObject *)v59,
            0LL);
          goto LABEL_50;
        case 5:
          optionId = (EventRewardRootComponent_o *)(unsigned int)v26->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_24;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (void *)*((_QWORD *)eventMissionActionList + 4);
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v28 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 304LL) < (unsigned int)v28
            || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v28 - 8) != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != *((_DWORD *)eventMissionActionList + 321) )
            continue;
LABEL_24:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( Item )
            {
              if ( HIDWORD(Item[1].monitor) == 8 )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v95 = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 4);
                  VoiceIds = EventMissionActionInfo__getVoiceIds(v26, 0LL);
                  v99 = (System_Action_o *)sub_1B64314(*v4, v97, v98);
                  System_Action___ctor(v99, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                  v102 = (System_Action_o *)sub_1B64314(*v4, v100, v101);
                  System_Action___ctor(v102, (Il2CppObject *)this, *v6, 0LL);
                  if ( v95 )
                  {
                    v103 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v95->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v103
                      && (EventRewardRootComponent_c *)v95->klass->_2.typeHierarchy[v103 - 1] == EventRewardRootComponent_TypeInfo )
                    {
                      EventRewardRootComponent__playEventMissionSvtVoice_45612596(v95, VoiceIds, v99, v102, 0LL);
                    }
                    else
                    {
                      sub_1B645E4(v95);
                      MissionActionManager__addMissionAction(v109, v110, v111, v112);
                    }
                    return;
                  }
                }
LABEL_126:
                sub_1B64324(eventMissionActionList);
              }
            }
          }
          v31 = v5;
          v32 = v6;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 4);
          v33 = EventMissionActionInfo__getVoiceIds(v26, 0LL);
          v34 = v4;
          v37 = (System_Action_o *)sub_1B64314(*v4, v35, v36);
          System_Action___ctor(v37, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
          if ( !optionId )
            goto LABEL_126;
          v38 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(optionId->klass->vtable._0_Equals.methodPtr) < (unsigned int)v38
            || (EventRewardRootComponent_c *)optionId->klass->_2.typeHierarchy[v38 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_128;
          }
          EventRewardRootComponent__playEventMissionSvtVoice(optionId, v33, v37, 0LL);
          v4 = v34;
          v6 = v32;
          v5 = v31;
          continue;
        case 6:
          v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v54 = v26->fields.vals;
          v55 = (CommonUI_o *)v53;
          v58 = (System_Action_o *)sub_1B64314(*v4, v56, v57);
          System_Action___ctor(v58, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
          if ( !v55 )
            goto LABEL_126;
          CommonUI__OpenImageDialogWithAssets(v55, v54, v58, 0LL, 0LL, 0LL);
          return;
        case 7:
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 172);
          if ( !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
            continue;
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            continue;
          eventMissionActionList = this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( *((int *)eventMissionActionList + 6) >= 1 )
          {
            v29 = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventMissionActionList,
                    0,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( v29 )
            {
              if ( HIDWORD(v29[1].monitor) == 8 )
              {
                eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v104 = (MasterMissionComponent_o *)*((_QWORD *)eventMissionActionList + 173);
                  v105 = EventMissionActionInfo__getVoiceIds(v26, 0LL);
                  v108 = (System_Action_o *)sub_1B64314(*v4, v106, v107);
                  System_Action___ctor(v108, (Il2CppObject *)this, *v6, 0LL);
                  if ( v104 )
                  {
                    MasterMissionComponent__playEventMissionSvtVoice_43046740(v104, v105, v108, 0LL);
                    return;
                  }
                }
                goto LABEL_126;
              }
            }
          }
          eventMissionActionList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)*((_QWORD *)eventMissionActionList + 173);
          eventMissionActionList = EventMissionActionInfo__getVoiceIds(v26, 0LL);
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
      v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5);
      UnityEngine_Object__Destroy_69127736(v40, 0LL);
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
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v34; // x24
  EventMissionActionInfo_o *v35; // x25
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 *v43; // x8
  System_Collections_Generic_List_Enumerator_object__o *v44; // x0
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v46; // x1
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *v49; // x23
  System_Collections_Generic_List_object__o *v50; // x21
  EventMissionActionInfo_o *v51; // x22
  __int64 v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FF751 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v15);
    sub_1B640C8(&EventMissionActionInfo_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v22);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_49FF751 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                       *(_QWORD *)&missionID,
                                                       *(_QWORD *)&progressType);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v25;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventMissionActionList, (int32_t)v25, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_39:
    sub_1B64324(Instance);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
      SafeActionListFromIDnType,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v61 = v59;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v61,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v61.fields._current;
      v34 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v35 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v31, v32);
      EventMissionActionInfo___ctor_41995308(v35, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v34 )
        sub_1B64324(v36);
      items = v34->fields._items;
      v40 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1B64324(v36);
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v35,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v35;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v35, v37, v38);
      }
    }
    v43 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v44 = &v61;
    goto LABEL_35;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      EntityListFromIDnType,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v60,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v49 = v60.fields._current;
      v50 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v51 = (EventMissionActionInfo_o *)sub_1B64314(EventMissionActionInfo_TypeInfo, v47, v48);
      EventMissionActionInfo___ctor(v51, (EventMissionActionEntity_o *)v49, 0LL);
      if ( !v50 )
        sub_1B64324(v52);
      v55 = v50->fields._items;
      v56 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v50->fields._version;
      if ( !v55 )
        sub_1B64324(v52);
      v57 = v50->fields._size;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v51,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &v55->obj.klass + v57;
        v50->fields._size = v57 + 1;
        v58[4] = (Il2CppClass *)v51;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v51, v53, v54);
      }
    }
    v43 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v44 = &v60;
LABEL_35:
    System_Collections_Generic_List_Enumerator_object___Dispose(v44, (const MethodInfo_322A0AC *)*v43);
  }
LABEL_36:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v46);
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
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x23
  MissionActionManager___c_c *v25; // x0
  System_Predicate_object__o *_9__7_0; // x24
  Il2CppObject *v27; // x25
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x20
  MissionActionManager___c_c *v34; // x0
  System_Predicate_object__o *_9__7_1; // x21
  Il2CppObject *v36; // x22
  struct MissionActionManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FF753 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v13);
    sub_1B640C8(&System_Predicate_EventMissionActionEntity__TypeInfo, v14);
    sub_1B640C8(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1B640C8(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v18);
    sub_1B640C8(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v19);
    sub_1B640C8(&MissionActionManager___c_TypeInfo, v20);
    byte_49FF753 = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
  v24 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v25 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v25 = MissionActionManager___c_TypeInfo;
    }
    _9__7_0 = (System_Predicate_object__o *)v25->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = MissionActionManager___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__7_0 = (System_Predicate_object__o *)sub_1B64314(
                                                System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                                v22,
                                                v23);
      System_Predicate_object____ctor(
        _9__7_0,
        v27,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        0LL);
      static_fields = MissionActionManager___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v29, v30);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v24,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_34ADD00 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
  v33 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v34 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v34 = MissionActionManager___c_TypeInfo;
    }
    _9__7_1 = (System_Predicate_object__o *)v34->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = MissionActionManager___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__7_1 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_EventMissionActionEntity__TypeInfo, v31, v32);
      System_Predicate_object____ctor(
        _9__7_1,
        v36,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        0LL);
      v37 = MissionActionManager___c_TypeInfo->static_fields;
      v37->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->__9__7_1, (int32_t)_9__7_1, v38, v39);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v33,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_34ADD00 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance[3].monitor);
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_35:
      sub_1B64324(Instance);
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF75C & 1) == 0 )
  {
    sub_1B640C8(&MissionActionManager___c_TypeInfo, v1);
    byte_49FF75C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MissionActionManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)MissionActionManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.missionActionType == 6;
}