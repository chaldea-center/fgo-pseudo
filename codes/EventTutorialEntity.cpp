void EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CAE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30CAE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4D30CAD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D30CAD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventTutorialEntity__CreatePrimaryKey(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *EventTutorialEntity__GetAfterActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16834/*"afterActionVals"*/);
    byte_4D30CA3 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16834/*"afterActionVals"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D30CA4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17249/*"beforeActionSetup"*/);
    byte_4D30CA4 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17249/*"beforeActionSetup"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17250/*"beforeActionVals"*/);
    byte_4D30CA2 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17250/*"beforeActionVals"*/, 0);
}


System_String_o *EventTutorialEntity__GetDialogPrefabName(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18770/*"dialogPrefabName"*/);
    byte_4D30CA7 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18770/*"dialogPrefabName"*/, 0, 0);
}


System_Int32_array *EventTutorialEntity__GetOnceDailyDispTutorialResetTime(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D30CA8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_10036/*"OnceDailyDispResetTime"*/);
    byte_4D30CA8 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_10036/*"OnceDailyDispResetTime"*/, 0, 0);
}


int32_t EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


System_Collections_Generic_Dictionary_string__object__o *EventTutorialEntity__GetPlayScriptInfo(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D30CA9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1C93AD4(&StringLiteral_10749/*"PlayScriptInfo"*/);
    byte_4D30CA9 = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_10749/*"PlayScriptInfo"*/,
                                                                      0,
                                                                      (const MethodInfo_319214C *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


int32_t EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23375/*"resumeTransitionWar"*/);
    byte_4D30CA6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23375/*"resumeTransitionWar"*/, 0, 0);
}


float EventTutorialEntity__GetScriptFadeInTime(EventTutorialEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *PlayScriptInfo; // x0

  if ( (byte_4D30CAB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12728/*"ScriptFadeInTime"*/);
    byte_4D30CAB = 1;
  }
  PlayScriptInfo = EventTutorialEntity__GetPlayScriptInfo(this, method);
  if ( PlayScriptInfo )
    return EntityScriptUtil__GetFloatValue(PlayScriptInfo, (System_String_o *)StringLiteral_12728/*"ScriptFadeInTime"*/, 1.0, 0);
  else
    return 1.0;
}


bool EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16834/*"afterActionVals"*/);
    byte_4D30CA0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16834/*"afterActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30C9F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17250/*"beforeActionVals"*/);
    byte_4D30C9F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17250/*"beforeActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeSetUpAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17249/*"beforeActionSetup"*/);
    byte_4D30CA1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17249/*"beforeActionSetup"*/, 0);
}


bool EventTutorialEntity__HasFlag(EventTutorialEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)flag) != 0;
}


bool EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30CA5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23375/*"resumeTransitionWar"*/);
    byte_4D30CA5 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23375/*"resumeTransitionWar"*/, 0);
}


bool EventTutorialEntity__IsBlankEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  int32_t openType; // w8
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x20
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x0

  if ( (byte_4D30C9E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4D30C9E = 1;
  }
  if ( !EventTutorialEntity__HasBeforeAction(this, method)
    && !EventTutorialEntity__HasAfterAction(this, v3)
    && !EventTutorialEntity__HasBeforeSetUpAction(this, v4) )
  {
    return 0;
  }
  openType = this->fields.openType;
  if ( openType == 18 )
  {
    targetIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetIds;
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (Il2CppObject *)System_Int32__ToString((unsigned int)v7->static_fields + 860, 0);
    if ( System_Linq_Enumerable__Contains_object_(
           targetIds,
           v8,
           (const MethodInfo_31C1360 *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      return 1;
    }
    openType = this->fields.openType;
  }
  return openType == 83;
}


bool EventTutorialEntity__IsGrandScoreAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType == 100;
}


bool EventTutorialEntity__IsPlanetEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  return (EventTutorialEntity__HasBeforeAction(this, method)
       || EventTutorialEntity__HasAfterAction(this, v3)
       || EventTutorialEntity__HasBeforeSetUpAction(this, v4))
      && this->fields.openType == 108;
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialEntity__IsPlayScriptTiming(EventTutorialEntity_o *this, int32_t timing, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *PlayScriptInfo; // x0

  if ( (byte_4D30CAA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12735/*"ScriptTiming"*/);
    byte_4D30CAA = 1;
  }
  PlayScriptInfo = EventTutorialEntity__GetPlayScriptInfo(this, *(const MethodInfo **)&timing);
  if ( PlayScriptInfo )
    LOBYTE(PlayScriptInfo) = EntityScriptUtil__GetIntValue(PlayScriptInfo, (System_String_o *)StringLiteral_12735/*"ScriptTiming"*/, 0, 0) == timing;
  return (char)PlayScriptInfo;
}


void EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  MissionNotifyManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x20
  System_Action_object__o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Action_object__o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Action_object__o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  ActionChain_o *v42; // x21
  __int64 v43; // x20
  System_Action_o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7

  if ( (byte_4D30C99 & 1) == 0 )
  {
    sub_1C93AD4(&ActionChain_TypeInfo);
    sub_1C93AD4(&System_Action___TypeInfo);
    sub_1C93AD4(&System_Action_Action____TypeInfo);
    sub_1C93AD4(&System_Action_Action__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__0__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__1__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__2__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__3__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
    byte_4D30C99 = 1;
  }
  v5 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause(Instance, 0);
  *(_BYTE *)(v5 + 24) = (this->fields.flag & 4) != 0;
  v20 = sub_1C93B7C(System_Action_Action____TypeInfo, 3);
  v21 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__0__,
    0);
  if ( !v20 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v20 + 32) = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__1__,
    0);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v20 + 40) = v28;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 40), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Action_object__o *)sub_1C93D20(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__2__,
    0);
  if ( *(_DWORD *)(v20 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v20 + 48) = v35;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 48), (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (ActionChain_o *)sub_1C93D20(ActionChain_TypeInfo);
  ActionChain___ctor_49764104(v42, (System_Action_Action__array *)v20, 0);
  v43 = sub_1C93B7C(System_Action___TypeInfo, 1);
  v44 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__3__,
    0);
  if ( !v43 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v43 + 24) )
LABEL_15:
    sub_1C93D34(Instance);
  *(_QWORD *)(v43 + 32) = v44;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 32), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  if ( !v42
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v42,
                                               (System_Action_array *)v43,
                                               0)) == 0 )
  {
LABEL_14:
    sub_1C93D2C(Instance, v7);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0);
}


void EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v15; // x0
  System_Int32_array *v16; // x19
  CommonUI_o *v17; // x21
  System_Action_o *v18; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v20; // x21
  System_Action_int__o *v21; // x20
  const MethodInfo *v22; // x4

  if ( (byte_4D30C9B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity_TransitionQuest__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass27_0__OpenTutorialWithoutFlag_b__0__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass27_0__OpenTutorialWithoutFlag_b__1__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass27_0_TypeInfo);
    byte_4D30C9B = 1;
  }
  v5 = sub_1C93D20(EventTutorialEntity___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = this->fields.imageIds;
    v17 = (CommonUI_o *)v15;
    v18 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass27_0__OpenTutorialWithoutFlag_b__0__,
      0);
    if ( v17 )
    {
      CommonUI__OpenTutorialImageDialog_31604240(v17, v16, -1, 0, v18, 0, 0, 0, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass27_0__OpenTutorialWithoutFlag_b__1__,
      0);
    v21 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v21, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0);
    EventTutorialEntity__TextTutorialChain(this, 0, v20, v21, v22);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTutorialEntity__PlayBeforeOrAfterAction(
        EventTutorialEntity_o *this,
        bool isAfter,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v7; // x0
  System_String_array *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4D30C9A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4D30C9A = 1;
  }
  if ( isAfter )
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetAfterActionVals(this, (const MethodInfo *)isAfter);
  else
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetBeforeActionVals(this, (const MethodInfo *)isAfter);
  v8 = (System_String_array *)v7;
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
    ActionExtensions__Call(callback, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  QuestAfterAction__PlaySpecifiedAction((QuestAfterAction_o *)Instance, v8, callback, 0);
}


void EventTutorialEntity__PlayScript(EventTutorialEntity_o *this, System_Action_o *endAction, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_string__object__o *PlayScriptInfo; // x0
  System_Collections_Generic_Dictionary_string__object__o *v22; // x21
  System_String_o *StringValue; // x20
  System_String_o *BgmName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  ScriptManager_CallbackFunc_o *v31; // x21

  if ( (byte_4D30CAC & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass47_0__PlayScript_b__0__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass47_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12730/*"ScriptId"*/);
    sub_1C93AD4(&StringLiteral_12736/*"ScriptType"*/);
    byte_4D30CAC = 1;
  }
  v5 = sub_1C93D20(EventTutorialEntity___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  PlayScriptInfo = EventTutorialEntity__GetPlayScriptInfo(this, v20);
  if ( PlayScriptInfo
    && (v22 = PlayScriptInfo,
        StringValue = EntityScriptUtil__GetStringValue(PlayScriptInfo, (System_String_o *)StringLiteral_12730/*"ScriptId"*/, 0, 0),
        !System_String__IsNullOrEmpty(StringValue, 0))
    && EntityScriptUtil__GetIntValue(v22, (System_String_o *)StringLiteral_12736/*"ScriptType"*/, 0, 0) == 1 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0);
    *(_QWORD *)(v5 + 32) = BgmName;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)BgmName, v25, v26, v27, v28, v29, v30);
    v31 = (ScriptManager_CallbackFunc_o *)sub_1C93D20(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass47_0__PlayScript_b__0__,
      0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__PlayShop(StringValue, v31, 0, 0);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
}


void EventTutorialEntity__TextTutorialChain(
        EventTutorialEntity_o *this,
        int32_t idx,
        System_Action_o *callback,
        System_Action_int__o *transitionQuest,
        const MethodInfo *method)
{
  System_Action_int__o *v5; // x22
  System_Action_o *v6; // x23
  int32_t v7; // w21
  EventTutorialEntity_o *v8; // x19
  __int64 v9; // x20
  CommonReleaseMaster_o *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  unsigned int v31; // w9
  unsigned int max_length; // w10
  EventTutorialEntity_TextTuto_o *v33; // x10
  int32_t commonReleaseId; // w22
  EventTutorialEntity_TextTuto_o *v35; // x8
  struct System_Int32_array *textPos; // x9
  float v37; // s9
  il2cpp_array_size_t v38; // x10
  char v39; // w27
  float v40; // s10
  float v41; // s8
  struct System_Int32_array *ptPos; // x9
  il2cpp_array_size_t v43; // x10
  float v44; // s11
  System_String_o *scrDlgTitle; // x23
  int spacingY; // w24
  System_Collections_ICollection_o *presentClassScoreResetItemIdList; // x22
  struct EventTutorialEntity_TextTuto_array *v48; // x8
  __int64 v49; // x9
  EventTutorialEntity_TextTuto_o *v50; // x8
  Il2CppObject *Instance; // x19
  System_Action_object__o *v52; // x21
  struct EventTutorialEntity_TextTuto_array *v53; // x8
  __int64 v54; // x9
  EventTutorialEntity_TextTuto_o *v55; // x8
  System_String_o *v56; // x21
  CommonUI_o *v57; // x19
  System_Action_o *v58; // x22
  System_Int32_array *releaseClassBoardBaseIds; // x22
  System_Int32_array *addClassIds; // x21
  int32_t v61; // w22
  CommonUI_o *v62; // x19
  System_Action_o *v63; // x23
  struct EventTutorialEntity_TextTuto_array *v64; // x8
  __int64 v65; // x9
  EventTutorialEntity_TextTuto_o *v66; // x8
  int32_t v67; // w21
  struct EventTutorialEntity_TextTuto_array *v68; // x8
  __int64 v69; // x9
  EventTutorialEntity_TextTuto_o *v70; // x8
  CommonUI_o *v71; // x22
  System_String_o *text; // x23
  System_String_o *Empty; // x24
  System_String_o *v74; // x25
  System_String_o *v75; // x26
  CommonConfirmDialog_ClickDelegate_o *v76; // x27
  struct EventTutorialEntity_TextTuto_array *v77; // x8
  __int64 v78; // x9
  EventTutorialEntity_TextTuto_o *v79; // x8
  Il2CppObject *v80; // x19
  System_Action_o *v81; // x21
  float v82; // s8
  UnityEngine_Object_o *SceneRootComponent_object; // x21
  float *monitor; // x8
  Il2CppObject *v85; // x21
  System_Action_o *v86; // x23
  Il2CppObject *v87; // x0
  int32_t eventId; // w19
  SelectBonusBaseMaster_o *v89; // x21
  System_Action_o *v90; // x22
  struct EventTutorialEntity_TextTuto_array *v91; // x8
  __int64 v92; // x9
  EventTutorialEntity_TextTuto_o *v93; // x8
  System_String_o *title; // x23
  System_String_o *v95; // x24
  CommonUI_o *v96; // x22
  System_Action_o *v97; // x25
  struct EventTutorialEntity_TextTuto_array *v98; // x8
  __int64 v99; // x9
  EventTutorialEntity_TextTuto_o *v100; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v102; // x10
  int MasterName_k__BackingField; // w9
  UnityEngine_Rect_array *v104; // x22
  int v105; // w8
  bool v106; // w11
  __int64 v107; // x12
  EventTutorialEntity_TextTuto_o *v108; // x10
  struct EventTutorialEntity_RectData_array *v109; // x10
  int v110; // w12
  int32x4_t *v111; // x10
  int32_t v112; // w23
  struct EventTutorialEntity_TextTuto_array *v113; // x8
  __int64 v114; // x9
  EventTutorialEntity_TextTuto_o *v115; // x8
  int32_t v116; // w26
  struct EventTutorialEntity_TextTuto_array *v117; // x8
  __int64 v118; // x9
  EventTutorialEntity_TextTuto_o *v119; // x8
  System_String_o *v120; // x23
  System_String_o *v121; // x24
  CommonUI_o *v122; // x22
  System_Action_o *v123; // x25
  struct EventTutorialEntity_TextTuto_array *v124; // x8
  __int64 v125; // x9
  EventTutorialEntity_TextTuto_o *v126; // x8
  int32_t dlgTitleFontSize; // w19
  int32_t dlgFontSize; // w20
  struct EventTutorialEntity_TextTuto_array *v129; // x8
  __int64 v130; // x9
  EventTutorialEntity_TextTuto_o *v131; // x8
  struct EventTutorialEntity_TextTuto_array *v132; // x8
  __int64 v133; // x9
  EventTutorialEntity_TextTuto_o *v134; // x8
  System_String_o *v135; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v137; // x19
  System_Action_o *v138; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector2_o v140; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v141; // 0:s2.4,4:s3.4,8:s4.4

  while ( 1 )
  {
    v5 = transitionQuest;
    v6 = callback;
    v7 = idx;
    v8 = this;
    if ( (byte_4D30C9D & 1) == 0 )
    {
      sub_1C93AD4(&System_Action_FortificationNotifyDialog__TypeInfo);
      sub_1C93AD4(&System_Action_TypeInfo);
      sub_1C93AD4(&Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
      sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
      sub_1C93AD4(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
      sub_1C93AD4(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
      sub_1C93AD4(&DataManager_TypeInfo);
      sub_1C93AD4(&LocalizationManager_TypeInfo);
      sub_1C93AD4(&Method_System_Nullable_int___ctor__);
      sub_1C93AD4(&UnityEngine_Object_TypeInfo);
      sub_1C93AD4(&UnityEngine_Rect___TypeInfo);
      sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1C93AD4(&string_TypeInfo);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__0__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__10__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__11__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__1__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__2__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__3__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__4__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__6__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__7__);
      sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__9__);
      sub_1C93AD4(&EventTutorialEntity___c__DisplayClass29_0_TypeInfo);
      sub_1C93AD4(&StringLiteral_10980/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
      sub_1C93AD4(&StringLiteral_21456/*"left"*/);
      sub_1C93AD4(&StringLiteral_6304/*"EventUI/Prefabs/80400"*/);
      sub_1C93AD4(&StringLiteral_6870/*"FortificationNotifyDialog"*/);
      sub_1C93AD4(&StringLiteral_23406/*"right"*/);
      sub_1C93AD4(&StringLiteral_10981/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
      byte_4D30C9D = 1;
    }
    v9 = sub_1C93D20(EventTutorialEntity___c__DisplayClass29_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_130;
    *(_QWORD *)(v9 + 16) = v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v8, v12, v13, v14, v15, v16, v17);
    *(_DWORD *)(v9 + 24) = v7;
    *(_QWORD *)(v9 + 32) = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v6, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v9 + 40) = v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)v5, v24, v25, v26, v27, v28, v29);
    textJson = v8->fields.textJson;
    if ( !textJson )
      goto LABEL_130;
    v31 = *(_DWORD *)(v9 + 24);
    max_length = textJson->max_length;
    if ( (int)v31 >= (int)max_length )
      goto LABEL_49;
    if ( v31 >= max_length )
      goto LABEL_131;
    v33 = textJson->m_Items[v31];
    if ( !v33 )
      goto LABEL_130;
    commonReleaseId = v33->fields.commonReleaseId;
    if ( commonReleaseId < 1 )
      goto LABEL_15;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !Master_object )
      goto LABEL_130;
    Master_object = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(Master_object, commonReleaseId, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    callback = *(System_Action_o **)(v9 + 32);
    transitionQuest = *(System_Action_int__o **)(v9 + 40);
    this = v8;
    idx = *(_DWORD *)(v9 + 24) + 1;
  }
  textJson = v8->fields.textJson;
  if ( !textJson )
    goto LABEL_130;
  v31 = *(_DWORD *)(v9 + 24);
LABEL_15:
  if ( v31 >= LODWORD(textJson->max_length) )
    goto LABEL_131;
  v35 = textJson->m_Items[v31];
  if ( !v35 )
    goto LABEL_130;
  textPos = v35->fields.textPos;
  v37 = 0.0;
  if ( !textPos )
  {
    v39 = 1;
    goto LABEL_23;
  }
  v38 = textPos->max_length;
  v39 = (_DWORD)v38 == 0;
  if ( !v38 )
  {
LABEL_23:
    v41 = 0.0;
    v40 = 0.0;
    goto LABEL_24;
  }
  if ( (unsigned int)v38 < 2 )
    goto LABEL_131;
  v40 = (float)textPos->m_Items[0];
  v41 = (float)textPos->m_Items[1];
LABEL_24:
  ptPos = v35->fields.ptPos;
  if ( ptPos )
  {
    v43 = ptPos->max_length;
    v44 = 0.0;
    if ( v43 )
    {
      if ( (unsigned int)v43 < 2 )
        goto LABEL_131;
      v44 = (float)ptPos->m_Items[0];
      v37 = (float)ptPos->m_Items[1];
    }
  }
  else
  {
    v44 = 0.0;
  }
  scrDlgTitle = v35->fields.scrDlgTitle;
  spacingY = v35->fields.spacingY;
  presentClassScoreResetItemIdList = (System_Collections_ICollection_o *)v35->fields.presentClassScoreResetItemIdList;
  Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v48 = v8->fields.textJson;
    if ( !v48 )
      goto LABEL_130;
    v49 = *(int *)(v9 + 24);
    if ( (unsigned int)v49 >= LODWORD(v48->max_length) )
      goto LABEL_131;
    v50 = v48->m_Items[v49];
    if ( !v50 )
      goto LABEL_130;
    if ( v50->fields.isFortification )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = (System_Action_object__o *)sub_1C93D20(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v52,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6304/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_6870/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v52,
          0,
          (const MethodInfo_319AF60 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_130:
      sub_1C93D2C(Master_object, v11);
    }
    if ( v50->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v50->fields.releaseClassBoardBaseIds;
      if ( !releaseClassBoardBaseIds || !releaseClassBoardBaseIds->max_length )
      {
LABEL_49:
        ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0);
        return;
      }
      addClassIds = v50->fields.addClassIds;
      if ( addClassIds && addClassIds->max_length )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LODWORD(releaseClassBoardBaseIds->max_length) )
        {
          v61 = releaseClassBoardBaseIds->m_Items[0];
          v62 = (CommonUI_o *)Master_object;
          v63 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v63,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__6__,
            0);
          if ( !v62 )
            goto LABEL_130;
          CommonUI__OpenClassBoardAddClassDialog(v62, v61, addClassIds, v63, 0);
          return;
        }
        goto LABEL_131;
      }
      v82 = 0.0;
      if ( v8->fields.openType == 100 )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_130;
        SceneRootComponent_object = (UnityEngine_Object_o *)AvalonSceneManager__GetSceneRootComponent_object_(
                                                              (AvalonSceneManager_o *)Master_object,
                                                              91,
                                                              (const MethodInfo_318C410 *)Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (CommonReleaseMaster_o *)UnityEngine_Object__op_Inequality(SceneRootComponent_object, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !SceneRootComponent_object )
            goto LABEL_130;
          Master_object = (CommonReleaseMaster_o *)SceneRootComponent_object[3].klass;
          if ( !Master_object )
            goto LABEL_130;
          ClassBoardController__SetIsGrandScoreDialogOpen((ClassBoardController_o *)Master_object, 0);
          monitor = (float *)SceneRootComponent_object[4].monitor;
          if ( !monitor )
            goto LABEL_130;
          v82 = monitor[73];
        }
      }
      v85 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v86 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v86,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__7__,
        0);
      if ( !v85 )
        goto LABEL_130;
      CommonUI__OpenClassBoardReleaseDialog(
        (CommonUI_o *)v85,
        releaseClassBoardBaseIds,
        v86,
        v8->fields.openType == 100,
        v82,
        0);
    }
    else
    {
      Master_object = (CommonReleaseMaster_o *)BasicHelper__IsNullOrEmpty(presentClassScoreResetItemIdList, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v64 = v8->fields.textJson;
        if ( !v64 )
          goto LABEL_130;
        v65 = *(int *)(v9 + 24);
        if ( (unsigned int)v65 >= LODWORD(v64->max_length) )
          goto LABEL_131;
        v66 = v64->m_Items[v65];
        if ( !v66 )
          goto LABEL_130;
        v67 = spacingY & ~(spacingY >> 31);
        if ( v66->fields.isQuestRelease )
        {
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v68 = v8->fields.textJson;
          if ( !v68 )
            goto LABEL_130;
          v69 = *(int *)(v9 + 24);
          if ( (unsigned int)v69 >= LODWORD(v68->max_length) )
            goto LABEL_131;
          v70 = v68->m_Items[v69];
          if ( !v70 )
            goto LABEL_130;
          v71 = (CommonUI_o *)Master_object;
          text = v70->fields.text;
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_10981/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0);
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0);
          v76 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v76,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__3__,
            0);
          v77 = v8->fields.textJson;
          if ( !v77 )
            goto LABEL_130;
          v78 = *(int *)(v9 + 24);
          if ( (unsigned int)v78 >= LODWORD(v77->max_length) )
            goto LABEL_131;
          v79 = v77->m_Items[v78];
          if ( !v79 || !v71 )
            goto LABEL_130;
          CommonUI__OpenConfirmDecideDlg(
            v71,
            Empty,
            text,
            v74,
            v75,
            v76,
            v79->fields.dlgFontSize,
            0.0,
            15.0,
            v67,
            0,
            0,
            240,
            0,
            0,
            0,
            v79->fields.dlgTitleFontSize,
            0);
        }
        else if ( v66->fields.isSelectBonus )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v87 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = v8->fields.eventId;
          v89 = (SelectBonusBaseMaster_o *)v87;
          v90 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v90,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__4__,
            0);
          if ( !v89 )
            goto LABEL_130;
          SelectBonusBaseMaster__OpenSelectBonusDialog(v89, eventId, v90, 0);
        }
        else if ( v66->fields.dlgFontSize < 1 )
        {
          rects = v66->fields.rects;
          if ( !rects )
            goto LABEL_130;
          Master_object = (CommonReleaseMaster_o *)sub_1C93B7C(UnityEngine_Rect___TypeInfo, LODWORD(rects->max_length));
          if ( !Master_object )
            goto LABEL_130;
          v102 = v8->fields.textJson;
          if ( !v102 )
            goto LABEL_130;
          MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
          v104 = (UnityEngine_Rect_array *)Master_object;
          v105 = 1;
          v106 = MasterName_k__BackingField > 0;
          while ( 1 )
          {
            v107 = *(int *)(v9 + 24);
            if ( (unsigned int)v107 >= LODWORD(v102->max_length) )
              goto LABEL_131;
            v108 = v102->m_Items[v107];
            if ( !v108 )
              goto LABEL_130;
            if ( !v106 )
              break;
            v109 = v108->fields.rects;
            if ( !v109 )
              goto LABEL_130;
            v110 = v105 - 1;
            if ( (unsigned int)(v105 - 1) >= LODWORD(v109->max_length) )
              goto LABEL_131;
            v111 = (int32x4_t *)v109->m_Items[v110];
            if ( !v111 )
              goto LABEL_130;
            if ( v110 >= (unsigned int)MasterName_k__BackingField )
              goto LABEL_131;
            *((float32x4_t *)&Master_object->fields.revision + v110) = vcvtq_f32_s32(v111[1]);
            MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
            v102 = v8->fields.textJson;
            v106 = v105++ < MasterName_k__BackingField;
            if ( !v102 )
              goto LABEL_130;
          }
          Master_object = (CommonReleaseMaster_o *)BasicHelper__EqualExceptNullOrEmpty(
                                                     v108->fields.textAlign,
                                                     (System_String_o *)StringLiteral_21456/*"left"*/,
                                                     0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v112 = 1;
          }
          else
          {
            v129 = v8->fields.textJson;
            if ( !v129 )
              goto LABEL_130;
            v130 = *(int *)(v9 + 24);
            if ( (unsigned int)v130 >= LODWORD(v129->max_length) )
              goto LABEL_131;
            v131 = v129->m_Items[v130];
            if ( !v131 )
              goto LABEL_130;
            if ( BasicHelper__EqualExceptNullOrEmpty(v131->fields.textAlign, (System_String_o *)StringLiteral_23406/*"right"*/, 0) )
              v112 = 3;
            else
              v112 = 2;
          }
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v132 = v8->fields.textJson;
          if ( !v132 )
            goto LABEL_130;
          v133 = *(int *)(v9 + 24);
          if ( (unsigned int)v133 >= LODWORD(v132->max_length) )
LABEL_131:
            sub_1C93D34(Master_object);
          v134 = v132->m_Items[v133];
          if ( !v134 )
            goto LABEL_130;
          v135 = v134->fields.text;
          dlgBgId = v134->fields.dlgBgId;
          v137 = (CommonUI_o *)Master_object;
          v138 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v138,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__11__,
            0);
          if ( !v137 )
            goto LABEL_130;
          v141.fields.z = 0.0;
          v140.fields.x = v40;
          v140.fields.y = v41;
          v141.fields.x = v44;
          v141.fields.y = v37;
          CommonUI__OpenEventTutorialNotificationDialog(v137, v135, v104, v140, v141, dlgBgId, v112, v138, 0, v67, 0);
        }
        else
        {
          Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(v66->fields.messageWidgetSizeX, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v91 = v8->fields.textJson;
            if ( !v91 )
              goto LABEL_130;
            v92 = *(int *)(v9 + 24);
            if ( (unsigned int)v92 >= LODWORD(v91->max_length) )
              goto LABEL_131;
            v93 = v91->m_Items[v92];
            if ( !v93 )
              goto LABEL_130;
            title = v93->fields.title;
            v95 = v93->fields.text;
            v96 = (CommonUI_o *)Master_object;
            v97 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v97,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__9__,
              0);
            v98 = v8->fields.textJson;
            if ( !v98 )
              goto LABEL_130;
            v99 = *(int *)(v9 + 24);
            if ( (unsigned int)v99 >= LODWORD(v98->max_length) )
              goto LABEL_131;
            v100 = v98->m_Items[v99];
            if ( !v100 || !v96 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31582080(
              v96,
              title,
              v95,
              v97,
              v41,
              -162.5,
              -1,
              0,
              v100->fields.dlgTitleFontSize,
              0,
              0,
              v100->fields.dlgFontSize,
              0,
              v67,
              v39,
              0,
              0);
          }
          else
          {
            v113 = v8->fields.textJson;
            if ( !v113 )
              goto LABEL_130;
            v114 = *(int *)(v9 + 24);
            if ( (unsigned int)v114 >= LODWORD(v113->max_length) )
              goto LABEL_131;
            v115 = v113->m_Items[v114];
            if ( !v115 )
              goto LABEL_130;
            v116 = System_Int32__Parse(v115->fields.messageWidgetSizeX, 0);
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v117 = v8->fields.textJson;
            if ( !v117 )
              goto LABEL_130;
            v118 = *(int *)(v9 + 24);
            if ( (unsigned int)v118 >= LODWORD(v117->max_length) )
              goto LABEL_131;
            v119 = v117->m_Items[v118];
            if ( !v119 )
              goto LABEL_130;
            v120 = v119->fields.title;
            v121 = v119->fields.text;
            v122 = (CommonUI_o *)Master_object;
            v123 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v123,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__10__,
              0);
            v124 = v8->fields.textJson;
            if ( !v124 )
              goto LABEL_130;
            v125 = *(int *)(v9 + 24);
            if ( (unsigned int)v125 >= LODWORD(v124->max_length) )
              goto LABEL_131;
            v126 = v124->m_Items[v125];
            if ( !v126 )
              goto LABEL_130;
            dlgTitleFontSize = v126->fields.dlgTitleFontSize;
            dlgFontSize = v126->fields.dlgFontSize;
            messageWidgetSizeX = 0;
            System_Nullable_int____ctor(
              (System_Nullable_int__o)&messageWidgetSizeX,
              v116,
              (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
            if ( !v122 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31582080(
              v122,
              v120,
              v121,
              v123,
              v41,
              -162.5,
              -1,
              0,
              dlgTitleFontSize,
              0,
              0,
              dlgFontSize,
              0,
              v67,
              v39,
              messageWidgetSizeX,
              0);
          }
        }
      }
      else
      {
        v80 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v81 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v81,
          (Il2CppObject *)v9,
          Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__2__,
          0);
        if ( !v80 )
          goto LABEL_130;
        CommonUI__OpenTutorialItemGetDialog(
          (CommonUI_o *)v80,
          (System_Int32_array *)presentClassScoreResetItemIdList,
          v81,
          0);
      }
    }
  }
  else
  {
    Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v53 = v8->fields.textJson;
    if ( !v53 )
      goto LABEL_130;
    v54 = *(int *)(v9 + 24);
    if ( (unsigned int)v54 >= LODWORD(v53->max_length) )
      goto LABEL_131;
    v55 = v53->m_Items[v54];
    if ( !v55 )
      goto LABEL_130;
    v56 = v55->fields.text;
    v57 = (CommonUI_o *)Master_object;
    v58 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__0__,
      0);
    if ( !v57 )
      goto LABEL_130;
    CommonUI__OpenScrollMessageDialog(v57, scrDlgTitle, v56, 10, 0, 0, 0, v58, 1, 0);
  }
}


void EventTutorialEntity__TransitionQuest(EventTutorialEntity_o *this, int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D30C9C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D30C9C = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D953 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D953 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


System_Int32_array_array *EventTutorialEntity__getTargets(EventTutorialEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  System_String_o *v7; // x20
  __int64 v8; // x25
  GrandQuestFolderBoardItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  EventTutorialEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__21_0; // x23
  Il2CppObject *v15; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4D30C96 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_ConvertAll_string__int___);
    sub_1C93AD4(&System_Converter_string__int__TypeInfo);
    sub_1C93AD4(&int_____TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__getTargets_b__21_0__);
    sub_1C93AD4(&EventTutorialEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D30C96 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C93B7C(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_1C93B7C(int_____TypeInfo, LODWORD(targetIds->max_length));
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_1C93D2C(v4, v5);
  v7 = v4;
  v8 = 0;
  p_monitor = (GrandQuestFolderBoardItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return (System_Int32_array_array *)v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_23;
    v4 = v6->m_Items[v8];
    if ( v4 )
    {
      v4 = System_String__Replace_64472288(
             v4,
             (System_String_o *)StringLiteral_15904/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_64472288(
               v4,
               (System_String_o *)StringLiteral_16156/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v11 = System_String__Split(v4, 0x2Cu, 0, 0);
          v12 = EventTutorialEntity___c_TypeInfo;
          v13 = (System_Object_array *)v11;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v12 = EventTutorialEntity___c_TypeInfo;
          }
          _9__21_0 = (System_Converter_object__int__o *)v12->static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = EventTutorialEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__21_0 = (System_Converter_object__int__o *)sub_1C93D20(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__21_0, v15, Method_EventTutorialEntity___c__getTargets_b__21_0__, 0);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__21_0 = (struct System_Converter_string__int__o *)_9__21_0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
              (int32_t)_9__21_0,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__21_0,
                                    (const MethodInfo_32A7758 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= LODWORD(v7[1].klass) )
LABEL_23:
              sub_1C93D34(v4);
            p_monitor->klass = (GrandQuestFolderBoardItem_c *)v4;
            sub_1C93A78(p_monitor, (int32_t)v4, v23, v24, v25, v26, v27, v28);
            v6 = this->fields.targetIds;
            ++v8;
            p_monitor = (GrandQuestFolderBoardItem_o *)((char *)p_monitor + 8);
            if ( v6 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialEntity__isEnableCondition(
        EventTutorialEntity_o *this,
        int32_t qId,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Int32_array_array *Targets; // x21
  intptr_t Instance; // x0
  int32_t v14; // w8
  il2cpp_array_size_t v15; // x8
  int v16; // w9
  System_Int32_array *v17; // x10
  int v18; // w11
  int32_t v19; // w10
  il2cpp_array_size_t v20; // x8
  System_Int32_array *v21; // x9
  il2cpp_array_size_t max_length; // x8
  int v23; // w9
  System_Int32_array *v24; // x10
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  il2cpp_array_size_t v27; // x8
  QuestGroupMaster_o *v28; // x21
  unsigned __int64 v29; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  il2cpp_array_size_t v31; // x8
  int v32; // w9
  System_Int32_array *v33; // x10
  int v34; // w11
  int32_t v35; // w12
  int32_t v36; // w12
  int32_t v37; // w10
  __int64 v38; // x22
  il2cpp_array_size_t v39; // x8
  int v40; // w9
  System_Int32_array *v41; // x10
  int v42; // w11
  int32_t v43; // w12
  int32_t v44; // w10
  TerminalSceneComponent_c *v45; // x0
  UnityEngine_Object_o *mInstance; // x20

  if ( (byte_4D30C98 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D30C98 = 1;
  }
  Targets = EventTutorialEntity__getTargets(this, *(const MethodInfo **)&qId);
  Instance = 0;
  switch ( this->fields.openType )
  {
    case 0:
    case 2:
    case 4:
    case 0xA:
    case 0xC:
    case 0xE:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x44:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x6B:
    case 0x6C:
      goto LABEL_4;
    case 1:
    case 3:
    case 0xB:
    case 0x11:
    case 0x12:
    case 0x35:
    case 0x5A:
      if ( !Targets )
        goto LABEL_4;
      max_length = Targets->max_length;
      if ( !max_length )
        goto LABEL_4;
      if ( (int)max_length < 1 )
        goto LABEL_118;
      v23 = 0;
      while ( 2 )
      {
        v24 = Targets->m_Items[v23];
        if ( !v24 )
          goto LABEL_120;
        if ( SLODWORD(v24->max_length) >= 1 && v24->m_Items[0] != qId )
        {
          ++v23;
          Instance = 0;
          if ( (_DWORD)max_length == v23 )
            return Instance;
          continue;
        }
        goto LABEL_4;
      }
    case 5:
    case 7:
    case 8:
    case 9:
    case 0xD:
    case 0xF:
    case 0x10:
    case 0x2D:
    case 0x42:
    case 0x48:
      if ( Targets )
      {
        v15 = Targets->max_length;
        if ( v15 )
        {
          if ( (int)v15 >= 1 )
          {
            v16 = 0;
            while ( 1 )
            {
              v17 = Targets->m_Items[v16];
              if ( !v17 )
                break;
              v18 = v17->max_length;
              if ( v18 < 1 )
                goto LABEL_4;
              if ( v17->m_Items[0] == qId )
              {
                if ( v18 < 2 )
                  goto LABEL_4;
                v19 = v17->m_Items[1];
                if ( v19 == ex1 || !v19 )
                  goto LABEL_4;
              }
              ++v16;
              Instance = 0;
              if ( (_DWORD)v15 == v16 )
                return Instance;
            }
LABEL_120:
            sub_1C93D2C(Instance, v11);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (intptr_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v27 = condIds->max_length;
      if ( (int)v27 < 1 )
        goto LABEL_118;
      v28 = (QuestGroupMaster_o *)Instance;
      v29 = 0;
      while ( v29 < (unsigned int)v27 )
      {
        if ( !v28 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v28, condIds->m_Items[v29], 2, 0);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v27) = condIds->max_length;
        ++v29;
        Instance = 0;
        if ( (__int64)v29 >= (int)v27 )
          return Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v31 = Targets->max_length;
      if ( !v31 )
        goto LABEL_4;
      if ( (int)v31 < 1 )
        goto LABEL_118;
      v32 = 0;
      while ( 2 )
      {
        v33 = Targets->m_Items[v32];
        if ( !v33 )
          goto LABEL_120;
        v34 = v33->max_length;
        if ( v34 >= 1 )
        {
          if ( v33->m_Items[0] != qId
            || v34 >= 2
            && ((v35 = v33->m_Items[1], v35 != ex1) && v35
             || v34 >= 3
             && ((v36 = v33->m_Items[2], v36 != ex2) && v36 || v34 >= 4 && (v37 = v33->m_Items[3], v37 != ex3) && v37)) )
          {
            ++v32;
            Instance = 0;
            if ( (_DWORD)v31 == v32 )
              return Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v39 = Targets->max_length;
      if ( !v39 || (int)v39 < 1 )
        goto LABEL_4;
      v40 = 0;
      while ( 2 )
      {
        v41 = Targets->m_Items[v40];
        if ( !v41 )
          goto LABEL_120;
        v42 = v41->max_length;
        if ( v42 < 1 )
          goto LABEL_118;
        if ( v41->m_Items[0] != qId )
          goto LABEL_94;
        if ( v42 < 2 )
          goto LABEL_118;
        v43 = v41->m_Items[1];
        if ( v43 != ex1 )
        {
          if ( v43 )
            goto LABEL_94;
        }
        if ( v42 < 3 )
          goto LABEL_118;
        v44 = v41->m_Items[2];
        Instance = 0;
        if ( v44 != ex2 )
        {
          if ( v44 )
          {
LABEL_94:
            if ( (_DWORD)v39 == ++v40 )
              goto LABEL_4;
            continue;
          }
        }
        return Instance;
      }
    case 0x36:
    case 0x38:
    case 0x39:
      if ( this->fields.condType != 95 )
        goto LABEL_118;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0) )
        goto LABEL_118;
      goto LABEL_4;
    case 0x37:
      if ( this->fields.condType != 95 )
        goto LABEL_118;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0) )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsSvtEquipFriendShipStorageHaving(0) )
          goto LABEL_118;
      }
      goto LABEL_4;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x45:
    case 0x4D:
    case 0x64:
    case 0x69:
    case 0x6A:
      if ( !Targets )
        goto LABEL_4;
      v20 = Targets->max_length;
      if ( !v20 )
        goto LABEL_4;
      if ( (_DWORD)v20 != 1 )
      {
        if ( (int)v20 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return Instance;
        }
        goto LABEL_74;
      }
      v21 = Targets->m_Items[0];
      if ( !v21 )
        goto LABEL_120;
      if ( LODWORD(v21->max_length) != 1 || v21->m_Items[0] )
      {
LABEL_74:
        v38 = 0;
        while ( (unsigned int)v38 < (unsigned int)v20 )
        {
          Instance = (intptr_t)Targets->m_Items[v38];
          if ( !Instance )
            goto LABEL_120;
          if ( *(int *)(Instance + 24) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v20) = Targets->max_length;
          ++v38;
          Instance = 0;
          if ( (int)v38 >= (int)v20 )
            return Instance;
        }
LABEL_121:
        sub_1C93D34(Instance);
      }
LABEL_4:
      v14 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v14 && v14 != 11 )
      {
        if ( v14 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (intptr_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               0);
        }
      }
      return Instance;
    case 0x43:
      if ( !Targets || !Targets->max_length )
        goto LABEL_4;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      v45 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v45 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v45->static_fields->mInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_118;
      if ( !mInstance )
        goto LABEL_120;
      Instance = mInstance[10].fields.m_CachedPtr;
      if ( !Instance )
        goto LABEL_120;
      if ( !ScrTerminalListTop__ContainsMapQuest((ScrTerminalListTop_o *)Instance, Targets, 0) )
        goto LABEL_118;
      goto LABEL_4;
    default:
      return Instance;
  }
}


bool EventTutorialEntity__isOpenCondition(
        EventTutorialEntity_o *this,
        int32_t qId,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        const MethodInfo *method)
{
  int32_t eventId; // w24
  int32_t flagType; // w25
  __int64 v13; // x1
  const MethodInfo *v14; // x5
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  System_Collections_Generic_HashSet_T__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  __int64 v19; // x1
  int32_t value; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D30C97 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D30C97 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0;
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41176140(flagType, eventId, 0) )
  {
    return 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2DDE7 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2DDE7 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    if ( v16->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
    {
      if ( !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !byte_4D2DDE7 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2DDE7 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v17->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
      if ( !ForcePlayEventTutorialArray_k__BackingField )
        sub_1C93D2C(0, v13);
      System_Collections_Generic_HashSet_object___GetEnumerator(
        &v22,
        ForcePlayEventTutorialArray_k__BackingField,
        (const MethodInfo_372C334 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_35F9AA8 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_1C93D2C(0, v19);
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               (System_Collections_Generic_Dictionary_int__int__o *)v22.fields._current,
               this->fields.eventId,
               &value,
               (const MethodInfo_34B5964 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__)
          && value == this->fields.flagType )
        {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose(
            &v22,
            (const MethodInfo_35F9AA4 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
          return 1;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_35F9AA4 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    }
    return EventTutorialEntity__isEnableCondition(this, qId, ex1, ex2, ex3, v14);
  }
}


void EventTutorialEntity_RectData___ctor(EventTutorialEntity_RectData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity_TextTuto___ctor(EventTutorialEntity_TextTuto_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30CAF & 1) == 0 )
  {
    sub_1C93AD4(&EventTutorialEntity___c_TypeInfo);
    byte_4D30CAF = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventTutorialEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventTutorialEntity___c___getTargets_b__21_0(
        EventTutorialEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( System_Int32__TryParse(input, &result, 0) )
    return result;
  else
    return 0;
}


void EventTutorialEntity___c__DisplayClass25_0___ctor(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( !EventTutorialEntity__HasBeforeAction(_4__this, (const MethodInfo *)action) )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, (const MethodInfo *)action) )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( EventTutorialEntity__IsPlanetEarthAction(_4__this, (const MethodInfo *)action) )
  {
LABEL_7:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
    if ( EventTutorialEntity__IsPlayScriptTiming(_4__this, 2, v6) )
    {
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        EventTutorialEntity__PlayScript(_4__this, action, v8);
        return;
      }
LABEL_14:
      sub_1C93D2C(_4__this, action);
    }
    ActionExtensions__Call(action, 0);
  }
  else
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
    EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 0, action, v7);
  }
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x23
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x4
  struct EventTutorialEntity_o *_4__this; // x19
  struct System_Int32_array *imageIds; // x8
  struct EventTutorialEntity_o *v24; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v26; // x20
  System_Action_int__o *_9__4; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct EventTutorialEntity_o *v34; // x8
  struct EventTutorialEntity_o *v35; // x8
  char v36; // w24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x19
  System_String_o *v39; // x20
  __int64 v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_List_object__o *v47; // x25
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct EventTutorialEntity_o *v54; // x8
  __int64 v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct EventTutorialEntity_o *v62; // x8
  struct System_Int32_array *condIds; // x8
  System_Collections_Generic_List_AssistEntity__o *AssistEntityListByShopGroupId; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  Il2CppObject *v71; // x21
  System_Action_object__o *v72; // x23
  __int64 v73; // x8
  __int64 v74; // x8
  System_Action_o *v75; // x4
  __int64 *v76; // x8
  CommonUI_o *v77; // x0
  int32_t condType; // w8
  Il2CppObject *Master_object; // x26
  int32_t maskSprite; // w27
  __int64 v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 *v88; // x22
  __int64 v89; // x24
  EventEquipSkillPartsMaster_o *v90; // x22
  __int64 v91; // x23
  Il2CppObject *v92; // x22
  int32_t v93; // w23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  Il2CppObject *v103; // x22
  __int64 v104; // x8
  __int64 v105; // x8
  const MethodInfo_319AF60 *v106; // x5
  System_String_o *v107; // x1
  System_String_o *v108; // x2
  System_Action_T__o *v109; // x3
  struct EventTutorialEntity_o *v110; // x8
  __int64 v111; // x25
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  __int64 v118; // x26
  struct EventTutorialEntity_o *v119; // x8
  struct System_Int32_array *v120; // x8
  System_Collections_ICollection_o *QuestIdListByGroupId; // x24
  System_String_o *v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  Il2CppObject *v129; // x21
  System_Action_object__o *v130; // x22
  __int64 v131; // x8
  __int64 v132; // x8
  struct EventTutorialEntity_o *v133; // x8
  CommonUI_o *v134; // x19
  System_String_o *DialogPrefabName; // x20
  System_Action_object__o *v136; // x21
  Il2CppObject *v137; // x21
  System_Action_object__o *v138; // x24
  int32_t eventId; // [xsp+Ch] [xbp-74h] BYREF
  QuestPhaseEntity_o *v140; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D30CB0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EventCommonImageDialog__TypeInfo);
    sub_1C93AD4(&System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
    sub_1C93AD4(&System_Action_EventInfoSkillGetDialog__TypeInfo);
    sub_1C93AD4(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
    sub_1C93AD4(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___);
    sub_1C93AD4(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___);
    sub_1C93AD4(&Method_CommonUI_LoadAndCreateDialog_EventInfoSkillGetDialog___);
    sub_1C93AD4(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__4__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__6__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__7__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_3_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_4__OpenTutorial_b__8__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_4_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_5__OpenTutorial_b__9__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_5_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_6__OpenTutorial_b__10__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_6_TypeInfo);
    sub_1C93AD4(&StringLiteral_14612/*"TitleInfoSkillGetDialogPrefab"*/);
    sub_1C93AD4(&StringLiteral_6245/*"EventEquipSkillPartsRenoCompletionDialog"*/);
    sub_1C93AD4(&StringLiteral_5629/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/);
    sub_1C93AD4(&StringLiteral_2164/*"AddPartsDialog"*/);
    sub_1C93AD4(&StringLiteral_5627/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    sub_1C93AD4(&StringLiteral_6305/*"EventUI/Prefabs/{0}"*/);
    sub_1C93AD4(&StringLiteral_6246/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/);
    sub_1C93AD4(&StringLiteral_13785/*"Terminal/Info"*/);
    byte_4D30CB0 = 1;
  }
  v140 = 0;
  entity = 0;
  v5 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_128;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = action;
  v14 = (System_Action_o **)(v5 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)action, v15, v16, v17, v18, v19, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_128;
  imageIds = _4__this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = this->fields.__4__this;
    if ( v24 && Instance )
    {
      CommonUI__OpenTutorialImageDialog_31604240(
        Instance,
        v24->fields.imageIds,
        v24->fields.flagType,
        v24->fields.eventId,
        *v14,
        0,
        0,
        this->fields.isNoRequestTutorialFlag,
        0);
      return;
    }
LABEL_128:
    sub_1C93D2C(Instance, v7);
  }
  textJson = _4__this->fields.textJson;
  if ( !textJson || !textJson->max_length )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.script, 0) )
      goto LABEL_42;
    Instance = (CommonUI_o *)this->fields.__4__this;
    if ( !Instance )
      goto LABEL_128;
    if ( !EventTutorialEntity__GetDialogPrefabName((EventTutorialEntity_o *)Instance, v7) )
    {
LABEL_42:
      ActionExtensions__Call(*v14, 0);
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventDetailMaster___);
    v34 = this->fields.__4__this;
    if ( !v34 )
      goto LABEL_128;
    if ( !Instance )
      goto LABEL_128;
    Instance = (CommonUI_o *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               v34->fields.eventId,
                               (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    v35 = this->fields.__4__this;
    if ( !v35 )
      goto LABEL_128;
    v36 = (char)Instance;
    eventId = v35->fields.eventId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6305/*"EventUI/Prefabs/{0}"*/, v37, 0);
    if ( !this->fields.__4__this )
      goto LABEL_128;
    v38 = (System_String_o *)Instance;
    Instance = (CommonUI_o *)EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v7);
    v39 = (System_String_o *)Instance;
    if ( (v36 & 1) != 0 )
    {
      Instance = (CommonUI_o *)entity;
      if ( !entity )
        goto LABEL_128;
      Instance = (CommonUI_o *)EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)entity, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v40 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v40, 0);
        if ( !v40 )
          goto LABEL_128;
        *(_QWORD *)(v40 + 24) = v5;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 24), v5, v41, v42, v43, v44, v45, v46);
        v47 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v47,
          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
        *(_QWORD *)(v40 + 16) = v47;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 16), (int32_t)v47, v48, v49, v50, v51, v52, v53);
        v54 = this->fields.__4__this;
        if ( !v54 )
          goto LABEL_128;
        if ( v54->fields.condType == 67 )
        {
          Instance = (CommonUI_o *)System_String__Equals_64461772(v39, (System_String_o *)StringLiteral_2164/*"AddPartsDialog"*/, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v55 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_4_TypeInfo);
            System_Object___ctor((Il2CppObject *)v55, 0);
            if ( !v55 )
              goto LABEL_128;
            *(_QWORD *)(v55 + 24) = v40;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v55 + 24), v40, v56, v57, v58, v59, v60, v61);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AssistMaster___);
            v62 = this->fields.__4__this;
            if ( !v62 )
              goto LABEL_128;
            condIds = v62->fields.condIds;
            if ( !condIds )
              goto LABEL_128;
            if ( LODWORD(condIds->max_length) )
            {
              if ( !Instance )
                goto LABEL_128;
              AssistEntityListByShopGroupId = AssistMaster__GetAssistEntityListByShopGroupId(
                                                (AssistMaster_o *)Instance,
                                                condIds->m_Items[0],
                                                0);
              *(_QWORD *)(v55 + 16) = AssistEntityListByShopGroupId;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)(v55 + 16),
                (int32_t)AssistEntityListByShopGroupId,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70);
              v71 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v72 = (System_Action_object__o *)sub_1C93D20(System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
              System_Action_object____ctor(
                v72,
                (Il2CppObject *)v55,
                Method_EventTutorialEntity___c__DisplayClass25_4__OpenTutorial_b__8__,
                0);
              v73 = *(_QWORD *)(v55 + 24);
              if ( !v73 )
                goto LABEL_128;
              v74 = *(_QWORD *)(v73 + 24);
              if ( !v74 || !v71 )
                goto LABEL_128;
              v75 = *(System_Action_o **)(v74 + 16);
              v76 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___;
              v77 = (CommonUI_o *)v71;
LABEL_90:
              v106 = (const MethodInfo_319AF60 *)*v76;
              v107 = v38;
              v108 = v39;
              v109 = (System_Action_T__o *)v72;
LABEL_127:
              CommonUI__LoadAndCreateDialog_object_(v77, v107, v108, v109, v75, v106);
              return;
            }
            goto LABEL_129;
          }
          v54 = this->fields.__4__this;
          if ( !v54 )
            goto LABEL_128;
        }
        condType = v54->fields.condType;
        if ( condType == 46 || condType == 1 )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2D51E )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D51E = 1;
          }
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          }
          maskSprite = (int32_t)Instance->fields.errorDialog->fields.maskSprite;
          if ( !byte_4D2A7BE )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
            byte_4D2A7BE = 1;
          }
          if ( !LODWORD(Instance->fields.dataUpdateDialog) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_128;
          Instance = (CommonUI_o *)QuestPhaseMaster__TryGetEntity(
                                     (QuestPhaseMaster_o *)Master_object,
                                     &v140,
                                     maskSprite,
                                     LODWORD(Instance->fields.errorDialog->fields.m_CancellationTokenSource) + 1,
                                     0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (CommonUI_o *)System_String__Equals_64461772(v39, (System_String_o *)StringLiteral_6245/*"EventEquipSkillPartsRenoCompletionDialog"*/, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v81 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v81, 0);
              if ( !v81 )
                goto LABEL_128;
              *(_QWORD *)(v81 + 32) = v40;
              v88 = (__int64 *)(v81 + 32);
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 32), v40, v82, v83, v84, v85, v86, v87);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
              v89 = *v88;
              if ( !*v88 )
                goto LABEL_128;
              v90 = (EventEquipSkillPartsMaster_o *)Instance;
              v91 = sub_1C93B7C(int___TypeInfo, 1);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4D2D51E )
              {
                sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                byte_4D2D51E = 1;
              }
              Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
              }
              if ( !v91 )
                goto LABEL_128;
              if ( *(_DWORD *)(v91 + 24) )
              {
                *(_DWORD *)(v91 + 32) = Instance->fields.errorDialog->fields.maskSprite;
                if ( !v90 )
                  goto LABEL_128;
                EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                  v90,
                  (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(v89 + 16),
                  (System_Int32_array *)v91,
                  0,
                  0);
                v92 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AssistMaster___);
                if ( !byte_4D2D51E )
                {
                  sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                  byte_4D2D51E = 1;
                }
                Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
                }
                v93 = (int32_t)Instance->fields.errorDialog->fields.maskSprite;
                if ( !byte_4D2A7BE )
                {
                  sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                  Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
                  byte_4D2A7BE = 1;
                }
                if ( !LODWORD(Instance->fields.dataUpdateDialog) )
                {
                  j_il2cpp_runtime_class_init_0(Instance);
                  Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
                }
                if ( !v92 )
                  goto LABEL_128;
                AssistMaster__TryGetValidAssistEntityList(
                  (AssistMaster_o *)v92,
                  (System_Collections_Generic_List_AssistEntity__o **)(v81 + 24),
                  v93,
                  LODWORD(Instance->fields.errorDialog->fields.m_CancellationTokenSource) + 1,
                  1,
                  0);
                Instance = (CommonUI_o *)v140;
                if ( !v140 )
                  goto LABEL_128;
                RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(v140, 0);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v95 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5627/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
                v96 = System_String__Format(RenoCompletionDialogText, v95, 0);
                *(_QWORD *)(v81 + 16) = v96;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 16), (int32_t)v96, v97, v98, v99, v100, v101, v102);
                v103 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v72 = (System_Action_object__o *)sub_1C93D20(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
                System_Action_object____ctor(
                  v72,
                  (Il2CppObject *)v81,
                  Method_EventTutorialEntity___c__DisplayClass25_5__OpenTutorial_b__9__,
                  0);
                v104 = *(_QWORD *)(v81 + 32);
                if ( !v104 )
                  goto LABEL_128;
                v105 = *(_QWORD *)(v104 + 24);
                if ( !v105 || !v103 )
                  goto LABEL_128;
                v75 = *(System_Action_o **)(v105 + 16);
                v76 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
                v77 = (CommonUI_o *)v103;
                goto LABEL_90;
              }
LABEL_129:
              sub_1C93D34(Instance);
            }
          }
        }
        v110 = this->fields.__4__this;
        if ( !v110 )
          goto LABEL_128;
        if ( v110->fields.condType == 51 )
        {
          Instance = (CommonUI_o *)System_String__Equals_64461772(v39, (System_String_o *)StringLiteral_6246/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v111 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_6_TypeInfo);
            System_Object___ctor((Il2CppObject *)v111, 0);
            if ( !v111 )
              goto LABEL_128;
            *(_QWORD *)(v111 + 32) = v40;
            v118 = v111 + 32;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v111 + 32), v40, v112, v113, v114, v115, v116, v117);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestGroupMaster___);
            v119 = this->fields.__4__this;
            if ( !v119 )
              goto LABEL_128;
            v120 = v119->fields.condIds;
            if ( !v120 )
              goto LABEL_128;
            if ( !LODWORD(v120->max_length) )
              goto LABEL_129;
            if ( !Instance )
              goto LABEL_128;
            QuestIdListByGroupId = (System_Collections_ICollection_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                         (QuestGroupMaster_o *)Instance,
                                                                         v120->m_Items[0],
                                                                         2,
                                                                         0);
            Instance = (CommonUI_o *)BasicHelper__IsNullOrEmpty(QuestIdListByGroupId, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
              if ( !*(_QWORD *)v118 || !Instance )
                goto LABEL_128;
              Instance = (CommonUI_o *)EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                                         (EventEquipSkillPartsMaster_o *)Instance,
                                         (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(*(_QWORD *)v118 + 16LL),
                                         (System_Int32_array *)QuestIdListByGroupId,
                                         0,
                                         0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AssistMaster___);
                if ( !Instance )
                  goto LABEL_128;
                Instance = (CommonUI_o *)AssistMaster__TryGetValidAssistEntityList_42503596(
                                           (AssistMaster_o *)Instance,
                                           (System_Collections_Generic_List_AssistEntity__o **)(v111 + 16),
                                           (System_Int32_array *)QuestIdListByGroupId,
                                           0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_5629/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, 0);
                  *(_QWORD *)(v111 + 24) = v122;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v111 + 24),
                    (int32_t)v122,
                    v123,
                    v124,
                    v125,
                    v126,
                    v127,
                    v128);
                  v129 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  v130 = (System_Action_object__o *)sub_1C93D20(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
                  System_Action_object____ctor(
                    v130,
                    (Il2CppObject *)v111,
                    Method_EventTutorialEntity___c__DisplayClass25_6__OpenTutorial_b__10__,
                    0);
                  v131 = *(_QWORD *)(v111 + 32);
                  if ( !v131 )
                    goto LABEL_128;
                  v132 = *(_QWORD *)(v131 + 24);
                  if ( !v132 || !v129 )
                    goto LABEL_128;
                  v75 = *(System_Action_o **)(v132 + 16);
                  v77 = (CommonUI_o *)v129;
                  v107 = v38;
                  v108 = v39;
                  v106 = (const MethodInfo_319AF60 *)Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
                  v109 = (System_Action_T__o *)v130;
                  goto LABEL_127;
                }
              }
            }
          }
        }
      }
    }
    v133 = this->fields.__4__this;
    if ( !v133 )
      goto LABEL_128;
    if ( v133->fields.condType != 1 || !System_String__op_Equality(v39, (System_String_o *)StringLiteral_14612/*"TitleInfoSkillGetDialogPrefab"*/, 0) )
      goto LABEL_125;
    Instance = (CommonUI_o *)entity;
    if ( !entity )
      goto LABEL_128;
    if ( EventDetailEntity__IsEventFlowerGarden((EventDetailEntity_o *)entity, 0) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this->fields.__4__this )
        goto LABEL_128;
      v134 = Instance;
      DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v7);
      v136 = (System_Action_object__o *)sub_1C93D20(System_Action_EventInfoSkillGetDialog__TypeInfo);
      System_Action_object____ctor(
        v136,
        (Il2CppObject *)v5,
        Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__6__,
        0);
      if ( !v134 )
        goto LABEL_128;
      v75 = *v14;
      v77 = v134;
      v108 = DialogPrefabName;
      v107 = (System_String_o *)StringLiteral_13785/*"Terminal/Info"*/;
      v106 = (const MethodInfo_319AF60 *)Method_CommonUI_LoadAndCreateDialog_EventInfoSkillGetDialog___;
      v109 = (System_Action_T__o *)v136;
    }
    else
    {
LABEL_125:
      v137 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v138 = (System_Action_object__o *)sub_1C93D20(System_Action_EventCommonImageDialog__TypeInfo);
      System_Action_object____ctor(
        v138,
        (Il2CppObject *)v5,
        Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__7__,
        0);
      if ( !v137 )
        goto LABEL_128;
      v75 = *v14;
      v77 = (CommonUI_o *)v137;
      v107 = v38;
      v108 = v39;
      v106 = (const MethodInfo_319AF60 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___;
      v109 = (System_Action_T__o *)v138;
    }
    goto LABEL_127;
  }
  v26 = *v14;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v28, v29, v30, v31, v32, v33);
  }
  EventTutorialEntity__TextTutorialChain(_4__this, 0, v26, _9__4, v21);
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__11(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D30CB3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D30CB3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( !EventTutorialEntity__HasAfterAction(_4__this, (const MethodInfo *)action) )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, (const MethodInfo *)action) )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( EventTutorialEntity__IsPlanetEarthAction(_4__this, (const MethodInfo *)action) )
  {
LABEL_7:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
    if ( EventTutorialEntity__IsPlayScriptTiming(_4__this, 1, v6) )
    {
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        EventTutorialEntity__PlayScript(_4__this, action, v8);
        return;
      }
LABEL_14:
      sub_1C93D2C(_4__this, action);
    }
    ActionExtensions__Call(action, 0);
  }
  else
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_14;
    EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 1, action, v7);
  }
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventTutorialEntity___c__DisplayClass25_0_o *v3; // x19
  struct EventTutorialEntity_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__11; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct EventTutorialEntity_o *v12; // x8

  v3 = this;
  if ( (byte_4D30CB2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventTutorialEntity___c__DisplayClass25_0_o *)sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__11__);
    byte_4D30CB2 = 1;
  }
  if ( v3->fields.isNoRequestTutorialFlag )
  {
    _4__this = v3->fields.__4__this;
    if ( _4__this )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(_4__this->fields.eventId, _4__this->fields.flagType, v2);
      this = (EventTutorialEntity___c__DisplayClass25_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( this )
      {
        MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
        ActionExtensions__Call(v3->fields.callback, 0);
        return;
      }
    }
LABEL_14:
    sub_1C93D2C(this, method);
  }
  _9__11 = v3->fields.__9__11;
  if ( !_9__11 )
  {
    _9__11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__11,
      (Il2CppObject *)v3,
      Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__11__,
      0);
    v3->fields.__9__11 = _9__11;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__11, (int32_t)_9__11, v6, v7, v8, v9, v10, v11);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (EventTutorialEntity___c__DisplayClass25_0_o *)NetworkManager__getRequest_object_(
                                                          _9__11,
                                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  v12 = v3->fields.__4__this;
  if ( !v12 || !this )
    goto LABEL_14;
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)this, v12->fields.flagType, v12->fields.eventId, 0);
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  struct EventTutorialEntity_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  struct EventTutorialEntity_o *v17; // x8

  if ( (byte_4D30CB1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass25_2__OpenTutorial_b__5__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass25_2_TypeInfo);
    byte_4D30CB1 = 1;
  }
  v5 = sub_1C93D20(EventTutorialEntity___c__DisplayClass25_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 16) = questId;
  if ( this->fields.isNoRequestTutorialFlag )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(_4__this->fields.eventId, _4__this->fields.flagType, v14);
      return;
    }
LABEL_12:
    sub_1C93D2C(Request_object, v7);
  }
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_2__OpenTutorial_b__5__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v16,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  v17 = this->fields.__4__this;
  if ( !v17 || !Request_object )
    goto LABEL_12;
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    v17->fields.flagType,
    v17->fields.eventId,
    0);
}


void EventTutorialEntity___c__DisplayClass25_1___ctor(
        EventTutorialEntity___c__DisplayClass25_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_1___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass25_1_o *this,
        EventInfoSkillGetDialog_o *dialog,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  ImagePartsGroupEntity_o *DispDialogEntityFromQuestId; // x0
  ImagePartsGroupEntity_o *v8; // x21
  struct EventTutorialEntity___c__DisplayClass25_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4D30CB4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D30CB4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D51E )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D51E = 1;
  }
  DispDialogEntityFromQuestId = (ImagePartsGroupEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    DispDialogEntityFromQuestId = (ImagePartsGroupEntity_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object
    || (DispDialogEntityFromQuestId = ImagePartsGroupMaster__GetDispDialogEntityFromQuestId(
                                        (ImagePartsGroupMaster_o *)Master_object,
                                        *(_DWORD *)(*(_QWORD *)&DispDialogEntityFromQuestId[3].fields.id + 56LL),
                                        0),
        !dialog)
    || (v8 = DispDialogEntityFromQuestId,
        EventInfoSkillGetDialog__SetBasePanel(dialog, 0),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0)
    || (_4__this = CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C93D2C(DispDialogEntityFromQuestId, v5);
  }
  EventInfoSkillGetDialog__Open(dialog, _4__this->fields.eventId, v8, this->fields.action, 0);
}


void EventTutorialEntity___c__DisplayClass25_1___OpenTutorial_b__7(
        EventTutorialEntity___c__DisplayClass25_1_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  if ( !dialog )
    sub_1C93D2C(this, 0);
  EventCommonImageDialog__Open(dialog, this->fields.action, 0);
}


void EventTutorialEntity___c__DisplayClass25_2___ctor(
        EventTutorialEntity___c__DisplayClass25_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_2___OpenTutorial_b__5(
        EventTutorialEntity___c__DisplayClass25_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct EventTutorialEntity___c__DisplayClass25_0_o *CS___8__locals2; // x8
  struct EventTutorialEntity_o *_4__this; // x8
  const MethodInfo *v9; // x2
  struct EventTutorialEntity___c__DisplayClass25_0_o *v10; // x8

  if ( (byte_4D30CB5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30CB5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2
    || (_4__this = CS___8__locals2->fields.__4__this) == 0
    || !Master_object
    || (EventTutorialMaster__TutorialAfterUpdateQuestTree(
          (EventTutorialMaster_o *)Master_object,
          _4__this->fields.eventId,
          v6),
        (v10 = this->fields.CS___8__locals2) == 0)
    || !v10->fields.__4__this )
  {
    sub_1C93D2C(Master_object, v5);
  }
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)Master_object, this->fields.questId, v9);
}


void EventTutorialEntity___c__DisplayClass25_3___ctor(
        EventTutorialEntity___c__DisplayClass25_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_4___ctor(
        EventTutorialEntity___c__DisplayClass25_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_4___OpenTutorial_b__8(
        EventTutorialEntity___c__DisplayClass25_4_o *this,
        EventEquipSkillPartsAddPartsDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_3_o *CS___8__locals4; // x8
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x8
  struct EventTutorialEntity___c__DisplayClass25_0_o *CS___8__locals1; // x9
  struct EventTutorialEntity_o *_4__this; // x9

  CS___8__locals4 = this->fields.CS___8__locals4;
  if ( !CS___8__locals4
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0
    || (CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || !dialog )
  {
    sub_1C93D2C(this, dialog);
  }
  EventEquipSkillPartsAddPartsDialog__Open(
    dialog,
    _4__this->fields.eventId,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass25_5___ctor(
        EventTutorialEntity___c__DisplayClass25_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_5___OpenTutorial_b__9(
        EventTutorialEntity___c__DisplayClass25_5_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_3_o *CS___8__locals5; // x8
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x9

  CS___8__locals5 = this->fields.CS___8__locals5;
  if ( !CS___8__locals5 || (CS___8__locals3 = CS___8__locals5->fields.CS___8__locals3) == 0 || !dialog )
    sub_1C93D2C(this, dialog);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals5->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass25_6___ctor(
        EventTutorialEntity___c__DisplayClass25_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_6___OpenTutorial_b__10(
        EventTutorialEntity___c__DisplayClass25_6_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_3_o *CS___8__locals6; // x8
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x9

  CS___8__locals6 = this->fields.CS___8__locals6;
  if ( !CS___8__locals6 || (CS___8__locals3 = CS___8__locals6->fields.CS___8__locals3) == 0 || !dialog )
    sub_1C93D2C(this, dialog);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals6->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass27_0___ctor(
        EventTutorialEntity___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass27_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D30CB6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D30CB6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass27_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D30CB7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D30CB7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass29_0___ctor(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass29_0_o *v4; // x20
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v8; // x8
  System_String_o *text; // x21
  System_Action_o *_9__5; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v4 = this;
  if ( (byte_4D30CB8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass29_0_o *)sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__5__);
    byte_4D30CB8 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_1C93D34(this);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_11;
  text = v8->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass29_0__TextTutorialChain_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v11, v12, v13, v14, v15, v16);
  }
  if ( !dialog )
LABEL_11:
    sub_1C93D2C(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4D30CB9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass29_1__TextTutorialChain_b__8__);
    sub_1C93AD4(&EventTutorialEntity___c__DisplayClass29_1_TypeInfo);
    byte_4D30CB9 = 1;
  }
  v5 = sub_1C93D20(EventTutorialEntity___c__DisplayClass29_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass29_1__TextTutorialChain_b__8__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31581328((CommonUI_o *)Instance, v15, 0);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass29_1___ctor(
        EventTutorialEntity___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass29_1___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass29_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass29_1_o *v2; // x19
  struct EventTutorialEntity___c__DisplayClass29_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  const MethodInfo *v9; // x4
  struct EventTutorialEntity___c__DisplayClass29_0_o *v10; // x8

  v2 = this;
  if ( (byte_4D30CBA & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass29_1_o *)sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D30CBA = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_14;
  idx = CS___8__locals1->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_1C93D34(this);
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_14;
  questId = v7->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass29_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_14;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_14;
  if ( v2->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v10->fields.transitionQuest,
      questId,
      (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass29_1_o *)v10->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1C93D2C(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    v9);
}


void EventTutorialEntity___c__DisplayClass47_0___ctor(
        EventTutorialEntity___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass47_0___PlayScript_b__0(
        EventTutorialEntity___c__DisplayClass47_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1
  CommonUI_o *v6; // x20
  float ScriptFadeInTime; // s0
  System_Action_o *_9__1; // x21
  float v9; // s8
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D30CBB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTutorialEntity___c__DisplayClass47_0__PlayScript_b__1__);
    byte_4D30CBB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this->fields.__4__this )
    goto LABEL_8;
  v6 = (CommonUI_o *)Instance;
  ScriptFadeInTime = EventTutorialEntity__GetScriptFadeInTime(this->fields.__4__this, v5);
  _9__1 = this->fields.__9__1;
  v9 = ScriptFadeInTime;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass47_0__PlayScript_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_8:
    sub_1C93D2C(Instance, v5);
  CommonUI__maskFadein(v6, v9, _9__1, 0);
}


void EventTutorialEntity___c__DisplayClass47_0___PlayScript_b__1(
        EventTutorialEntity___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_bgmName; // x20
  System_String_o *bgmName; // x21
  System_String_o *MainBgmName; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D30CBC & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D30CBC = 1;
  }
  p_bgmName = &this->fields.bgmName;
  bgmName = this->fields.bgmName;
  if ( !bgmName )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    MainBgmName = BgmManager__GetMainBgmName(0, 0);
    *p_bgmName = MainBgmName;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bgmName, (int32_t)MainBgmName, v6, v7, v8, v9, v10, v11);
    bgmName = *p_bgmName;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(bgmName, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}