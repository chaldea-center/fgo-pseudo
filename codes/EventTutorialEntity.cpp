void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42150EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_42150EE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_42150E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_42150E5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_42150ED & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16734/*"beforeActionSetup"*/, method);
    byte_42150ED = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16734/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_42150EC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16735/*"beforeActionVals"*/, method);
    byte_42150EC = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16735/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42150EB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16735/*"beforeActionVals"*/, method);
    byte_42150EB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16735/*"beforeActionVals"*/, 0LL);
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
  __int64 v11; // x20
  MissionNotifyManager_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v29; // x21
  int32_t flagType; // w19
  int32_t eventId; // w22
  CommonUI_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x3

  if ( (byte_42150E8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__, v8);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__, v9);
    sub_B0D8A4(&EventTutorialEntity___c__DisplayClass22_0_TypeInfo, v10);
    byte_42150E8 = 1;
  }
  v11 = sub_B0D974(EventTutorialEntity___c__DisplayClass22_0_TypeInfo, callback, method);
  EventTutorialEntity___c__DisplayClass22_0___ctor((EventTutorialEntity___c__DisplayClass22_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v12, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = this->fields.imageIds;
    eventId = this->fields.eventId;
    flagType = this->fields.flagType;
    v32 = (CommonUI_o *)Instance;
    v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__,
      0LL);
    if ( v32 )
    {
      CommonUI__OpenTutorialImageDialog_17043120(v32, v29, flagType, eventId, v35, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B0D97C(v12);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v37, v38);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v12 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v12, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
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
  __int64 v11; // x20
  MissionNotifyManager_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v23; // x19
  CommonUI_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3

  if ( (byte_42150E9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__, v8);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__, v9);
    sub_B0D8A4(&EventTutorialEntity___c__DisplayClass23_0_TypeInfo, v10);
    byte_42150E9 = 1;
  }
  v11 = sub_B0D974(EventTutorialEntity___c__DisplayClass23_0_TypeInfo, callback, method);
  EventTutorialEntity___c__DisplayClass23_0___ctor((EventTutorialEntity___c__DisplayClass23_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)callback, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v12, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = this->fields.imageIds;
    v24 = (CommonUI_o *)Instance;
    v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v24 )
    {
      CommonUI__OpenTutorialImageDialog_17043120(v24, v23, -1, 0, v27, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B0D97C(v12);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v29, v30);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v12 )
      goto LABEL_20;
    MissionNotifyManager__EndPause(v12, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity__TextTutorialChain(
        EventTutorialEntity_o *this,
        int32_t idx,
        System_Action_o *callback,
        const MethodInfo *method)
{
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
  __int64 v20; // x19
  WebViewManager_o *IsNullOrEmpty; // x0
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
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v35; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v37; // x8
  struct System_Int32_array *textPos; // x9
  float v39; // s9
  float v40; // s10
  float v41; // s8
  __int64 v42; // x10
  struct System_Int32_array *ptPos; // x9
  __int64 v44; // x10
  float v45; // s11
  System_String_o *scrDlgTitle; // x22
  int v47; // w23
  struct EventTutorialEntity_TextTuto_array *v48; // x8
  __int64 v49; // x9
  EventTutorialEntity_TextTuto_o *v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  struct EventTutorialEntity_TextTuto_array *v53; // x8
  __int64 v54; // x9
  EventTutorialEntity_TextTuto_o *v55; // x8
  System_String_o *text; // x21
  CommonUI_o *v57; // x20
  System_Action_o *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  struct EventTutorialEntity_TextTuto_array *v61; // x8
  __int64 v62; // x9
  EventTutorialEntity_TextTuto_o *v63; // x8
  System_String_o *v64; // x21
  CommonUI_o *v65; // x20
  ScrollMessageDialog_ClickDelegate_o *v66; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  int32_t v71; // w20
  CommonUI_o *v72; // x22
  System_Action_o *v73; // x23
  int spacingY; // w21
  __int64 v75; // x1
  __int64 v76; // x2
  struct EventTutorialEntity_TextTuto_array *v77; // x8
  __int64 v78; // x9
  EventTutorialEntity_TextTuto_o *v79; // x8
  System_String_o *v80; // x23
  CommonUI_o *v81; // x22
  System_Action_o *v82; // x24
  struct EventTutorialEntity_TextTuto_array *v83; // x8
  __int64 v84; // x9
  EventTutorialEntity_TextTuto_o *v85; // x8
  CommonUI_o *Instance; // x21
  __int64 v87; // x1
  __int64 v88; // x2
  System_Action_o *v89; // x22
  struct EventTutorialEntity_RectData_array *rects; // x8
  float v91; // s4
  float v92; // s5
  float v93; // s6
  float v94; // s7
  struct EventTutorialEntity_TextTuto_array *v95; // x8
  UnityEngine_Rect_array *v96; // x22
  int v97; // w23
  bool v98; // w9
  __int64 v99; // x10
  EventTutorialEntity_TextTuto_o *v100; // x8
  struct EventTutorialEntity_RectData_array *v101; // x8
  il2cpp_array_size_t v102; // w24
  int *v103; // x8
  int32_t v104; // w23
  struct EventTutorialEntity_TextTuto_array *v105; // x8
  __int64 v106; // x9
  EventTutorialEntity_TextTuto_o *v107; // x8
  __int64 v108; // x1
  __int64 v109; // x2
  struct EventTutorialEntity_TextTuto_array *v110; // x8
  __int64 v111; // x9
  EventTutorialEntity_TextTuto_o *v112; // x8
  System_String_o *v113; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v115; // x20
  System_Action_o *v116; // x26
  __int64 v117; // x0
  MethodInfo v118; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector2_o v119; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v120; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Rect_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42150EA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&ScrollMessageDialog_ClickDelegate_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Rect___TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__0__, v10);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__1__, v11);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__2__, v12);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__3__, v13);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__4__, v14);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__5__, v15);
    sub_B0D8A4(&EventTutorialEntity___c__DisplayClass24_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_20269/*"left"*/, v17);
    sub_B0D8A4(&StringLiteral_21903/*"right"*/, v18);
    sub_B0D8A4(&StringLiteral_1/*""*/, v19);
    byte_42150EA = 1;
  }
  v20 = sub_B0D974(EventTutorialEntity___c__DisplayClass24_0_TypeInfo, *(_QWORD *)&idx, callback);
  EventTutorialEntity___c__DisplayClass24_0___ctor((EventTutorialEntity___c__DisplayClass24_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_78;
  *(_QWORD *)(v20 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v20 + 32) = callback;
  *(_DWORD *)(v20 + 24) = idx;
  sub_B0D840((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_78;
  v35 = *(int *)(v20 + 24);
  max_length = textJson->max_length;
  if ( (int)v35 >= max_length )
    goto LABEL_40;
  if ( (unsigned int)v35 >= max_length )
    goto LABEL_79;
  v37 = textJson->m_Items[v35];
  if ( !v37 )
    goto LABEL_78;
  textPos = v37->fields.textPos;
  v39 = 0.0;
  v40 = 0.0;
  v41 = 0.0;
  if ( textPos )
  {
    v42 = *(_QWORD *)&textPos->max_length;
    v40 = 0.0;
    v41 = 0.0;
    if ( v42 )
    {
      if ( (unsigned int)v42 < 2 )
        goto LABEL_79;
      v40 = (float)textPos->m_Items[1];
      v41 = (float)textPos->m_Items[2];
    }
  }
  ptPos = v37->fields.ptPos;
  if ( ptPos )
  {
    v44 = *(_QWORD *)&ptPos->max_length;
    v45 = 0.0;
    if ( v44 )
    {
      if ( (unsigned int)v44 < 2 )
        goto LABEL_79;
      v39 = (float)ptPos->m_Items[1];
      v45 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v45 = 0.0;
  }
  scrDlgTitle = v37->fields.scrDlgTitle;
  v47 = v37->fields.spacingY;
  IsNullOrEmpty = (WebViewManager_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v48 = this->fields.textJson;
    if ( !v48 )
      goto LABEL_78;
    v49 = *(int *)(v20 + 24);
    if ( (unsigned int)v49 >= v48->max_length )
      goto LABEL_79;
    v50 = v48->m_Items[v49];
    if ( !v50 )
      goto LABEL_78;
    if ( v50->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v53 = this->fields.textJson;
      if ( !v53 )
        goto LABEL_78;
      v54 = *(int *)(v20 + 24);
      if ( (unsigned int)v54 < v53->max_length )
      {
        v55 = v53->m_Items[v54];
        if ( v55 )
        {
          text = v55->fields.text;
          v57 = (CommonUI_o *)IsNullOrEmpty;
          v58 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
          System_Action___ctor(
            v58,
            (Il2CppObject *)v20,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__1__,
            0LL);
          if ( v57 )
          {
            CommonUI__OpenFortificationNotifyDialog(v57, text, v58, 0LL);
            return;
          }
        }
LABEL_78:
        sub_B0D97C(IsNullOrEmpty);
      }
      goto LABEL_79;
    }
    if ( v50->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v50->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v50->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_79;
          v71 = releaseClassBoardBaseIds->m_Items[1];
          v72 = (CommonUI_o *)IsNullOrEmpty;
          v73 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v69, v70);
          System_Action___ctor(
            v73,
            (Il2CppObject *)v20,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__2__,
            0LL);
          if ( !v72 )
            goto LABEL_78;
          CommonUI__OpenClassBoardAddClassDialog(v72, v71, addClassIds, v73, 0LL);
        }
        else
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v89 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v87, v88);
          System_Action___ctor(
            v89,
            (Il2CppObject *)v20,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__3__,
            0LL);
          if ( !Instance )
            goto LABEL_78;
          CommonUI__OpenClassBoardReleaseDialog(Instance, releaseClassBoardBaseIds, v89, 0LL);
        }
        return;
      }
LABEL_40:
      ActionExtensions__Call(*(System_Action_o **)(v20 + 32), 0LL);
      return;
    }
    spacingY = v47 & ~(v47 >> 31);
    if ( v50->fields.dlgFontSize < 1 )
    {
      rects = v50->fields.rects;
      if ( !rects )
        goto LABEL_78;
      IsNullOrEmpty = (WebViewManager_o *)sub_B0D8BC(UnityEngine_Rect___TypeInfo, rects->max_length);
      if ( !IsNullOrEmpty )
        goto LABEL_78;
      v95 = this->fields.textJson;
      if ( !v95 )
        goto LABEL_78;
      v96 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v97 = 1;
      v98 = SLODWORD(IsNullOrEmpty->fields.basePanel) > 0;
      while ( 1 )
      {
        v99 = *(int *)(v20 + 24);
        if ( (unsigned int)v99 >= v95->max_length )
          goto LABEL_79;
        v100 = v95->m_Items[v99];
        if ( !v100 )
          goto LABEL_78;
        if ( !v98 )
          break;
        v101 = v100->fields.rects;
        if ( !v101 )
          goto LABEL_78;
        v102 = v97 - 1;
        if ( v97 - 1 >= v101->max_length )
          goto LABEL_79;
        v103 = (int *)v101->m_Items[v102];
        if ( !v103 )
          goto LABEL_78;
        v121.fields.m_XMin = (float)v103[4];
        v121.fields.m_YMin = (float)v103[5];
        v121.fields.m_Width = (float)v103[6];
        v121.fields.m_Height = (float)v103[7];
        v118.methodPointer = 0LL;
        v118.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v121, v91, v92, v93, v94, &v118);
        if ( v102 >= v96->max_length )
          goto LABEL_79;
        *(_OWORD *)&v96->m_Items[v102].fields.m_YMin = *(_OWORD *)&v118.methodPointer;
        v95 = this->fields.textJson;
        v98 = v97++ < (signed int)v96->max_length;
        if ( !v95 )
          goto LABEL_78;
      }
      IsNullOrEmpty = (WebViewManager_o *)BasicHelper__EqualExceptNullOrEmpty(
                                            v100->fields.textAlign,
                                            (System_String_o *)StringLiteral_20269/*"left"*/,
                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v104 = 1;
      }
      else
      {
        v105 = this->fields.textJson;
        if ( !v105 )
          goto LABEL_78;
        v106 = *(int *)(v20 + 24);
        if ( (unsigned int)v106 >= v105->max_length )
          goto LABEL_79;
        v107 = v105->m_Items[v106];
        if ( !v107 )
          goto LABEL_78;
        if ( BasicHelper__EqualExceptNullOrEmpty(v107->fields.textAlign, (System_String_o *)StringLiteral_21903/*"right"*/, 0LL) )
          v104 = 3;
        else
          v104 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v110 = this->fields.textJson;
      if ( !v110 )
        goto LABEL_78;
      v111 = *(int *)(v20 + 24);
      if ( (unsigned int)v111 >= v110->max_length )
      {
LABEL_79:
        v117 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v117, 0LL);
      }
      v112 = v110->m_Items[v111];
      if ( !v112 )
        goto LABEL_78;
      v113 = v112->fields.text;
      dlgBgId = v112->fields.dlgBgId;
      v115 = (CommonUI_o *)IsNullOrEmpty;
      v116 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v108, v109);
      System_Action___ctor(
        v116,
        (Il2CppObject *)v20,
        Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__5__,
        0LL);
      if ( !v115 )
        goto LABEL_78;
      v120.fields.z = 0.0;
      v119.fields.x = v40;
      v119.fields.y = v41;
      v120.fields.x = v39;
      v120.fields.y = v45;
      CommonUI__OpenEventTutorialNotificationDialog(
        v115,
        v113,
        v96,
        v119,
        v120,
        dlgBgId,
        v104,
        v116,
        0LL,
        spacingY,
        0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = this->fields.textJson;
      if ( !v77 )
        goto LABEL_78;
      v78 = *(int *)(v20 + 24);
      if ( (unsigned int)v78 >= v77->max_length )
        goto LABEL_79;
      v79 = v77->m_Items[v78];
      if ( !v79 )
        goto LABEL_78;
      v80 = v79->fields.text;
      v81 = (CommonUI_o *)IsNullOrEmpty;
      v82 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v75, v76);
      System_Action___ctor(
        v82,
        (Il2CppObject *)v20,
        Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__4__,
        0LL);
      v83 = this->fields.textJson;
      if ( !v83 )
        goto LABEL_78;
      v84 = *(int *)(v20 + 24);
      if ( (unsigned int)v84 >= v83->max_length )
        goto LABEL_79;
      v85 = v83->m_Items[v84];
      if ( !v85 || !v81 )
        goto LABEL_78;
      CommonUI__OpenNotificationDialog_17017780(
        v81,
        (System_String_o *)StringLiteral_1/*""*/,
        v80,
        v82,
        v41,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v85->fields.dlgFontSize,
        0,
        spacingY,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v61 = this->fields.textJson;
    if ( !v61 )
      goto LABEL_78;
    v62 = *(int *)(v20 + 24);
    if ( (unsigned int)v62 >= v61->max_length )
      goto LABEL_79;
    v63 = v61->m_Items[v62];
    if ( !v63 )
      goto LABEL_78;
    v64 = v63->fields.text;
    v65 = (CommonUI_o *)IsNullOrEmpty;
    v66 = (ScrollMessageDialog_ClickDelegate_o *)sub_B0D974(ScrollMessageDialog_ClickDelegate_TypeInfo, v59, v60);
    ScrollMessageDialog_ClickDelegate___ctor(
      v66,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v65 )
      goto LABEL_78;
    CommonUI__OpenScrollMessageDialog(v65, scrDlgTitle, v64, 10, v66, 0, 0, 0LL);
  }
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
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_array *targetIds; // x8
  System_String_o *v13; // x0
  struct System_String_array *v14; // x8
  System_Int32_array_array *v15; // x20
  __int64 v16; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v19; // x22
  System_String_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  EventTutorialEntity___c_c *v23; // x8
  System_String_array *v24; // x22
  struct EventTutorialEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x23
  Il2CppObject *v27; // x24
  struct EventTutorialEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x22
  __int64 v43; // x0
  __int64 v44; // x0

  if ( (byte_42150E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B0D8A4(&char___TypeInfo, v3);
    sub_B0D8A4(&Method_System_Converter_string__int___ctor__, v4);
    sub_B0D8A4(&System_Converter_string__int__TypeInfo, v5);
    sub_B0D8A4(&int_____TypeInfo, v6);
    sub_B0D8A4(&Method_EventTutorialEntity___c__getTargets_b__16_0__, v7);
    sub_B0D8A4(&EventTutorialEntity___c_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v11);
    byte_42150E4 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B0D8BC(int_____TypeInfo, 1LL);
  v13 = (System_String_o *)sub_B0D8BC(int_____TypeInfo, targetIds->max_length);
  v14 = this->fields.targetIds;
  if ( !v14 )
LABEL_26:
    sub_B0D97C(v13);
  v15 = (System_Int32_array_array *)v13;
  v16 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v13[1].monitor;
  while ( 1 )
  {
    max_length = v14->max_length;
    if ( (int)v16 >= max_length )
      return v15;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_29;
    v13 = v14->m_Items[v16];
    if ( v13 )
    {
      v13 = System_String__Replace_43857140(
              v13,
              (System_String_o *)StringLiteral_15681/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v13 )
      {
        v19 = System_String__Replace_43857140(
                v13,
                (System_String_o *)StringLiteral_15917/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v13 = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( v13 )
        {
          if ( !LODWORD(v13[1].klass) )
            goto LABEL_29;
          LOWORD(v13[1].monitor) = 44;
          if ( v19 )
          {
            v20 = System_String__Split(v19, (System_Char_array *)v13, 0LL);
            v23 = EventTutorialEntity___c_TypeInfo;
            v24 = v20;
            if ( (BYTE3(EventTutorialEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
              v23 = EventTutorialEntity___c_TypeInfo;
            }
            static_fields = v23->static_fields;
            _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
            if ( !_9__16_0 )
            {
              if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v23);
                static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
              }
              v27 = (Il2CppObject *)static_fields->__9;
              _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                                 System_Converter_string__int__TypeInfo,
                                                                                 v21,
                                                                                 v22);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__16_0,
                v27,
                Method_EventTutorialEntity___c__getTargets_b__16_0__,
                (const MethodInfo_2665D70 *)Method_System_Converter_string__int___ctor__);
              v28 = EventTutorialEntity___c_TypeInfo->static_fields;
              v28->__9__16_0 = (struct System_Converter_string__int__o *)_9__16_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v28->__9__16_0,
                (System_Int32_array **)_9__16_0,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            v13 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v24,
                                       (System_Converter_TInput__TOutput__o *)_9__16_0,
                                       (const MethodInfo_1F677F0 *)Method_System_Array_ConvertAll_string__int___);
            if ( v15 )
            {
              v41 = (System_Int32_array **)v13;
              if ( v13 )
              {
                v13 = (System_String_o *)sub_B0D964(v13, v15->obj.klass->_1.element_class);
                if ( !v13 )
                {
                  v44 = sub_B0D99C(0LL);
                  sub_B0D948(v44, 0LL);
                }
              }
              if ( (unsigned int)v16 >= v15->max_length )
              {
LABEL_29:
                v43 = sub_B0D9A8(v13);
                sub_B0D948(v43, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v41;
              sub_B0D840(p_monitor, v41, v35, v36, v37, v38, v39, v40);
              v14 = this->fields.targetIds;
              ++v16;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v14 )
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
  System_Int32_array_array *Targets; // x22
  DataManager_o *Instance; // x0
  int32_t v21; // w8
  const MethodInfo *v22; // x5
  __int64 v23; // x8
  __int64 v24; // x9
  System_Int32_array *v25; // x11
  int max_length; // w12
  int32_t v27; // w11
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v30; // x8
  QuestGroupMaster_o *v31; // x21
  unsigned __int64 v32; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  System_Int32_array *v36; // x11
  __int64 v37; // x8
  System_Int32_array *v38; // x9
  __int64 v39; // x8
  __int64 v40; // x9
  System_Int32_array *v41; // x11
  int v42; // w12
  int32_t v43; // w13
  int32_t v44; // w13
  int32_t v45; // w11
  __int64 v46; // x8
  __int64 v47; // x9
  System_Int32_array *v48; // x11
  int v49; // w12
  int32_t v50; // w13
  int32_t v51; // w11
  TerminalSceneComponent_c *v52; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v54; // x21
  __int64 v55; // x0

  if ( (byte_42150E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_B0D8A4(&CondType_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v17);
    byte_42150E7 = 1;
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
      v34 = *(_QWORD *)&Targets->max_length;
      if ( !v34 )
        goto LABEL_4;
      if ( (int)v34 < 1 )
        goto LABEL_125;
      v35 = 0LL;
      while ( 2 )
      {
        v36 = Targets->m_Items[v35];
        if ( !v36 )
          goto LABEL_127;
        if ( (int)v36->max_length >= 1 && v36->m_Items[1] != qId )
        {
          ++v35;
          Instance = 0LL;
          if ( (int)v35 >= (int)v34 )
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
        v23 = *(_QWORD *)&Targets->max_length;
        if ( v23 )
        {
          if ( (int)v23 >= 1 )
          {
            v24 = 0LL;
            while ( 1 )
            {
              v25 = Targets->m_Items[v24];
              if ( !v25 )
                break;
              max_length = v25->max_length;
              if ( max_length < 1 )
                goto LABEL_4;
              if ( v25->m_Items[1] == qId )
              {
                if ( max_length < 2 )
                  goto LABEL_4;
                v27 = v25->m_Items[2];
                if ( v27 == ex1 || !v27 )
                  goto LABEL_4;
              }
              ++v24;
              Instance = 0LL;
              if ( (int)v24 >= (int)v23 )
                return (char)Instance;
            }
LABEL_127:
            sub_B0D97C(Instance);
          }
          goto LABEL_125;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_125;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_127;
      v30 = *(_QWORD *)&condIds->max_length;
      if ( (int)v30 < 1 )
        goto LABEL_125;
      v31 = (QuestGroupMaster_o *)Instance;
      v32 = 0LL;
      while ( v32 < (unsigned int)v30 )
      {
        if ( !v31 )
          goto LABEL_127;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v31, condIds->m_Items[v32 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v30) = condIds->max_length;
        ++v32;
        Instance = 0LL;
        if ( (__int64)v32 >= (int)v30 )
          return (char)Instance;
      }
      goto LABEL_128;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v39 = *(_QWORD *)&Targets->max_length;
      if ( !v39 )
        goto LABEL_4;
      if ( (int)v39 < 1 )
        goto LABEL_125;
      v40 = 0LL;
      while ( 2 )
      {
        v41 = Targets->m_Items[v40];
        if ( !v41 )
          goto LABEL_127;
        v42 = v41->max_length;
        if ( v42 >= 1 )
        {
          if ( v41->m_Items[1] != qId
            || v42 >= 2
            && ((v43 = v41->m_Items[2], v43 != ex1) && v43
             || v42 >= 3
             && ((v44 = v41->m_Items[3], v44 != ex2) && v44 || v42 >= 4 && (v45 = v41->m_Items[4], v45 != ex3) && v45)) )
          {
            ++v40;
            Instance = 0LL;
            if ( (int)v40 >= (int)v39 )
              return (char)Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v46 = *(_QWORD *)&Targets->max_length;
      if ( !v46 || (int)v46 < 1 )
        goto LABEL_4;
      v47 = 0LL;
      while ( 2 )
      {
        v48 = Targets->m_Items[v47];
        if ( !v48 )
          goto LABEL_127;
        v49 = v48->max_length;
        if ( v49 < 1 )
          goto LABEL_125;
        if ( v48->m_Items[1] != qId )
          goto LABEL_87;
        if ( v49 < 2 )
          goto LABEL_125;
        v50 = v48->m_Items[2];
        if ( v50 != ex1 )
        {
          if ( v50 )
            goto LABEL_87;
        }
        if ( v49 < 3 )
          goto LABEL_125;
        v51 = v48->m_Items[3];
        Instance = 0LL;
        if ( v51 != ex2 )
        {
          if ( v51 )
          {
LABEL_87:
            if ( (int)++v47 >= (int)v46 )
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
      v37 = *(_QWORD *)&Targets->max_length;
      if ( !v37 )
        goto LABEL_4;
      if ( (_DWORD)v37 != 1 )
      {
        if ( (int)v37 < 1 )
        {
LABEL_125:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_118;
      }
      v38 = Targets->m_Items[0];
      if ( !v38 )
        goto LABEL_127;
      if ( v38->max_length != 1 || v38->m_Items[1] )
      {
LABEL_118:
        v54 = 0LL;
        while ( (unsigned int)v54 < (unsigned int)v37 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v54];
          if ( !Instance )
            goto LABEL_127;
          if ( SLODWORD(Instance->fields.datalist) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v37) = Targets->max_length;
          ++v54;
          Instance = 0LL;
          if ( (int)v54 >= (int)v37 )
            return (char)Instance;
        }
LABEL_128:
        v55 = sub_B0D9A8(Instance);
        sub_B0D948(v55, 0LL);
      }
LABEL_4:
      v21 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v21 && v21 != 11 )
      {
        if ( v21 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_127;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_127;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v22);
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
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v18);
        byte_421083D = 1;
      }
      v52 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v52 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v52->static_fields->mInstance;
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

  if ( (byte_42150E6 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, *(_QWORD *)&qId);
    byte_42150E6 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_28090592(flagType, eventId, 0LL)
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
  Il2CppObject *v3; // x19
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4210F21 & 1) == 0 )
  {
    sub_B0D8A4(&EventTutorialEntity___c_TypeInfo, v1);
    byte_4210F21 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventTutorialEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4210F22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4210F22 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *_9__2; // x20
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4210F23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__, v6);
    byte_4210F23 = 1;
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     _9__2,
                                                                     (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
    sub_B0D97C(Request_WarBoardWallAttackRequest);
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

  if ( (byte_4210F24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_4210F24 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B0D97C(0LL);
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

  if ( (byte_4210F25 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4210F25 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0

  if ( (byte_4210F26 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4210F26 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}