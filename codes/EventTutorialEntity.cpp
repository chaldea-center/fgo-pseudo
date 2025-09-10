void EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C274A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C274A4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4C274A3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C274A3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventTutorialEntity__CreatePrimaryKey(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *EventTutorialEntity__GetAfterActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2749E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16710/*"afterActionVals"*/);
    byte_4C2749E = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16710/*"afterActionVals"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2749F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17117/*"beforeActionSetup"*/);
    byte_4C2749F = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17117/*"beforeActionSetup"*/, 0);
}


System_String_array *EventTutorialEntity__GetBeforeActionVals(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2749D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17118/*"beforeActionVals"*/);
    byte_4C2749D = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17118/*"beforeActionVals"*/, 0);
}


System_String_o *EventTutorialEntity__GetDialogPrefabName(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C274A2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18603/*"dialogPrefabName"*/);
    byte_4C274A2 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18603/*"dialogPrefabName"*/, 0, 0);
}


int32_t EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C274A1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23065/*"resumeTransitionWar"*/);
    byte_4C274A1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23065/*"resumeTransitionWar"*/, 0, 0);
}


bool EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2749B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16710/*"afterActionVals"*/);
    byte_4C2749B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16710/*"afterActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2749A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17118/*"beforeActionVals"*/);
    byte_4C2749A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17118/*"beforeActionVals"*/, 0);
}


bool EventTutorialEntity__HasBeforeSetUpAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2749C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17117/*"beforeActionSetup"*/);
    byte_4C2749C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17117/*"beforeActionSetup"*/, 0);
}


bool EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C274A0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23065/*"resumeTransitionWar"*/);
    byte_4C274A0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23065/*"resumeTransitionWar"*/, 0);
}


bool EventTutorialEntity__IsBlankEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  int32_t openType; // w8
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x20
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x0

  if ( (byte_4C27499 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4C27499 = 1;
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
           (const MethodInfo_30EBBF4 *)Method_System_Linq_Enumerable_Contains_string___) )
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
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  System_Action_object__o *v16; // x21
  const MethodInfo *v17; // x3
  System_Action_object__o *v18; // x21
  const MethodInfo *v19; // x3
  ActionChain_o *v20; // x21
  __int64 v21; // x20
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3

  if ( (byte_4C27494 & 1) == 0 )
  {
    sub_1C2D490(&ActionChain_TypeInfo);
    sub_1C2D490(&System_Action___TypeInfo);
    sub_1C2D490(&System_Action_Action____TypeInfo);
    sub_1C2D490(&System_Action_Action__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__0__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__1__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__2__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__3__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_0_TypeInfo);
    byte_4C27494 = 1;
  }
  v5 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass15_0___ctor((EventTutorialEntity___c__DisplayClass15_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause(Instance, 0);
  v12 = sub_1C2D538(System_Action_Action____TypeInfo, 3);
  v13 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__0__,
    0);
  if ( !v12 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v12 + 32) = v13;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v13, v14, v15);
  v16 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__1__,
    0);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v12 + 40) = v16;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 40), (int32_t)v16, v14, v17);
  v18 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__2__,
    0);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v12 + 48) = v18;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 48), (int32_t)v18, v14, v19);
  v20 = (ActionChain_o *)sub_1C2D6DC(ActionChain_TypeInfo);
  ActionChain___ctor_48937944(v20, (System_Action_Action__array *)v12, 0);
  v21 = sub_1C2D538(System_Action___TypeInfo, 1);
  v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__3__,
    0);
  if ( !v21 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v21 + 24) )
LABEL_15:
    sub_1C2D6F4(Instance, v7, v14);
  *(_QWORD *)(v21 + 32) = v22;
  sub_1C2D434((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v22, v14, v23);
  if ( !v20
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v20,
                                               (System_Action_array *)v21,
                                               0)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(Instance, v7);
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

  if ( (byte_4C27496 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity_TransitionQuest__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__0__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__1__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass17_0_TypeInfo);
    byte_4C27496 = 1;
  }
  v5 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass17_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass17_0___ctor((EventTutorialEntity___c__DisplayClass17_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  imageIds = this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = this->fields.imageIds;
    v13 = (CommonUI_o *)v11;
    v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__0__,
      0);
    if ( v13 )
    {
      CommonUI__OpenTutorialImageDialog_31194140(v13, v12, -1, 0, v14, 0, 0, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__1__,
      0);
    v17 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v17, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0);
    EventTutorialEntity__TextTutorialChain(this, 0, v16, v17, v18);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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

  if ( (byte_4C27495 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    byte_4C27495 = 1;
  }
  if ( isAfter )
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetAfterActionVals(this, (const MethodInfo *)isAfter);
  else
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetBeforeActionVals(this, (const MethodInfo *)isAfter);
  v8 = (System_String_array *)v7;
  if ( BasicHelper__IsNullOrEmpty(v7, 0) )
    ActionExtensions__Call(callback, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
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
  __int64 v18; // x2
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  unsigned int v20; // w9
  unsigned int max_length; // w10
  EventTutorialEntity_TextTuto_o *v22; // x10
  int32_t commonReleaseId; // w22
  EventTutorialEntity_TextTuto_o *v24; // x8
  struct System_Int32_array *textPos; // x9
  float v26; // s9
  il2cpp_array_size_t v27; // x10
  char v28; // w27
  float v29; // s10
  float v30; // s8
  struct System_Int32_array *ptPos; // x9
  il2cpp_array_size_t v32; // x10
  float v33; // s11
  System_String_o *scrDlgTitle; // x23
  int spacingY; // w24
  System_Collections_ICollection_o *presentClassScoreResetItemIdList; // x22
  struct EventTutorialEntity_TextTuto_array *v37; // x8
  __int64 v38; // x9
  EventTutorialEntity_TextTuto_o *v39; // x8
  Il2CppObject *Instance; // x19
  System_Action_object__o *v41; // x21
  struct EventTutorialEntity_TextTuto_array *v42; // x8
  __int64 v43; // x9
  EventTutorialEntity_TextTuto_o *v44; // x8
  System_String_o *v45; // x21
  CommonUI_o *v46; // x19
  ScrollMessageDialog_ClickDelegate_o *v47; // x22
  System_Int32_array *releaseClassBoardBaseIds; // x22
  System_Int32_array *addClassIds; // x21
  int32_t v50; // w22
  CommonUI_o *v51; // x19
  System_Action_o *v52; // x23
  struct EventTutorialEntity_TextTuto_array *v53; // x8
  __int64 v54; // x9
  EventTutorialEntity_TextTuto_o *v55; // x8
  int32_t v56; // w21
  struct EventTutorialEntity_TextTuto_array *v57; // x8
  __int64 v58; // x9
  EventTutorialEntity_TextTuto_o *v59; // x8
  CommonUI_o *v60; // x22
  System_String_o *text; // x23
  System_String_o *Empty; // x24
  System_String_o *v63; // x25
  System_String_o *v64; // x26
  CommonConfirmDialog_ClickDelegate_o *v65; // x27
  struct EventTutorialEntity_TextTuto_array *v66; // x8
  __int64 v67; // x9
  EventTutorialEntity_TextTuto_o *v68; // x8
  Il2CppObject *v69; // x19
  System_Action_o *v70; // x21
  float v71; // s8
  UnityEngine_Object_o *SceneRootComponent_object; // x21
  float *monitor; // x8
  Il2CppObject *v74; // x21
  System_Action_o *v75; // x23
  Il2CppObject *v76; // x0
  int32_t eventId; // w19
  SelectBonusBaseMaster_o *v78; // x21
  System_Action_o *v79; // x22
  struct EventTutorialEntity_TextTuto_array *v80; // x8
  __int64 v81; // x9
  EventTutorialEntity_TextTuto_o *v82; // x8
  System_String_o *title; // x23
  System_String_o *v84; // x24
  CommonUI_o *v85; // x22
  System_Action_o *v86; // x25
  struct EventTutorialEntity_TextTuto_array *v87; // x8
  __int64 v88; // x9
  EventTutorialEntity_TextTuto_o *v89; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v91; // x10
  int MasterName_k__BackingField; // w9
  UnityEngine_Rect_array *v93; // x22
  int v94; // w8
  bool v95; // w11
  __int64 v96; // x12
  EventTutorialEntity_TextTuto_o *v97; // x10
  struct EventTutorialEntity_RectData_array *v98; // x10
  int v99; // w12
  int32x4_t *v100; // x10
  int32_t v101; // w23
  struct EventTutorialEntity_TextTuto_array *v102; // x8
  __int64 v103; // x9
  EventTutorialEntity_TextTuto_o *v104; // x8
  int32_t v105; // w25
  struct EventTutorialEntity_TextTuto_array *v106; // x8
  __int64 v107; // x9
  EventTutorialEntity_TextTuto_o *v108; // x8
  System_String_o *v109; // x23
  System_String_o *v110; // x24
  CommonUI_o *v111; // x22
  System_Action_o *v112; // x26
  struct EventTutorialEntity_TextTuto_array *v113; // x8
  __int64 v114; // x9
  EventTutorialEntity_TextTuto_o *v115; // x8
  int32_t dlgFontSize; // w19
  System_Nullable_int__o p_messageWidgetSizeX; // x0
  struct EventTutorialEntity_TextTuto_array *v118; // x8
  __int64 v119; // x9
  EventTutorialEntity_TextTuto_o *v120; // x8
  struct EventTutorialEntity_TextTuto_array *v121; // x8
  __int64 v122; // x9
  EventTutorialEntity_TextTuto_o *v123; // x8
  System_String_o *v124; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v126; // x19
  System_Action_o *v127; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector2_o v129; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v130; // 0:s2.4,4:s3.4,8:s4.4

  while ( 1 )
  {
    v5 = transitionQuest;
    v6 = callback;
    v7 = idx;
    v8 = this;
    if ( (byte_4C27498 & 1) == 0 )
    {
      sub_1C2D490(&System_Action_FortificationNotifyDialog__TypeInfo);
      sub_1C2D490(&System_Action_TypeInfo);
      sub_1C2D490(&Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
      sub_1C2D490(&ScrollMessageDialog_ClickDelegate_TypeInfo);
      sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
      sub_1C2D490(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
      sub_1C2D490(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
      sub_1C2D490(&DataManager_TypeInfo);
      sub_1C2D490(&LocalizationManager_TypeInfo);
      sub_1C2D490(&Method_System_Nullable_int___ctor__);
      sub_1C2D490(&UnityEngine_Object_TypeInfo);
      sub_1C2D490(&UnityEngine_Rect___TypeInfo);
      sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      sub_1C2D490(&string_TypeInfo);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__0__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__10__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__11__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__1__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__2__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__3__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__4__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__6__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__7__);
      sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__9__);
      sub_1C2D490(&EventTutorialEntity___c__DisplayClass19_0_TypeInfo);
      sub_1C2D490(&StringLiteral_10895/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
      sub_1C2D490(&StringLiteral_21183/*"left"*/);
      sub_1C2D490(&StringLiteral_6264/*"EventUI/Prefabs/80400"*/);
      sub_1C2D490(&StringLiteral_6831/*"FortificationNotifyDialog"*/);
      sub_1C2D490(&StringLiteral_23095/*"right"*/);
      sub_1C2D490(&StringLiteral_10896/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
      byte_4C27498 = 1;
    }
    v9 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass19_0_TypeInfo);
    EventTutorialEntity___c__DisplayClass19_0___ctor((EventTutorialEntity___c__DisplayClass19_0_o *)v9, 0);
    if ( !v9 )
      goto LABEL_130;
    *(_QWORD *)(v9 + 16) = v8;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v8, v12, v13);
    *(_DWORD *)(v9 + 24) = v7;
    *(_QWORD *)(v9 + 32) = v6;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v6, v14, v15);
    *(_QWORD *)(v9 + 40) = v5;
    sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v5, v16, v17);
    textJson = v8->fields.textJson;
    if ( !textJson )
      goto LABEL_130;
    v20 = *(_DWORD *)(v9 + 24);
    max_length = textJson->max_length;
    if ( (int)v20 >= (int)max_length )
      goto LABEL_49;
    if ( v20 >= max_length )
      goto LABEL_131;
    v22 = textJson->m_Items[v20];
    if ( !v22 )
      goto LABEL_130;
    commonReleaseId = v22->fields.commonReleaseId;
    if ( commonReleaseId < 1 )
      goto LABEL_15;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
  v20 = *(_DWORD *)(v9 + 24);
LABEL_15:
  if ( v20 >= LODWORD(textJson->max_length) )
    goto LABEL_131;
  v24 = textJson->m_Items[v20];
  if ( !v24 )
    goto LABEL_130;
  textPos = v24->fields.textPos;
  v26 = 0.0;
  if ( !textPos )
  {
    v28 = 1;
    goto LABEL_23;
  }
  v27 = textPos->max_length;
  v28 = (_DWORD)v27 == 0;
  if ( !v27 )
  {
LABEL_23:
    v30 = 0.0;
    v29 = 0.0;
    goto LABEL_24;
  }
  if ( (unsigned int)v27 < 2 )
    goto LABEL_131;
  v29 = (float)textPos->m_Items[0];
  v30 = (float)textPos->m_Items[1];
LABEL_24:
  ptPos = v24->fields.ptPos;
  if ( ptPos )
  {
    v32 = ptPos->max_length;
    v33 = 0.0;
    if ( v32 )
    {
      if ( (unsigned int)v32 < 2 )
        goto LABEL_131;
      v33 = (float)ptPos->m_Items[0];
      v26 = (float)ptPos->m_Items[1];
    }
  }
  else
  {
    v33 = 0.0;
  }
  scrDlgTitle = v24->fields.scrDlgTitle;
  spacingY = v24->fields.spacingY;
  presentClassScoreResetItemIdList = (System_Collections_ICollection_o *)v24->fields.presentClassScoreResetItemIdList;
  Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v37 = v8->fields.textJson;
    if ( !v37 )
      goto LABEL_130;
    v38 = *(int *)(v9 + 24);
    if ( (unsigned int)v38 >= LODWORD(v37->max_length) )
      goto LABEL_131;
    v39 = v37->m_Items[v38];
    if ( !v39 )
      goto LABEL_130;
    if ( v39->fields.isFortification )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v41 = (System_Action_object__o *)sub_1C2D6DC(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v41,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__1__,
        0);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6264/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_6831/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v41,
          0,
          (const MethodInfo_30C4E74 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_130:
      sub_1C2D6EC(Master_object, v11);
    }
    if ( v39->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v39->fields.releaseClassBoardBaseIds;
      if ( !releaseClassBoardBaseIds || !releaseClassBoardBaseIds->max_length )
      {
LABEL_49:
        ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0);
        return;
      }
      addClassIds = v39->fields.addClassIds;
      if ( addClassIds && addClassIds->max_length )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( LODWORD(releaseClassBoardBaseIds->max_length) )
        {
          v50 = releaseClassBoardBaseIds->m_Items[0];
          v51 = (CommonUI_o *)Master_object;
          v52 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v52,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__6__,
            0);
          if ( !v51 )
            goto LABEL_130;
          CommonUI__OpenClassBoardAddClassDialog(v51, v50, addClassIds, v52, 0);
          return;
        }
        goto LABEL_131;
      }
      v71 = 0.0;
      if ( v8->fields.openType == 100 )
      {
        Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_130;
        SceneRootComponent_object = (UnityEngine_Object_o *)AvalonSceneManager__GetSceneRootComponent_object_(
                                                              (AvalonSceneManager_o *)Master_object,
                                                              91,
                                                              (const MethodInfo_30B6634 *)Method_AvalonSceneManager_GetSceneRootComponent_ClassBoardRootComponent___);
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
          v71 = monitor[73];
        }
      }
      v74 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(
        v75,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__7__,
        0);
      if ( !v74 )
        goto LABEL_130;
      CommonUI__OpenClassBoardReleaseDialog(
        (CommonUI_o *)v74,
        releaseClassBoardBaseIds,
        v75,
        v8->fields.openType == 100,
        v71,
        0);
    }
    else
    {
      Master_object = (CommonReleaseMaster_o *)BasicHelper__IsNullOrEmpty(presentClassScoreResetItemIdList, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v53 = v8->fields.textJson;
        if ( !v53 )
          goto LABEL_130;
        v54 = *(int *)(v9 + 24);
        if ( (unsigned int)v54 >= LODWORD(v53->max_length) )
          goto LABEL_131;
        v55 = v53->m_Items[v54];
        if ( !v55 )
          goto LABEL_130;
        v56 = spacingY & ~(spacingY >> 31);
        if ( v55->fields.isQuestRelease )
        {
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v57 = v8->fields.textJson;
          if ( !v57 )
            goto LABEL_130;
          v58 = *(int *)(v9 + 24);
          if ( (unsigned int)v58 >= LODWORD(v57->max_length) )
            goto LABEL_131;
          v59 = v57->m_Items[v58];
          if ( !v59 )
            goto LABEL_130;
          v60 = (CommonUI_o *)Master_object;
          text = v59->fields.text;
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10896/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0);
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_10895/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0);
          v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v65,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__3__,
            0);
          v66 = v8->fields.textJson;
          if ( !v66 )
            goto LABEL_130;
          v67 = *(int *)(v9 + 24);
          if ( (unsigned int)v67 >= LODWORD(v66->max_length) )
            goto LABEL_131;
          v68 = v66->m_Items[v67];
          if ( !v68 || !v60 )
            goto LABEL_130;
          CommonUI__OpenConfirmDecideDlg(
            v60,
            Empty,
            text,
            v63,
            v64,
            v65,
            v68->fields.dlgFontSize,
            0.0,
            15.0,
            v56,
            0,
            0,
            240,
            0,
            0,
            0,
            0,
            0);
        }
        else if ( v55->fields.isSelectBonus )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v76 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = v8->fields.eventId;
          v78 = (SelectBonusBaseMaster_o *)v76;
          v79 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v79,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__4__,
            0);
          if ( !v78 )
            goto LABEL_130;
          SelectBonusBaseMaster__OpenSelectBonusDialog(v78, eventId, v79, 0);
        }
        else if ( v55->fields.dlgFontSize < 1 )
        {
          rects = v55->fields.rects;
          if ( !rects )
            goto LABEL_130;
          Master_object = (CommonReleaseMaster_o *)sub_1C2D538(UnityEngine_Rect___TypeInfo, LODWORD(rects->max_length));
          if ( !Master_object )
            goto LABEL_130;
          v91 = v8->fields.textJson;
          if ( !v91 )
            goto LABEL_130;
          MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
          v93 = (UnityEngine_Rect_array *)Master_object;
          v94 = 1;
          v95 = MasterName_k__BackingField > 0;
          while ( 1 )
          {
            v96 = *(int *)(v9 + 24);
            if ( (unsigned int)v96 >= LODWORD(v91->max_length) )
              goto LABEL_131;
            v97 = v91->m_Items[v96];
            if ( !v97 )
              goto LABEL_130;
            if ( !v95 )
              break;
            v98 = v97->fields.rects;
            if ( !v98 )
              goto LABEL_130;
            v99 = v94 - 1;
            if ( (unsigned int)(v94 - 1) >= LODWORD(v98->max_length) )
              goto LABEL_131;
            v100 = (int32x4_t *)v98->m_Items[v99];
            if ( !v100 )
              goto LABEL_130;
            if ( v99 >= (unsigned int)MasterName_k__BackingField )
              goto LABEL_131;
            *((float32x4_t *)&Master_object->fields.revision + v99) = vcvtq_f32_s32(v100[1]);
            MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
            v91 = v8->fields.textJson;
            v95 = v94++ < MasterName_k__BackingField;
            if ( !v91 )
              goto LABEL_130;
          }
          Master_object = (CommonReleaseMaster_o *)BasicHelper__EqualExceptNullOrEmpty(
                                                     v97->fields.textAlign,
                                                     (System_String_o *)StringLiteral_21183/*"left"*/,
                                                     0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v101 = 1;
          }
          else
          {
            v118 = v8->fields.textJson;
            if ( !v118 )
              goto LABEL_130;
            v119 = *(int *)(v9 + 24);
            if ( (unsigned int)v119 >= LODWORD(v118->max_length) )
              goto LABEL_131;
            v120 = v118->m_Items[v119];
            if ( !v120 )
              goto LABEL_130;
            if ( BasicHelper__EqualExceptNullOrEmpty(v120->fields.textAlign, (System_String_o *)StringLiteral_23095/*"right"*/, 0) )
              v101 = 3;
            else
              v101 = 2;
          }
          Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v121 = v8->fields.textJson;
          if ( !v121 )
            goto LABEL_130;
          v122 = *(int *)(v9 + 24);
          if ( (unsigned int)v122 >= LODWORD(v121->max_length) )
LABEL_131:
            sub_1C2D6F4(Master_object, v11, v18);
          v123 = v121->m_Items[v122];
          if ( !v123 )
            goto LABEL_130;
          v124 = v123->fields.text;
          dlgBgId = v123->fields.dlgBgId;
          v126 = (CommonUI_o *)Master_object;
          v127 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v127,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__11__,
            0);
          if ( !v126 )
            goto LABEL_130;
          v130.fields.z = 0.0;
          v129.fields.x = v29;
          v129.fields.y = v30;
          v130.fields.x = v33;
          v130.fields.y = v26;
          CommonUI__OpenEventTutorialNotificationDialog(v126, v124, v93, v129, v130, dlgBgId, v101, v127, 0, v56, 0);
        }
        else
        {
          Master_object = (CommonReleaseMaster_o *)System_String__IsNullOrEmpty(v55->fields.messageWidgetSizeX, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v80 = v8->fields.textJson;
            if ( !v80 )
              goto LABEL_130;
            v81 = *(int *)(v9 + 24);
            if ( (unsigned int)v81 >= LODWORD(v80->max_length) )
              goto LABEL_131;
            v82 = v80->m_Items[v81];
            if ( !v82 )
              goto LABEL_130;
            title = v82->fields.title;
            v84 = v82->fields.text;
            v85 = (CommonUI_o *)Master_object;
            v86 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v86,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__9__,
              0);
            v87 = v8->fields.textJson;
            if ( !v87 )
              goto LABEL_130;
            v88 = *(int *)(v9 + 24);
            if ( (unsigned int)v88 >= LODWORD(v87->max_length) )
              goto LABEL_131;
            v89 = v87->m_Items[v88];
            if ( !v89 || !v85 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31168676(
              v85,
              title,
              v84,
              v86,
              v30,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              v89->fields.dlgFontSize,
              0,
              v56,
              v28,
              0,
              0);
          }
          else
          {
            v102 = v8->fields.textJson;
            if ( !v102 )
              goto LABEL_130;
            v103 = *(int *)(v9 + 24);
            if ( (unsigned int)v103 >= LODWORD(v102->max_length) )
              goto LABEL_131;
            v104 = v102->m_Items[v103];
            if ( !v104 )
              goto LABEL_130;
            v105 = System_Int32__Parse(v104->fields.messageWidgetSizeX, 0);
            Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v106 = v8->fields.textJson;
            if ( !v106 )
              goto LABEL_130;
            v107 = *(int *)(v9 + 24);
            if ( (unsigned int)v107 >= LODWORD(v106->max_length) )
              goto LABEL_131;
            v108 = v106->m_Items[v107];
            if ( !v108 )
              goto LABEL_130;
            v109 = v108->fields.title;
            v110 = v108->fields.text;
            v111 = (CommonUI_o *)Master_object;
            v112 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(
              v112,
              (Il2CppObject *)v9,
              Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__10__,
              0);
            v113 = v8->fields.textJson;
            if ( !v113 )
              goto LABEL_130;
            v114 = *(int *)(v9 + 24);
            if ( (unsigned int)v114 >= LODWORD(v113->max_length) )
              goto LABEL_131;
            v115 = v113->m_Items[v114];
            if ( !v115 )
              goto LABEL_130;
            dlgFontSize = v115->fields.dlgFontSize;
            p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
            messageWidgetSizeX = 0;
            System_Nullable_int____ctor(
              p_messageWidgetSizeX,
              v105,
              (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
            if ( !v111 )
              goto LABEL_130;
            CommonUI__OpenNotificationDialog_31168676(
              v111,
              v109,
              v110,
              v112,
              v30,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              dlgFontSize,
              0,
              v56,
              v28,
              messageWidgetSizeX,
              0);
          }
        }
      }
      else
      {
        v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v70 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v70,
          (Il2CppObject *)v9,
          Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__2__,
          0);
        if ( !v69 )
          goto LABEL_130;
        CommonUI__OpenTutorialItemGetDialog(
          (CommonUI_o *)v69,
          (System_Int32_array *)presentClassScoreResetItemIdList,
          v70,
          0);
      }
    }
  }
  else
  {
    Master_object = (CommonReleaseMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v42 = v8->fields.textJson;
    if ( !v42 )
      goto LABEL_130;
    v43 = *(int *)(v9 + 24);
    if ( (unsigned int)v43 >= LODWORD(v42->max_length) )
      goto LABEL_131;
    v44 = v42->m_Items[v43];
    if ( !v44 )
      goto LABEL_130;
    v45 = v44->fields.text;
    v46 = (CommonUI_o *)Master_object;
    v47 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C2D6DC(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v47,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__0__,
      0);
    if ( !v46 )
      goto LABEL_130;
    CommonUI__OpenScrollMessageDialog(v46, scrDlgTitle, v45, 10, v47, 0, 0, 0);
  }
}


void EventTutorialEntity__TransitionQuest(EventTutorialEntity_o *this, int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C27497 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C27497 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C2431C )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2431C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


System_Int32_array_array *EventTutorialEntity__getTargets(EventTutorialEntity_o *this, const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *v7; // x8
  System_String_o *v8; // x20
  __int64 v9; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v12; // x0
  EventTutorialEntity___c_c *v13; // x8
  System_Object_array *v14; // x22
  System_Converter_object__int__o *_9__11_0; // x23
  Il2CppObject *v16; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4C27491 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_ConvertAll_string__int___);
    sub_1C2D490(&System_Converter_string__int__TypeInfo);
    sub_1C2D490(&int_____TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__getTargets_b__11_0__);
    sub_1C2D490(&EventTutorialEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C27491 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C2D538(int_____TypeInfo, 1);
  v4 = (System_String_o *)sub_1C2D538(int_____TypeInfo, LODWORD(targetIds->max_length));
  v7 = this->fields.targetIds;
  if ( !v7 )
LABEL_20:
    sub_1C2D6EC(v4, v5);
  v8 = v4;
  v9 = 0;
  p_monitor = (CGThumbnailListItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (int)v9 >= max_length )
      return (System_Int32_array_array *)v8;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_23;
    v4 = v7->m_Items[v9];
    if ( v4 )
    {
      v4 = System_String__Replace_63504412(
             v4,
             (System_String_o *)StringLiteral_15801/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      if ( v4 )
      {
        v4 = System_String__Replace_63504412(
               v4,
               (System_String_o *)StringLiteral_16055/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0);
        if ( v4 )
        {
          v12 = System_String__Split(v4, 0x2Cu, 0, 0);
          v13 = EventTutorialEntity___c_TypeInfo;
          v14 = (System_Object_array *)v12;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v13 = EventTutorialEntity___c_TypeInfo;
          }
          _9__11_0 = (System_Converter_object__int__o *)v13->static_fields->__9__11_0;
          if ( !_9__11_0 )
          {
            if ( !v13->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v13);
              v13 = EventTutorialEntity___c_TypeInfo;
            }
            v16 = (Il2CppObject *)v13->static_fields->__9;
            _9__11_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__11_0, v16, Method_EventTutorialEntity___c__getTargets_b__11_0__, 0);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__11_0 = (struct System_Converter_string__int__o *)_9__11_0;
            sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v18, v19);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v14,
                                    (System_Converter_TInput__TOutput__o *)_9__11_0,
                                    (const MethodInfo_31D1FD4 *)Method_System_Array_ConvertAll_string__int___);
          if ( v8 )
          {
            if ( (unsigned int)v9 >= LODWORD(v8[1].klass) )
LABEL_23:
              sub_1C2D6F4(v4, v5, v6);
            p_monitor->klass = (CGThumbnailListItem_c *)v4;
            sub_1C2D434(p_monitor, (int32_t)v4, v6, v20);
            v7 = this->fields.targetIds;
            ++v9;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v7 )
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
  __int64 v12; // x2
  System_Int32_array_array *Targets; // x21
  intptr_t Instance; // x0
  int32_t v15; // w8
  const MethodInfo *v16; // x5
  il2cpp_array_size_t v17; // x8
  int v18; // w9
  System_Int32_array *v19; // x10
  int v20; // w11
  int32_t v21; // w10
  il2cpp_array_size_t v22; // x8
  System_Int32_array *v23; // x9
  il2cpp_array_size_t max_length; // x8
  int v25; // w9
  System_Int32_array *v26; // x10
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  il2cpp_array_size_t v29; // x8
  QuestGroupMaster_o *v30; // x21
  unsigned __int64 v31; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  il2cpp_array_size_t v33; // x8
  int v34; // w9
  System_Int32_array *v35; // x10
  int v36; // w11
  int32_t v37; // w12
  int32_t v38; // w12
  int32_t v39; // w10
  __int64 v40; // x22
  il2cpp_array_size_t v41; // x8
  int v42; // w9
  System_Int32_array *v43; // x10
  int v44; // w11
  int32_t v45; // w12
  int32_t v46; // w10
  TerminalSceneComponent_c *v47; // x0
  UnityEngine_Object_o *mInstance; // x20

  if ( (byte_4C27493 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    byte_4C27493 = 1;
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
      v25 = 0;
      while ( 2 )
      {
        v26 = Targets->m_Items[v25];
        if ( !v26 )
          goto LABEL_120;
        if ( SLODWORD(v26->max_length) >= 1 && v26->m_Items[0] != qId )
        {
          ++v25;
          Instance = 0;
          if ( (_DWORD)max_length == v25 )
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
        v17 = Targets->max_length;
        if ( v17 )
        {
          if ( (int)v17 >= 1 )
          {
            v18 = 0;
            while ( 1 )
            {
              v19 = Targets->m_Items[v18];
              if ( !v19 )
                break;
              v20 = v19->max_length;
              if ( v20 < 1 )
                goto LABEL_4;
              if ( v19->m_Items[0] == qId )
              {
                if ( v20 < 2 )
                  goto LABEL_4;
                v21 = v19->m_Items[1];
                if ( v21 == ex1 || !v21 )
                  goto LABEL_4;
              }
              ++v18;
              Instance = 0;
              if ( (_DWORD)v17 == v18 )
                return Instance;
            }
LABEL_120:
            sub_1C2D6EC(Instance, v11);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (intptr_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v29 = condIds->max_length;
      if ( (int)v29 < 1 )
        goto LABEL_118;
      v30 = (QuestGroupMaster_o *)Instance;
      v31 = 0;
      while ( v31 < (unsigned int)v29 )
      {
        if ( !v30 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v30, condIds->m_Items[v31], 2, 0);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___)
            & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v29) = condIds->max_length;
        ++v31;
        Instance = 0;
        if ( (__int64)v31 >= (int)v29 )
          return Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v33 = Targets->max_length;
      if ( !v33 )
        goto LABEL_4;
      if ( (int)v33 < 1 )
        goto LABEL_118;
      v34 = 0;
      while ( 2 )
      {
        v35 = Targets->m_Items[v34];
        if ( !v35 )
          goto LABEL_120;
        v36 = v35->max_length;
        if ( v36 >= 1 )
        {
          if ( v35->m_Items[0] != qId
            || v36 >= 2
            && ((v37 = v35->m_Items[1], v37 != ex1) && v37
             || v36 >= 3
             && ((v38 = v35->m_Items[2], v38 != ex2) && v38 || v36 >= 4 && (v39 = v35->m_Items[3], v39 != ex3) && v39)) )
          {
            ++v34;
            Instance = 0;
            if ( (_DWORD)v33 == v34 )
              return Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v41 = Targets->max_length;
      if ( !v41 || (int)v41 < 1 )
        goto LABEL_4;
      v42 = 0;
      while ( 2 )
      {
        v43 = Targets->m_Items[v42];
        if ( !v43 )
          goto LABEL_120;
        v44 = v43->max_length;
        if ( v44 < 1 )
          goto LABEL_118;
        if ( v43->m_Items[0] != qId )
          goto LABEL_94;
        if ( v44 < 2 )
          goto LABEL_118;
        v45 = v43->m_Items[1];
        if ( v45 != ex1 )
        {
          if ( v45 )
            goto LABEL_94;
        }
        if ( v44 < 3 )
          goto LABEL_118;
        v46 = v43->m_Items[2];
        Instance = 0;
        if ( v46 != ex2 )
        {
          if ( v46 )
          {
LABEL_94:
            if ( (_DWORD)v41 == ++v42 )
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
      v22 = Targets->max_length;
      if ( !v22 )
        goto LABEL_4;
      if ( (_DWORD)v22 != 1 )
      {
        if ( (int)v22 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return Instance;
        }
        goto LABEL_74;
      }
      v23 = Targets->m_Items[0];
      if ( !v23 )
        goto LABEL_120;
      if ( LODWORD(v23->max_length) != 1 || v23->m_Items[0] )
      {
LABEL_74:
        v40 = 0;
        while ( (unsigned int)v40 < (unsigned int)v22 )
        {
          Instance = (intptr_t)Targets->m_Items[v40];
          if ( !Instance )
            goto LABEL_120;
          if ( *(int *)(Instance + 24) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v22) = Targets->max_length;
          ++v40;
          Instance = 0;
          if ( (int)v40 >= (int)v22 )
            return Instance;
        }
LABEL_121:
        sub_1C2D6F4(Instance, v11, v12);
      }
LABEL_4:
      v15 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v15 && v15 != 11 )
      {
        if ( v15 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (intptr_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (intptr_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v16);
        }
      }
      return Instance;
    case 0x43:
      if ( !Targets || !Targets->max_length )
        goto LABEL_4;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      v47 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v47 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v47->static_fields->mInstance;
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

  if ( (byte_4C27492 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C27492 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  value = 0;
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40242780(flagType, eventId, 0) )
  {
    return 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C2472D )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C2472D = 1;
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
      if ( !byte_4C2472D )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C2472D = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v17->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
      if ( !ForcePlayEventTutorialArray_k__BackingField )
        sub_1C2D6EC(0, v13);
      System_Collections_Generic_HashSet_object___GetEnumerator(
        &v22,
        ForcePlayEventTutorialArray_k__BackingField,
        (const MethodInfo_36418F0 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_3513F98 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__) )
      {
        if ( !v22.fields._current )
          sub_1C2D6EC(0, v19);
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               (System_Collections_Generic_Dictionary_int__int__o *)v22.fields._current,
               this->fields.eventId,
               &value,
               (const MethodInfo_33D9E5C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__)
          && value == this->fields.flagType )
        {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose(
            &v22,
            (const MethodInfo_3513F94 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
          return 1;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_3513F94 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
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

  if ( (byte_4C274A5 & 1) == 0 )
  {
    sub_1C2D490(&EventTutorialEntity___c_TypeInfo);
    byte_4C274A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( !EventTutorialEntity__HasBeforeAction(_4__this, 0) )
  {
LABEL_5:
    ActionExtensions__Call(action, 0);
    return;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, 0) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1C2D6EC(_4__this, action);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 0, action, 0);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x24
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o **v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct EventTutorialEntity_o *_4__this; // x19
  struct System_Int32_array *imageIds; // x8
  struct EventTutorialEntity_o *v15; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v17; // x20
  System_Action_int__o *_9__4; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct EventTutorialEntity_o *v21; // x8
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventTutorialEntity_o *v25; // x8
  char v26; // w22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x26
  System_String_o *DialogPrefabName; // x0
  System_String_o *v30; // x27
  __int64 v31; // x23
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject **v34; // x22
  System_Collections_Generic_List_object__o *v35; // x24
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct EventTutorialEntity_o *v38; // x8
  __int64 v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  struct EventTutorialEntity_o *v43; // x8
  struct System_Int32_array *condIds; // x8
  System_Collections_Generic_List_AssistEntity__o *AssistEntityListByShopGroupId; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x21
  System_Action_object__o *v49; // x23
  __int64 v50; // x8
  __int64 v51; // x8
  System_Action_o *klass; // x4
  __int64 *v53; // x8
  CommonUI_o *v54; // x0
  int32_t condType; // w8
  Il2CppObject *Master_object; // x25
  System_String_o *v57; // x20
  int32_t markSprite; // w26
  __int64 v59; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 *v62; // x22
  __int64 v63; // x25
  EventEquipSkillPartsMaster_o *v64; // x22
  __int64 v65; // x23
  Il2CppObject *v66; // x22
  int32_t v67; // w23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x22
  __int64 v74; // x8
  __int64 v75; // x8
  const MethodInfo_30C4E74 *v76; // x5
  System_String_o *v77; // x1
  System_String_o *v78; // x2
  struct EventTutorialEntity_o *v79; // x8
  __int64 v80; // x24
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x25
  struct EventTutorialEntity_o *v84; // x8
  struct System_Int32_array *v85; // x8
  System_Int32_array *QuestIdListByGroupId; // x23
  System_String_o *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  Il2CppObject *v90; // x21
  System_Action_object__o *v91; // x22
  __int64 v92; // x8
  __int64 v93; // x8
  System_Action_T__o *v94; // x3
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  struct EventTutorialEntity_o *v98; // x8
  CommonUI_o *v99; // x19
  Il2CppObject *v100; // x0
  System_String_o *v101; // x20
  System_String_o *v102; // x0
  Il2CppObject *v103; // x24
  System_String_o *v104; // x21
  int32_t eventId; // [xsp+Ch] [xbp-74h] BYREF
  QuestPhaseEntity_o *v106; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C274A6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_EventCommonImageDialog__TypeInfo);
    sub_1C2D490(&System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
    sub_1C2D490(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
    sub_1C2D490(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___);
    sub_1C2D490(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___);
    sub_1C2D490(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__4__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_1__OpenTutorial_b__6__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_1_TypeInfo);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_3_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_4__OpenTutorial_b__7__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_4_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_5__OpenTutorial_b__8__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_5_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_6__OpenTutorial_b__9__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_6_TypeInfo);
    sub_1C2D490(&StringLiteral_6205/*"EventEquipSkillPartsRenoCompletionDialog"*/);
    sub_1C2D490(&StringLiteral_5596/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/);
    sub_1C2D490(&StringLiteral_2151/*"AddPartsDialog"*/);
    sub_1C2D490(&StringLiteral_5594/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/);
    sub_1C2D490(&StringLiteral_6265/*"EventUI/Prefabs/{0}"*/);
    sub_1C2D490(&StringLiteral_6206/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/);
    byte_4C274A6 = 1;
  }
  v106 = 0;
  entity = 0;
  v5 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_125;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = action;
  v10 = (System_Action_o **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)action, v11, v12);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_125;
  imageIds = _4__this->fields.imageIds;
  if ( imageIds && imageIds->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = this->fields.__4__this;
    if ( v15 && Instance )
    {
      CommonUI__OpenTutorialImageDialog_31194140(
        Instance,
        v15->fields.imageIds,
        v15->fields.flagType,
        v15->fields.eventId,
        *v10,
        0,
        0,
        0);
      return;
    }
LABEL_125:
    sub_1C2D6EC(Instance, v7);
  }
  textJson = _4__this->fields.textJson;
  if ( textJson && textJson->max_length )
  {
    v17 = *v10;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__4__,
        0);
      this->fields.__9__4 = _9__4;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v19, v20);
    }
    EventTutorialEntity__TextTutorialChain(_4__this, 0, v17, _9__4, 0);
    return;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.script, 0) )
    goto LABEL_42;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_125;
  if ( !EventTutorialEntity__GetDialogPrefabName((EventTutorialEntity_o *)Instance, 0) )
  {
LABEL_42:
    ActionExtensions__Call(*v10, 0);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_125;
  if ( !Instance )
    goto LABEL_125;
  Instance = (CommonUI_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v21->fields.eventId,
                             (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_125;
  v26 = (char)Instance;
  eventId = v25->fields.eventId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v22, v23, v24);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6265/*"EventUI/Prefabs/{0}"*/, v27, 0);
  if ( !this->fields.__4__this )
    goto LABEL_125;
  v28 = (System_String_o *)Instance;
  DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, 0);
  if ( (v26 & 1) != 0 )
  {
    v30 = DialogPrefabName;
    Instance = (CommonUI_o *)entity;
    if ( !entity )
      goto LABEL_125;
    if ( EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)entity, 0) )
    {
      v31 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v31, 0);
      if ( !v31 )
        goto LABEL_125;
      *(_QWORD *)(v31 + 24) = v5;
      v34 = (Il2CppObject **)(v31 + 24);
      sub_1C2D434((CGThumbnailListItem_o *)(v31 + 24), v5, v32, v33);
      v35 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
      *(_QWORD *)(v31 + 16) = v35;
      sub_1C2D434((CGThumbnailListItem_o *)(v31 + 16), (int32_t)v35, v36, v37);
      v38 = this->fields.__4__this;
      if ( !v38 )
        goto LABEL_125;
      if ( v38->fields.condType == 67 )
      {
        Instance = (CommonUI_o *)System_String__Equals_63493896(v30, (System_String_o *)StringLiteral_2151/*"AddPartsDialog"*/, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v39 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v39, 0);
          if ( !v39 )
            goto LABEL_125;
          *(_QWORD *)(v39 + 24) = v31;
          sub_1C2D434((CGThumbnailListItem_o *)(v39 + 24), v31, v40, v41);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
          v43 = this->fields.__4__this;
          if ( !v43 )
            goto LABEL_125;
          condIds = v43->fields.condIds;
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
            *(_QWORD *)(v39 + 16) = AssistEntityListByShopGroupId;
            sub_1C2D434((CGThumbnailListItem_o *)(v39 + 16), (int32_t)AssistEntityListByShopGroupId, v46, v47);
            v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v49 = (System_Action_object__o *)sub_1C2D6DC(System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
            System_Action_object____ctor(
              v49,
              (Il2CppObject *)v39,
              Method_EventTutorialEntity___c__DisplayClass15_4__OpenTutorial_b__7__,
              0);
            v50 = *(_QWORD *)(v39 + 24);
            if ( !v50 )
              goto LABEL_125;
            v51 = *(_QWORD *)(v50 + 24);
            if ( !v51 || !v48 )
              goto LABEL_125;
            klass = *(System_Action_o **)(v51 + 16);
            v53 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___;
            v54 = (CommonUI_o *)v48;
LABEL_91:
            v76 = (const MethodInfo_30C4E74 *)*v53;
            v77 = v28;
            v78 = v30;
LABEL_123:
            v94 = (System_Action_T__o *)v49;
LABEL_124:
            CommonUI__LoadAndCreateDialog_object_(v54, v77, v78, v94, klass, v76);
            return;
          }
          goto LABEL_126;
        }
        v38 = this->fields.__4__this;
        if ( !v38 )
          goto LABEL_125;
      }
      condType = v38->fields.condType;
      if ( condType != 46 && condType != 1 )
        goto LABEL_92;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23EF3 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23EF3 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      v57 = v28;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      markSprite = (int32_t)Instance->fields.connectMark->fields.markSprite;
      if ( !byte_4C21463 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        byte_4C21463 = 1;
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
                                 &v106,
                                 markSprite,
                                 LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
                                 0);
      v28 = v57;
      if ( ((unsigned __int8)Instance & 1) == 0
        || (Instance = (CommonUI_o *)System_String__Equals_63493896(v30, (System_String_o *)StringLiteral_6205/*"EventEquipSkillPartsRenoCompletionDialog"*/, 0),
            ((unsigned __int8)Instance & 1) == 0) )
      {
LABEL_92:
        v79 = this->fields.__4__this;
        if ( !v79 )
          goto LABEL_125;
        if ( v79->fields.condType == 51 && System_String__Equals_63493896(v30, (System_String_o *)StringLiteral_6206/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, 0) )
        {
          v80 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_6_TypeInfo);
          System_Object___ctor((Il2CppObject *)v80, 0);
          if ( !v80 )
            goto LABEL_125;
          *(_QWORD *)(v80 + 32) = v31;
          v83 = v80 + 32;
          sub_1C2D434((CGThumbnailListItem_o *)(v80 + 32), v31, v81, v82);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestGroupMaster___);
          v84 = this->fields.__4__this;
          if ( !v84 )
            goto LABEL_125;
          v85 = v84->fields.condIds;
          if ( !v85 )
            goto LABEL_125;
          if ( !LODWORD(v85->max_length) )
            goto LABEL_126;
          if ( !Instance )
            goto LABEL_125;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   v85->m_Items[0],
                                   2,
                                   0);
          if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestIdListByGroupId, 0) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
            if ( !*(_QWORD *)v83 || !Instance )
              goto LABEL_125;
            if ( EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                   (EventEquipSkillPartsMaster_o *)Instance,
                   (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(*(_QWORD *)v83 + 16LL),
                   QuestIdListByGroupId,
                   0,
                   0) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
              if ( !Instance )
                goto LABEL_125;
              if ( AssistMaster__TryGetValidAssistEntityList_41554388(
                     (AssistMaster_o *)Instance,
                     (System_Collections_Generic_List_AssistEntity__o **)(v80 + 16),
                     QuestIdListByGroupId,
                     0) )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v87 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, 0);
                *(_QWORD *)(v80 + 24) = v87;
                sub_1C2D434((CGThumbnailListItem_o *)(v80 + 24), (int32_t)v87, v88, v89);
                v90 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v91 = (System_Action_object__o *)sub_1C2D6DC(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
                System_Action_object____ctor(
                  v91,
                  (Il2CppObject *)v80,
                  Method_EventTutorialEntity___c__DisplayClass15_6__OpenTutorial_b__9__,
                  0);
                v92 = *(_QWORD *)(v80 + 32);
                if ( !v92 )
                  goto LABEL_125;
                v93 = *(_QWORD *)(v92 + 24);
                if ( !v93 || !v90 )
                  goto LABEL_125;
                klass = *(System_Action_o **)(v93 + 16);
                v54 = (CommonUI_o *)v90;
                v77 = v28;
                v78 = v30;
                v76 = (const MethodInfo_30C4E74 *)Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
                v94 = (System_Action_T__o *)v91;
                goto LABEL_124;
              }
            }
          }
        }
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v98 = this->fields.__4__this;
        if ( !v98 )
          goto LABEL_125;
        v99 = Instance;
        eventId = v98->fields.eventId;
        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v95, v96, v97);
        Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6265/*"EventUI/Prefabs/{0}"*/, v100, 0);
        if ( !this->fields.__4__this )
          goto LABEL_125;
        v101 = (System_String_o *)Instance;
        v102 = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, 0);
        v103 = *v34;
        v104 = v102;
        v49 = (System_Action_object__o *)sub_1C2D6DC(System_Action_EventCommonImageDialog__TypeInfo);
        System_Action_object____ctor(
          v49,
          v103,
          Method_EventTutorialEntity___c__DisplayClass15_1__OpenTutorial_b__6__,
          0);
        if ( !*v34 || !v99 )
          goto LABEL_125;
        klass = (System_Action_o *)(*v34)[1].klass;
        v54 = v99;
        v77 = v101;
        v78 = v104;
        v76 = (const MethodInfo_30C4E74 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___;
        goto LABEL_123;
      }
      v59 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_5_TypeInfo);
      System_Object___ctor((Il2CppObject *)v59, 0);
      if ( !v59 )
        goto LABEL_125;
      *(_QWORD *)(v59 + 32) = v31;
      v62 = (__int64 *)(v59 + 32);
      sub_1C2D434((CGThumbnailListItem_o *)(v59 + 32), v31, v60, v61);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
      v63 = *v62;
      if ( !*v62 )
        goto LABEL_125;
      v64 = (EventEquipSkillPartsMaster_o *)Instance;
      v65 = sub_1C2D538(int___TypeInfo, 1);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C23EF3 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C23EF3 = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v65 )
        goto LABEL_125;
      if ( *(_DWORD *)(v65 + 24) )
      {
        *(_DWORD *)(v65 + 32) = Instance->fields.connectMark->fields.markSprite;
        if ( !v64 )
          goto LABEL_125;
        EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
          v64,
          (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(v63 + 16),
          (System_Int32_array *)v65,
          0,
          0);
        v66 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !byte_4C23EF3 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23EF3 = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        v67 = (int32_t)Instance->fields.connectMark->fields.markSprite;
        if ( !byte_4C21463 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          byte_4C21463 = 1;
        }
        if ( !LODWORD(Instance->fields.dummyErrorSelectDialog) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v66 )
          goto LABEL_125;
        AssistMaster__TryGetValidAssistEntityList(
          (AssistMaster_o *)v66,
          (System_Collections_Generic_List_AssistEntity__o **)(v59 + 24),
          v67,
          LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
          1,
          0);
        Instance = (CommonUI_o *)v106;
        if ( !v106 )
          goto LABEL_125;
        RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(v106, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v69 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0);
        v70 = System_String__Format(RenoCompletionDialogText, v69, 0);
        *(_QWORD *)(v59 + 16) = v70;
        sub_1C2D434((CGThumbnailListItem_o *)(v59 + 16), (int32_t)v70, v71, v72);
        v73 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v49 = (System_Action_object__o *)sub_1C2D6DC(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
        System_Action_object____ctor(
          v49,
          (Il2CppObject *)v59,
          Method_EventTutorialEntity___c__DisplayClass15_5__OpenTutorial_b__8__,
          0);
        v74 = *(_QWORD *)(v59 + 32);
        if ( !v74 )
          goto LABEL_125;
        v75 = *(_QWORD *)(v74 + 24);
        if ( !v75 || !v73 )
          goto LABEL_125;
        klass = *(System_Action_o **)(v75 + 16);
        v53 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
        v54 = (CommonUI_o *)v73;
        goto LABEL_91;
      }
LABEL_126:
      sub_1C2D6F4(Instance, v7, v42);
    }
  }
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__10(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C274A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C274A9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( !EventTutorialEntity__HasAfterAction(_4__this, 0) )
  {
LABEL_5:
    ActionExtensions__Call(action, 0);
    return;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, 0) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1C2D6EC(_4__this, action);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 1, action, 0);
}


void EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__10; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4C274A8 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__10__);
    byte_4C274A8 = 1;
  }
  _9__10 = this->fields.__9__10;
  if ( !_9__10 )
  {
    _9__10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__10,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__10__,
      0);
    this->fields.__9__10 = _9__10;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__10, (int32_t)_9__10, v4, v5);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__10,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1C2D6EC(Request_object, v7);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4C274A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass15_2__OpenTutorial_b__5__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass15_2_TypeInfo);
    byte_4C274A7 = 1;
  }
  v5 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass15_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 16) = questId;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass15_2__OpenTutorial_b__5__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1C2D6EC(Request_object, v7);
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
    sub_1C2D6EC(this, 0);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct EventTutorialEntity___c__DisplayClass15_0_o *CS___8__locals2; // x8
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity___c__DisplayClass15_0_o *v9; // x8

  if ( (byte_4C274AA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventTutorialMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C274AA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventTutorialMaster___);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2
    || (_4__this = CS___8__locals2->fields.__4__this) == 0
    || !Master_object
    || (EventTutorialMaster__TutorialAfterUpdateQuestTree(
          (EventTutorialMaster_o *)Master_object,
          _4__this->fields.eventId,
          v6),
        (v9 = this->fields.CS___8__locals2) == 0)
    || (Master_object = (Il2CppObject *)v9->fields.__4__this) == 0 )
  {
    sub_1C2D6EC(Master_object, v5);
  }
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)Master_object, this->fields.questId, 0);
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
    sub_1C2D6EC(this, dialog);
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
    sub_1C2D6EC(this, dialog);
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
    sub_1C2D6EC(this, dialog);
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
  __int64 v4; // x1

  if ( (byte_4C274AB & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C274AB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void EventTutorialEntity___c__DisplayClass17_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C274AC & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C274AC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
        bool isOk,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
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
  if ( (byte_4C274AD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass19_0_o *)sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__5__);
    byte_4C274AD = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= LODWORD(textJson->max_length) )
    sub_1C2D6F4(this, dialog, method);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_11;
  text = v8->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__5__,
      0);
    v4->fields.__9__5 = _9__5;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !dialog )
LABEL_11:
    sub_1C2D6EC(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
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

  if ( (byte_4C274AE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventTutorialEntity___c__DisplayClass19_1__TextTutorialChain_b__8__);
    sub_1C2D490(&EventTutorialEntity___c__DisplayClass19_1_TypeInfo);
    byte_4C274AE = 1;
  }
  v5 = sub_1C2D6DC(EventTutorialEntity___c__DisplayClass19_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass19_1__TextTutorialChain_b__8__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31167972((CommonUI_o *)Instance, v11, 0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
}


void EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0);
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
  __int64 v2; // x2
  EventTutorialEntity___c__DisplayClass19_1_o *v3; // x19
  struct EventTutorialEntity___c__DisplayClass19_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v8; // x8
  int32_t questId; // w20
  struct EventTutorialEntity___c__DisplayClass19_0_o *v10; // x8

  v3 = this;
  if ( (byte_4C274AF & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass19_1_o *)sub_1C2D490(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C274AF = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
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
    sub_1C2D6F4(this, method, v2);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_14;
  questId = v8->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass19_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_14;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0);
  v10 = v3->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_14;
  if ( v3->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v10->fields.transitionQuest,
      questId,
      (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass19_1_o *)v10->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1C2D6EC(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    0);
}