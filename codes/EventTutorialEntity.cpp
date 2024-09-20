void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B32D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B32D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4A5B32C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B32C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4A5B329 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17153/*"beforeActionSetup"*/);
    byte_4A5B329 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17153/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B328 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17154/*"beforeActionVals"*/);
    byte_4A5B328 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17154/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t __fastcall EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B32B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22913/*"resumeTransitionWar"*/);
    byte_4A5B32B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22913/*"resumeTransitionWar"*/, 0, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B327 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17154/*"beforeActionVals"*/);
    byte_4A5B327 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17154/*"beforeActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B32A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22913/*"resumeTransitionWar"*/);
    byte_4A5B32A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22913/*"resumeTransitionWar"*/, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v13; // x0
  System_Int32_array *v14; // x21
  int32_t eventId; // w19
  int32_t flagType; // w22
  EventTutorialEntity_Fields *p_fields; // t2
  CommonUI_o *v18; // x23
  System_Action_o *v19; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v21; // x21
  System_Action_int__o *v22; // x22
  const MethodInfo *v23; // x4

  if ( (byte_4A5B323 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__0__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__1__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__2__);
    sub_1B885B0(&EventTutorialEntity___c__DisplayClass8_0_TypeInfo);
    byte_4A5B323 = 1;
  }
  v5 = sub_1B887FC(EventTutorialEntity___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = this->fields.imageIds;
    p_fields = &this->fields;
    eventId = this->fields.eventId;
    flagType = p_fields->flagType;
    v18 = (CommonUI_o *)v13;
    v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__0__,
      0LL);
    if ( v18 )
    {
      CommonUI__OpenTutorialImageDialog_30520500(v18, v14, flagType, eventId, v19, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__1__,
      0LL);
    v22 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v22,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__2__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v21, v22, v23);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v11; // x0
  System_Int32_array *v12; // x19
  CommonUI_o *v13; // x21
  System_Action_o *v14; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v16; // x21
  System_Action_int__o *v17; // x20
  const MethodInfo *v18; // x4

  if ( (byte_4A5B324 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTutorialEntity_TransitionQuest__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__0__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__1__);
    sub_1B885B0(&EventTutorialEntity___c__DisplayClass9_0_TypeInfo);
    byte_4A5B324 = 1;
  }
  v5 = sub_1B887FC(EventTutorialEntity___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = this->fields.imageIds;
    v13 = (CommonUI_o *)v11;
    v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v13 )
    {
      CommonUI__OpenTutorialImageDialog_30520500(v13, v12, -1, 0, v14, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v17 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v17, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v16, v17, v18);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
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
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v19; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v21; // x8
  struct System_Int32_array *textPos; // x9
  float v23; // s9
  __int64 v24; // x10
  char v25; // w26
  float v26; // s10
  float v27; // s8
  struct System_Int32_array *ptPos; // x9
  __int64 v29; // x10
  float v30; // s11
  System_String_o *scrDlgTitle; // x22
  int spacingY; // w23
  struct EventTutorialEntity_TextTuto_array *v33; // x8
  __int64 v34; // x9
  EventTutorialEntity_TextTuto_o *v35; // x8
  struct EventTutorialEntity_TextTuto_array *v36; // x8
  __int64 v37; // x9
  EventTutorialEntity_TextTuto_o *v38; // x8
  System_String_o *text; // x21
  CommonUI_o *v40; // x20
  System_Action_o *v41; // x22
  struct EventTutorialEntity_TextTuto_array *v42; // x8
  __int64 v43; // x9
  EventTutorialEntity_TextTuto_o *v44; // x8
  System_String_o *v45; // x21
  CommonUI_o *v46; // x20
  ScrollMessageDialog_ClickDelegate_o *v47; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v50; // w20
  CommonUI_o *v51; // x22
  System_Action_o *v52; // x23
  int v53; // w21
  struct EventTutorialEntity_TextTuto_array *v54; // x8
  __int64 v55; // x9
  EventTutorialEntity_TextTuto_o *v56; // x8
  CommonUI_o *v57; // x22
  System_String_o *v58; // x23
  System_String_o *Empty; // x24
  System_String_o *v60; // x25
  System_String_o *v61; // x26
  CommonConfirmDialog_ClickDelegate_o *v62; // x27
  struct EventTutorialEntity_TextTuto_array *v63; // x8
  __int64 v64; // x9
  EventTutorialEntity_TextTuto_o *v65; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v67; // x22
  Il2CppObject *Master_object; // x0
  int32_t eventId; // w20
  SelectBonusBaseMaster_o *v70; // x21
  System_Action_o *v71; // x22
  struct EventTutorialEntity_TextTuto_array *v72; // x8
  __int64 v73; // x9
  EventTutorialEntity_TextTuto_o *v74; // x8
  System_String_o *title; // x23
  System_String_o *v76; // x24
  CommonUI_o *v77; // x22
  System_Action_o *v78; // x25
  struct EventTutorialEntity_TextTuto_array *v79; // x8
  __int64 v80; // x9
  EventTutorialEntity_TextTuto_o *v81; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v83; // x10
  int monitor; // w9
  UnityEngine_Rect_array *v85; // x22
  int v86; // w8
  bool v87; // w11
  __int64 v88; // x12
  EventTutorialEntity_TextTuto_o *v89; // x10
  struct EventTutorialEntity_RectData_array *v90; // x10
  int v91; // w12
  int32x4_t *v92; // x10
  int32_t v93; // w23
  struct EventTutorialEntity_TextTuto_array *v94; // x8
  __int64 v95; // x9
  EventTutorialEntity_TextTuto_o *v96; // x8
  struct EventTutorialEntity_TextTuto_array *v97; // x8
  __int64 v98; // x9
  EventTutorialEntity_TextTuto_o *v99; // x8
  System_String_o *v100; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v102; // x20
  System_Action_o *v103; // x26
  UnityEngine_Vector2_o v104; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v105; // 0:s2.4,4:s3.4,8:s4.4

  if ( (byte_4A5B326 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Rect___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__0__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__1__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__2__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__3__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__4__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__5__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__7__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__8__);
    sub_1B885B0(&EventTutorialEntity___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10902/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_21067/*"left"*/);
    sub_1B885B0(&StringLiteral_22941/*"right"*/);
    sub_1B885B0(&StringLiteral_10903/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
    byte_4A5B326 = 1;
  }
  v9 = sub_1B887FC(EventTutorialEntity___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_96;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 24) = idx;
  *(_QWORD *)(v9 + 32) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)callback, v14, v15);
  *(_QWORD *)(v9 + 40) = transitionQuest;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)transitionQuest, v16, v17);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_96;
  v19 = *(int *)(v9 + 24);
  max_length = textJson->max_length;
  if ( (int)v19 >= max_length )
    goto LABEL_42;
  if ( (unsigned int)v19 >= max_length )
    goto LABEL_97;
  v21 = textJson->m_Items[v19];
  if ( !v21 )
    goto LABEL_96;
  textPos = v21->fields.textPos;
  v23 = 0.0;
  if ( !textPos )
  {
    v25 = 1;
    goto LABEL_13;
  }
  v24 = *(_QWORD *)&textPos->max_length;
  v25 = (_DWORD)v24 == 0;
  if ( !v24 )
  {
LABEL_13:
    v27 = 0.0;
    v26 = 0.0;
    goto LABEL_14;
  }
  if ( (unsigned int)v24 < 2 )
    goto LABEL_97;
  v26 = (float)textPos->m_Items[1];
  v27 = (float)textPos->m_Items[2];
LABEL_14:
  ptPos = v21->fields.ptPos;
  if ( ptPos )
  {
    v29 = *(_QWORD *)&ptPos->max_length;
    v30 = 0.0;
    if ( v29 )
    {
      if ( (unsigned int)v29 < 2 )
        goto LABEL_97;
      v30 = (float)ptPos->m_Items[1];
      v23 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v30 = 0.0;
  }
  scrDlgTitle = v21->fields.scrDlgTitle;
  spacingY = v21->fields.spacingY;
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v33 = this->fields.textJson;
    if ( !v33 )
      goto LABEL_96;
    v34 = *(int *)(v9 + 24);
    if ( (unsigned int)v34 >= v33->max_length )
      goto LABEL_97;
    v35 = v33->m_Items[v34];
    if ( !v35 )
      goto LABEL_96;
    if ( v35->fields.isFortification )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = this->fields.textJson;
      if ( !v36 )
        goto LABEL_96;
      v37 = *(int *)(v9 + 24);
      if ( (unsigned int)v37 < v36->max_length )
      {
        v38 = v36->m_Items[v37];
        if ( v38 )
        {
          text = v38->fields.text;
          v40 = (CommonUI_o *)IsNullOrEmpty;
          v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v41,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__1__,
            0LL);
          if ( v40 )
          {
            CommonUI__OpenFortificationNotifyDialog(v40, text, v41, 0LL);
            return;
          }
        }
LABEL_96:
        sub_1B8880C(IsNullOrEmpty, v11);
      }
      goto LABEL_97;
    }
    if ( v35->fields.isClassBoardRelease )
    {
      releaseClassBoardBaseIds = v35->fields.releaseClassBoardBaseIds;
      if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
      {
        addClassIds = v35->fields.addClassIds;
        if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
        {
          IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !releaseClassBoardBaseIds->max_length )
            goto LABEL_97;
          v50 = releaseClassBoardBaseIds->m_Items[1];
          v51 = (CommonUI_o *)IsNullOrEmpty;
          v52 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v52,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__4__,
            0LL);
          if ( !v51 )
            goto LABEL_96;
          CommonUI__OpenClassBoardAddClassDialog(v51, v50, addClassIds, v52, 0LL);
        }
        else
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v67 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v67,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__5__,
            0LL);
          if ( !Instance )
            goto LABEL_96;
          CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)Instance, releaseClassBoardBaseIds, v67, 0LL);
        }
        return;
      }
LABEL_42:
      ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0LL);
      return;
    }
    v53 = spacingY & ~(spacingY >> 31);
    if ( v35->fields.isQuestRelease )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v54 = this->fields.textJson;
      if ( !v54 )
        goto LABEL_96;
      v55 = *(int *)(v9 + 24);
      if ( (unsigned int)v55 >= v54->max_length )
        goto LABEL_97;
      v56 = v54->m_Items[v55];
      if ( !v56 )
        goto LABEL_96;
      v57 = (CommonUI_o *)IsNullOrEmpty;
      v58 = v56->fields.text;
      Empty = string_TypeInfo->static_fields->Empty;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_10903/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10902/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
      v62 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v62,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__2__,
        0LL);
      v63 = this->fields.textJson;
      if ( !v63 )
        goto LABEL_96;
      v64 = *(int *)(v9 + 24);
      if ( (unsigned int)v64 >= v63->max_length )
        goto LABEL_97;
      v65 = v63->m_Items[v64];
      if ( !v65 || !v57 )
        goto LABEL_96;
      CommonUI__OpenConfirmDecideDlg(
        v57,
        Empty,
        v58,
        v60,
        v61,
        v62,
        v65->fields.dlgFontSize,
        0.0,
        15.0,
        v53,
        0,
        0,
        240,
        0,
        0,
        0,
        0LL);
    }
    else if ( v35->fields.isSelectBonus )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
      eventId = this->fields.eventId;
      v70 = (SelectBonusBaseMaster_o *)Master_object;
      v71 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v71,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__3__,
        0LL);
      if ( !v70 )
        goto LABEL_96;
      SelectBonusBaseMaster__OpenSelectBonusDialog(v70, eventId, v71, 0LL);
    }
    else if ( v35->fields.dlgFontSize < 1 )
    {
      rects = v35->fields.rects;
      if ( !rects )
        goto LABEL_96;
      IsNullOrEmpty = (Il2CppObject *)sub_1B88658(UnityEngine_Rect___TypeInfo, rects->max_length);
      if ( !IsNullOrEmpty )
        goto LABEL_96;
      v83 = this->fields.textJson;
      if ( !v83 )
        goto LABEL_96;
      monitor = (int)IsNullOrEmpty[1].monitor;
      v85 = (UnityEngine_Rect_array *)IsNullOrEmpty;
      v86 = 1;
      v87 = monitor > 0;
      while ( 1 )
      {
        v88 = *(int *)(v9 + 24);
        if ( (unsigned int)v88 >= v83->max_length )
          goto LABEL_97;
        v89 = v83->m_Items[v88];
        if ( !v89 )
          goto LABEL_96;
        if ( !v87 )
          break;
        v90 = v89->fields.rects;
        if ( !v90 )
          goto LABEL_96;
        v91 = v86 - 1;
        if ( v86 - 1 >= v90->max_length )
          goto LABEL_97;
        v92 = (int32x4_t *)v90->m_Items[v91];
        if ( !v92 )
          goto LABEL_96;
        if ( v91 >= (unsigned int)monitor )
          goto LABEL_97;
        IsNullOrEmpty[v91 + 2] = (Il2CppObject)vcvtq_f32_s32(v92[1]);
        monitor = (int)IsNullOrEmpty[1].monitor;
        v83 = this->fields.textJson;
        v87 = v86++ < monitor;
        if ( !v83 )
          goto LABEL_96;
      }
      IsNullOrEmpty = (Il2CppObject *)BasicHelper__EqualExceptNullOrEmpty(
                                        v89->fields.textAlign,
                                        (System_String_o *)StringLiteral_21067/*"left"*/,
                                        0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v93 = 1;
      }
      else
      {
        v94 = this->fields.textJson;
        if ( !v94 )
          goto LABEL_96;
        v95 = *(int *)(v9 + 24);
        if ( (unsigned int)v95 >= v94->max_length )
          goto LABEL_97;
        v96 = v94->m_Items[v95];
        if ( !v96 )
          goto LABEL_96;
        if ( BasicHelper__EqualExceptNullOrEmpty(v96->fields.textAlign, (System_String_o *)StringLiteral_22941/*"right"*/, 0LL) )
          v93 = 3;
        else
          v93 = 2;
      }
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v97 = this->fields.textJson;
      if ( !v97 )
        goto LABEL_96;
      v98 = *(int *)(v9 + 24);
      if ( (unsigned int)v98 >= v97->max_length )
LABEL_97:
        sub_1B88814(IsNullOrEmpty, v11);
      v99 = v97->m_Items[v98];
      if ( !v99 )
        goto LABEL_96;
      v100 = v99->fields.text;
      dlgBgId = v99->fields.dlgBgId;
      v102 = (CommonUI_o *)IsNullOrEmpty;
      v103 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v103,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__8__,
        0LL);
      if ( !v102 )
        goto LABEL_96;
      v105.fields.z = 0.0;
      v104.fields.x = v26;
      v104.fields.y = v27;
      v105.fields.x = v30;
      v105.fields.y = v23;
      CommonUI__OpenEventTutorialNotificationDialog(v102, v100, v85, v104, v105, dlgBgId, v93, v103, 0LL, v53, 0LL);
    }
    else
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v72 = this->fields.textJson;
      if ( !v72 )
        goto LABEL_96;
      v73 = *(int *)(v9 + 24);
      if ( (unsigned int)v73 >= v72->max_length )
        goto LABEL_97;
      v74 = v72->m_Items[v73];
      if ( !v74 )
        goto LABEL_96;
      title = v74->fields.title;
      v76 = v74->fields.text;
      v77 = (CommonUI_o *)IsNullOrEmpty;
      v78 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v78,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__7__,
        0LL);
      v79 = this->fields.textJson;
      if ( !v79 )
        goto LABEL_96;
      v80 = *(int *)(v9 + 24);
      if ( (unsigned int)v80 >= v79->max_length )
        goto LABEL_97;
      v81 = v79->m_Items[v80];
      if ( !v81 || !v77 )
        goto LABEL_96;
      CommonUI__OpenNotificationDialog_30495196(
        v77,
        title,
        v76,
        v78,
        v27,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v81->fields.dlgFontSize,
        0,
        v53,
        v25,
        0LL);
    }
  }
  else
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v42 = this->fields.textJson;
    if ( !v42 )
      goto LABEL_96;
    v43 = *(int *)(v9 + 24);
    if ( (unsigned int)v43 >= v42->max_length )
      goto LABEL_97;
    v44 = v42->m_Items[v43];
    if ( !v44 )
      goto LABEL_96;
    v45 = v44->fields.text;
    v46 = (CommonUI_o *)IsNullOrEmpty;
    v47 = (ScrollMessageDialog_ClickDelegate_o *)sub_1B887FC(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v47,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v46 )
      goto LABEL_96;
    CommonUI__OpenScrollMessageDialog(v46, scrDlgTitle, v45, 10, v47, 0, 0, 0LL);
  }
}


void __fastcall EventTutorialEntity__TransitionQuest(
        EventTutorialEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5B325 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5B325 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A58389 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58389 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Int32_array_array *__fastcall EventTutorialEntity__getTargets(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  struct System_String_array *targetIds; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x8
  System_Int32_array_array *v7; // x20
  __int64 v8; // x25
  ServantStatusBattleListViewItem_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  EventTutorialEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__4_0; // x23
  Il2CppObject *v15; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5B320 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_ConvertAll_string__int___);
    sub_1B885B0(&System_Converter_string__int__TypeInfo);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&Method_EventTutorialEntity___c__getTargets_b__4_0__);
    sub_1B885B0(&EventTutorialEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5B320 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1B88658(int_____TypeInfo, 1LL);
  v4 = (System_String_o *)sub_1B88658(int_____TypeInfo, targetIds->max_length);
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_1B8880C(v4, v5);
  v7 = (System_Int32_array_array *)v4;
  v8 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&v4[1].monitor;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (int)v8 >= max_length )
      return v7;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_23;
    v4 = v6->m_Items[v8];
    if ( v4 )
    {
      v4 = System_String__Replace_61726660(
             v4,
             (System_String_o *)StringLiteral_15812/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v4 = System_String__Replace_61726660(
               v4,
               (System_String_o *)StringLiteral_16069/*"]"*/,
               (System_String_o *)StringLiteral_1/*""*/,
               0LL);
        if ( v4 )
        {
          v11 = System_String__Split(v4, 0x2Cu, 0, 0LL);
          v12 = EventTutorialEntity___c_TypeInfo;
          v13 = (System_Object_array *)v11;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v12 = EventTutorialEntity___c_TypeInfo;
          }
          _9__4_0 = (System_Converter_object__int__o *)v12->static_fields->__9__4_0;
          if ( !_9__4_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = EventTutorialEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__4_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__4_0, v15, Method_EventTutorialEntity___c__getTargets_b__4_0__, 0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__4_0 = (struct System_Converter_string__int__o *)_9__4_0;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v17, v18);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__4_0,
                                    (const MethodInfo_2F76E10 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= v7->max_length )
LABEL_23:
              sub_1B88814(v4, v5);
            p_monitor->klass = (ServantStatusBattleListViewItem_c *)v4;
            sub_1B88554(p_monitor, (int32_t)v4, v19, v20);
            v6 = this->fields.targetIds;
            ++v8;
            p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
            if ( v6 )
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
  System_Int32_array_array *Targets; // x21
  DataManager_o *Instance; // x0
  int32_t v14; // w8
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  int v17; // w9
  System_Int32_array *v18; // x10
  int max_length; // w11
  int32_t v20; // w10
  __int64 v21; // x8
  int v22; // w9
  System_Int32_array *v23; // x10
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v26; // x8
  QuestGroupMaster_o *v27; // x21
  unsigned __int64 v28; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v30; // x8
  System_Int32_array *v31; // x9
  __int64 v32; // x8
  int v33; // w9
  System_Int32_array *v34; // x10
  int v35; // w11
  int32_t v36; // w12
  int32_t v37; // w12
  int32_t v38; // w10
  __int64 v39; // x22
  __int64 v40; // x8
  int v41; // w9
  System_Int32_array *v42; // x10
  int v43; // w11
  int32_t v44; // w12
  int32_t v45; // w10
  TerminalSceneComponent_c *v46; // x0
  struct TerminalSceneComponent_o *mInstance; // x20

  if ( (byte_4A5B322 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5B322 = 1;
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
      v21 = *(_QWORD *)&Targets->max_length;
      if ( !v21 )
        goto LABEL_4;
      if ( (int)v21 < 1 )
        goto LABEL_118;
      v22 = 0;
      while ( 2 )
      {
        v23 = Targets->m_Items[v22];
        if ( !v23 )
          goto LABEL_120;
        if ( (int)v23->max_length >= 1 && v23->m_Items[1] != qId )
        {
          ++v22;
          Instance = 0LL;
          if ( (_DWORD)v21 == v22 )
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
            v17 = 0;
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
              if ( (_DWORD)v16 == v17 )
                return (char)Instance;
            }
LABEL_120:
            sub_1B8880C(Instance, v11);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v26 = *(_QWORD *)&condIds->max_length;
      if ( (int)v26 < 1 )
        goto LABEL_118;
      v27 = (QuestGroupMaster_o *)Instance;
      v28 = 0LL;
      while ( v28 < (unsigned int)v26 )
      {
        if ( !v27 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v27, condIds->m_Items[v28 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v26) = condIds->max_length;
        ++v28;
        Instance = 0LL;
        if ( (__int64)v28 >= (int)v26 )
          return (char)Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v32 = *(_QWORD *)&Targets->max_length;
      if ( !v32 )
        goto LABEL_4;
      if ( (int)v32 < 1 )
        goto LABEL_118;
      v33 = 0;
      while ( 2 )
      {
        v34 = Targets->m_Items[v33];
        if ( !v34 )
          goto LABEL_120;
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
            if ( (_DWORD)v32 == v33 )
              return (char)Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v40 = *(_QWORD *)&Targets->max_length;
      if ( !v40 || (int)v40 < 1 )
        goto LABEL_4;
      v41 = 0;
      while ( 2 )
      {
        v42 = Targets->m_Items[v41];
        if ( !v42 )
          goto LABEL_120;
        v43 = v42->max_length;
        if ( v43 < 1 )
          goto LABEL_118;
        if ( v42->m_Items[1] != qId )
          goto LABEL_94;
        if ( v43 < 2 )
          goto LABEL_118;
        v44 = v42->m_Items[2];
        if ( v44 != ex1 )
        {
          if ( v44 )
            goto LABEL_94;
        }
        if ( v43 < 3 )
          goto LABEL_118;
        v45 = v42->m_Items[3];
        Instance = 0LL;
        if ( v45 != ex2 )
        {
          if ( v45 )
          {
LABEL_94:
            if ( (_DWORD)v40 == ++v41 )
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
      v30 = *(_QWORD *)&Targets->max_length;
      if ( !v30 )
        goto LABEL_4;
      if ( (_DWORD)v30 != 1 )
      {
        if ( (int)v30 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_74;
      }
      v31 = Targets->m_Items[0];
      if ( !v31 )
        goto LABEL_120;
      if ( v31->max_length != 1 || v31->m_Items[1] )
      {
LABEL_74:
        v39 = 0LL;
        while ( (unsigned int)v39 < (unsigned int)v30 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v39];
          if ( !Instance )
            goto LABEL_120;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v30) = Targets->max_length;
          ++v39;
          Instance = 0LL;
          if ( (int)v39 >= (int)v30 )
            return (char)Instance;
        }
LABEL_121:
        sub_1B88814(Instance, v11);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
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
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
      }
      v46 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v46 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v46->static_fields->mInstance;
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

  if ( (byte_4A5B321 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5B321 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_37721824(flagType, eventId, 0LL)
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B32E & 1) == 0 )
  {
    sub_1B885B0(&EventTutorialEntity___c_TypeInfo);
    byte_4A5B32E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventTutorialEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTutorialEntity___c___getTargets_b__4_0(
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


void __fastcall EventTutorialEntity___c__DisplayClass11_0___ctor(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v3);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A5B32F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass11_1__TextTutorialChain_b__6__);
    sub_1B885B0(&EventTutorialEntity___c__DisplayClass11_1_TypeInfo);
    byte_4A5B32F = 1;
  }
  v5 = sub_1B887FC(EventTutorialEntity___c__DisplayClass11_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass11_1__TextTutorialChain_b__6__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_1___ctor(
        EventTutorialEntity___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_1___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass11_1_o *v2; // x19
  struct EventTutorialEntity___c__DisplayClass11_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  const MethodInfo *v9; // x4
  struct EventTutorialEntity___c__DisplayClass11_0_o *v10; // x8

  v2 = this;
  if ( (byte_4A5B330 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass11_1_o *)sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A5B330 = 1;
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
    sub_1B88814(this, method);
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_14;
  questId = v7->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass11_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_14;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0LL);
  v10 = v2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_14;
  if ( v2->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v10->fields.transitionQuest,
      questId,
      (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass11_1_o *)v10->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1B8880C(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    v9);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___ctor(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5B331 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5B331 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4A5B332 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__3__);
    byte_4A5B332 = 1;
  }
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v4, v5);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1B8880C(Request_object, v7);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4A5B334 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventTutorialEntity___c__DisplayClass8_1__OpenTutorial_b__4__);
    sub_1B885B0(&EventTutorialEntity___c__DisplayClass8_1_TypeInfo);
    byte_4A5B334 = 1;
  }
  v5 = sub_1B887FC(EventTutorialEntity___c__DisplayClass8_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 16) = questId;
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass8_1__OpenTutorial_b__4__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1B8880C(Request_object, v7);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5B333 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5B333 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_1___ctor(
        EventTutorialEntity___c__DisplayClass8_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_1___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass8_1_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass8_0_o *CS___8__locals1; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1B8880C(this, result);
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)this, this->fields.questId, method);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___ctor(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5B335 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5B335 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5B336 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A5B336 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}