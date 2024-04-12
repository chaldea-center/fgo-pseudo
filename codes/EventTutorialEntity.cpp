void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AF8AB & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AF8AB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_42AF8A1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42AF8A1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_42AF8AA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16800/*"beforeActionSetup"*/);
    byte_42AF8AA = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16800/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AF8A9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16801/*"beforeActionVals"*/);
    byte_42AF8A9 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16801/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AF8A8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16801/*"beforeActionVals"*/);
    byte_42AF8A8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16801/*"beforeActionVals"*/, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  MissionNotifyManager_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v22; // x21
  int32_t flagType; // w19
  int32_t eventId; // w22
  CommonUI_o *v25; // x23
  System_Action_o *v26; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v28; // x21
  System_Action_int__o *v29; // x22
  const MethodInfo *v30; // x4

  if ( (byte_42AF8A4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__);
    sub_B52984(&EventTutorialEntity___c__DisplayClass22_0_TypeInfo);
    byte_42AF8A4 = 1;
  }
  v5 = sub_B52A54(EventTutorialEntity___c__DisplayClass22_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass22_0___ctor((EventTutorialEntity___c__DisplayClass22_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v6 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v6, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = this->fields.imageIds;
    eventId = this->fields.eventId;
    flagType = this->fields.flagType;
    v25 = (CommonUI_o *)Instance;
    v26 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__,
      0LL);
    if ( v25 )
    {
      CommonUI__OpenTutorialImageDialog_18184372(v25, v22, flagType, eventId, v26, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B52A5C(v6, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__,
      0LL);
    v29 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v29,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__,
      (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
    EventTutorialEntity__TextTutorialChain(this, 0, v28, v29, v30);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v6 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v6, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  MissionNotifyManager_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v16; // x19
  CommonUI_o *v17; // x21
  System_Action_o *v18; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v20; // x21
  System_Action_int__o *v21; // x20
  const MethodInfo *v22; // x4

  if ( (byte_42AF8A5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventTutorialEntity_TransitionQuest__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__);
    sub_B52984(&EventTutorialEntity___c__DisplayClass23_0_TypeInfo);
    byte_42AF8A5 = 1;
  }
  v5 = sub_B52A54(EventTutorialEntity___c__DisplayClass23_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass23_0___ctor((EventTutorialEntity___c__DisplayClass23_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v6 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v6, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = this->fields.imageIds;
    v17 = (CommonUI_o *)Instance;
    v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v17 )
    {
      CommonUI__OpenTutorialImageDialog_18184372(v17, v16, -1, 0, v18, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B52A5C(v6, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v21 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventTutorialEntity_TransitionQuest__,
      (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
    EventTutorialEntity__TextTutorialChain(this, 0, v20, v21, v22);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v6 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v6, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__TextTutorialChain(
        EventTutorialEntity_o *this,
        int32_t idx,
        System_Action_o *callback,
        System_Action_int__o *transitionQuest,
        const MethodInfo *method)
{
  __int64 v9; // x19
  WebViewManager_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v31; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v33; // x8
  struct System_Int32_array *textPos; // x9
  float v35; // s9
  float v36; // s10
  float v37; // s8
  __int64 v38; // x10
  struct System_Int32_array *ptPos; // x9
  __int64 v40; // x10
  float v41; // s11
  System_String_o *scrDlgTitle; // x22
  int spacingY; // w23
  struct EventTutorialEntity_TextTuto_array *v44; // x8
  __int64 v45; // x9
  EventTutorialEntity_TextTuto_o *v46; // x8
  struct EventTutorialEntity_TextTuto_array *v47; // x8
  __int64 v48; // x9
  EventTutorialEntity_TextTuto_o *v49; // x8
  System_String_o *text; // x21
  CommonUI_o *v51; // x20
  System_Action_o *v52; // x22
  struct EventTutorialEntity_TextTuto_array *v53; // x8
  __int64 v54; // x9
  EventTutorialEntity_TextTuto_o *v55; // x8
  System_String_o *v56; // x21
  CommonUI_o *v57; // x20
  ScrollMessageDialog_ClickDelegate_o *v58; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v61; // w20
  CommonUI_o *v62; // x22
  System_Action_o *v63; // x23
  int v64; // w21
  struct EventTutorialEntity_TextTuto_array *v65; // x8
  __int64 v66; // x9
  EventTutorialEntity_TextTuto_o *v67; // x8
  CommonUI_o *v68; // x22
  System_String_o *v69; // x23
  System_String_o *Empty; // x24
  System_String_o *v71; // x25
  System_String_o *v72; // x26
  CommonConfirmDialog_ClickDelegate_o *v73; // x27
  struct EventTutorialEntity_TextTuto_array *v74; // x8
  __int64 v75; // x9
  EventTutorialEntity_TextTuto_o *v76; // x8
  CommonUI_o *Instance; // x21
  System_Action_o *v78; // x22
  struct EventTutorialEntity_TextTuto_array *v79; // x8
  __int64 v80; // x9
  EventTutorialEntity_TextTuto_o *v81; // x8
  System_String_o *v82; // x23
  CommonUI_o *v83; // x22
  System_Action_o *v84; // x24
  struct EventTutorialEntity_TextTuto_array *v85; // x8
  __int64 v86; // x9
  EventTutorialEntity_TextTuto_o *v87; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  float v89; // s4
  float v90; // s5
  float v91; // s6
  float v92; // s7
  struct EventTutorialEntity_TextTuto_array *v93; // x8
  UnityEngine_Rect_array *v94; // x22
  int v95; // w23
  bool v96; // w9
  __int64 v97; // x10
  EventTutorialEntity_TextTuto_o *v98; // x8
  struct EventTutorialEntity_RectData_array *v99; // x8
  il2cpp_array_size_t v100; // w24
  int *v101; // x8
  int32_t v102; // w23
  struct EventTutorialEntity_TextTuto_array *v103; // x8
  __int64 v104; // x9
  EventTutorialEntity_TextTuto_o *v105; // x8
  struct EventTutorialEntity_TextTuto_array *v106; // x8
  __int64 v107; // x9
  EventTutorialEntity_TextTuto_o *v108; // x8
  System_String_o *v109; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v111; // x20
  System_Action_o *v112; // x26
  __int64 v113; // x0
  MethodInfo v114; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v115; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v116; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Rect_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AF8A7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Rect___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__0__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__1__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__2__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__3__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__4__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__6__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__7__);
    sub_B52984(&EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
    sub_B52984(&StringLiteral_11048/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_20359/*"left"*/);
    sub_B52984(&StringLiteral_22014/*"right"*/);
    sub_B52984(&StringLiteral_11049/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF8A7 = 1;
  }
  v9 = sub_B52A54(EventTutorialEntity___c__DisplayClass25_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass25_0___ctor((EventTutorialEntity___c__DisplayClass25_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_90;
  *(_QWORD *)(v9 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = idx;
  *(_QWORD *)(v9 + 32) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = transitionQuest;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 40),
    (System_Int32_array **)transitionQuest,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_90;
  v31 = *(int *)(v9 + 24);
  max_length = textJson->max_length;
  if ( (int)v31 >= max_length )
    goto LABEL_40;
  if ( (unsigned int)v31 >= max_length )
    goto LABEL_91;
  v33 = textJson->m_Items[v31];
  if ( !v33 )
    goto LABEL_90;
  textPos = v33->fields.textPos;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  if ( textPos )
  {
    v38 = *(_QWORD *)&textPos->max_length;
    v36 = 0.0;
    v37 = 0.0;
    if ( v38 )
    {
      if ( (unsigned int)v38 < 2 )
        goto LABEL_91;
      v36 = (float)textPos->m_Items[1];
      v37 = (float)textPos->m_Items[2];
    }
  }
  ptPos = v33->fields.ptPos;
  if ( ptPos )
  {
    v40 = *(_QWORD *)&ptPos->max_length;
    v41 = 0.0;
    if ( v40 )
    {
      if ( (unsigned int)v40 < 2 )
        goto LABEL_91;
      v35 = (float)ptPos->m_Items[1];
      v41 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v41 = 0.0;
  }
  scrDlgTitle = v33->fields.scrDlgTitle;
  spacingY = v33->fields.spacingY;
  IsNullOrEmpty = (WebViewManager_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v44 = this->fields.textJson;
    if ( !v44 )
      goto LABEL_90;
    v45 = *(int *)(v9 + 24);
    if ( (unsigned int)v45 >= v44->max_length )
      goto LABEL_91;
    v46 = v44->m_Items[v45];
    if ( !v46 )
      goto LABEL_90;
    if ( v46->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = this->fields.textJson;
      if ( !v47 )
        goto LABEL_90;
      v48 = *(int *)(v9 + 24);
      if ( (unsigned int)v48 < v47->max_length )
      {
        v49 = v47->m_Items[v48];
        if ( v49 )
        {
          text = v49->fields.text;
          v51 = (CommonUI_o *)IsNullOrEmpty;
          v52 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v52,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__1__,
            0LL);
          if ( v51 )
          {
            CommonUI__OpenFortificationNotifyDialog(v51, text, v52, 0LL);
            return;
          }
        }
LABEL_90:
        sub_B52A5C(IsNullOrEmpty, v11);
      }
      goto LABEL_91;
    }
    if ( v46->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v46->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v46->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_91;
          v61 = releaseClassBoardBaseIds->m_Items[1];
          v62 = (CommonUI_o *)IsNullOrEmpty;
          v63 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v63,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__3__,
            0LL);
          if ( !v62 )
            goto LABEL_90;
          CommonUI__OpenClassBoardAddClassDialog(v62, v61, addClassIds, v63, 0LL);
        }
        else
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v78 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v78,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__4__,
            0LL);
          if ( !Instance )
            goto LABEL_90;
          CommonUI__OpenClassBoardReleaseDialog(Instance, releaseClassBoardBaseIds, v78, 0LL);
        }
        return;
      }
LABEL_40:
      ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0LL);
      return;
    }
    v64 = spacingY & ~(spacingY >> 31);
    if ( v46->fields.isQuestRelease )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v65 = this->fields.textJson;
      if ( !v65 )
        goto LABEL_90;
      v66 = *(int *)(v9 + 24);
      if ( (unsigned int)v66 >= v65->max_length )
        goto LABEL_91;
      v67 = v65->m_Items[v66];
      if ( !v67 )
        goto LABEL_90;
      v68 = (CommonUI_o *)IsNullOrEmpty;
      v69 = v67->fields.text;
      Empty = string_TypeInfo->static_fields->Empty;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11049/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_11048/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
      v73 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v73,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__2__,
        0LL);
      v74 = this->fields.textJson;
      if ( !v74 )
        goto LABEL_90;
      v75 = *(int *)(v9 + 24);
      if ( (unsigned int)v75 >= v74->max_length )
        goto LABEL_91;
      v76 = v74->m_Items[v75];
      if ( !v76 || !v68 )
        goto LABEL_90;
      CommonUI__OpenConfirmDecideDlg(
        v68,
        Empty,
        v69,
        v71,
        v72,
        v73,
        v76->fields.dlgFontSize,
        0.0,
        15.0,
        v64,
        0,
        0,
        240,
        0,
        0,
        0LL);
    }
    else if ( v46->fields.dlgFontSize < 1 )
    {
      rects = v46->fields.rects;
      if ( !rects )
        goto LABEL_90;
      IsNullOrEmpty = (WebViewManager_o *)sub_B5299C(UnityEngine_Rect___TypeInfo, rects->max_length);
      if ( !IsNullOrEmpty )
        goto LABEL_90;
      v93 = this->fields.textJson;
      if ( !v93 )
        goto LABEL_90;
      v94 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v95 = 1;
      v96 = SLODWORD(IsNullOrEmpty->fields.basePanel) > 0;
      while ( 1 )
      {
        v97 = *(int *)(v9 + 24);
        if ( (unsigned int)v97 >= v93->max_length )
          goto LABEL_91;
        v98 = v93->m_Items[v97];
        if ( !v98 )
          goto LABEL_90;
        if ( !v96 )
          break;
        v99 = v98->fields.rects;
        if ( !v99 )
          goto LABEL_90;
        v100 = v95 - 1;
        if ( v95 - 1 >= v99->max_length )
          goto LABEL_91;
        v101 = (int *)v99->m_Items[v100];
        if ( !v101 )
          goto LABEL_90;
        v117.fields.m_XMin = (float)v101[4];
        v117.fields.m_YMin = (float)v101[5];
        v117.fields.m_Width = (float)v101[6];
        v117.fields.m_Height = (float)v101[7];
        v114.methodPointer = 0LL;
        v114.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v117, v89, v90, v91, v92, &v114);
        if ( v100 >= v94->max_length )
          goto LABEL_91;
        *(_OWORD *)&v94->m_Items[v100].fields.m_YMin = *(_OWORD *)&v114.methodPointer;
        v93 = this->fields.textJson;
        v96 = v95++ < (signed int)v94->max_length;
        if ( !v93 )
          goto LABEL_90;
      }
      IsNullOrEmpty = (WebViewManager_o *)BasicHelper__EqualExceptNullOrEmpty(
                                            v98->fields.textAlign,
                                            (System_String_o *)StringLiteral_20359/*"left"*/,
                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v102 = 1;
      }
      else
      {
        v103 = this->fields.textJson;
        if ( !v103 )
          goto LABEL_90;
        v104 = *(int *)(v9 + 24);
        if ( (unsigned int)v104 >= v103->max_length )
          goto LABEL_91;
        v105 = v103->m_Items[v104];
        if ( !v105 )
          goto LABEL_90;
        if ( BasicHelper__EqualExceptNullOrEmpty(v105->fields.textAlign, (System_String_o *)StringLiteral_22014/*"right"*/, 0LL) )
          v102 = 3;
        else
          v102 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v106 = this->fields.textJson;
      if ( !v106 )
        goto LABEL_90;
      v107 = *(int *)(v9 + 24);
      if ( (unsigned int)v107 >= v106->max_length )
      {
LABEL_91:
        v113 = sub_B52A88(IsNullOrEmpty);
        sub_B52A28(v113, 0LL);
      }
      v108 = v106->m_Items[v107];
      if ( !v108 )
        goto LABEL_90;
      v109 = v108->fields.text;
      dlgBgId = v108->fields.dlgBgId;
      v111 = (CommonUI_o *)IsNullOrEmpty;
      v112 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v112,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__7__,
        0LL);
      if ( !v111 )
        goto LABEL_90;
      v116.fields.z = 0.0;
      v115.fields.x = v36;
      v115.fields.y = v37;
      v116.fields.x = v35;
      v116.fields.y = v41;
      CommonUI__OpenEventTutorialNotificationDialog(v111, v109, v94, v115, v116, dlgBgId, v102, v112, 0LL, v64, 0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v79 = this->fields.textJson;
      if ( !v79 )
        goto LABEL_90;
      v80 = *(int *)(v9 + 24);
      if ( (unsigned int)v80 >= v79->max_length )
        goto LABEL_91;
      v81 = v79->m_Items[v80];
      if ( !v81 )
        goto LABEL_90;
      v82 = v81->fields.text;
      v83 = (CommonUI_o *)IsNullOrEmpty;
      v84 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v84,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__6__,
        0LL);
      v85 = this->fields.textJson;
      if ( !v85 )
        goto LABEL_90;
      v86 = *(int *)(v9 + 24);
      if ( (unsigned int)v86 >= v85->max_length )
        goto LABEL_91;
      v87 = v85->m_Items[v86];
      if ( !v87 || !v83 )
        goto LABEL_90;
      CommonUI__OpenNotificationDialog_18159032(
        v83,
        (System_String_o *)StringLiteral_1/*""*/,
        v82,
        v84,
        v37,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v87->fields.dlgFontSize,
        0,
        v64,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v53 = this->fields.textJson;
    if ( !v53 )
      goto LABEL_90;
    v54 = *(int *)(v9 + 24);
    if ( (unsigned int)v54 >= v53->max_length )
      goto LABEL_91;
    v55 = v53->m_Items[v54];
    if ( !v55 )
      goto LABEL_90;
    v56 = v55->fields.text;
    v57 = (CommonUI_o *)IsNullOrEmpty;
    v58 = (ScrollMessageDialog_ClickDelegate_o *)sub_B52A54(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v58,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass25_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v57 )
      goto LABEL_90;
    CommonUI__OpenScrollMessageDialog(v57, scrDlgTitle, v56, 10, v58, 0, 0, 0LL);
  }
}


void __fastcall EventTutorialEntity__TransitionQuest(
        EventTutorialEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AF8A6 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF8A6 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2EA )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2EA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause(Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Int32_array_array *__fastcall EventTutorialEntity__getTargets(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  System_String_o *v5; // x1
  struct System_String_array *v6; // x8
  System_Int32_array_array *v7; // x20
  __int64 v8; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v11; // x22
  System_String_array *v12; // x0
  EventTutorialEntity___c_c *v13; // x8
  System_String_array *v14; // x22
  struct EventTutorialEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x23
  Il2CppObject *v17; // x24
  struct EventTutorialEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x22
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_42AF8A0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_ConvertAll_string__int___);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Converter_string__int___ctor__);
    sub_B52984(&System_Converter_string__int__TypeInfo);
    sub_B52984(&int_____TypeInfo);
    sub_B52984(&Method_EventTutorialEntity___c__getTargets_b__16_0__);
    sub_B52984(&EventTutorialEntity___c_TypeInfo);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42AF8A0 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B5299C(int_____TypeInfo, 1LL);
  v4 = (System_String_o *)sub_B5299C(int_____TypeInfo, targetIds->max_length);
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_26:
    sub_B52A5C(v4, v5);
  v7 = (System_Int32_array_array *)v4;
  v8 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_29;
    v4 = v6->m_Items[v8];
    if ( v4 )
    {
      v4 = System_String__Replace_44575552(
             v4,
             (System_String_o *)StringLiteral_15739/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v11 = System_String__Replace_44575552(
                v4,
                (System_String_o *)StringLiteral_15976/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v4 = (System_String_o *)sub_B5299C(char___TypeInfo, 1LL);
        if ( v4 )
        {
          v5 = v4;
          if ( !LODWORD(v4[1].klass) )
            goto LABEL_29;
          LOWORD(v4[1].monitor) = 44;
          if ( v11 )
          {
            v12 = System_String__Split(v11, (System_Char_array *)v4, 0LL);
            v13 = EventTutorialEntity___c_TypeInfo;
            v14 = v12;
            if ( (BYTE3(EventTutorialEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
              v13 = EventTutorialEntity___c_TypeInfo;
            }
            static_fields = v13->static_fields;
            _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
            if ( !_9__16_0 )
            {
              if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v13);
                static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
              }
              v17 = (Il2CppObject *)static_fields->__9;
              _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__16_0,
                v17,
                Method_EventTutorialEntity___c__getTargets_b__16_0__,
                (const MethodInfo_23DE474 *)Method_System_Converter_string__int___ctor__);
              v18 = EventTutorialEntity___c_TypeInfo->static_fields;
              v18->__9__16_0 = (struct System_Converter_string__int__o *)_9__16_0;
              sub_B52920(
                (BattleServantConfConponent_o *)&v18->__9__16_0,
                (System_Int32_array **)_9__16_0,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
            }
            v4 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                      v14,
                                      (System_Converter_TInput__TOutput__o *)_9__16_0,
                                      (const MethodInfo_2019898 *)Method_System_Array_ConvertAll_string__int___);
            if ( v7 )
            {
              v31 = (System_Int32_array **)v4;
              if ( v4 )
              {
                v4 = (System_String_o *)sub_B52A44(v4, v7->obj.klass->_1.element_class);
                if ( !v4 )
                {
                  v34 = sub_B52A7C(0LL);
                  sub_B52A28(v34, 0LL);
                }
              }
              if ( (unsigned int)v8 >= v7->max_length )
              {
LABEL_29:
                v33 = sub_B52A88(v4);
                sub_B52A28(v33, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v31;
              sub_B52920(p_monitor, v31, v25, v26, v27, v28, v29, v30);
              v6 = this->fields.targetIds;
              ++v8;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v6 )
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
  __int64 v11; // x1
  System_Int32_array_array *Targets; // x22
  DataManager_o *Instance; // x0
  int32_t v14; // w8
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  __int64 v17; // x9
  System_Int32_array *v18; // x11
  int max_length; // w12
  int32_t v20; // w11
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v23; // x8
  QuestGroupMaster_o *v24; // x21
  unsigned __int64 v25; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  System_Int32_array *v29; // x11
  __int64 v30; // x8
  System_Int32_array *v31; // x9
  __int64 v32; // x8
  __int64 v33; // x9
  System_Int32_array *v34; // x11
  int v35; // w12
  int32_t v36; // w13
  int32_t v37; // w13
  int32_t v38; // w11
  __int64 v39; // x8
  __int64 v40; // x9
  System_Int32_array *v41; // x11
  int v42; // w12
  int32_t v43; // w13
  int32_t v44; // w11
  TerminalSceneComponent_c *v45; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v47; // x21
  __int64 v48; // x0

  if ( (byte_42AF8A3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AF8A3 = 1;
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
      v27 = *(_QWORD *)&Targets->max_length;
      if ( !v27 )
        goto LABEL_4;
      if ( (int)v27 < 1 )
        goto LABEL_125;
      v28 = 0LL;
      while ( 2 )
      {
        v29 = Targets->m_Items[v28];
        if ( !v29 )
          goto LABEL_127;
        if ( (int)v29->max_length >= 1 && v29->m_Items[1] != qId )
        {
          ++v28;
          Instance = 0LL;
          if ( (int)v28 >= (int)v27 )
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
        v16 = *(_QWORD *)&Targets->max_length;
        if ( v16 )
        {
          if ( (int)v16 >= 1 )
          {
            v17 = 0LL;
            while ( 1 )
            {
              v18 = Targets->m_Items[v17];
              if ( !v18 )
                break;
              max_length = v18->max_length;
              if ( max_length < 1 )
                goto LABEL_4;
              if ( v18->m_Items[1] == qId )
              {
                if ( max_length < 2 )
                  goto LABEL_4;
                v20 = v18->m_Items[2];
                if ( v20 == ex1 || !v20 )
                  goto LABEL_4;
              }
              ++v17;
              Instance = 0LL;
              if ( (int)v17 >= (int)v16 )
                return (char)Instance;
            }
LABEL_127:
            sub_B52A5C(Instance, v11);
          }
          goto LABEL_125;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_125;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_127;
      v23 = *(_QWORD *)&condIds->max_length;
      if ( (int)v23 < 1 )
        goto LABEL_125;
      v24 = (QuestGroupMaster_o *)Instance;
      v25 = 0LL;
      while ( v25 < (unsigned int)v23 )
      {
        if ( !v24 )
          goto LABEL_127;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v24, condIds->m_Items[v25 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v23) = condIds->max_length;
        ++v25;
        Instance = 0LL;
        if ( (__int64)v25 >= (int)v23 )
          return (char)Instance;
      }
      goto LABEL_128;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v32 = *(_QWORD *)&Targets->max_length;
      if ( !v32 )
        goto LABEL_4;
      if ( (int)v32 < 1 )
        goto LABEL_125;
      v33 = 0LL;
      while ( 2 )
      {
        v34 = Targets->m_Items[v33];
        if ( !v34 )
          goto LABEL_127;
        v35 = v34->max_length;
        if ( v35 >= 1 )
        {
          if ( v34->m_Items[1] != qId
            || v35 >= 2
            && ((v36 = v34->m_Items[2], v36 != ex1) && v36
             || v35 >= 3
             && ((v37 = v34->m_Items[3], v37 != ex2) && v37 || v35 >= 4 && (v38 = v34->m_Items[4], v38 != ex3) && v38)) )
          {
            ++v33;
            Instance = 0LL;
            if ( (int)v33 >= (int)v32 )
              return (char)Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v39 = *(_QWORD *)&Targets->max_length;
      if ( !v39 || (int)v39 < 1 )
        goto LABEL_4;
      v40 = 0LL;
      while ( 2 )
      {
        v41 = Targets->m_Items[v40];
        if ( !v41 )
          goto LABEL_127;
        v42 = v41->max_length;
        if ( v42 < 1 )
          goto LABEL_125;
        if ( v41->m_Items[1] != qId )
          goto LABEL_87;
        if ( v42 < 2 )
          goto LABEL_125;
        v43 = v41->m_Items[2];
        if ( v43 != ex1 )
        {
          if ( v43 )
            goto LABEL_87;
        }
        if ( v42 < 3 )
          goto LABEL_125;
        v44 = v41->m_Items[3];
        Instance = 0LL;
        if ( v44 != ex2 )
        {
          if ( v44 )
          {
LABEL_87:
            if ( (int)++v40 >= (int)v39 )
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
      v30 = *(_QWORD *)&Targets->max_length;
      if ( !v30 )
        goto LABEL_4;
      if ( (_DWORD)v30 != 1 )
      {
        if ( (int)v30 < 1 )
        {
LABEL_125:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_118;
      }
      v31 = Targets->m_Items[0];
      if ( !v31 )
        goto LABEL_127;
      if ( v31->max_length != 1 || v31->m_Items[1] )
      {
LABEL_118:
        v47 = 0LL;
        while ( (unsigned int)v47 < (unsigned int)v30 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v47];
          if ( !Instance )
            goto LABEL_127;
          if ( SLODWORD(Instance->fields.datalist) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v30) = Targets->max_length;
          ++v47;
          Instance = 0LL;
          if ( (int)v47 >= (int)v30 )
            return (char)Instance;
        }
LABEL_128:
        v48 = sub_B52A88(Instance);
        sub_B52A28(v48, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_127;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_127;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v15);
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
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
      }
      v45 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v45 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v45->static_fields->mInstance;
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

  if ( (byte_42AF8A2 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AF8A2 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_29220040(flagType, eventId, 0LL)
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
  Il2CppObject *v1; // x19
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42ACDE9 & 1) == 0 )
  {
    sub_B52984(&EventTutorialEntity___c_TypeInfo);
    byte_42ACDE9 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_B52920(static_fields);
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
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42ACDEA & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42ACDEA = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__3; // x20
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_42ACDEB & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__3__);
    byte_42ACDEB = 1;
  }
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(&this->fields.__9__3);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     _9__3,
                                                                     (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
    sub_B52A5C(Request_WarBoardWallAttackRequest, v5);
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
  __int64 v5; // x21
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_42ACDED & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass22_1__OpenTutorial_b__4__);
    sub_B52984(&EventTutorialEntity___c__DisplayClass22_1_TypeInfo);
    byte_42ACDED = 1;
  }
  v5 = sub_B52A54(EventTutorialEntity___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920(v5 + 24);
  *(_DWORD *)(v5 + 16) = questId;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass22_1__OpenTutorial_b__4__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v8,
                                                                     (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
LABEL_10:
    sub_B52A5C(Request_WarBoardWallAttackRequest, v7);
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
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_42ACDEC & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42ACDEC = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  MissionNotifyManager__EndPause(v4, 0LL);
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
    sub_B52A5C(this, result);
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
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42ACDEE & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42ACDEE = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42ACDEF & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42ACDEF = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
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
    sub_B52A5C(0LL, isOk);
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
    sub_B52A5C(0LL, method);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_42ACDF0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_EventTutorialEntity___c__DisplayClass25_1__TextTutorialChain_b__5__);
    sub_B52984(&EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
    byte_42ACDF0 = 1;
  }
  v5 = sub_B52A54(EventTutorialEntity___c__DisplayClass25_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_B52920(v5 + 24),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass25_1__TextTutorialChain_b__5__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_18158412(Instance, v9, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass25_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
  EventTutorialEntity___c__DisplayClass25_1_o *v2; // x19
  struct EventTutorialEntity___c__DisplayClass25_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  struct EventTutorialEntity___c__DisplayClass25_0_o *v9; // x8
  __int64 v10; // x0

  v2 = this;
  if ( (byte_42ACDF1 & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_int___);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (EventTutorialEntity___c__DisplayClass25_1_o *)sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    byte_42ACDF1 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
  }
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_17;
  questId = v7->fields.questId;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (EventTutorialEntity___c__DisplayClass25_1_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_17;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0LL);
  v9 = v2->fields.CS___8__locals1;
  if ( !v9 )
    goto LABEL_17;
  if ( v2->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v9->fields.transitionQuest,
      questId,
      (const MethodInfo_2D61644 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass25_1_o *)v9->fields.__4__this;
  if ( !this )
LABEL_17:
    sub_B52A5C(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v9->fields.idx + 1,
    v9->fields.callback,
    v9->fields.transitionQuest,
    0LL);
}