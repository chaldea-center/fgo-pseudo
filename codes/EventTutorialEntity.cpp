void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E84C2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_42E84B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, flagType, num, method);
    byte_42E84B8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventTutorialEntity__CreatePrimaryKey(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventTutorialEntity__CreatePK(this->fields.eventId, this->fields.flagType, this->fields.num, v2);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionSetupVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84C1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16891/*"beforeActionSetup"*/, (_DWORD)method, v2, v3);
    byte_42E84C1 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16891/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84C0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16892/*"beforeActionVals"*/, (_DWORD)method, v2, v3);
    byte_42E84C0 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16892/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84BF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16892/*"beforeActionVals"*/, (_DWORD)method, v2, v3);
    byte_42E84BF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16892/*"beforeActionVals"*/, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  MissionNotifyManager_o *v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v50; // x21
  int32_t flagType; // w19
  int32_t eventId; // w22
  CommonUI_o *v53; // x23
  System_Action_o *v54; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v56; // x21
  System_Action_int__o *v57; // x22
  const MethodInfo *v58; // x4

  if ( (byte_42E84BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__, v21, v22, v23);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__, v24, v25, v26);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__, v27, v28, v29);
    sub_B5D5C4(&EventTutorialEntity___c__DisplayClass22_0_TypeInfo, v30, v31, v32);
    byte_42E84BB = 1;
  }
  v33 = sub_B5D694(EventTutorialEntity___c__DisplayClass22_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass22_0___ctor((EventTutorialEntity___c__DisplayClass22_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_20;
  *(_QWORD *)(v33 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)callback, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v34 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v34 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v34, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v50 = this->fields.imageIds;
    eventId = this->fields.eventId;
    flagType = this->fields.flagType;
    v53 = (CommonUI_o *)Instance;
    v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v54,
      (Il2CppObject *)v33,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__,
      0LL);
    if ( v53 )
    {
      CommonUI__OpenTutorialImageDialog_18228308(v53, v50, flagType, eventId, v54, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B5D69C(v34, v35);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v56,
      (Il2CppObject *)v33,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__,
      0LL);
    v57 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v57,
      (Il2CppObject *)v33,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    EventTutorialEntity__TextTutorialChain(this, 0, v56, v57, v58);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v34 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v34 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v34, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v33 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  MissionNotifyManager_o *v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v44; // x19
  CommonUI_o *v45; // x21
  System_Action_o *v46; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v48; // x21
  System_Action_int__o *v49; // x20
  const MethodInfo *v50; // x4

  if ( (byte_42E84BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventTutorialEntity_TransitionQuest__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__, v27, v28, v29);
    sub_B5D5C4(&EventTutorialEntity___c__DisplayClass23_0_TypeInfo, v30, v31, v32);
    byte_42E84BC = 1;
  }
  v33 = sub_B5D694(EventTutorialEntity___c__DisplayClass23_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass23_0___ctor((EventTutorialEntity___c__DisplayClass23_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_20;
  *(_QWORD *)(v33 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)callback, v36, v37, v38, v39, v40, v41);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v34 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v34 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v34, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v44 = this->fields.imageIds;
    v45 = (CommonUI_o *)Instance;
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v33,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v45 )
    {
      CommonUI__OpenTutorialImageDialog_18228308(v45, v44, -1, 0, v46, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B5D69C(v34, v35);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v33,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v49 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v49,
      (Il2CppObject *)this,
      Method_EventTutorialEntity_TransitionQuest__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    EventTutorialEntity__TextTutorialChain(this, 0, v48, v49, v50);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v34 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v34 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v34, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v33 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__TextTutorialChain(
        EventTutorialEntity_o *this,
        int32_t idx,
        System_Action_o *callback,
        System_Action_int__o *transitionQuest,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  __int64 v66; // x19
  WebViewManager_o *IsNullOrEmpty; // x0
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v88; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v90; // x8
  struct System_Int32_array *textPos; // x9
  float v92; // s9
  float v93; // s10
  float v94; // s8
  __int64 v95; // x10
  struct System_Int32_array *ptPos; // x9
  __int64 v97; // x10
  float v98; // s11
  System_String_o *scrDlgTitle; // x22
  int spacingY; // w23
  struct EventTutorialEntity_TextTuto_array *v101; // x8
  __int64 v102; // x9
  EventTutorialEntity_TextTuto_o *v103; // x8
  struct EventTutorialEntity_TextTuto_array *v104; // x8
  __int64 v105; // x9
  EventTutorialEntity_TextTuto_o *v106; // x8
  System_String_o *text; // x21
  CommonUI_o *v108; // x20
  System_Action_o *v109; // x22
  struct EventTutorialEntity_TextTuto_array *v110; // x8
  __int64 v111; // x9
  EventTutorialEntity_TextTuto_o *v112; // x8
  System_String_o *v113; // x21
  CommonUI_o *v114; // x20
  ScrollMessageDialog_ClickDelegate_o *v115; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v118; // w20
  CommonUI_o *v119; // x22
  System_Action_o *v120; // x23
  int v121; // w21
  struct EventTutorialEntity_TextTuto_array *v122; // x8
  __int64 v123; // x9
  EventTutorialEntity_TextTuto_o *v124; // x8
  CommonUI_o *v125; // x22
  System_String_o *v126; // x23
  System_String_o *Empty; // x24
  System_String_o *v128; // x25
  System_String_o *v129; // x26
  CommonConfirmDialog_ClickDelegate_o *v130; // x27
  struct EventTutorialEntity_TextTuto_array *v131; // x8
  __int64 v132; // x9
  EventTutorialEntity_TextTuto_o *v133; // x8
  CommonUI_o *Instance; // x21
  System_Action_o *v135; // x22
  struct EventTutorialEntity_TextTuto_array *v136; // x8
  __int64 v137; // x9
  EventTutorialEntity_TextTuto_o *v138; // x8
  System_String_o *v139; // x23
  CommonUI_o *v140; // x22
  System_Action_o *v141; // x24
  struct EventTutorialEntity_TextTuto_array *v142; // x8
  __int64 v143; // x9
  EventTutorialEntity_TextTuto_o *v144; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  float v146; // s4
  float v147; // s5
  float v148; // s6
  float v149; // s7
  struct EventTutorialEntity_TextTuto_array *v150; // x8
  UnityEngine_Rect_array *v151; // x22
  int v152; // w23
  bool v153; // w9
  __int64 v154; // x10
  EventTutorialEntity_TextTuto_o *v155; // x8
  struct EventTutorialEntity_RectData_array *v156; // x8
  il2cpp_array_size_t v157; // w24
  int *v158; // x8
  int32_t v159; // w23
  struct EventTutorialEntity_TextTuto_array *v160; // x8
  __int64 v161; // x9
  EventTutorialEntity_TextTuto_o *v162; // x8
  struct EventTutorialEntity_TextTuto_array *v163; // x8
  __int64 v164; // x9
  EventTutorialEntity_TextTuto_o *v165; // x8
  System_String_o *v166; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v168; // x20
  System_Action_o *v169; // x26
  __int64 v170; // x0
  MethodInfo v171; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v172; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v173; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Rect_o v174; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E84BE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, idx, (_DWORD)callback, transitionQuest);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ScrollMessageDialog_ClickDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Rect___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&string_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__0__, v27, v28, v29);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__1__, v30, v31, v32);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__2__, v33, v34, v35);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__3__, v36, v37, v38);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__4__, v39, v40, v41);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__6__, v42, v43, v44);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__7__, v45, v46, v47);
    sub_B5D5C4(&EventTutorialEntity___c__DisplayClass25_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_11094/*"QUEST_RELEASE_DIALOG_CANCEL"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_20462/*"left"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_22128/*"right"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_11095/*"QUEST_RELEASE_DIALOG_DECIDE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_1/*""*/, v63, v64, v65);
    byte_42E84BE = 1;
  }
  v66 = sub_B5D694(EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass25_0___ctor((EventTutorialEntity___c__DisplayClass25_0_o *)v66, 0LL);
  if ( !v66 )
    goto LABEL_90;
  *(_QWORD *)(v66 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)this, v69, v70, v71, v72, v73, v74);
  *(_DWORD *)(v66 + 24) = idx;
  *(_QWORD *)(v66 + 32) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v66 + 32), (System_Int32_array **)callback, v75, v76, v77, v78, v79, v80);
  *(_QWORD *)(v66 + 40) = transitionQuest;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v66 + 40),
    (System_Int32_array **)transitionQuest,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_90;
  v88 = *(int *)(v66 + 24);
  max_length = textJson->max_length;
  if ( (int)v88 >= max_length )
    goto LABEL_40;
  if ( (unsigned int)v88 >= max_length )
    goto LABEL_91;
  v90 = textJson->m_Items[v88];
  if ( !v90 )
    goto LABEL_90;
  textPos = v90->fields.textPos;
  v92 = 0.0;
  v93 = 0.0;
  v94 = 0.0;
  if ( textPos )
  {
    v95 = *(_QWORD *)&textPos->max_length;
    v93 = 0.0;
    v94 = 0.0;
    if ( v95 )
    {
      if ( (unsigned int)v95 < 2 )
        goto LABEL_91;
      v93 = (float)textPos->m_Items[1];
      v94 = (float)textPos->m_Items[2];
    }
  }
  ptPos = v90->fields.ptPos;
  if ( ptPos )
  {
    v97 = *(_QWORD *)&ptPos->max_length;
    v98 = 0.0;
    if ( v97 )
    {
      if ( (unsigned int)v97 < 2 )
        goto LABEL_91;
      v92 = (float)ptPos->m_Items[1];
      v98 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v98 = 0.0;
  }
  scrDlgTitle = v90->fields.scrDlgTitle;
  spacingY = v90->fields.spacingY;
  IsNullOrEmpty = (WebViewManager_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v101 = this->fields.textJson;
    if ( !v101 )
      goto LABEL_90;
    v102 = *(int *)(v66 + 24);
    if ( (unsigned int)v102 >= v101->max_length )
      goto LABEL_91;
    v103 = v101->m_Items[v102];
    if ( !v103 )
      goto LABEL_90;
    if ( v103->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v104 = this->fields.textJson;
      if ( !v104 )
        goto LABEL_90;
      v105 = *(int *)(v66 + 24);
      if ( (unsigned int)v105 < v104->max_length )
      {
        v106 = v104->m_Items[v105];
        if ( v106 )
        {
          text = v106->fields.text;
          v108 = (CommonUI_o *)IsNullOrEmpty;
          v109 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v109,
            (Il2CppObject *)v66,
            Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__1__,
            0LL);
          if ( v108 )
          {
            CommonUI__OpenFortificationNotifyDialog(v108, text, v109, 0LL);
            return;
          }
        }
LABEL_90:
        sub_B5D69C(IsNullOrEmpty, v68);
      }
      goto LABEL_91;
    }
    if ( v103->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v103->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v103->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_91;
          v118 = releaseClassBoardBaseIds->m_Items[1];
          v119 = (CommonUI_o *)IsNullOrEmpty;
          v120 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v120,
            (Il2CppObject *)v66,
            Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__3__,
            0LL);
          if ( !v119 )
            goto LABEL_90;
          CommonUI__OpenClassBoardAddClassDialog(v119, v118, addClassIds, v120, 0LL);
        }
        else
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v135 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v135,
            (Il2CppObject *)v66,
            Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__4__,
            0LL);
          if ( !Instance )
            goto LABEL_90;
          CommonUI__OpenClassBoardReleaseDialog(Instance, releaseClassBoardBaseIds, v135, 0LL);
        }
        return;
      }
LABEL_40:
      ActionExtensions__Call(*(System_Action_o **)(v66 + 32), 0LL);
      return;
    }
    v121 = spacingY & ~(spacingY >> 31);
    if ( v103->fields.isQuestRelease )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v122 = this->fields.textJson;
      if ( !v122 )
        goto LABEL_90;
      v123 = *(int *)(v66 + 24);
      if ( (unsigned int)v123 >= v122->max_length )
        goto LABEL_91;
      v124 = v122->m_Items[v123];
      if ( !v124 )
        goto LABEL_90;
      v125 = (CommonUI_o *)IsNullOrEmpty;
      v126 = v124->fields.text;
      Empty = string_TypeInfo->static_fields->Empty;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11095/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
      v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
      v130 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v130,
        (Il2CppObject *)v66,
        Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__2__,
        0LL);
      v131 = this->fields.textJson;
      if ( !v131 )
        goto LABEL_90;
      v132 = *(int *)(v66 + 24);
      if ( (unsigned int)v132 >= v131->max_length )
        goto LABEL_91;
      v133 = v131->m_Items[v132];
      if ( !v133 || !v125 )
        goto LABEL_90;
      CommonUI__OpenConfirmDecideDlg(
        v125,
        Empty,
        v126,
        v128,
        v129,
        v130,
        v133->fields.dlgFontSize,
        0.0,
        15.0,
        v121,
        0,
        0,
        240,
        0,
        0,
        0,
        0LL);
    }
    else if ( v103->fields.dlgFontSize < 1 )
    {
      rects = v103->fields.rects;
      if ( !rects )
        goto LABEL_90;
      IsNullOrEmpty = (WebViewManager_o *)sub_B5D5DC(UnityEngine_Rect___TypeInfo, rects->max_length);
      if ( !IsNullOrEmpty )
        goto LABEL_90;
      v150 = this->fields.textJson;
      if ( !v150 )
        goto LABEL_90;
      v151 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v152 = 1;
      v153 = SLODWORD(IsNullOrEmpty->fields.basePanel) > 0;
      while ( 1 )
      {
        v154 = *(int *)(v66 + 24);
        if ( (unsigned int)v154 >= v150->max_length )
          goto LABEL_91;
        v155 = v150->m_Items[v154];
        if ( !v155 )
          goto LABEL_90;
        if ( !v153 )
          break;
        v156 = v155->fields.rects;
        if ( !v156 )
          goto LABEL_90;
        v157 = v152 - 1;
        if ( v152 - 1 >= v156->max_length )
          goto LABEL_91;
        v158 = (int *)v156->m_Items[v157];
        if ( !v158 )
          goto LABEL_90;
        v174.fields.m_XMin = (float)v158[4];
        v174.fields.m_YMin = (float)v158[5];
        v174.fields.m_Width = (float)v158[6];
        v174.fields.m_Height = (float)v158[7];
        v171.methodPointer = 0LL;
        v171.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v174, v146, v147, v148, v149, &v171);
        if ( v157 >= v151->max_length )
          goto LABEL_91;
        *(_OWORD *)&v151->m_Items[v157].fields.m_YMin = *(_OWORD *)&v171.methodPointer;
        v150 = this->fields.textJson;
        v153 = v152++ < (signed int)v151->max_length;
        if ( !v150 )
          goto LABEL_90;
      }
      IsNullOrEmpty = (WebViewManager_o *)BasicHelper__EqualExceptNullOrEmpty(
                                            v155->fields.textAlign,
                                            (System_String_o *)StringLiteral_20462/*"left"*/,
                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v159 = 1;
      }
      else
      {
        v160 = this->fields.textJson;
        if ( !v160 )
          goto LABEL_90;
        v161 = *(int *)(v66 + 24);
        if ( (unsigned int)v161 >= v160->max_length )
          goto LABEL_91;
        v162 = v160->m_Items[v161];
        if ( !v162 )
          goto LABEL_90;
        if ( BasicHelper__EqualExceptNullOrEmpty(v162->fields.textAlign, (System_String_o *)StringLiteral_22128/*"right"*/, 0LL) )
          v159 = 3;
        else
          v159 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v163 = this->fields.textJson;
      if ( !v163 )
        goto LABEL_90;
      v164 = *(int *)(v66 + 24);
      if ( (unsigned int)v164 >= v163->max_length )
      {
LABEL_91:
        v170 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v170, 0LL);
      }
      v165 = v163->m_Items[v164];
      if ( !v165 )
        goto LABEL_90;
      v166 = v165->fields.text;
      dlgBgId = v165->fields.dlgBgId;
      v168 = (CommonUI_o *)IsNullOrEmpty;
      v169 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v169,
        (Il2CppObject *)v66,
        Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__7__,
        0LL);
      if ( !v168 )
        goto LABEL_90;
      v173.fields.z = 0.0;
      v172.fields.x = v93;
      v172.fields.y = v94;
      v173.fields.x = v92;
      v173.fields.y = v98;
      CommonUI__OpenEventTutorialNotificationDialog(v168, v166, v151, v172, v173, dlgBgId, v159, v169, 0LL, v121, 0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v136 = this->fields.textJson;
      if ( !v136 )
        goto LABEL_90;
      v137 = *(int *)(v66 + 24);
      if ( (unsigned int)v137 >= v136->max_length )
        goto LABEL_91;
      v138 = v136->m_Items[v137];
      if ( !v138 )
        goto LABEL_90;
      v139 = v138->fields.text;
      v140 = (CommonUI_o *)IsNullOrEmpty;
      v141 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v141,
        (Il2CppObject *)v66,
        Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__6__,
        0LL);
      v142 = this->fields.textJson;
      if ( !v142 )
        goto LABEL_90;
      v143 = *(int *)(v66 + 24);
      if ( (unsigned int)v143 >= v142->max_length )
        goto LABEL_91;
      v144 = v142->m_Items[v143];
      if ( !v144 || !v140 )
        goto LABEL_90;
      CommonUI__OpenNotificationDialog_18202968(
        v140,
        (System_String_o *)StringLiteral_1/*""*/,
        v139,
        v141,
        v94,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v144->fields.dlgFontSize,
        0,
        v121,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v110 = this->fields.textJson;
    if ( !v110 )
      goto LABEL_90;
    v111 = *(int *)(v66 + 24);
    if ( (unsigned int)v111 >= v110->max_length )
      goto LABEL_91;
    v112 = v110->m_Items[v111];
    if ( !v112 )
      goto LABEL_90;
    v113 = v112->fields.text;
    v114 = (CommonUI_o *)IsNullOrEmpty;
    v115 = (ScrollMessageDialog_ClickDelegate_o *)sub_B5D694(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v115,
      (Il2CppObject *)v66,
      Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v114 )
      goto LABEL_90;
    CommonUI__OpenScrollMessageDialog(v114, scrDlgTitle, v113, 10, v115, 0, 0, 0LL);
  }
}


void __fastcall EventTutorialEntity__TransitionQuest(
        EventTutorialEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v16; // x1

  if ( (byte_42E84BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E84BD = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B68 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, questId, (_DWORD)method, v3);
    byte_42E4B68 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause(Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v16);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Int32_array_array *__fastcall EventTutorialEntity__getTargets(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_String_array *targetIds; // x8
  System_String_o *v33; // x0
  System_String_o *v34; // x1
  struct System_String_array *v35; // x8
  System_Int32_array_array *v36; // x20
  __int64 v37; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v40; // x22
  System_String_array *v41; // x0
  EventTutorialEntity___c_c *v42; // x8
  System_String_array *v43; // x22
  struct EventTutorialEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x23
  Il2CppObject *v46; // x24
  struct EventTutorialEntity___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42E84B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_ConvertAll_string__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Converter_string__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Converter_string__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_____TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_EventTutorialEntity___c__getTargets_b__16_0__, v17, v18, v19);
    sub_B5D5C4(&EventTutorialEntity___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v29, v30, v31);
    byte_42E84B7 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B5D5DC(int_____TypeInfo, 1LL);
  v33 = (System_String_o *)sub_B5D5DC(int_____TypeInfo, targetIds->max_length);
  v35 = this->fields.targetIds;
  if ( !v35 )
LABEL_26:
    sub_B5D69C(v33, v34);
  v36 = (System_Int32_array_array *)v33;
  v37 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v33[1].monitor;
  while ( 1 )
  {
    max_length = v35->max_length;
    if ( (int)v37 >= max_length )
      return v36;
    if ( (unsigned int)v37 >= max_length )
      goto LABEL_29;
    v33 = v35->m_Items[v37];
    if ( v33 )
    {
      v33 = System_String__Replace_44585024(
              v33,
              (System_String_o *)StringLiteral_15824/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v33 )
      {
        v40 = System_String__Replace_44585024(
                v33,
                (System_String_o *)StringLiteral_16061/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v33 = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( v33 )
        {
          v34 = v33;
          if ( !LODWORD(v33[1].klass) )
            goto LABEL_29;
          LOWORD(v33[1].monitor) = 44;
          if ( v40 )
          {
            v41 = System_String__Split(v40, (System_Char_array *)v33, 0LL);
            v42 = EventTutorialEntity___c_TypeInfo;
            v43 = v41;
            if ( (BYTE3(EventTutorialEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
              v42 = EventTutorialEntity___c_TypeInfo;
            }
            static_fields = v42->static_fields;
            _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
            if ( !_9__16_0 )
            {
              if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v42);
                static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
              }
              v46 = (Il2CppObject *)static_fields->__9;
              _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__16_0,
                v46,
                Method_EventTutorialEntity___c__getTargets_b__16_0__,
                (const MethodInfo_23F6FAC *)Method_System_Converter_string__int___ctor__);
              v47 = EventTutorialEntity___c_TypeInfo->static_fields;
              v47->__9__16_0 = (struct System_Converter_string__int__o *)_9__16_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v47->__9__16_0,
                (System_Int32_array **)_9__16_0,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53);
            }
            v33 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v43,
                                       (System_Converter_TInput__TOutput__o *)_9__16_0,
                                       (const MethodInfo_1FBF43C *)Method_System_Array_ConvertAll_string__int___);
            if ( v36 )
            {
              v60 = (System_Int32_array **)v33;
              if ( v33 )
              {
                v33 = (System_String_o *)sub_B5D684(v33, v36->obj.klass->_1.element_class);
                if ( !v33 )
                {
                  v63 = sub_B5D6BC(0LL);
                  sub_B5D668(v63, 0LL);
                }
              }
              if ( (unsigned int)v37 >= v36->max_length )
              {
LABEL_29:
                v62 = sub_B5D6C8(v33);
                sub_B5D668(v62, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v60;
              sub_B5D560(p_monitor, v60, v54, v55, v56, v57, v58, v59);
              v35 = this->fields.targetIds;
              ++v37;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v35 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x1
  int v33; // w2
  __int64 v34; // x3
  System_Int32_array_array *Targets; // x22
  DataManager_o *Instance; // x0
  int32_t v37; // w8
  const MethodInfo *v38; // x5
  __int64 v39; // x8
  __int64 v40; // x9
  System_Int32_array *v41; // x11
  int max_length; // w12
  int32_t v43; // w11
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v46; // x8
  QuestGroupMaster_o *v47; // x21
  unsigned __int64 v48; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  System_Int32_array *v52; // x11
  __int64 v53; // x8
  System_Int32_array *v54; // x9
  __int64 v55; // x8
  __int64 v56; // x9
  System_Int32_array *v57; // x11
  int v58; // w12
  int32_t v59; // w13
  int32_t v60; // w13
  int32_t v61; // w11
  __int64 v62; // x8
  __int64 v63; // x9
  System_Int32_array *v64; // x11
  int v65; // w12
  int32_t v66; // w13
  int32_t v67; // w11
  TerminalSceneComponent_c *v68; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v70; // x21
  __int64 v71; // x0

  if ( (byte_42E84BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, qId, ex1, *(_QWORD *)&ex2);
    sub_B5D5C4(&CondType_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v29, v30, v31);
    byte_42E84BA = 1;
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
      if ( !Targets )
        goto LABEL_4;
      v50 = *(_QWORD *)&Targets->max_length;
      if ( !v50 )
        goto LABEL_4;
      if ( (int)v50 < 1 )
        goto LABEL_125;
      v51 = 0LL;
      while ( 2 )
      {
        v52 = Targets->m_Items[v51];
        if ( !v52 )
          goto LABEL_127;
        if ( (int)v52->max_length >= 1 && v52->m_Items[1] != qId )
        {
          ++v51;
          Instance = 0LL;
          if ( (int)v51 >= (int)v50 )
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
    case 0x45:
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
        v39 = *(_QWORD *)&Targets->max_length;
        if ( v39 )
        {
          if ( (int)v39 >= 1 )
          {
            v40 = 0LL;
            while ( 1 )
            {
              v41 = Targets->m_Items[v40];
              if ( !v41 )
                break;
              max_length = v41->max_length;
              if ( max_length < 1 )
                goto LABEL_4;
              if ( v41->m_Items[1] == qId )
              {
                if ( max_length < 2 )
                  goto LABEL_4;
                v43 = v41->m_Items[2];
                if ( v43 == ex1 || !v43 )
                  goto LABEL_4;
              }
              ++v40;
              Instance = 0LL;
              if ( (int)v40 >= (int)v39 )
                return (char)Instance;
            }
LABEL_127:
            sub_B5D69C(Instance, v32);
          }
          goto LABEL_125;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_125;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_127;
      v46 = *(_QWORD *)&condIds->max_length;
      if ( (int)v46 < 1 )
        goto LABEL_125;
      v47 = (QuestGroupMaster_o *)Instance;
      v48 = 0LL;
      while ( v48 < (unsigned int)v46 )
      {
        if ( !v47 )
          goto LABEL_127;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v47, condIds->m_Items[v48 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v46) = condIds->max_length;
        ++v48;
        Instance = 0LL;
        if ( (__int64)v48 >= (int)v46 )
          return (char)Instance;
      }
      goto LABEL_128;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v55 = *(_QWORD *)&Targets->max_length;
      if ( !v55 )
        goto LABEL_4;
      if ( (int)v55 < 1 )
        goto LABEL_125;
      v56 = 0LL;
      while ( 2 )
      {
        v57 = Targets->m_Items[v56];
        if ( !v57 )
          goto LABEL_127;
        v58 = v57->max_length;
        if ( v58 >= 1 )
        {
          if ( v57->m_Items[1] != qId
            || v58 >= 2
            && ((v59 = v57->m_Items[2], v59 != ex1) && v59
             || v58 >= 3
             && ((v60 = v57->m_Items[3], v60 != ex2) && v60 || v58 >= 4 && (v61 = v57->m_Items[4], v61 != ex3) && v61)) )
          {
            ++v56;
            Instance = 0LL;
            if ( (int)v56 >= (int)v55 )
              return (char)Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v62 = *(_QWORD *)&Targets->max_length;
      if ( !v62 || (int)v62 < 1 )
        goto LABEL_4;
      v63 = 0LL;
      while ( 2 )
      {
        v64 = Targets->m_Items[v63];
        if ( !v64 )
          goto LABEL_127;
        v65 = v64->max_length;
        if ( v65 < 1 )
          goto LABEL_125;
        if ( v64->m_Items[1] != qId )
          goto LABEL_87;
        if ( v65 < 2 )
          goto LABEL_125;
        v66 = v64->m_Items[2];
        if ( v66 != ex1 )
        {
          if ( v66 )
            goto LABEL_87;
        }
        if ( v65 < 3 )
          goto LABEL_125;
        v67 = v64->m_Items[3];
        Instance = 0LL;
        if ( v67 != ex2 )
        {
          if ( v67 )
          {
LABEL_87:
            if ( (int)++v63 >= (int)v62 )
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
        goto LABEL_125;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
        goto LABEL_125;
      goto LABEL_4;
    case 0x37:
      if ( this->fields.condType != 95 )
        goto LABEL_125;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
      {
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsSvtEquipFriendShipStorageHaving(0LL) )
          goto LABEL_125;
      }
      goto LABEL_4;
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x4D:
      if ( !Targets )
        goto LABEL_4;
      v53 = *(_QWORD *)&Targets->max_length;
      if ( !v53 )
        goto LABEL_4;
      if ( (_DWORD)v53 != 1 )
      {
        if ( (int)v53 < 1 )
        {
LABEL_125:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_118;
      }
      v54 = Targets->m_Items[0];
      if ( !v54 )
        goto LABEL_127;
      if ( v54->max_length != 1 || v54->m_Items[1] )
      {
LABEL_118:
        v70 = 0LL;
        while ( (unsigned int)v70 < (unsigned int)v53 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v70];
          if ( !Instance )
            goto LABEL_127;
          if ( SLODWORD(Instance->fields.datalist) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v53) = Targets->max_length;
          ++v70;
          Instance = 0LL;
          if ( (int)v70 >= (int)v53 )
            return (char)Instance;
        }
LABEL_128:
        v71 = sub_B5D6C8(Instance);
        sub_B5D668(v71, 0LL);
      }
LABEL_4:
      v37 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v37 && v37 != 11 )
      {
        if ( v37 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_127;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_127;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v38);
        }
      }
      return (char)Instance;
    case 0x43:
      if ( !Targets || !*(_QWORD *)&Targets->max_length )
        goto LABEL_4;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v32, v33, v34);
        byte_42E4B1E = 1;
      }
      v68 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v68 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v68->static_fields->mInstance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_125;
      if ( !mInstance )
        goto LABEL_127;
      Instance = (DataManager_o *)mInstance[10].monitor;
      if ( !Instance )
        goto LABEL_127;
      if ( !ScrTerminalListTop__ContainsMapQuest((ScrTerminalListTop_o *)Instance, Targets, 0LL) )
        goto LABEL_125;
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

  if ( (byte_42E84B9 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, qId, ex1, *(_QWORD *)&ex2);
    byte_42E84B9 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_29297972(flagType, eventId, 0LL)
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E569F & 1) == 0 )
  {
    sub_B5D5C4(&EventTutorialEntity___c_TypeInfo, v1, v2, v3);
    byte_42E569F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTutorialEntity___c___getTargets_b__16_0(
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


void __fastcall EventTutorialEntity___c__DisplayClass22_0___ctor(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E56A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E56A0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  NetworkManager_ResultCallbackFunc_o *_9__3; // x20
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_42E56A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__3__, v11, v12, v13);
    byte_42E56A1 = 1;
  }
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     _9__3,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
    sub_B5D69C(Request_WarBoardWallAttackRequest, v16);
  TutorialEventSetRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v20; // x1
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_42E56A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass22_1__OpenTutorial_b__4__, v12, v13, v14);
    sub_B5D5C4(&EventTutorialEntity___c__DisplayClass22_1_TypeInfo, v15, v16, v17);
    byte_42E56A3 = 1;
  }
  v18 = sub_B5D694(EventTutorialEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560(v18 + 24);
  *(_DWORD *)(v18 + 16) = questId;
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)v18,
    Method_EventTutorialEntity___c__DisplayClass22_1__OpenTutorial_b__4__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v21,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
LABEL_10:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v20);
  TutorialEventSetRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E56A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E56A2 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_1___ctor(
        EventTutorialEntity___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_1___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass22_1_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass22_0_o *CS___8__locals1; // x8
  EventTutorialEntity_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
    sub_B5D69C(this, result);
  EventTutorialEntity__TransitionQuest(_4__this, this->fields.questId, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___ctor(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E56A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E56A4 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E56A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E56A5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___ctor(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v19; // x20

  if ( (byte_42E56A6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_EventTutorialEntity___c__DisplayClass25_1__TextTutorialChain_b__5__, v9, v10, v11);
    sub_B5D5C4(&EventTutorialEntity___c__DisplayClass25_1_TypeInfo, v12, v13, v14);
    byte_42E56A6 = 1;
  }
  v15 = sub_B5D694(EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 24) = this,
        sub_B5D560(v15 + 24),
        *(_BYTE *)(v15 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v15,
          Method_EventTutorialEntity___c__DisplayClass25_1__TextTutorialChain_b__5__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  CommonUI__CloseConfirmDialog_18202348(Instance, v19, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_1___ctor(
        EventTutorialEntity___c__DisplayClass25_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_1___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass25_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventTutorialEntity___c__DisplayClass25_1_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventTutorialEntity___c__DisplayClass25_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v15; // x8
  int32_t questId; // w20
  struct EventTutorialEntity___c__DisplayClass25_0_o *v17; // x8
  __int64 v18; // x0

  v4 = this;
  if ( (byte_42E56A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5, v6, v7);
    this = (EventTutorialEntity___c__DisplayClass25_1_o *)sub_B5D5C4(
                                                            &SingletonTemplate_QuestTree__TypeInfo,
                                                            v8,
                                                            v9,
                                                            v10);
    byte_42E56A7 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_17;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_17;
  idx = CS___8__locals1->fields.idx;
  if ( (unsigned int)idx >= textJson->max_length )
  {
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
  }
  v15 = textJson->m_Items[idx];
  if ( !v15 )
    goto LABEL_17;
  questId = v15->fields.questId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (EventTutorialEntity___c__DisplayClass25_1_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_17;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0LL);
  v17 = v4->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_17;
  if ( v4->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v17->fields.transitionQuest,
      questId,
      (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass25_1_o *)v17->fields.__4__this;
  if ( !this )
LABEL_17:
    sub_B5D69C(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v17->fields.idx + 1,
    v17->fields.callback,
    v17->fields.transitionQuest,
    0LL);
}