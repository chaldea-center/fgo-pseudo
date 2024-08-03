void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC5DC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC5DC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_49FC5DB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_49FC5DB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_49FC5DA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17085/*"beforeActionSetup"*/, method);
    byte_49FC5DA = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17085/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC5D9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17086/*"beforeActionVals"*/, method);
    byte_49FC5D9 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17086/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC5D8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17086/*"beforeActionVals"*/, method);
    byte_49FC5D8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17086/*"beforeActionVals"*/, 0LL);
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
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v21; // x0
  System_Int32_array *v22; // x21
  int32_t eventId; // w19
  int32_t flagType; // w22
  EventTutorialEntity_Fields *p_fields; // t2
  CommonUI_o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_int__o *v34; // x22
  const MethodInfo *v35; // x4

  if ( (byte_49FC5D4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__0__, v8);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__1__, v9);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__2__, v10);
    sub_1B640C8(&EventTutorialEntity___c__DisplayClass7_0_TypeInfo, v11);
    byte_49FC5D4 = 1;
  }
  v12 = sub_1B64314(EventTutorialEntity___c__DisplayClass7_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)callback, v14, v15);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v16, v17);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = this->fields.imageIds;
    p_fields = &this->fields;
    eventId = this->fields.eventId;
    flagType = p_fields->flagType;
    v26 = (CommonUI_o *)v21;
    v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__0__,
      0LL);
    if ( v26 )
    {
      CommonUI__OpenTutorialImageDialog_30371536(v26, v22, flagType, eventId, v29, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(Instance);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__1__,
      0LL);
    v34 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v32, v33);
    System_Action_int____ctor(
      v34,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__2__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v31, v34, v35);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v12 + 16), 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v19; // x0
  System_Int32_array *v20; // x19
  CommonUI_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_int__o *v29; // x20
  const MethodInfo *v30; // x4

  if ( (byte_49FC5D5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_EventTutorialEntity_TransitionQuest__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorialWithoutFlag_b__0__, v9);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorialWithoutFlag_b__1__, v10);
    sub_1B640C8(&EventTutorialEntity___c__DisplayClass8_0_TypeInfo, v11);
    byte_49FC5D5 = 1;
  }
  v12 = sub_1B64314(EventTutorialEntity___c__DisplayClass8_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)callback, v14, v15);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = this->fields.imageIds;
    v21 = (CommonUI_o *)v19;
    v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v21 )
    {
      CommonUI__OpenTutorialImageDialog_30371536(v21, v20, -1, 0, v24, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(Instance);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v26 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v29 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v27, v28);
    System_Action_int____ctor(v29, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v26, v29, v30);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  __int64 v28; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v38; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v40; // x8
  struct System_Int32_array *textPos; // x9
  float v42; // s9
  float v43; // s8
  float v44; // s10
  __int64 v45; // x10
  struct System_Int32_array *ptPos; // x9
  __int64 v47; // x10
  float v48; // s11
  System_String_o *scrDlgTitle; // x22
  int spacingY; // w23
  struct EventTutorialEntity_TextTuto_array *v51; // x8
  __int64 v52; // x9
  EventTutorialEntity_TextTuto_o *v53; // x8
  __int64 v54; // x2
  struct EventTutorialEntity_TextTuto_array *v55; // x8
  __int64 v56; // x9
  EventTutorialEntity_TextTuto_o *v57; // x8
  System_String_o *text; // x21
  CommonUI_o *v59; // x20
  System_Action_o *v60; // x22
  __int64 v61; // x2
  struct EventTutorialEntity_TextTuto_array *v62; // x8
  __int64 v63; // x9
  EventTutorialEntity_TextTuto_o *v64; // x8
  System_String_o *v65; // x21
  CommonUI_o *v66; // x20
  ScrollMessageDialog_ClickDelegate_o *v67; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  __int64 v70; // x2
  int32_t v71; // w20
  CommonUI_o *v72; // x22
  System_Action_o *v73; // x23
  int v74; // w21
  struct EventTutorialEntity_TextTuto_array *v75; // x8
  __int64 v76; // x9
  EventTutorialEntity_TextTuto_o *v77; // x8
  CommonUI_o *v78; // x22
  System_String_o *v79; // x23
  System_String_o *Empty; // x24
  System_String_o *v81; // x25
  System_String_o *v82; // x26
  __int64 v83; // x1
  __int64 v84; // x2
  CommonConfirmDialog_ClickDelegate_o *v85; // x27
  struct EventTutorialEntity_TextTuto_array *v86; // x8
  __int64 v87; // x9
  EventTutorialEntity_TextTuto_o *v88; // x8
  Il2CppObject *Instance; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  System_Action_o *v92; // x22
  __int64 v93; // x2
  struct EventTutorialEntity_TextTuto_array *v94; // x8
  __int64 v95; // x9
  EventTutorialEntity_TextTuto_o *v96; // x8
  System_String_o *v97; // x23
  CommonUI_o *v98; // x22
  System_Action_o *v99; // x24
  struct EventTutorialEntity_TextTuto_array *v100; // x8
  __int64 v101; // x9
  EventTutorialEntity_TextTuto_o *v102; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v104; // x10
  int monitor; // w9
  UnityEngine_Rect_array *v106; // x22
  int v107; // w8
  bool v108; // w11
  __int64 v109; // x12
  EventTutorialEntity_TextTuto_o *v110; // x10
  struct EventTutorialEntity_RectData_array *v111; // x10
  int v112; // w12
  int32x4_t *v113; // x10
  int32_t v114; // w23
  struct EventTutorialEntity_TextTuto_array *v115; // x8
  __int64 v116; // x9
  EventTutorialEntity_TextTuto_o *v117; // x8
  __int64 v118; // x2
  struct EventTutorialEntity_TextTuto_array *v119; // x8
  __int64 v120; // x9
  EventTutorialEntity_TextTuto_o *v121; // x8
  System_String_o *v122; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v124; // x20
  System_Action_o *v125; // x26
  UnityEngine_Vector2_o v126; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v127; // 0:s2.4,4:s3.4,8:s4.4

  if ( (byte_49FC5D7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&ScrollMessageDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Rect___TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&string_TypeInfo, v14);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__0__, v15);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__1__, v16);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__2__, v17);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__3__, v18);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__4__, v19);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__6__, v20);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__7__, v21);
    sub_1B640C8(&EventTutorialEntity___c__DisplayClass10_0_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_10850/*"QUEST_RELEASE_DIALOG_CANCEL"*/, v23);
    sub_1B640C8(&StringLiteral_20985/*"left"*/, v24);
    sub_1B640C8(&StringLiteral_22846/*"right"*/, v25);
    sub_1B640C8(&StringLiteral_10851/*"QUEST_RELEASE_DIALOG_DECIDE"*/, v26);
    sub_1B640C8(&StringLiteral_1/*""*/, v27);
    byte_49FC5D7 = 1;
  }
  v28 = sub_1B64314(EventTutorialEntity___c__DisplayClass10_0_TypeInfo, *(_QWORD *)&idx, callback);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_89;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
  *(_DWORD *)(v28 + 24) = idx;
  *(_QWORD *)(v28 + 32) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)callback, v32, v33);
  *(_QWORD *)(v28 + 40) = transitionQuest;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 40), (int32_t)transitionQuest, v34, v35);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_89;
  v38 = *(int *)(v28 + 24);
  max_length = textJson->max_length;
  if ( (int)v38 >= max_length )
    goto LABEL_40;
  if ( (unsigned int)v38 >= max_length )
    goto LABEL_90;
  v40 = textJson->m_Items[v38];
  if ( !v40 )
    goto LABEL_89;
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
        goto LABEL_90;
      v44 = (float)textPos->m_Items[1];
      v43 = (float)textPos->m_Items[2];
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
        goto LABEL_90;
      v48 = (float)ptPos->m_Items[1];
      v42 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v48 = 0.0;
  }
  scrDlgTitle = v40->fields.scrDlgTitle;
  spacingY = v40->fields.spacingY;
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v51 = this->fields.textJson;
    if ( !v51 )
      goto LABEL_89;
    v52 = *(int *)(v28 + 24);
    if ( (unsigned int)v52 >= v51->max_length )
      goto LABEL_90;
    v53 = v51->m_Items[v52];
    if ( !v53 )
      goto LABEL_89;
    if ( v53->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = this->fields.textJson;
      if ( !v55 )
        goto LABEL_89;
      v56 = *(int *)(v28 + 24);
      if ( (unsigned int)v56 < v55->max_length )
      {
        v57 = v55->m_Items[v56];
        if ( v57 )
        {
          text = v57->fields.text;
          v59 = (CommonUI_o *)IsNullOrEmpty;
          v60 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v54);
          System_Action___ctor(
            v60,
            (Il2CppObject *)v28,
            Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__1__,
            0LL);
          if ( v59 )
          {
            CommonUI__OpenFortificationNotifyDialog(v59, text, v60, 0LL);
            return;
          }
        }
LABEL_89:
        sub_1B64324(IsNullOrEmpty);
      }
      goto LABEL_90;
    }
    if ( v53->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v53->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v53->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_90;
          v71 = releaseClassBoardBaseIds->m_Items[1];
          v72 = (CommonUI_o *)IsNullOrEmpty;
          v73 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v70);
          System_Action___ctor(
            v73,
            (Il2CppObject *)v28,
            Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__3__,
            0LL);
          if ( !v72 )
            goto LABEL_89;
          CommonUI__OpenClassBoardAddClassDialog(v72, v71, addClassIds, v73, 0LL);
        }
        else
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v92 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v90, v91);
          System_Action___ctor(
            v92,
            (Il2CppObject *)v28,
            Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__4__,
            0LL);
          if ( !Instance )
            goto LABEL_89;
          CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)Instance, releaseClassBoardBaseIds, v92, 0LL);
        }
        return;
      }
LABEL_40:
      ActionExtensions__Call(*(System_Action_o **)(v28 + 32), 0LL);
      return;
    }
    v74 = spacingY & ~(spacingY >> 31);
    if ( v53->fields.isQuestRelease )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = this->fields.textJson;
      if ( !v75 )
        goto LABEL_89;
      v76 = *(int *)(v28 + 24);
      if ( (unsigned int)v76 >= v75->max_length )
        goto LABEL_90;
      v77 = v75->m_Items[v76];
      if ( !v77 )
        goto LABEL_89;
      v78 = (CommonUI_o *)IsNullOrEmpty;
      v79 = v77->fields.text;
      Empty = string_TypeInfo->static_fields->Empty;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_10851/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_10850/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
      v85 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v83, v84);
      CommonConfirmDialog_ClickDelegate___ctor(
        v85,
        (Il2CppObject *)v28,
        Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__2__,
        0LL);
      v86 = this->fields.textJson;
      if ( !v86 )
        goto LABEL_89;
      v87 = *(int *)(v28 + 24);
      if ( (unsigned int)v87 >= v86->max_length )
        goto LABEL_90;
      v88 = v86->m_Items[v87];
      if ( !v88 || !v78 )
        goto LABEL_89;
      CommonUI__OpenConfirmDecideDlg(
        v78,
        Empty,
        v79,
        v81,
        v82,
        v85,
        v88->fields.dlgFontSize,
        0.0,
        15.0,
        v74,
        0,
        0,
        240,
        0,
        0,
        0,
        0LL);
    }
    else if ( v53->fields.dlgFontSize < 1 )
    {
      rects = v53->fields.rects;
      if ( !rects )
        goto LABEL_89;
      IsNullOrEmpty = (Il2CppObject *)sub_1B64170(UnityEngine_Rect___TypeInfo, rects->max_length);
      if ( !IsNullOrEmpty )
        goto LABEL_89;
      v104 = this->fields.textJson;
      if ( !v104 )
        goto LABEL_89;
      monitor = (int)IsNullOrEmpty[1].monitor;
      v106 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v107 = 1;
      v108 = monitor > 0;
      while ( 1 )
      {
        v109 = *(int *)(v28 + 24);
        if ( (unsigned int)v109 >= v104->max_length )
          goto LABEL_90;
        v110 = v104->m_Items[v109];
        if ( !v110 )
          goto LABEL_89;
        if ( !v108 )
          break;
        v111 = v110->fields.rects;
        if ( !v111 )
          goto LABEL_89;
        v112 = v107 - 1;
        if ( v107 - 1 >= v111->max_length )
          goto LABEL_90;
        v113 = (int32x4_t *)v111->m_Items[v112];
        if ( !v113 )
          goto LABEL_89;
        if ( v112 >= (unsigned int)monitor )
          goto LABEL_90;
        IsNullOrEmpty[v112 + 2] = (Il2CppObject)vcvtq_f32_s32(v113[1]);
        monitor = (int)IsNullOrEmpty[1].monitor;
        v104 = this->fields.textJson;
        v108 = v107++ < monitor;
        if ( !v104 )
          goto LABEL_89;
      }
      IsNullOrEmpty = (Il2CppObject *)BasicHelper__EqualExceptNullOrEmpty(
                                        v110->fields.textAlign,
                                        (System_String_o *)StringLiteral_20985/*"left"*/,
                                        0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v114 = 1;
      }
      else
      {
        v115 = this->fields.textJson;
        if ( !v115 )
          goto LABEL_89;
        v116 = *(int *)(v28 + 24);
        if ( (unsigned int)v116 >= v115->max_length )
          goto LABEL_90;
        v117 = v115->m_Items[v116];
        if ( !v117 )
          goto LABEL_89;
        if ( BasicHelper__EqualExceptNullOrEmpty(v117->fields.textAlign, (System_String_o *)StringLiteral_22846/*"right"*/, 0LL) )
          v114 = 3;
        else
          v114 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v119 = this->fields.textJson;
      if ( !v119 )
        goto LABEL_89;
      v120 = *(int *)(v28 + 24);
      if ( (unsigned int)v120 >= v119->max_length )
LABEL_90:
        sub_1B6432C(IsNullOrEmpty, v36);
      v121 = v119->m_Items[v120];
      if ( !v121 )
        goto LABEL_89;
      v122 = v121->fields.text;
      dlgBgId = v121->fields.dlgBgId;
      v124 = (CommonUI_o *)IsNullOrEmpty;
      v125 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v118);
      System_Action___ctor(
        v125,
        (Il2CppObject *)v28,
        Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__7__,
        0LL);
      if ( !v124 )
        goto LABEL_89;
      v127.fields.z = 0.0;
      v126.fields.x = v44;
      v126.fields.y = v43;
      v127.fields.x = v48;
      v127.fields.y = v42;
      CommonUI__OpenEventTutorialNotificationDialog(v124, v122, v106, v126, v127, dlgBgId, v114, v125, 0LL, v74, 0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v94 = this->fields.textJson;
      if ( !v94 )
        goto LABEL_89;
      v95 = *(int *)(v28 + 24);
      if ( (unsigned int)v95 >= v94->max_length )
        goto LABEL_90;
      v96 = v94->m_Items[v95];
      if ( !v96 )
        goto LABEL_89;
      v97 = v96->fields.text;
      v98 = (CommonUI_o *)IsNullOrEmpty;
      v99 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v93);
      System_Action___ctor(
        v99,
        (Il2CppObject *)v28,
        Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__6__,
        0LL);
      v100 = this->fields.textJson;
      if ( !v100 )
        goto LABEL_89;
      v101 = *(int *)(v28 + 24);
      if ( (unsigned int)v101 >= v100->max_length )
        goto LABEL_90;
      v102 = v100->m_Items[v101];
      if ( !v102 || !v98 )
        goto LABEL_89;
      CommonUI__OpenNotificationDialog_30346252(
        v98,
        (System_String_o *)StringLiteral_1/*""*/,
        v97,
        v99,
        v43,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v102->fields.dlgFontSize,
        0,
        v74,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v62 = this->fields.textJson;
    if ( !v62 )
      goto LABEL_89;
    v63 = *(int *)(v28 + 24);
    if ( (unsigned int)v63 >= v62->max_length )
      goto LABEL_90;
    v64 = v62->m_Items[v63];
    if ( !v64 )
      goto LABEL_89;
    v65 = v64->fields.text;
    v66 = (CommonUI_o *)IsNullOrEmpty;
    v67 = (ScrollMessageDialog_ClickDelegate_o *)sub_1B64314(ScrollMessageDialog_ClickDelegate_TypeInfo, v36, v61);
    ScrollMessageDialog_ClickDelegate___ctor(
      v67,
      (Il2CppObject *)v28,
      Method_EventTutorialEntity___c__DisplayClass10_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v66 )
      goto LABEL_89;
    CommonUI__OpenScrollMessageDialog(v66, scrDlgTitle, v65, 10, v67, 0, 0, 0LL);
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

  if ( (byte_49FC5D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v5);
    byte_49FC5D6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9678 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    byte_49F9678 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
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
  struct System_String_array *v13; // x8
  System_Int32_array_array *v14; // x20
  __int64 v15; // x25
  ServantStatusBattleListViewItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  EventTutorialEntity___c_c *v21; // x8
  System_Object_array *v22; // x22
  System_Converter_object__int__o *_9__3_0; // x23
  Il2CppObject *v24; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49FC5D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1B640C8(&System_Converter_string__int__TypeInfo, v3);
    sub_1B640C8(&int_____TypeInfo, v4);
    sub_1B640C8(&Method_EventTutorialEntity___c__getTargets_b__3_0__, v5);
    sub_1B640C8(&EventTutorialEntity___c_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v9);
    byte_49FC5D1 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1B64170(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1B64170(int_____TypeInfo, targetIds->max_length);
  v13 = this->fields.targetIds;
  if ( !v13 )
LABEL_20:
    sub_1B64324(v11);
  v14 = (System_Int32_array_array *)v11;
  v15 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v11[1].monitor;
  while ( 1 )
  {
    max_length = v13->max_length;
    if ( (int)v15 >= max_length )
      return v14;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_23;
    v11 = v13->m_Items[v15];
    if ( v11 )
    {
      v11 = System_String__Replace_61395016(
              v11,
              (System_String_o *)StringLiteral_15744/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_61395016(
                v11,
                (System_String_o *)StringLiteral_16000/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v11 )
        {
          v18 = System_String__Split(v11, 0x2Cu, 0, 0LL);
          v21 = EventTutorialEntity___c_TypeInfo;
          v22 = (System_Object_array *)v18;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v21 = EventTutorialEntity___c_TypeInfo;
          }
          _9__3_0 = (System_Converter_object__int__o *)v21->static_fields->__9__3_0;
          if ( !_9__3_0 )
          {
            if ( !v21->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v21);
              v21 = EventTutorialEntity___c_TypeInfo;
            }
            v24 = (Il2CppObject *)v21->static_fields->__9;
            _9__3_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_string__int__TypeInfo, v19, v20);
            System_Converter_object__int____ctor(_9__3_0, v24, Method_EventTutorialEntity___c__getTargets_b__3_0__, 0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__3_0 = (struct System_Converter_string__int__o *)_9__3_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v22,
                                     (System_Converter_TInput__TOutput__o *)_9__3_0,
                                     (const MethodInfo_2F2E8A0 *)Method_System_Array_ConvertAll_string__int___);
          if ( v14 )
          {
            if ( (unsigned int)v15 >= v14->max_length )
LABEL_23:
              sub_1B6432C(v11, v12);
            p_monitor->klass = (ServantStatusBattleListViewItem_c *)v11;
            sub_1B6406C(p_monitor, (int32_t)v11, v28, v29);
            v13 = this->fields.targetIds;
            ++v15;
            p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
            if ( v13 )
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
  System_Int32_array_array *Targets; // x21
  DataManager_o *Instance; // x0
  int32_t v21; // w8
  const MethodInfo *v22; // x5
  __int64 v23; // x8
  int v24; // w9
  System_Int32_array *v25; // x10
  int max_length; // w11
  int32_t v27; // w10
  __int64 v28; // x8
  int v29; // w9
  System_Int32_array *v30; // x10
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v33; // x8
  QuestGroupMaster_o *v34; // x21
  unsigned __int64 v35; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v37; // x8
  System_Int32_array *v38; // x9
  __int64 v39; // x8
  int v40; // w9
  System_Int32_array *v41; // x10
  int v42; // w11
  int32_t v43; // w12
  int32_t v44; // w12
  int32_t v45; // w10
  __int64 v46; // x8
  int v47; // w9
  System_Int32_array *v48; // x10
  int v49; // w11
  int32_t v50; // w12
  int32_t v51; // w10
  TerminalSceneComponent_c *v52; // x0
  struct TerminalSceneComponent_o *mInstance; // x20
  __int64 v54; // x22

  if ( (byte_49FC5D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_1B640C8(&CondType_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v17);
    byte_49FC5D3 = 1;
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
      v28 = *(_QWORD *)&Targets->max_length;
      if ( !v28 )
        goto LABEL_4;
      if ( (int)v28 < 1 )
        goto LABEL_119;
      v29 = 0;
      while ( 2 )
      {
        v30 = Targets->m_Items[v29];
        if ( !v30 )
          goto LABEL_121;
        if ( (int)v30->max_length >= 1 && v30->m_Items[1] != qId )
        {
          ++v29;
          Instance = 0LL;
          if ( (_DWORD)v28 == v29 )
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
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5C:
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
            v24 = 0;
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
              if ( (_DWORD)v23 == v24 )
                return (char)Instance;
            }
LABEL_121:
            sub_1B64324(Instance);
          }
          goto LABEL_119;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_119;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_121;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_121;
      v33 = *(_QWORD *)&condIds->max_length;
      if ( (int)v33 < 1 )
        goto LABEL_119;
      v34 = (QuestGroupMaster_o *)Instance;
      v35 = 0LL;
      while ( v35 < (unsigned int)v33 )
      {
        if ( !v34 )
          goto LABEL_121;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v34, condIds->m_Items[v35 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v33) = condIds->max_length;
        ++v35;
        Instance = 0LL;
        if ( (__int64)v35 >= (int)v33 )
          return (char)Instance;
      }
      goto LABEL_122;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v39 = *(_QWORD *)&Targets->max_length;
      if ( !v39 )
        goto LABEL_4;
      if ( (int)v39 < 1 )
        goto LABEL_119;
      v40 = 0;
      while ( 2 )
      {
        v41 = Targets->m_Items[v40];
        if ( !v41 )
          goto LABEL_121;
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
            if ( (_DWORD)v39 == v40 )
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
      v47 = 0;
      while ( 2 )
      {
        v48 = Targets->m_Items[v47];
        if ( !v48 )
          goto LABEL_121;
        v49 = v48->max_length;
        if ( v49 < 1 )
          goto LABEL_119;
        if ( v48->m_Items[1] != qId )
          goto LABEL_86;
        if ( v49 < 2 )
          goto LABEL_119;
        v50 = v48->m_Items[2];
        if ( v50 != ex1 )
        {
          if ( v50 )
            goto LABEL_86;
        }
        if ( v49 < 3 )
          goto LABEL_119;
        v51 = v48->m_Items[3];
        Instance = 0LL;
        if ( v51 != ex2 )
        {
          if ( v51 )
          {
LABEL_86:
            if ( (_DWORD)v46 == ++v47 )
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
        goto LABEL_119;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
        goto LABEL_119;
      goto LABEL_4;
    case 0x37:
      if ( this->fields.condType != 95 )
        goto LABEL_119;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsSvtEquipFriendShipStorageHaving(0LL) )
          goto LABEL_119;
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
LABEL_119:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_112;
      }
      v38 = Targets->m_Items[0];
      if ( !v38 )
        goto LABEL_121;
      if ( v38->max_length != 1 || v38->m_Items[1] )
      {
LABEL_112:
        v54 = 0LL;
        while ( (unsigned int)v54 < (unsigned int)v37 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v54];
          if ( !Instance )
            goto LABEL_121;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v37) = Targets->max_length;
          ++v54;
          Instance = 0LL;
          if ( (int)v54 >= (int)v37 )
            return (char)Instance;
        }
LABEL_122:
        sub_1B6432C(Instance, v18);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_121;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_121;
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
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_49F76BD )
      {
        sub_1B640C8(&TerminalSceneComponent_TypeInfo, v18);
        byte_49F76BD = 1;
      }
      v52 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v52 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v52->static_fields->mInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mInstance, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_119;
      if ( !mInstance )
        goto LABEL_121;
      Instance = (DataManager_o *)mInstance->fields.mTerminalList;
      if ( !Instance )
        goto LABEL_121;
      if ( !ScrTerminalListTop__ContainsMapQuest((ScrTerminalListTop_o *)Instance, Targets, 0LL) )
        goto LABEL_119;
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

  if ( (byte_49FC5D2 & 1) == 0 )
  {
    sub_1B640C8(&TutorialFlag_TypeInfo, *(_QWORD *)&qId);
    byte_49FC5D2 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_37409892(flagType, eventId, 0LL)
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC5DD & 1) == 0 )
  {
    sub_1B640C8(&EventTutorialEntity___c_TypeInfo, v1);
    byte_49FC5DD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTutorialEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTutorialEntity___c___getTargets_b__3_0(
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


void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v3);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49FC5DE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass10_1__TextTutorialChain_b__5__, v6);
    sub_1B640C8(&EventTutorialEntity___c__DisplayClass10_1_TypeInfo, v7);
    byte_49FC5DE = 1;
  }
  v8 = sub_1B64314(EventTutorialEntity___c__DisplayClass10_1_TypeInfo, isDecide, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_EventTutorialEntity___c__DisplayClass10_1__TextTutorialChain_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_1___ctor(
        EventTutorialEntity___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_1___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass10_1_o *v2; // x19
  __int64 v3; // x1
  struct EventTutorialEntity___c__DisplayClass10_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v8; // x8
  int32_t questId; // w20
  const MethodInfo *v10; // x4
  struct EventTutorialEntity___c__DisplayClass10_0_o *v11; // x8

  v2 = this;
  if ( (byte_49FC5DF & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int___, method);
    this = (EventTutorialEntity___c__DisplayClass10_1_o *)sub_1B640C8(
                                                            &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                            v3);
    byte_49FC5DF = 1;
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
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1B6432C(this, method);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_14;
  questId = v8->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass10_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_14;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0LL);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_14;
  if ( v2->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v11->fields.transitionQuest,
      questId,
      (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass10_1_o *)v11->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1B64324(this);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v11->fields.idx + 1,
    v11->fields.callback,
    v11->fields.transitionQuest,
    v10);
}


void __fastcall EventTutorialEntity___c__DisplayClass7_0___ctor(
        EventTutorialEntity___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass7_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FC5E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FC5E0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass7_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *_9__3; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Request_object; // x0
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_49FC5E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__3__, v6);
    byte_49FC5E1 = 1;
  }
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass7_0__OpenTutorial_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__3,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1B64324(Request_object);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass7_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass7_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  Il2CppObject *Request_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_49FC5E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, *(_QWORD *)&questId);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_EventTutorialEntity___c__DisplayClass7_1__OpenTutorial_b__4__, v7);
    sub_1B640C8(&EventTutorialEntity___c__DisplayClass7_1_TypeInfo, v8);
    byte_49FC5E3 = 1;
  }
  v9 = sub_1B64314(EventTutorialEntity___c__DisplayClass7_1_TypeInfo, *(_QWORD *)&questId, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_DWORD *)(v9 + 16) = questId;
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)v9,
    Method_EventTutorialEntity___c__DisplayClass7_1__OpenTutorial_b__4__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v15,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1B64324(Request_object);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass7_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass7_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FC5E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    byte_49FC5E2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass7_1___ctor(
        EventTutorialEntity___c__DisplayClass7_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass7_1___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass7_1_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass7_0_o *CS___8__locals1; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1B64324(this);
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)this, this->fields.questId, method);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___ctor(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FC5E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FC5E4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FC5E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49FC5E5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}