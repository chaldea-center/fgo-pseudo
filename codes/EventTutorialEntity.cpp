void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B163BF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4B163BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType, *(_QWORD *)&num);
    byte_4B163BE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v2; // x2

  if ( (byte_4B163BB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17325/*"beforeActionSetup"*/, method, v2);
    byte_4B163BB = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17325/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163BA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17326/*"beforeActionVals"*/, method, v2);
    byte_4B163BA = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17326/*"beforeActionVals"*/, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t __fastcall EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163BD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23160/*"resumeTransitionWar"*/, method, v2);
    byte_4B163BD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23160/*"resumeTransitionWar"*/, 0, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163B9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17326/*"beforeActionVals"*/, method, v2);
    byte_4B163B9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17326/*"beforeActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163BC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23160/*"resumeTransitionWar"*/, method, v2);
    byte_4B163BC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23160/*"resumeTransitionWar"*/, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v39; // x0
  System_Int32_array *v40; // x21
  int32_t eventId; // w19
  int32_t flagType; // w22
  EventTutorialEntity_Fields *p_fields; // t2
  CommonUI_o *v44; // x23
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_o *v48; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_int__o *v54; // x22
  const MethodInfo *v55; // x4

  if ( (byte_4B163B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__0__, v12, v13);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__1__, v14, v15);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__2__, v16, v17);
    sub_1BCA7E0(&EventTutorialEntity___c__DisplayClass8_0_TypeInfo, v18, v19);
    byte_4B163B5 = 1;
  }
  v20 = sub_1BCAA2C(EventTutorialEntity___c__DisplayClass8_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_14;
  *(_QWORD *)(v20 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v29, v30, v31, v32, v33, v34);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v40 = this->fields.imageIds;
    p_fields = &this->fields;
    eventId = this->fields.eventId;
    flagType = p_fields->flagType;
    v44 = (CommonUI_o *)v39;
    v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v46, v47);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__0__,
      0LL);
    if ( v44 )
    {
      CommonUI__OpenTutorialImageDialog_30792800(v44, v40, flagType, eventId, v48, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v22);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
    System_Action___ctor(
      v50,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__1__,
      0LL);
    v54 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v51, v52, v53);
    System_Action_int____ctor(
      v54,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__2__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v50, v54, v55);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v20 + 16), 0LL);
  }
}


void __fastcall EventTutorialEntity__OpenTutorialWithoutFlag(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v33; // x0
  System_Int32_array *v34; // x19
  CommonUI_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_int__o *v45; // x20
  const MethodInfo *v46; // x4

  if ( (byte_4B163B6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventTutorialEntity_TransitionQuest__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__0__, v14, v15);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__1__, v16, v17);
    sub_1BCA7E0(&EventTutorialEntity___c__DisplayClass9_0_TypeInfo, v18, v19);
    byte_4B163B6 = 1;
  }
  v20 = sub_1BCAA2C(EventTutorialEntity___c__DisplayClass9_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_14;
  *(_QWORD *)(v20 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = this->fields.imageIds;
    v35 = (CommonUI_o *)v33;
    v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v35 )
    {
      CommonUI__OpenTutorialImageDialog_30792800(v35, v34, -1, 0, v39, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v22);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v20,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v45 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v42, v43, v44);
    System_Action_int____ctor(v45, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v41, v45, v46);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v20 + 16), 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v85; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v87; // x8
  struct System_Int32_array *textPos; // x9
  float v89; // s9
  __int64 v90; // x10
  char v91; // w27
  float v92; // s10
  float v93; // s8
  struct System_Int32_array *ptPos; // x9
  __int64 v95; // x10
  float v96; // s11
  System_String_o *scrDlgTitle; // x21
  int spacingY; // w22
  struct EventTutorialEntity_TextTuto_array *v99; // x8
  __int64 v100; // x9
  EventTutorialEntity_TextTuto_o *v101; // x8
  Il2CppObject *Instance; // x20
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Action_object__o *v106; // x21
  __int64 v107; // x2
  __int64 v108; // x3
  struct EventTutorialEntity_TextTuto_array *v109; // x8
  __int64 v110; // x9
  EventTutorialEntity_TextTuto_o *v111; // x8
  System_String_o *text; // x22
  CommonUI_o *v113; // x20
  ScrollMessageDialog_ClickDelegate_o *v114; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  __int64 v117; // x2
  __int64 v118; // x3
  int32_t v119; // w20
  CommonUI_o *v120; // x22
  System_Action_o *v121; // x23
  int v122; // w21
  struct EventTutorialEntity_TextTuto_array *v123; // x8
  __int64 v124; // x9
  EventTutorialEntity_TextTuto_o *v125; // x8
  CommonUI_o *v126; // x22
  System_String_o *v127; // x23
  System_String_o *Empty; // x24
  System_String_o *v129; // x25
  System_String_o *v130; // x26
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  CommonConfirmDialog_ClickDelegate_o *v134; // x27
  struct EventTutorialEntity_TextTuto_array *v135; // x8
  __int64 v136; // x9
  EventTutorialEntity_TextTuto_o *v137; // x8
  Il2CppObject *v138; // x21
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  System_Action_o *v142; // x22
  Il2CppObject *Master_object; // x0
  int32_t eventId; // w20
  SelectBonusBaseMaster_o *v145; // x21
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  System_Action_o *v149; // x22
  __int64 v150; // x2
  __int64 v151; // x3
  struct EventTutorialEntity_TextTuto_array *v152; // x8
  __int64 v153; // x9
  EventTutorialEntity_TextTuto_o *v154; // x8
  System_String_o *title; // x23
  System_String_o *v156; // x24
  CommonUI_o *v157; // x22
  System_Action_o *v158; // x25
  struct EventTutorialEntity_TextTuto_array *v159; // x8
  __int64 v160; // x9
  EventTutorialEntity_TextTuto_o *v161; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v163; // x10
  int monitor; // w9
  UnityEngine_Rect_array *v165; // x22
  int v166; // w8
  bool v167; // w11
  __int64 v168; // x12
  EventTutorialEntity_TextTuto_o *v169; // x10
  struct EventTutorialEntity_RectData_array *v170; // x10
  int v171; // w12
  int32x4_t *v172; // x10
  int32_t v173; // w23
  struct EventTutorialEntity_TextTuto_array *v174; // x8
  __int64 v175; // x9
  EventTutorialEntity_TextTuto_o *v176; // x8
  int32_t v177; // w25
  __int64 v178; // x2
  __int64 v179; // x3
  struct EventTutorialEntity_TextTuto_array *v180; // x8
  __int64 v181; // x9
  EventTutorialEntity_TextTuto_o *v182; // x8
  System_String_o *v183; // x23
  System_String_o *v184; // x24
  CommonUI_o *v185; // x22
  System_Action_o *v186; // x26
  struct EventTutorialEntity_TextTuto_array *v187; // x8
  __int64 v188; // x9
  EventTutorialEntity_TextTuto_o *v189; // x8
  int32_t dlgFontSize; // w19
  struct EventTutorialEntity_TextTuto_array *v191; // x8
  __int64 v192; // x9
  EventTutorialEntity_TextTuto_o *v193; // x8
  __int64 v194; // x2
  __int64 v195; // x3
  struct EventTutorialEntity_TextTuto_array *v196; // x8
  __int64 v197; // x9
  EventTutorialEntity_TextTuto_o *v198; // x8
  System_String_o *v199; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v201; // x20
  System_Action_o *v202; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  System_Nullable_int__o p_messageWidgetSizeX; // 0:x0.8
  UnityEngine_Vector2_o v205; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v206; // 0:s2.4,4:s3.4,8:s4.4

  if ( (byte_4B163B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_FortificationNotifyDialog__TypeInfo, *(_QWORD *)&idx, callback);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScrollMessageDialog_ClickDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SelectBonusBaseMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v23, v24);
    sub_1BCA7E0(&UnityEngine_Rect___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28);
    sub_1BCA7E0(&string_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__0__, v31, v32);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__10__, v33, v34);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__1__, v35, v36);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__2__, v37, v38);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__3__, v39, v40);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__5__, v41, v42);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__6__, v43, v44);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__8__, v45, v46);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__9__, v47, v48);
    sub_1BCA7E0(&EventTutorialEntity___c__DisplayClass11_0_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_11038/*"QUEST_RELEASE_DIALOG_CANCEL"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_21293/*"left"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_6353/*"EventUI/Prefabs/80400"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_6924/*"FortificationNotifyDialog"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_23188/*"right"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_11039/*"QUEST_RELEASE_DIALOG_DECIDE"*/, v61, v62);
    byte_4B163B8 = 1;
  }
  v63 = sub_1BCAA2C(EventTutorialEntity___c__DisplayClass11_0_TypeInfo, *(_QWORD *)&idx, callback, transitionQuest);
  System_Object___ctor((Il2CppObject *)v63, 0LL);
  if ( !v63 )
    goto LABEL_105;
  *(_QWORD *)(v63 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 16), (int64_t)this, v66, v67, v68, v69, v70, v71);
  *(_DWORD *)(v63 + 24) = idx;
  *(_QWORD *)(v63 + 32) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)callback, v72, v73, v74, v75, v76, v77);
  *(_QWORD *)(v63 + 40) = transitionQuest;
  sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 40), (int64_t)transitionQuest, v78, v79, v80, v81, v82, v83);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_105;
  v85 = *(int *)(v63 + 24);
  max_length = textJson->max_length;
  if ( (int)v85 >= max_length )
    goto LABEL_39;
  if ( (unsigned int)v85 >= max_length )
    goto LABEL_106;
  v87 = textJson->m_Items[v85];
  if ( !v87 )
    goto LABEL_105;
  textPos = v87->fields.textPos;
  v89 = 0.0;
  if ( !textPos )
  {
    v91 = 1;
    goto LABEL_13;
  }
  v90 = *(_QWORD *)&textPos->max_length;
  v91 = (_DWORD)v90 == 0;
  if ( !v90 )
  {
LABEL_13:
    v93 = 0.0;
    v92 = 0.0;
    goto LABEL_14;
  }
  if ( (unsigned int)v90 < 2 )
    goto LABEL_106;
  v92 = (float)textPos->m_Items[1];
  v93 = (float)textPos->m_Items[2];
LABEL_14:
  ptPos = v87->fields.ptPos;
  if ( ptPos )
  {
    v95 = *(_QWORD *)&ptPos->max_length;
    v96 = 0.0;
    if ( v95 )
    {
      if ( (unsigned int)v95 < 2 )
        goto LABEL_106;
      v96 = (float)ptPos->m_Items[1];
      v89 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v96 = 0.0;
  }
  scrDlgTitle = v87->fields.scrDlgTitle;
  spacingY = v87->fields.spacingY;
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v109 = this->fields.textJson;
    if ( !v109 )
      goto LABEL_105;
    v110 = *(int *)(v63 + 24);
    if ( (unsigned int)v110 >= v109->max_length )
      goto LABEL_106;
    v111 = v109->m_Items[v110];
    if ( !v111 )
      goto LABEL_105;
    text = v111->fields.text;
    v113 = (CommonUI_o *)IsNullOrEmpty;
    v114 = (ScrollMessageDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                    ScrollMessageDialog_ClickDelegate_TypeInfo,
                                                    v65,
                                                    v107,
                                                    v108);
    ScrollMessageDialog_ClickDelegate___ctor(
      v114,
      (Il2CppObject *)v63,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v113 )
      goto LABEL_105;
    CommonUI__OpenScrollMessageDialog(v113, scrDlgTitle, text, 10, v114, 0, 0, 0LL);
    return;
  }
  v99 = this->fields.textJson;
  if ( !v99 )
    goto LABEL_105;
  v100 = *(int *)(v63 + 24);
  if ( (unsigned int)v100 >= v99->max_length )
    goto LABEL_106;
  v101 = v99->m_Items[v100];
  if ( !v101 )
    goto LABEL_105;
  if ( v101->fields.isFortification )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v106 = (System_Action_object__o *)sub_1BCAA2C(System_Action_FortificationNotifyDialog__TypeInfo, v103, v104, v105);
    System_Action_object____ctor(
      v106,
      (Il2CppObject *)v63,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__LoadAndCreateDialog_object_(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_6353/*"EventUI/Prefabs/80400"*/,
        (System_String_o *)StringLiteral_6924/*"FortificationNotifyDialog"*/,
        (System_Action_T__o *)v106,
        (const MethodInfo_2F094B0 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      return;
    }
LABEL_105:
    sub_1BCAA3C(IsNullOrEmpty, v65);
  }
  if ( v101->fields.isClassBoardRelease )
  {
    releaseClassBoardBaseIds = v101->fields.releaseClassBoardBaseIds;
    if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
    {
      addClassIds = v101->fields.addClassIds;
      if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
      {
        IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( releaseClassBoardBaseIds->max_length )
        {
          v119 = releaseClassBoardBaseIds->m_Items[1];
          v120 = (CommonUI_o *)IsNullOrEmpty;
          v121 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v117, v118);
          System_Action___ctor(
            v121,
            (Il2CppObject *)v63,
            Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__5__,
            0LL);
          if ( !v120 )
            goto LABEL_105;
          CommonUI__OpenClassBoardAddClassDialog(v120, v119, addClassIds, v121, 0LL);
          return;
        }
        goto LABEL_106;
      }
      v138 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v142 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v139, v140, v141);
      System_Action___ctor(
        v142,
        (Il2CppObject *)v63,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__6__,
        0LL);
      if ( !v138 )
        goto LABEL_105;
      CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)v138, releaseClassBoardBaseIds, v142, 0LL);
      return;
    }
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v63 + 32), 0LL);
    return;
  }
  v122 = spacingY & ~(spacingY >> 31);
  if ( v101->fields.isQuestRelease )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v123 = this->fields.textJson;
    if ( !v123 )
      goto LABEL_105;
    v124 = *(int *)(v63 + 24);
    if ( (unsigned int)v124 >= v123->max_length )
      goto LABEL_106;
    v125 = v123->m_Items[v124];
    if ( !v125 )
      goto LABEL_105;
    v126 = (CommonUI_o *)IsNullOrEmpty;
    v127 = v125->fields.text;
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11039/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
    v130 = LocalizationManager__Get((System_String_o *)StringLiteral_11038/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
    v134 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                    CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                    v131,
                                                    v132,
                                                    v133);
    CommonConfirmDialog_ClickDelegate___ctor(
      v134,
      (Il2CppObject *)v63,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__2__,
      0LL);
    v135 = this->fields.textJson;
    if ( !v135 )
      goto LABEL_105;
    v136 = *(int *)(v63 + 24);
    if ( (unsigned int)v136 >= v135->max_length )
      goto LABEL_106;
    v137 = v135->m_Items[v136];
    if ( !v137 || !v126 )
      goto LABEL_105;
    CommonUI__OpenConfirmDecideDlg(
      v126,
      Empty,
      v127,
      v129,
      v130,
      v134,
      v137->fields.dlgFontSize,
      0.0,
      15.0,
      v122,
      0,
      0,
      240,
      0,
      0,
      0,
      0,
      0LL);
  }
  else if ( v101->fields.isSelectBonus )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    eventId = this->fields.eventId;
    v145 = (SelectBonusBaseMaster_o *)Master_object;
    v149 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v146, v147, v148);
    System_Action___ctor(
      v149,
      (Il2CppObject *)v63,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__3__,
      0LL);
    if ( !v145 )
      goto LABEL_105;
    SelectBonusBaseMaster__OpenSelectBonusDialog(v145, eventId, v149, 0LL);
  }
  else if ( v101->fields.dlgFontSize < 1 )
  {
    rects = v101->fields.rects;
    if ( !rects )
      goto LABEL_105;
    IsNullOrEmpty = (Il2CppObject *)sub_1BCA888(UnityEngine_Rect___TypeInfo, rects->max_length);
    if ( !IsNullOrEmpty )
      goto LABEL_105;
    v163 = this->fields.textJson;
    if ( !v163 )
      goto LABEL_105;
    monitor = (int)IsNullOrEmpty[1].monitor;
    v165 = (UnityEngine_Rect_array *)IsNullOrEmpty;
    v166 = 1;
    v167 = monitor > 0;
    while ( 1 )
    {
      v168 = *(int *)(v63 + 24);
      if ( (unsigned int)v168 >= v163->max_length )
        goto LABEL_106;
      v169 = v163->m_Items[v168];
      if ( !v169 )
        goto LABEL_105;
      if ( !v167 )
        break;
      v170 = v169->fields.rects;
      if ( !v170 )
        goto LABEL_105;
      v171 = v166 - 1;
      if ( v166 - 1 >= v170->max_length )
        goto LABEL_106;
      v172 = (int32x4_t *)v170->m_Items[v171];
      if ( !v172 )
        goto LABEL_105;
      if ( v171 >= (unsigned int)monitor )
        goto LABEL_106;
      IsNullOrEmpty[v171 + 2] = (Il2CppObject)vcvtq_f32_s32(v172[1]);
      monitor = (int)IsNullOrEmpty[1].monitor;
      v163 = this->fields.textJson;
      v167 = v166++ < monitor;
      if ( !v163 )
        goto LABEL_105;
    }
    IsNullOrEmpty = (Il2CppObject *)BasicHelper__EqualExceptNullOrEmpty(
                                      v169->fields.textAlign,
                                      (System_String_o *)StringLiteral_21293/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      v173 = 1;
    }
    else
    {
      v191 = this->fields.textJson;
      if ( !v191 )
        goto LABEL_105;
      v192 = *(int *)(v63 + 24);
      if ( (unsigned int)v192 >= v191->max_length )
        goto LABEL_106;
      v193 = v191->m_Items[v192];
      if ( !v193 )
        goto LABEL_105;
      if ( BasicHelper__EqualExceptNullOrEmpty(v193->fields.textAlign, (System_String_o *)StringLiteral_23188/*"right"*/, 0LL) )
        v173 = 3;
      else
        v173 = 2;
    }
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v196 = this->fields.textJson;
    if ( !v196 )
      goto LABEL_105;
    v197 = *(int *)(v63 + 24);
    if ( (unsigned int)v197 >= v196->max_length )
LABEL_106:
      sub_1BCAA44(IsNullOrEmpty, v65);
    v198 = v196->m_Items[v197];
    if ( !v198 )
      goto LABEL_105;
    v199 = v198->fields.text;
    dlgBgId = v198->fields.dlgBgId;
    v201 = (CommonUI_o *)IsNullOrEmpty;
    v202 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v194, v195);
    System_Action___ctor(
      v202,
      (Il2CppObject *)v63,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__10__,
      0LL);
    if ( !v201 )
      goto LABEL_105;
    v206.fields.z = 0.0;
    v205.fields.x = v92;
    v205.fields.y = v93;
    v206.fields.x = v96;
    v206.fields.y = v89;
    CommonUI__OpenEventTutorialNotificationDialog(v201, v199, v165, v205, v206, dlgBgId, v173, v202, 0LL, v122, 0LL);
  }
  else
  {
    IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(v101->fields.messageWidgetSizeX, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v152 = this->fields.textJson;
      if ( !v152 )
        goto LABEL_105;
      v153 = *(int *)(v63 + 24);
      if ( (unsigned int)v153 >= v152->max_length )
        goto LABEL_106;
      v154 = v152->m_Items[v153];
      if ( !v154 )
        goto LABEL_105;
      title = v154->fields.title;
      v156 = v154->fields.text;
      v157 = (CommonUI_o *)IsNullOrEmpty;
      v158 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v150, v151);
      System_Action___ctor(
        v158,
        (Il2CppObject *)v63,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__8__,
        0LL);
      v159 = this->fields.textJson;
      if ( !v159 )
        goto LABEL_105;
      v160 = *(int *)(v63 + 24);
      if ( (unsigned int)v160 >= v159->max_length )
        goto LABEL_106;
      v161 = v159->m_Items[v160];
      if ( !v161 || !v157 )
        goto LABEL_105;
      CommonUI__OpenNotificationDialog_30767520(
        v157,
        title,
        v156,
        v158,
        v93,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v161->fields.dlgFontSize,
        0,
        v122,
        v91,
        0LL,
        0LL);
    }
    else
    {
      v174 = this->fields.textJson;
      if ( !v174 )
        goto LABEL_105;
      v175 = *(int *)(v63 + 24);
      if ( (unsigned int)v175 >= v174->max_length )
        goto LABEL_106;
      v176 = v174->m_Items[v175];
      if ( !v176 )
        goto LABEL_105;
      v177 = System_Int32__Parse(v176->fields.messageWidgetSizeX, 0LL);
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v180 = this->fields.textJson;
      if ( !v180 )
        goto LABEL_105;
      v181 = *(int *)(v63 + 24);
      if ( (unsigned int)v181 >= v180->max_length )
        goto LABEL_106;
      v182 = v180->m_Items[v181];
      if ( !v182 )
        goto LABEL_105;
      v183 = v182->fields.title;
      v184 = v182->fields.text;
      v185 = (CommonUI_o *)IsNullOrEmpty;
      v186 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v178, v179);
      System_Action___ctor(
        v186,
        (Il2CppObject *)v63,
        Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__9__,
        0LL);
      v187 = this->fields.textJson;
      if ( !v187 )
        goto LABEL_105;
      v188 = *(int *)(v63 + 24);
      if ( (unsigned int)v188 >= v187->max_length )
        goto LABEL_106;
      v189 = v187->m_Items[v188];
      if ( !v189 )
        goto LABEL_105;
      dlgFontSize = v189->fields.dlgFontSize;
      p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
      messageWidgetSizeX = 0LL;
      System_Nullable_int____ctor(
        p_messageWidgetSizeX,
        v177,
        (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
      if ( !v185 )
        goto LABEL_105;
      CommonUI__OpenNotificationDialog_30767520(
        v185,
        v183,
        v184,
        v186,
        v93,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        dlgFontSize,
        0,
        v122,
        v91,
        messageWidgetSizeX,
        0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity__TransitionQuest(
        EventTutorialEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B163B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v6, v7);
    byte_4B163B7 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
  if ( !byte_4B1339B )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&questId, method);
    byte_4B1339B = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v10);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


System_Int32_array_array *__fastcall EventTutorialEntity__getTargets(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_String_array *targetIds; // x8
  System_String_o *v19; // x0
  __int64 v20; // x1
  struct System_String_array *v21; // x8
  System_Int32_array_array *v22; // x20
  __int64 v23; // x25
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  EventTutorialEntity___c_c *v30; // x8
  System_Object_array *v31; // x22
  System_Converter_object__int__o *_9__4_0; // x23
  Il2CppObject *v33; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B163B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_ConvertAll_string__int___, method, v2);
    sub_1BCA7E0(&System_Converter_string__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&int_____TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__getTargets_b__4_0__, v8, v9);
    sub_1BCA7E0(&EventTutorialEntity___c_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v16, v17);
    byte_4B163B2 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1BCA888(int_____TypeInfo, 1LL);
  v19 = (System_String_o *)sub_1BCA888(int_____TypeInfo, targetIds->max_length);
  v21 = this->fields.targetIds;
  if ( !v21 )
LABEL_20:
    sub_1BCAA3C(v19, v20);
  v22 = (System_Int32_array_array *)v19;
  v23 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v19[1].monitor;
  while ( 1 )
  {
    max_length = v21->max_length;
    if ( (int)v23 >= max_length )
      return v22;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_23;
    v19 = v21->m_Items[v23];
    if ( v19 )
    {
      v19 = System_String__Replace_62420848(
              v19,
              (System_String_o *)StringLiteral_15978/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v19 )
      {
        v19 = System_String__Replace_62420848(
                v19,
                (System_String_o *)StringLiteral_16236/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v19 )
        {
          v26 = System_String__Split(v19, 0x2Cu, 0, 0LL);
          v30 = EventTutorialEntity___c_TypeInfo;
          v31 = (System_Object_array *)v26;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo, v27);
            v30 = EventTutorialEntity___c_TypeInfo;
          }
          _9__4_0 = (System_Converter_object__int__o *)v30->static_fields->__9__4_0;
          if ( !_9__4_0 )
          {
            if ( !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30, v27);
              v30 = EventTutorialEntity___c_TypeInfo;
            }
            v33 = (Il2CppObject *)v30->static_fields->__9;
            _9__4_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                           System_Converter_string__int__TypeInfo,
                                                           v27,
                                                           v28,
                                                           v29);
            System_Converter_object__int____ctor(_9__4_0, v33, Method_EventTutorialEntity___c__getTargets_b__4_0__, 0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__4_0 = (struct System_Converter_string__int__o *)_9__4_0;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
              (int64_t)_9__4_0,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          v19 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v31,
                                     (System_Converter_TInput__TOutput__o *)_9__4_0,
                                     (const MethodInfo_300B3D8 *)Method_System_Array_ConvertAll_string__int___);
          if ( v22 )
          {
            if ( (unsigned int)v23 >= v22->max_length )
LABEL_23:
              sub_1BCAA44(v19, v20);
            p_monitor->klass = (PartyOrganizationUtility_c *)v19;
            sub_1BCA784(p_monitor, (int64_t)v19, v41, v42, v43, v44, v45, v46);
            v21 = this->fields.targetIds;
            ++v23;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
            if ( v21 )
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Int32_array_array *Targets; // x21
  DataManager_o *Instance; // x0
  int32_t v29; // w8
  const MethodInfo *v30; // x5
  __int64 v31; // x8
  int v32; // w9
  System_Int32_array *v33; // x10
  int max_length; // w11
  int32_t v35; // w10
  __int64 v36; // x8
  int v37; // w9
  System_Int32_array *v38; // x10
  int32_t condType; // w8
  struct System_Int32_array *condIds; // x22
  __int64 v41; // x8
  QuestGroupMaster_o *v42; // x21
  unsigned __int64 v43; // x23
  System_Int32_array *QuestIdListByGroupId; // x0
  __int64 v45; // x8
  System_Int32_array *v46; // x9
  __int64 v47; // x8
  int v48; // w9
  System_Int32_array *v49; // x10
  int v50; // w11
  int32_t v51; // w12
  int32_t v52; // w12
  int32_t v53; // w10
  __int64 v54; // x22
  __int64 v55; // x8
  int v56; // w9
  System_Int32_array *v57; // x10
  int v58; // w11
  int32_t v59; // w12
  int32_t v60; // w10
  __int64 v61; // x1
  TerminalSceneComponent_c *v62; // x0
  struct TerminalSceneComponent_o *mInstance; // x20

  if ( (byte_4B163B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId, *(_QWORD *)&ex1);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v23, v24);
    byte_4B163B4 = 1;
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
      v36 = *(_QWORD *)&Targets->max_length;
      if ( !v36 )
        goto LABEL_4;
      if ( (int)v36 < 1 )
        goto LABEL_118;
      v37 = 0;
      while ( 2 )
      {
        v38 = Targets->m_Items[v37];
        if ( !v38 )
          goto LABEL_120;
        if ( (int)v38->max_length >= 1 && v38->m_Items[1] != qId )
        {
          ++v37;
          Instance = 0LL;
          if ( (_DWORD)v36 == v37 )
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
        v31 = *(_QWORD *)&Targets->max_length;
        if ( v31 )
        {
          if ( (int)v31 >= 1 )
          {
            v32 = 0;
            while ( 1 )
            {
              v33 = Targets->m_Items[v32];
              if ( !v33 )
                break;
              max_length = v33->max_length;
              if ( max_length < 1 )
                goto LABEL_4;
              if ( v33->m_Items[1] == qId )
              {
                if ( max_length < 2 )
                  goto LABEL_4;
                v35 = v33->m_Items[2];
                if ( v35 == ex1 || !v35 )
                  goto LABEL_4;
              }
              ++v32;
              Instance = 0LL;
              if ( (_DWORD)v31 == v32 )
                return (char)Instance;
            }
LABEL_120:
            sub_1BCAA3C(Instance, v25);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v41 = *(_QWORD *)&condIds->max_length;
      if ( (int)v41 < 1 )
        goto LABEL_118;
      v42 = (QuestGroupMaster_o *)Instance;
      v43 = 0LL;
      while ( v43 < (unsigned int)v41 )
      {
        if ( !v42 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v42, condIds->m_Items[v43 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v41) = condIds->max_length;
        ++v43;
        Instance = 0LL;
        if ( (__int64)v43 >= (int)v41 )
          return (char)Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v47 = *(_QWORD *)&Targets->max_length;
      if ( !v47 )
        goto LABEL_4;
      if ( (int)v47 < 1 )
        goto LABEL_118;
      v48 = 0;
      while ( 2 )
      {
        v49 = Targets->m_Items[v48];
        if ( !v49 )
          goto LABEL_120;
        v50 = v49->max_length;
        if ( v50 >= 1 )
        {
          if ( v49->m_Items[1] != qId
            || v50 >= 2
            && ((v51 = v49->m_Items[2], v51 != ex1) && v51
             || v50 >= 3
             && ((v52 = v49->m_Items[3], v52 != ex2) && v52 || v50 >= 4 && (v53 = v49->m_Items[4], v53 != ex3) && v53)) )
          {
            ++v48;
            Instance = 0LL;
            if ( (_DWORD)v47 == v48 )
              return (char)Instance;
            continue;
          }
        }
        goto LABEL_4;
      }
    case 0x2E:
      if ( !Targets )
        goto LABEL_4;
      v55 = *(_QWORD *)&Targets->max_length;
      if ( !v55 || (int)v55 < 1 )
        goto LABEL_4;
      v56 = 0;
      while ( 2 )
      {
        v57 = Targets->m_Items[v56];
        if ( !v57 )
          goto LABEL_120;
        v58 = v57->max_length;
        if ( v58 < 1 )
          goto LABEL_118;
        if ( v57->m_Items[1] != qId )
          goto LABEL_94;
        if ( v58 < 2 )
          goto LABEL_118;
        v59 = v57->m_Items[2];
        if ( v59 != ex1 )
        {
          if ( v59 )
            goto LABEL_94;
        }
        if ( v58 < 3 )
          goto LABEL_118;
        v60 = v57->m_Items[3];
        Instance = 0LL;
        if ( v60 != ex2 )
        {
          if ( v60 )
          {
LABEL_94:
            if ( (_DWORD)v55 == ++v56 )
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
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v25);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
        goto LABEL_118;
      goto LABEL_4;
    case 0x37:
      if ( this->fields.condType != 95 )
        goto LABEL_118;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v25);
      if ( !CondType__IsSvtEquipFriendShipHaving(0LL) )
      {
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v61);
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
      v45 = *(_QWORD *)&Targets->max_length;
      if ( !v45 )
        goto LABEL_4;
      if ( (_DWORD)v45 != 1 )
      {
        if ( (int)v45 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_74;
      }
      v46 = Targets->m_Items[0];
      if ( !v46 )
        goto LABEL_120;
      if ( v46->max_length != 1 || v46->m_Items[1] )
      {
LABEL_74:
        v54 = 0LL;
        while ( (unsigned int)v54 < (unsigned int)v45 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v54];
          if ( !Instance )
            goto LABEL_120;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v45) = Targets->max_length;
          ++v54;
          Instance = 0LL;
          if ( (int)v54 >= (int)v45 )
            return (char)Instance;
        }
LABEL_121:
        sub_1BCAA44(Instance, v25);
      }
LABEL_4:
      v29 = this->fields.condType;
      LOBYTE(Instance) = 1;
      if ( v29 && v29 != 11 )
      {
        if ( v29 == 95 )
        {
          LOBYTE(Instance) = 1;
        }
        else
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
          LOBYTE(Instance) = EventTutorialCondMaster__isEnableExtCondition(
                               (EventTutorialCondMaster_o *)Instance,
                               this->fields.eventId,
                               this->fields.flagType,
                               this->fields.num,
                               this,
                               v30);
        }
      }
      return (char)Instance;
    case 0x43:
      if ( !Targets || !*(_QWORD *)&Targets->max_length )
        goto LABEL_4;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v25);
      if ( !byte_4B10F83 )
      {
        sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v25, v26);
        byte_4B10F83 = 1;
      }
      v62 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v25);
        v62 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v62->static_fields->mInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
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

  if ( (byte_4B163B3 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, *(_QWORD *)&qId, *(_QWORD *)&ex1);
    byte_4B163B3 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&qId);
  return !TutorialFlag__Get_38437060(flagType, eventId, 0LL)
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B163C0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTutorialEntity___c_TypeInfo, v1, v2);
    byte_4B163C0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTutorialEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventTutorialEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v3);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventTutorialEntity___c__DisplayClass11_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v11; // x8
  System_String_o *text; // x21
  System_Action_o *_9__4; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v5 = this;
  if ( (byte_4B163C1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, dialog, method);
    this = (EventTutorialEntity___c__DisplayClass11_0_o *)sub_1BCA7E0(
                                                            &Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__4__,
                                                            v6,
                                                            v7);
    byte_4B163C1 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v5->fields.idx;
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1BCAA44(this, dialog);
  v11 = textJson->m_Items[idx];
  if ( !v11 )
    goto LABEL_11;
  text = v11->fields.text;
  _9__4 = v5->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, dialog, method, v3);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass11_0__TextTutorialChain_b__4__,
      0LL);
    v5->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__4, (int64_t)_9__4, v14, v15, v16, v17, v18, v19);
  }
  if ( !dialog )
LABEL_11:
    sub_1BCAA3C(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__4, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B163C2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass11_1__TextTutorialChain_b__7__, v8, v9);
    sub_1BCA7E0(&EventTutorialEntity___c__DisplayClass11_1_TypeInfo, v10, v11);
    byte_4B163C2 = 1;
  }
  v12 = sub_1BCAA2C(EventTutorialEntity___c__DisplayClass11_1_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_EventTutorialEntity___c__DisplayClass11_1__TextTutorialChain_b__7__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass11_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
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


void __fastcall EventTutorialEntity___c__DisplayClass11_1___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass11_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTutorialEntity___c__DisplayClass11_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventTutorialEntity___c__DisplayClass11_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v10; // x8
  int32_t questId; // w20
  const MethodInfo *v12; // x4
  struct EventTutorialEntity___c__DisplayClass11_0_o *v13; // x8

  v3 = this;
  if ( (byte_4B163C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, method, v2);
    this = (EventTutorialEntity___c__DisplayClass11_1_o *)sub_1BCA7E0(
                                                            &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                            v4,
                                                            v5);
    byte_4B163C3 = 1;
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
    sub_1BCAA44(this, method);
  v10 = textJson->m_Items[idx];
  if ( !v10 )
    goto LABEL_14;
  questId = v10->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass11_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_14;
  QuestTree__UpdateQuestInfo((QuestTree_o *)this, questId, 0LL);
  v13 = v3->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_14;
  if ( v3->fields.isDecide )
  {
    ActionExtensions__Call_int_(
      (System_Action_T__o *)v13->fields.transitionQuest,
      questId,
      (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass11_1_o *)v13->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1BCAA3C(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v13->fields.idx + 1,
    v13->fields.callback,
    v13->fields.transitionQuest,
    v12);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B163C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B163C4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *_9__3; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Request_object; // x0
  __int64 v19; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4B163C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__3__, v9, v10);
    byte_4B163C5 = 1;
  }
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass8_0__OpenTutorial_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v12, v13, v14, v15, v16, v17);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Request_object = NetworkManager__getRequest_object_(
                     _9__3,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1BCAA3C(Request_object, v19);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass8_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass8_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  __int64 v27; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4B163C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventTutorialEntity___c__DisplayClass8_1__OpenTutorial_b__4__, v10, v11);
    sub_1BCA7E0(&EventTutorialEntity___c__DisplayClass8_1_TypeInfo, v12, v13);
    byte_4B163C7 = 1;
  }
  v14 = sub_1BCAA2C(EventTutorialEntity___c__DisplayClass8_1_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 16) = questId;
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v23, v24, v25);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v14,
    Method_EventTutorialEntity___c__DisplayClass8_1__OpenTutorial_b__4__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Request_object = NetworkManager__getRequest_object_(
                     v26,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1BCAA3C(Request_object, v16);
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

  if ( (byte_4B163C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result, method);
    byte_4B163C6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
    sub_1BCAA3C(this, result);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B163C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B163C8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B163C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B163C9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}