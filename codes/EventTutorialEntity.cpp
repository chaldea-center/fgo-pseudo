void EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B9A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37B9A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4C37B99 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C37B99 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventTutorialEntity__CreatePrimaryKey(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *EventTutorialEntity__GetAfterActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B94 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16712/*"afterActionVals"*/);
    byte_4C37B94 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16712/*"afterActionVals"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C37B95 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17121/*"beforeActionSetup"*/);
    byte_4C37B95 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17121/*"beforeActionSetup"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B93 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17122/*"beforeActionVals"*/);
    byte_4C37B93 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17122/*"beforeActionVals"*/, 0);
}


System_String_o *EventTutorialEntity__GetDialogPrefabName(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B98 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18610/*"dialogPrefabName"*/);
    byte_4C37B98 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18610/*"dialogPrefabName"*/, 0, 0);
}


int32_t EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B97 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23082/*"resumeTransitionWar"*/);
    byte_4C37B97 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23082/*"resumeTransitionWar"*/, 0, 0);
}


bool EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B91 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16712/*"afterActionVals"*/);
    byte_4C37B91 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16712/*"afterActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B90 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17122/*"beforeActionVals"*/);
    byte_4C37B90 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17122/*"beforeActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeSetUpAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B92 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17121/*"beforeActionSetup"*/);
    byte_4C37B92 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17121/*"beforeActionSetup"*/, 0);
}


bool EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B96 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23082/*"resumeTransitionWar"*/);
    byte_4C37B96 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23082/*"resumeTransitionWar"*/, 0);
}


bool EventTutorialEntity__IsBlankEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  int32_t openType; // w8
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x20
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x0

  if ( (byte_4C37B8F & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4C37B8F = 1;
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
           (const MethodInfo_30FA694 *)Method_System_Linq_Enumerable_Contains_string___) )
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  System_Action_object__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_object__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ActionChain_o *v21; // x21
  __int64 v22; // x20
  System_Action_o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C37B8A & 1) == 0 )
  {
    sub_1C32C20(&ActionChain_TypeInfo);
    sub_1C32C20(&System_Action___TypeInfo);
    sub_1C32C20(&System_Action_Action____TypeInfo);
    sub_1C32C20(&System_Action_Action__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__0__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__1__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__2__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__3__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_0_TypeInfo);
    byte_4C37B8A = 1;
  }
  v5 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause(Instance, 0);
  v11 = sub_1C32CC8(System_Action_Action____TypeInfo, 3);
  v12 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__0__,
    0);
  if ( !v11 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v11 + 32) = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v12, v13, v14);
  v15 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__1__,
    0);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v11 + 40) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 40), (int32_t)v15, v16, v17);
  v18 = (System_Action_object__o *)sub_1C32E6C(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__2__,
    0);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v11 + 48) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 48), (int32_t)v18, v19, v20);
  v21 = (ActionChain_o *)sub_1C32E6C(ActionChain_TypeInfo);
  ActionChain___ctor_48997860(v21, (System_Action_Action__array *)v11, 0);
  v22 = sub_1C32CC8(System_Action___TypeInfo, 1);
  v23 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__3__,
    0);
  if ( !v22 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v22 + 24) )
LABEL_15:
    sub_1C32E84(Instance);
  *(_QWORD *)(v22 + 32) = v23;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v24, v25);
  if ( !v21
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v21,
                                               (System_Action_array *)v22,
                                               0)) == 0 )
  {
LABEL_14:
    sub_1C32E7C(Instance);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v10; // x0
  System_Int32_array *v11; // x19
  CommonUI_o *v12; // x21
  System_Action_o *v13; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v15; // x21
  System_Action_int__o *v16; // x20
  const MethodInfo *v17; // x4

  if ( (byte_4C37B8C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity_TransitionQuest__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__0__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__1__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass17_0_TypeInfo);
    byte_4C37B8C = 1;
  }
  v5 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = this->fields.imageIds;
    v12 = (CommonUI_o *)v10;
    v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__0__,
      0);
    if ( v12 )
    {
      CommonUI__OpenTutorialImageDialog_31217248(v12, v11, -1, 0, v13, 0, 0, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(Instance);
  }
  textJson = this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v15 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__1__,
      0);
    v16 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
    System_Action_int____ctor(v16, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0);
    EventTutorialEntity__TextTutorialChain(this, 0, v15, v16, v17);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  if ( (byte_4C37B8B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C37B8B = 1;
  }
  if ( isAfter )
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetAfterActionVals(this, (const MethodInfo *)isAfter);
  else
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetBeforeActionVals(this, (const MethodInfo *)isAfter);
  v8 = (System_String_array *)v7;
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
    ActionExtensions__Call(callback, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  unsigned int v18; // w9
  unsigned int max_length; // w10
  EventTutorialEntity_TextTuto_o *v20; // x10
  int32_t commonReleaseId; // w22
  EventTutorialEntity_TextTuto_o *v22; // x8
  struct System_Int32_array *textPos; // x9
  float v24; // s9
  il2cpp_array_size_t v25; // x10
  char v26; // w27
  float v27; // s10
  float v28; // s8
  struct System_Int32_array *ptPos; // x9
  il2cpp_array_size_t v30; // x10
  float v31; // s11
  System_String_o *scrDlgTitle; // x23
  int spacingY; // w24
  System_Collections_ICollection_o *presentClassScoreResetItemIdList; // x22
  struct EventTutorialEntity_TextTuto_array *v35; // x8
  __int64 v36; // x9
  EventTutorialEntity_TextTuto_o *v37; // x8
  Il2CppObject *Instance; // x19
  System_Action_object__o *v39; // x21
  struct EventTutorialEntity_TextTuto_array *v40; // x8
  __int64 v41; // x9
  EventTutorialEntity_TextTuto_o *v42; // x8
  System_String_o *v43; // x21
  CommonUI_o *v44; // x19
  System_Action_o *v45; // x22
  System_Int32_array *releaseClassBoardBaseIds; // x22
  System_Int32_array *addClassIds; // x21
  int32_t v48; // w22
  CommonUI_o *v49; // x19
  System_Action_o *v50; // x23
  struct EventTutorialEntity_TextTuto_array *v51; // x8
  __int64 v52; // x9
  EventTutorialEntity_TextTuto_o *v53; // x8
  int32_t v54; // w21
  struct EventTutorialEntity_TextTuto_array *v55; // x8
  __int64 v56; // x9
  EventTutorialEntity_TextTuto_o *v57; // x8
  CommonUI_o *v58; // x22
  System_String_o *text; // x23
  System_String_o *Empty; // x24
  System_String_o *v61; // x25
  System_String_o *v62; // x26
  CommonConfirmDialog_ClickDelegate_o *v63; // x27
  struct EventTutorialEntity_TextTuto_array *v64; // x8
  __int64 v65; // x9
  EventTutorialEntity_TextTuto_o *v66; // x8
  Il2CppObject *v67; // x19
  System_Action_o *v68; // x21
  float v69; // s8
  UnityEngine_Object_o *SceneRootComponent_object; // x21
  float *monitor; // x8
  Il2CppObject *v72; // x21
  System_Action_o *v73; // x23
  Il2CppObject *v74; // x0
  int32_t eventId; // w19
  SelectBonusBaseMaster_o *v76; // x21
  System_Action_o *v77; // x22
  struct EventTutorialEntity_TextTuto_array *v78; // x8
  __int64 v79; // x9
  EventTutorialEntity_TextTuto_o *v80; // x8
  System_String_o *title; // x23
  System_String_o *v82; // x24
  CommonUI_o *v83; // x22
  System_Action_o *v84; // x25
  struct EventTutorialEntity_TextTuto_array *v85; // x8
  __int64 v86; // x9
  EventTutorialEntity_TextTuto_o *v87; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v89; // x10
  int MasterName_k__BackingField; // w9
  UnityEngine_Rect_array *v91; // x22
  int v92; // w8
  bool v93; // w11
  __int64 v94; // x12
  EventTutorialEntity_TextTuto_o *v95; // x10
  struct EventTutorialEntity_RectData_array *v96; // x10
  int v97; // w12
  int32x4_t *v98; // x10
  int32_t v99; // w23
  struct EventTutorialEntity_TextTuto_array *v100; // x8
  __int64 v101; // x9
  EventTutorialEntity_TextTuto_o *v102; // x8
  int32_t v103; // w25
  struct EventTutorialEntity_TextTuto_array *v104; // x8
  __int64 v105; // x9
  EventTutorialEntity_TextTuto_o *v106; // x8
  System_String_o *v107; // x23
  System_String_o *v108; // x24
  CommonUI_o *v109; // x22
  System_Action_o *v110; // x26
  struct EventTutorialEntity_TextTuto_array *v111; // x8
  __int64 v112; // x9
  EventTutorialEntity_TextTuto_o *v113; // x8
  int32_t dlgFontSize; // w19
  System_Nullable_int__o p_messageWidgetSizeX; // x0
  struct EventTutorialEntity_TextTuto_array *v116; // x8
  __int64 v117; // x9
  EventTutorialEntity_TextTuto_o *v118; // x8
  struct EventTutorialEntity_TextTuto_array *v119; // x8
  __int64 v120; // x9
  EventTutorialEntity_TextTuto_o *v121; // x8
  System_String_o *v122; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v124; // x19
  System_Action_o *v125; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector2_o v127; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v128; // 0:s2.4,4:s3.4,8:s4.4

  while ( 1 )
  {
    v5 = transitionQuest;
    v6 = callback;
    v7 = idx;
    v8 = this;
    if ( (byte_4C37B8E & 1) == 0 )
    {
      sub_1C32C20(&System_Action_FortificationNotifyDialog__TypeInfo);
      sub_1C32C20(&System_Action_TypeInfo);
      sub_1C32C20(&Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
      sub_1C32C20(&CommonConfirmDialog_ClickDelegate_TypeInfo);
      sub_1C32C20(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
      sub_1C32C20(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
      sub_1C32C20(&DataManager_TypeInfo);
      sub_1C32C20(&LocalizationManager_TypeInfo);
      sub_1C32C20(&Method_System_Nullable_int___ctor__);
      sub_1C32C20(&UnityEngine_Object_TypeInfo);
      sub_1C32C20(&UnityEngine_Rect___TypeInfo);
      sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1C32C20(&string_TypeInfo);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__0__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__10__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__11__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__1__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__2__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__3__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__4__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__6__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__7__);
      sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__9__);
      sub_1C32C20(&EventTutorialEntity___c__DisplayClass19_0_TypeInfo);
      sub_1C32C20(&StringLiteral_10901/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
      sub_1C32C20(&StringLiteral_21195/*"left"*/);
      sub_1C32C20(&StringLiteral_6272/*"EventUI/Prefabs/80400"*/);
      sub_1C32C20(&StringLiteral_6836/*"FortificationNotifyDialog"*/);
      sub_1C32C20(&StringLiteral_23113/*"right"*/);
      sub_1C32C20(&StringLiteral_10902/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
      byte_4C37B8E = 1;
    }
    v9 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0);
    if ( !v9 )
      goto LABEL_130;
    *(_QWORD *)(v9 + 16) = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v8, v11, v12);
    *(_DWORD *)(v9 + 24) = v7;
    *(_QWORD *)(v9 + 32) = v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v6, v13, v14);
    *(_QWORD *)(v9 + 40) = v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v5, v15, v16);
    textJson = v8->fields.textJson;
    if ( !textJson )
      goto LABEL_130;
    v18 = *(_DWORD *)(v9 + 24);
    max_length = textJson->max_length;
    if ( (int)v18 >= (int)max_length )
      goto LABEL_49;
    if ( v18 >= max_length )
      goto LABEL_131;
    v20 = textJson->m_Items[v18];
    if ( !v20 )
      goto LABEL_130;
    commonReleaseId = v20->fields.commonReleaseId;
    if ( commonReleaseId < 1 )
      goto LABEL_15;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
  v18 = *(_DWORD *)(v9 + 24);
LABEL_15:
  if ( v18 >= LODWORD(textJson->max_length) )
    goto LABEL_131;
  v22 = textJson->m_Items[v18];
  if ( !v22 )
    goto LABEL_130;
  textPos = v22->fields.textPos;
  v24 = 0.0;
  if ( !textPos )
  {
    v26 = 1;
    goto LABEL_23;
  }
  v25 = textPos->max_length;
  v26 = (_DWORD)v25 == 0;
  if ( !v25 )
  {
LABEL_23:
    v28 = 0.0;
    v27 = 0.0;
    goto LABEL_24;
  }
  if ( (unsigned int)v25 < 2 )
    goto LABEL_131;
  v27 = (float)textPos->m_Items[0];
  v28 = (float)textPos->m_Items[1];
LABEL_24:
  ptPos = v22->fields.ptPos;
  if ( ptPos )
  {
    v30 = ptPos->max_length;
    v31 = 0.0;
    if ( v30 )
    {
      if ( (unsigned int)v30 < 2 )
        goto LABEL_131;
      v31 = (float)ptPos->m_Items[0];
      v24 = (float)ptPos->m_Items[1];
    }
  }
  else
  {
    v31 = 0.0;
  }
  scrDlgTitle = v22->fields.scrDlgTitle;
  spacingY = v22->fields.spacingY;
  presentClassScoreResetItemIdList = (System_Collections_ICollection_o *)v22->fields.presentClassScoreResetItemIdList;
  Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v35 = v8->fields.textJson;
    if ( !v35 )
      goto LABEL_130;
    v36 = *(int *)(v9 + 24);
    if ( (unsigned int)v36 >= LODWORD(v35->max_length) )
      goto LABEL_131;
    v37 = v35->m_Items[v36];
    if ( !v37 )
      goto LABEL_130;
    if ( v37->fields.isFortification )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = (System_Action_object__o *)sub_1C32E6C(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v39,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6272/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_6836/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v39,
          0,
          (const MethodInfo_30D3914 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_130:
      sub_1C32E7C(Master_object);
    }
    if ( v37->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v37->fields.releaseClassBoardBaseIds;
      if ( !releaseClassBoardBaseIds || !releaseClassBoardBaseIds->max_length )
      {
LABEL_49:
        ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0);
        return;
      }
      addClassIds = v37->fields.addClassIds;
      if ( addClassIds && addClassIds->max_length )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LODWORD(releaseClassBoardBaseIds->max_length) )
        {
          v48 = releaseClassBoardBaseIds->m_Items[0];
          v49 = (CommonUI_o *)Master_object;
          v50 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v50,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__6__,
            0);
          if ( !v49 )
            goto LABEL_130;
          CommonUI__OpenClassBoardAddClassDialog(v49, v48, addClassIds, v50, 0);
          return;
        }
        goto LABEL_131;
      }
      v69 = 0.0;
      if ( v8->fields.openType == 100 )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_130;
        SceneRootComponent_object = (UnityEngine_Object_o *)AvalonSceneManager__GetSceneRootComponent_object_(
                                                              (AvalonSceneManager_o *)Master_object,
                                                              91,
                                                              (const MethodInfo_30C50D4 *)Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
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
          v69 = monitor[73];
        }
      }
      v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v73 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v73,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__7__,
        0);
      if ( !v72 )
        goto LABEL_130;
      CommonUI__OpenClassBoardReleaseDialog(
        (CommonUI_o *)v72,
        releaseClassBoardBaseIds,
        v73,
        v8->fields.openType == 100,
        v69,
        0);
    }
    else
    {
      Master_object = (CommonReleaseMaster_o *)BasicHelper__IsNullOrEmpty(presentClassScoreResetItemIdList, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v51 = v8->fields.textJson;
        if ( !v51 )
          goto LABEL_130;
        v52 = *(int *)(v9 + 24);
        if ( (unsigned int)v52 >= LODWORD(v51->max_length) )
          goto LABEL_131;
        v53 = v51->m_Items[v52];
        if ( !v53 )
          goto LABEL_130;
        v54 = spacingY & ~(spacingY >> 31);
        if ( v53->fields.isQuestRelease )
        {
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v55 = v8->fields.textJson;
          if ( !v55 )
            goto LABEL_130;
          v56 = *(int *)(v9 + 24);
          if ( (unsigned int)v56 >= LODWORD(v55->max_length) )
            goto LABEL_131;
          v57 = v55->m_Items[v56];
          if ( !v57 )
            goto LABEL_130;
          v58 = (CommonUI_o *)Master_object;
          text = v57->fields.text;
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10902/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0);
          v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10901/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0);
          v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C32E6C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v63,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__3__,
            0);
          v64 = v8->fields.textJson;
          if ( !v64 )
            goto LABEL_130;
          v65 = *(int *)(v9 + 24);
          if ( (unsigned int)v65 >= LODWORD(v64->max_length) )
            goto LABEL_131;
          v66 = v64->m_Items[v65];
          if ( !v66 || !v58 )
            goto LABEL_130;
          CommonUI__OpenConfirmDecideDlg(
            v58,
            Empty,
            text,
            v61,
            v62,
            v63,
            v66->fields.dlgFontSize,
            0.0,
            15.0,
            v54,
            0,
            0,
            240,
            0,
            0,
            0,
            0,
            0);
        }
        else if ( v53->fields.isSelectBonus )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v74 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = v8->fields.eventId;
          v76 = (SelectBonusBaseMaster_o *)v74;
          v77 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v77,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__4__,
            0);
          if ( !v76 )
            goto LABEL_130;
          SelectBonusBaseMaster__OpenSelectBonusDialog(v76, eventId, v77, 0);
        }
        else if ( v53->fields.dlgFontSize < 1 )
        {
          rects = v53->fields.rects;
          if ( !rects )
            goto LABEL_130;
          Master_object = (CommonReleaseMaster_o *)sub_1C32CC8(UnityEngine_Rect___TypeInfo, LODWORD(rects->max_length));
          if ( !Master_object )
            goto LABEL_130;
          v89 = v8->fields.textJson;
          if ( !v89 )
            goto LABEL_130;
          MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
          v91 = (UnityEngine_Rect_array *)Master_object;
          v92 = 1;
          v93 = MasterName_k__BackingField > 0;
          while ( 1 )
          {
            v94 = *(int *)(v9 + 24);
            if ( (unsigned int)v94 >= LODWORD(v89->max_length) )
              goto LABEL_131;
            v95 = v89->m_Items[v94];
            if ( !v95 )
              goto LABEL_130;
            if ( !v93 )
              break;
            v96 = v95->fields.rects;
            if ( !v96 )
              goto LABEL_130;
            v97 = v92 - 1;
            if ( (unsigned int)(v92 - 1) >= LODWORD(v96->max_length) )
              goto LABEL_131;
            v98 = (int32x4_t *)v96->m_Items[v97];
            if ( !v98 )
              goto LABEL_130;
            if ( v97 >= (unsigned int)MasterName_k__BackingField )
              goto LABEL_131;
            *((float32x4_t *)&Master_object->fields.revision + v97) = vcvtq_f32_s32(v98[1]);
            MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
            v89 = v8->fields.textJson;
            v93 = v92++ < MasterName_k__BackingField;
            if ( !v89 )
              goto LABEL_130;
          }
          Master_object = (CommonReleaseMaster_o *)BasicHelper__EqualExceptNullOrEmpty(
                                                     v95->fields.textAlign,
                                                     (System_String_o *)StringLiteral_21195/*"left"*/,
                                                     0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v99 = 1;
          }
          else
          {
            v116 = v8->fields.textJson;
            if ( !v116 )
              goto LABEL_130;
            v117 = *(int *)(v9 + 24);
            if ( (unsigned int)v117 >= LODWORD(v116->max_length) )
              goto LABEL_131;
            v118 = v116->m_Items[v117];
            if ( !v118 )
              goto LABEL_130;
            if ( BasicHelper__EqualExceptNullOrEmpty(v118->fields.textAlign, (System_String_o *)StringLiteral_23113/*"right"*/, 0) )
              v99 = 3;
            else
              v99 = 2;
          }
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v119 = v8->fields.textJson;
          if ( !v119 )
            goto LABEL_130;
          v120 = *(int *)(v9 + 24);
          if ( (unsigned int)v120 >= LODWORD(v119->max_length) )
LABEL_131:
            sub_1C32E84(Master_object);
          v121 = v119->m_Items[v120];
          if ( !v121 )
            goto LABEL_130;
          v122 = v121->fields.text;
          dlgBgId = v121->fields.dlgBgId;
          v124 = (CommonUI_o *)Master_object;
          v125 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v125,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__11__,
            0);
          if ( !v124 )
            goto LABEL_130;
          v128.fields.z = 0.0;
          v127.fields.x = v27;
          v127.fields.y = v28;
          v128.fields.x = v31;
          v128.fields.y = v24;
          CommonUI__OpenEventTutorialNotificationDialog(v124, v122, v91, v127, v128, dlgBgId, v99, v125, 0, v54, 0);
        }
        else
        {
          Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(v53->fields.messageWidgetSizeX, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v78 = v8->fields.textJson;
            if ( !v78 )
              goto LABEL_130;
            v79 = *(int *)(v9 + 24);
            if ( (unsigned int)v79 >= LODWORD(v78->max_length) )
              goto LABEL_131;
            v80 = v78->m_Items[v79];
            if ( !v80 )
              goto LABEL_130;
            title = v80->fields.title;
            v82 = v80->fields.text;
            v83 = (CommonUI_o *)Master_object;
            v84 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v84,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__9__,
              0);
            v85 = v8->fields.textJson;
            if ( !v85 )
              goto LABEL_130;
            v86 = *(int *)(v9 + 24);
            if ( (unsigned int)v86 >= LODWORD(v85->max_length) )
              goto LABEL_131;
            v87 = v85->m_Items[v86];
            if ( !v87 || !v83 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31191784(
              v83,
              title,
              v82,
              v84,
              v28,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              v87->fields.dlgFontSize,
              0,
              v54,
              v26,
              0,
              0);
          }
          else
          {
            v100 = v8->fields.textJson;
            if ( !v100 )
              goto LABEL_130;
            v101 = *(int *)(v9 + 24);
            if ( (unsigned int)v101 >= LODWORD(v100->max_length) )
              goto LABEL_131;
            v102 = v100->m_Items[v101];
            if ( !v102 )
              goto LABEL_130;
            v103 = System_Int32__Parse(v102->fields.messageWidgetSizeX, 0);
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v104 = v8->fields.textJson;
            if ( !v104 )
              goto LABEL_130;
            v105 = *(int *)(v9 + 24);
            if ( (unsigned int)v105 >= LODWORD(v104->max_length) )
              goto LABEL_131;
            v106 = v104->m_Items[v105];
            if ( !v106 )
              goto LABEL_130;
            v107 = v106->fields.title;
            v108 = v106->fields.text;
            v109 = (CommonUI_o *)Master_object;
            v110 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              v110,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__10__,
              0);
            v111 = v8->fields.textJson;
            if ( !v111 )
              goto LABEL_130;
            v112 = *(int *)(v9 + 24);
            if ( (unsigned int)v112 >= LODWORD(v111->max_length) )
              goto LABEL_131;
            v113 = v111->m_Items[v112];
            if ( !v113 )
              goto LABEL_130;
            dlgFontSize = v113->fields.dlgFontSize;
            p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
            messageWidgetSizeX = 0;
            System_Nullable_int____ctor(
              p_messageWidgetSizeX,
              v103,
              (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
            if ( !v109 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31191784(
              v109,
              v107,
              v108,
              v110,
              v28,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              dlgFontSize,
              0,
              v54,
              v26,
              messageWidgetSizeX,
              0);
          }
        }
      }
      else
      {
        v67 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v68 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v68,
          (Il2CppObject *)v9,
          Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__2__,
          0);
        if ( !v67 )
          goto LABEL_130;
        CommonUI__OpenTutorialItemGetDialog(
          (CommonUI_o *)v67,
          (System_Int32_array *)presentClassScoreResetItemIdList,
          v68,
          0);
      }
    }
  }
  else
  {
    Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v40 = v8->fields.textJson;
    if ( !v40 )
      goto LABEL_130;
    v41 = *(int *)(v9 + 24);
    if ( (unsigned int)v41 >= LODWORD(v40->max_length) )
      goto LABEL_131;
    v42 = v40->m_Items[v41];
    if ( !v42 )
      goto LABEL_130;
    v43 = v42->fields.text;
    v44 = (CommonUI_o *)Master_object;
    v45 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__0__,
      0);
    if ( !v44 )
      goto LABEL_130;
    CommonUI__OpenScrollMessageDialog(v44, scrDlgTitle, v43, 10, 0, 0, 0, v45, 1, 0);
  }
}


void EventTutorialEntity__TransitionQuest(EventTutorialEntity_o *this, int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C37B8D & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C37B8D = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C349F0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C349F0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


System_Int32_array_array *EventTutorialEntity__getTargets(EventTutorialEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  struct System_String_array *v5; // x8
  System_String_o *v6; // x20
  __int64 v7; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v10; // x0
  EventTutorialEntity___c_c *v11; // x8
  System_Object_array *v12; // x22
  System_Converter_object__int__o *_9__11_0; // x23
  Il2CppObject *v14; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C37B87 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_ConvertAll_string__int___);
    sub_1C32C20(&System_Converter_string__int__TypeInfo);
    sub_1C32C20(&int_____TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__getTargets_b__11_0__);
    sub_1C32C20(&EventTutorialEntity___c_TypeInfo);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C37B87 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C32CC8(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_1C32CC8(int_____TypeInfo, LODWORD(targetIds->max_length));
  v5 = this->fields.targetIds;
  if ( !v5 )
LABEL_20:
    sub_1C32E7C(v4);
  v6 = v4;
  v7 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v5->max_length;
    if ( (int)v7 >= max_length )
      return (System_Int32_array_array *)v6;
    if ( (unsigned int)v7 >= max_length )
      goto LABEL_23;
    v4 = v5->m_Items[v7];
    if ( v4 )
    {
      v4 = System_String__Replace_63565092(
             v4,
             (System_String_o *)StringLiteral_15802/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63565092(
               v4,
               (System_String_o *)StringLiteral_16056/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v10 = System_String__Split(v4, 0x2Cu, 0, 0);
          v11 = EventTutorialEntity___c_TypeInfo;
          v12 = (System_Object_array *)v10;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v11 = EventTutorialEntity___c_TypeInfo;
          }
          _9__11_0 = (System_Converter_object__int__o *)v11->static_fields->__9__11_0;
          if ( !_9__11_0 )
          {
            if ( !v11->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v11);
              v11 = EventTutorialEntity___c_TypeInfo;
            }
            v14 = (Il2CppObject *)v11->static_fields->__9;
            _9__11_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__11_0, v14, Method_EventTutorialEntity___c__getTargets_b__11_0__, 0);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__11_0 = (struct System_Converter_string__int__o *)_9__11_0;
            sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v16, v17);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v12,
                                    (System_Converter_TInput__TOutput__o *)_9__11_0,
                                    (const MethodInfo_31E0A74 *)Method_System_Array_ConvertAll_string__int___);
          if ( v6 )
          {
            if ( (unsigned int)v7 >= LODWORD(v6[1].klass) )
LABEL_23:
              sub_1C32E84(v4);
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C32BC4(p_monitor, (int32_t)v4, v18, v19);
            v5 = this->fields.targetIds;
            ++v7;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v5 )
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
  System_Int32_array_array *Targets; // x21
  intptr_t Instance; // x0
  int32_t v13; // w8
  const MethodInfo *v14; // x5
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

  if ( (byte_4C37B89 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C37B89 = 1;
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
            sub_1C32E7C(Instance);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (intptr_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___)
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
                 (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___) )
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
        sub_1C32E84(Instance);
      }
LABEL_4:
      v13 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v13 && v13 != 11 )
      {
        if ( v13 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (intptr_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v14);
        }
      }
      return Instance;
    case 0x43:
      if ( !Targets || !Targets->max_length )
        goto LABEL_4;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C319B6 )
      {
        sub_1C32C20(&TerminalSceneComponent_TypeInfo);
        byte_4C319B6 = 1;
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
  const MethodInfo *v13; // x5
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  System_Collections_Generic_HashSet_T__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  int32_t value; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C37B88 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C37B88 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  value = 0;
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40365008(flagType, eventId, 0) )
  {
    return 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C34E01 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C34E01 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( v15->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
    {
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      if ( !byte_4C34E01 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C34E01 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v16->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
      if ( !ForcePlayEventTutorialArray_k__BackingField )
        sub_1C32E7C(0);
      System_Collections_Generic_HashSet_object___GetEnumerator(
        &v20,
        ForcePlayEventTutorialArray_k__BackingField,
        (const MethodInfo_3650390 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
                &v20,
                (const MethodInfo_3522A38 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__) )
      {
        if ( !v20.fields._current )
          sub_1C32E7C(0);
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               (System_Collections_Generic_Dictionary_int__int__o *)v20.fields._current,
               this->fields.eventId,
               &value,
               (const MethodInfo_33E88FC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__)
          && value == this->fields.flagType )
        {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose(
            &v20,
            (const MethodInfo_3522A34 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
          return 1;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3522A34 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    }
    return EventTutorialEntity__isEnableCondition(this, qId, ex1, ex2, ex3, v13);
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

  if ( (byte_4C37B9B & 1) == 0 )
  {
    sub_1C32C20(&EventTutorialEntity___c_TypeInfo);
    byte_4C37B9B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventTutorialEntity___c___getTargets_b__11_0(
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


void EventTutorialEntity___c__DisplayClass15_0___ctor(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3

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
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, v6) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1C32E7C(_4__this);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 0, action, v7);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x24
  CommonUI_o *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o **v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  struct EventTutorialEntity_o *_4__this; // x19
  struct System_Int32_array *imageIds; // x8
  struct EventTutorialEntity_o *v15; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v17; // x20
  System_Action_int__o *_9__4; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
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
  const MethodInfo *v32; // x1
  System_String_o *v33; // x26
  System_String_o *DialogPrefabName; // x0
  System_String_o *v35; // x27
  __int64 v36; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject **v39; // x22
  System_Collections_Generic_List_object__o *v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct EventTutorialEntity_o *v43; // x8
  __int64 v44; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct EventTutorialEntity_o *v47; // x8
  struct System_Int32_array *condIds; // x8
  System_Collections_Generic_List_AssistEntity__o *AssistEntityListByShopGroupId; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x21
  System_Action_object__o *v53; // x23
  __int64 v54; // x8
  __int64 v55; // x8
  System_Action_o *klass; // x4
  __int64 *v57; // x8
  CommonUI_o *v58; // x0
  int32_t condType; // w8
  Il2CppObject *Master_object; // x25
  System_String_o *v61; // x20
  int32_t markSprite; // w26
  __int64 v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 *v66; // x22
  __int64 v67; // x25
  EventEquipSkillPartsMaster_o *v68; // x22
  __int64 v69; // x23
  Il2CppObject *v70; // x22
  int32_t v71; // w23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x22
  __int64 v78; // x8
  __int64 v79; // x8
  const MethodInfo_30D3914 *v80; // x5
  System_String_o *v81; // x1
  System_String_o *v82; // x2
  struct EventTutorialEntity_o *v83; // x8
  __int64 v84; // x24
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x25
  struct EventTutorialEntity_o *v88; // x8
  struct System_Int32_array *v89; // x8
  System_Int32_array *QuestIdListByGroupId; // x23
  System_String_o *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x21
  System_Action_object__o *v95; // x22
  __int64 v96; // x8
  __int64 v97; // x8
  System_Action_T__o *v98; // x3
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x5
  __int64 v103; // x6
  __int64 v104; // x7
  struct EventTutorialEntity_o *v105; // x8
  CommonUI_o *v106; // x19
  Il2CppObject *v107; // x0
  const MethodInfo *v108; // x1
  System_String_o *v109; // x20
  System_String_o *v110; // x0
  Il2CppObject *v111; // x24
  System_String_o *v112; // x21
  int32_t eventId; // [xsp+Ch] [xbp-74h] BYREF
  QuestPhaseEntity_o *v114; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C37B9C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_EventCommonImageDialog__TypeInfo);
    sub_1C32C20(&System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
    sub_1C32C20(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
    sub_1C32C20(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___);
    sub_1C32C20(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___);
    sub_1C32C20(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__4__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_1__OpenTutorial_b__6__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_1_TypeInfo);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_3_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_4__OpenTutorial_b__7__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_4_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_5__OpenTutorial_b__8__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_5_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_6__OpenTutorial_b__9__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_6_TypeInfo);
    sub_1C32C20(&StringLiteral_6213/*"EventEquipSkillPartsRenoCompletionDialog"*/);
    sub_1C32C20(&StringLiteral_5604/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/);
    sub_1C32C20(&StringLiteral_2154/*"AddPartsDialog"*/);
    sub_1C32C20(&StringLiteral_5602/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    sub_1C32C20(&StringLiteral_6273/*"EventUI/Prefabs/{0}"*/);
    sub_1C32C20(&StringLiteral_6214/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/);
    byte_4C37B9C = 1;
  }
  v114 = 0;
  entity = 0;
  v5 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_125;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 16) = action;
  v9 = (System_Action_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)action, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_125;
  imageIds = _4__this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = this->fields.__4__this;
    if ( v15 && Instance )
    {
      CommonUI__OpenTutorialImageDialog_31217248(
        Instance,
        v15->fields.imageIds,
        v15->fields.flagType,
        v15->fields.eventId,
        *v9,
        0,
        0,
        0);
      return;
    }
LABEL_125:
    sub_1C32E7C(Instance);
  }
  textJson = _4__this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v17 = *v9;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v19, v20);
    }
    EventTutorialEntity__TextTutorialChain(_4__this, 0, v17, _9__4, v12);
    return;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.script, 0) )
    goto LABEL_42;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_125;
  if ( !EventTutorialEntity__GetDialogPrefabName((EventTutorialEntity_o *)Instance, v21) )
  {
LABEL_42:
    ActionExtensions__Call(*v9, 0);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_125;
  if ( !Instance )
    goto LABEL_125;
  Instance = (CommonUI_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v22->fields.eventId,
                             (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_125;
  v30 = (char)Instance;
  eventId = v29->fields.eventId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v23, v24, v25, v26, v27, v28);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6273/*"EventUI/Prefabs/{0}"*/, v31, 0);
  if ( !this->fields.__4__this )
    goto LABEL_125;
  v33 = (System_String_o *)Instance;
  DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v32);
  if ( (v30 & 1) != 0 )
  {
    v35 = DialogPrefabName;
    Instance = (CommonUI_o *)entity;
    if ( !entity )
      goto LABEL_125;
    if ( EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)entity, 0) )
    {
      v36 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v36, 0);
      if ( !v36 )
        goto LABEL_125;
      *(_QWORD *)(v36 + 24) = v5;
      v39 = (Il2CppObject **)(v36 + 24);
      sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 24), v5, v37, v38);
      v40 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v40,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
      *(_QWORD *)(v36 + 16) = v40;
      sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v40, v41, v42);
      v43 = this->fields.__4__this;
      if ( !v43 )
        goto LABEL_125;
      if ( v43->fields.condType == 67 )
      {
        Instance = (CommonUI_o *)System_String__Equals_63554576(v35, (System_String_o *)StringLiteral_2154/*"AddPartsDialog"*/, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v44 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v44, 0);
          if ( !v44 )
            goto LABEL_125;
          *(_QWORD *)(v44 + 24) = v36;
          sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 24), v36, v45, v46);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_AssistMaster___);
          v47 = this->fields.__4__this;
          if ( !v47 )
            goto LABEL_125;
          condIds = v47->fields.condIds;
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
            *(_QWORD *)(v44 + 16) = AssistEntityListByShopGroupId;
            sub_1C32BC4((CGThumbnailListItem_o *)(v44 + 16), (int32_t)AssistEntityListByShopGroupId, v50, v51);
            v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v53 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
            System_Action_object____ctor(
              v53,
              (Il2CppObject *)v44,
              Method_EventTutorialEntity___c__DisplayClass15_4__OpenTutorial_b__7__,
              0);
            v54 = *(_QWORD *)(v44 + 24);
            if ( !v54 )
              goto LABEL_125;
            v55 = *(_QWORD *)(v54 + 24);
            if ( !v55 || !v52 )
              goto LABEL_125;
            klass = *(System_Action_o **)(v55 + 16);
            v57 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___;
            v58 = (CommonUI_o *)v52;
LABEL_91:
            v80 = (const MethodInfo_30D3914 *)*v57;
            v81 = v33;
            v82 = v35;
LABEL_123:
            v98 = (System_Action_T__o *)v53;
LABEL_124:
            CommonUI__LoadAndCreateDialog_object_(v58, v81, v82, v98, klass, v80);
            return;
          }
          goto LABEL_126;
        }
        v43 = this->fields.__4__this;
        if ( !v43 )
          goto LABEL_125;
      }
      condType = v43->fields.condType;
      if ( condType != 46 && condType != 1 )
        goto LABEL_92;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C345C7 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C345C7 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      v61 = v33;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      markSprite = (int32_t)Instance->fields.connectMark->fields.markSprite;
      if ( !byte_4C31A96 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        byte_4C31A96 = 1;
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
                                 &v114,
                                 markSprite,
                                 LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
                                 0);
      v33 = v61;
      if ( ((unsigned __int8)Instance & 1) == 0
        || (Instance = (CommonUI_o *)System_String__Equals_63554576(v35, (System_String_o *)StringLiteral_6213/*"EventEquipSkillPartsRenoCompletionDialog"*/, 0),
            ((unsigned __int8)Instance & 1) == 0) )
      {
LABEL_92:
        v83 = this->fields.__4__this;
        if ( !v83 )
          goto LABEL_125;
        if ( v83->fields.condType == 51 && System_String__Equals_63554576(v35, (System_String_o *)StringLiteral_6214/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, 0) )
        {
          v84 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_6_TypeInfo);
          System_Object___ctor((Il2CppObject *)v84, 0);
          if ( !v84 )
            goto LABEL_125;
          *(_QWORD *)(v84 + 32) = v36;
          v87 = v84 + 32;
          sub_1C32BC4((CGThumbnailListItem_o *)(v84 + 32), v36, v85, v86);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
          v88 = this->fields.__4__this;
          if ( !v88 )
            goto LABEL_125;
          v89 = v88->fields.condIds;
          if ( !v89 )
            goto LABEL_125;
          if ( !LODWORD(v89->max_length) )
            goto LABEL_126;
          if ( !Instance )
            goto LABEL_125;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   v89->m_Items[0],
                                   2,
                                   0);
          if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestIdListByGroupId, 0) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
            if ( !*(_QWORD *)v87 || !Instance )
              goto LABEL_125;
            if ( EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                   (EventEquipSkillPartsMaster_o *)Instance,
                   (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(*(_QWORD *)v87 + 16LL),
                   QuestIdListByGroupId,
                   0,
                   0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_AssistMaster___);
              if ( !Instance )
                goto LABEL_125;
              if ( AssistMaster__TryGetValidAssistEntityList_41675080(
                     (AssistMaster_o *)Instance,
                     (System_Collections_Generic_List_AssistEntity__o **)(v84 + 16),
                     QuestIdListByGroupId,
                     0) )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v91 = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, 0);
                *(_QWORD *)(v84 + 24) = v91;
                sub_1C32BC4((CGThumbnailListItem_o *)(v84 + 24), (int32_t)v91, v92, v93);
                v94 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v95 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
                System_Action_object____ctor(
                  v95,
                  (Il2CppObject *)v84,
                  Method_EventTutorialEntity___c__DisplayClass15_6__OpenTutorial_b__9__,
                  0);
                v96 = *(_QWORD *)(v84 + 32);
                if ( !v96 )
                  goto LABEL_125;
                v97 = *(_QWORD *)(v96 + 24);
                if ( !v97 || !v94 )
                  goto LABEL_125;
                klass = *(System_Action_o **)(v97 + 16);
                v58 = (CommonUI_o *)v94;
                v81 = v33;
                v82 = v35;
                v80 = (const MethodInfo_30D3914 *)Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
                v98 = (System_Action_T__o *)v95;
                goto LABEL_124;
              }
            }
          }
        }
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v105 = this->fields.__4__this;
        if ( !v105 )
          goto LABEL_125;
        v106 = Instance;
        eventId = v105->fields.eventId;
        v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v99, v100, v101, v102, v103, v104);
        Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6273/*"EventUI/Prefabs/{0}"*/, v107, 0);
        if ( !this->fields.__4__this )
          goto LABEL_125;
        v109 = (System_String_o *)Instance;
        v110 = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, v108);
        v111 = *v39;
        v112 = v110;
        v53 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventCommonImageDialog__TypeInfo);
        System_Action_object____ctor(
          v53,
          v111,
          Method_EventTutorialEntity___c__DisplayClass15_1__OpenTutorial_b__6__,
          0);
        if ( !*v39 || !v106 )
          goto LABEL_125;
        klass = (System_Action_o *)(*v39)[1].klass;
        v58 = v106;
        v81 = v109;
        v82 = v112;
        v80 = (const MethodInfo_30D3914 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___;
        goto LABEL_123;
      }
      v63 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_5_TypeInfo);
      System_Object___ctor((Il2CppObject *)v63, 0);
      if ( !v63 )
        goto LABEL_125;
      *(_QWORD *)(v63 + 32) = v36;
      v66 = (__int64 *)(v63 + 32);
      sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 32), v36, v64, v65);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
      v67 = *v66;
      if ( !*v66 )
        goto LABEL_125;
      v68 = (EventEquipSkillPartsMaster_o *)Instance;
      v69 = sub_1C32CC8(int___TypeInfo, 1);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C345C7 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C345C7 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v69 )
        goto LABEL_125;
      if ( *(_DWORD *)(v69 + 24) )
      {
        *(_DWORD *)(v69 + 32) = Instance->fields.connectMark->fields.markSprite;
        if ( !v68 )
          goto LABEL_125;
        EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
          v68,
          (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(v67 + 16),
          (System_Int32_array *)v69,
          0,
          0);
        v70 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !byte_4C345C7 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C345C7 = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        v71 = (int32_t)Instance->fields.connectMark->fields.markSprite;
        if ( !byte_4C31A96 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          byte_4C31A96 = 1;
        }
        if ( !LODWORD(Instance->fields.dummyErrorSelectDialog) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v70 )
          goto LABEL_125;
        AssistMaster__TryGetValidAssistEntityList(
          (AssistMaster_o *)v70,
          (System_Collections_Generic_List_AssistEntity__o **)(v63 + 24),
          v71,
          LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
          1,
          0);
        Instance = (CommonUI_o *)v114;
        if ( !v114 )
          goto LABEL_125;
        RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(v114, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5602/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
        v74 = System_String__Format(RenoCompletionDialogText, v73, 0);
        *(_QWORD *)(v63 + 16) = v74;
        sub_1C32BC4((CGThumbnailListItem_o *)(v63 + 16), (int32_t)v74, v75, v76);
        v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v53 = (System_Action_object__o *)sub_1C32E6C(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
        System_Action_object____ctor(
          v53,
          (Il2CppObject *)v63,
          Method_EventTutorialEntity___c__DisplayClass15_5__OpenTutorial_b__8__,
          0);
        v78 = *(_QWORD *)(v63 + 32);
        if ( !v78 )
          goto LABEL_125;
        v79 = *(_QWORD *)(v78 + 24);
        if ( !v79 || !v77 )
          goto LABEL_125;
        klass = *(System_Action_o **)(v79 + 16);
        v57 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
        v58 = (CommonUI_o *)v77;
        goto LABEL_91;
      }
LABEL_126:
      sub_1C32E84(Instance);
    }
  }
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__10(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C37B9F & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C37B9F = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3

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
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, v6) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1C32E7C(_4__this);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 1, action, v7);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__10; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *Request_object; // x0
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4C37B9E & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__10__);
    byte_4C37B9E = 1;
  }
  _9__10 = this->fields.__9__10;
  if ( !_9__10 )
  {
    _9__10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__10,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__10__,
      0);
    this->fields.__9__10 = _9__10;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__10, (int32_t)_9__10, v4, v5);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__10,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1C32E7C(Request_object);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4C37B9D & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass15_2__OpenTutorial_b__5__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass15_2_TypeInfo);
    byte_4C37B9D = 1;
  }
  v5 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass15_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 16) = questId;
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_2__OpenTutorial_b__5__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1C32E7C(Request_object);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0);
}


void EventTutorialEntity___c__DisplayClass15_1___ctor(
        EventTutorialEntity___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_1___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass15_1_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  if ( !dialog )
    sub_1C32E7C(this);
  EventCommonImageDialog__Open(dialog, this->fields.action, 0);
}


void EventTutorialEntity___c__DisplayClass15_2___ctor(
        EventTutorialEntity___c__DisplayClass15_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_2___OpenTutorial_b__5(
        EventTutorialEntity___c__DisplayClass15_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v5; // x2
  struct EventTutorialEntity___c__DisplayClass15_0_o *CS___8__locals2; // x8
  struct EventTutorialEntity_o *_4__this; // x8
  const MethodInfo *v8; // x2
  struct EventTutorialEntity___c__DisplayClass15_0_o *v9; // x8

  if ( (byte_4C37BA0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C37BA0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventTutorialMaster___);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2
    || (_4__this = CS___8__locals2->fields.__4__this) == 0
    || !Master_object
    || (EventTutorialMaster__TutorialAfterUpdateQuestTree(
          (EventTutorialMaster_o *)Master_object,
          _4__this->fields.eventId,
          v5),
        (v9 = this->fields.CS___8__locals2) == 0)
    || !v9->fields.__4__this )
  {
    sub_1C32E7C(Master_object);
  }
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)Master_object, this->fields.questId, v8);
}


void EventTutorialEntity___c__DisplayClass15_3___ctor(
        EventTutorialEntity___c__DisplayClass15_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_4___ctor(
        EventTutorialEntity___c__DisplayClass15_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_4___OpenTutorial_b__7(
        EventTutorialEntity___c__DisplayClass15_4_o *this,
        EventEquipSkillPartsAddPartsDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass15_3_o *CS___8__locals4; // x8
  struct EventTutorialEntity___c__DisplayClass15_1_o *CS___8__locals3; // x8
  struct EventTutorialEntity___c__DisplayClass15_0_o *CS___8__locals1; // x9
  struct EventTutorialEntity_o *_4__this; // x9

  CS___8__locals4 = this->fields.CS___8__locals4;
  if ( !CS___8__locals4
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0
    || (CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || !dialog )
  {
    sub_1C32E7C(this);
  }
  EventEquipSkillPartsAddPartsDialog__Open(
    dialog,
    _4__this->fields.eventId,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass15_5___ctor(
        EventTutorialEntity___c__DisplayClass15_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_5___OpenTutorial_b__8(
        EventTutorialEntity___c__DisplayClass15_5_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass15_3_o *CS___8__locals5; // x8
  struct EventTutorialEntity___c__DisplayClass15_1_o *CS___8__locals3; // x9

  CS___8__locals5 = this->fields.CS___8__locals5;
  if ( !CS___8__locals5 || (CS___8__locals3 = CS___8__locals5->fields.CS___8__locals3) == 0 || !dialog )
    sub_1C32E7C(this);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals5->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass15_6___ctor(
        EventTutorialEntity___c__DisplayClass15_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass15_6___OpenTutorial_b__9(
        EventTutorialEntity___c__DisplayClass15_6_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass15_3_o *CS___8__locals6; // x8
  struct EventTutorialEntity___c__DisplayClass15_1_o *CS___8__locals3; // x9

  CS___8__locals6 = this->fields.CS___8__locals6;
  if ( !CS___8__locals6 || (CS___8__locals3 = CS___8__locals6->fields.CS___8__locals3) == 0 || !dialog )
    sub_1C32E7C(this);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals6->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0);
}


void EventTutorialEntity___c__DisplayClass17_0___ctor(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass17_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C37BA1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C37BA1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass17_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C37BA2 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C37BA2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass19_0___ctor(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass19_0_o *v4; // x20
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v8; // x8
  System_String_o *text; // x21
  System_Action_o *_9__5; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_4C37BA3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass19_0_o *)sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__5__);
    byte_4C37BA3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_1C32E84(this);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_11;
  text = v8->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !dialog )
LABEL_11:
    sub_1C32E7C(this);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v10; // x20

  if ( (byte_4C37BA4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_EventTutorialEntity___c__DisplayClass19_1__TextTutorialChain_b__8__);
    sub_1C32C20(&EventTutorialEntity___c__DisplayClass19_1_TypeInfo);
    byte_4C37BA4 = 1;
  }
  v5 = sub_1C32E6C(EventTutorialEntity___c__DisplayClass19_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass19_1__TextTutorialChain_b__8__,
          0),
        !Instance) )
  {
    sub_1C32E7C(v6);
  }
  CommonUI__CloseConfirmDialog_31191080((CommonUI_o *)Instance, v10, 0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void EventTutorialEntity___c__DisplayClass19_1___ctor(
        EventTutorialEntity___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTutorialEntity___c__DisplayClass19_1___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass19_1_o *v2; // x19
  struct EventTutorialEntity___c__DisplayClass19_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  const MethodInfo *v9; // x4
  struct EventTutorialEntity___c__DisplayClass19_0_o *v10; // x8

  v2 = this;
  if ( (byte_4C37BA5 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass19_1_o *)sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C37BA5 = 1;
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
    sub_1C32E84(this);
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_14;
  questId = v7->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass19_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      (const MethodInfo_3029C40 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass19_1_o *)v10->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1C32E7C(this);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    v9);
}