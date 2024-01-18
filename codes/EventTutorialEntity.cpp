void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418827C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418827C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4188273 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_4188273 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_418827B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16685/*"beforeActionSetup"*/, method);
    byte_418827B = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16685/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_418827A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16686/*"beforeActionVals"*/, method);
    byte_418827A = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16686/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188279 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16686/*"beforeActionVals"*/, method);
    byte_4188279 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16686/*"beforeActionVals"*/, 0LL);
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
  __int64 v13; // x1
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
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v28; // x21
  int32_t flagType; // w19
  int32_t eventId; // w22
  CommonUI_o *v31; // x23
  System_Action_o *v32; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x3

  if ( (byte_4188276 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__, v8);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__, v9);
    sub_B2C35C(&EventTutorialEntity___c__DisplayClass22_0_TypeInfo, v10);
    byte_4188276 = 1;
  }
  v11 = sub_B2C42C(EventTutorialEntity___c__DisplayClass22_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass22_0___ctor((EventTutorialEntity___c__DisplayClass22_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v12, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = this->fields.imageIds;
    eventId = this->fields.eventId;
    flagType = this->fields.flagType;
    v31 = (CommonUI_o *)Instance;
    v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__0__,
      0LL);
    if ( v31 )
    {
      CommonUI__OpenTutorialImageDialog_17997428(v31, v28, flagType, eventId, v32, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(v12, v13);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__1__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v34, v35);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v22; // x19
  CommonUI_o *v23; // x21
  System_Action_o *v24; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_4188277 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v7);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__, v8);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__, v9);
    sub_B2C35C(&EventTutorialEntity___c__DisplayClass23_0_TypeInfo, v10);
    byte_4188277 = 1;
  }
  v11 = sub_B2C42C(EventTutorialEntity___c__DisplayClass23_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass23_0___ctor((EventTutorialEntity___c__DisplayClass23_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12 )
    goto LABEL_20;
  MissionNotifyManager__StartPause(v12, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = this->fields.imageIds;
    v23 = (CommonUI_o *)Instance;
    v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v23 )
    {
      CommonUI__OpenTutorialImageDialog_17997428(v23, v22, -1, 0, v24, 0LL, 0LL, 0LL);
      return;
    }
LABEL_20:
    sub_B2C434(v12, v13);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v11,
      Method_EventTutorialEntity___c__DisplayClass23_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v26, v27);
  }
  else
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v12 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v36; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v38; // x8
  struct System_Int32_array *textPos; // x9
  float v40; // s9
  float v41; // s10
  float v42; // s8
  __int64 v43; // x10
  struct System_Int32_array *ptPos; // x9
  __int64 v45; // x10
  float v46; // s11
  System_String_o *scrDlgTitle; // x22
  int v48; // w23
  struct EventTutorialEntity_TextTuto_array *v49; // x8
  __int64 v50; // x9
  EventTutorialEntity_TextTuto_o *v51; // x8
  struct EventTutorialEntity_TextTuto_array *v52; // x8
  __int64 v53; // x9
  EventTutorialEntity_TextTuto_o *v54; // x8
  System_String_o *text; // x21
  CommonUI_o *v56; // x20
  System_Action_o *v57; // x22
  struct EventTutorialEntity_TextTuto_array *v58; // x8
  __int64 v59; // x9
  EventTutorialEntity_TextTuto_o *v60; // x8
  System_String_o *v61; // x21
  CommonUI_o *v62; // x20
  ScrollMessageDialog_ClickDelegate_o *v63; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v66; // w20
  CommonUI_o *v67; // x22
  System_Action_o *v68; // x23
  int spacingY; // w21
  struct EventTutorialEntity_TextTuto_array *v70; // x8
  __int64 v71; // x9
  EventTutorialEntity_TextTuto_o *v72; // x8
  System_String_o *v73; // x23
  CommonUI_o *v74; // x22
  System_Action_o *v75; // x24
  struct EventTutorialEntity_TextTuto_array *v76; // x8
  __int64 v77; // x9
  EventTutorialEntity_TextTuto_o *v78; // x8
  CommonUI_o *Instance; // x21
  System_Action_o *v80; // x22
  struct EventTutorialEntity_RectData_array *rects; // x8
  float v82; // s4
  float v83; // s5
  float v84; // s6
  float v85; // s7
  struct EventTutorialEntity_TextTuto_array *v86; // x8
  UnityEngine_Rect_array *v87; // x22
  int v88; // w23
  bool v89; // w9
  __int64 v90; // x10
  EventTutorialEntity_TextTuto_o *v91; // x8
  struct EventTutorialEntity_RectData_array *v92; // x8
  il2cpp_array_size_t v93; // w24
  int *v94; // x8
  int32_t v95; // w23
  struct EventTutorialEntity_TextTuto_array *v96; // x8
  __int64 v97; // x9
  EventTutorialEntity_TextTuto_o *v98; // x8
  struct EventTutorialEntity_TextTuto_array *v99; // x8
  __int64 v100; // x9
  EventTutorialEntity_TextTuto_o *v101; // x8
  System_String_o *v102; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v104; // x20
  System_Action_o *v105; // x26
  __int64 v106; // x0
  MethodInfo v107; // [xsp+30h] [xbp-70h] BYREF
  UnityEngine_Vector2_o v108; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v109; // 0:s2.4,4:s3.4,8:s4.4
  UnityEngine_Rect_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188278 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&ScrollMessageDialog_ClickDelegate_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Rect___TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__0__, v10);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__1__, v11);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__2__, v12);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__3__, v13);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__4__, v14);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__5__, v15);
    sub_B2C35C(&EventTutorialEntity___c__DisplayClass24_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_20206/*"left"*/, v17);
    sub_B2C35C(&StringLiteral_21832/*"right"*/, v18);
    sub_B2C35C(&StringLiteral_1/*""*/, v19);
    byte_4188278 = 1;
  }
  v20 = sub_B2C42C(EventTutorialEntity___c__DisplayClass24_0_TypeInfo);
  EventTutorialEntity___c__DisplayClass24_0___ctor((EventTutorialEntity___c__DisplayClass24_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_78;
  *(_QWORD *)(v20 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 32) = callback;
  *(_DWORD *)(v20 + 24) = idx;
  sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), (System_Int32_array **)callback, v29, v30, v31, v32, v33, v34);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_78;
  v36 = *(int *)(v20 + 24);
  max_length = textJson->max_length;
  if ( (int)v36 >= max_length )
    goto LABEL_40;
  if ( (unsigned int)v36 >= max_length )
    goto LABEL_79;
  v38 = textJson->m_Items[v36];
  if ( !v38 )
    goto LABEL_78;
  textPos = v38->fields.textPos;
  v40 = 0.0;
  v41 = 0.0;
  v42 = 0.0;
  if ( textPos )
  {
    v43 = *(_QWORD *)&textPos->max_length;
    v41 = 0.0;
    v42 = 0.0;
    if ( v43 )
    {
      if ( (unsigned int)v43 < 2 )
        goto LABEL_79;
      v41 = (float)textPos->m_Items[1];
      v42 = (float)textPos->m_Items[2];
    }
  }
  ptPos = v38->fields.ptPos;
  if ( ptPos )
  {
    v45 = *(_QWORD *)&ptPos->max_length;
    v46 = 0.0;
    if ( v45 )
    {
      if ( (unsigned int)v45 < 2 )
        goto LABEL_79;
      v40 = (float)ptPos->m_Items[1];
      v46 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v46 = 0.0;
  }
  scrDlgTitle = v38->fields.scrDlgTitle;
  v48 = v38->fields.spacingY;
  IsNullOrEmpty = (WebViewManager_o *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v49 = this->fields.textJson;
    if ( !v49 )
      goto LABEL_78;
    v50 = *(int *)(v20 + 24);
    if ( (unsigned int)v50 >= v49->max_length )
      goto LABEL_79;
    v51 = v49->m_Items[v50];
    if ( !v51 )
      goto LABEL_78;
    if ( v51->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = this->fields.textJson;
      if ( !v52 )
        goto LABEL_78;
      v53 = *(int *)(v20 + 24);
      if ( (unsigned int)v53 < v52->max_length )
      {
        v54 = v52->m_Items[v53];
        if ( v54 )
        {
          text = v54->fields.text;
          v56 = (CommonUI_o *)IsNullOrEmpty;
          v57 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v57,
            (Il2CppObject *)v20,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__1__,
            0LL);
          if ( v56 )
          {
            CommonUI__OpenFortificationNotifyDialog(v56, text, v57, 0LL);
            return;
          }
        }
LABEL_78:
        sub_B2C434(IsNullOrEmpty, v22);
      }
      goto LABEL_79;
    }
    if ( v51->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v51->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v51->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_79;
          v66 = releaseClassBoardBaseIds->m_Items[1];
          v67 = (CommonUI_o *)IsNullOrEmpty;
          v68 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v68,
            (Il2CppObject *)v20,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__2__,
            0LL);
          if ( !v67 )
            goto LABEL_78;
          CommonUI__OpenClassBoardAddClassDialog(v67, v66, addClassIds, v68, 0LL);
        }
        else
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v80 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v80,
            (Il2CppObject *)v20,
            Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__3__,
            0LL);
          if ( !Instance )
            goto LABEL_78;
          CommonUI__OpenClassBoardReleaseDialog(Instance, releaseClassBoardBaseIds, v80, 0LL);
        }
        return;
      }
LABEL_40:
      ActionExtensions__Call(*(System_Action_o **)(v20 + 32), 0LL);
      return;
    }
    spacingY = v48 & ~(v48 >> 31);
    if ( v51->fields.dlgFontSize < 1 )
    {
      rects = v51->fields.rects;
      if ( !rects )
        goto LABEL_78;
      IsNullOrEmpty = (WebViewManager_o *)sub_B2C374(UnityEngine_Rect___TypeInfo, rects->max_length);
      if ( !IsNullOrEmpty )
        goto LABEL_78;
      v86 = this->fields.textJson;
      if ( !v86 )
        goto LABEL_78;
      v87 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v88 = 1;
      v89 = SLODWORD(IsNullOrEmpty->fields.basePanel) > 0;
      while ( 1 )
      {
        v90 = *(int *)(v20 + 24);
        if ( (unsigned int)v90 >= v86->max_length )
          goto LABEL_79;
        v91 = v86->m_Items[v90];
        if ( !v91 )
          goto LABEL_78;
        if ( !v89 )
          break;
        v92 = v91->fields.rects;
        if ( !v92 )
          goto LABEL_78;
        v93 = v88 - 1;
        if ( v88 - 1 >= v92->max_length )
          goto LABEL_79;
        v94 = (int *)v92->m_Items[v93];
        if ( !v94 )
          goto LABEL_78;
        v110.fields.m_XMin = (float)v94[4];
        v110.fields.m_YMin = (float)v94[5];
        v110.fields.m_Width = (float)v94[6];
        v110.fields.m_Height = (float)v94[7];
        v107.methodPointer = 0LL;
        v107.invoker_method = 0LL;
        UnityEngine_Rect___ctor(v110, v82, v83, v84, v85, &v107);
        if ( v93 >= v87->max_length )
          goto LABEL_79;
        *(_OWORD *)&v87->m_Items[v93].fields.m_YMin = *(_OWORD *)&v107.methodPointer;
        v86 = this->fields.textJson;
        v89 = v88++ < (signed int)v87->max_length;
        if ( !v86 )
          goto LABEL_78;
      }
      IsNullOrEmpty = (WebViewManager_o *)BasicHelper__EqualExceptNullOrEmpty(
                                            v91->fields.textAlign,
                                            (System_String_o *)StringLiteral_20206/*"left"*/,
                                            0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v95 = 1;
      }
      else
      {
        v96 = this->fields.textJson;
        if ( !v96 )
          goto LABEL_78;
        v97 = *(int *)(v20 + 24);
        if ( (unsigned int)v97 >= v96->max_length )
          goto LABEL_79;
        v98 = v96->m_Items[v97];
        if ( !v98 )
          goto LABEL_78;
        if ( BasicHelper__EqualExceptNullOrEmpty(v98->fields.textAlign, (System_String_o *)StringLiteral_21832/*"right"*/, 0LL) )
          v95 = 3;
        else
          v95 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v99 = this->fields.textJson;
      if ( !v99 )
        goto LABEL_78;
      v100 = *(int *)(v20 + 24);
      if ( (unsigned int)v100 >= v99->max_length )
      {
LABEL_79:
        v106 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v106, 0LL);
      }
      v101 = v99->m_Items[v100];
      if ( !v101 )
        goto LABEL_78;
      v102 = v101->fields.text;
      dlgBgId = v101->fields.dlgBgId;
      v104 = (CommonUI_o *)IsNullOrEmpty;
      v105 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v105,
        (Il2CppObject *)v20,
        Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__5__,
        0LL);
      if ( !v104 )
        goto LABEL_78;
      v109.fields.z = 0.0;
      v108.fields.x = v41;
      v108.fields.y = v42;
      v109.fields.x = v40;
      v109.fields.y = v46;
      CommonUI__OpenEventTutorialNotificationDialog(v104, v102, v87, v108, v109, dlgBgId, v95, v105, 0LL, spacingY, 0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v70 = this->fields.textJson;
      if ( !v70 )
        goto LABEL_78;
      v71 = *(int *)(v20 + 24);
      if ( (unsigned int)v71 >= v70->max_length )
        goto LABEL_79;
      v72 = v70->m_Items[v71];
      if ( !v72 )
        goto LABEL_78;
      v73 = v72->fields.text;
      v74 = (CommonUI_o *)IsNullOrEmpty;
      v75 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v75,
        (Il2CppObject *)v20,
        Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__4__,
        0LL);
      v76 = this->fields.textJson;
      if ( !v76 )
        goto LABEL_78;
      v77 = *(int *)(v20 + 24);
      if ( (unsigned int)v77 >= v76->max_length )
        goto LABEL_79;
      v78 = v76->m_Items[v77];
      if ( !v78 || !v74 )
        goto LABEL_78;
      CommonUI__OpenNotificationDialog_17972208(
        v74,
        (System_String_o *)StringLiteral_1/*""*/,
        v73,
        v75,
        v42,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v78->fields.dlgFontSize,
        0,
        spacingY,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v58 = this->fields.textJson;
    if ( !v58 )
      goto LABEL_78;
    v59 = *(int *)(v20 + 24);
    if ( (unsigned int)v59 >= v58->max_length )
      goto LABEL_79;
    v60 = v58->m_Items[v59];
    if ( !v60 )
      goto LABEL_78;
    v61 = v60->fields.text;
    v62 = (CommonUI_o *)IsNullOrEmpty;
    v63 = (ScrollMessageDialog_ClickDelegate_o *)sub_B2C42C(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v63,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass24_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v62 )
      goto LABEL_78;
    CommonUI__OpenScrollMessageDialog(v62, scrDlgTitle, v61, 10, v63, 0, 0, 0LL);
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
  System_String_o *v14; // x1
  struct System_String_array *v15; // x8
  System_Int32_array_array *v16; // x20
  __int64 v17; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v20; // x22
  System_String_array *v21; // x0
  EventTutorialEntity___c_c *v22; // x8
  System_String_array *v23; // x22
  struct EventTutorialEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x23
  Il2CppObject *v26; // x24
  struct EventTutorialEntity___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x22
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_4188272 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&Method_System_Converter_string__int___ctor__, v4);
    sub_B2C35C(&System_Converter_string__int__TypeInfo, v5);
    sub_B2C35C(&int_____TypeInfo, v6);
    sub_B2C35C(&Method_EventTutorialEntity___c__getTargets_b__16_0__, v7);
    sub_B2C35C(&EventTutorialEntity___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v11);
    byte_4188272 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B2C374(int_____TypeInfo, 1LL);
  v13 = (System_String_o *)sub_B2C374(int_____TypeInfo, targetIds->max_length);
  v15 = this->fields.targetIds;
  if ( !v15 )
LABEL_26:
    sub_B2C434(v13, v14);
  v16 = (System_Int32_array_array *)v13;
  v17 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v13[1].monitor;
  while ( 1 )
  {
    max_length = v15->max_length;
    if ( (int)v17 >= max_length )
      return v16;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_29;
    v13 = v15->m_Items[v17];
    if ( v13 )
    {
      v13 = System_String__Replace_44312768(
              v13,
              (System_String_o *)StringLiteral_15634/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v13 )
      {
        v20 = System_String__Replace_44312768(
                v13,
                (System_String_o *)StringLiteral_15870/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v13 = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( v13 )
        {
          v14 = v13;
          if ( !LODWORD(v13[1].klass) )
            goto LABEL_29;
          LOWORD(v13[1].monitor) = 44;
          if ( v20 )
          {
            v21 = System_String__Split(v20, (System_Char_array *)v13, 0LL);
            v22 = EventTutorialEntity___c_TypeInfo;
            v23 = v21;
            if ( (BYTE3(EventTutorialEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
              v22 = EventTutorialEntity___c_TypeInfo;
            }
            static_fields = v22->static_fields;
            _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
            if ( !_9__16_0 )
            {
              if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v22);
                static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
              }
              v26 = (Il2CppObject *)static_fields->__9;
              _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__16_0,
                v26,
                Method_EventTutorialEntity___c__getTargets_b__16_0__,
                (const MethodInfo_24E026C *)Method_System_Converter_string__int___ctor__);
              v27 = EventTutorialEntity___c_TypeInfo->static_fields;
              v27->__9__16_0 = (struct System_Converter_string__int__o *)_9__16_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v27->__9__16_0,
                (System_Int32_array **)_9__16_0,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33);
            }
            v13 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v23,
                                       (System_Converter_TInput__TOutput__o *)_9__16_0,
                                       (const MethodInfo_1FFB1FC *)Method_System_Array_ConvertAll_string__int___);
            if ( v16 )
            {
              v40 = (System_Int32_array **)v13;
              if ( v13 )
              {
                v13 = (System_String_o *)sub_B2C41C(v13, v16->obj.klass->_1.element_class);
                if ( !v13 )
                {
                  v43 = sub_B2C454(0LL);
                  sub_B2C400(v43, 0LL);
                }
              }
              if ( (unsigned int)v17 >= v16->max_length )
              {
LABEL_29:
                v42 = sub_B2C460(v13);
                sub_B2C400(v42, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v40;
              sub_B2C2F8(p_monitor, v40, v34, v35, v36, v37, v38, v39);
              v15 = this->fields.targetIds;
              ++v17;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v15 )
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

  if ( (byte_4188275 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_B2C35C(&CondType_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v17);
    byte_4188275 = 1;
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
            sub_B2C434(Instance, v18);
          }
          goto LABEL_125;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_125;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
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
                 (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
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
        v55 = sub_B2C460(Instance);
        sub_B2C400(v55, 0LL);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_127;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v18);
        byte_4183C65 = 1;
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

  if ( (byte_4188274 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_TypeInfo, *(_QWORD *)&qId);
    byte_4188274 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_28619864(flagType, eventId, 0LL)
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
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0

  if ( (byte_41841A5 & 1) == 0 )
  {
    sub_B2C35C(&EventTutorialEntity___c_TypeInfo, v1);
    byte_41841A5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTutorialEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v5; // x1

  if ( (byte_41841A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41841A6 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass22_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *_9__2; // x20
  TutorialEventSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v8; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_41841A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__, v5);
    byte_41841A7 = 1;
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass22_0__OpenTutorial_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (TutorialEventSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     _9__2,
                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_WarBoardWallAttackRequest )
    sub_B2C434(Request_WarBoardWallAttackRequest, v8);
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
  __int64 v6; // x1

  if ( (byte_41841A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    byte_41841A8 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v5 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v5 )
    sub_B2C434(0LL, v6);
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
  __int64 v5; // x1

  if ( (byte_41841A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41841A9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass23_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_41841AA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41841AA = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
    sub_B2C434(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass24_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  EventTutorialEntity__TextTutorialChain(_4__this, this->fields.idx + 1, this->fields.callback, 0LL);
}