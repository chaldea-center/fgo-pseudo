void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9C01 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F9C01 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_40F9BF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_40F9BF8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_40F9C00 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16621, method);
    byte_40F9C00 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16621, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9BFF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16622, method);
    byte_40F9BFF = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16622, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9BFE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16622, method);
    byte_40F9BFE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16622, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  MissionNotifyManager_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v33; // x21
  int32_t flagType; // w19
  int32_t eventId; // w22
  CommonUI_o *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x3
  MissionNotifyManager_o *v45; // x0

  if ( (byte_40F9BFB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__, v10);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__, v11);
    sub_B16FFC(&EventTutorialEntity___c__DisplayClass22_0_TypeInfo, v12);
    byte_40F9BFB = 1;
  }
  v13 = sub_B170CC(EventTutorialEntity___c__DisplayClass22_0_TypeInfo, callback, method, v3, v4);
  EventTutorialEntity___c__DisplayClass22_0___ctor((EventTutorialEntity___c__DisplayClass22_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v26 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v26 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v26, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v33 = this->fields.imageIds;
    eventId = this->fields.eventId;
    flagType = this->fields.flagType;
    v36 = (CommonUI_o *)Instance;
    v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v13,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__,
      0LL);
    if ( v36 )
    {
      CommonUI__OpenTutorialImageDialog_18263664(v36, v33, flagType, eventId, v41, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v13,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v43, v44);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v45 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v45 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v45, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v13 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  MissionNotifyManager_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v27; // x19
  CommonUI_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x3
  MissionNotifyManager_o *v37; // x0

  if ( (byte_40F9BFC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__, v10);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__, v11);
    sub_B16FFC(&EventTutorialEntity___c__DisplayClass23_0_TypeInfo, v12);
    byte_40F9BFC = 1;
  }
  v13 = sub_B170CC(EventTutorialEntity___c__DisplayClass23_0_TypeInfo, callback, method, v3, v4);
  EventTutorialEntity___c__DisplayClass23_0___ctor((EventTutorialEntity___c__DisplayClass23_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v20 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v20 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v20, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = this->fields.imageIds;
    v28 = (CommonUI_o *)Instance;
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v13,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v28 )
    {
      CommonUI__OpenTutorialImageDialog_18263664(v28, v27, -1, 0, v33, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v13,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v35, v36);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v37 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v37 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v37, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v13 + 16), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity__TextTutorialChain(
        EventTutorialEntity_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WebViewManager_o *IsNullOrEmpty; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v38; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v40; // x8
  struct System_Int32_array *textPos; // x9
  float v42; // s9
  float v43; // s10
  float v44; // s8
  __int64 v45; // x10
  struct System_Int32_array *ptPos; // x9
  __int64 v47; // x10
  float v48; // s11
  System_String_o *scrDlgTitle; // x22
  int v50; // w23
  struct EventTutorialEntity_TextTuto_array *v51; // x8
  __int64 v52; // x9
  EventTutorialEntity_TextTuto_o *v53; // x8
  __int64 v54; // x3
  __int64 v55; // x4
  struct EventTutorialEntity_TextTuto_array *v56; // x8
  __int64 v57; // x9
  EventTutorialEntity_TextTuto_o *v58; // x8
  System_String_o *text; // x21
  CommonUI_o *v60; // x20
  System_Action_o *v61; // x22
  __int64 v62; // x3
  __int64 v63; // x4
  struct EventTutorialEntity_TextTuto_array *v64; // x8
  __int64 v65; // x9
  EventTutorialEntity_TextTuto_o *v66; // x8
  System_String_o *v67; // x21
  CommonUI_o *v68; // x20
  ScrollMessageDialog_ClickDelegate_o *v69; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  __int64 v72; // x3
  __int64 v73; // x4
  int32_t v74; // w20
  CommonUI_o *v75; // x22
  System_Action_o *v76; // x23
  int spacingY; // w21
  __int64 v78; // x3
  __int64 v79; // x4
  struct EventTutorialEntity_TextTuto_array *v80; // x8
  __int64 v81; // x9
  EventTutorialEntity_TextTuto_o *v82; // x8
  System_String_o *v83; // x23
  CommonUI_o *v84; // x22
  System_Action_o *v85; // x24
  struct EventTutorialEntity_TextTuto_array *v86; // x8
  __int64 v87; // x9
  EventTutorialEntity_TextTuto_o *v88; // x8
  CommonUI_o *Instance; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  System_Action_o *v94; // x22
  struct EventTutorialEntity_RectData_array *rects; // x8
  float v96; // s4
  float v97; // s5
  float v98; // s6
  float v99; // s7
  struct EventTutorialEntity_TextTuto_array *v100; // x8
  UnityEngine_Rect_array *v101; // x22
  int v102; // w23
  bool v103; // w9
  __int64 v104; // x10
  EventTutorialEntity_TextTuto_o *v105; // x8
  struct EventTutorialEntity_RectData_array *v106; // x8
  il2cpp_array_size_t v107; // w24
  int *v108; // x8
  int32_t v109; // w23
  struct EventTutorialEntity_TextTuto_array *v110; // x8
  __int64 v111; // x9
  EventTutorialEntity_TextTuto_o *v112; // x8
  __int64 v113; // x3
  __int64 v114; // x4
  struct EventTutorialEntity_TextTuto_array *v115; // x8
  __int64 v116; // x9
  EventTutorialEntity_TextTuto_o *v117; // x8
  System_String_o *v118; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v120; // x20
  System_Action_o *v121; // x26
  MethodInfo v122; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector2_o v123; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v124; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Rect_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9BFD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&ScrollMessageDialog_ClickDelegate_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Rect___TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__0__, v11);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__1__, v12);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__2__, v13);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__3__, v14);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__4__, v15);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__5__, v16);
    sub_B16FFC(&EventTutorialEntity___c__DisplayClass24_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_20123, v18);
    sub_B16FFC(&StringLiteral_21740, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    byte_40F9BFD = 1;
  }
  v21 = sub_B170CC(EventTutorialEntity___c__DisplayClass24_0_TypeInfo, *(_QWORD *)&idx, callback, method, v4);
  EventTutorialEntity___c__DisplayClass24_0___ctor((EventTutorialEntity___c__DisplayClass24_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_78;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v21 + 32) = callback;
  *(_DWORD *)(v21 + 24) = idx;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_78;
  v38 = *(int *)(v21 + 24);
  max_length = textJson->max_length;
  if ( (int)v38 >= max_length )
    goto LABEL_40;
  if ( (unsigned int)v38 >= max_length )
    goto LABEL_79;
  v40 = textJson->m_Items[v38];
  if ( !v40 )
    goto LABEL_78;
  textPos = v40->fields.textPos;
  v42 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  if ( textPos )
  {
    v45 = *(_QWORD *)&textPos->max_length;
    v43 = 0.0;
    v44 = 0.0;
    if ( v45 )
    {
      if ( (unsigned int)v45 < 2 )
        goto LABEL_79;
      v43 = (float)textPos->m_Items[1];
      v44 = (float)textPos->m_Items[2];
    }
  }
  ptPos = v40->fields.ptPos;
  if ( ptPos )
  {
    v47 = *(_QWORD *)&ptPos->max_length;
    v48 = 0.0;
    if ( v47 )
    {
      if ( (unsigned int)v47 < 2 )
        goto LABEL_79;
      v42 = (float)ptPos->m_Items[1];
      v48 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v48 = 0.0;
  }
  scrDlgTitle = v40->fields.scrDlgTitle;
  v50 = v40->fields.spacingY;
  IsNullOrEmpty = (WebViewManager_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v51 = this->fields.textJson;
    if ( !v51 )
      goto LABEL_78;
    v52 = *(int *)(v21 + 24);
    if ( (unsigned int)v52 >= v51->max_length )
      goto LABEL_79;
    v53 = v51->m_Items[v52];
    if ( !v53 )
      goto LABEL_78;
    if ( v53->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v56 = this->fields.textJson;
      if ( !v56 )
        goto LABEL_78;
      v57 = *(int *)(v21 + 24);
      if ( (unsigned int)v57 < v56->max_length )
      {
        v58 = v56->m_Items[v57];
        if ( v58 )
        {
          text = v58->fields.text;
          v60 = (CommonUI_o *)IsNullOrEmpty;
          v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v54, v55);
          System_Action___ctor(
            v61,
            (Il2CppObject *)v21,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__1__,
            0LL);
          if ( v60 )
          {
            CommonUI__OpenFortificationNotifyDialog(v60, text, v61, 0LL);
            return;
          }
        }
LABEL_78:
        sub_B170D4();
      }
      goto LABEL_79;
    }
    if ( v53->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v53->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v53->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_79;
          v74 = releaseClassBoardBaseIds->m_Items[1];
          v75 = (CommonUI_o *)IsNullOrEmpty;
          v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v72, v73);
          System_Action___ctor(
            v76,
            (Il2CppObject *)v21,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__2__,
            0LL);
          if ( !v75 )
            goto LABEL_78;
          CommonUI__OpenClassBoardAddClassDialog(v75, v74, addClassIds, v76, 0LL);
        }
        else
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v94 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v90, v91, v92, v93);
          System_Action___ctor(
            v94,
            (Il2CppObject *)v21,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__3__,
            0LL);
          if ( !Instance )
            goto LABEL_78;
          CommonUI__OpenClassBoardReleaseDialog(Instance, releaseClassBoardBaseIds, v94, 0LL);
        }
        return;
      }
LABEL_40:
      ActionExtensions__Call(*(System_Action_o **)(v21 + 32), 0LL);
      return;
    }
    spacingY = v50 & ~(v50 >> 31);
    if ( v53->fields.dlgFontSize < 1 )
    {
      rects = v53->fields.rects;
      if ( !rects )
        goto LABEL_78;
      IsNullOrEmpty = (WebViewManager_o *)sub_B17014(UnityEngine_Rect___TypeInfo, rects->max_length, v36);
      if ( !IsNullOrEmpty )
        goto LABEL_78;
      v100 = this->fields.textJson;
      if ( !v100 )
        goto LABEL_78;
      v101 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v102 = 1;
      v103 = SLODWORD(IsNullOrEmpty->fields.basePanel) > 0;
      while ( 1 )
      {
        v104 = *(int *)(v21 + 24);
        if ( (unsigned int)v104 >= v100->max_length )
          goto LABEL_79;
        v105 = v100->m_Items[v104];
        if ( !v105 )
          goto LABEL_78;
        if ( !v103 )
          break;
        v106 = v105->fields.rects;
        if ( !v106 )
          goto LABEL_78;
        v107 = v102 - 1;
        if ( v102 - 1 >= v106->max_length )
          goto LABEL_79;
        v108 = (int *)v106->m_Items[v107];
        if ( !v108 )
          goto LABEL_78;
        v125.fields.m_XMin = (float)v108[4];
        v125.fields.m_YMin = (float)v108[5];
        v125.fields.m_Width = (float)v108[6];
        v125.fields.m_Height = (float)v108[7];
        v122.methodPointer = 0LL;
        v122.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v125, v96, v97, v98, v99, &v122);
        if ( v107 >= v101->max_length )
          goto LABEL_79;
        *(_OWORD *)&v101->m_Items[v107].fields.m_YMin = *(_OWORD *)&v122.methodPointer;
        v100 = this->fields.textJson;
        v103 = v102++ < (signed int)v101->max_length;
        if ( !v100 )
          goto LABEL_78;
      }
      IsNullOrEmpty = (WebViewManager_o *)BasicHelper__EqualExceptNullOrEmpty(
                                            v105->fields.textAlign,
                                            (System_String_o *)StringLiteral_20123,
                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v109 = 1;
      }
      else
      {
        v110 = this->fields.textJson;
        if ( !v110 )
          goto LABEL_78;
        v111 = *(int *)(v21 + 24);
        if ( (unsigned int)v111 >= v110->max_length )
          goto LABEL_79;
        v112 = v110->m_Items[v111];
        if ( !v112 )
          goto LABEL_78;
        if ( BasicHelper__EqualExceptNullOrEmpty(v112->fields.textAlign, (System_String_o *)StringLiteral_21740, 0LL) )
          v109 = 3;
        else
          v109 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v115 = this->fields.textJson;
      if ( !v115 )
        goto LABEL_78;
      v116 = *(int *)(v21 + 24);
      if ( (unsigned int)v116 >= v115->max_length )
      {
LABEL_79:
        sub_B17100(IsNullOrEmpty, v35, v36);
        sub_B170A0();
      }
      v117 = v115->m_Items[v116];
      if ( !v117 )
        goto LABEL_78;
      v118 = v117->fields.text;
      dlgBgId = v117->fields.dlgBgId;
      v120 = (CommonUI_o *)IsNullOrEmpty;
      v121 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v113, v114);
      System_Action___ctor(
        v121,
        (Il2CppObject *)v21,
        Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__5__,
        0LL);
      if ( !v120 )
        goto LABEL_78;
      v124.fields.z = 0.0;
      v123.fields.x = v43;
      v123.fields.y = v44;
      v124.fields.x = v42;
      v124.fields.y = v48;
      CommonUI__OpenEventTutorialNotificationDialog(
        v120,
        v118,
        v101,
        v123,
        v124,
        dlgBgId,
        v109,
        v121,
        0LL,
        spacingY,
        0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v80 = this->fields.textJson;
      if ( !v80 )
        goto LABEL_78;
      v81 = *(int *)(v21 + 24);
      if ( (unsigned int)v81 >= v80->max_length )
        goto LABEL_79;
      v82 = v80->m_Items[v81];
      if ( !v82 )
        goto LABEL_78;
      v83 = v82->fields.text;
      v84 = (CommonUI_o *)IsNullOrEmpty;
      v85 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v78, v79);
      System_Action___ctor(
        v85,
        (Il2CppObject *)v21,
        Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__4__,
        0LL);
      v86 = this->fields.textJson;
      if ( !v86 )
        goto LABEL_78;
      v87 = *(int *)(v21 + 24);
      if ( (unsigned int)v87 >= v86->max_length )
        goto LABEL_79;
      v88 = v86->m_Items[v87];
      if ( !v88 || !v84 )
        goto LABEL_78;
      CommonUI__OpenNotificationDialog_18238444(
        v84,
        (System_String_o *)StringLiteral_1,
        v83,
        v85,
        v44,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v88->fields.dlgFontSize,
        0,
        spacingY,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v64 = this->fields.textJson;
    if ( !v64 )
      goto LABEL_78;
    v65 = *(int *)(v21 + 24);
    if ( (unsigned int)v65 >= v64->max_length )
      goto LABEL_79;
    v66 = v64->m_Items[v65];
    if ( !v66 )
      goto LABEL_78;
    v67 = v66->fields.text;
    v68 = (CommonUI_o *)IsNullOrEmpty;
    v69 = (ScrollMessageDialog_ClickDelegate_o *)sub_B170CC(
                                                   ScrollMessageDialog_ClickDelegate_TypeInfo,
                                                   v35,
                                                   v36,
                                                   v62,
                                                   v63);
    ScrollMessageDialog_ClickDelegate___ctor(
      v69,
      (Il2CppObject *)v21,
      Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v68 )
      goto LABEL_78;
    CommonUI__OpenScrollMessageDialog(v68, scrDlgTitle, v67, 10, v69, 0, 0, 0LL);
  }
}


System_Int32_array_array *__fastcall EventTutorialEntity__getTargets(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_String_array *targetIds; // x8
  System_Char_array *v14; // x0
  System_Char_array *v15; // x1
  System_String_array **v16; // x2
  struct System_String_array *v17; // x8
  System_Int32_array_array *v18; // x20
  __int64 v19; // x25
  BattleServantConfConponent_o *v20; // x21
  int max_length; // w9
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  __int64 v25; // x2
  System_String_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  EventTutorialEntity___c_c *v31; // x8
  System_String_array *v32; // x22
  struct EventTutorialEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x23
  Il2CppObject *v35; // x24
  struct EventTutorialEntity___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22

  if ( (byte_40F9BF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B16FFC(&char___TypeInfo, v4);
    sub_B16FFC(&Method_System_Converter_string__int___ctor__, v5);
    sub_B16FFC(&System_Converter_string__int__TypeInfo, v6);
    sub_B16FFC(&int_____TypeInfo, v7);
    sub_B16FFC(&Method_EventTutorialEntity___c__getTargets_b__16_0__, v8);
    sub_B16FFC(&EventTutorialEntity___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15571, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_15807, v12);
    byte_40F9BF7 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B17014(int_____TypeInfo, 1LL, v2);
  v14 = (System_Char_array *)sub_B17014(int_____TypeInfo, targetIds->max_length, v2);
  v17 = this->fields.targetIds;
  if ( !v17 )
LABEL_26:
    sub_B170D4();
  v18 = (System_Int32_array_array *)v14;
  v19 = 0LL;
  v20 = (BattleServantConfConponent_o *)&v14->m_Items[2];
  while ( 1 )
  {
    max_length = v17->max_length;
    if ( (int)v19 >= max_length )
      return v18;
    if ( (unsigned int)v19 >= max_length )
      goto LABEL_29;
    v22 = v17->m_Items[v19];
    if ( v22 )
    {
      v23 = System_String__Replace_43750968(
              v22,
              (System_String_o *)StringLiteral_15571,
              (System_String_o *)StringLiteral_1,
              0LL);
      if ( v23 )
      {
        v24 = System_String__Replace_43750968(
                v23,
                (System_String_o *)StringLiteral_15807,
                (System_String_o *)StringLiteral_1,
                0LL);
        v14 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v25);
        if ( v14 )
        {
          v15 = v14;
          if ( !v14->max_length )
            goto LABEL_29;
          v14->m_Items[2] = 44;
          if ( v24 )
          {
            v26 = System_String__Split(v24, v14, 0LL);
            v31 = EventTutorialEntity___c_TypeInfo;
            v32 = v26;
            if ( (BYTE3(EventTutorialEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
              v31 = EventTutorialEntity___c_TypeInfo;
            }
            static_fields = v31->static_fields;
            _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
            if ( !_9__16_0 )
            {
              if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v31);
                static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
              }
              v35 = (Il2CppObject *)static_fields->__9;
              _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                                 System_Converter_string__int__TypeInfo,
                                                                                 v27,
                                                                                 v28,
                                                                                 v29,
                                                                                 v30);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__16_0,
                v35,
                Method_EventTutorialEntity___c__getTargets_b__16_0__,
                (const MethodInfo_266B524 *)Method_System_Converter_string__int___ctor__);
              v36 = EventTutorialEntity___c_TypeInfo->static_fields;
              v36->__9__16_0 = (struct System_Converter_string__int__o *)_9__16_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v36->__9__16_0,
                (System_Int32_array **)_9__16_0,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42);
            }
            v14 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                         v32,
                                         (System_Converter_TInput__TOutput__o *)_9__16_0,
                                         (const MethodInfo_2043230 *)Method_System_Array_ConvertAll_string__int___);
            if ( v18 )
            {
              v48 = (System_Int32_array **)v14;
              if ( v14 )
              {
                v14 = (System_Char_array *)sub_B170BC(v14, v18->obj.klass->_1.element_class);
                if ( !v14 )
                {
                  sub_B170F4(0LL);
                  sub_B170A0();
                }
              }
              if ( (unsigned int)v19 >= v18->max_length )
              {
LABEL_29:
                sub_B17100(v14, v15, v16);
                sub_B170A0();
              }
              v20->klass = (BattleServantConfConponent_c *)v48;
              sub_B16F98(v20, v48, v16, v43, v44, v45, v46, v47);
              v17 = this->fields.targetIds;
              ++v19;
              v20 = (BattleServantConfConponent_o *)((char *)v20 + 8);
              if ( v17 )
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array_array *Targets; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v22; // w8
  WebViewManager_o *v23; // x0
  EventTutorialCondMaster_o *v24; // x0
  const MethodInfo *v25; // x5
  __int64 v26; // x8
  __int64 v27; // x9
  System_Int32_array *v28; // x11
  int max_length; // w12
  int32_t v30; // w11
  int32_t condType; // w8
  WebViewManager_o *Instance; // x0
  struct System_Int32_array *condIds; // x22
  __int64 v34; // x8
  QuestGroupMaster_o *v35; // x21
  unsigned __int64 v36; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  System_Int32_array *v40; // x11
  __int64 v41; // x8
  System_Int32_array *v42; // x9
  __int64 v43; // x8
  __int64 v44; // x9
  System_Int32_array *v45; // x11
  int v46; // w12
  int32_t v47; // w13
  int32_t v48; // w13
  int32_t v49; // w11
  __int64 v50; // x8
  __int64 v51; // x9
  System_Int32_array *v52; // x11
  int v53; // w12
  int32_t v54; // w13
  int32_t v55; // w11
  TerminalSceneComponent_c *v56; // x0
  UnityEngine_Object_o *mInstance; // x20
  ScrTerminalListTop_o *monitor; // x0
  __int64 v59; // x21
  System_Int32_array *v60; // x0

  if ( (byte_40F9BFA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_B16FFC(&CondType_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v17);
    byte_40F9BFA = 1;
  }
  Targets = EventTutorialEntity__getTargets(this, *(const MethodInfo **)&qId);
  MasterData_WarQuestSelectionMaster = 0LL;
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
      v38 = *(_QWORD *)&Targets->max_length;
      if ( !v38 )
        goto LABEL_4;
      if ( (int)v38 < 1 )
        goto LABEL_125;
      v39 = 0LL;
      while ( 2 )
      {
        v40 = Targets->m_Items[v39];
        if ( !v40 )
          goto LABEL_127;
        if ( (int)v40->max_length >= 1 && v40->m_Items[1] != qId )
        {
          ++v39;
          LOBYTE(MasterData_WarQuestSelectionMaster) = 0;
          if ( (int)v39 >= (int)v38 )
            return (char)MasterData_WarQuestSelectionMaster;
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
        v26 = *(_QWORD *)&Targets->max_length;
        if ( v26 )
        {
          if ( (int)v26 >= 1 )
          {
            v27 = 0LL;
            while ( 1 )
            {
              v28 = Targets->m_Items[v27];
              if ( !v28 )
                break;
              max_length = v28->max_length;
              if ( max_length < 1 )
                goto LABEL_4;
              if ( v28->m_Items[1] == qId )
              {
                if ( max_length < 2 )
                  goto LABEL_4;
                v30 = v28->m_Items[2];
                if ( v30 == ex1 || !v30 )
                  goto LABEL_4;
              }
              ++v27;
              LOBYTE(MasterData_WarQuestSelectionMaster) = 0;
              if ( (int)v27 >= (int)v26 )
                return (char)MasterData_WarQuestSelectionMaster;
            }
LABEL_127:
            sub_B170D4();
          }
          goto LABEL_125;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_125;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_127;
      v34 = *(_QWORD *)&condIds->max_length;
      if ( (int)v34 < 1 )
        goto LABEL_125;
      v35 = (QuestGroupMaster_o *)MasterData_WarQuestSelectionMaster;
      v36 = 0LL;
      while ( v36 < (unsigned int)v34 )
      {
        if ( !v35 )
          goto LABEL_127;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v35, condIds->m_Items[v36 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v34) = condIds->max_length;
        ++v36;
        MasterData_WarQuestSelectionMaster = 0LL;
        if ( (__int64)v36 >= (int)v34 )
          return (char)MasterData_WarQuestSelectionMaster;
      }
      goto LABEL_128;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v43 = *(_QWORD *)&Targets->max_length;
      if ( !v43 )
        goto LABEL_4;
      if ( (int)v43 < 1 )
        goto LABEL_125;
      v44 = 0LL;
      while ( 2 )
      {
        v45 = Targets->m_Items[v44];
        if ( !v45 )
          goto LABEL_127;
        v46 = v45->max_length;
        if ( v46 >= 1 )
        {
          if ( v45->m_Items[1] != qId
            || v46 >= 2
            && ((v47 = v45->m_Items[2], v47 != ex1) && v47
             || v46 >= 3
             && ((v48 = v45->m_Items[3], v48 != ex2) && v48 || v46 >= 4 && (v49 = v45->m_Items[4], v49 != ex3) && v49)) )
          {
            ++v44;
            LOBYTE(MasterData_WarQuestSelectionMaster) = 0;
            if ( (int)v44 >= (int)v43 )
              return (char)MasterData_WarQuestSelectionMaster;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v50 = *(_QWORD *)&Targets->max_length;
      if ( !v50 || (int)v50 < 1 )
        goto LABEL_4;
      v51 = 0LL;
      while ( 2 )
      {
        v52 = Targets->m_Items[v51];
        if ( !v52 )
          goto LABEL_127;
        v53 = v52->max_length;
        if ( v53 < 1 )
          goto LABEL_125;
        if ( v52->m_Items[1] != qId )
          goto LABEL_87;
        if ( v53 < 2 )
          goto LABEL_125;
        v54 = v52->m_Items[2];
        if ( v54 != ex1 )
        {
          if ( v54 )
            goto LABEL_87;
        }
        if ( v53 < 3 )
          goto LABEL_125;
        v55 = v52->m_Items[3];
        LOBYTE(MasterData_WarQuestSelectionMaster) = 0;
        if ( v55 != ex2 )
        {
          if ( v55 )
          {
LABEL_87:
            if ( (int)++v51 >= (int)v50 )
              goto LABEL_4;
            continue;
          }
        }
        return (char)MasterData_WarQuestSelectionMaster;
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
      v41 = *(_QWORD *)&Targets->max_length;
      if ( !v41 )
        goto LABEL_4;
      if ( (_DWORD)v41 != 1 )
      {
        if ( (int)v41 < 1 )
        {
LABEL_125:
          LOBYTE(MasterData_WarQuestSelectionMaster) = 0;
          return (char)MasterData_WarQuestSelectionMaster;
        }
        goto LABEL_118;
      }
      v42 = Targets->m_Items[0];
      if ( !v42 )
        goto LABEL_127;
      if ( v42->max_length != 1 || v42->m_Items[1] )
      {
LABEL_118:
        v59 = 0LL;
        while ( (unsigned int)v59 < (unsigned int)v41 )
        {
          v60 = Targets->m_Items[v59];
          if ( !v60 )
            goto LABEL_127;
          if ( (int)v60->max_length < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v60,
                 qId,
                 (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v41) = Targets->max_length;
          ++v59;
          MasterData_WarQuestSelectionMaster = 0LL;
          if ( (int)v59 >= (int)v41 )
            return (char)MasterData_WarQuestSelectionMaster;
        }
LABEL_128:
        sub_B17100(MasterData_WarQuestSelectionMaster, v18, v19);
        sub_B170A0();
      }
LABEL_4:
      v22 = this->fields.condType;
      LOBYTE(MasterData_WarQuestSelectionMaster) = 1;
      if ( v22 && v22 != 11 )
      {
        if ( v22 == 95 )
        {
          LOBYTE(MasterData_WarQuestSelectionMaster) = 1;
        }
        else
        {
          v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v23 )
            goto LABEL_127;
          v24 = (EventTutorialCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v23,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !v24 )
            goto LABEL_127;
          LOBYTE(MasterData_WarQuestSelectionMaster) = EventTutorialCondMaster__isEnableExtCondition(
                                                         v24,
                                                         this->fields.eventId,
                                                         this->fields.flagType,
                                                         this->fields.num,
                                                         this,
                                                         v25);
        }
      }
      return (char)MasterData_WarQuestSelectionMaster;
    case 0x43:
      if ( !Targets || !*(_QWORD *)&Targets->max_length )
        goto LABEL_4;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v18);
        byte_40F6042 = 1;
      }
      v56 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v56 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v56->static_fields->mInstance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        goto LABEL_125;
      if ( !mInstance )
        goto LABEL_127;
      monitor = (ScrTerminalListTop_o *)mInstance[10].monitor;
      if ( !monitor )
        goto LABEL_127;
      if ( !ScrTerminalListTop__ContainsMapQuest(monitor, Targets, 0LL) )
        goto LABEL_125;
      goto LABEL_4;
    default:
      return (char)MasterData_WarQuestSelectionMaster;
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

  if ( (byte_40F9BF9 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, *(_QWORD *)&qId);
    byte_40F9BF9 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_28025448(flagType, eventId, 0LL)
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7072 & 1) == 0 )
  {
    sub_B16FFC(&EventTutorialEntity___c_TypeInfo, v1);
    byte_40F7072 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventTutorialEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventTutorialEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0

  if ( (byte_40F7073 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40F7073 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *_9__2; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_40F7074 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__, v8);
    byte_40F7074 = 1;
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     _9__2,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  TutorialEventSetRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  MissionNotifyManager_o *v5; // x0

  if ( (byte_40F7075 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_40F7075 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v5, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
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
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0

  if ( (byte_40F7076 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40F7076 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0

  if ( (byte_40F7077 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40F7077 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___ctor(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}