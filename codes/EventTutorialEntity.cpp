void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6F6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C6F6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4B1C6F5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_4B1C6F5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_30190BC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventTutorialEntity__CreatePrimaryKey(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *__fastcall EventTutorialEntity__GetAfterActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C6F0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16577/*"afterActionVals"*/, method);
    byte_4B1C6F0 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16577/*"afterActionVals"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C6F1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16983/*"beforeActionSetup"*/, method);
    byte_4B1C6F1 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16983/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C6EF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16984/*"beforeActionVals"*/, method);
    byte_4B1C6EF = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16984/*"beforeActionVals"*/, 0LL);
}


System_String_o *__fastcall EventTutorialEntity__GetDialogPrefabName(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C6F4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18455/*"dialogPrefabName"*/, method);
    byte_4B1C6F4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18455/*"dialogPrefabName"*/, 0LL, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t __fastcall EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6F3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22879/*"resumeTransitionWar"*/, method);
    byte_4B1C6F3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22879/*"resumeTransitionWar"*/, 0, 0LL);
}


bool __fastcall EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6ED & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16577/*"afterActionVals"*/, method);
    byte_4B1C6ED = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16577/*"afterActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6EC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16984/*"beforeActionVals"*/, method);
    byte_4B1C6EC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16984/*"beforeActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeSetUpAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6EE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16983/*"beforeActionSetup"*/, method);
    byte_4B1C6EE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16983/*"beforeActionSetup"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C6F2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22879/*"resumeTransitionWar"*/, method);
    byte_4B1C6F2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22879/*"resumeTransitionWar"*/, 0LL);
}


bool __fastcall EventTutorialEntity__IsBlankEarthAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t openType; // w8
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x20
  BalanceConfig_c *v8; // x0
  Il2CppObject *v9; // x0

  if ( (byte_4B1C6EB & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_string___, v3);
    byte_4B1C6EB = 1;
  }
  if ( !EventTutorialEntity__HasBeforeAction(this, method)
    && !EventTutorialEntity__HasAfterAction(this, v4)
    && !EventTutorialEntity__HasBeforeSetUpAction(this, v5) )
  {
    return 0;
  }
  openType = this->fields.openType;
  if ( openType == 18 )
  {
    targetIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetIds;
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (Il2CppObject *)System_Int32__ToString((unsigned int)v8->static_fields + 860, 0LL);
    if ( System_Linq_Enumerable__Contains_object_(
           targetIds,
           v9,
           (const MethodInfo_3033D70 *)Method_System_Linq_Enumerable_Contains_string___) )
    {
      return 1;
    }
    openType = this->fields.openType;
  }
  return openType == 83;
}


bool __fastcall EventTutorialEntity__IsGrandScoreAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType == 100;
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
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
  __int64 v15; // x19
  MissionNotifyManager_o *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x20
  System_Action_object__o *v23; // x21
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  System_Action_object__o *v26; // x21
  const MethodInfo *v27; // x3
  System_Action_object__o *v28; // x21
  const MethodInfo *v29; // x3
  ActionChain_o *v30; // x21
  __int64 v31; // x20
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3

  if ( (byte_4B1C6E6 & 1) == 0 )
  {
    sub_1BCAFF8(&ActionChain_TypeInfo, callback);
    sub_1BCAFF8(&System_Action___TypeInfo, v5);
    sub_1BCAFF8(&System_Action_Action____TypeInfo, v6);
    sub_1BCAFF8(&System_Action_Action__TypeInfo, v7);
    sub_1BCAFF8(&System_Action_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__0__, v10);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__1__, v11);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__2__, v12);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__3__, v13);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_0_TypeInfo, v14);
    byte_4B1C6E6 = 1;
  }
  v15 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass15_0___ctor((EventTutorialEntity___c__DisplayClass15_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 24), (int32_t)callback, v20, v21);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v22 = sub_1BCB0A0(System_Action_Action____TypeInfo, 3LL);
  v23 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)v15,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__0__,
    0LL);
  if ( !v22 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v22 + 24) )
    goto LABEL_15;
  *(_QWORD *)(v22 + 32) = v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v23, v24, v25);
  v26 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__1__,
    0LL);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_15;
  *(_QWORD *)(v22 + 40) = v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 40), (int32_t)v26, v24, v27);
  v28 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v15,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__2__,
    0LL);
  if ( *(_DWORD *)(v22 + 24) <= 2u )
    goto LABEL_15;
  *(_QWORD *)(v22 + 48) = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 48), (int32_t)v28, v24, v29);
  v30 = (ActionChain_o *)sub_1BCB244(ActionChain_TypeInfo);
  ActionChain___ctor_48235252(v30, (System_Action_Action__array *)v22, 0LL);
  v31 = sub_1BCB0A0(System_Action___TypeInfo, 1LL);
  v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v15,
    Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__3__,
    0LL);
  if ( !v31 )
    goto LABEL_14;
  if ( !*(_DWORD *)(v31 + 24) )
LABEL_15:
    sub_1BCB25C(Instance, v17, v24);
  *(_QWORD *)(v31 + 32) = v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v31 + 32), (int32_t)v32, v24, v33);
  if ( !v30
    || (Instance = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                               (ChainableActionBase_o *)v30,
                                               (System_Action_array *)v31,
                                               0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCB254(Instance, v17);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)Instance, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v18; // x0
  System_Int32_array *v19; // x19
  CommonUI_o *v20; // x21
  System_Action_o *v21; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v23; // x21
  System_Action_int__o *v24; // x20
  const MethodInfo *v25; // x4

  if ( (byte_4B1C6E8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, callback);
    sub_1BCAFF8(&System_Action_TypeInfo, v5);
    sub_1BCAFF8(&Method_EventTutorialEntity_TransitionQuest__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__0__, v9);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__1__, v10);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass17_0_TypeInfo, v11);
    byte_4B1C6E8 = 1;
  }
  v12 = sub_1BCB244(EventTutorialEntity___c__DisplayClass17_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass17_0___ctor((EventTutorialEntity___c__DisplayClass17_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = this->fields.imageIds;
    v20 = (CommonUI_o *)v18;
    v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v20 )
    {
      CommonUI__OpenTutorialImageDialog_30790248(v20, v19, -1, 0, v21, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1BCB254(Instance, v14);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v23 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass17_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v24 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
    System_Action_int____ctor(v24, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v23, v24, v25);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v12 + 16), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity__PlayBeforeOrAfterAction(
        EventTutorialEntity_o *this,
        bool isAfter,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *v7; // x0
  System_String_array *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B1C6E7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, isAfter);
    byte_4B1C6E7 = 1;
  }
  if ( isAfter )
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetAfterActionVals(this, (const MethodInfo *)isAfter);
  else
    v7 = (System_Collections_ICollection_o *)EventTutorialEntity__GetBeforeActionVals(this, (const MethodInfo *)isAfter);
  v8 = (System_String_array *)v7;
  if ( BasicHelper__IsNullOrEmpty(v7, 0LL) )
    ActionExtensions__Call(callback, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v10);
  QuestAfterAction__PlaySpecifiedAction((QuestAfterAction_o *)Instance, v8, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity__TextTutorialChain(
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
  __int64 v25; // x1
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
  __int64 v38; // x20
  Il2CppObject *Master_object; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  il2cpp_array_size_t v49; // w9
  il2cpp_array_size_t max_length; // w10
  EventTutorialEntity_TextTuto_o *v51; // x10
  int32_t commonReleaseId; // w22
  EventTutorialEntity_TextTuto_o *v53; // x8
  struct System_Int32_array *textPos; // x9
  float v55; // s9
  __int64 v56; // x10
  char v57; // w27
  float v58; // s10
  float v59; // s8
  struct System_Int32_array *ptPos; // x9
  __int64 v61; // x10
  float v62; // s11
  System_String_o *scrDlgTitle; // x23
  int spacingY; // w24
  System_Collections_ICollection_o *presentClassScoreResetItemIdList; // x22
  struct EventTutorialEntity_TextTuto_array *v66; // x8
  __int64 v67; // x9
  EventTutorialEntity_TextTuto_o *v68; // x8
  Il2CppObject *Instance; // x19
  System_Action_object__o *v70; // x21
  struct EventTutorialEntity_TextTuto_array *v71; // x8
  __int64 v72; // x9
  EventTutorialEntity_TextTuto_o *v73; // x8
  System_String_o *v74; // x21
  CommonUI_o *v75; // x19
  ScrollMessageDialog_ClickDelegate_o *v76; // x22
  struct System_Int32_array *releaseClassBoardBaseIds; // x22
  struct System_Int32_array *addClassIds; // x21
  int32_t v79; // w22
  CommonUI_o *v80; // x19
  System_Action_o *v81; // x23
  struct EventTutorialEntity_TextTuto_array *v82; // x8
  __int64 v83; // x9
  EventTutorialEntity_TextTuto_o *v84; // x8
  int v85; // w21
  struct EventTutorialEntity_TextTuto_array *v86; // x8
  __int64 v87; // x9
  EventTutorialEntity_TextTuto_o *v88; // x8
  CommonUI_o *v89; // x22
  System_String_o *text; // x23
  System_String_o *Empty; // x24
  System_String_o *v92; // x25
  System_String_o *v93; // x26
  CommonConfirmDialog_ClickDelegate_o *v94; // x27
  struct EventTutorialEntity_TextTuto_array *v95; // x8
  __int64 v96; // x9
  EventTutorialEntity_TextTuto_o *v97; // x8
  Il2CppObject *v98; // x19
  System_Action_o *v99; // x21
  Il2CppObject *v100; // x21
  System_Action_o *v101; // x23
  Il2CppObject *v102; // x0
  int32_t eventId; // w19
  SelectBonusBaseMaster_o *v104; // x21
  System_Action_o *v105; // x22
  struct EventTutorialEntity_TextTuto_array *v106; // x8
  __int64 v107; // x9
  EventTutorialEntity_TextTuto_o *v108; // x8
  System_String_o *title; // x23
  System_String_o *v110; // x24
  CommonUI_o *v111; // x22
  System_Action_o *v112; // x25
  struct EventTutorialEntity_TextTuto_array *v113; // x8
  __int64 v114; // x9
  EventTutorialEntity_TextTuto_o *v115; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v117; // x10
  int monitor; // w9
  UnityEngine_Rect_array *v119; // x22
  int v120; // w8
  bool v121; // w11
  __int64 v122; // x12
  EventTutorialEntity_TextTuto_o *v123; // x10
  struct EventTutorialEntity_RectData_array *v124; // x10
  int v125; // w12
  int32x4_t *v126; // x10
  int32_t v127; // w23
  struct EventTutorialEntity_TextTuto_array *v128; // x8
  __int64 v129; // x9
  EventTutorialEntity_TextTuto_o *v130; // x8
  int32_t v131; // w25
  struct EventTutorialEntity_TextTuto_array *v132; // x8
  __int64 v133; // x9
  EventTutorialEntity_TextTuto_o *v134; // x8
  System_String_o *v135; // x23
  System_String_o *v136; // x24
  CommonUI_o *v137; // x22
  System_Action_o *v138; // x26
  struct EventTutorialEntity_TextTuto_array *v139; // x8
  __int64 v140; // x9
  EventTutorialEntity_TextTuto_o *v141; // x8
  int32_t dlgFontSize; // w19
  struct EventTutorialEntity_TextTuto_array *v143; // x8
  __int64 v144; // x9
  EventTutorialEntity_TextTuto_o *v145; // x8
  struct EventTutorialEntity_TextTuto_array *v146; // x8
  __int64 v147; // x9
  EventTutorialEntity_TextTuto_o *v148; // x8
  System_String_o *v149; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v151; // x19
  System_Action_o *v152; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  System_Nullable_int__o p_messageWidgetSizeX; // 0:x0.8
  UnityEngine_Vector2_o v155; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v156; // 0:s2.4,4:s3.4,8:s4.4

  while ( 1 )
  {
    v5 = transitionQuest;
    v6 = callback;
    v7 = idx;
    v8 = this;
    if ( (byte_4B1C6EA & 1) == 0 )
    {
      sub_1BCAFF8(&System_Action_FortificationNotifyDialog__TypeInfo, *(_QWORD *)&idx);
      sub_1BCAFF8(&System_Action_TypeInfo, v9);
      sub_1BCAFF8(&ScrollMessageDialog_ClickDelegate_TypeInfo, v10);
      sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
      sub_1BCAFF8(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___, v12);
      sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v13);
      sub_1BCAFF8(&Method_DataManager_GetMaster_SelectBonusBaseMaster___, v14);
      sub_1BCAFF8(&DataManager_TypeInfo, v15);
      sub_1BCAFF8(&LocalizationManager_TypeInfo, v16);
      sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v17);
      sub_1BCAFF8(&UnityEngine_Rect___TypeInfo, v18);
      sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
      sub_1BCAFF8(&string_TypeInfo, v20);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__0__, v21);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__10__, v22);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__11__, v23);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__1__, v24);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__2__, v25);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__3__, v26);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__4__, v27);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__6__, v28);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__7__, v29);
      sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__9__, v30);
      sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass19_0_TypeInfo, v31);
      sub_1BCAFF8(&StringLiteral_10820/*"QUEST_RELEASE_DIALOG_CANCEL"*/, v32);
      sub_1BCAFF8(&StringLiteral_21006/*"left"*/, v33);
      sub_1BCAFF8(&StringLiteral_6222/*"EventUI/Prefabs/80400"*/, v34);
      sub_1BCAFF8(&StringLiteral_6784/*"FortificationNotifyDialog"*/, v35);
      sub_1BCAFF8(&StringLiteral_22907/*"right"*/, v36);
      sub_1BCAFF8(&StringLiteral_10821/*"QUEST_RELEASE_DIALOG_DECIDE"*/, v37);
      byte_4B1C6EA = 1;
    }
    v38 = sub_1BCB244(EventTutorialEntity___c__DisplayClass19_0_TypeInfo);
    EventTutorialEntity___c__DisplayClass19_0___ctor((EventTutorialEntity___c__DisplayClass19_0_o *)v38, 0LL);
    if ( !v38 )
      goto LABEL_121;
    *(_QWORD *)(v38 + 16) = v8;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 16), (int32_t)v8, v41, v42);
    *(_DWORD *)(v38 + 24) = v7;
    *(_QWORD *)(v38 + 32) = v6;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v6, v43, v44);
    *(_QWORD *)(v38 + 40) = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 40), (int32_t)v5, v45, v46);
    textJson = v8->fields.textJson;
    if ( !textJson )
      goto LABEL_121;
    v49 = *(_DWORD *)(v38 + 24);
    max_length = textJson->max_length;
    if ( (int)v49 >= (int)max_length )
      goto LABEL_49;
    if ( v49 >= max_length )
      goto LABEL_122;
    v51 = textJson->m_Items[v49];
    if ( !v51 )
      goto LABEL_121;
    commonReleaseId = v51->fields.commonReleaseId;
    if ( commonReleaseId < 1 )
      goto LABEL_15;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !Master_object )
      goto LABEL_121;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(
                                      (CommonReleaseMaster_o *)Master_object,
                                      commonReleaseId,
                                      0LL,
                                      0,
                                      0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    callback = *(System_Action_o **)(v38 + 32);
    transitionQuest = *(System_Action_int__o **)(v38 + 40);
    this = v8;
    *(_QWORD *)&idx = (unsigned int)(*(_DWORD *)(v38 + 24) + 1);
  }
  textJson = v8->fields.textJson;
  if ( !textJson )
    goto LABEL_121;
  v49 = *(_DWORD *)(v38 + 24);
LABEL_15:
  if ( v49 >= textJson->max_length )
    goto LABEL_122;
  v53 = textJson->m_Items[v49];
  if ( !v53 )
    goto LABEL_121;
  textPos = v53->fields.textPos;
  v55 = 0.0;
  if ( !textPos )
  {
    v57 = 1;
    goto LABEL_23;
  }
  v56 = *(_QWORD *)&textPos->max_length;
  v57 = (_DWORD)v56 == 0;
  if ( !v56 )
  {
LABEL_23:
    v59 = 0.0;
    v58 = 0.0;
    goto LABEL_24;
  }
  if ( (unsigned int)v56 < 2 )
    goto LABEL_122;
  v58 = (float)textPos->m_Items[1];
  v59 = (float)textPos->m_Items[2];
LABEL_24:
  ptPos = v53->fields.ptPos;
  if ( ptPos )
  {
    v61 = *(_QWORD *)&ptPos->max_length;
    v62 = 0.0;
    if ( v61 )
    {
      if ( (unsigned int)v61 < 2 )
        goto LABEL_122;
      v62 = (float)ptPos->m_Items[1];
      v55 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v62 = 0.0;
  }
  scrDlgTitle = v53->fields.scrDlgTitle;
  spacingY = v53->fields.spacingY;
  presentClassScoreResetItemIdList = (System_Collections_ICollection_o *)v53->fields.presentClassScoreResetItemIdList;
  Master_object = (Il2CppObject *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v66 = v8->fields.textJson;
    if ( !v66 )
      goto LABEL_121;
    v67 = *(int *)(v38 + 24);
    if ( (unsigned int)v67 >= v66->max_length )
      goto LABEL_122;
    v68 = v66->m_Items[v67];
    if ( !v68 )
      goto LABEL_121;
    if ( v68->fields.isFortification )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v70 = (System_Action_object__o *)sub_1BCB244(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v70,
        (Il2CppObject *)v38,
        Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__1__,
        0LL);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6222/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_6784/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v70,
          0LL,
          (const MethodInfo_3010FC8 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_121:
      sub_1BCB254(Master_object, v40);
    }
    if ( v68->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v68->fields.releaseClassBoardBaseIds;
      if ( !releaseClassBoardBaseIds || !*(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
LABEL_49:
        ActionExtensions__Call(*(System_Action_o **)(v38 + 32), 0LL);
        return;
      }
      addClassIds = v68->fields.addClassIds;
      if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
      {
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( releaseClassBoardBaseIds->max_length )
        {
          v79 = releaseClassBoardBaseIds->m_Items[1];
          v80 = (CommonUI_o *)Master_object;
          v81 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(
            v81,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__6__,
            0LL);
          if ( !v80 )
            goto LABEL_121;
          CommonUI__OpenClassBoardAddClassDialog(v80, v79, addClassIds, v81, 0LL);
          return;
        }
        goto LABEL_122;
      }
      v100 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v101 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v101,
        (Il2CppObject *)v38,
        Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__7__,
        0LL);
      if ( !v100 )
        goto LABEL_121;
      CommonUI__OpenClassBoardReleaseDialog(
        (CommonUI_o *)v100,
        releaseClassBoardBaseIds,
        v101,
        v8->fields.openType == 100,
        0LL);
    }
    else
    {
      Master_object = (Il2CppObject *)BasicHelper__IsNullOrEmpty(presentClassScoreResetItemIdList, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v82 = v8->fields.textJson;
        if ( !v82 )
          goto LABEL_121;
        v83 = *(int *)(v38 + 24);
        if ( (unsigned int)v83 >= v82->max_length )
          goto LABEL_122;
        v84 = v82->m_Items[v83];
        if ( !v84 )
          goto LABEL_121;
        v85 = spacingY & ~(spacingY >> 31);
        if ( v84->fields.isQuestRelease )
        {
          Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v86 = v8->fields.textJson;
          if ( !v86 )
            goto LABEL_121;
          v87 = *(int *)(v38 + 24);
          if ( (unsigned int)v87 >= v86->max_length )
            goto LABEL_122;
          v88 = v86->m_Items[v87];
          if ( !v88 )
            goto LABEL_121;
          v89 = (CommonUI_o *)Master_object;
          text = v88->fields.text;
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v92 = LocalizationManager__Get((System_String_o *)StringLiteral_10821/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10820/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
          v94 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v94,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__3__,
            0LL);
          v95 = v8->fields.textJson;
          if ( !v95 )
            goto LABEL_121;
          v96 = *(int *)(v38 + 24);
          if ( (unsigned int)v96 >= v95->max_length )
            goto LABEL_122;
          v97 = v95->m_Items[v96];
          if ( !v97 || !v89 )
            goto LABEL_121;
          CommonUI__OpenConfirmDecideDlg(
            v89,
            Empty,
            text,
            v92,
            v93,
            v94,
            v97->fields.dlgFontSize,
            0.0,
            15.0,
            v85,
            0,
            0,
            240,
            0,
            0,
            0,
            0,
            0LL);
        }
        else if ( v84->fields.isSelectBonus )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v102 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = v8->fields.eventId;
          v104 = (SelectBonusBaseMaster_o *)v102;
          v105 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(
            v105,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__4__,
            0LL);
          if ( !v104 )
            goto LABEL_121;
          SelectBonusBaseMaster__OpenSelectBonusDialog(v104, eventId, v105, 0LL);
        }
        else if ( v84->fields.dlgFontSize < 1 )
        {
          rects = v84->fields.rects;
          if ( !rects )
            goto LABEL_121;
          Master_object = (Il2CppObject *)sub_1BCB0A0(UnityEngine_Rect___TypeInfo, rects->max_length);
          if ( !Master_object )
            goto LABEL_121;
          v117 = v8->fields.textJson;
          if ( !v117 )
            goto LABEL_121;
          monitor = (int)Master_object[1].monitor;
          v119 = (UnityEngine_Rect_array *)Master_object;
          v120 = 1;
          v121 = monitor > 0;
          while ( 1 )
          {
            v122 = *(int *)(v38 + 24);
            if ( (unsigned int)v122 >= v117->max_length )
              goto LABEL_122;
            v123 = v117->m_Items[v122];
            if ( !v123 )
              goto LABEL_121;
            if ( !v121 )
              break;
            v124 = v123->fields.rects;
            if ( !v124 )
              goto LABEL_121;
            v125 = v120 - 1;
            if ( v120 - 1 >= v124->max_length )
              goto LABEL_122;
            v126 = (int32x4_t *)v124->m_Items[v125];
            if ( !v126 )
              goto LABEL_121;
            if ( v125 >= (unsigned int)monitor )
              goto LABEL_122;
            Master_object[v125 + 2] = (Il2CppObject)vcvtq_f32_s32(v126[1]);
            monitor = (int)Master_object[1].monitor;
            v117 = v8->fields.textJson;
            v121 = v120++ < monitor;
            if ( !v117 )
              goto LABEL_121;
          }
          Master_object = (Il2CppObject *)BasicHelper__EqualExceptNullOrEmpty(
                                            v123->fields.textAlign,
                                            (System_String_o *)StringLiteral_21006/*"left"*/,
                                            0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            v127 = 1;
          }
          else
          {
            v143 = v8->fields.textJson;
            if ( !v143 )
              goto LABEL_121;
            v144 = *(int *)(v38 + 24);
            if ( (unsigned int)v144 >= v143->max_length )
              goto LABEL_122;
            v145 = v143->m_Items[v144];
            if ( !v145 )
              goto LABEL_121;
            if ( BasicHelper__EqualExceptNullOrEmpty(
                   v145->fields.textAlign,
                   (System_String_o *)StringLiteral_22907/*"right"*/,
                   0LL) )
            {
              v127 = 3;
            }
            else
            {
              v127 = 2;
            }
          }
          Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v146 = v8->fields.textJson;
          if ( !v146 )
            goto LABEL_121;
          v147 = *(int *)(v38 + 24);
          if ( (unsigned int)v147 >= v146->max_length )
LABEL_122:
            sub_1BCB25C(Master_object, v40, v47);
          v148 = v146->m_Items[v147];
          if ( !v148 )
            goto LABEL_121;
          v149 = v148->fields.text;
          dlgBgId = v148->fields.dlgBgId;
          v151 = (CommonUI_o *)Master_object;
          v152 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(
            v152,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__11__,
            0LL);
          if ( !v151 )
            goto LABEL_121;
          v156.fields.z = 0.0;
          v155.fields.x = v58;
          v155.fields.y = v59;
          v156.fields.x = v62;
          v156.fields.y = v55;
          CommonUI__OpenEventTutorialNotificationDialog(
            v151,
            v149,
            v119,
            v155,
            v156,
            dlgBgId,
            v127,
            v152,
            0LL,
            v85,
            0LL);
        }
        else
        {
          Master_object = (Il2CppObject *)System_String__IsNullOrEmpty(v84->fields.messageWidgetSizeX, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v106 = v8->fields.textJson;
            if ( !v106 )
              goto LABEL_121;
            v107 = *(int *)(v38 + 24);
            if ( (unsigned int)v107 >= v106->max_length )
              goto LABEL_122;
            v108 = v106->m_Items[v107];
            if ( !v108 )
              goto LABEL_121;
            title = v108->fields.title;
            v110 = v108->fields.text;
            v111 = (CommonUI_o *)Master_object;
            v112 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v112,
              (Il2CppObject *)v38,
              Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__9__,
              0LL);
            v113 = v8->fields.textJson;
            if ( !v113 )
              goto LABEL_121;
            v114 = *(int *)(v38 + 24);
            if ( (unsigned int)v114 >= v113->max_length )
              goto LABEL_122;
            v115 = v113->m_Items[v114];
            if ( !v115 || !v111 )
              goto LABEL_121;
            CommonUI__OpenNotificationDialog_30764784(
              v111,
              title,
              v110,
              v112,
              v59,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              v115->fields.dlgFontSize,
              0,
              v85,
              v57,
              0LL,
              0LL);
          }
          else
          {
            v128 = v8->fields.textJson;
            if ( !v128 )
              goto LABEL_121;
            v129 = *(int *)(v38 + 24);
            if ( (unsigned int)v129 >= v128->max_length )
              goto LABEL_122;
            v130 = v128->m_Items[v129];
            if ( !v130 )
              goto LABEL_121;
            v131 = System_Int32__Parse(v130->fields.messageWidgetSizeX, 0LL);
            Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v132 = v8->fields.textJson;
            if ( !v132 )
              goto LABEL_121;
            v133 = *(int *)(v38 + 24);
            if ( (unsigned int)v133 >= v132->max_length )
              goto LABEL_122;
            v134 = v132->m_Items[v133];
            if ( !v134 )
              goto LABEL_121;
            v135 = v134->fields.title;
            v136 = v134->fields.text;
            v137 = (CommonUI_o *)Master_object;
            v138 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v138,
              (Il2CppObject *)v38,
              Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__10__,
              0LL);
            v139 = v8->fields.textJson;
            if ( !v139 )
              goto LABEL_121;
            v140 = *(int *)(v38 + 24);
            if ( (unsigned int)v140 >= v139->max_length )
              goto LABEL_122;
            v141 = v139->m_Items[v140];
            if ( !v141 )
              goto LABEL_121;
            dlgFontSize = v141->fields.dlgFontSize;
            p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
            messageWidgetSizeX = 0LL;
            System_Nullable_int____ctor(
              p_messageWidgetSizeX,
              v131,
              (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
            if ( !v137 )
              goto LABEL_121;
            CommonUI__OpenNotificationDialog_30764784(
              v137,
              v135,
              v136,
              v138,
              v59,
              -162.5,
              -1,
              0,
              0,
              0,
              0,
              dlgFontSize,
              0,
              v85,
              v57,
              messageWidgetSizeX,
              0LL);
          }
        }
      }
      else
      {
        v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v99 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(
          v99,
          (Il2CppObject *)v38,
          Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__2__,
          0LL);
        if ( !v98 )
          goto LABEL_121;
        CommonUI__OpenTutorialItemGetDialog(
          (CommonUI_o *)v98,
          (System_Int32_array *)presentClassScoreResetItemIdList,
          v99,
          0LL);
      }
    }
  }
  else
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v71 = v8->fields.textJson;
    if ( !v71 )
      goto LABEL_121;
    v72 = *(int *)(v38 + 24);
    if ( (unsigned int)v72 >= v71->max_length )
      goto LABEL_122;
    v73 = v71->m_Items[v72];
    if ( !v73 )
      goto LABEL_121;
    v74 = v73->fields.text;
    v75 = (CommonUI_o *)Master_object;
    v76 = (ScrollMessageDialog_ClickDelegate_o *)sub_1BCB244(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v76,
      (Il2CppObject *)v38,
      Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v75 )
      goto LABEL_121;
    CommonUI__OpenScrollMessageDialog(v75, scrDlgTitle, v74, 10, v76, 0, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity__TransitionQuest(
        EventTutorialEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1C6E9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v5);
    byte_4B1C6E9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B195A6 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    byte_4B195A6 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(Instance, v8);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Int32_array_array *__fastcall EventTutorialEntity__getTargets(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_array *targetIds; // x8
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_String_array *v14; // x8
  System_Int32_array_array *v15; // x20
  __int64 v16; // x25
  CGThumbnailListItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v19; // x0
  EventTutorialEntity___c_c *v20; // x8
  System_Object_array *v21; // x22
  System_Converter_object__int__o *_9__11_0; // x23
  Il2CppObject *v23; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3

  if ( (byte_4B1C6E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1BCAFF8(&System_Converter_string__int__TypeInfo, v3);
    sub_1BCAFF8(&int_____TypeInfo, v4);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__getTargets_b__11_0__, v5);
    sub_1BCAFF8(&EventTutorialEntity___c_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v9);
    byte_4B1C6E3 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1BCB0A0(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1BCB0A0(int_____TypeInfo, targetIds->max_length);
  v14 = this->fields.targetIds;
  if ( !v14 )
LABEL_20:
    sub_1BCB254(v11, v12);
  v15 = (System_Int32_array_array *)v11;
  v16 = 0LL;
  p_monitor = (CGThumbnailListItem_o *)&v11[1].monitor;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v16 >= max_length )
      return v15;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_23;
    v11 = v14->m_Items[v16];
    if ( v11 )
    {
      v11 = System_String__Replace_62496972(
              v11,
              (System_String_o *)StringLiteral_15670/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_62496972(
                v11,
                (System_String_o *)StringLiteral_15923/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v11 )
        {
          v19 = System_String__Split(v11, 0x2Cu, 0, 0LL);
          v20 = EventTutorialEntity___c_TypeInfo;
          v21 = (System_Object_array *)v19;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v20 = EventTutorialEntity___c_TypeInfo;
          }
          _9__11_0 = (System_Converter_object__int__o *)v20->static_fields->__9__11_0;
          if ( !_9__11_0 )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v20 = EventTutorialEntity___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v20->static_fields->__9;
            _9__11_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__11_0,
              v23,
              Method_EventTutorialEntity___c__getTargets_b__11_0__,
              0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__11_0 = (struct System_Converter_string__int__o *)_9__11_0;
            sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v25, v26);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v21,
                                     (System_Converter_TInput__TOutput__o *)_9__11_0,
                                     (const MethodInfo_311563C *)Method_System_Array_ConvertAll_string__int___);
          if ( v15 )
          {
            if ( (unsigned int)v16 >= v15->max_length )
LABEL_23:
              sub_1BCB25C(v11, v12, v13);
            p_monitor->klass = (CGThumbnailListItem_c *)v11;
            sub_1BCAF9C(p_monitor, (int32_t)v11, v13, v27);
            v14 = this->fields.targetIds;
            ++v16;
            p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
            if ( v14 )
              continue;
          }
        }
      }
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialEntity__isEnableCondition(
        EventTutorialEntity_o *this,
        int32_t qId,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array_array *Targets; // x21
  DataManager_o *Instance; // x0
  int32_t v22; // w8
  const MethodInfo *v23; // x5
  __int64 v24; // x8
  int v25; // w9
  System_Int32_array *v26; // x10
  int max_length; // w11
  int32_t v28; // w10
  __int64 v29; // x8
  int v30; // w9
  System_Int32_array *v31; // x10
  __int64 v32; // x8
  System_Int32_array *v33; // x9
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v36; // x8
  QuestGroupMaster_o *v37; // x21
  unsigned __int64 v38; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v40; // x8
  int v41; // w9
  System_Int32_array *v42; // x10
  int v43; // w11
  int32_t v44; // w12
  int32_t v45; // w12
  int32_t v46; // w10
  __int64 v47; // x22
  __int64 v48; // x8
  int v49; // w9
  System_Int32_array *v50; // x10
  int v51; // w11
  int32_t v52; // w12
  int32_t v53; // w10
  TerminalSceneComponent_c *v54; // x0
  struct TerminalSceneComponent_o *mInstance; // x20

  if ( (byte_4B1C6E5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_1BCAFF8(&CondType_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v17);
    byte_4B1C6E5 = 1;
  }
  Targets = EventTutorialEntity__getTargets(this, *(const MethodInfo **)&qId);
  Instance = 0LL;
  switch ( this->fields.openType )
  {
    case 1:
    case 3:
    case 0xB:
    case 0x11:
    case 0x12:
    case 0x35:
    case 0x5A:
      if ( !Targets )
        goto LABEL_4;
      v29 = *(_QWORD *)&Targets->max_length;
      if ( !v29 )
        goto LABEL_4;
      if ( (int)v29 < 1 )
        goto LABEL_118;
      v30 = 0;
      while ( 2 )
      {
        v31 = Targets->m_Items[v30];
        if ( !v31 )
          goto LABEL_120;
        if ( (int)v31->max_length >= 1 && v31->m_Items[1] != qId )
        {
          ++v30;
          Instance = 0LL;
          if ( (_DWORD)v29 == v30 )
            return (char)Instance;
          continue;
        }
        goto LABEL_4;
      }
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
      goto LABEL_4;
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
        v24 = *(_QWORD *)&Targets->max_length;
        if ( v24 )
        {
          if ( (int)v24 >= 1 )
          {
            v25 = 0;
            while ( 1 )
            {
              v26 = Targets->m_Items[v25];
              if ( !v26 )
                break;
              max_length = v26->max_length;
              if ( max_length < 1 )
                goto LABEL_4;
              if ( v26->m_Items[1] == qId )
              {
                if ( max_length < 2 )
                  goto LABEL_4;
                v28 = v26->m_Items[2];
                if ( v28 == ex1 || !v28 )
                  goto LABEL_4;
              }
              ++v25;
              Instance = 0LL;
              if ( (_DWORD)v24 == v25 )
                return (char)Instance;
            }
LABEL_120:
            sub_1BCB254(Instance, v18);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v36 = *(_QWORD *)&condIds->max_length;
      if ( (int)v36 < 1 )
        goto LABEL_118;
      v37 = (QuestGroupMaster_o *)Instance;
      v38 = 0LL;
      while ( v38 < (unsigned int)v36 )
      {
        if ( !v37 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v37, condIds->m_Items[v38 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v36) = condIds->max_length;
        ++v38;
        Instance = 0LL;
        if ( (__int64)v38 >= (int)v36 )
          return (char)Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v40 = *(_QWORD *)&Targets->max_length;
      if ( !v40 )
        goto LABEL_4;
      if ( (int)v40 < 1 )
        goto LABEL_118;
      v41 = 0;
      while ( 2 )
      {
        v42 = Targets->m_Items[v41];
        if ( !v42 )
          goto LABEL_120;
        v43 = v42->max_length;
        if ( v43 >= 1 )
        {
          if ( v42->m_Items[1] != qId
            || v43 >= 2
            && ((v44 = v42->m_Items[2], v44 != ex1) && v44
             || v43 >= 3
             && ((v45 = v42->m_Items[3], v45 != ex2) && v45 || v43 >= 4 && (v46 = v42->m_Items[4], v46 != ex3) && v46)) )
          {
            ++v41;
            Instance = 0LL;
            if ( (_DWORD)v40 == v41 )
              return (char)Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v48 = *(_QWORD *)&Targets->max_length;
      if ( !v48 || (int)v48 < 1 )
        goto LABEL_4;
      v49 = 0;
      while ( 2 )
      {
        v50 = Targets->m_Items[v49];
        if ( !v50 )
          goto LABEL_120;
        v51 = v50->max_length;
        if ( v51 < 1 )
          goto LABEL_118;
        if ( v50->m_Items[1] != qId )
          goto LABEL_94;
        if ( v51 < 2 )
          goto LABEL_118;
        v52 = v50->m_Items[2];
        if ( v52 != ex1 )
        {
          if ( v52 )
            goto LABEL_94;
        }
        if ( v51 < 3 )
          goto LABEL_118;
        v53 = v50->m_Items[3];
        Instance = 0LL;
        if ( v53 != ex2 )
        {
          if ( v53 )
          {
LABEL_94:
            if ( (_DWORD)v48 == ++v49 )
              goto LABEL_4;
            continue;
          }
        }
        return (char)Instance;
      }
    case 0x36:
    case 0x38:
    case 0x39:
      if ( this->fields.condType != 95 )
        goto LABEL_118;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
        goto LABEL_118;
      goto LABEL_4;
    case 0x37:
      if ( this->fields.condType != 95 )
        goto LABEL_118;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsSvtEquipFriendShipStorageHaving(0LL) )
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
      if ( !Targets )
        goto LABEL_4;
      v32 = *(_QWORD *)&Targets->max_length;
      if ( !v32 )
        goto LABEL_4;
      if ( (_DWORD)v32 != 1 )
      {
        if ( (int)v32 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_74;
      }
      v33 = Targets->m_Items[0];
      if ( !v33 )
        goto LABEL_120;
      if ( v33->max_length != 1 || v33->m_Items[1] )
      {
LABEL_74:
        v47 = 0LL;
        while ( (unsigned int)v47 < (unsigned int)v32 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v47];
          if ( !Instance )
            goto LABEL_120;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v32) = Targets->max_length;
          ++v47;
          Instance = 0LL;
          if ( (int)v47 >= (int)v32 )
            return (char)Instance;
        }
LABEL_121:
        sub_1BCB25C(Instance, v18, v19);
      }
LABEL_4:
      v22 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v22 && v22 != 11 )
      {
        if ( v22 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v23);
        }
      }
      return (char)Instance;
    case 0x43:
      if ( !Targets || !*(_QWORD *)&Targets->max_length )
        goto LABEL_4;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4B1676D )
      {
        sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v18);
        byte_4B1676D = 1;
      }
      v54 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v54 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v54->static_fields->mInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_118;
      if ( !mInstance )
        goto LABEL_120;
      Instance = (DataManager_o *)mInstance->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_120;
      if ( !ScrTerminalListTop__ContainsMapQuest((ScrTerminalListTop_o *)Instance, Targets, 0LL) )
        goto LABEL_118;
      goto LABEL_4;
    default:
      return (char)Instance;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialEntity__isOpenCondition(
        EventTutorialEntity_o *this,
        int32_t qId,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t eventId; // w24
  int32_t flagType; // w25
  __int64 v19; // x1
  const MethodInfo *v20; // x5
  TerminalPramsManager_c *v22; // x0
  TerminalPramsManager_c *v23; // x0
  System_Collections_Generic_HashSet_T__o *ForcePlayEventTutorialArray_k__BackingField; // x0
  __int64 v25; // x1
  int32_t value; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1C6E4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, *(_QWORD *)&qId);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___get_Current__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__, v14);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v15);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v16);
    byte_4B1C6E4 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  value = 0;
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39653620(flagType, eventId, 0LL) )
  {
    return 0;
  }
  else
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B199A9 )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v19);
      byte_4B199A9 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    if ( v22->static_fields->_ForcePlayEventTutorialArray_k__BackingField )
    {
      if ( !v22->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v22);
      if ( !byte_4B199A9 )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v19);
        byte_4B199A9 = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      ForcePlayEventTutorialArray_k__BackingField = (System_Collections_Generic_HashSet_T__o *)v23->static_fields->_ForcePlayEventTutorialArray_k__BackingField;
      if ( !ForcePlayEventTutorialArray_k__BackingField )
        sub_1BCB254(0LL, v19);
      System_Collections_Generic_HashSet_object___GetEnumerator(
        &v28,
        ForcePlayEventTutorialArray_k__BackingField,
        (const MethodInfo_3577BA4 *)Method_System_Collections_Generic_HashSet_Dictionary_int__int___GetEnumerator__);
      while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_344EFAC *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___MoveNext__) )
      {
        if ( !v28.fields._current )
          sub_1BCB254(0LL, v25);
        if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
               (System_Collections_Generic_Dictionary_int__int__o *)v28.fields._current,
               this->fields.eventId,
               &value,
               (const MethodInfo_3319EC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__)
          && value == this->fields.flagType )
        {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose(
            &v28,
            (const MethodInfo_344EFA8 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
          return 1;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_344EFA8 *)Method_System_Collections_Generic_HashSet_Enumerator_Dictionary_int__int___Dispose__);
    }
    return EventTutorialEntity__isEnableCondition(this, qId, ex1, ex2, ex3, v20);
  }
}


void __fastcall EventTutorialEntity_RectData___ctor(EventTutorialEntity_RectData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity_TextTuto___ctor(EventTutorialEntity_TextTuto_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C6F7 & 1) == 0 )
  {
    sub_1BCAFF8(&EventTutorialEntity___c_TypeInfo, v1);
    byte_4B1C6F7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTutorialEntity___c___getTargets_b__11_0(
        EventTutorialEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( System_Int32__TryParse(input, &result, 0LL) )
    return result;
  else
    return 0;
}


void __fastcall EventTutorialEntity___c__DisplayClass15_0___ctor(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( !EventTutorialEntity__HasBeforeAction(_4__this, 0LL) )
  {
LABEL_5:
    ActionExtensions__Call(action, 0LL);
    return;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, 0LL) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1BCB254(_4__this, action);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 0, action, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
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
  __int64 v41; // x24
  CommonUI_o *Instance; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Action_o **v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct EventTutorialEntity_o *_4__this; // x19
  struct System_Int32_array *imageIds; // x8
  struct EventTutorialEntity_o *v51; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v53; // x20
  System_Action_int__o *_9__4; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct EventTutorialEntity_o *v57; // x8
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  struct EventTutorialEntity_o *v61; // x8
  char v62; // w22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x26
  System_String_o *DialogPrefabName; // x0
  System_String_o *v66; // x27
  __int64 v67; // x23
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject **v70; // x22
  System_Collections_Generic_List_object__o *v71; // x24
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct EventTutorialEntity_o *v74; // x8
  __int64 v75; // x22
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x2
  struct EventTutorialEntity_o *v79; // x8
  struct System_Int32_array *condIds; // x8
  System_Collections_Generic_List_AssistEntity__o *AssistEntityListByShopGroupId; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x21
  System_Action_object__o *v85; // x23
  __int64 v86; // x8
  __int64 v87; // x8
  System_Action_o *klass; // x4
  __int64 *v89; // x8
  CommonUI_o *v90; // x0
  int32_t condType; // w8
  Il2CppObject *Master_object; // x25
  System_String_o *v93; // x20
  int32_t markSprite; // w26
  __int64 v95; // x21
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  __int64 *v98; // x22
  __int64 v99; // x25
  EventEquipSkillPartsMaster_o *v100; // x22
  System_Int32_array *v101; // x23
  Il2CppObject *v102; // x22
  int32_t v103; // w23
  System_String_o *RenoCompletionDialogText; // x22
  Il2CppObject *v105; // x0
  System_String_o *v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  Il2CppObject *v109; // x22
  __int64 v110; // x8
  __int64 v111; // x8
  const MethodInfo_3010FC8 *v112; // x5
  System_String_o *v113; // x1
  System_String_o *v114; // x2
  struct EventTutorialEntity_o *v115; // x8
  __int64 v116; // x24
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  __int64 v119; // x25
  struct EventTutorialEntity_o *v120; // x8
  struct System_Int32_array *v121; // x8
  System_Int32_array *QuestIdListByGroupId; // x23
  System_String_o *v123; // x0
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  Il2CppObject *v126; // x21
  System_Action_object__o *v127; // x22
  __int64 v128; // x8
  __int64 v129; // x8
  System_Action_T__o *v130; // x3
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  struct EventTutorialEntity_o *v134; // x8
  CommonUI_o *v135; // x19
  Il2CppObject *v136; // x0
  System_String_o *v137; // x20
  System_String_o *v138; // x0
  Il2CppObject *v139; // x24
  System_String_o *v140; // x21
  int32_t eventId; // [xsp+Ch] [xbp-74h] BYREF
  QuestPhaseEntity_o *v142; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1C6F8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_EventCommonImageDialog__TypeInfo, action);
    sub_1BCAFF8(&System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo, v5);
    sub_1BCAFF8(&System_Action_int__TypeInfo, v6);
    sub_1BCAFF8(&System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo, v7);
    sub_1BCAFF8(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___, v8);
    sub_1BCAFF8(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___, v9);
    sub_1BCAFF8(&Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_AssistMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventEquipSkillPartsMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestGroupMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15);
    sub_1BCAFF8(&DataManager_TypeInfo, v16);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v17);
    sub_1BCAFF8(&int___TypeInfo, v18);
    sub_1BCAFF8(&int_TypeInfo, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo, v21);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__4__, v25);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_1__OpenTutorial_b__6__, v26);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_1_TypeInfo, v27);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_3_TypeInfo, v28);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_4__OpenTutorial_b__7__, v29);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_4_TypeInfo, v30);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_5__OpenTutorial_b__8__, v31);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_5_TypeInfo, v32);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_6__OpenTutorial_b__9__, v33);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_6_TypeInfo, v34);
    sub_1BCAFF8(&StringLiteral_6162/*"EventEquipSkillPartsRenoCompletionDialog"*/, v35);
    sub_1BCAFF8(&StringLiteral_5559/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, v36);
    sub_1BCAFF8(&StringLiteral_2141/*"AddPartsDialog"*/, v37);
    sub_1BCAFF8(&StringLiteral_5557/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, v38);
    sub_1BCAFF8(&StringLiteral_6223/*"EventUI/Prefabs/{0}"*/, v39);
    sub_1BCAFF8(&StringLiteral_6163/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, v40);
    byte_4B1C6F8 = 1;
  }
  v142 = 0LL;
  entity = 0LL;
  v41 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_125;
  *(_QWORD *)(v41 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 24), (int32_t)this, v44, v45);
  *(_QWORD *)(v41 + 16) = action;
  v46 = (System_Action_o **)(v41 + 16);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 16), (int32_t)action, v47, v48);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_125;
  imageIds = _4__this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v51 = this->fields.__4__this;
    if ( v51 && Instance )
    {
      CommonUI__OpenTutorialImageDialog_30790248(
        Instance,
        v51->fields.imageIds,
        v51->fields.flagType,
        v51->fields.eventId,
        *v46,
        0LL,
        0LL,
        0LL);
      return;
    }
LABEL_125:
    sub_1BCB254(Instance, v43);
  }
  textJson = _4__this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v53 = *v46;
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v55, v56);
    }
    EventTutorialEntity__TextTutorialChain(_4__this, 0, v53, _9__4, 0LL);
    return;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this->fields.script, 0LL) )
    goto LABEL_42;
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_125;
  if ( !EventTutorialEntity__GetDialogPrefabName((EventTutorialEntity_o *)Instance, 0LL) )
  {
LABEL_42:
    ActionExtensions__Call(*v46, 0LL);
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  v57 = this->fields.__4__this;
  if ( !v57 )
    goto LABEL_125;
  if ( !Instance )
    goto LABEL_125;
  Instance = (CommonUI_o *)DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             &entity,
                             v57->fields.eventId,
                             (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v61 = this->fields.__4__this;
  if ( !v61 )
    goto LABEL_125;
  v62 = (char)Instance;
  eventId = v61->fields.eventId;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v58, v59, v60);
  Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6223/*"EventUI/Prefabs/{0}"*/, v63, 0LL);
  if ( !this->fields.__4__this )
    goto LABEL_125;
  v64 = (System_String_o *)Instance;
  DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, 0LL);
  if ( (v62 & 1) != 0 )
  {
    v66 = DialogPrefabName;
    Instance = (CommonUI_o *)entity;
    if ( !entity )
      goto LABEL_125;
    if ( EventDetailEntity__IsEventEquipSkillParts((EventDetailEntity_o *)entity, 0LL) )
    {
      v67 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_3_TypeInfo);
      System_Object___ctor((Il2CppObject *)v67, 0LL);
      if ( !v67 )
        goto LABEL_125;
      *(_QWORD *)(v67 + 24) = v41;
      v70 = (Il2CppObject **)(v67 + 24);
      sub_1BCAF9C((CGThumbnailListItem_o *)(v67 + 24), v41, v68, v69);
      v71 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventEquipSkillPartsEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v71,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventEquipSkillPartsEntity___ctor__);
      *(_QWORD *)(v67 + 16) = v71;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v67 + 16), (int32_t)v71, v72, v73);
      v74 = this->fields.__4__this;
      if ( !v74 )
        goto LABEL_125;
      if ( v74->fields.condType == 67 )
      {
        Instance = (CommonUI_o *)System_String__Equals_62486456(v66, (System_String_o *)StringLiteral_2141/*"AddPartsDialog"*/, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v75 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_4_TypeInfo);
          System_Object___ctor((Il2CppObject *)v75, 0LL);
          if ( !v75 )
            goto LABEL_125;
          *(_QWORD *)(v75 + 24) = v67;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v75 + 24), v67, v76, v77);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
          v79 = this->fields.__4__this;
          if ( !v79 )
            goto LABEL_125;
          condIds = v79->fields.condIds;
          if ( !condIds )
            goto LABEL_125;
          if ( condIds->max_length )
          {
            if ( !Instance )
              goto LABEL_125;
            AssistEntityListByShopGroupId = AssistMaster__GetAssistEntityListByShopGroupId(
                                              (AssistMaster_o *)Instance,
                                              condIds->m_Items[1],
                                              0LL);
            *(_QWORD *)(v75 + 16) = AssistEntityListByShopGroupId;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v75 + 16), (int32_t)AssistEntityListByShopGroupId, v82, v83);
            v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v85 = (System_Action_object__o *)sub_1BCB244(System_Action_EventEquipSkillPartsAddPartsDialog__TypeInfo);
            System_Action_object____ctor(
              v85,
              (Il2CppObject *)v75,
              Method_EventTutorialEntity___c__DisplayClass15_4__OpenTutorial_b__7__,
              0LL);
            v86 = *(_QWORD *)(v75 + 24);
            if ( !v86 )
              goto LABEL_125;
            v87 = *(_QWORD *)(v86 + 24);
            if ( !v87 || !v84 )
              goto LABEL_125;
            klass = *(System_Action_o **)(v87 + 16);
            v89 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsAddPartsDialog___;
            v90 = (CommonUI_o *)v84;
LABEL_91:
            v112 = (const MethodInfo_3010FC8 *)*v89;
            v113 = v64;
            v114 = v66;
LABEL_123:
            v130 = (System_Action_T__o *)v85;
LABEL_124:
            CommonUI__LoadAndCreateDialog_object_(v90, v113, v114, v130, klass, v112);
            return;
          }
          goto LABEL_126;
        }
        v74 = this->fields.__4__this;
        if ( !v74 )
          goto LABEL_125;
      }
      condType = v74->fields.condType;
      if ( condType != 46 && condType != 1 )
        goto LABEL_92;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B1918D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v43);
        byte_4B1918D = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      v93 = v64;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      markSprite = (int32_t)Instance->fields.connectMark->fields.markSprite;
      if ( !byte_4B1684D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v43);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        byte_4B1684D = 1;
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
                                 &v142,
                                 markSprite,
                                 LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
                                 0LL);
      v64 = v93;
      if ( ((unsigned __int8)Instance & 1) == 0
        || (Instance = (CommonUI_o *)System_String__Equals_62486456(v66, (System_String_o *)StringLiteral_6162/*"EventEquipSkillPartsRenoCompletionDialog"*/, 0LL),
            ((unsigned __int8)Instance & 1) == 0) )
      {
LABEL_92:
        v115 = this->fields.__4__this;
        if ( !v115 )
          goto LABEL_125;
        if ( v115->fields.condType == 51
          && System_String__Equals_62486456(v66, (System_String_o *)StringLiteral_6163/*"EventEquipSkillPartsRenoQuestReleaseDialog"*/, 0LL) )
        {
          v116 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_6_TypeInfo);
          System_Object___ctor((Il2CppObject *)v116, 0LL);
          if ( !v116 )
            goto LABEL_125;
          *(_QWORD *)(v116 + 32) = v67;
          v119 = v116 + 32;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v116 + 32), v67, v117, v118);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestGroupMaster___);
          v120 = this->fields.__4__this;
          if ( !v120 )
            goto LABEL_125;
          v121 = v120->fields.condIds;
          if ( !v121 )
            goto LABEL_125;
          if ( !v121->max_length )
            goto LABEL_126;
          if ( !Instance )
            goto LABEL_125;
          QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(
                                   (QuestGroupMaster_o *)Instance,
                                   v121->m_Items[1],
                                   2,
                                   0LL);
          if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestIdListByGroupId, 0LL) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
            if ( !*(_QWORD *)v119 || !Instance )
              goto LABEL_125;
            if ( EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
                   (EventEquipSkillPartsMaster_o *)Instance,
                   (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(*(_QWORD *)v119 + 16LL),
                   QuestIdListByGroupId,
                   0,
                   0LL) )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
              if ( !Instance )
                goto LABEL_125;
              if ( AssistMaster__TryGetValidAssistEntityList_40950164(
                     (AssistMaster_o *)Instance,
                     (System_Collections_Generic_List_AssistEntity__o **)(v116 + 16),
                     QuestIdListByGroupId,
                     0LL) )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v123 = LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_EQUIP_SKILL_PARTS_RENO_QUEST_RELEASE_DIALOG_TEXT"*/, 0LL);
                *(_QWORD *)(v116 + 24) = v123;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v116 + 24), (int32_t)v123, v124, v125);
                v126 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v127 = (System_Action_object__o *)sub_1BCB244(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
                System_Action_object____ctor(
                  v127,
                  (Il2CppObject *)v116,
                  Method_EventTutorialEntity___c__DisplayClass15_6__OpenTutorial_b__9__,
                  0LL);
                v128 = *(_QWORD *)(v116 + 32);
                if ( !v128 )
                  goto LABEL_125;
                v129 = *(_QWORD *)(v128 + 24);
                if ( !v129 || !v126 )
                  goto LABEL_125;
                klass = *(System_Action_o **)(v129 + 16);
                v90 = (CommonUI_o *)v126;
                v113 = v64;
                v114 = v66;
                v112 = (const MethodInfo_3010FC8 *)Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
                v130 = (System_Action_T__o *)v127;
                goto LABEL_124;
              }
            }
          }
        }
        Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v134 = this->fields.__4__this;
        if ( !v134 )
          goto LABEL_125;
        v135 = Instance;
        eventId = v134->fields.eventId;
        v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v131, v132, v133);
        Instance = (CommonUI_o *)System_String__Format((System_String_o *)StringLiteral_6223/*"EventUI/Prefabs/{0}"*/, v136, 0LL);
        if ( !this->fields.__4__this )
          goto LABEL_125;
        v137 = (System_String_o *)Instance;
        v138 = EventTutorialEntity__GetDialogPrefabName(this->fields.__4__this, 0LL);
        v139 = *v70;
        v140 = v138;
        v85 = (System_Action_object__o *)sub_1BCB244(System_Action_EventCommonImageDialog__TypeInfo);
        System_Action_object____ctor(
          v85,
          v139,
          Method_EventTutorialEntity___c__DisplayClass15_1__OpenTutorial_b__6__,
          0LL);
        if ( !*v70 || !v135 )
          goto LABEL_125;
        klass = (System_Action_o *)(*v70)[1].klass;
        v90 = v135;
        v113 = v137;
        v114 = v140;
        v112 = (const MethodInfo_3010FC8 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___;
        goto LABEL_123;
      }
      v95 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_5_TypeInfo);
      System_Object___ctor((Il2CppObject *)v95, 0LL);
      if ( !v95 )
        goto LABEL_125;
      *(_QWORD *)(v95 + 32) = v67;
      v98 = (__int64 *)(v95 + 32);
      sub_1BCAF9C((CGThumbnailListItem_o *)(v95 + 32), v67, v96, v97);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventEquipSkillPartsMaster___);
      v99 = *v98;
      if ( !*v98 )
        goto LABEL_125;
      v100 = (EventEquipSkillPartsMaster_o *)Instance;
      v101 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4B1918D )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v43);
        byte_4B1918D = 1;
      }
      Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v101 )
        goto LABEL_125;
      if ( v101->max_length )
      {
        v101->m_Items[1] = (int32_t)Instance->fields.connectMark->fields.markSprite;
        if ( !v100 )
          goto LABEL_125;
        EventEquipSkillPartsMaster__TryGetValidEventEquipSkillPartsEntityList(
          v100,
          (System_Collections_Generic_List_EventEquipSkillPartsEntity__o **)(v99 + 16),
          v101,
          0,
          0LL);
        v102 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
        if ( !byte_4B1918D )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v43);
          byte_4B1918D = 1;
        }
        Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        v103 = (int32_t)Instance->fields.connectMark->fields.markSprite;
        if ( !byte_4B1684D )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v43);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
          byte_4B1684D = 1;
        }
        if ( !LODWORD(Instance->fields.dummyErrorSelectDialog) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (CommonUI_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v102 )
          goto LABEL_125;
        AssistMaster__TryGetValidAssistEntityList(
          (AssistMaster_o *)v102,
          (System_Collections_Generic_List_AssistEntity__o **)(v95 + 24),
          v103,
          LODWORD(Instance->fields.connectMark->fields.m_CancellationTokenSource) + 1,
          1,
          0LL);
        Instance = (CommonUI_o *)v142;
        if ( !v142 )
          goto LABEL_125;
        RenoCompletionDialogText = QuestPhaseEntity__GetRenoCompletionDialogText(v142, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v105 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5557/*"EVENT_EQUIP_SKILL_PARTS_RENO_INFO_BUTTON_TEXT"*/, 0LL);
        v106 = System_String__Format(RenoCompletionDialogText, v105, 0LL);
        *(_QWORD *)(v95 + 16) = v106;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v95 + 16), (int32_t)v106, v107, v108);
        v109 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v85 = (System_Action_object__o *)sub_1BCB244(System_Action_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__TypeInfo);
        System_Action_object____ctor(
          v85,
          (Il2CppObject *)v95,
          Method_EventTutorialEntity___c__DisplayClass15_5__OpenTutorial_b__8__,
          0LL);
        v110 = *(_QWORD *)(v95 + 32);
        if ( !v110 )
          goto LABEL_125;
        v111 = *(_QWORD *)(v110 + 24);
        if ( !v111 || !v109 )
          goto LABEL_125;
        klass = *(System_Action_o **)(v111 + 16);
        v89 = &Method_CommonUI_LoadAndCreateDialog_EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog___;
        v90 = (CommonUI_o *)v109;
        goto LABEL_91;
      }
LABEL_126:
      sub_1BCB25C(Instance, v43, v78);
    }
  }
}


void __fastcall EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__10(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1C6FB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    byte_4B1C6FB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( !EventTutorialEntity__HasAfterAction(_4__this, 0LL) )
  {
LABEL_5:
    ActionExtensions__Call(action, 0LL);
    return;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  if ( EventTutorialEntity__IsBlankEarthAction(_4__this, 0LL) )
    goto LABEL_5;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_8:
    sub_1BCB254(_4__this, action);
  EventTutorialEntity__PlayBeforeOrAfterAction(_4__this, 1, action, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *_9__10; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4B1C6FA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__10__, v5);
    byte_4B1C6FA = 1;
  }
  _9__10 = this->fields.__9__10;
  if ( !_9__10 )
  {
    _9__10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__10,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass15_0__OpenTutorial_b__10__,
      0LL);
    this->fields.__9__10 = _9__10;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__10, (int32_t)_9__10, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__10,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1BCB254(Request_object, v10);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass15_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass15_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4B1C6F9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, *(_QWORD *)&questId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass15_2__OpenTutorial_b__5__, v7);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass15_2_TypeInfo, v8);
    byte_4B1C6F9 = 1;
  }
  v9 = sub_1BCB244(EventTutorialEntity___c__DisplayClass15_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 16) = questId;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventTutorialEntity___c__DisplayClass15_2__OpenTutorial_b__5__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1BCB254(Request_object, v11);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_1___ctor(
        EventTutorialEntity___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_1___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass15_1_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  if ( !dialog )
    sub_1BCB254(this, 0LL);
  EventCommonImageDialog__Open(dialog, this->fields.action, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_2___ctor(
        EventTutorialEntity___c__DisplayClass15_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_2___OpenTutorial_b__5(
        EventTutorialEntity___c__DisplayClass15_2_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct EventTutorialEntity___c__DisplayClass15_0_o *CS___8__locals2; // x8
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity___c__DisplayClass15_0_o *v10; // x8

  if ( (byte_4B1C6FC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTutorialMaster___, result);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    byte_4B1C6FC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTutorialMaster___);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2
    || (_4__this = CS___8__locals2->fields.__4__this) == 0LL
    || !Master_object
    || (EventTutorialMaster__TutorialAfterUpdateQuestTree(
          (EventTutorialMaster_o *)Master_object,
          _4__this->fields.eventId,
          v7),
        (v10 = this->fields.CS___8__locals2) == 0LL)
    || (Master_object = (Il2CppObject *)v10->fields.__4__this) == 0LL )
  {
    sub_1BCB254(Master_object, v6);
  }
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)Master_object, this->fields.questId, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_3___ctor(
        EventTutorialEntity___c__DisplayClass15_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_4___ctor(
        EventTutorialEntity___c__DisplayClass15_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_4___OpenTutorial_b__7(
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
    || (CS___8__locals3 = CS___8__locals4->fields.CS___8__locals3) == 0LL
    || (CS___8__locals1 = CS___8__locals3->fields.CS___8__locals1) == 0LL
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || !dialog )
  {
    sub_1BCB254(this, dialog);
  }
  EventEquipSkillPartsAddPartsDialog__Open(
    dialog,
    _4__this->fields.eventId,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_5___ctor(
        EventTutorialEntity___c__DisplayClass15_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_5___OpenTutorial_b__8(
        EventTutorialEntity___c__DisplayClass15_5_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass15_3_o *CS___8__locals5; // x8
  struct EventTutorialEntity___c__DisplayClass15_1_o *CS___8__locals3; // x9

  CS___8__locals5 = this->fields.CS___8__locals5;
  if ( !CS___8__locals5 || (CS___8__locals3 = CS___8__locals5->fields.CS___8__locals3) == 0LL || !dialog )
    sub_1BCB254(this, dialog);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals5->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_6___ctor(
        EventTutorialEntity___c__DisplayClass15_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass15_6___OpenTutorial_b__9(
        EventTutorialEntity___c__DisplayClass15_6_o *this,
        EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog_o *dialog,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass15_3_o *CS___8__locals6; // x8
  struct EventTutorialEntity___c__DisplayClass15_1_o *CS___8__locals3; // x9

  CS___8__locals6 = this->fields.CS___8__locals6;
  if ( !CS___8__locals6 || (CS___8__locals3 = CS___8__locals6->fields.CS___8__locals3) == 0LL || !dialog )
    sub_1BCB254(this, dialog);
  EventEquipSkillPartsRenoQuestReleaseAndCompletionDialog__Open(
    dialog,
    this->fields.msg,
    CS___8__locals6->fields.eventEquipSkillPartsEntityList,
    this->fields.assistList,
    CS___8__locals3->fields.action,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass17_0___ctor(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass17_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1C6FD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B1C6FD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass17_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1C6FE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B1C6FE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___ctor(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass19_0_o *v4; // x20
  __int64 v5; // x1
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v9; // x8
  System_String_o *text; // x21
  System_Action_o *_9__5; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v4 = this;
  if ( (byte_4B1C6FF & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, dialog);
    this = (EventTutorialEntity___c__DisplayClass19_0_o *)sub_1BCAFF8(
                                                            &Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__5__,
                                                            v5);
    byte_4B1C6FF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1BCB25C(this, dialog, method);
  v9 = textJson->m_Items[idx];
  if ( !v9 )
    goto LABEL_11;
  text = v9->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass19_0__TextTutorialChain_b__5__,
      0LL);
    v4->fields.__9__5 = _9__5;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13);
  }
  if ( !dialog )
LABEL_11:
    sub_1BCB254(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4B1C700 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_EventTutorialEntity___c__DisplayClass19_1__TextTutorialChain_b__8__, v6);
    sub_1BCAFF8(&EventTutorialEntity___c__DisplayClass19_1_TypeInfo, v7);
    byte_4B1C700 = 1;
  }
  v8 = sub_1BCB244(EventTutorialEntity___c__DisplayClass19_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_EventTutorialEntity___c__DisplayClass19_1__TextTutorialChain_b__8__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_1___ctor(
        EventTutorialEntity___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass19_1___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTutorialEntity___c__DisplayClass19_1_o *v3; // x19
  __int64 v4; // x1
  struct EventTutorialEntity___c__DisplayClass19_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v9; // x8
  int32_t questId; // w20
  struct EventTutorialEntity___c__DisplayClass19_0_o *v11; // x8

  v3 = this;
  if ( (byte_4B1C701 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_int___, method);
    this = (EventTutorialEntity___c__DisplayClass19_1_o *)sub_1BCAFF8(
                                                            &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                            v4);
    byte_4B1C701 = 1;
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
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1BCB25C(this, method, v2);
  v9 = textJson->m_Items[idx];
  if ( !v9 )
    goto LABEL_14;
  questId = v9->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass19_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_14;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0LL);
  v11 = v3->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_14;
  if ( v3->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v11->fields.transitionQuest,
      questId,
      (const MethodInfo_2F6A04C *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass19_1_o *)v11->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1BCB254(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v11->fields.idx + 1,
    v11->fields.callback,
    v11->fields.transitionQuest,
    0LL);
}