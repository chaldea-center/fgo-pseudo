void EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F43 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C56F43 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4C56F42 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C56F42 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_30F8088 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventTutorialEntity__CreatePrimaryKey(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *EventTutorialEntity__GetAfterActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F3C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16729/*"afterActionVals"*/);
    byte_4C56F3C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16729/*"afterActionVals"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C56F3D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17139/*"beforeActionSetup"*/);
    byte_4C56F3D = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17139/*"beforeActionSetup"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F3B & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17140/*"beforeActionVals"*/);
    byte_4C56F3B = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17140/*"beforeActionVals"*/, 0);
}


System_String_o *EventTutorialEntity__GetDialogPrefabName(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F40 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_18631/*"dialogPrefabName"*/);
    byte_4C56F40 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18631/*"dialogPrefabName"*/, 0, 0);
}


System_Int32_array *EventTutorialEntity__GetOnceDailyDispTutorialResetTime(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C56F41 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_9980/*"OnceDailyDispResetTime"*/);
    byte_4C56F41 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_9980/*"OnceDailyDispResetTime"*/, 0, 0);
}


int32_t EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F3F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_23105/*"resumeTransitionWar"*/);
    byte_4C56F3F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23105/*"resumeTransitionWar"*/, 0, 0);
}


bool EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F39 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16729/*"afterActionVals"*/);
    byte_4C56F39 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16729/*"afterActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F38 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17140/*"beforeActionVals"*/);
    byte_4C56F38 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17140/*"beforeActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeSetUpAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F3A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_17139/*"beforeActionSetup"*/);
    byte_4C56F3A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17139/*"beforeActionSetup"*/, 0);
}


bool EventTutorialEntity__HasFlag(EventTutorialEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & (unsigned __int64)flag) != 0;
}


bool EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56F3E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_23105/*"resumeTransitionWar"*/);
    byte_4C56F3E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23105/*"resumeTransitionWar"*/, 0);
}


bool EventTutorialEntity__IsBlankEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  int32_t openType; // w8
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x20
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x0

  if ( (byte_4C56F37 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4C56F37 = 1;
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
           (const MethodInfo_3116DF0 *)Method_System_Linq_Enumerable_Contains_string___) )
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


void EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  MissionNotifyManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  System_Action_object__o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_object__o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  ActionChain_o *v22; // x21
  __int64 v23; // x20
  System_Action_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C56F32 & 1) == 0 )
  {
    sub_1C3E564(&ActionChain_TypeInfo);
    sub_1C3E564(&System_Action___TypeInfo);
    sub_1C3E564(&System_Action_Action____TypeInfo);
    sub_1C3E564(&System_Action_Action__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__0__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__1__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__2__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__3__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_0_TypeInfo);
    byte_4C56F32 = 1;
  }
  v5 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)callback, v10, v11);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause(Instance, 0);
  *(_BYTE *)(v5 + 24) = (this->fields.flag & 4) != 0;
  v12 = sub_1C3E60C(System_Action_Action____TypeInfo, 3);
  v13 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__0__,
    0);
  if ( !v12 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v12 + 32) = v13;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v13, v14, v15);
  v16 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__1__,
    0);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v12 + 40) = v16;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 40), (int32_t)v16, v17, v18);
  v19 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__2__,
    0);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v12 + 48) = v19;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 48), (int32_t)v19, v20, v21);
  v22 = (ActionChain_o *)sub_1C3E7B0(ActionChain_TypeInfo);
  ActionChain___ctor_49114212(v22, (System_Action_Action__array *)v12, 0);
  v23 = sub_1C3E60C(System_Action___TypeInfo, 1);
  v24 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__3__,
    0);
  if ( !v23 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v23 + 24) )
LABEL_15:
    sub_1C3E7C8(Instance, v7);
  *(_QWORD *)(v23 + 32) = v24;
  sub_1C3E508((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v24, v25, v26);
  if ( !v22
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v22,
                                               (System_Action_array *)v23,
                                               0)) == 0 )
  {
LABEL_14:
    sub_1C3E7C0(Instance, v7);
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
  const MethodInfo *v9; // x3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v11; // x0
  System_Int32_array *v12; // x19
  CommonUI_o *v13; // x21
  System_Action_o *v14; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v16; // x21
  System_Action_int__o *v17; // x20
  const MethodInfo *v18; // x4

  if ( (byte_4C56F34 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity_TransitionQuest__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass18_0__OpenTutorialWithoutFlag_b__0__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass18_0__OpenTutorialWithoutFlag_b__1__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass18_0_TypeInfo);
    byte_4C56F34 = 1;
  }
  v5 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = this->fields.imageIds;
    v13 = (CommonUI_o *)v11;
    v14 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass18_0__OpenTutorialWithoutFlag_b__0__,
      0);
    if ( v13 )
    {
      CommonUI__OpenTutorialImageDialog_31264708(v13, v12, -1, 0, v14, 0, 0, 0, 0);
      return;
    }
LABEL_14:
    sub_1C3E7C0(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass18_0__OpenTutorialWithoutFlag_b__1__,
      0);
    v17 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
    System_Action_int____ctor(v17, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0);
    EventTutorialEntity__TextTutorialChain(this, 0, v16, v17, v18);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  if ( (byte_4C56F33 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C56F33 = 1;
  }
  if ( isAfter )
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetAfterActionVals(this, (const MethodInfo *)isAfter);
  else
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetBeforeActionVals(this, (const MethodInfo *)isAfter);
  v8 = (System_String_array *)v7;
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
    ActionExtensions__Call(callback, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v10);
  QuestAfterAction__PlaySpecifiedAction((QuestAfterAction_o *)Instance, v8, callback, 0);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  unsigned int v19; // w9
  unsigned int max_length; // w10
  EventTutorialEntity_TextTuto_o *v21; // x10
  int32_t commonReleaseId; // w22
  EventTutorialEntity_TextTuto_o *v23; // x8
  struct System_Int32_array *textPos; // x9
  float v25; // s9
  il2cpp_array_size_t v26; // x10
  char v27; // w27
  float v28; // s10
  float v29; // s8
  struct System_Int32_array *ptPos; // x9
  il2cpp_array_size_t v31; // x10
  float v32; // s11
  System_String_o *scrDlgTitle; // x23
  int spacingY; // w24
  System_Collections_ICollection_o *presentClassScoreResetItemIdList; // x22
  struct EventTutorialEntity_TextTuto_array *v36; // x8
  __int64 v37; // x9
  EventTutorialEntity_TextTuto_o *v38; // x8
  Il2CppObject *Instance; // x19
  System_Action_object__o *v40; // x21
  struct EventTutorialEntity_TextTuto_array *v41; // x8
  __int64 v42; // x9
  EventTutorialEntity_TextTuto_o *v43; // x8
  System_String_o *v44; // x21
  CommonUI_o *v45; // x19
  System_Action_o *v46; // x22
  System_Int32_array *releaseClassBoardBaseIds; // x22
  System_Int32_array *addClassIds; // x21
  int32_t v49; // w22
  CommonUI_o *v50; // x19
  System_Action_o *v51; // x23
  struct EventTutorialEntity_TextTuto_array *v52; // x8
  __int64 v53; // x9
  EventTutorialEntity_TextTuto_o *v54; // x8
  int32_t v55; // w21
  struct EventTutorialEntity_TextTuto_array *v56; // x8
  __int64 v57; // x9
  EventTutorialEntity_TextTuto_o *v58; // x8
  CommonUI_o *v59; // x22
  System_String_o *text; // x23
  System_String_o *Empty; // x24
  System_String_o *v62; // x25
  System_String_o *v63; // x26
  CommonConfirmDialog_ClickDelegate_o *v64; // x27
  struct EventTutorialEntity_TextTuto_array *v65; // x8
  __int64 v66; // x9
  EventTutorialEntity_TextTuto_o *v67; // x8
  Il2CppObject *v68; // x19
  System_Action_o *v69; // x21
  float v70; // s8
  UnityEngine_Object_o *SceneRootComponent_object; // x21
  float *monitor; // x8
  Il2CppObject *v73; // x21
  System_Action_o *v74; // x23
  Il2CppObject *v75; // x0
  int32_t eventId; // w19
  SelectBonusBaseMaster_o *v77; // x21
  System_Action_o *v78; // x22
  struct EventTutorialEntity_TextTuto_array *v79; // x8
  __int64 v80; // x9
  EventTutorialEntity_TextTuto_o *v81; // x8
  System_String_o *title; // x23
  System_String_o *v83; // x24
  CommonUI_o *v84; // x22
  System_Action_o *v85; // x25
  struct EventTutorialEntity_TextTuto_array *v86; // x8
  __int64 v87; // x9
  EventTutorialEntity_TextTuto_o *v88; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v90; // x10
  int MasterName_k__BackingField; // w9
  UnityEngine_Rect_array *v92; // x22
  int v93; // w8
  bool v94; // w11
  __int64 v95; // x12
  EventTutorialEntity_TextTuto_o *v96; // x10
  struct EventTutorialEntity_RectData_array *v97; // x10
  int v98; // w12
  int32x4_t *v99; // x10
  int32_t v100; // w23
  struct EventTutorialEntity_TextTuto_array *v101; // x8
  __int64 v102; // x9
  EventTutorialEntity_TextTuto_o *v103; // x8
  int32_t v104; // w25
  struct EventTutorialEntity_TextTuto_array *v105; // x8
  __int64 v106; // x9
  EventTutorialEntity_TextTuto_o *v107; // x8
  System_String_o *v108; // x23
  System_String_o *v109; // x24
  CommonUI_o *v110; // x22
  System_Action_o *v111; // x26
  struct EventTutorialEntity_TextTuto_array *v112; // x8
  __int64 v113; // x9
  EventTutorialEntity_TextTuto_o *v114; // x8
  int32_t dlgFontSize; // w19
  System_Nullable_int__o p_messageWidgetSizeX; // x0
  struct EventTutorialEntity_TextTuto_array *v117; // x8
  __int64 v118; // x9
  EventTutorialEntity_TextTuto_o *v119; // x8
  struct EventTutorialEntity_TextTuto_array *v120; // x8
  __int64 v121; // x9
  EventTutorialEntity_TextTuto_o *v122; // x8
  System_String_o *v123; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v125; // x19
  System_Action_o *v126; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector2_o v128; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v129; // 0:s2.4,4:s3.4,8:s4.4

  while ( 1 )
  {
    v5 = transitionQuest;
    v6 = callback;
    v7 = idx;
    v8 = this;
    if ( (byte_4C56F36 & 1) == 0 )
    {
      sub_1C3E564(&System_Action_FortificationNotifyDialog__TypeInfo);
      sub_1C3E564(&System_Action_TypeInfo);
      sub_1C3E564(&Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
      sub_1C3E564(&CommonConfirmDialog_ClickDelegate_TypeInfo);
      sub_1C3E564(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      sub_1C3E564(&Method_DataManager_GetMaster_CommonReleaseMaster___);
      sub_1C3E564(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
      sub_1C3E564(&DataManager_TypeInfo);
      sub_1C3E564(&LocalizationManager_TypeInfo);
      sub_1C3E564(&Method_System_Nullable_int___ctor__);
      sub_1C3E564(&UnityEngine_Object_TypeInfo);
      sub_1C3E564(&UnityEngine_Rect___TypeInfo);
      sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1C3E564(&string_TypeInfo);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__0__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__10__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__11__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__1__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__2__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__3__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__4__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__6__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__7__);
      sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__9__);
      sub_1C3E564(&EventTutorialEntity___c__DisplayClass20_0_TypeInfo);
      sub_1C3E564(&StringLiteral_10904/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
      sub_1C3E564(&StringLiteral_21216/*"left"*/);
      sub_1C3E564(&StringLiteral_6273/*"EventUI/Prefabs/80400"*/);
      sub_1C3E564(&StringLiteral_6837/*"FortificationNotifyDialog"*/);
      sub_1C3E564(&StringLiteral_23136/*"right"*/);
      sub_1C3E564(&StringLiteral_10905/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
      byte_4C56F36 = 1;
    }
    v9 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass20_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_130;
    *(_QWORD *)(v9 + 16) = v8;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v8, v12, v13);
    *(_DWORD *)(v9 + 24) = v7;
    *(_QWORD *)(v9 + 32) = v6;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v6, v14, v15);
    *(_QWORD *)(v9 + 40) = v5;
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v5, v16, v17);
    textJson = v8->fields.textJson;
    if ( !textJson )
      goto LABEL_130;
    v19 = *(_DWORD *)(v9 + 24);
    max_length = textJson->max_length;
    if ( (int)v19 >= (int)max_length )
      goto LABEL_49;
    if ( v19 >= max_length )
      goto LABEL_131;
    v21 = textJson->m_Items[v19];
    if ( !v21 )
      goto LABEL_130;
    commonReleaseId = v21->fields.commonReleaseId;
    if ( commonReleaseId < 1 )
      goto LABEL_15;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
  v19 = *(_DWORD *)(v9 + 24);
LABEL_15:
  if ( v19 >= LODWORD(textJson->max_length) )
    goto LABEL_131;
  v23 = textJson->m_Items[v19];
  if ( !v23 )
    goto LABEL_130;
  textPos = v23->fields.textPos;
  v25 = 0.0;
  if ( !textPos )
  {
    v27 = 1;
    goto LABEL_23;
  }
  v26 = textPos->max_length;
  v27 = (_DWORD)v26 == 0;
  if ( !v26 )
  {
LABEL_23:
    v29 = 0.0;
    v28 = 0.0;
    goto LABEL_24;
  }
  if ( (unsigned int)v26 < 2 )
    goto LABEL_131;
  v28 = (float)textPos->m_Items[0];
  v29 = (float)textPos->m_Items[1];
LABEL_24:
  ptPos = v23->fields.ptPos;
  if ( ptPos )
  {
    v31 = ptPos->max_length;
    v32 = 0.0;
    if ( v31 )
    {
      if ( (unsigned int)v31 < 2 )
        goto LABEL_131;
      v32 = (float)ptPos->m_Items[0];
      v25 = (float)ptPos->m_Items[1];
    }
  }
  else
  {
    v32 = 0.0;
  }
  scrDlgTitle = v23->fields.scrDlgTitle;
  spacingY = v23->fields.spacingY;
  presentClassScoreResetItemIdList = (System_Collections_ICollection_o *)v23->fields.presentClassScoreResetItemIdList;
  Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v36 = v8->fields.textJson;
    if ( !v36 )
      goto LABEL_130;
    v37 = *(int *)(v9 + 24);
    if ( (unsigned int)v37 >= LODWORD(v36->max_length) )
      goto LABEL_131;
    v38 = v36->m_Items[v37];
    if ( !v38 )
      goto LABEL_130;
    if ( v38->fields.isFortification )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v40 = (System_Action_object__o *)sub_1C3E7B0(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v40,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6273/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_6837/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v40,
          0,
          (const MethodInfo_30EFF94 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_130:
      sub_1C3E7C0(Master_object, v11);
    }
    if ( v38->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v38->fields.releaseClassBoardBaseIds;
      if ( !releaseClassBoardBaseIds || !releaseClassBoardBaseIds->max_length )
      {
LABEL_49:
        ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0);
        return;
      }
      addClassIds = v38->fields.addClassIds;
      if ( addClassIds && addClassIds->max_length )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LODWORD(releaseClassBoardBaseIds->max_length) )
        {
          v49 = releaseClassBoardBaseIds->m_Items[0];
          v50 = (CommonUI_o *)Master_object;
          v51 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            v51,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__6__,
            0);
          if ( !v50 )
            goto LABEL_130;
          CommonUI__OpenClassBoardAddClassDialog(v50, v49, addClassIds, v51, 0);
          return;
        }
        goto LABEL_131;
      }
      v70 = 0.0;
      if ( v8->fields.openType == 100 )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_130;
        SceneRootComponent_object = (UnityEngine_Object_o *)AvalonSceneManager__GetSceneRootComponent_object_(
                                                              (AvalonSceneManager_o *)Master_object,
                                                              91,
                                                              (const MethodInfo_30E1754 *)Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
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
          v70 = monitor[73];
        }
      }
      v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v74 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v74,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__7__,
        0);
      if ( !v73 )
        goto LABEL_130;
      CommonUI__OpenClassBoardReleaseDialog(
        (CommonUI_o *)v73,
        releaseClassBoardBaseIds,
        v74,
        v8->fields.openType == 100,
        v70,
        0);
    }
    else
    {
      Master_object = (CommonReleaseMaster_o *)BasicHelper__IsNullOrEmpty(presentClassScoreResetItemIdList, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v52 = v8->fields.textJson;
        if ( !v52 )
          goto LABEL_130;
        v53 = *(int *)(v9 + 24);
        if ( (unsigned int)v53 >= LODWORD(v52->max_length) )
          goto LABEL_131;
        v54 = v52->m_Items[v53];
        if ( !v54 )
          goto LABEL_130;
        v55 = spacingY & ~(spacingY >> 31);
        if ( v54->fields.isQuestRelease )
        {
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v56 = v8->fields.textJson;
          if ( !v56 )
            goto LABEL_130;
          v57 = *(int *)(v9 + 24);
          if ( (unsigned int)v57 >= LODWORD(v56->max_length) )
            goto LABEL_131;
          v58 = v56->m_Items[v57];
          if ( !v58 )
            goto LABEL_130;
          v59 = (CommonUI_o *)Master_object;
          text = v58->fields.text;
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10905/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0);
          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10904/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0);
          v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3E7B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v64,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__3__,
            0);
          v65 = v8->fields.textJson;
          if ( !v65 )
            goto LABEL_130;
          v66 = *(int *)(v9 + 24);
          if ( (unsigned int)v66 >= LODWORD(v65->max_length) )
            goto LABEL_131;
          v67 = v65->m_Items[v66];
          if ( !v67 || !v59 )
            goto LABEL_130;
          CommonUI__OpenConfirmDecideDlg(
            v59,
            Empty,
            text,
            v62,
            v63,
            v64,
            v67->fields.dlgFontSize,
            0.0,
            15.0,
            v55,
            0,
            0,
            240,
            0,
            0,
            0,
            0,
            0);
        }
        else if ( v54->fields.isSelectBonus )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v75 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = v8->fields.eventId;
          v77 = (SelectBonusBaseMaster_o *)v75;
          v78 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            v78,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__4__,
            0);
          if ( !v77 )
            goto LABEL_130;
          SelectBonusBaseMaster__OpenSelectBonusDialog(v77, eventId, v78, 0);
        }
        else if ( v54->fields.dlgFontSize < 1 )
        {
          rects = v54->fields.rects;
          if ( !rects )
            goto LABEL_130;
          Master_object = (CommonReleaseMaster_o *)sub_1C3E60C(UnityEngine_Rect___TypeInfo, LODWORD(rects->max_length));
          if ( !Master_object )
            goto LABEL_130;
          v90 = v8->fields.textJson;
          if ( !v90 )
            goto LABEL_130;
          MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
          v92 = (UnityEngine_Rect_array *)Master_object;
          v93 = 1;
          v94 = MasterName_k__BackingField > 0;
          while ( 1 )
          {
            v95 = *(int *)(v9 + 24);
            if ( (unsigned int)v95 >= LODWORD(v90->max_length) )
              goto LABEL_131;
            v96 = v90->m_Items[v95];
            if ( !v96 )
              goto LABEL_130;
            if ( !v94 )
              break;
            v97 = v96->fields.rects;
            if ( !v97 )
              goto LABEL_130;
            v98 = v93 - 1;
            if ( (unsigned int)(v93 - 1) >= LODWORD(v97->max_length) )
              goto LABEL_131;
            v99 = (int32x4_t *)v97->m_Items[v98];
            if ( !v99 )
              goto LABEL_130;
            if ( v98 >= (unsigned int)MasterName_k__BackingField )
              goto LABEL_131;
            *((float32x4_t *)&Master_object->fields.revision + v98) = vcvtq_f32_s32(v99[1]);
            MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
            v90 = v8->fields.textJson;
            v94 = v93++ < MasterName_k__BackingField;
            if ( !v90 )
              goto LABEL_130;
          }
          Master_object = (CommonReleaseMaster_o *)BasicHelper__EqualExceptNullOrEmpty(
                                                     v96->fields.textAlign,
                                                     (System_String_o *)StringLiteral_21216/*"left"*/,
                                                     0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v100 = 1;
          }
          else
          {
            v117 = v8->fields.textJson;
            if ( !v117 )
              goto LABEL_130;
            v118 = *(int *)(v9 + 24);
            if ( (unsigned int)v118 >= LODWORD(v117->max_length) )
              goto LABEL_131;
            v119 = v117->m_Items[v118];
            if ( !v119 )
              goto LABEL_130;
            if ( BasicHelper__EqualExceptNullOrEmpty(v119->fields.textAlign, (System_String_o *)StringLiteral_23136/*"right"*/, 0) )
              v100 = 3;
            else
              v100 = 2;
          }
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v120 = v8->fields.textJson;
          if ( !v120 )
            goto LABEL_130;
          v121 = *(int *)(v9 + 24);
          if ( (unsigned int)v121 >= LODWORD(v120->max_length) )
LABEL_131:
            sub_1C3E7C8(Master_object, v11);
          v122 = v120->m_Items[v121];
          if ( !v122 )
            goto LABEL_130;
          v123 = v122->fields.text;
          dlgBgId = v122->fields.dlgBgId;
          v125 = (CommonUI_o *)Master_object;
          v126 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            v126,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__11__,
            0);
          if ( !v125 )
            goto LABEL_130;
          v129.fields.z = 0.0;
          v128.fields.x = v28;
          v128.fields.y = v29;
          v129.fields.x = v32;
          v129.fields.y = v25;
          CommonUI__OpenEventTutorialNotificationDialog(v125, v123, v92, v128, v129, dlgBgId, v100, v126, 0, v55, 0);
        }
        else
        {
          Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(v54->fields.messageWidgetSizeX, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v79 = v8->fields.textJson;
            if ( !v79 )
              goto LABEL_130;
            v80 = *(int *)(v9 + 24);
            if ( (unsigned int)v80 >= LODWORD(v79->max_length) )
              goto LABEL_131;
            v81 = v79->m_Items[v80];
            if ( !v81 )
              goto LABEL_130;
            title = v81->fields.title;
            v83 = v81->fields.text;
            v84 = (CommonUI_o *)Master_object;
            v85 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
            System_Action___ctor(
              v85,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__9__,
              0);
            v86 = v8->fields.textJson;
            if ( !v86 )
              goto LABEL_130;
            v87 = *(int *)(v9 + 24);
            if ( (unsigned int)v87 >= LODWORD(v86->max_length) )
              goto LABEL_131;
            v88 = v86->m_Items[v87];
            if ( !v88 || !v84 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31239220(
              v84,
              title,
              v83,
              v85,
              v29,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              v88->fields.dlgFontSize,
              0,
              v55,
              v27,
              0,
              0);
          }
          else
          {
            v101 = v8->fields.textJson;
            if ( !v101 )
              goto LABEL_130;
            v102 = *(int *)(v9 + 24);
            if ( (unsigned int)v102 >= LODWORD(v101->max_length) )
              goto LABEL_131;
            v103 = v101->m_Items[v102];
            if ( !v103 )
              goto LABEL_130;
            v104 = System_Int32__Parse(v103->fields.messageWidgetSizeX, 0);
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v105 = v8->fields.textJson;
            if ( !v105 )
              goto LABEL_130;
            v106 = *(int *)(v9 + 24);
            if ( (unsigned int)v106 >= LODWORD(v105->max_length) )
              goto LABEL_131;
            v107 = v105->m_Items[v106];
            if ( !v107 )
              goto LABEL_130;
            v108 = v107->fields.title;
            v109 = v107->fields.text;
            v110 = (CommonUI_o *)Master_object;
            v111 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
            System_Action___ctor(
              v111,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__10__,
              0);
            v112 = v8->fields.textJson;
            if ( !v112 )
              goto LABEL_130;
            v113 = *(int *)(v9 + 24);
            if ( (unsigned int)v113 >= LODWORD(v112->max_length) )
              goto LABEL_131;
            v114 = v112->m_Items[v113];
            if ( !v114 )
              goto LABEL_130;
            dlgFontSize = v114->fields.dlgFontSize;
            p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
            messageWidgetSizeX = 0;
            System_Nullable_int____ctor(
              p_messageWidgetSizeX,
              v104,
              (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
            if ( !v110 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31239220(
              v110,
              v108,
              v109,
              v111,
              v29,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              dlgFontSize,
              0,
              v55,
              v27,
              messageWidgetSizeX,
              0);
          }
        }
      }
      else
      {
        v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v69 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
        System_Action___ctor(
          v69,
          (Il2CppObject *)v9,
          Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__2__,
          0);
        if ( !v68 )
          goto LABEL_130;
        CommonUI__OpenTutorialItemGetDialog(
          (CommonUI_o *)v68,
          (System_Int32_array *)presentClassScoreResetItemIdList,
          v69,
          0);
      }
    }
  }
  else
  {
    Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v41 = v8->fields.textJson;
    if ( !v41 )
      goto LABEL_130;
    v42 = *(int *)(v9 + 24);
    if ( (unsigned int)v42 >= LODWORD(v41->max_length) )
      goto LABEL_131;
    v43 = v41->m_Items[v42];
    if ( !v43 )
      goto LABEL_130;
    v44 = v43->fields.text;
    v45 = (CommonUI_o *)Master_object;
    v46 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__0__,
      0);
    if ( !v45 )
      goto LABEL_130;
    CommonUI__OpenScrollMessageDialog(v45, scrDlgTitle, v44, 10, 0, 0, 0, v46, 1, 0);
  }
}


void EventTutorialEntity__TransitionQuest(EventTutorialEntity_o *this, int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C56F35 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C56F35 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C53D77 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C53D77 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(Instance, v6);
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
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  EventTutorialEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__12_0; // x23
  Il2CppObject *v15; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C56F2F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_ConvertAll_string__int___);
    sub_1C3E564(&System_Converter_string__int__TypeInfo);
    sub_1C3E564(&int_____TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity___c__getTargets_b__12_0__);
    sub_1C3E564(&EventTutorialEntity___c_TypeInfo);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    byte_4C56F2F = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C3E60C(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_1C3E60C(int_____TypeInfo, LODWORD(targetIds->max_length));
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_1C3E7C0(v4, v5);
  v7 = v4;
  v8 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
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
      v4 = System_String__Replace_63683016(
             v4,
             (System_String_o *)StringLiteral_15814/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63683016(
               v4,
               (System_String_o *)StringLiteral_16068/*"]"*/,
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
          _9__12_0 = (System_Converter_object__int__o *)v12->static_fields->__9__12_0;
          if ( !_9__12_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = EventTutorialEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__12_0 = (System_Converter_object__int__o *)sub_1C3E7B0(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__12_0, v15, Method_EventTutorialEntity___c__getTargets_b__12_0__, 0);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__12_0 = (struct System_Converter_string__int__o *)_9__12_0;
            sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v17, v18);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__12_0,
                                    (const MethodInfo_31FD230 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= LODWORD(v7[1].klass) )
LABEL_23:
              sub_1C3E7C8(v4, v5);
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C3E508(p_monitor, (int32_t)v4, v19, v20);
            v6 = this->fields.targetIds;
            ++v8;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
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
  const MethodInfo *v15; // x5
  il2cpp_array_size_t v16; // x8
  int v17; // w9
  System_Int32_array *v18; // x10
  int v19; // w11
  int32_t v20; // w10
  il2cpp_array_size_t v21; // x8
  System_Int32_array *v22; // x9
  il2cpp_array_size_t max_length; // x8
  int v24; // w9
  System_Int32_array *v25; // x10
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  il2cpp_array_size_t v28; // x8
  QuestGroupMaster_o *v29; // x21
  unsigned __int64 v30; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  il2cpp_array_size_t v32; // x8
  int v33; // w9
  System_Int32_array *v34; // x10
  int v35; // w11
  int32_t v36; // w12
  int32_t v37; // w12
  int32_t v38; // w10
  __int64 v39; // x22
  il2cpp_array_size_t v40; // x8
  int v41; // w9
  System_Int32_array *v42; // x10
  int v43; // w11
  int32_t v44; // w12
  int32_t v45; // w10
  TerminalSceneComponent_c *v46; // x0
  UnityEngine_Object_o *mInstance; // x20

  if ( (byte_4C56F31 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C56F31 = 1;
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
      v24 = 0;
      while ( 2 )
      {
        v25 = Targets->m_Items[v24];
        if ( !v25 )
          goto LABEL_120;
        if ( SLODWORD(v25->max_length) >= 1 && v25->m_Items[0] != qId )
        {
          ++v24;
          Instance = 0;
          if ( (_DWORD)max_length == v24 )
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
        v16 = Targets->max_length;
        if ( v16 )
        {
          if ( (int)v16 >= 1 )
          {
            v17 = 0;
            while ( 1 )
            {
              v18 = Targets->m_Items[v17];
              if ( !v18 )
                break;
              v19 = v18->max_length;
              if ( v19 < 1 )
                goto LABEL_4;
              if ( v18->m_Items[0] == qId )
              {
                if ( v19 < 2 )
                  goto LABEL_4;
                v20 = v18->m_Items[1];
                if ( v20 == ex1 || !v20 )
                  goto LABEL_4;
              }
              ++v17;
              Instance = 0;
              if ( (_DWORD)v16 == v17 )
                return Instance;
            }
LABEL_120:
            sub_1C3E7C0(Instance, v11);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (intptr_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v28 = condIds->max_length;
      if ( (int)v28 < 1 )
        goto LABEL_118;
      v29 = (QuestGroupMaster_o *)Instance;
      v30 = 0;
      while ( v30 < (unsigned int)v28 )
      {
        if ( !v29 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v29, condIds->m_Items[v30], 2, 0);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v28) = condIds->max_length;
        ++v30;
        Instance = 0;
        if ( (__int64)v30 >= (int)v28 )
          return Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v32 = Targets->max_length;
      if ( !v32 )
        goto LABEL_4;
      if ( (int)v32 < 1 )
        goto LABEL_118;
      v33 = 0;
      while ( 2 )
      {
        v34 = Targets->m_Items[v33];
        if ( !v34 )
          goto LABEL_120;
        v35 = v34->max_length;
        if ( v35 >= 1 )
        {
          if ( v34->m_Items[0] != qId
            || v35 >= 2
            && ((v36 = v34->m_Items[1], v36 != ex1) && v36
             || v35 >= 3
             && ((v37 = v34->m_Items[2], v37 != ex2) && v37 || v35 >= 4 && (v38 = v34->m_Items[3], v38 != ex3) && v38)) )
          {
            ++v33;
            Instance = 0;
            if ( (_DWORD)v32 == v33 )
              return Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v40 = Targets->max_length;
      if ( !v40 || (int)v40 < 1 )
        goto LABEL_4;
      v41 = 0;
      while ( 2 )
      {
        v42 = Targets->m_Items[v41];
        if ( !v42 )
          goto LABEL_120;
        v43 = v42->max_length;
        if ( v43 < 1 )
          goto LABEL_118;
        if ( v42->m_Items[0] != qId )
          goto LABEL_94;
        if ( v43 < 2 )
          goto LABEL_118;
        v44 = v42->m_Items[1];
        if ( v44 != ex1 )
        {
          if ( v44 )
            goto LABEL_94;
        }
        if ( v43 < 3 )
          goto LABEL_118;
        v45 = v42->m_Items[2];
        Instance = 0;
        if ( v45 != ex2 )
        {
          if ( v45 )
          {
LABEL_94:
            if ( (_DWORD)v40 == ++v41 )
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
      if ( !Targets )
        goto LABEL_4;
      v21 = Targets->max_length;
      if ( !v21 )
        goto LABEL_4;
      if ( (_DWORD)v21 != 1 )
      {
        if ( (int)v21 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return Instance;
        }
        goto LABEL_74;
      }
      v22 = Targets->m_Items[0];
      if ( !v22 )
        goto LABEL_120;
      if ( LODWORD(v22->max_length) != 1 || v22->m_Items[0] )
      {
LABEL_74:
        v39 = 0;
        while ( (unsigned int)v39 < (unsigned int)v21 )
        {
          Instance = (intptr_t)Targets->m_Items[v39];
          if ( !Instance )
            goto LABEL_120;
          if ( *(int *)(Instance + 24) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v21) = Targets->max_length;
          ++v39;
          Instance = 0;
          if ( (int)v39 >= (int)v21 )
            return Instance;
        }
LABEL_121:
        sub_1C3E7C8(Instance, v11);
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
          Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (intptr_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v15);
        }
      }
      return Instance;
    case 0x43:
      if ( !Targets || !Targets->max_length )
        goto LABEL_4;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C50C86 )
      {
        sub_1C3E564(&TerminalSceneComponent_TypeInfo);
        byte_4C50C86 = 1;
      }
      v46 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v46 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v46->static_fields->mInstance;
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

  if ( (byte_4C56F30 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C56F30 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0;
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40510652(flagType, eventId, 0) )
  {
    return 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C54188 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C54188 = 1;
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
      if ( !byte_4C54188 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C54188 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v17->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
      if ( !ForcePlayEventTutorialArray_k__BackingField )
        sub_1C3E7C0(0, v13);
      System_Collections_Generic_HashSet_object___GetEnumerator(
        &v22,
        ForcePlayEventTutorialArray_k__BackingField,
        (const MethodInfo_366D034 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_353F6DC *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_1C3E7C0(0, v19);
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               (System_Collections_Generic_Dictionary_int__int__o *)v22.fields._current,
               this->fields.eventId,
               &value,
               (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__)
          && value == this->fields.flagType )
        {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose(
            &v22,
            (const MethodInfo_353F6D8 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
          return 1;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_353F6D8 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C56F44 & 1) == 0 )
  {
    sub_1C3E564(&EventTutorialEntity___c_TypeInfo);
    byte_4C56F44 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventTutorialEntity___c___getTargets_b__12_0(
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


void EventTutorialEntity___c__DisplayClass16_0___ctor(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( !EventTutorialEntity__HasBeforeAction(_4__this, (const MethodInfo *)action) )
  {
LABEL_5:
    ActionExtensions__Call(action, 0);
    return;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, (const MethodInfo *)action) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1C3E7C0(_4__this, action);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 0, action, v6);
}


void EventTutorialEntity___c__DisplayClass16_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x24
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  struct EventTutorialEntity_o *_4__this; // x19
  struct System_Int32_array *imageIds; // x8
  struct EventTutorialEntity_o *v16; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v18; // x20
  System_Action_int__o *_9__4; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct EventTutorialEntity_o *v22; // x8
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  struct EventTutorialEntity_o *v29; // x8
  char v30; // w22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x26
  System_String_o *DialogPrefabName; // x0
  System_String_o *v34; // x27
  __int64 v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject **v38; // x22
  System_Collections_Generic_List_object__o *v39; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct EventTutorialEntity_o *v42; // x8
  __int64 v43; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct EventTutorialEntity_o *v46; // x8
  struct System_Int32_array *condIds; // x8
  System_Collections_Generic_List_AssistEntity__o *AssistEntityListByShopGroupId; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x21
  System_Action_object__o *v52; // x23
  __int64 v53; // x8
  __int64 v54; // x8
  System_Action_o *klass; // x4
  __int64 *v56; // x8
  CommonUI_o *v57; // x0
  int32_t condType; // w8
  Il2CppObject *Master_object; // x25
  System_String_o *v60; // x20
  int32_t markSprite; // w26
  __int64 v62; // x21
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 *v65; // x22
  __int64 v66; // x25
  EventEquipSkillPartsMaster_o *v67; // x22
  __int64 v68; // x23
  Il2CppObject *v69; // x22
  int32_t v70; // w23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x22
  __int64 v77; // x8
  __int64 v78; // x8
  const MethodInfo_30EFF94 *v79; // x5
  System_String_o *v80; // x1
  System_String_o *v81; // x2
  struct EventTutorialEntity_o *v82; // x8
  __int64 v83; // x24
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x25
  struct EventTutorialEntity_o *v87; // x8
  struct System_Int32_array *v88; // x8
  System_Int32_array *QuestIdListByGroupId; // x23
  System_String_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x21
  System_Action_object__o *v94; // x22
  __int64 v95; // x8
  __int64 v96; // x8
  System_Action_T__o *v97; // x3
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  __int64 v101; // x5
  __int64 v102; // x6
  __int64 v103; // x7
  struct EventTutorialEntity_o *v104; // x8
  CommonUI_o *v105; // x19
  Il2CppObject *v106; // x0
  System_String_o *v107; // x20
  System_String_o *v108; // x0
  Il2CppObject *v109; // x24
  System_String_o *v110; // x21
  int32_t eventId; // [xsp+Ch] [xbp-74h] BYREF
  QuestPhaseEntity_o *v112; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C56F45 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_EventCommonImageDialog__TypeInfo);
    sub_1C3E564(&System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
    sub_1C3E564(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
    sub_1C3E564(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___);
    sub_1C3E564(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___);
    sub_1C3E564(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__4__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_1__OpenTutorial_b__6__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_1_TypeInfo);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_3_TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_4__OpenTutorial_b__7__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_4_TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_5__OpenTutorial_b__8__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_5_TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_6__OpenTutorial_b__9__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_6_TypeInfo);
    sub_1C3E564(&StringLiteral_6214/*"EventEquipSkillPartsRenoCompletionDialog"*/);
    sub_1C3E564(&StringLiteral_5605/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/);
    sub_1C3E564(&StringLiteral_2154/*"AddPartsDialog"*/);
    sub_1C3E564(&StringLiteral_5603/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    sub_1C3E564(&StringLiteral_6274/*"EventUI/Prefabs/{0}"*/);
    sub_1C3E564(&StringLiteral_6215/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/);
    byte_4C56F45 = 1;
  }
  v112 = 0;
  entity = 0;
  v5 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_125;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = action;
  v10 = (System_Action_o **)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)action, v11, v12);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_125;
  imageIds = _4__this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = this->fields.__4__this;
    if ( v16 && Instance )
    {
      CommonUI__OpenTutorialImageDialog_31264708(
        Instance,
        v16->fields.imageIds,
        v16->fields.flagType,
        v16->fields.eventId,
        *v10,
        0,
        0,
        this->fields.isNoRequestTutorialFlag,
        0);
      return;
    }
LABEL_125:
    sub_1C3E7C0(Instance, v7);
  }
  textJson = _4__this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v18 = *v10;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v20, v21);
    }
    EventTutorialEntity__TextTutorialChain(_4__this, 0, v18, _9__4, v13);
    return;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.script, 0) )
    goto LABEL_42;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_125;
  if ( !EventTutorialEntity__GetDialogPrefabName((EventTutorialEntity_o *)Instance, v7) )
  {
LABEL_42:
    ActionExtensions__Call(*v10, 0);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_125;
  if ( !Instance )
    goto LABEL_125;
  Instance = (CommonUI_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v22->fields.eventId,
                             (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_125;
  v30 = (char)Instance;
  eventId = v29->fields.eventId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v23, v24, v25, v26, v27, v28);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6274/*"EventUI/Prefabs/{0}"*/, v31, 0);
  if ( !this->fields.__4__this )
    goto LABEL_125;
  v32 = (System_String_o *)Instance;
  DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v7);
  if ( (v30 & 1) != 0 )
  {
    v34 = DialogPrefabName;
    Instance = (CommonUI_o *)entity;
    if ( !entity )
      goto LABEL_125;
    if ( EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)entity, 0) )
    {
      v35 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v35, 0);
      if ( !v35 )
        goto LABEL_125;
      *(_QWORD *)(v35 + 24) = v5;
      v38 = (Il2CppObject **)(v35 + 24);
      sub_1C3E508((CGThumbnailListItem_o *)(v35 + 24), v5, v36, v37);
      v39 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v39,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
      *(_QWORD *)(v35 + 16) = v39;
      sub_1C3E508((CGThumbnailListItem_o *)(v35 + 16), (int32_t)v39, v40, v41);
      v42 = this->fields.__4__this;
      if ( !v42 )
        goto LABEL_125;
      if ( v42->fields.condType == 67 )
      {
        Instance = (CommonUI_o *)System_String__Equals_63672500(v34, (System_String_o *)StringLiteral_2154/*"AddPartsDialog"*/, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v43 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v43, 0);
          if ( !v43 )
            goto LABEL_125;
          *(_QWORD *)(v43 + 24) = v35;
          sub_1C3E508((CGThumbnailListItem_o *)(v43 + 24), v35, v44, v45);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_AssistMaster___);
          v46 = this->fields.__4__this;
          if ( !v46 )
            goto LABEL_125;
          condIds = v46->fields.condIds;
          if ( !condIds )
            goto LABEL_125;
          if ( LODWORD(condIds->max_length) )
          {
            if ( !Instance )
              goto LABEL_125;
            AssistEntityListByShopGroupId = AssistMaster__GetAssistEntityListByShopGroupId(
                                              (AssistMaster_o *)Instance,
                                              condIds->m_Items[0],
                                              0);
            *(_QWORD *)(v43 + 16) = AssistEntityListByShopGroupId;
            sub_1C3E508((CGThumbnailListItem_o *)(v43 + 16), (int32_t)AssistEntityListByShopGroupId, v49, v50);
            v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v52 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
            System_Action_object____ctor(
              v52,
              (Il2CppObject *)v43,
              Method_EventTutorialEntity___c__DisplayClass16_4__OpenTutorial_b__7__,
              0);
            v53 = *(_QWORD *)(v43 + 24);
            if ( !v53 )
              goto LABEL_125;
            v54 = *(_QWORD *)(v53 + 24);
            if ( !v54 || !v51 )
              goto LABEL_125;
            klass = *(System_Action_o **)(v54 + 16);
            v56 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___;
            v57 = (CommonUI_o *)v51;
LABEL_91:
            v79 = (const MethodInfo_30EFF94 *)*v56;
            v80 = v32;
            v81 = v34;
LABEL_123:
            v97 = (System_Action_T__o *)v52;
LABEL_124:
            CommonUI__LoadAndCreateDialog_object_(v57, v80, v81, v97, klass, v79);
            return;
          }
          goto LABEL_126;
        }
        v42 = this->fields.__4__this;
        if ( !v42 )
          goto LABEL_125;
      }
      condType = v42->fields.condType;
      if ( condType != 46 && condType != 1 )
        goto LABEL_92;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C53993 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53993 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      v60 = v32;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      markSprite = (int32_t)Instance->fields.connectMark->fields.markSprite;
      if ( !byte_4C50D66 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        byte_4C50D66 = 1;
      }
      if ( !LODWORD(Instance->fields.dummyErrorSelectDialog) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !Master_object )
        goto LABEL_125;
      Instance = (CommonUI_o *)QuestPhaseMaster__TryGetEntity(
                                 (QuestPhaseMaster_o *)Master_object,
                                 &v112,
                                 markSprite,
                                 LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
                                 0);
      v32 = v60;
      if ( ((unsigned __int8)Instance & 1) == 0
        || (Instance = (CommonUI_o *)System_String__Equals_63672500(v34, (System_String_o *)StringLiteral_6214/*"EventEquipSkillPartsRenoCompletionDialog"*/, 0),
            ((unsigned __int8)Instance & 1) == 0) )
      {
LABEL_92:
        v82 = this->fields.__4__this;
        if ( !v82 )
          goto LABEL_125;
        if ( v82->fields.condType == 51 && System_String__Equals_63672500(v34, (System_String_o *)StringLiteral_6215/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, 0) )
        {
          v83 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_6_TypeInfo);
          System_Object___ctor((Il2CppObject *)v83, 0);
          if ( !v83 )
            goto LABEL_125;
          *(_QWORD *)(v83 + 32) = v35;
          v86 = v83 + 32;
          sub_1C3E508((CGThumbnailListItem_o *)(v83 + 32), v35, v84, v85);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestGroupMaster___);
          v87 = this->fields.__4__this;
          if ( !v87 )
            goto LABEL_125;
          v88 = v87->fields.condIds;
          if ( !v88 )
            goto LABEL_125;
          if ( !LODWORD(v88->max_length) )
            goto LABEL_126;
          if ( !Instance )
            goto LABEL_125;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   v88->m_Items[0],
                                   2,
                                   0);
          if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestIdListByGroupId, 0) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
            if ( !*(_QWORD *)v86 || !Instance )
              goto LABEL_125;
            if ( EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                   (EventEquipSkillPartsMaster_o *)Instance,
                   (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(*(_QWORD *)v86 + 16LL),
                   QuestIdListByGroupId,
                   0,
                   0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_AssistMaster___);
              if ( !Instance )
                goto LABEL_125;
              if ( AssistMaster__TryGetValidAssistEntityList_41823508(
                     (AssistMaster_o *)Instance,
                     (System_Collections_Generic_List_AssistEntity__o **)(v83 + 16),
                     QuestIdListByGroupId,
                     0) )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v90 = LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, 0);
                *(_QWORD *)(v83 + 24) = v90;
                sub_1C3E508((CGThumbnailListItem_o *)(v83 + 24), (int32_t)v90, v91, v92);
                v93 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v94 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
                System_Action_object____ctor(
                  v94,
                  (Il2CppObject *)v83,
                  Method_EventTutorialEntity___c__DisplayClass16_6__OpenTutorial_b__9__,
                  0);
                v95 = *(_QWORD *)(v83 + 32);
                if ( !v95 )
                  goto LABEL_125;
                v96 = *(_QWORD *)(v95 + 24);
                if ( !v96 || !v93 )
                  goto LABEL_125;
                klass = *(System_Action_o **)(v96 + 16);
                v57 = (CommonUI_o *)v93;
                v80 = v32;
                v81 = v34;
                v79 = (const MethodInfo_30EFF94 *)Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
                v97 = (System_Action_T__o *)v94;
                goto LABEL_124;
              }
            }
          }
        }
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v104 = this->fields.__4__this;
        if ( !v104 )
          goto LABEL_125;
        v105 = Instance;
        eventId = v104->fields.eventId;
        v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v98, v99, v100, v101, v102, v103);
        Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6274/*"EventUI/Prefabs/{0}"*/, v106, 0);
        if ( !this->fields.__4__this )
          goto LABEL_125;
        v107 = (System_String_o *)Instance;
        v108 = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v7);
        v109 = *v38;
        v110 = v108;
        v52 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EventCommonImageDialog__TypeInfo);
        System_Action_object____ctor(
          v52,
          v109,
          Method_EventTutorialEntity___c__DisplayClass16_1__OpenTutorial_b__6__,
          0);
        if ( !*v38 || !v105 )
          goto LABEL_125;
        klass = (System_Action_o *)(*v38)[1].klass;
        v57 = v105;
        v80 = v107;
        v81 = v110;
        v79 = (const MethodInfo_30EFF94 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___;
        goto LABEL_123;
      }
      v62 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_5_TypeInfo);
      System_Object___ctor((Il2CppObject *)v62, 0);
      if ( !v62 )
        goto LABEL_125;
      *(_QWORD *)(v62 + 32) = v35;
      v65 = (__int64 *)(v62 + 32);
      sub_1C3E508((CGThumbnailListItem_o *)(v62 + 32), v35, v63, v64);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
      v66 = *v65;
      if ( !*v65 )
        goto LABEL_125;
      v67 = (EventEquipSkillPartsMaster_o *)Instance;
      v68 = sub_1C3E60C(int___TypeInfo, 1);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C53993 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53993 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v68 )
        goto LABEL_125;
      if ( *(_DWORD *)(v68 + 24) )
      {
        *(_DWORD *)(v68 + 32) = Instance->fields.connectMark->fields.markSprite;
        if ( !v67 )
          goto LABEL_125;
        EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
          v67,
          (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(v66 + 16),
          (System_Int32_array *)v68,
          0,
          0);
        v69 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !byte_4C53993 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53993 = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        v70 = (int32_t)Instance->fields.connectMark->fields.markSprite;
        if ( !byte_4C50D66 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          byte_4C50D66 = 1;
        }
        if ( !LODWORD(Instance->fields.dummyErrorSelectDialog) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v69 )
          goto LABEL_125;
        AssistMaster__TryGetValidAssistEntityList(
          (AssistMaster_o *)v69,
          (System_Collections_Generic_List_AssistEntity__o **)(v62 + 24),
          v70,
          LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
          1,
          0);
        Instance = (CommonUI_o *)v112;
        if ( !v112 )
          goto LABEL_125;
        RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(v112, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v72 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
        v73 = System_String__Format(RenoCompletionDialogText, v72, 0);
        *(_QWORD *)(v62 + 16) = v73;
        sub_1C3E508((CGThumbnailListItem_o *)(v62 + 16), (int32_t)v73, v74, v75);
        v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v52 = (System_Action_object__o *)sub_1C3E7B0(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
        System_Action_object____ctor(
          v52,
          (Il2CppObject *)v62,
          Method_EventTutorialEntity___c__DisplayClass16_5__OpenTutorial_b__8__,
          0);
        v77 = *(_QWORD *)(v62 + 32);
        if ( !v77 )
          goto LABEL_125;
        v78 = *(_QWORD *)(v77 + 24);
        if ( !v78 || !v76 )
          goto LABEL_125;
        klass = *(System_Action_o **)(v78 + 16);
        v56 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
        v57 = (CommonUI_o *)v76;
        goto LABEL_91;
      }
LABEL_126:
      sub_1C3E7C8(Instance, v7);
    }
  }
}


void EventTutorialEntity___c__DisplayClass16_0___OpenTutorial_b__10(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C56F48 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C56F48 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass16_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( !EventTutorialEntity__HasAfterAction(_4__this, (const MethodInfo *)action) )
  {
LABEL_5:
    ActionExtensions__Call(action, 0);
    return;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, (const MethodInfo *)action) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1C3E7C0(_4__this, action);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 1, action, v6);
}


void EventTutorialEntity___c__DisplayClass16_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventTutorialEntity___c__DisplayClass16_0_o *v3; // x19
  struct EventTutorialEntity_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *_9__10; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct EventTutorialEntity_o *v8; // x8

  v3 = this;
  if ( (byte_4C56F47 & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    this = (EventTutorialEntity___c__DisplayClass16_0_o *)sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__10__);
    byte_4C56F47 = 1;
  }
  if ( v3->fields.isNoRequestTutorialFlag )
  {
    _4__this = v3->fields.__4__this;
    if ( _4__this )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(_4__this->fields.eventId, _4__this->fields.flagType, v2);
      this = (EventTutorialEntity___c__DisplayClass16_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( this )
      {
        MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
        ActionExtensions__Call(v3->fields.callback, 0);
        return;
      }
    }
LABEL_14:
    sub_1C3E7C0(this, method);
  }
  _9__10 = v3->fields.__9__10;
  if ( !_9__10 )
  {
    _9__10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_EventTutorialEntity___c__DisplayClass16_0__OpenTutorial_b__10__,
      0);
    v3->fields.__9__10 = _9__10;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields.__9__10, (int32_t)_9__10, v6, v7);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (EventTutorialEntity___c__DisplayClass16_0_o *)NetworkManager__getRequest_object_(
                                                          _9__10,
                                                          (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  v8 = v3->fields.__4__this;
  if ( !v8 || !this )
    goto LABEL_14;
  TutorialEventSetRequest__beginRequest((TutorialEventSetRequest_o *)this, v8->fields.flagType, v8->fields.eventId, 0);
}


void EventTutorialEntity___c__DisplayClass16_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass16_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  struct EventTutorialEntity_o *_4__this; // x8
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  struct EventTutorialEntity_o *v13; // x8

  if ( (byte_4C56F46 & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass16_2__OpenTutorial_b__5__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass16_2_TypeInfo);
    byte_4C56F46 = 1;
  }
  v5 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass16_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 16) = questId;
  if ( this->fields.isNoRequestTutorialFlag )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      EventTutorialMaster__SaveOnceDailyDispTutorialTime(_4__this->fields.eventId, _4__this->fields.flagType, v10);
      return;
    }
LABEL_12:
    sub_1C3E7C0(Request_object, v7);
  }
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass16_2__OpenTutorial_b__5__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v12,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  v13 = this->fields.__4__this;
  if ( !v13 || !Request_object )
    goto LABEL_12;
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    v13->fields.flagType,
    v13->fields.eventId,
    0);
}


void EventTutorialEntity___c__DisplayClass16_1___ctor(
        EventTutorialEntity___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_1___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass16_1_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  if ( !dialog )
    sub_1C3E7C0(this, 0);
  EventCommonImageDialog__Open(dialog, this->fields.action, 0);
}


void EventTutorialEntity___c__DisplayClass16_2___ctor(
        EventTutorialEntity___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_2___OpenTutorial_b__5(
        EventTutorialEntity___c__DisplayClass16_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct EventTutorialEntity___c__DisplayClass16_0_o *CS___8__locals2; // x8
  struct EventTutorialEntity_o *_4__this; // x8
  const MethodInfo *v9; // x2
  struct EventTutorialEntity___c__DisplayClass16_0_o *v10; // x8

  if ( (byte_4C56F49 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C56F49 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventTutorialMaster___);
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
    sub_1C3E7C0(Master_object, v5);
  }
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)Master_object, this->fields.questId, v9);
}


void EventTutorialEntity___c__DisplayClass16_3___ctor(
        EventTutorialEntity___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_4___ctor(
        EventTutorialEntity___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_4___OpenTutorial_b__7(
        EventTutorialEntity___c__DisplayClass16_4_o *this,
        EventEquipSkillPartsAddPartsDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass16_3_o *CS___8__locals4; // x8
  struct EventTutorialEntity___c__DisplayClass16_1_o *CS___8__locals3; // x8
  struct EventTutorialEntity___c__DisplayClass16_0_o *CS___8__locals1; // x9
  struct EventTutorialEntity_o *_4__this; // x9

  CS___8__locals4 = this->fields.CS___8__locals4;
  if ( !CS___8__locals4
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0
    || (CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || !dialog )
  {
    sub_1C3E7C0(this, dialog);
  }
  EventEquipSkillPartsAddPartsDialog__Open(
    dialog,
    _4__this->fields.eventId,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass16_5___ctor(
        EventTutorialEntity___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_5___OpenTutorial_b__8(
        EventTutorialEntity___c__DisplayClass16_5_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass16_3_o *CS___8__locals5; // x8
  struct EventTutorialEntity___c__DisplayClass16_1_o *CS___8__locals3; // x9

  CS___8__locals5 = this->fields.CS___8__locals5;
  if ( !CS___8__locals5 || (CS___8__locals3 = CS___8__locals5->fields.CS___8__locals3) == 0 || !dialog )
    sub_1C3E7C0(this, dialog);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals5->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass16_6___ctor(
        EventTutorialEntity___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass16_6___OpenTutorial_b__9(
        EventTutorialEntity___c__DisplayClass16_6_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass16_3_o *CS___8__locals6; // x8
  struct EventTutorialEntity___c__DisplayClass16_1_o *CS___8__locals3; // x9

  CS___8__locals6 = this->fields.CS___8__locals6;
  if ( !CS___8__locals6 || (CS___8__locals3 = CS___8__locals6->fields.CS___8__locals3) == 0 || !dialog )
    sub_1C3E7C0(this, dialog);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals6->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass18_0___ctor(
        EventTutorialEntity___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass18_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C56F4A & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C56F4A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass18_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C56F4B & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C56F4B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass20_0___ctor(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass20_0_o *v4; // x20
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v8; // x8
  System_String_o *text; // x21
  System_Action_o *_9__5; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_4C56F4C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass20_0_o *)sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__5__);
    byte_4C56F4C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_1C3E7C8(this, dialog);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_11;
  text = v8->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass20_0__TextTutorialChain_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !dialog )
LABEL_11:
    sub_1C3E7C0(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4C56F4D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_EventTutorialEntity___c__DisplayClass20_1__TextTutorialChain_b__8__);
    sub_1C3E564(&EventTutorialEntity___c__DisplayClass20_1_TypeInfo);
    byte_4C56F4D = 1;
  }
  v5 = sub_1C3E7B0(EventTutorialEntity___c__DisplayClass20_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass20_1__TextTutorialChain_b__8__,
          0),
        !Instance) )
  {
    sub_1C3E7C0(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31238516((CommonUI_o *)Instance, v11, 0);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass20_1___ctor(
        EventTutorialEntity___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass20_1___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass20_1_o *v2; // x19
  struct EventTutorialEntity___c__DisplayClass20_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  const MethodInfo *v9; // x4
  struct EventTutorialEntity___c__DisplayClass20_0_o *v10; // x8

  v2 = this;
  if ( (byte_4C56F4E & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass20_1_o *)sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C56F4E = 1;
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
    sub_1C3E7C8(this, method);
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_14;
  questId = v7->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass20_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      (const MethodInfo_30462C0 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass20_1_o *)v10->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1C3E7C0(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    v9);
}