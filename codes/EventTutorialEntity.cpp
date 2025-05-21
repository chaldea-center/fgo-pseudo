void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C43 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44C43 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4B44C42 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_4B44C42 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_3031F74 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4B44C3D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16698/*"afterActionVals"*/, method);
    byte_4B44C3D = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16698/*"afterActionVals"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44C3E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17137/*"beforeActionSetup"*/, method);
    byte_4B44C3E = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17137/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44C3C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17138/*"beforeActionVals"*/, method);
    byte_4B44C3C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17138/*"beforeActionVals"*/, 0LL);
}


System_String_o *__fastcall EventTutorialEntity__GetDialogPrefabName(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44C41 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18624/*"dialogPrefabName"*/, method);
    byte_4B44C41 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18624/*"dialogPrefabName"*/, 0LL, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t __fastcall EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C40 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23108/*"resumeTransitionWar"*/, method);
    byte_4B44C40 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23108/*"resumeTransitionWar"*/, 0, 0LL);
}


bool __fastcall EventTutorialEntity__HasAfterAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C3B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16698/*"afterActionVals"*/, method);
    byte_4B44C3B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16698/*"afterActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C3A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17138/*"beforeActionVals"*/, method);
    byte_4B44C3A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17138/*"beforeActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44C3F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23108/*"resumeTransitionWar"*/, method);
    byte_4B44C3F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23108/*"resumeTransitionWar"*/, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v25; // x0
  System_Int32_array *v26; // x21
  int32_t eventId; // w19
  int32_t flagType; // w22
  EventTutorialEntity_Fields *p_fields; // t2
  CommonUI_o *v30; // x23
  System_Action_o *v31; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v33; // x21
  System_Action_int__o *v34; // x22
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  Il2CppObject *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x22
  const MethodInfo *v43; // x1
  System_String_o *DialogPrefabName; // x19
  System_Action_object__o *v45; // x23
  int32_t v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B44C36 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_EventCommonImageDialog__TypeInfo, callback);
    sub_1BDB878(&System_Action_int__TypeInfo, v5);
    sub_1BDB878(&System_Action_TypeInfo, v6);
    sub_1BDB878(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___, v7);
    sub_1BDB878(&int_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__0__, v11);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__1__, v12);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__2__, v13);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__3__, v14);
    sub_1BDB878(&EventTutorialEntity___c__DisplayClass10_0_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_6282/*"EventUI/Prefabs/{0}"*/, v16);
    byte_4B44C36 = 1;
  }
  v17 = sub_1BDBAC4(EventTutorialEntity___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)callback, v20, v21);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)this, v22, v23);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = this->fields.imageIds;
    p_fields = &this->fields;
    eventId = this->fields.eventId;
    flagType = p_fields->flagType;
    v30 = (CommonUI_o *)v25;
    v31 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__0__,
      0LL);
    if ( v30 )
    {
      CommonUI__OpenTutorialImageDialog_30860008(v30, v26, flagType, eventId, v31, 0LL, 0LL, 0LL);
      return;
    }
LABEL_18:
    sub_1BDBAD4(Instance, v19);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v33 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__1__,
      0LL);
    v34 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v34,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__2__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v33, v34, v35);
  }
  else if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0LL)
         || !EventTutorialEntity__GetDialogPrefabName(this, v36) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
  }
  else
  {
    v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v46 = this->fields.eventId;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v38, v39, v40);
    v42 = System_String__Format((System_String_o *)StringLiteral_6282/*"EventUI/Prefabs/{0}"*/, v41, 0LL);
    DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this, v43);
    v45 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EventCommonImageDialog__TypeInfo);
    System_Action_object____ctor(
      v45,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__3__,
      0LL);
    if ( !v37 )
      goto LABEL_18;
    CommonUI__LoadAndCreateDialog_object_(
      (CommonUI_o *)v37,
      v42,
      DialogPrefabName,
      (System_Action_T__o *)v45,
      (const MethodInfo_3029EA8 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
  }
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

  if ( (byte_4B44C37 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, callback);
    sub_1BDB878(&System_Action_TypeInfo, v5);
    sub_1BDB878(&Method_EventTutorialEntity_TransitionQuest__, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass11_0__OpenTutorialWithoutFlag_b__0__, v9);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass11_0__OpenTutorialWithoutFlag_b__1__, v10);
    sub_1BDB878(&EventTutorialEntity___c__DisplayClass11_0_TypeInfo, v11);
    byte_4B44C37 = 1;
  }
  v12 = sub_1BDBAC4(EventTutorialEntity___c__DisplayClass11_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass11_0___ctor((EventTutorialEntity___c__DisplayClass11_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = this->fields.imageIds;
    v20 = (CommonUI_o *)v18;
    v21 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass11_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v20 )
    {
      CommonUI__OpenTutorialImageDialog_30860008(v20, v19, -1, 0, v21, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1BDBAD4(Instance, v14);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass11_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v24 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
    System_Action_int____ctor(v24, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v23, v24, v25);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v12 + 16), 0LL);
  }
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
  EventTutorialEntity_o *v8; // x20
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
  __int64 v38; // x19
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
  Il2CppObject *Instance; // x20
  System_Action_object__o *v70; // x21
  struct EventTutorialEntity_TextTuto_array *v71; // x8
  __int64 v72; // x9
  EventTutorialEntity_TextTuto_o *v73; // x8
  System_String_o *v74; // x21
  CommonUI_o *v75; // x20
  ScrollMessageDialog_ClickDelegate_o *v76; // x22
  struct System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v79; // w20
  CommonUI_o *v80; // x22
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
  Il2CppObject *v98; // x20
  System_Action_o *v99; // x21
  Il2CppObject *v100; // x21
  System_Action_o *v101; // x22
  Il2CppObject *v102; // x0
  int32_t eventId; // w20
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
  CommonUI_o *v151; // x20
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
    if ( (byte_4B44C39 & 1) == 0 )
    {
      sub_1BDB878(&System_Action_FortificationNotifyDialog__TypeInfo, *(_QWORD *)&idx);
      sub_1BDB878(&System_Action_TypeInfo, v9);
      sub_1BDB878(&ScrollMessageDialog_ClickDelegate_TypeInfo, v10);
      sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
      sub_1BDB878(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___, v12);
      sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, v13);
      sub_1BDB878(&Method_DataManager_GetMaster_SelectBonusBaseMaster___, v14);
      sub_1BDB878(&DataManager_TypeInfo, v15);
      sub_1BDB878(&LocalizationManager_TypeInfo, v16);
      sub_1BDB878(&Method_System_Nullable_int___ctor__, v17);
      sub_1BDB878(&UnityEngine_Rect___TypeInfo, v18);
      sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
      sub_1BDB878(&string_TypeInfo, v20);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__0__, v21);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__10__, v22);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__11__, v23);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__1__, v24);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__2__, v25);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__3__, v26);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__4__, v27);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__6__, v28);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__7__, v29);
      sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__9__, v30);
      sub_1BDB878(&EventTutorialEntity___c__DisplayClass13_0_TypeInfo, v31);
      sub_1BDB878(&StringLiteral_10898/*"QUEST_RELEASE_DIALOG_CANCEL"*/, v32);
      sub_1BDB878(&StringLiteral_21208/*"left"*/, v33);
      sub_1BDB878(&StringLiteral_6281/*"EventUI/Prefabs/80400"*/, v34);
      sub_1BDB878(&StringLiteral_6846/*"FortificationNotifyDialog"*/, v35);
      sub_1BDB878(&StringLiteral_23136/*"right"*/, v36);
      sub_1BDB878(&StringLiteral_10899/*"QUEST_RELEASE_DIALOG_DECIDE"*/, v37);
      byte_4B44C39 = 1;
    }
    v38 = sub_1BDBAC4(EventTutorialEntity___c__DisplayClass13_0_TypeInfo);
    EventTutorialEntity___c__DisplayClass13_0___ctor((EventTutorialEntity___c__DisplayClass13_0_o *)v38, 0LL);
    if ( !v38 )
      goto LABEL_121;
    *(_QWORD *)(v38 + 16) = v8;
    sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 16), (int32_t)v8, v41, v42);
    *(_DWORD *)(v38 + 24) = v7;
    *(_QWORD *)(v38 + 32) = v6;
    sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 32), (int32_t)v6, v43, v44);
    *(_QWORD *)(v38 + 40) = v5;
    sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 40), (int32_t)v5, v45, v46);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v70 = (System_Action_object__o *)sub_1BDBAC4(System_Action_FortificationNotifyDialog__TypeInfo);
      System_Action_object____ctor(
        v70,
        (Il2CppObject *)v38,
        Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__1__,
        0LL);
      if ( Instance )
      {
        CommonUI__LoadAndCreateDialog_object_(
          (CommonUI_o *)Instance,
          (System_String_o *)StringLiteral_6281/*"EventUI/Prefabs/80400"*/,
          (System_String_o *)StringLiteral_6846/*"FortificationNotifyDialog"*/,
          (System_Action_T__o *)v70,
          (const MethodInfo_3029EA8 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
        return;
      }
LABEL_121:
      sub_1BDBAD4(Master_object, v40);
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
        Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( releaseClassBoardBaseIds->max_length )
        {
          v79 = releaseClassBoardBaseIds->m_Items[1];
          v80 = (CommonUI_o *)Master_object;
          v81 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v81,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__6__,
            0LL);
          if ( !v80 )
            goto LABEL_121;
          CommonUI__OpenClassBoardAddClassDialog(v80, v79, addClassIds, v81, 0LL);
          return;
        }
        goto LABEL_122;
      }
      v100 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v101 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v101,
        (Il2CppObject *)v38,
        Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__7__,
        0LL);
      if ( !v100 )
        goto LABEL_121;
      CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)v100, releaseClassBoardBaseIds, v101, 0, 0LL);
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
          Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          v92 = LocalizationManager__Get((System_String_o *)StringLiteral_10899/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10898/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
          v94 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v94,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__3__,
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
          v102 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
          eventId = v8->fields.eventId;
          v104 = (SelectBonusBaseMaster_o *)v102;
          v105 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v105,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__4__,
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
          Master_object = (Il2CppObject *)sub_1BDB920(UnityEngine_Rect___TypeInfo, rects->max_length);
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
                                            (System_String_o *)StringLiteral_21208/*"left"*/,
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
                   (System_String_o *)StringLiteral_23136/*"right"*/,
                   0LL) )
            {
              v127 = 3;
            }
            else
            {
              v127 = 2;
            }
          }
          Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v146 = v8->fields.textJson;
          if ( !v146 )
            goto LABEL_121;
          v147 = *(int *)(v38 + 24);
          if ( (unsigned int)v147 >= v146->max_length )
LABEL_122:
            sub_1BDBADC(Master_object, v40, v47);
          v148 = v146->m_Items[v147];
          if ( !v148 )
            goto LABEL_121;
          v149 = v148->fields.text;
          dlgBgId = v148->fields.dlgBgId;
          v151 = (CommonUI_o *)Master_object;
          v152 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v152,
            (Il2CppObject *)v38,
            Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__11__,
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
            Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            v112 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v112,
              (Il2CppObject *)v38,
              Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__9__,
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
            CommonUI__OpenNotificationDialog_30834564(
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
            Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            v138 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v138,
              (Il2CppObject *)v38,
              Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__10__,
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
              (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
            if ( !v137 )
              goto LABEL_121;
            CommonUI__OpenNotificationDialog_30834564(
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
        v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v99 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          v99,
          (Il2CppObject *)v38,
          Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__2__,
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
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v76 = (ScrollMessageDialog_ClickDelegate_o *)sub_1BDBAC4(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v76,
      (Il2CppObject *)v38,
      Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__0__,
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

  if ( (byte_4B44C38 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&questId);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    byte_4B44C38 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B41AF4 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    byte_4B41AF4 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v8);
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
  System_Converter_object__int__o *_9__6_0; // x23
  Il2CppObject *v23; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3

  if ( (byte_4B44C33 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1BDB878(&System_Converter_string__int__TypeInfo, v3);
    sub_1BDB878(&int_____TypeInfo, v4);
    sub_1BDB878(&Method_EventTutorialEntity___c__getTargets_b__6_0__, v5);
    sub_1BDB878(&EventTutorialEntity___c_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    sub_1BDB878(&StringLiteral_16038/*"]"*/, v9);
    byte_4B44C33 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1BDB920(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1BDB920(int_____TypeInfo, targetIds->max_length);
  v14 = this->fields.targetIds;
  if ( !v14 )
LABEL_20:
    sub_1BDBAD4(v11, v12);
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
      v11 = System_String__Replace_62618808(
              v11,
              (System_String_o *)StringLiteral_15782/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_62618808(
                v11,
                (System_String_o *)StringLiteral_16038/*"]"*/,
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
          _9__6_0 = (System_Converter_object__int__o *)v20->static_fields->__9__6_0;
          if ( !_9__6_0 )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v20 = EventTutorialEntity___c_TypeInfo;
            }
            v23 = (Il2CppObject *)v20->static_fields->__9;
            _9__6_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__6_0, v23, Method_EventTutorialEntity___c__getTargets_b__6_0__, 0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__6_0 = (struct System_Converter_string__int__o *)_9__6_0;
            sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v25, v26);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v21,
                                     (System_Converter_TInput__TOutput__o *)_9__6_0,
                                     (const MethodInfo_312F52C *)Method_System_Array_ConvertAll_string__int___);
          if ( v15 )
          {
            if ( (unsigned int)v16 >= v15->max_length )
LABEL_23:
              sub_1BDBADC(v11, v12, v13);
            p_monitor->klass = (CGThumbnailListItem_c *)v11;
            sub_1BDB81C(p_monitor, (int32_t)v11, v13, v27);
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
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v34; // x8
  QuestGroupMaster_o *v35; // x21
  unsigned __int64 v36; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v38; // x8
  System_Int32_array *v39; // x9
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

  if ( (byte_4B44C35 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_1BDB878(&CondType_TypeInfo, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v17);
    byte_4B44C35 = 1;
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
    case 0x64:
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
            sub_1BDBAD4(Instance, v18);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v34 = *(_QWORD *)&condIds->max_length;
      if ( (int)v34 < 1 )
        goto LABEL_118;
      v35 = (QuestGroupMaster_o *)Instance;
      v36 = 0LL;
      while ( v36 < (unsigned int)v34 )
      {
        if ( !v35 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v35, condIds->m_Items[v36 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_3132F28 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v34) = condIds->max_length;
        ++v36;
        Instance = 0LL;
        if ( (__int64)v36 >= (int)v34 )
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
      if ( !Targets )
        goto LABEL_4;
      v38 = *(_QWORD *)&Targets->max_length;
      if ( !v38 )
        goto LABEL_4;
      if ( (_DWORD)v38 != 1 )
      {
        if ( (int)v38 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_74;
      }
      v39 = Targets->m_Items[0];
      if ( !v39 )
        goto LABEL_120;
      if ( v39->max_length != 1 || v39->m_Items[1] )
      {
LABEL_74:
        v47 = 0LL;
        while ( (unsigned int)v47 < (unsigned int)v38 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v47];
          if ( !Instance )
            goto LABEL_120;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v38) = Targets->max_length;
          ++v47;
          Instance = 0LL;
          if ( (int)v47 >= (int)v38 )
            return (char)Instance;
        }
LABEL_121:
        sub_1BDBADC(Instance, v18, v19);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
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
      if ( !byte_4B3EEEF )
      {
        sub_1BDB878(&TerminalSceneComponent_TypeInfo, v18);
        byte_4B3EEEF = 1;
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
  int32_t eventId; // w24
  int32_t flagType; // w25
  const MethodInfo *v13; // x5

  if ( (byte_4B44C34 & 1) == 0 )
  {
    sub_1BDB878(&TutorialFlag_TypeInfo, *(_QWORD *)&qId);
    byte_4B44C34 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_39485244(flagType, eventId, 0LL)
      && EventTutorialEntity__isEnableCondition(this, qId, ex1, ex2, ex3, v13);
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

  if ( (byte_4B44C44 & 1) == 0 )
  {
    sub_1BDB878(&EventTutorialEntity___c_TypeInfo, v1);
    byte_4B44C44 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTutorialEntity___c___getTargets_b__6_0(
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


void __fastcall EventTutorialEntity___c__DisplayClass10_0___ctor(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B44C45 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B44C45 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4B44C46 & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__4__, v5);
    byte_4B44C46 = 1;
  }
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__4, (int32_t)_9__4, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1BDBAD4(Request_object, v10);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
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

  if ( (byte_4B44C48 & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, *(_QWORD *)&questId);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_1__OpenTutorial_b__5__, v7);
    sub_1BDB878(&EventTutorialEntity___c__DisplayClass10_1_TypeInfo, v8);
    byte_4B44C48 = 1;
  }
  v9 = sub_1BDBAC4(EventTutorialEntity___c__DisplayClass10_1_TypeInfo);
  EventTutorialEntity___c__DisplayClass10_1___ctor((EventTutorialEntity___c__DisplayClass10_1_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 16) = questId;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventTutorialEntity___c__DisplayClass10_1__OpenTutorial_b__5__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1BDBAD4(Request_object, v11);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass10_0_o *v4; // x20
  __int64 v5; // x1
  System_Action_o *_9__6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4B44C49 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, dialog);
    this = (EventTutorialEntity___c__DisplayClass10_0_o *)sub_1BDB878(
                                                            &Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__6__,
                                                            v5);
    byte_4B44C49 = 1;
  }
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__6, (int32_t)_9__6, v7, v8);
  }
  if ( !dialog )
    sub_1BDBAD4(this, dialog);
  EventCommonImageDialog__Open(dialog, _9__6, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B44C47 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    byte_4B44C47 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4B44C4A & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__7__, v5);
    byte_4B44C4A = 1;
  }
  _9__7 = this->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorial_b__7__,
      0LL);
    this->fields.__9__7 = _9__7;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__7, (int32_t)_9__7, v7, v8);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__7,
                     (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1BDBAD4(Request_object, v10);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorial_b__7(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B44C4B & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    byte_4B44C4B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_1___ctor(
        EventTutorialEntity___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_1___OpenTutorial_b__5(
        EventTutorialEntity___c__DisplayClass10_1_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass10_0_o *CS___8__locals1; // x8
  EventTutorialEntity_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
    sub_1BDBAD4(this, result);
  EventTutorialEntity__TransitionQuest(_4__this, this->fields.questId, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___ctor(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B44C4C & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B44C4C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B44C4D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B44C4D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___ctor(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass13_0_o *v4; // x20
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
  if ( (byte_4B44C4E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, dialog);
    this = (EventTutorialEntity___c__DisplayClass13_0_o *)sub_1BDB878(
                                                            &Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__5__,
                                                            v5);
    byte_4B44C4E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1BDBADC(this, dialog, method);
  v9 = textJson->m_Items[idx];
  if ( !v9 )
    goto LABEL_11;
  text = v9->fields.text;
  _9__5 = v4->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass13_0__TextTutorialChain_b__5__,
      0LL);
    v4->fields.__9__5 = _9__5;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v12, v13);
  }
  if ( !dialog )
LABEL_11:
    sub_1BDBAD4(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__5, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__11(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
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

  if ( (byte_4B44C4F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BDB878(&Method_EventTutorialEntity___c__DisplayClass13_1__TextTutorialChain_b__8__, v6);
    sub_1BDB878(&EventTutorialEntity___c__DisplayClass13_1_TypeInfo, v7);
    byte_4B44C4F = 1;
  }
  v8 = sub_1BDBAC4(EventTutorialEntity___c__DisplayClass13_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_EventTutorialEntity___c__DisplayClass13_1__TextTutorialChain_b__8__,
          0LL),
        !Instance) )
  {
    sub_1BDBAD4(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30833860((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_1___ctor(
        EventTutorialEntity___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass13_1___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTutorialEntity___c__DisplayClass13_1_o *v3; // x19
  __int64 v4; // x1
  struct EventTutorialEntity___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v9; // x8
  int32_t questId; // w20
  struct EventTutorialEntity___c__DisplayClass13_0_o *v11; // x8

  v3 = this;
  if ( (byte_4B44C50 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_int___, method);
    this = (EventTutorialEntity___c__DisplayClass13_1_o *)sub_1BDB878(
                                                            &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                            v4);
    byte_4B44C50 = 1;
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
    sub_1BDBADC(this, method, v2);
  v9 = textJson->m_Items[idx];
  if ( !v9 )
    goto LABEL_14;
  questId = v9->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass13_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      (const MethodInfo_2F82F2C *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass13_1_o *)v11->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1BDBAD4(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v11->fields.idx + 1,
    v11->fields.callback,
    v11->fields.transitionQuest,
    0LL);
}