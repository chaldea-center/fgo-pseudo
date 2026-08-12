void EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B35 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970B35 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_5970B34 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970B34 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventTutorialEntity__CreatePrimaryKey(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *EventTutorialEntity__GetAfterActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B29 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17410/*"afterActionVals"*/);
    byte_5970B29 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17410/*"afterActionVals"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970B2A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17857/*"beforeActionSetup"*/);
    byte_5970B2A = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17857/*"beforeActionSetup"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B28 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17858/*"beforeActionVals"*/);
    byte_5970B28 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17858/*"beforeActionVals"*/, 0);
}


System_String_o *EventTutorialEntity__GetDialogPrefabName(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B2D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19453/*"dialogPrefabName"*/);
    byte_5970B2D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19453/*"dialogPrefabName"*/, 0, 0);
}


System_Int32_array *EventTutorialEntity__GetOnceDailyDispTutorialResetTime(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970B2E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10383/*"OnceDailyDispResetTime"*/);
    byte_5970B2E = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_10383/*"OnceDailyDispResetTime"*/, 0, 0);
}


int32_t EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


System_Collections_Generic_Dictionary_string__object__o *EventTutorialEntity__GetPlayScriptInfo(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5970B2F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_2213A60(&StringLiteral_11123/*"PlayScriptInfo"*/);
    byte_5970B2F = 1;
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                      this->fields.script,
                                                                      (System_String_o *)StringLiteral_11123/*"PlayScriptInfo"*/,
                                                                      0,
                                                                      (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
}


int32_t EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B2C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24294/*"resumeTransitionWar"*/);
    byte_5970B2C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24294/*"resumeTransitionWar"*/, 0, 0);
}


float EventTutorialEntity__GetScriptFadeInTime(EventTutorialEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *PlayScriptInfo; // x0

  if ( (byte_5970B31 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13163/*"ScriptFadeInTime"*/);
    byte_5970B31 = 1;
  }
  PlayScriptInfo = EventTutorialEntity__GetPlayScriptInfo(this, method);
  if ( PlayScriptInfo )
    return EntityScriptUtil__GetFloatValue(PlayScriptInfo, (System_String_o *)StringLiteral_13163/*"ScriptFadeInTime"*/, 1.0, 0);
  else
    return 1.0;
}


bool EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B26 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17410/*"afterActionVals"*/);
    byte_5970B26 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17410/*"afterActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B25 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17858/*"beforeActionVals"*/);
    byte_5970B25 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17858/*"beforeActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeSetUpAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B27 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17857/*"beforeActionSetup"*/);
    byte_5970B27 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17857/*"beforeActionSetup"*/, 0);
}


bool EventTutorialEntity__HasFlag(EventTutorialEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)flag) != 0;
}


bool EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970B2B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24294/*"resumeTransitionWar"*/);
    byte_5970B2B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_24294/*"resumeTransitionWar"*/, 0);
}


bool EventTutorialEntity__IsBlankEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t openType; // w8
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x20
  BalanceConfig_c *v6; // x0
  Il2CppObject *v7; // x0

  if ( (byte_5970B24 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_string___);
    byte_5970B24 = 1;
  }
  if ( !EventTutorialEntity__HasBeforeAction(this, method)
    && !EventTutorialEntity__HasAfterAction(this, v3)
    && !EventTutorialEntity__HasBeforeSetUpAction(this, v3) )
  {
    return 0;
  }
  openType = this->fields.openType;
  if ( openType == 18 )
  {
    targetIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetIds;
    v6 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = (Il2CppObject *)System_Int32__ToString((unsigned int)v6->static_fields + 860, 0);
    if ( System_Linq_Enumerable__Contains_object_(
           targetIds,
           v7,
           (const MethodInfo_3876940 *)Method_System_Linq_Enumerable_Contains_string___) )
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

  if ( (byte_5970B30 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13171/*"ScriptTiming"*/);
    byte_5970B30 = 1;
  }
  PlayScriptInfo = EventTutorialEntity__GetPlayScriptInfo(this, *(const MethodInfo **)&timing);
  if ( PlayScriptInfo )
    LOBYTE(PlayScriptInfo) = EntityScriptUtil__GetIntValue(PlayScriptInfo, (System_String_o *)StringLiteral_13171/*"ScriptTiming"*/, 0, 0) == timing;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppClass *v20; // x0
  __int64 v21; // x20
  System_Action_object__o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Action_object__o *v29; // x21
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_object__o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  ActionChain_o *v43; // x21
  __int64 v44; // x20
  System_Action_o *v45; // x22
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_5970B1D & 1) == 0 )
  {
    sub_2213A60(&ActionChain_TypeInfo);
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__0__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__1__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__2__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__3__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
    byte_5970B1D = 1;
  }
  v5 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause(Instance, 0);
  v20 = System_Action_Action____TypeInfo;
  *(_BYTE *)(v5 + 24) = (this->fields.flag & 4) != 0;
  v21 = sub_2213B20(v20, 3);
  v22 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__0__,
    0);
  if ( !v21 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v21 + 32) = v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__1__,
    0);
  if ( (*(_DWORD *)(v21 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  *(_QWORD *)(v21 + 40) = v29;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 40), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__2__,
    0);
  if ( *(_DWORD *)(v21 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v21 + 48) = v36;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 48), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (ActionChain_o *)sub_2213CCC(ActionChain_TypeInfo);
  ActionChain___ctor_56107140(v43, (System_Action_Action__array *)v21, 0);
  v44 = sub_2213B20(System_Action___TypeInfo, 1);
  v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__3__,
    0);
  if ( !v44 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v44 + 24) )
LABEL_15:
    sub_2213CE4(Instance);
  *(_QWORD *)(v44 + 32) = v45;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 32), (int32_t)v45, v46, v47, v48, v49, v50, v51);
  if ( !v43
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v43,
                                               (System_Action_array *)v44,
                                               0)) == 0 )
  {
LABEL_14:
    sub_2213CDC(Instance, v7);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v15; // x21
  System_Int32_array *v16; // x19
  System_Action_o *v17; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v19; // x21
  System_Action_int__o *v20; // x20
  const MethodInfo *v21; // x4

  if ( (byte_5970B21 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity_TransitionQuest__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass29_0__OpenTutorialWithoutFlag_b__0__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass29_0__OpenTutorialWithoutFlag_b__1__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass29_0_TypeInfo);
    byte_5970B21 = 1;
  }
  v5 = sub_2213CCC(EventTutorialEntity___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = this->fields.imageIds;
    v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass29_0__OpenTutorialWithoutFlag_b__0__,
      0);
    if ( v15 )
    {
      CommonUI__OpenTutorialImageDialog_37396960((CommonUI_o *)v15, v16, -1, 0, v17, 0, 0, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass29_0__OpenTutorialWithoutFlag_b__1__,
      0);
    v20 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v20, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0);
    EventTutorialEntity__TextTutorialChain(this, 0, v19, v20, v21);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  if ( (byte_5970B20 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_5970B20 = 1;
  }
  if ( isAfter )
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetAfterActionVals(this, (const MethodInfo *)isAfter);
  else
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetBeforeActionVals(this, (const MethodInfo *)isAfter);
  v8 = (System_String_array *)v7;
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
    ActionExtensions__Call(callback, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  QuestAfterAction__PlaySpecifiedAction((QuestAfterAction_o *)Instance, v8, callback, 0);
}


void EventTutorialEntity__PlayScript(EventTutorialEntity_o *this, System_Action_o *endAction, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_string__object__o *PlayScriptInfo; // x0
  System_Collections_Generic_Dictionary_string__object__o *v22; // x21
  System_String_o *StringValue; // x20
  __int64 v24; // x1
  System_String_o *BgmName; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  ScriptManager_CallbackFunc_o *v32; // x21
  __int64 v33; // x1

  if ( (byte_5970B32 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass49_0__PlayScript_b__0__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass49_0_TypeInfo);
    sub_2213A60(&StringLiteral_13165/*"ScriptId"*/);
    sub_2213A60(&StringLiteral_13172/*"ScriptType"*/);
    byte_5970B32 = 1;
  }
  v5 = sub_2213CCC(EventTutorialEntity___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  PlayScriptInfo = EventTutorialEntity__GetPlayScriptInfo(this, v20);
  if ( PlayScriptInfo
    && (v22 = PlayScriptInfo,
        StringValue = EntityScriptUtil__GetStringValue(PlayScriptInfo, (System_String_o *)StringLiteral_13165/*"ScriptId"*/, 0, 0),
        !System_String__IsNullOrEmpty(StringValue, 0))
    && EntityScriptUtil__GetIntValue(v22, (System_String_o *)StringLiteral_13172/*"ScriptType"*/, 0, 0) == 1 )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v24);
    BgmName = SoundManager__getBgmName(0);
    *(_QWORD *)(v5 + 32) = BgmName;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)BgmName, v26, v27, v28, v29, v30, v31);
    v32 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(
      v32,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass49_0__PlayScript_b__0__,
      0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v33);
    ScriptManager__PlayShop(StringValue, v32, 0, 0);
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
  __int64 v9; // x27
  CommonReleaseMaster_o *Master_object; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v31; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v33; // x9
  int32_t commonReleaseId; // w21
  __int64 v35; // x9
  EventTutorialEntity_TextTuto_o *v36; // x8
  float v37; // s9
  struct System_Int32_array *textPos; // x9
  il2cpp_array_size_t v39; // x10
  char v40; // w26
  float v41; // s10
  float v42; // s8
  struct System_Int32_array *ptPos; // x9
  float v44; // s11
  il2cpp_array_size_t v45; // x10
  System_String_o *scrDlgTitle; // x23
  int spacingY; // w24
  System_Collections_ICollection_o *presentClassScoreResetItemIdList; // x21
  struct EventTutorialEntity_TextTuto_array *v49; // x8
  __int64 v50; // x9
  EventTutorialEntity_TextTuto_o *v51; // x8
  Il2CppObject *Instance; // x19
  System_Action_object__o *v53; // x20
  struct EventTutorialEntity_TextTuto_array *v54; // x8
  __int64 v55; // x9
  EventTutorialEntity_TextTuto_o *v56; // x8
  System_String_o *v57; // x20
  CommonUI_o *v58; // x19
  System_Action_o *v59; // x21
  System_Int32_array *releaseClassBoardBaseIds; // x21
  System_Int32_array *addClassIds; // x20
  int32_t v62; // w21
  CommonUI_o *v63; // x19
  System_Action_o *v64; // x22
  struct EventTutorialEntity_TextTuto_array *v65; // x8
  __int64 v66; // x9
  EventTutorialEntity_TextTuto_o *v67; // x8
  int32_t v68; // w28
  struct EventTutorialEntity_TextTuto_array *v69; // x8
  __int64 v70; // x9
  EventTutorialEntity_TextTuto_o *v71; // x8
  CommonUI_o *v72; // x20
  System_String_o *text; // x22
  System_String_o *v74; // x21
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  CommonConfirmDialog_ClickDelegate_o *v77; // x25
  struct EventTutorialEntity_TextTuto_array *v78; // x8
  __int64 v79; // x9
  EventTutorialEntity_TextTuto_o *v80; // x8
  Il2CppObject *v81; // x19
  System_Action_o *v82; // x20
  float v83; // s8
  __int64 v84; // x1
  UnityEngine_Object_o *SceneRootComponent_object; // x20
  float *monitor; // x8
  Il2CppObject *v87; // x20
  System_Action_o *v88; // x22
  Il2CppObject *v89; // x0
  int32_t eventId; // w19
  SelectBonusBaseMaster_o *v91; // x20
  System_Action_o *v92; // x21
  struct EventTutorialEntity_TextTuto_array *v93; // x8
  __int64 v94; // x9
  EventTutorialEntity_TextTuto_o *v95; // x8
  System_String_o *title; // x21
  System_String_o *v97; // x22
  CommonUI_o *v98; // x20
  System_Action_o *v99; // x23
  struct EventTutorialEntity_TextTuto_array *v100; // x8
  __int64 v101; // x9
  EventTutorialEntity_TextTuto_o *v102; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v104; // x11
  int MasterName_k__BackingField; // w8
  UnityEngine_Rect_array *v106; // x20
  _BOOL4 v107; // w12
  __int64 v108; // x9
  __int64 v109; // x12
  EventTutorialEntity_TextTuto_o *v110; // x11
  struct EventTutorialEntity_RectData_array *v111; // x11
  int32x4_t *v112; // x11
  __int64 v113; // x8
  EventTutorialEntity_TextTuto_o *v114; // x8
  int32_t v115; // w21
  struct EventTutorialEntity_TextTuto_array *v116; // x8
  __int64 v117; // x9
  EventTutorialEntity_TextTuto_o *v118; // x8
  int32_t v119; // w23
  struct EventTutorialEntity_TextTuto_array *v120; // x8
  __int64 v121; // x9
  EventTutorialEntity_TextTuto_o *v122; // x8
  System_String_o *v123; // x21
  System_String_o *v124; // x22
  CommonUI_o *v125; // x20
  System_Action_o *v126; // x24
  struct EventTutorialEntity_TextTuto_array *v127; // x8
  __int64 v128; // x9
  EventTutorialEntity_TextTuto_o *v129; // x8
  int32_t dlgTitleFontSize; // w19
  int32_t dlgFontSize; // w25
  struct EventTutorialEntity_TextTuto_array *v132; // x8
  __int64 v133; // x9
  EventTutorialEntity_TextTuto_o *v134; // x8
  struct EventTutorialEntity_TextTuto_array *v135; // x8
  __int64 v136; // x9
  EventTutorialEntity_TextTuto_o *v137; // x8
  System_String_o *v138; // x23
  int32_t dlgBgId; // w22
  CommonUI_o *v140; // x19
  System_Action_o *v141; // x24
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v143; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v144; // 0:s2.4,4:s3.4,8:s4.4

  while ( 1 )
  {
    if ( (byte_5970B23 & 1) == 0 )
    {
      sub_2213A60(&System_Action_FortificationNotifyDialog__TypeInfo);
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
      sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
      sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
      sub_2213A60(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
      sub_2213A60(&DataManager_TypeInfo);
      sub_2213A60(&LocalizationManager_TypeInfo);
      sub_2213A60(&Method_System_Nullable_int___ctor__);
      sub_2213A60(&UnityEngine_Object_TypeInfo);
      sub_2213A60(&UnityEngine_Rect___TypeInfo);
      sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__0__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__10__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__11__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__1__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__2__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__3__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__4__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__6__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__7__);
      sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__9__);
      sub_2213A60(&EventTutorialEntity___c__DisplayClass31_0_TypeInfo);
      sub_2213A60(&StringLiteral_11376/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
      sub_2213A60(&StringLiteral_22263/*"left"*/);
      sub_2213A60(&StringLiteral_6537/*"EventUI/Prefabs/80400"*/);
      sub_2213A60(&StringLiteral_7125/*"FortificationNotifyDialog"*/);
      sub_2213A60(&StringLiteral_24325/*"right"*/);
      sub_2213A60(&StringLiteral_11377/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
      byte_5970B23 = 1;
    }
    v9 = sub_2213CCC(EventTutorialEntity___c__DisplayClass31_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_131;
    *(_QWORD *)(v9 + 16) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
    *(_DWORD *)(v9 + 24) = idx;
    *(_QWORD *)(v9 + 32) = callback;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)callback, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v9 + 40) = transitionQuest;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)transitionQuest, v24, v25, v26, v27, v28, v29);
    textJson = this->fields.textJson;
    if ( !textJson )
      goto LABEL_131;
    v31 = *(int *)(v9 + 24);
    max_length = textJson->max_length;
    if ( (int)v31 >= max_length )
      goto LABEL_48;
    if ( (unsigned int)v31 >= max_length )
      goto LABEL_132;
    v33 = textJson->m_Items[v31];
    if ( !v33 )
      goto LABEL_131;
    commonReleaseId = v33->fields.commonReleaseId;
    if ( commonReleaseId < 1 )
      goto LABEL_15;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    Master_object = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !Master_object )
      goto LABEL_131;
    Master_object = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(Master_object, commonReleaseId, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    callback = *(System_Action_o **)(v9 + 32);
    transitionQuest = *(System_Action_int__o **)(v9 + 40);
    idx = *(_DWORD *)(v9 + 24) + 1;
  }
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_131;
LABEL_15:
  v35 = *(int *)(v9 + 24);
  if ( (unsigned int)v35 >= LODWORD(textJson->max_length) )
    goto LABEL_132;
  v36 = textJson->m_Items[v35];
  if ( !v36 )
    goto LABEL_131;
  v37 = 0.0;
  textPos = v36->fields.textPos;
  if ( textPos )
  {
    v39 = textPos->max_length;
    v40 = (_DWORD)v39 == 0;
    if ( v39 )
    {
      if ( (unsigned int)v39 < 2 )
        goto LABEL_132;
      v41 = (float)textPos->m_Items[0];
      v42 = (float)textPos->m_Items[1];
    }
    else
    {
      v42 = 0.0;
      v41 = 0.0;
    }
  }
  else
  {
    v42 = 0.0;
    v41 = 0.0;
    v40 = 1;
  }
  ptPos = v36->fields.ptPos;
  if ( ptPos )
  {
    v44 = 0.0;
    v45 = ptPos->max_length;
    if ( v45 )
    {
      if ( (unsigned int)v45 < 2 )
        goto LABEL_132;
      v44 = (float)ptPos->m_Items[0];
      v37 = (float)ptPos->m_Items[1];
    }
  }
  else
  {
    v44 = 0.0;
  }
  scrDlgTitle = v36->fields.scrDlgTitle;
  spacingY = v36->fields.spacingY;
  presentClassScoreResetItemIdList = (System_Collections_ICollection_o *)v36->fields.presentClassScoreResetItemIdList;
  Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v49 = this->fields.textJson;
    if ( !v49 )
      goto LABEL_131;
    v50 = *(int *)(v9 + 24);
    if ( (unsigned int)v50 >= LODWORD(v49->max_length) )
      goto LABEL_132;
    v51 = v49->m_Items[v50];
    if ( !v51 )
      goto LABEL_131;
    if ( v51->fields.isFortification )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v53 = (System_Action_object__o *)sub_2213CCC(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v53,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6537/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_7125/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v53,
          0,
          (const MethodInfo_3820784 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_131:
      sub_2213CDC(Master_object, v11);
    }
    if ( v51->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v51->fields.releaseClassBoardBaseIds;
      if ( !releaseClassBoardBaseIds || !releaseClassBoardBaseIds->max_length )
      {
LABEL_48:
        ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0);
        return;
      }
      addClassIds = v51->fields.addClassIds;
      if ( addClassIds && addClassIds->max_length )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LODWORD(releaseClassBoardBaseIds->max_length) )
        {
          v62 = releaseClassBoardBaseIds->m_Items[0];
          v63 = (CommonUI_o *)Master_object;
          v64 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v64,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__6__,
            0);
          if ( !v63 )
            goto LABEL_131;
          CommonUI__OpenClassBoardAddClassDialog(v63, v62, addClassIds, v64, 0);
          return;
        }
        goto LABEL_132;
      }
      v83 = 0.0;
      if ( this->fields.openType == 100 )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_131;
        SceneRootComponent_object = (UnityEngine_Object_o *)AvalonSceneManager__GetSceneRootComponent_object_(
                                                              (AvalonSceneManager_o *)Master_object,
                                                              91,
                                                              (const MethodInfo_380E62C *)Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84);
        Master_object = (CommonReleaseMaster_o *)UnityEngine_Object__op_Inequality(SceneRootComponent_object, 0, 0);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !SceneRootComponent_object )
            goto LABEL_131;
          Master_object = (CommonReleaseMaster_o *)SceneRootComponent_object[3].klass;
          if ( !Master_object )
            goto LABEL_131;
          ClassBoardController__SetIsGrandScoreDialogOpen((ClassBoardController_o *)Master_object, 0);
          monitor = (float *)SceneRootComponent_object[4].monitor;
          if ( !monitor )
            goto LABEL_131;
          v83 = monitor[73];
        }
      }
      v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v88 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v88,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__7__,
        0);
      if ( !v87 )
        goto LABEL_131;
      CommonUI__OpenClassBoardReleaseDialog(
        (CommonUI_o *)v87,
        releaseClassBoardBaseIds,
        v88,
        this->fields.openType == 100,
        v83,
        0);
    }
    else
    {
      Master_object = (CommonReleaseMaster_o *)BasicHelper__IsNullOrEmpty(presentClassScoreResetItemIdList, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v65 = this->fields.textJson;
        if ( !v65 )
          goto LABEL_131;
        v66 = *(int *)(v9 + 24);
        if ( (unsigned int)v66 >= LODWORD(v65->max_length) )
          goto LABEL_132;
        v67 = v65->m_Items[v66];
        if ( !v67 )
          goto LABEL_131;
        v68 = spacingY & ~(spacingY >> 31);
        if ( v67->fields.isQuestRelease )
        {
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v69 = this->fields.textJson;
          if ( !v69 )
            goto LABEL_131;
          v70 = *(int *)(v9 + 24);
          if ( (unsigned int)v70 >= LODWORD(v69->max_length) )
            goto LABEL_132;
          v71 = v69->m_Items[v70];
          if ( !v71 )
            goto LABEL_131;
          v72 = (CommonUI_o *)Master_object;
          text = v71->fields.text;
          v74 = **(System_String_o ***)(qword_5984390 + 184);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11377/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0);
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11376/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0);
          v77 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v77,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__3__,
            0);
          v78 = this->fields.textJson;
          if ( !v78 )
            goto LABEL_131;
          v79 = *(int *)(v9 + 24);
          if ( (unsigned int)v79 >= LODWORD(v78->max_length) )
            goto LABEL_132;
          v80 = v78->m_Items[v79];
          if ( !v80 || !v72 )
            goto LABEL_131;
          CommonUI__OpenConfirmDecideDlg(
            v72,
            v74,
            text,
            v75,
            v76,
            v77,
            v80->fields.dlgFontSize,
            0.0,
            15.0,
            v68,
            0,
            0,
            240,
            0,
            0,
            0,
            v80->fields.dlgTitleFontSize,
            0);
        }
        else if ( v67->fields.isSelectBonus )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
          v89 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = this->fields.eventId;
          v91 = (SelectBonusBaseMaster_o *)v89;
          v92 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v92,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__4__,
            0);
          if ( !v91 )
            goto LABEL_131;
          SelectBonusBaseMaster__OpenSelectBonusDialog(v91, eventId, v92, 0);
        }
        else if ( v67->fields.dlgFontSize < 1 )
        {
          rects = v67->fields.rects;
          if ( !rects )
            goto LABEL_131;
          Master_object = (CommonReleaseMaster_o *)sub_2213B20(UnityEngine_Rect___TypeInfo, LODWORD(rects->max_length));
          if ( !Master_object )
            goto LABEL_131;
          v104 = this->fields.textJson;
          MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
          v106 = (UnityEngine_Rect_array *)Master_object;
          v107 = v104 == 0;
          if ( MasterName_k__BackingField >= 1 )
          {
            v108 = 0;
            while ( !v107 )
            {
              v109 = *(int *)(v9 + 24);
              if ( (unsigned int)v109 >= LODWORD(v104->max_length) )
                goto LABEL_132;
              v110 = v104->m_Items[v109];
              if ( !v110 )
                break;
              v111 = v110->fields.rects;
              if ( !v111 )
                break;
              if ( (unsigned int)v108 >= LODWORD(v111->max_length) )
                goto LABEL_132;
              v112 = (int32x4_t *)v111->m_Items[v108];
              if ( !v112 )
                break;
              if ( (unsigned int)v108 >= MasterName_k__BackingField )
                goto LABEL_132;
              *((float32x4_t *)&Master_object->fields.revision + v108++) = vcvtq_f32_s32(v112[1]);
              v104 = this->fields.textJson;
              v107 = v104 == 0;
              if ( (int)v108 >= MasterName_k__BackingField )
                goto LABEL_104;
            }
            goto LABEL_131;
          }
LABEL_104:
          if ( v107 )
            goto LABEL_131;
          v113 = *(int *)(v9 + 24);
          if ( (unsigned int)v113 >= LODWORD(v104->max_length) )
            goto LABEL_132;
          v114 = v104->m_Items[v113];
          if ( !v114 )
            goto LABEL_131;
          Master_object = (CommonReleaseMaster_o *)BasicHelper__EqualExceptNullOrEmpty(
                                                     v114->fields.textAlign,
                                                     (System_String_o *)StringLiteral_22263/*"left"*/,
                                                     0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v115 = 1;
          }
          else
          {
            v132 = this->fields.textJson;
            if ( !v132 )
              goto LABEL_131;
            v133 = *(int *)(v9 + 24);
            if ( (unsigned int)v133 >= LODWORD(v132->max_length) )
              goto LABEL_132;
            v134 = v132->m_Items[v133];
            if ( !v134 )
              goto LABEL_131;
            v115 = BasicHelper__EqualExceptNullOrEmpty(
                     v134->fields.textAlign,
                     (System_String_o *)StringLiteral_24325/*"right"*/,
                     0)
                 ? 3
                 : 2;
          }
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v135 = this->fields.textJson;
          if ( !v135 )
            goto LABEL_131;
          v136 = *(int *)(v9 + 24);
          if ( (unsigned int)v136 >= LODWORD(v135->max_length) )
LABEL_132:
            sub_2213CE4(Master_object);
          v137 = v135->m_Items[v136];
          if ( !v137 )
            goto LABEL_131;
          v138 = v137->fields.text;
          dlgBgId = v137->fields.dlgBgId;
          v140 = (CommonUI_o *)Master_object;
          v141 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v141,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__11__,
            0);
          if ( !v140 )
            goto LABEL_131;
          v144.fields.z = 0.0;
          v143.fields.x = v41;
          v143.fields.y = v42;
          v144.fields.x = v44;
          v144.fields.y = v37;
          CommonUI__OpenEventTutorialNotificationDialog(v140, v138, v106, v143, v144, dlgBgId, v115, v141, 0, v68, 0);
        }
        else
        {
          Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(v67->fields.messageWidgetSizeX, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v93 = this->fields.textJson;
            if ( !v93 )
              goto LABEL_131;
            v94 = *(int *)(v9 + 24);
            if ( (unsigned int)v94 >= LODWORD(v93->max_length) )
              goto LABEL_132;
            v95 = v93->m_Items[v94];
            if ( !v95 )
              goto LABEL_131;
            title = v95->fields.title;
            v97 = v95->fields.text;
            v98 = (CommonUI_o *)Master_object;
            v99 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v99,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__9__,
              0);
            v100 = this->fields.textJson;
            if ( !v100 )
              goto LABEL_131;
            v101 = *(int *)(v9 + 24);
            if ( (unsigned int)v101 >= LODWORD(v100->max_length) )
              goto LABEL_132;
            v102 = v100->m_Items[v101];
            if ( !v102 || !v98 )
              goto LABEL_131;
            CommonUI__OpenNotificationDialog_37374772(
              v98,
              title,
              v97,
              v99,
              v42,
              -162.5,
              -1,
              0,
              v102->fields.dlgTitleFontSize,
              0,
              0,
              v102->fields.dlgFontSize,
              0,
              v68,
              v40,
              0,
              0);
          }
          else
          {
            v116 = this->fields.textJson;
            if ( !v116 )
              goto LABEL_131;
            v117 = *(int *)(v9 + 24);
            if ( (unsigned int)v117 >= LODWORD(v116->max_length) )
              goto LABEL_132;
            v118 = v116->m_Items[v117];
            if ( !v118 )
              goto LABEL_131;
            v119 = System_Int32__Parse(v118->fields.messageWidgetSizeX, 0);
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v120 = this->fields.textJson;
            if ( !v120 )
              goto LABEL_131;
            v121 = *(int *)(v9 + 24);
            if ( (unsigned int)v121 >= LODWORD(v120->max_length) )
              goto LABEL_132;
            v122 = v120->m_Items[v121];
            if ( !v122 )
              goto LABEL_131;
            v123 = v122->fields.title;
            v124 = v122->fields.text;
            v125 = (CommonUI_o *)Master_object;
            v126 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v126,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__10__,
              0);
            v127 = this->fields.textJson;
            if ( !v127 )
              goto LABEL_131;
            v128 = *(int *)(v9 + 24);
            if ( (unsigned int)v128 >= LODWORD(v127->max_length) )
              goto LABEL_132;
            v129 = v127->m_Items[v128];
            if ( !v129 )
              goto LABEL_131;
            dlgTitleFontSize = v129->fields.dlgTitleFontSize;
            dlgFontSize = v129->fields.dlgFontSize;
            messageWidgetSizeX = 0;
            System_Nullable_int____ctor(
              (System_Nullable_int__o)&messageWidgetSizeX,
              v119,
              (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
            if ( !v125 )
              goto LABEL_131;
            CommonUI__OpenNotificationDialog_37374772(
              v125,
              v123,
              v124,
              v126,
              v42,
              -162.5,
              -1,
              0,
              dlgTitleFontSize,
              0,
              0,
              dlgFontSize,
              0,
              v68,
              v40,
              messageWidgetSizeX,
              0);
          }
        }
      }
      else
      {
        v81 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v82 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v82,
          (Il2CppObject *)v9,
          Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__2__,
          0);
        if ( !v81 )
          goto LABEL_131;
        CommonUI__OpenTutorialItemGetDialog(
          (CommonUI_o *)v81,
          (System_Int32_array *)presentClassScoreResetItemIdList,
          v82,
          0);
      }
    }
  }
  else
  {
    Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v54 = this->fields.textJson;
    if ( !v54 )
      goto LABEL_131;
    v55 = *(int *)(v9 + 24);
    if ( (unsigned int)v55 >= LODWORD(v54->max_length) )
      goto LABEL_132;
    v56 = v54->m_Items[v55];
    if ( !v56 )
      goto LABEL_131;
    v57 = v56->fields.text;
    v58 = (CommonUI_o *)Master_object;
    v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__0__,
      0);
    if ( !v58 )
      goto LABEL_131;
    CommonUI__OpenScrollMessageDialog(v58, scrDlgTitle, v57, 10, 0, 0, 0, v59, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTutorialEntity__TransitionQuest(EventTutorialEntity_o *this, int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A2F30 *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_5970B22 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970B22 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
  if ( !byte_596D61C )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D61C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  v6 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__;
  static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance(v6);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v8);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


bool EventTutorialEntity__TryGetJobGetSkillDialogInfo(
        EventTutorialEntity_o *this,
        SkillEntity_o **skillEntity,
        SkillLvEntity_o **skillLvEntity,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  bool TargetEventJobId; // w8
  bool v20; // w0
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  EventJobEntity_o *v26; // [xsp+0h] [xbp-40h] BYREF
  int32_t eventJobId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970B1E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventJobMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_5970B1E = 1;
  }
  eventJobId = 0;
  v26 = 0;
  *skillEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)skillEntity,
    0,
    (System_String_o *)skillLvEntity,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *skillLvEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)skillLvEntity, 0, v11, v12, v13, v14, v15, v16);
  TargetEventJobId = EventTutorialEntity__TryGetTargetEventJobId(this, &eventJobId, v17);
  v20 = 0;
  if ( TargetEventJobId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventJobMaster___);
    if ( Master_object )
    {
      if ( !EventJobMaster__TryGetEntity((EventJobMaster_o *)Master_object, &v26, this->fields.eventId, eventJobId, 0) )
        return 0;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
      if ( !v26 || !Master_object )
        goto LABEL_20;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)skillEntity,
              v26->fields.skillId,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        return 0;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( v26 && Master_object )
        return SkillLvMaster__TryGetEntity(
                 (SkillLvMaster_o *)Master_object,
                 skillLvEntity,
                 v26->fields.skillId,
                 v26->fields.skillLv,
                 0);
    }
LABEL_20:
    sub_2213CDC(Master_object, v22);
  }
  return v20;
}


bool EventTutorialEntity__TryGetJobOpenQuestDialogInfo(
        EventTutorialEntity_o *this,
        System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o **cautionQuestDisplayDataList,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  __int64 v7; // x26
  EventJobMaster_o *EntityListByEventId; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_HashSet_int__o *v23; // x22
  __int64 v24; // x1
  Il2CppObject *Master_object; // x24
  Il2CppObject *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  int64_t monitor_high; // x26
  int32_t klass_high; // w23
  int32_t monitor; // w25
  _BOOL8 IsOpen; // x0
  __int64 v34; // x1
  int v35; // w8
  CommonReleaseEntity_array *List; // x0
  __int64 v37; // x1
  CommonReleaseEntity_array *v38; // x23
  int max_length; // w8
  int i; // w20
  CommonReleaseEntity_o *v41; // x8
  int32_t condType; // w9
  System_Collections_Generic_List_object__o *v43; // x23
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w22
  __int64 v47; // x1
  __int64 v48; // x1
  _BOOL8 IsQuestAvailable; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject *v56; // x1
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x1
  Il2CppObject *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *v69; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  Il2CppObject *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Func_object__object__o *v83; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Collections_Generic_List_TSource__o *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  __int64 v94; // [xsp+0h] [xbp-D0h]
  MissionNaviTransitionBoardItem_o *v95; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+10h] [xbp-C0h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v98; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5970B1F & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventJobMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventJobPointBonusMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_EventJobCautionComponent_JobFreeQuestDisplayData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_QuestEntity__EventJobCautionComponent_JobFreeQuestDisplayData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventJobCautionComponent_JobFreeQuestDisplayData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventJobEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventJobEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventJobEntity__get_Current__);
    sub_2213A60(&System_Func_QuestEntity__EventJobCautionComponent_JobFreeQuestDisplayData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass27_0__TryGetJobOpenQuestDialogInfo_b__0__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass27_0_TypeInfo);
    byte_5970B1F = 1;
  }
  memset(&v99, 0, sizeof(v99));
  memset(&v98, 0, sizeof(v98));
  entity = 0;
  v7 = sub_2213CCC(EventTutorialEntity___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_61;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData___ctor__);
  *cautionQuestDisplayDataList = (System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o *)v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)cautionQuestDisplayDataList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !eventDetailEntity )
    return 0;
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v26 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  EntityListByEventId = (EventJobMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventJobMaster___);
  if ( !EntityListByEventId )
    goto LABEL_61;
  v94 = v7;
  v95 = (MissionNaviTransitionBoardItem_o *)cautionQuestDisplayDataList;
  EntityListByEventId = (EventJobMaster_o *)EventJobMaster__GetEntityListByEventId(
                                              EntityListByEventId,
                                              this->fields.eventId,
                                              0);
  if ( !EntityListByEventId )
    goto LABEL_61;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    (System_Collections_Generic_List_object__o *)EntityListByEventId,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventJobEntity__GetEnumerator__);
  v99 = v96;
  v96.fields._list = 0;
  *(_QWORD *)&v96.fields._index = &v99;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v99,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventJobEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v99.fields._current;
    if ( !v99.fields._current )
      sub_2213CDC(v27, v28);
    monitor_high = SHIDWORD(v99.fields._current[4].monitor);
    klass_high = HIDWORD(v99.fields._current[4].klass);
    monitor = (int32_t)v99.fields._current[4].monitor;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v28);
    IsOpen = CondType__IsOpen(klass_high, monitor, monitor_high, 0, 0, 0);
    if ( IsOpen )
    {
      v35 = (int)current[3].monitor;
      if ( v35 == 1 || v35 == 46 )
      {
        if ( !v23 )
          sub_2213CDC(IsOpen, v34);
        System_Collections_Generic_HashSet_int___Add(
          v23,
          HIDWORD(current[3].monitor),
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      else if ( v35 == 113 )
      {
        if ( !Master_object )
          sub_2213CDC(IsOpen, v34);
        List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Master_object, HIDWORD(current[3].monitor), 0);
        v38 = List;
        if ( !List )
          sub_2213CDC(0, v37);
        max_length = List->max_length;
        if ( max_length >= 1 )
        {
          for ( i = 0; i < max_length; ++i )
          {
            if ( i >= (unsigned int)max_length )
              sub_2213CE4(List);
            v41 = v38->m_Items[i];
            if ( !v41 )
              sub_2213CDC(List, v37);
            condType = v41->fields.condType;
            if ( condType == 1 || condType == 46 )
            {
              if ( !v23 )
                sub_2213CDC(List, v37);
              List = (CommonReleaseEntity_array *)System_Collections_Generic_HashSet_int___Add(
                                                    v23,
                                                    v41->fields.condId,
                                                    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            max_length = v38->max_length;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v99,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventJobEntity__Dispose__);
  v43 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestEntity___ctor__);
  if ( !v23 )
LABEL_61:
    sub_2213CDC(EntityListByEventId, v9);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)&v96,
    v23,
    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v98 = (System_Collections_Generic_HashSet_Enumerator_T__o)v96;
  v96.fields._list = 0;
  *(_QWORD *)&v96.fields._index = &v98;
  while ( 1 )
  {
    v44 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v98,
            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v44 )
      break;
    if ( !v26 )
      sub_2213CDC(v44, v45);
    v46 = (int32_t)v98.fields._current;
    if ( QuestMaster__TryGetQuestEntity((QuestMaster_o *)v26, &entity, (int32_t)v98.fields._current, 0) )
    {
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v47);
      if ( !CondType__IsQuestClear_47284152(v46, -1, 0, 0) )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v48);
        IsQuestAvailable = CondType__IsQuestAvailable(v46, 0, 0);
        if ( IsQuestAvailable )
        {
          v56 = (Il2CppObject *)entity;
          if ( !entity )
            sub_2213CDC(IsQuestAvailable, 0);
          if ( entity->fields.type == 5 )
          {
            if ( !v43
              || (items = v43->fields._items,
                  v58 = Method_System_Collections_Generic_List_QuestEntity__Add__,
                  ++v43->fields._version,
                  !items) )
            {
              sub_2213CDC(IsQuestAvailable, v56);
            }
            size = v43->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                v56,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = &items->obj.klass + size;
              v43->fields._size = size + 1;
              v60[4] = (Il2CppClass *)v56;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v56, v50, v51, v52, v53, v54, v55);
            }
          }
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v98,
    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
  v62 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  *(_QWORD *)(v94 + 16) = v62;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v94 + 16), (int32_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventJobMaster___);
  *(_QWORD *)(v94 + 24) = v69;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v94 + 24), (int32_t)v69, v70, v71, v72, v73, v74, v75);
  DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v76 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventJobPointBonusMaster___);
  *(_QWORD *)(v94 + 40) = v76;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v94 + 40), (int32_t)v76, v77, v78, v79, v80, v81, v82);
  v83 = (System_Func_object__object__o *)sub_2213CCC(System_Func_QuestEntity__EventJobCautionComponent_JobFreeQuestDisplayData__TypeInfo);
  System_Func_object__object____ctor(
    v83,
    (Il2CppObject *)v94,
    Method_EventTutorialEntity___c__DisplayClass27_0__TryGetJobOpenQuestDialogInfo_b__0__,
    0);
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                                                               (System_Func_TSource__TResult__o *)v83,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_QuestEntity__EventJobCautionComponent_JobFreeQuestDisplayData___);
  v85 = System_Linq_Enumerable__ToList_object_(
          v84,
          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventJobCautionComponent_JobFreeQuestDisplayData___);
  v95->klass = (MissionNaviTransitionBoardItem_c *)v85;
  sub_2213A04(v95, (int32_t)v85, v86, v87, v88, v89, v90, v91);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v95->klass,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_EventJobCautionComponent_JobFreeQuestDisplayData___);
}


bool EventTutorialEntity__TryGetTargetEventJobId(
        EventTutorialEntity_o *this,
        int32_t *eventJobId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_5970B33 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25271/*"targetEventJobId"*/);
    byte_5970B33 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25271/*"targetEventJobId"*/, 0, 0);
  *eventJobId = IntValue;
  return IntValue > 0;
}


System_Int32_array_array *EventTutorialEntity__getTargets(EventTutorialEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  System_String_o **v7; // x23
  System_String_o **v8; // x26
  System_String_o **v9; // x27
  const MethodInfo_39A6884 **v10; // x29
  void **p_monitor; // x25
  System_String_o *v12; // x20
  unsigned int v13; // w24
  unsigned int max_length; // w9
  System_String_array *v15; // x0
  __int64 v16; // x1
  EventTutorialEntity___c_c *v17; // x8
  System_Object_array *v18; // x21
  struct EventTutorialEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__21_0; // x22
  System_String_o **v21; // x25
  EventTutorialEntity_o *v22; // x26
  const MethodInfo_39A6884 **v23; // x19
  System_String_o **v24; // x29
  System_String_o **v25; // x27
  Il2CppObject *v26; // x23
  struct EventTutorialEntity___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x8
  void **v42; // [xsp+8h] [xbp-68h]

  if ( (byte_5970B1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_ConvertAll_string__int___);
    sub_2213A60(&System_Converter_string__int__TypeInfo);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__getTargets_b__21_0__);
    sub_2213A60(&EventTutorialEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_5970B1A = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_2213B20(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_2213B20(int_____TypeInfo, LODWORD(targetIds->max_length));
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_2213CDC(v4, v5);
  v7 = (System_String_o **)&StringLiteral_16427/*"["*/;
  v8 = (System_String_o **)&StringLiteral_1/*""*/;
  v9 = (System_String_o **)&StringLiteral_16691/*"]"*/;
  v10 = (const MethodInfo_39A6884 **)&Method_System_Array_ConvertAll_string__int___;
  p_monitor = &v4[1].monitor;
  v12 = v4;
  v13 = 0;
  v42 = &v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Int32_array_array *)v12;
    if ( v13 >= max_length )
      goto LABEL_23;
    v4 = v6->m_Items[v13];
    if ( v4 )
    {
      v4 = System_String__Replace_75703400(v4, *v7, *v8, 0);
      if ( v4 )
      {
        v4 = System_String__Replace_75703400(v4, *v9, *v8, 0);
        if ( v4 )
        {
          v15 = System_String__Split(v4, 0x2Cu, 0, 0);
          v17 = EventTutorialEntity___c_TypeInfo;
          v18 = (System_Object_array *)v15;
          if ( !*(&EventTutorialEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo, v16);
            v17 = EventTutorialEntity___c_TypeInfo;
          }
          static_fields = v17->static_fields;
          _9__21_0 = (System_Converter_object__int__o *)static_fields->__9__21_0;
          if ( !_9__21_0 )
          {
            v21 = v8;
            v22 = this;
            v23 = v10;
            v24 = v9;
            v25 = v7;
            if ( !*(&v17->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v17, v16);
              static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            }
            v26 = (Il2CppObject *)static_fields->__9;
            _9__21_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__21_0, v26, Method_EventTutorialEntity___c__getTargets_b__21_0__, 0);
            v27 = EventTutorialEntity___c_TypeInfo->static_fields;
            v27->__9__21_0 = (struct System_Converter_string__int__o *)_9__21_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v27->__9__21_0,
              (int32_t)_9__21_0,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            v7 = v25;
            v9 = v24;
            v10 = v23;
            this = v22;
            v8 = v21;
            p_monitor = v42;
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v18,
                                    (System_Converter_TInput__TOutput__o *)_9__21_0,
                                    *v10);
          if ( v12 )
          {
            if ( v13 >= LODWORD(v12[1].klass) )
LABEL_23:
              sub_2213CE4(v4);
            v40 = (int)v13++;
            *((_QWORD *)&v12[1].monitor + v40) = v4;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&p_monitor[v40], (int32_t)v4, v34, v35, v36, v37, v38, v39);
            v6 = this->fields.targetIds;
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
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t v11; // w20
  __int64 v13; // x1
  System_Int32_array_array *Targets; // x21
  intptr_t Instance; // x0
  int32_t v16; // w8
  const MethodInfo *v17; // x5
  il2cpp_array_size_t max_length; // x8
  System_Int32_array **m_Items; // x9
  System_Int32_array *v20; // x10
  il2cpp_array_size_t v21; // x8
  System_Int32_array **i; // x9
  System_Int32_array *v23; // x10
  int v24; // w11
  int32_t v25; // w10
  il2cpp_array_size_t v26; // x8
  System_Int32_array *v27; // x9
  __int64 v28; // x22
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  il2cpp_array_size_t v31; // x8
  QuestGroupMaster_o *v32; // x21
  unsigned __int64 v33; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  il2cpp_array_size_t v35; // x8
  System_Int32_array **v36; // x9
  System_Int32_array *v37; // x10
  int v38; // w11
  int32_t v39; // w12
  int32_t v40; // w12
  int32_t v41; // w10
  il2cpp_array_size_t v42; // x8
  __int64 v43; // x22
  System_Int32_array *v44; // x0
  __int64 v45; // x1
  il2cpp_array_size_t v46; // x8
  System_Int32_array **v47; // x9
  System_Int32_array *v48; // x10
  int v49; // w11
  int32_t v50; // w12
  int32_t v51; // w10
  TerminalSceneComponent_c *v52; // x0
  UnityEngine_Object_o *mInstance; // x20

  v11 = qId;
  if ( (byte_5970B1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5970B1C = 1;
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
    case 0x6D:
    case 0x70:
    case 0x71:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
      goto LABEL_4;
    case 1:
    case 3:
    case 0xB:
    case 0x11:
    case 0x12:
    case 0x35:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x6E:
    case 0x72:
    case 0x79:
      if ( !Targets )
        goto LABEL_4;
      max_length = Targets->max_length;
      if ( !max_length )
        goto LABEL_4;
      if ( (int)max_length < 1 )
        goto LABEL_128;
      m_Items = Targets->m_Items;
      while ( 2 )
      {
        v20 = *m_Items;
        if ( !*m_Items )
          goto LABEL_130;
        if ( SLODWORD(v20->max_length) >= 1 && v20->m_Items[0] != v11 )
        {
          Instance = 0;
          LODWORD(max_length) = max_length - 1;
          ++m_Items;
          if ( !(_DWORD)max_length )
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
      if ( Targets && (v21 = Targets->max_length) != 0 )
      {
        if ( (int)v21 >= 1 )
        {
          for ( i = Targets->m_Items; ; ++i )
          {
            v23 = *i;
            if ( !*i )
              break;
            v24 = v23->max_length;
            if ( v24 < 1 )
              goto LABEL_4;
            if ( v23->m_Items[0] == v11 )
            {
              if ( v24 == 1 )
                goto LABEL_4;
              v25 = v23->m_Items[1];
              if ( v25 == ex1 || !v25 )
                goto LABEL_4;
            }
            Instance = 0;
            LODWORD(v21) = v21 - 1;
            if ( !(_DWORD)v21 )
              return Instance;
          }
LABEL_130:
          sub_2213CDC(Instance, v13);
        }
      }
      else
      {
        condType = this->fields.condType;
        if ( condType == 32 || condType == 26 )
        {
          Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_130;
          Instance = (intptr_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          condIds = this->fields.condIds;
          if ( !condIds )
            goto LABEL_130;
          v31 = condIds->max_length;
          if ( (int)v31 >= 1 )
          {
            v32 = (QuestGroupMaster_o *)Instance;
            v33 = 0;
            while ( v33 < (unsigned int)v31 )
            {
              if ( !v32 )
                goto LABEL_130;
              QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v32, condIds->m_Items[v33], 2, 0);
              if ( (System_Array__IndexOf_int_(
                      QuestIdListByGroupId,
                      v11,
                      (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___)
                  & 0x80000000) == 0 )
                goto LABEL_4;
              LODWORD(v31) = condIds->max_length;
              ++v33;
              Instance = 0;
              if ( (__int64)v33 >= (int)v31 )
                return Instance;
            }
LABEL_131:
            sub_2213CE4(Instance);
          }
        }
      }
LABEL_128:
      LOBYTE(Instance) = 0;
      return Instance;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v35 = Targets->max_length;
      if ( !v35 )
        goto LABEL_4;
      if ( (int)v35 < 1 )
        goto LABEL_128;
      v36 = Targets->m_Items;
      while ( 2 )
      {
        v37 = *v36;
        if ( !*v36 )
          goto LABEL_130;
        v38 = v37->max_length;
        if ( v38 >= 1 )
        {
          if ( v37->m_Items[0] != v11
            || v38 != 1
            && ((v39 = v37->m_Items[1], v39 != ex1) && v39
             || (unsigned int)v38 >= 3
             && ((v40 = v37->m_Items[2], v40 != ex2) && v40 || v38 != 3 && (v41 = v37->m_Items[3], v41 != ex3) && v41)) )
          {
            Instance = 0;
            LODWORD(v35) = v35 - 1;
            ++v36;
            if ( !(_DWORD)v35 )
              return Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v46 = Targets->max_length;
      if ( !v46 || (int)v46 < 1 )
        goto LABEL_4;
      v47 = Targets->m_Items;
      while ( 2 )
      {
        v48 = *v47;
        if ( !*v47 )
          goto LABEL_130;
        v49 = v48->max_length;
        if ( v49 < 1 )
          goto LABEL_128;
        if ( v48->m_Items[0] != v11 )
          goto LABEL_112;
        if ( v49 == 1 )
          goto LABEL_128;
        v50 = v48->m_Items[1];
        if ( v50 != ex1 )
        {
          if ( v50 )
            goto LABEL_112;
        }
        if ( (unsigned int)v49 < 3 )
          goto LABEL_128;
        v51 = v48->m_Items[2];
        Instance = 0;
        if ( v51 != ex2 )
        {
          if ( v51 )
          {
LABEL_112:
            LODWORD(v46) = v46 - 1;
            ++v47;
            if ( !(_DWORD)v46 )
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
        goto LABEL_128;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
      if ( !CondType__IsSvtEquipFriendShipHaving(0) )
        goto LABEL_128;
      goto LABEL_4;
    case 0x37:
      if ( this->fields.condType != 95 )
        goto LABEL_128;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
      if ( !CondType__IsSvtEquipFriendShipHaving(0) )
      {
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v45);
        if ( !CondType__IsSvtEquipFriendShipStorageHaving(0) )
          goto LABEL_128;
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
      v26 = Targets->max_length;
      if ( !v26 )
        goto LABEL_4;
      if ( (_DWORD)v26 != 1 )
        goto LABEL_37;
      v27 = Targets->m_Items[0];
      if ( !v27 )
        goto LABEL_130;
      if ( LODWORD(v27->max_length) == 1 && !v27->m_Items[0] )
        goto LABEL_4;
LABEL_37:
      if ( (int)v26 < 1 )
        goto LABEL_128;
      v28 = 0;
      while ( 2 )
      {
        if ( (unsigned int)v28 >= (unsigned int)v26 )
          goto LABEL_131;
        Instance = (intptr_t)Targets->m_Items[v28];
        if ( !Instance )
          goto LABEL_130;
        if ( *(int *)(Instance + 24) >= 1
          && !System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                v11,
                (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          LODWORD(v26) = Targets->max_length;
          ++v28;
          Instance = 0;
          if ( (int)v28 >= (int)v26 )
            return Instance;
          continue;
        }
        goto LABEL_4;
      }
    case 0x43:
      if ( !Targets || !Targets->max_length )
        goto LABEL_4;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v52 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v13);
        v52 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v52->static_fields->mInstance;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      Instance = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_128;
      if ( !mInstance )
        goto LABEL_130;
      Instance = mInstance[10].fields.m_CachedPtr;
      if ( !Instance )
        goto LABEL_130;
      if ( !ScrTerminalListTop__ContainsMapQuest((ScrTerminalListTop_o *)Instance, Targets, 0) )
        goto LABEL_128;
      goto LABEL_4;
    case 0x6F:
      if ( targetId >= 0 )
        v11 = targetId;
      if ( !Targets )
        goto LABEL_4;
      v42 = Targets->max_length;
      if ( !v42 )
        goto LABEL_4;
      if ( (int)v42 < 1 )
        goto LABEL_128;
      v43 = 0;
      while ( 2 )
      {
        if ( (unsigned int)v43 >= (unsigned int)v42 )
          goto LABEL_131;
        v44 = Targets->m_Items[v43];
        if ( v44
          && SLODWORD(v44->max_length) >= 1
          && !System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                v11,
                (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          LODWORD(v42) = Targets->max_length;
          ++v43;
          Instance = 0;
          if ( (int)v43 >= (int)v42 )
            return Instance;
          continue;
        }
        break;
      }
LABEL_4:
      v16 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( !v16 || v16 == 11 || v16 == 95 )
        return Instance;
      Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      Instance = (intptr_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
      if ( !Instance )
        goto LABEL_130;
      LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                           (EventTutorialCondMaster_o *)Instance,
                           this->fields.eventId,
                           this->fields.flagType,
                           this->fields.num,
                           this,
                           v17);
      return Instance;
    default:
      return Instance;
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventTutorialEntity__isOpenCondition(
        EventTutorialEntity_o *this,
        int32_t qId,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t flagType; // w25
  int32_t eventId; // w26
  int v15; // w8
  __int64 v16; // x1
  const MethodInfo *v17; // x6
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  System_Collections_Generic_HashSet_object__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  __int64 v22; // x1
  int32_t value; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v25; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5970B1B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_5970B1B = 1;
  }
  memset(&v25, 0, sizeof(v25));
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  v15 = *(&TutorialFlag_TypeInfo->_2.cctor_finished + 1);
  value = 0;
  if ( !v15 )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&qId);
  if ( TutorialFlag__Get_47425340(flagType, eventId, 0) )
  {
    return 0;
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    if ( !byte_596DB47 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB47 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
      v19 = TerminalPramsManager_TypeInfo;
    }
    if ( v19->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
    {
      if ( !*(&v19->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v19, v16);
      if ( !byte_596DB47 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596DB47 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
        v20 = TerminalPramsManager_TypeInfo;
      }
      ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_object__o *)v20->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
      if ( !ForcePlayEventTutorialArray_k__BackingField )
        sub_2213CDC(0, v16);
      System_Collections_Generic_HashSet_object___GetEnumerator(
        &v25,
        ForcePlayEventTutorialArray_k__BackingField,
        (const MethodInfo_42BAE44 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
                &v25,
                (const MethodInfo_40FB544 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__) )
      {
        if ( !v25.fields._current )
          sub_2213CDC(0, v22);
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               (System_Collections_Generic_Dictionary_int__int__o *)v25.fields._current,
               this->fields.eventId,
               &value,
               (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__)
          && value == this->fields.flagType )
        {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose(
            &v25,
            (const MethodInfo_40FB540 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
          return 1;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(
        &v25,
        (const MethodInfo_40FB540 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    }
    return EventTutorialEntity__isEnableCondition(this, qId, ex1, ex2, ex3, targetId, v17);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970B36 & 1) == 0 )
  {
    sub_2213A60(&EventTutorialEntity___c_TypeInfo);
    byte_5970B36 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventTutorialEntity___c_TypeInfo->static_fields,
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
      sub_2213CDC(_4__this, action);
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
  __int64 v5; // x20
  __int64 Instance; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x4
  struct EventTutorialEntity_o *_4__this; // x19
  struct System_Int32_array *imageIds; // x8
  struct EventTutorialEntity_o *v24; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v26; // x20
  System_Action_int__o *_9__4; // x24
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject **v41; // x22
  __int64 v42; // x1
  struct EventTutorialEntity_o *v43; // x8
  struct EventTutorialEntity_o *v44; // x8
  char v45; // w24
  Il2CppObject *v46; // x0
  System_String_o *v47; // x19
  System_String_o *v48; // x20
  __int64 v49; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_List_object__o *v56; // x25
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct EventTutorialEntity_o *v63; // x8
  __int64 v64; // x22
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x1
  struct EventTutorialEntity_o *v72; // x8
  struct System_Int32_array *condIds; // x8
  System_Collections_Generic_List_AssistEntity__o *AssistEntityListByShopGroupId; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  Il2CppObject *v81; // x21
  System_Action_object__o *v82; // x23
  __int64 v83; // x8
  __int64 v84; // x8
  Il2CppObject *v85; // x8
  __int64 *v86; // x9
  int32_t condType; // w8
  __int64 v88; // x1
  Il2CppObject *Master_object; // x25
  long double v90; // q0
  int32_t v91; // w26
  __int64 v92; // x21
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  __int64 *v99; // x22
  __int64 v100; // x1
  __int64 v101; // x24
  EventEquipSkillPartsMaster_o *v102; // x22
  __int64 v103; // x1
  __int64 v104; // x23
  long double v105; // q0
  Il2CppObject *v106; // x22
  long double v107; // q0
  int32_t v108; // w23
  __int64 v109; // x1
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v111; // x0
  System_String_o *v112; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  Il2CppObject *v119; // x22
  __int64 v120; // x8
  __int64 v121; // x8
  __int64 v122; // x8
  CommonUI_o *v123; // x0
  System_Action_o *klass; // x4
  const MethodInfo_3820784 *v125; // x5
  struct EventTutorialEntity_o *v126; // x8
  __int64 v127; // x25
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  __int64 v134; // x26
  __int64 v135; // x1
  struct EventTutorialEntity_o *v136; // x8
  struct System_Int32_array *v137; // x8
  System_Collections_ICollection_o *QuestIdListByGroupId; // x24
  System_String_o *v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  Il2CppObject *v146; // x21
  System_Action_object__o *v147; // x22
  __int64 v148; // x8
  __int64 v149; // x8
  __int64 v150; // x8
  __int64 *v151; // x9
  struct EventTutorialEntity_o *v152; // x8
  CommonUI_o *v153; // x19
  System_String_o *DialogPrefabName; // x20
  Il2CppObject *v155; // x23
  System_Action_object__o *v156; // x21
  System_String_o *v157; // x2
  System_Action_T__o *v158; // x3
  System_String_o *v159; // x1
  const MethodInfo *v160; // x3
  const MethodInfo *v161; // x3
  Il2CppObject *v162; // x24
  int32_t eventId; // [xsp+14h] [xbp-6Ch] BYREF
  QuestPhaseEntity_o *v164; // [xsp+18h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_5970B37 & 1) == 0 )
  {
    sub_2213A60(&System_Action_EventCommonImageDialog__TypeInfo);
    sub_2213A60(&System_Action_EventInfoJobOpenQuestInfoDialog__TypeInfo);
    sub_2213A60(&System_Action_EventInfoJobSkillGetDialog__TypeInfo);
    sub_2213A60(&System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
    sub_2213A60(&System_Action_EventInfoSkillGetDialog__TypeInfo);
    sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
    sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___);
    sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___);
    sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_EventInfoJobOpenQuestInfoDialog___);
    sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_EventInfoJobSkillGetDialog___);
    sub_2213A60(&Method_CommonUI_LoadAndCreateDialog_EventInfoSkillGetDialog___);
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__4__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__6__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__9__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_3__OpenTutorial_b__7__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_3__OpenTutorial_b__8__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_3_TypeInfo);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_4_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_5__OpenTutorial_b__10__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_5_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_6__OpenTutorial_b__11__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_6_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_7__OpenTutorial_b__12__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_7_TypeInfo);
    sub_2213A60(&StringLiteral_15104/*"TitleInfoSkillGetDialogPrefab"*/);
    sub_2213A60(&StringLiteral_6474/*"EventEquipSkillPartsRenoCompletionDialog"*/);
    sub_2213A60(&StringLiteral_6486/*"EventInfoJobSkillGetDialog"*/);
    sub_2213A60(&StringLiteral_5805/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/);
    sub_2213A60(&StringLiteral_6485/*"EventInfoJobOpenQuestInfoDialog"*/);
    sub_2213A60(&StringLiteral_2254/*"AddPartsDialog"*/);
    sub_2213A60(&StringLiteral_5803/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    sub_2213A60(&StringLiteral_6475/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/);
    sub_2213A60(&StringLiteral_14256/*"Terminal/Info"*/);
    byte_5970B37 = 1;
  }
  entity = 0;
  v164 = 0;
  v5 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_129;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = action;
  v14 = (System_Action_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)action, v15, v16, v17, v18, v19, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_129;
  imageIds = _4__this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = this->fields.__4__this;
    if ( v24 && Instance )
    {
      CommonUI__OpenTutorialImageDialog_37396960(
        (CommonUI_o *)Instance,
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
LABEL_129:
    sub_2213CDC(Instance, v7);
  }
  textJson = _4__this->fields.textJson;
  if ( !textJson || !textJson->max_length )
  {
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.script, 0) )
      goto LABEL_44;
    Instance = (__int64)this->fields.__4__this;
    if ( !Instance )
      goto LABEL_129;
    if ( !EventTutorialEntity__GetDialogPrefabName((EventTutorialEntity_o *)Instance, v7) )
    {
LABEL_44:
      ActionExtensions__Call(*v14, 0);
      return;
    }
    v34 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0);
    if ( !v34 )
      goto LABEL_129;
    *(_QWORD *)(v34 + 40) = v5;
    v41 = (Il2CppObject **)(v34 + 40);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 40), v5, v35, v36, v37, v38, v39, v40);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
    v43 = this->fields.__4__this;
    if ( !v43 )
      goto LABEL_129;
    if ( !Instance )
      goto LABEL_129;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 &entity,
                 v43->fields.eventId,
                 (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    v44 = this->fields.__4__this;
    if ( !v44 )
      goto LABEL_129;
    v45 = Instance;
    eventId = v44->fields.eventId;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v46, 0);
    if ( !this->fields.__4__this )
      goto LABEL_129;
    v47 = (System_String_o *)Instance;
    Instance = (__int64)EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v7);
    v48 = (System_String_o *)Instance;
    if ( (v45 & 1) == 0 )
      goto LABEL_101;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_129;
    Instance = EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)entity, 0);
    if ( (Instance & 1) == 0 )
      goto LABEL_101;
    v49 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0);
    if ( !v49 )
      goto LABEL_129;
    *(_QWORD *)(v49 + 24) = v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 24), v34, v50, v51, v52, v53, v54, v55);
    v56 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v56,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    *(_QWORD *)(v49 + 16) = v56;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 16), (int32_t)v56, v57, v58, v59, v60, v61, v62);
    v63 = this->fields.__4__this;
    if ( !v63 )
      goto LABEL_129;
    if ( v63->fields.condType == 67 )
    {
      Instance = System_String__Equals_75687256(v48, (System_String_o *)StringLiteral_2254/*"AddPartsDialog"*/, 0);
      if ( (Instance & 1) != 0 )
      {
        v64 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_5_TypeInfo);
        System_Object___ctor((Il2CppObject *)v64, 0);
        if ( !v64 )
          goto LABEL_129;
        *(_QWORD *)(v64 + 24) = v49;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 24), v49, v65, v66, v67, v68, v69, v70);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v71);
        Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
        v72 = this->fields.__4__this;
        if ( !v72 )
          goto LABEL_129;
        condIds = v72->fields.condIds;
        if ( !condIds )
          goto LABEL_129;
        if ( LODWORD(condIds->max_length) )
        {
          if ( !Instance )
            goto LABEL_129;
          AssistEntityListByShopGroupId = AssistMaster__GetAssistEntityListByShopGroupId(
                                            (AssistMaster_o *)Instance,
                                            condIds->m_Items[0],
                                            0);
          *(_QWORD *)(v64 + 16) = AssistEntityListByShopGroupId;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v64 + 16),
            (int32_t)AssistEntityListByShopGroupId,
            v75,
            v76,
            v77,
            v78,
            v79,
            v80);
          v81 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v82 = (System_Action_object__o *)sub_2213CCC(System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
          System_Action_object____ctor(
            v82,
            (Il2CppObject *)v64,
            Method_EventTutorialEntity___c__DisplayClass25_5__OpenTutorial_b__10__,
            0);
          v83 = *(_QWORD *)(v64 + 24);
          if ( !v83 )
            goto LABEL_129;
          v84 = *(_QWORD *)(v83 + 24);
          if ( !v84 )
            goto LABEL_129;
          v85 = *(Il2CppObject **)(v84 + 40);
          if ( !v85 || !v81 )
            goto LABEL_129;
          v86 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___;
LABEL_126:
          klass = (System_Action_o *)v85[1].klass;
          v125 = (const MethodInfo_3820784 *)*v86;
          v123 = (CommonUI_o *)v81;
LABEL_127:
          v159 = v47;
          v157 = v48;
          v158 = (System_Action_T__o *)v82;
          goto LABEL_128;
        }
LABEL_130:
        sub_2213CE4(Instance);
      }
      v63 = this->fields.__4__this;
      if ( !v63 )
        goto LABEL_129;
    }
    condType = v63->fields.condType;
    if ( condType == 46 || condType == 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v90 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v88);
      v91 = sub_2F07A5C(0, v90);
      Instance = sub_2909718(0);
      if ( !Master_object )
        goto LABEL_129;
      Instance = QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v164, v91, Instance + 1, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = System_String__Equals_75687256(v48, (System_String_o *)StringLiteral_6474/*"EventEquipSkillPartsRenoCompletionDialog"*/, 0);
        if ( (Instance & 1) != 0 )
        {
          v92 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_6_TypeInfo);
          System_Object___ctor((Il2CppObject *)v92, 0);
          if ( !v92 )
            goto LABEL_129;
          *(_QWORD *)(v92 + 32) = v49;
          v99 = (__int64 *)(v92 + 32);
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v92 + 32), v49, v93, v94, v95, v96, v97, v98);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v100);
          Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
          v101 = *v99;
          if ( !*v99 )
            goto LABEL_129;
          v102 = (EventEquipSkillPartsMaster_o *)Instance;
          v104 = sub_2213B20(int___TypeInfo, 1);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v105 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v103);
          Instance = sub_2F07A5C(0, v105);
          if ( !v104 )
            goto LABEL_129;
          if ( *(_DWORD *)(v104 + 24) )
          {
            *(_DWORD *)(v104 + 32) = Instance;
            if ( !v102 )
              goto LABEL_129;
            EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
              v102,
              (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(v101 + 16),
              (System_Int32_array *)v104,
              0,
              0);
            v106 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
            v108 = sub_2F07A5C(0, v107);
            Instance = sub_2909718(0);
            if ( !v106 )
              goto LABEL_129;
            AssistMaster__TryGetValidAssistEntityList(
              (AssistMaster_o *)v106,
              (System_Collections_Generic_List_AssistEntity__o **)(v92 + 24),
              v108,
              Instance + 1,
              1,
              0);
            Instance = (__int64)v164;
            if ( !v164 )
              goto LABEL_129;
            RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(v164, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v109);
            v111 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5803/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
            v112 = System_String__Format(RenoCompletionDialogText, v111, 0);
            *(_QWORD *)(v92 + 16) = v112;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v92 + 16),
              (int32_t)v112,
              v113,
              v114,
              v115,
              v116,
              v117,
              v118);
            v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v82 = (System_Action_object__o *)sub_2213CCC(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
            System_Action_object____ctor(
              v82,
              (Il2CppObject *)v92,
              Method_EventTutorialEntity___c__DisplayClass25_6__OpenTutorial_b__11__,
              0);
            v120 = *(_QWORD *)(v92 + 32);
            if ( !v120 )
              goto LABEL_129;
            v121 = *(_QWORD *)(v120 + 24);
            if ( !v121 )
              goto LABEL_129;
            v122 = *(_QWORD *)(v121 + 40);
            if ( !v122 || !v119 )
              goto LABEL_129;
            v123 = (CommonUI_o *)v119;
            klass = *(System_Action_o **)(v122 + 16);
            v125 = (const MethodInfo_3820784 *)Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
            goto LABEL_127;
          }
          goto LABEL_130;
        }
      }
      v126 = this->fields.__4__this;
      if ( !v126 )
        goto LABEL_129;
      condType = v126->fields.condType;
    }
    if ( condType != 51 )
      goto LABEL_101;
    Instance = System_String__Equals_75687256(v48, (System_String_o *)StringLiteral_6475/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, 0);
    if ( (Instance & 1) == 0 )
      goto LABEL_101;
    v127 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v127, 0);
    if ( !v127 )
      goto LABEL_129;
    *(_QWORD *)(v127 + 32) = v49;
    v134 = v127 + 32;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v127 + 32), v49, v128, v129, v130, v131, v132, v133);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v135);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
    v136 = this->fields.__4__this;
    if ( !v136 )
      goto LABEL_129;
    v137 = v136->fields.condIds;
    if ( !v137 )
      goto LABEL_129;
    if ( !LODWORD(v137->max_length) )
      goto LABEL_130;
    if ( !Instance )
      goto LABEL_129;
    QuestIdListByGroupId = (System_Collections_ICollection_o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                 (QuestGroupMaster_o *)Instance,
                                                                 v137->m_Items[0],
                                                                 2,
                                                                 0);
    Instance = BasicHelper__IsNullOrEmpty(QuestIdListByGroupId, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_101;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    if ( !*(_QWORD *)v134 || !Instance )
      goto LABEL_129;
    Instance = EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                 (EventEquipSkillPartsMaster_o *)Instance,
                 (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(*(_QWORD *)v134 + 16LL),
                 (System_Int32_array *)QuestIdListByGroupId,
                 0,
                 0);
    if ( (Instance & 1) == 0 )
      goto LABEL_101;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
    Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
    if ( !Instance )
      goto LABEL_129;
    Instance = AssistMaster__TryGetValidAssistEntityList_48778792(
                 (AssistMaster_o *)Instance,
                 (System_Collections_Generic_List_AssistEntity__o **)(v127 + 16),
                 (System_Int32_array *)QuestIdListByGroupId,
                 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v139 = LocalizationManager__Get((System_String_o *)StringLiteral_5805/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, 0);
      *(_QWORD *)(v127 + 24) = v139;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v127 + 24), (int32_t)v139, v140, v141, v142, v143, v144, v145);
      v146 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v147 = (System_Action_object__o *)sub_2213CCC(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
      System_Action_object____ctor(
        v147,
        (Il2CppObject *)v127,
        Method_EventTutorialEntity___c__DisplayClass25_7__OpenTutorial_b__12__,
        0);
      v148 = *(_QWORD *)(v127 + 32);
      if ( !v148 )
        goto LABEL_129;
      v149 = *(_QWORD *)(v148 + 24);
      if ( !v149 )
        goto LABEL_129;
      v150 = *(_QWORD *)(v149 + 40);
      if ( !v150 || !v146 )
        goto LABEL_129;
      v151 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
    }
    else
    {
LABEL_101:
      v152 = this->fields.__4__this;
      if ( !v152 )
        goto LABEL_129;
      if ( v152->fields.condType == 1 && System_String__op_Equality(v48, (System_String_o *)StringLiteral_15104/*"TitleInfoSkillGetDialogPrefab"*/, 0) )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_129;
        if ( EventDetailEntity__IsEventFlowerGarden((EventDetailEntity_o *)entity, 0) )
        {
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this->fields.__4__this )
            goto LABEL_129;
          v153 = (CommonUI_o *)Instance;
          DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v7);
          v155 = *v41;
          v156 = (System_Action_object__o *)sub_2213CCC(System_Action_EventInfoSkillGetDialog__TypeInfo);
          System_Action_object____ctor(
            v156,
            v155,
            Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__6__,
            0);
          if ( !*v41 || !v153 )
            goto LABEL_129;
          v123 = v153;
          klass = (System_Action_o *)(*v41)[1].klass;
          v157 = DialogPrefabName;
          v158 = (System_Action_T__o *)v156;
          v159 = (System_String_o *)StringLiteral_14256/*"Terminal/Info"*/;
          v125 = (const MethodInfo_3820784 *)Method_CommonUI_LoadAndCreateDialog_EventInfoSkillGetDialog___;
          goto LABEL_128;
        }
      }
      if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_6486/*"EventInfoJobSkillGetDialog"*/, 0) )
        goto LABEL_118;
      Instance = (__int64)this->fields.__4__this;
      if ( !Instance )
        goto LABEL_129;
      if ( EventTutorialEntity__TryGetJobGetSkillDialogInfo(
             (EventTutorialEntity_o *)Instance,
             (SkillEntity_o **)(v34 + 16),
             (SkillLvEntity_o **)(v34 + 24),
             v160) )
      {
        v146 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v147 = (System_Action_object__o *)sub_2213CCC(System_Action_EventInfoJobSkillGetDialog__TypeInfo);
        System_Action_object____ctor(
          v147,
          (Il2CppObject *)v34,
          Method_EventTutorialEntity___c__DisplayClass25_3__OpenTutorial_b__7__,
          0);
        v150 = *(_QWORD *)(v34 + 40);
        if ( !v150 || !v146 )
          goto LABEL_129;
        v151 = &Method_CommonUI_LoadAndCreateDialog_EventInfoJobSkillGetDialog___;
      }
      else
      {
LABEL_118:
        if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_6485/*"EventInfoJobOpenQuestInfoDialog"*/, 0) )
          goto LABEL_123;
        Instance = (__int64)this->fields.__4__this;
        if ( !Instance )
          goto LABEL_129;
        if ( !EventTutorialEntity__TryGetJobOpenQuestDialogInfo(
                (EventTutorialEntity_o *)Instance,
                (System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o **)(v34 + 32),
                (EventDetailEntity_o *)entity,
                v161) )
        {
LABEL_123:
          v81 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v162 = *v41;
          v82 = (System_Action_object__o *)sub_2213CCC(System_Action_EventCommonImageDialog__TypeInfo);
          System_Action_object____ctor(
            v82,
            v162,
            Method_EventTutorialEntity___c__DisplayClass25_1__OpenTutorial_b__9__,
            0);
          v85 = *v41;
          if ( !*v41 || !v81 )
            goto LABEL_129;
          v86 = &Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___;
          goto LABEL_126;
        }
        v146 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v147 = (System_Action_object__o *)sub_2213CCC(System_Action_EventInfoJobOpenQuestInfoDialog__TypeInfo);
        System_Action_object____ctor(
          v147,
          (Il2CppObject *)v34,
          Method_EventTutorialEntity___c__DisplayClass25_3__OpenTutorial_b__8__,
          0);
        v150 = *(_QWORD *)(v34 + 40);
        if ( !v150 || !v146 )
          goto LABEL_129;
        v151 = &Method_CommonUI_LoadAndCreateDialog_EventInfoJobOpenQuestInfoDialog___;
      }
    }
    klass = *(System_Action_o **)(v150 + 16);
    v125 = (const MethodInfo_3820784 *)*v151;
    v123 = (CommonUI_o *)v146;
    v159 = v47;
    v157 = v48;
    v158 = (System_Action_T__o *)v147;
LABEL_128:
    CommonUI__LoadAndCreateDialog_object_(v123, v159, v157, v158, klass, v125);
    return;
  }
  v26 = *v14;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v28, v29, v30, v31, v32, v33);
  }
  EventTutorialEntity__TextTutorialChain(_4__this, 0, v26, _9__4, v21);
}


void EventTutorialEntity___c__DisplayClass25_0___OpenTutorial_b__13(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5970B3A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5970B3A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
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
      sub_2213CDC(_4__this, action);
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
  NetworkManager_ResultCallbackFunc_o *_9__13; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct EventTutorialEntity_o *v12; // x8

  v3 = this;
  if ( (byte_5970B39 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventTutorialEntity___c__DisplayClass25_0_o *)sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__13__);
    byte_5970B39 = 1;
  }
  if ( v3->fields.isNoRequestTutorialFlag )
  {
    _4__this = v3->fields.__4__this;
    if ( _4__this )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(_4__this->fields.eventId, _4__this->fields.flagType, v2);
      this = (EventTutorialEntity___c__DisplayClass25_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( this )
      {
        MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
        ActionExtensions__Call(v3->fields.callback, 0);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
  _9__13 = v3->fields.__9__13;
  if ( !_9__13 )
  {
    _9__13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__13,
      (Il2CppObject *)v3,
      Method_EventTutorialEntity___c__DisplayClass25_0__OpenTutorial_b__13__,
      0);
    v3->fields.__9__13 = _9__13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__13, (int32_t)_9__13, v6, v7, v8, v9, v10, v11);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  this = (EventTutorialEntity___c__DisplayClass25_0_o *)NetworkManager__getRequest_object_(
                                                          _9__13,
                                                          (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  _BOOL4 isNoRequestTutorialFlag; // w8
  struct EventTutorialEntity_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  struct EventTutorialEntity_o *v19; // x8

  if ( (byte_5970B38 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass25_2__OpenTutorial_b__5__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass25_2_TypeInfo);
    byte_5970B38 = 1;
  }
  v5 = sub_2213CCC(EventTutorialEntity___c__DisplayClass25_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  isNoRequestTutorialFlag = this->fields.isNoRequestTutorialFlag;
  *(_DWORD *)(v5 + 16) = questId;
  if ( isNoRequestTutorialFlag )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(_4__this->fields.eventId, _4__this->fields.flagType, v14);
      return;
    }
LABEL_12:
    sub_2213CDC(Request_object, v7);
  }
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass25_2__OpenTutorial_b__5__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  v19 = this->fields.__4__this;
  if ( !v19 || !Request_object )
    goto LABEL_12;
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    v19->fields.flagType,
    v19->fields.eventId,
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

  if ( (byte_5970B3B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970B3B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, dialog);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_596D269 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D269 = 1;
  }
  DispDialogEntityFromQuestId = (ImagePartsGroupEntity_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
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
    sub_2213CDC(DispDialogEntityFromQuestId, v5);
  }
  EventInfoSkillGetDialog__Open(dialog, _4__this->fields.eventId, v8, this->fields.action, 0);
}


void EventTutorialEntity___c__DisplayClass25_1___OpenTutorial_b__9(
        EventTutorialEntity___c__DisplayClass25_1_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  if ( !dialog )
    sub_2213CDC(this, 0);
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

  if ( (byte_5970B3C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970B3C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, result);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_2213CDC(Master_object, v5);
  }
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)Master_object, this->fields.questId, v9);
}


void EventTutorialEntity___c__DisplayClass25_3___ctor(
        EventTutorialEntity___c__DisplayClass25_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_3___OpenTutorial_b__7(
        EventTutorialEntity___c__DisplayClass25_3_o *this,
        EventInfoJobSkillGetDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x8

  if ( !dialog || (EventInfoJobSkillGetDialog__Init(dialog, 0), (CS___8__locals3 = this->fields.CS___8__locals3) == 0) )
    sub_2213CDC(this, dialog);
  EventInfoJobSkillGetDialog__Open(
    dialog,
    this->fields.jobSkillEntity,
    this->fields.jobSkillLvEntity,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass25_3___OpenTutorial_b__8(
        EventTutorialEntity___c__DisplayClass25_3_o *this,
        EventInfoJobOpenQuestInfoDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x8

  if ( !dialog
    || (EventInfoJobOpenQuestInfoDialog__Init(dialog, 0), (CS___8__locals3 = this->fields.CS___8__locals3) == 0) )
  {
    sub_2213CDC(this, dialog);
  }
  EventInfoJobOpenQuestInfoDialog__Open(dialog, this->fields.questDisplayDataList, CS___8__locals3->fields.action, 0);
}


void EventTutorialEntity___c__DisplayClass25_4___ctor(
        EventTutorialEntity___c__DisplayClass25_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_5___ctor(
        EventTutorialEntity___c__DisplayClass25_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_5___OpenTutorial_b__10(
        EventTutorialEntity___c__DisplayClass25_5_o *this,
        EventEquipSkillPartsAddPartsDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_4_o *CS___8__locals5; // x8
  struct EventTutorialEntity___c__DisplayClass25_3_o *CS___8__locals4; // x8
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x9
  struct EventTutorialEntity___c__DisplayClass25_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x8

  CS___8__locals5 = this->fields.CS___8__locals5;
  if ( !CS___8__locals5
    || (CS___8__locals4 = CS___8__locals5->fields.CS___8__locals4) == 0
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0
    || (CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || !dialog )
  {
    sub_2213CDC(this, dialog);
  }
  EventEquipSkillPartsAddPartsDialog__Open(
    dialog,
    _4__this->fields.eventId,
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


void EventTutorialEntity___c__DisplayClass25_6___OpenTutorial_b__11(
        EventTutorialEntity___c__DisplayClass25_6_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_4_o *CS___8__locals6; // x8
  struct EventTutorialEntity___c__DisplayClass25_3_o *CS___8__locals4; // x9
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x9

  CS___8__locals6 = this->fields.CS___8__locals6;
  if ( !CS___8__locals6
    || (CS___8__locals4 = CS___8__locals6->fields.CS___8__locals4) == 0
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0
    || !dialog )
  {
    sub_2213CDC(this, dialog);
  }
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals6->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass25_7___ctor(
        EventTutorialEntity___c__DisplayClass25_7_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass25_7___OpenTutorial_b__12(
        EventTutorialEntity___c__DisplayClass25_7_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass25_4_o *CS___8__locals7; // x8
  struct EventTutorialEntity___c__DisplayClass25_3_o *CS___8__locals4; // x9
  struct EventTutorialEntity___c__DisplayClass25_1_o *CS___8__locals3; // x9

  CS___8__locals7 = this->fields.CS___8__locals7;
  if ( !CS___8__locals7
    || (CS___8__locals4 = CS___8__locals7->fields.CS___8__locals4) == 0
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0
    || !dialog )
  {
    sub_2213CDC(this, dialog);
  }
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals7->fields.eventEquipSkillPartsEntityList,
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


EventJobCautionComponent_JobFreeQuestDisplayData_o *EventTutorialEntity___c__DisplayClass27_0___TryGetJobOpenQuestDialogInfo_b__0(
        EventTutorialEntity___c__DisplayClass27_0_o *this,
        QuestEntity_o *entity,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass27_0_o *v4; // x19
  __int64 v5; // x1
  long double v6; // q0
  System_Int32_array *JobDialogItemIds; // x20
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_String_o *JobDialogQuestLevel; // x21
  EventTutorialEntity___c__DisplayClass27_0_o *v13; // x22
  EventTutorialEntity___c__DisplayClass27_0_o *v14; // x23
  int32_t v15; // w25
  struct EventTutorialEntity_o *_4__this; // x8
  int32_t maxLv; // w24
  struct EventTutorialEntity_o *v18; // x8
  int32_t value; // w26
  int32_t calcType; // w27
  int32_t maxBonusValue; // w25
  struct EventTutorialEntity_o *v22; // x8
  EventJobCautionComponent_JobFreeQuestDisplayData_o *v23; // x19
  EventJobPointBonusEntity_o *v25; // [xsp+10h] [xbp-70h] BYREF
  EventJobPointBonusEntity_o *v26; // [xsp+18h] [xbp-68h] BYREF
  EventJobEntity_o *v27; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *entitya; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_5970B3D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    this = (EventTutorialEntity___c__DisplayClass27_0_o *)sub_2213A60(&EventJobCautionComponent_JobFreeQuestDisplayData_TypeInfo);
    byte_5970B3D = 1;
  }
  v27 = 0;
  entitya = 0;
  v25 = 0;
  v26 = 0;
  if ( !entity )
    goto LABEL_43;
  this = (EventTutorialEntity___c__DisplayClass27_0_o *)v4->fields.questExtensionMaster;
  if ( !this )
    goto LABEL_43;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entitya,
    entity->fields.id,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
  if ( !entitya
    || (JobDialogItemIds = QuestExtensionEntity__GetJobDialogItemIds((QuestExtensionEntity_o *)entitya, 0)) == 0 )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v6);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10, v5);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v6);
    JobDialogItemIds = **(System_Int32_array ***)(v11 + 184);
  }
  if ( !entitya
    || (JobDialogQuestLevel = QuestExtensionEntity__GetJobDialogQuestLevel((QuestExtensionEntity_o *)entitya, 0)) == 0 )
  {
    JobDialogQuestLevel = **(System_String_o ***)(qword_5984390 + 184);
  }
  this = (EventTutorialEntity___c__DisplayClass27_0_o *)QuestEntity__getQuestName(entity, 0);
  v13 = this;
  v14 = **(EventTutorialEntity___c__DisplayClass27_0_o ***)(qword_5984390 + 184);
  if ( entitya )
  {
    this = (EventTutorialEntity___c__DisplayClass27_0_o *)QuestExtensionEntity__GetJobId(
                                                            (QuestExtensionEntity_o *)entitya,
                                                            0);
    v15 = (int)this;
  }
  else
  {
    v15 = 0;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_43;
  this = (EventTutorialEntity___c__DisplayClass27_0_o *)v4->fields.eventJobMaster;
  if ( !this )
    goto LABEL_43;
  if ( EventJobMaster__TryGetEntity((EventJobMaster_o *)this, &v27, _4__this->fields.eventId, v15, 0) )
  {
    this = (EventTutorialEntity___c__DisplayClass27_0_o *)v27;
    if ( v27 )
    {
      this = (EventTutorialEntity___c__DisplayClass27_0_o *)EventJobEntity__GetJobListSecretName(v27, 0);
      if ( v27 )
      {
        v13 = this;
        maxLv = v27->fields.maxLv;
        this = (EventTutorialEntity___c__DisplayClass27_0_o *)EventJobEntity__GetJobListSkillName(v27, 0);
        v18 = v4->fields.__4__this;
        if ( v18 )
        {
          if ( v27 )
          {
            v14 = this;
            this = (EventTutorialEntity___c__DisplayClass27_0_o *)v4->fields.eventJobPointBonusMaster;
            if ( this )
            {
              this = (EventTutorialEntity___c__DisplayClass27_0_o *)EventJobPointBonusMaster__TryGetEntity(
                                                                      (EventJobPointBonusMaster_o *)this,
                                                                      &v26,
                                                                      v18->fields.eventId,
                                                                      v15,
                                                                      v27->fields.minLv + 1,
                                                                      0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v26 )
                  goto LABEL_43;
                calcType = v26->fields.calcType;
                value = v26->fields.value;
              }
              else
              {
                value = 0;
                calcType = 0;
              }
              v22 = v4->fields.__4__this;
              if ( v22 )
              {
                if ( v27 )
                {
                  this = (EventTutorialEntity___c__DisplayClass27_0_o *)v4->fields.eventJobPointBonusMaster;
                  if ( this )
                  {
                    this = (EventTutorialEntity___c__DisplayClass27_0_o *)EventJobPointBonusMaster__TryGetEntity(
                                                                            (EventJobPointBonusMaster_o *)this,
                                                                            &v25,
                                                                            v22->fields.eventId,
                                                                            v15,
                                                                            v27->fields.maxLv,
                                                                            0);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      maxBonusValue = 0;
                      goto LABEL_42;
                    }
                    if ( v25 )
                    {
                      maxBonusValue = v25->fields.value;
                      goto LABEL_42;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    sub_2213CDC(this, entity);
  }
  maxLv = 0;
  maxBonusValue = 0;
  value = 0;
  calcType = 0;
LABEL_42:
  v23 = (EventJobCautionComponent_JobFreeQuestDisplayData_o *)sub_2213CCC(EventJobCautionComponent_JobFreeQuestDisplayData_TypeInfo);
  EventJobCautionComponent_JobFreeQuestDisplayData___ctor(
    v23,
    (System_String_o *)v13,
    (System_String_o *)v14,
    JobDialogQuestLevel,
    maxLv,
    JobDialogItemIds,
    calcType,
    value,
    maxBonusValue,
    0);
  return v23;
}


void EventTutorialEntity___c__DisplayClass29_0___ctor(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass29_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5970B3E & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5970B3E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass29_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5970B3F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5970B3F = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass31_0___ctor(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass31_0_o *v4; // x20
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v8; // x8
  System_String_o *text; // x21
  System_Action_o *_9__5; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v4 = this;
  if ( (byte_5970B40 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass31_0_o *)sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__5__);
    byte_5970B40 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_2213CE4(this);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_11;
  text = v8->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass31_0__TextTutorialChain_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v11, v12, v13, v14, v15, v16);
  }
  if ( !dialog )
LABEL_11:
    sub_2213CDC(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_47A29F8 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_5970B41 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass31_1__TextTutorialChain_b__8__);
    sub_2213A60(&EventTutorialEntity___c__DisplayClass31_1_TypeInfo);
    byte_5970B41 = 1;
  }
  v5 = sub_2213CCC(EventTutorialEntity___c__DisplayClass31_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass31_1__TextTutorialChain_b__8__,
          0),
        !Instance) )
  {
    sub_2213CDC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37373868((CommonUI_o *)Instance, v16, 0);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass31_1___ctor(
        EventTutorialEntity___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass31_1___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass31_1_o *v2; // x19
  struct EventTutorialEntity___c__DisplayClass31_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  const MethodInfo *v9; // x4
  struct EventTutorialEntity___c__DisplayClass31_0_o *v10; // x8

  v2 = this;
  if ( (byte_5970B42 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass31_1_o *)sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5970B42 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_15;
  idx = CS___8__locals1->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_2213CE4(this);
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_15;
  questId = v7->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass31_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_15;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0);
  v10 = v2->fields.CS___8__locals1;
  if ( v2->fields.isDecide )
  {
    if ( v10 )
    {
      ActionExtensions__Call_int_(
        (System_Action_T__o *)v10->fields.transitionQuest,
        questId,
        (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
      return;
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
  if ( !v10 )
    goto LABEL_15;
  this = (EventTutorialEntity___c__DisplayClass31_1_o *)v10->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    v9);
}


void EventTutorialEntity___c__DisplayClass49_0___ctor(
        EventTutorialEntity___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass49_0___PlayScript_b__0(
        EventTutorialEntity___c__DisplayClass49_0_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x1
  CommonUI_o *v6; // x20
  float ScriptFadeInTime; // s8
  System_Action_o *_9__1; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5970B43 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventTutorialEntity___c__DisplayClass49_0__PlayScript_b__1__);
    byte_5970B43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this->fields.__4__this )
    goto LABEL_8;
  v6 = (CommonUI_o *)Instance;
  ScriptFadeInTime = EventTutorialEntity__GetScriptFadeInTime(this->fields.__4__this, v5);
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass49_0__PlayScript_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_8:
    sub_2213CDC(Instance, v5);
  CommonUI__maskFadein(v6, ScriptFadeInTime, _9__1, 0);
}


void EventTutorialEntity___c__DisplayClass49_0___PlayScript_b__1(
        EventTutorialEntity___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  struct System_String_o **p_bgmName; // x20
  System_String_o *bgmName; // x21
  System_String_o *MainBgmName; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5970B44 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970B44 = 1;
  }
  p_bgmName = &this->fields.bgmName;
  bgmName = this->fields.bgmName;
  if ( !bgmName )
  {
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    MainBgmName = BgmManager__GetMainBgmName(0, 0);
    *p_bgmName = MainBgmName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bgmName,
      (int32_t)MainBgmName,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    bgmName = *p_bgmName;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playBgm(bgmName, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}