void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB48A0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB48A0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4BB489F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagType);
    byte_4BB489F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_2F8DB20 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4BB489B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17414/*"battle_svt_id"*/, method);
    byte_4BB489B = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17414/*"battle_svt_id"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB489A & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17415/*"battle_turn"*/, method);
    byte_4BB489A = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17415/*"battle_turn"*/, 0LL);
}


System_String_o *__fastcall EventTutorialEntity__GetDialogPrefabName(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB489E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18903/*"detailTitleFontSize"*/, method);
    byte_4BB489E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18903/*"detailTitleFontSize"*/, 0LL, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t __fastcall EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB489D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23292/*"resourceSource"*/, method);
    byte_4BB489D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23292/*"resourceSource"*/, 0, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4899 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17415/*"battle_turn"*/, method);
    byte_4BB4899 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17415/*"battle_turn"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB489C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23292/*"resourceSource"*/, method);
    byte_4BB489C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23292/*"resourceSource"*/, 0LL);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v33; // x0
  System_Int32_array *v34; // x21
  int32_t eventId; // w19
  int32_t flagType; // w22
  EventTutorialEntity_Fields *p_fields; // t2
  CommonUI_o *v38; // x23
  System_Action_o *v39; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v41; // x21
  System_Action_int__o *v42; // x22
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x1
  Il2CppObject *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  System_String_o *v50; // x22
  const MethodInfo *v51; // x1
  System_String_o *DialogPrefabName; // x19
  System_Action_object__o *v53; // x23
  int32_t v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB4895 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_EventCommonImageDialog__TypeInfo, callback);
    sub_1C13D24(&System_Action_int__TypeInfo, v5);
    sub_1C13D24(&System_Action_TypeInfo, v6);
    sub_1C13D24(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___, v7);
    sub_1C13D24(&int_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__0__, v11);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__1__, v12);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__2__, v13);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__3__, v14);
    sub_1C13D24(&EventTutorialEntity___c__DisplayClass9_0_TypeInfo, v15);
    sub_1C13D24(&StringLiteral_6389/*"EventUI/Prefabs/80381"*/, v16);
    byte_4BB4895 = 1;
  }
  v17 = sub_1C13F70(EventTutorialEntity___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = this->fields.imageIds;
    p_fields = &this->fields;
    eventId = this->fields.eventId;
    flagType = p_fields->flagType;
    v38 = (CommonUI_o *)v33;
    v39 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__0__,
      0LL);
    if ( v38 )
    {
      CommonUI__OpenTutorialImageDialog_31097088(v38, v34, flagType, eventId, v39, 0LL, 0LL, 0LL);
      return;
    }
LABEL_18:
    sub_1C13F80(Instance, v19);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v41 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__1__,
      0LL);
    v42 = (System_Action_int__o *)sub_1C13F70(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v42,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__2__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v41, v42, v43);
  }
  else if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0LL)
         || !EventTutorialEntity__GetDialogPrefabName(this, v44) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
  }
  else
  {
    v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v54 = this->fields.eventId;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v46, v47, v48);
    v50 = System_String__Format((System_String_o *)StringLiteral_6389/*"EventUI/Prefabs/80381"*/, v49, 0LL);
    DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this, v51);
    v53 = (System_Action_object__o *)sub_1C13F70(System_Action_EventCommonImageDialog__TypeInfo);
    System_Action_object____ctor(
      v53,
      (Il2CppObject *)v17,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__3__,
      0LL);
    if ( !v45 )
      goto LABEL_18;
    CommonUI__LoadAndCreateDialog_object_(
      (CommonUI_o *)v45,
      v50,
      DialogPrefabName,
      (System_Action_T__o *)v53,
      (const MethodInfo_2F85C8C *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v22; // x0
  System_Int32_array *v23; // x19
  CommonUI_o *v24; // x21
  System_Action_o *v25; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v27; // x21
  System_Action_int__o *v28; // x20
  const MethodInfo *v29; // x4

  if ( (byte_4BB4896 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_int__TypeInfo, callback);
    sub_1C13D24(&System_Action_TypeInfo, v5);
    sub_1C13D24(&Method_EventTutorialEntity_TransitionQuest__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__0__, v9);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__1__, v10);
    sub_1C13D24(&EventTutorialEntity___c__DisplayClass10_0_TypeInfo, v11);
    byte_4BB4896 = 1;
  }
  v12 = sub_1C13F70(EventTutorialEntity___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = this->fields.imageIds;
    v24 = (CommonUI_o *)v22;
    v25 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v24 )
    {
      CommonUI__OpenTutorialImageDialog_31097088(v24, v23, -1, 0, v25, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1C13F80(Instance, v14);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v27 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v12,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v28 = (System_Action_int__o *)sub_1C13F70(System_Action_int__TypeInfo);
    System_Action_int____ctor(v28, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v27, v28, v29);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x19
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v58; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v60; // x8
  struct System_Int32_array *textPos; // x9
  float v62; // s9
  __int64 v63; // x10
  char v64; // w27
  float v65; // s10
  float v66; // s8
  struct System_Int32_array *ptPos; // x9
  __int64 v68; // x10
  float v69; // s11
  System_String_o *scrDlgTitle; // x21
  int spacingY; // w22
  struct EventTutorialEntity_TextTuto_array *v72; // x8
  __int64 v73; // x9
  EventTutorialEntity_TextTuto_o *v74; // x8
  Il2CppObject *Instance; // x20
  System_Action_object__o *v76; // x21
  struct EventTutorialEntity_TextTuto_array *v77; // x8
  __int64 v78; // x9
  EventTutorialEntity_TextTuto_o *v79; // x8
  System_String_o *text; // x22
  CommonUI_o *v81; // x20
  ScrollMessageDialog_ClickDelegate_o *v82; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v85; // w20
  CommonUI_o *v86; // x22
  System_Action_o *v87; // x23
  int v88; // w21
  struct EventTutorialEntity_TextTuto_array *v89; // x8
  __int64 v90; // x9
  EventTutorialEntity_TextTuto_o *v91; // x8
  CommonUI_o *v92; // x22
  System_String_o *v93; // x23
  System_String_o *Empty; // x24
  System_String_o *v95; // x25
  System_String_o *v96; // x26
  CommonConfirmDialog_ClickDelegate_o *v97; // x27
  struct EventTutorialEntity_TextTuto_array *v98; // x8
  __int64 v99; // x9
  EventTutorialEntity_TextTuto_o *v100; // x8
  Il2CppObject *v101; // x21
  System_Action_o *v102; // x22
  Il2CppObject *Master_object; // x0
  int32_t eventId; // w20
  SelectBonusBaseMaster_o *v105; // x21
  System_Action_o *v106; // x22
  struct EventTutorialEntity_TextTuto_array *v107; // x8
  __int64 v108; // x9
  EventTutorialEntity_TextTuto_o *v109; // x8
  System_String_o *title; // x23
  System_String_o *v111; // x24
  CommonUI_o *v112; // x22
  System_Action_o *v113; // x25
  struct EventTutorialEntity_TextTuto_array *v114; // x8
  __int64 v115; // x9
  EventTutorialEntity_TextTuto_o *v116; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v118; // x10
  int monitor; // w9
  UnityEngine_Rect_array *v120; // x22
  int v121; // w8
  bool v122; // w11
  __int64 v123; // x12
  EventTutorialEntity_TextTuto_o *v124; // x10
  struct EventTutorialEntity_RectData_array *v125; // x10
  int v126; // w12
  int32x4_t *v127; // x10
  int32_t v128; // w23
  struct EventTutorialEntity_TextTuto_array *v129; // x8
  __int64 v130; // x9
  EventTutorialEntity_TextTuto_o *v131; // x8
  int32_t v132; // w25
  struct EventTutorialEntity_TextTuto_array *v133; // x8
  __int64 v134; // x9
  EventTutorialEntity_TextTuto_o *v135; // x8
  System_String_o *v136; // x23
  System_String_o *v137; // x24
  CommonUI_o *v138; // x22
  System_Action_o *v139; // x26
  struct EventTutorialEntity_TextTuto_array *v140; // x8
  __int64 v141; // x9
  EventTutorialEntity_TextTuto_o *v142; // x8
  int32_t dlgFontSize; // w19
  struct EventTutorialEntity_TextTuto_array *v144; // x8
  __int64 v145; // x9
  EventTutorialEntity_TextTuto_o *v146; // x8
  struct EventTutorialEntity_TextTuto_array *v147; // x8
  __int64 v148; // x9
  EventTutorialEntity_TextTuto_o *v149; // x8
  System_String_o *v150; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v152; // x20
  System_Action_o *v153; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  System_Nullable_int__o p_messageWidgetSizeX; // 0:x0.8
  UnityEngine_Vector2_o v156; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v157; // 0:s2.4,4:s3.4,8:s4.4

  if ( (byte_4BB4898 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_FortificationNotifyDialog__TypeInfo, *(_QWORD *)&idx);
    sub_1C13D24(&System_Action_TypeInfo, v9);
    sub_1C13D24(&ScrollMessageDialog_ClickDelegate_TypeInfo, v10);
    sub_1C13D24(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1C13D24(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_SelectBonusBaseMaster___, v13);
    sub_1C13D24(&DataManager_TypeInfo, v14);
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    sub_1C13D24(&Method_System_Nullable_int___ctor__, v16);
    sub_1C13D24(&UnityEngine_Rect___TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1C13D24(&string_TypeInfo, v19);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__0__, v20);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__10__, v21);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__1__, v22);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__2__, v23);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__3__, v24);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__5__, v25);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__6__, v26);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__8__, v27);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__9__, v28);
    sub_1C13D24(&EventTutorialEntity___c__DisplayClass12_0_TypeInfo, v29);
    sub_1C13D24(&StringLiteral_11094/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_TITLE"*/, v30);
    sub_1C13D24(&StringLiteral_21413/*"lavender"*/, v31);
    sub_1C13D24(&StringLiteral_6387/*"EventUI/Prefabs/80285"*/, v32);
    sub_1C13D24(&StringLiteral_6962/*"FortificationAutomaticDialog"*/, v33);
    sub_1C13D24(&StringLiteral_23320/*"reverseMyDeckSvtPosition"*/, v34);
    sub_1C13D24(&StringLiteral_11095/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, v35);
    byte_4BB4898 = 1;
  }
  v36 = sub_1C13F70(EventTutorialEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_105;
  *(_QWORD *)(v36 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)this, v39, v40, v41, v42, v43, v44);
  *(_DWORD *)(v36 + 24) = idx;
  *(_QWORD *)(v36 + 32) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)callback, v45, v46, v47, v48, v49, v50);
  *(_QWORD *)(v36 + 40) = transitionQuest;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 40), (int64_t)transitionQuest, v51, v52, v53, v54, v55, v56);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_105;
  v58 = *(int *)(v36 + 24);
  max_length = textJson->max_length;
  if ( (int)v58 >= max_length )
    goto LABEL_39;
  if ( (unsigned int)v58 >= max_length )
    goto LABEL_106;
  v60 = textJson->m_Items[v58];
  if ( !v60 )
    goto LABEL_105;
  textPos = v60->fields.textPos;
  v62 = 0.0;
  if ( !textPos )
  {
    v64 = 1;
    goto LABEL_13;
  }
  v63 = *(_QWORD *)&textPos->max_length;
  v64 = (_DWORD)v63 == 0;
  if ( !v63 )
  {
LABEL_13:
    v66 = 0.0;
    v65 = 0.0;
    goto LABEL_14;
  }
  if ( (unsigned int)v63 < 2 )
    goto LABEL_106;
  v65 = (float)textPos->m_Items[1];
  v66 = (float)textPos->m_Items[2];
LABEL_14:
  ptPos = v60->fields.ptPos;
  if ( ptPos )
  {
    v68 = *(_QWORD *)&ptPos->max_length;
    v69 = 0.0;
    if ( v68 )
    {
      if ( (unsigned int)v68 < 2 )
        goto LABEL_106;
      v69 = (float)ptPos->m_Items[1];
      v62 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v69 = 0.0;
  }
  scrDlgTitle = v60->fields.scrDlgTitle;
  spacingY = v60->fields.spacingY;
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v77 = this->fields.textJson;
    if ( !v77 )
      goto LABEL_105;
    v78 = *(int *)(v36 + 24);
    if ( (unsigned int)v78 >= v77->max_length )
      goto LABEL_106;
    v79 = v77->m_Items[v78];
    if ( !v79 )
      goto LABEL_105;
    text = v79->fields.text;
    v81 = (CommonUI_o *)IsNullOrEmpty;
    v82 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C13F70(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v82,
      (Il2CppObject *)v36,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v81 )
      goto LABEL_105;
    CommonUI__OpenScrollMessageDialog(v81, scrDlgTitle, text, 10, v82, 0, 0, 0LL);
    return;
  }
  v72 = this->fields.textJson;
  if ( !v72 )
    goto LABEL_105;
  v73 = *(int *)(v36 + 24);
  if ( (unsigned int)v73 >= v72->max_length )
    goto LABEL_106;
  v74 = v72->m_Items[v73];
  if ( !v74 )
    goto LABEL_105;
  if ( v74->fields.isFortification )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v76 = (System_Action_object__o *)sub_1C13F70(System_Action_FortificationNotifyDialog__TypeInfo);
    System_Action_object____ctor(
      v76,
      (Il2CppObject *)v36,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__LoadAndCreateDialog_object_(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_6387/*"EventUI/Prefabs/80285"*/,
        (System_String_o *)StringLiteral_6962/*"FortificationAutomaticDialog"*/,
        (System_Action_T__o *)v76,
        (const MethodInfo_2F85C8C *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      return;
    }
LABEL_105:
    sub_1C13F80(IsNullOrEmpty, v38);
  }
  if ( v74->fields.isClassBoardRelease )
  {
    releaseClassBoardBaseIds = v74->fields.releaseClassBoardBaseIds;
    if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
    {
      addClassIds = v74->fields.addClassIds;
      if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
      {
        IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( releaseClassBoardBaseIds->max_length )
        {
          v85 = releaseClassBoardBaseIds->m_Items[1];
          v86 = (CommonUI_o *)IsNullOrEmpty;
          v87 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(
            v87,
            (Il2CppObject *)v36,
            Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__5__,
            0LL);
          if ( !v86 )
            goto LABEL_105;
          CommonUI__OpenClassBoardAddClassDialog(v86, v85, addClassIds, v87, 0LL);
          return;
        }
        goto LABEL_106;
      }
      v101 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v102 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v102,
        (Il2CppObject *)v36,
        Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__6__,
        0LL);
      if ( !v101 )
        goto LABEL_105;
      CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)v101, releaseClassBoardBaseIds, v102, 0LL);
      return;
    }
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v36 + 32), 0LL);
    return;
  }
  v88 = spacingY & ~(spacingY >> 31);
  if ( v74->fields.isQuestRelease )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v89 = this->fields.textJson;
    if ( !v89 )
      goto LABEL_105;
    v90 = *(int *)(v36 + 24);
    if ( (unsigned int)v90 >= v89->max_length )
      goto LABEL_106;
    v91 = v89->m_Items[v90];
    if ( !v91 )
      goto LABEL_105;
    v92 = (CommonUI_o *)IsNullOrEmpty;
    v93 = v91->fields.text;
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v95 = LocalizationManager__Get((System_String_o *)StringLiteral_11095/*"QUEST_MESSAGE_DLG_QUEST_RESET_CANCEL"*/, 0LL);
    v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"QUEST_MESSAGE_DLG_MOVIE_PLAY_TITLE"*/, 0LL);
    v97 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C13F70(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v97,
      (Il2CppObject *)v36,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__2__,
      0LL);
    v98 = this->fields.textJson;
    if ( !v98 )
      goto LABEL_105;
    v99 = *(int *)(v36 + 24);
    if ( (unsigned int)v99 >= v98->max_length )
      goto LABEL_106;
    v100 = v98->m_Items[v99];
    if ( !v100 || !v92 )
      goto LABEL_105;
    CommonUI__OpenConfirmDecideDlg(
      v92,
      Empty,
      v93,
      v95,
      v96,
      v97,
      v100->fields.dlgFontSize,
      0.0,
      15.0,
      v88,
      0,
      0,
      240,
      0,
      0,
      0,
      0,
      0LL);
  }
  else if ( v74->fields.isSelectBonus )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    eventId = this->fields.eventId;
    v105 = (SelectBonusBaseMaster_o *)Master_object;
    v106 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v106,
      (Il2CppObject *)v36,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__3__,
      0LL);
    if ( !v105 )
      goto LABEL_105;
    SelectBonusBaseMaster__OpenSelectBonusDialog(v105, eventId, v106, 0LL);
  }
  else if ( v74->fields.dlgFontSize < 1 )
  {
    rects = v74->fields.rects;
    if ( !rects )
      goto LABEL_105;
    IsNullOrEmpty = (Il2CppObject *)sub_1C13DCC(UnityEngine_Rect___TypeInfo, rects->max_length);
    if ( !IsNullOrEmpty )
      goto LABEL_105;
    v118 = this->fields.textJson;
    if ( !v118 )
      goto LABEL_105;
    monitor = (int)IsNullOrEmpty[1].monitor;
    v120 = (UnityEngine_Rect_array *)IsNullOrEmpty;
    v121 = 1;
    v122 = monitor > 0;
    while ( 1 )
    {
      v123 = *(int *)(v36 + 24);
      if ( (unsigned int)v123 >= v118->max_length )
        goto LABEL_106;
      v124 = v118->m_Items[v123];
      if ( !v124 )
        goto LABEL_105;
      if ( !v122 )
        break;
      v125 = v124->fields.rects;
      if ( !v125 )
        goto LABEL_105;
      v126 = v121 - 1;
      if ( v121 - 1 >= v125->max_length )
        goto LABEL_106;
      v127 = (int32x4_t *)v125->m_Items[v126];
      if ( !v127 )
        goto LABEL_105;
      if ( v126 >= (unsigned int)monitor )
        goto LABEL_106;
      IsNullOrEmpty[v126 + 2] = (Il2CppObject)vcvtq_f32_s32(v127[1]);
      monitor = (int)IsNullOrEmpty[1].monitor;
      v118 = this->fields.textJson;
      v122 = v121++ < monitor;
      if ( !v118 )
        goto LABEL_105;
    }
    IsNullOrEmpty = (Il2CppObject *)BasicHelper__EqualExceptNullOrEmpty(
                                      v124->fields.textAlign,
                                      (System_String_o *)StringLiteral_21413/*"lavender"*/,
                                      0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      v128 = 1;
    }
    else
    {
      v144 = this->fields.textJson;
      if ( !v144 )
        goto LABEL_105;
      v145 = *(int *)(v36 + 24);
      if ( (unsigned int)v145 >= v144->max_length )
        goto LABEL_106;
      v146 = v144->m_Items[v145];
      if ( !v146 )
        goto LABEL_105;
      if ( BasicHelper__EqualExceptNullOrEmpty(v146->fields.textAlign, (System_String_o *)StringLiteral_23320/*"reverseMyDeckSvtPosition"*/, 0LL) )
        v128 = 3;
      else
        v128 = 2;
    }
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v147 = this->fields.textJson;
    if ( !v147 )
      goto LABEL_105;
    v148 = *(int *)(v36 + 24);
    if ( (unsigned int)v148 >= v147->max_length )
LABEL_106:
      sub_1C13F88(IsNullOrEmpty, v38);
    v149 = v147->m_Items[v148];
    if ( !v149 )
      goto LABEL_105;
    v150 = v149->fields.text;
    dlgBgId = v149->fields.dlgBgId;
    v152 = (CommonUI_o *)IsNullOrEmpty;
    v153 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v153,
      (Il2CppObject *)v36,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__10__,
      0LL);
    if ( !v152 )
      goto LABEL_105;
    v157.fields.z = 0.0;
    v156.fields.x = v65;
    v156.fields.y = v66;
    v157.fields.x = v69;
    v157.fields.y = v62;
    CommonUI__OpenEventTutorialNotificationDialog(v152, v150, v120, v156, v157, dlgBgId, v128, v153, 0LL, v88, 0LL);
  }
  else
  {
    IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(v74->fields.messageWidgetSizeX, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v107 = this->fields.textJson;
      if ( !v107 )
        goto LABEL_105;
      v108 = *(int *)(v36 + 24);
      if ( (unsigned int)v108 >= v107->max_length )
        goto LABEL_106;
      v109 = v107->m_Items[v108];
      if ( !v109 )
        goto LABEL_105;
      title = v109->fields.title;
      v111 = v109->fields.text;
      v112 = (CommonUI_o *)IsNullOrEmpty;
      v113 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v113,
        (Il2CppObject *)v36,
        Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__8__,
        0LL);
      v114 = this->fields.textJson;
      if ( !v114 )
        goto LABEL_105;
      v115 = *(int *)(v36 + 24);
      if ( (unsigned int)v115 >= v114->max_length )
        goto LABEL_106;
      v116 = v114->m_Items[v115];
      if ( !v116 || !v112 )
        goto LABEL_105;
      CommonUI__OpenNotificationDialog_31071784(
        v112,
        title,
        v111,
        v113,
        v66,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v116->fields.dlgFontSize,
        0,
        v88,
        v64,
        0LL,
        0LL);
    }
    else
    {
      v129 = this->fields.textJson;
      if ( !v129 )
        goto LABEL_105;
      v130 = *(int *)(v36 + 24);
      if ( (unsigned int)v130 >= v129->max_length )
        goto LABEL_106;
      v131 = v129->m_Items[v130];
      if ( !v131 )
        goto LABEL_105;
      v132 = System_Int32__Parse(v131->fields.messageWidgetSizeX, 0LL);
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v133 = this->fields.textJson;
      if ( !v133 )
        goto LABEL_105;
      v134 = *(int *)(v36 + 24);
      if ( (unsigned int)v134 >= v133->max_length )
        goto LABEL_106;
      v135 = v133->m_Items[v134];
      if ( !v135 )
        goto LABEL_105;
      v136 = v135->fields.title;
      v137 = v135->fields.text;
      v138 = (CommonUI_o *)IsNullOrEmpty;
      v139 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
      System_Action___ctor(
        v139,
        (Il2CppObject *)v36,
        Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__9__,
        0LL);
      v140 = this->fields.textJson;
      if ( !v140 )
        goto LABEL_105;
      v141 = *(int *)(v36 + 24);
      if ( (unsigned int)v141 >= v140->max_length )
        goto LABEL_106;
      v142 = v140->m_Items[v141];
      if ( !v142 )
        goto LABEL_105;
      dlgFontSize = v142->fields.dlgFontSize;
      p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
      messageWidgetSizeX = 0LL;
      System_Nullable_int____ctor(
        p_messageWidgetSizeX,
        v132,
        (const MethodInfo_37493FC *)Method_System_Nullable_int___ctor__);
      if ( !v138 )
        goto LABEL_105;
      CommonUI__OpenNotificationDialog_31071784(
        v138,
        v136,
        v137,
        v139,
        v66,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        dlgFontSize,
        0,
        v88,
        v64,
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
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BB4897 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, *(_QWORD *)&questId);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v5);
    byte_4BB4897 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1834 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, *(_QWORD *)&questId);
    byte_4BB1834 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C13F80(Instance, v8);
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
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v18; // x0
  EventTutorialEntity___c_c *v19; // x8
  System_Object_array *v20; // x22
  System_Converter_object__int__o *_9__5_0; // x23
  Il2CppObject *v22; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB4892 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_ConvertAll_string__int___, method);
    sub_1C13D24(&System_Converter_string__int__TypeInfo, v3);
    sub_1C13D24(&int_____TypeInfo, v4);
    sub_1C13D24(&Method_EventTutorialEntity___c__getTargets_b__5_0__, v5);
    sub_1C13D24(&EventTutorialEntity___c_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_16061/*"You must call the Bind method before performing this operation."*/, v7);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    sub_1C13D24(&StringLiteral_16320/*"\\p{_xmlI}"*/, v9);
    byte_4BB4892 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C13DCC(int_____TypeInfo, 1LL);
  v11 = (System_String_o *)sub_1C13DCC(int_____TypeInfo, targetIds->max_length);
  v13 = this->fields.targetIds;
  if ( !v13 )
LABEL_20:
    sub_1C13F80(v11, v12);
  v14 = (System_Int32_array_array *)v11;
  v15 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v11[1].monitor;
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
      v11 = System_String__Replace_62987572(
              v11,
              (System_String_o *)StringLiteral_16061/*"You must call the Bind method before performing this operation."*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v11 )
      {
        v11 = System_String__Replace_62987572(
                v11,
                (System_String_o *)StringLiteral_16320/*"\\p{_xmlI}"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        if ( v11 )
        {
          v18 = System_String__Split(v11, 0x2Cu, 0, 0LL);
          v19 = EventTutorialEntity___c_TypeInfo;
          v20 = (System_Object_array *)v18;
          if ( !EventTutorialEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventTutorialEntity___c_TypeInfo);
            v19 = EventTutorialEntity___c_TypeInfo;
          }
          _9__5_0 = (System_Converter_object__int__o *)v19->static_fields->__9__5_0;
          if ( !_9__5_0 )
          {
            if ( !v19->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v19);
              v19 = EventTutorialEntity___c_TypeInfo;
            }
            v22 = (Il2CppObject *)v19->static_fields->__9;
            _9__5_0 = (System_Converter_object__int__o *)sub_1C13F70(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__5_0, v22, Method_EventTutorialEntity___c__getTargets_b__5_0__, 0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__5_0 = (struct System_Converter_string__int__o *)_9__5_0;
            sub_1C13CC8(
              (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
              (int64_t)_9__5_0,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
          }
          v11 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                     v20,
                                     (System_Converter_TInput__TOutput__o *)_9__5_0,
                                     (const MethodInfo_3088B70 *)Method_System_Array_ConvertAll_string__int___);
          if ( v14 )
          {
            if ( (unsigned int)v15 >= v14->max_length )
LABEL_23:
              sub_1C13F88(v11, v12);
            p_monitor->klass = (PartyOrganizationUtility_c *)v11;
            sub_1C13CC8(p_monitor, (int64_t)v11, v30, v31, v32, v33, v34, v35);
            v13 = this->fields.targetIds;
            ++v15;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
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
  __int64 v46; // x22
  __int64 v47; // x8
  int v48; // w9
  System_Int32_array *v49; // x10
  int v50; // w11
  int32_t v51; // w12
  int32_t v52; // w10
  TerminalSceneComponent_c *v53; // x0
  struct TerminalSceneComponent_o *mInstance; // x20

  if ( (byte_4BB4894 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_IndexOf_int___, *(_QWORD *)&qId);
    sub_1C13D24(&CondType_TypeInfo, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventTutorialCondMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, v13);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C13D24(&TerminalSceneComponent_TypeInfo, v17);
    byte_4BB4894 = 1;
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
        goto LABEL_118;
      v29 = 0;
      while ( 2 )
      {
        v30 = Targets->m_Items[v29];
        if ( !v30 )
          goto LABEL_120;
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
LABEL_120:
            sub_1C13F80(Instance, v18);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      condIds = this->fields.condIds;
      if ( !condIds )
        goto LABEL_120;
      v33 = *(_QWORD *)&condIds->max_length;
      if ( (int)v33 < 1 )
        goto LABEL_118;
      v34 = (QuestGroupMaster_o *)Instance;
      v35 = 0LL;
      while ( v35 < (unsigned int)v33 )
      {
        if ( !v34 )
          goto LABEL_120;
        QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(v34, condIds->m_Items[v35 + 1], 2, 0LL);
        if ( (System_Array__IndexOf_int_(
                QuestIdListByGroupId,
                qId,
                (const MethodInfo_308C194 *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
          goto LABEL_4;
        LODWORD(v33) = condIds->max_length;
        ++v35;
        Instance = 0LL;
        if ( (__int64)v35 >= (int)v33 )
          return (char)Instance;
      }
      goto LABEL_121;
    case 6:
    case 0x1B:
      if ( !Targets )
        goto LABEL_4;
      v39 = *(_QWORD *)&Targets->max_length;
      if ( !v39 )
        goto LABEL_4;
      if ( (int)v39 < 1 )
        goto LABEL_118;
      v40 = 0;
      while ( 2 )
      {
        v41 = Targets->m_Items[v40];
        if ( !v41 )
          goto LABEL_120;
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
      v47 = *(_QWORD *)&Targets->max_length;
      if ( !v47 || (int)v47 < 1 )
        goto LABEL_4;
      v48 = 0;
      while ( 2 )
      {
        v49 = Targets->m_Items[v48];
        if ( !v49 )
          goto LABEL_120;
        v50 = v49->max_length;
        if ( v50 < 1 )
          goto LABEL_118;
        if ( v49->m_Items[1] != qId )
          goto LABEL_94;
        if ( v50 < 2 )
          goto LABEL_118;
        v51 = v49->m_Items[2];
        if ( v51 != ex1 )
        {
          if ( v51 )
            goto LABEL_94;
        }
        if ( v50 < 3 )
          goto LABEL_118;
        v52 = v49->m_Items[3];
        Instance = 0LL;
        if ( v52 != ex2 )
        {
          if ( v52 )
          {
LABEL_94:
            if ( (_DWORD)v47 == ++v48 )
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
      v37 = *(_QWORD *)&Targets->max_length;
      if ( !v37 )
        goto LABEL_4;
      if ( (_DWORD)v37 != 1 )
      {
        if ( (int)v37 < 1 )
        {
LABEL_118:
          LOBYTE(Instance) = 0;
          return (char)Instance;
        }
        goto LABEL_74;
      }
      v38 = Targets->m_Items[0];
      if ( !v38 )
        goto LABEL_120;
      if ( v38->max_length != 1 || v38->m_Items[1] )
      {
LABEL_74:
        v46 = 0LL;
        while ( (unsigned int)v46 < (unsigned int)v37 )
        {
          Instance = (DataManager_o *)Targets->m_Items[v46];
          if ( !Instance )
            goto LABEL_120;
          if ( SLODWORD(Instance->fields.m_CancellationTokenSource) < 1
            || System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                 qId,
                 (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
          {
            goto LABEL_4;
          }
          LODWORD(v37) = Targets->max_length;
          ++v46;
          Instance = 0LL;
          if ( (int)v46 >= (int)v37 )
            return (char)Instance;
        }
LABEL_121:
        sub_1C13F88(Instance, v18);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
          if ( !Instance )
            goto LABEL_120;
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
      if ( !byte_4BAF374 )
      {
        sub_1C13D24(&TerminalSceneComponent_TypeInfo, v18);
        byte_4BAF374 = 1;
      }
      v53 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v53 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = v53->static_fields->mInstance;
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

  if ( (byte_4BB4893 & 1) == 0 )
  {
    sub_1C13D24(&TutorialFlag_TypeInfo, *(_QWORD *)&qId);
    byte_4BB4893 = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_38866476(flagType, eventId, 0LL)
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB48A1 & 1) == 0 )
  {
    sub_1C13D24(&EventTutorialEntity___c_TypeInfo, v1);
    byte_4BB48A1 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventTutorialEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventTutorialEntity___c___ctor(EventTutorialEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTutorialEntity___c___getTargets_b__5_0(
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


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorialWithoutFlag_b__0(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BB48A2 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB48A2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BB48A3 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB48A3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___ctor(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__0(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, isOk);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v3);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__1(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        FortificationNotifyDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass12_0_o *v4; // x20
  __int64 v5; // x1
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v9; // x8
  System_String_o *text; // x21
  System_Action_o *_9__4; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v4 = this;
  if ( (byte_4BB48A4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, dialog);
    this = (EventTutorialEntity___c__DisplayClass12_0_o *)sub_1C13D24(
                                                            &Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__4__,
                                                            v5);
    byte_4BB48A4 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1C13F88(this, dialog);
  v9 = textJson->m_Items[idx];
  if ( !v9 )
    goto LABEL_11;
  text = v9->fields.text;
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.__9__4, (int64_t)_9__4, v12, v13, v14, v15, v16, v17);
  }
  if ( !dialog )
LABEL_11:
    sub_1C13F80(this, dialog);
  FortificationNotifyDialog__Open(dialog, text, _9__4, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__10(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4BB48A5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass12_1__TextTutorialChain_b__7__, v6);
    sub_1C13D24(&EventTutorialEntity___c__DisplayClass12_1_TypeInfo, v7);
    byte_4BB48A5 = 1;
  }
  v8 = sub_1C13F70(EventTutorialEntity___c__DisplayClass12_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_EventTutorialEntity___c__DisplayClass12_1__TextTutorialChain_b__7__,
          0LL),
        !Instance) )
  {
    sub_1C13F80(v9, v10);
  }
  CommonUI__CloseConfirmDialog_31071160((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__4(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__5(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__6(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__8(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__9(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C13F80(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_1___ctor(
        EventTutorialEntity___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_1___TextTutorialChain_b__7(
        EventTutorialEntity___c__DisplayClass12_1_o *this,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass12_1_o *v2; // x19
  __int64 v3; // x1
  struct EventTutorialEntity___c__DisplayClass12_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v8; // x8
  int32_t questId; // w20
  const MethodInfo *v10; // x4
  struct EventTutorialEntity___c__DisplayClass12_0_o *v11; // x8

  v2 = this;
  if ( (byte_4BB48A6 & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_int___, method);
    this = (EventTutorialEntity___c__DisplayClass12_1_o *)sub_1C13D24(
                                                            &Method_SingletonTemplate_QuestTree__get_Instance__,
                                                            v3);
    byte_4BB48A6 = 1;
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
    sub_1C13F88(this, method);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_14;
  questId = v8->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass12_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      (const MethodInfo_2EE1BD8 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass12_1_o *)v11->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1C13F80(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v11->fields.idx + 1,
    v11->fields.callback,
    v11->fields.transitionQuest,
    v10);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___ctor(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__0(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BB48A7 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4BB48A7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4BB48A8 & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__4__, v5);
    byte_4BB48A8 = 1;
  }
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1C13F80(Request_object, v14);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4BB48AA & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, *(_QWORD *)&questId);
    sub_1C13D24(&NetworkManager_TypeInfo, v5);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_1__OpenTutorial_b__5__, v7);
    sub_1C13D24(&EventTutorialEntity___c__DisplayClass9_1_TypeInfo, v8);
    byte_4BB48AA = 1;
  }
  v9 = sub_1C13F70(EventTutorialEntity___c__DisplayClass9_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 16) = questId;
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_EventTutorialEntity___c__DisplayClass9_1__OpenTutorial_b__5__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1C13F80(Request_object, v11);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__3(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        EventCommonImageDialog_o *dialog,
        const MethodInfo *method)
{
  EventTutorialEntity___c__DisplayClass9_0_o *v4; // x20
  __int64 v5; // x1
  System_Action_o *_9__6; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v4 = this;
  if ( (byte_4BB48AB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, dialog);
    this = (EventTutorialEntity___c__DisplayClass9_0_o *)sub_1C13D24(
                                                           &Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__6__,
                                                           v5);
    byte_4BB48AB = 1;
  }
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.__9__6, (int64_t)_9__6, v7, v8, v9, v10, v11, v12);
  }
  if ( !dialog )
    sub_1C13F80(this, dialog);
  EventCommonImageDialog__Open(dialog, _9__6, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BB48A9 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    byte_4BB48A9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4BB48AC & 1) == 0 )
  {
    sub_1C13D24(&Method_NetworkManager_getRequest_TutorialEventSetRequest___, method);
    sub_1C13D24(&NetworkManager_TypeInfo, v3);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C13D24(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__7__, v5);
    byte_4BB48AC = 1;
  }
  _9__7 = this->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__7__,
      0LL);
    this->fields.__9__7 = _9__7;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__7, (int64_t)_9__7, v7, v8, v9, v10, v11, v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__7,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1C13F80(Request_object, v14);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__7(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BB48AD & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, result);
    byte_4BB48AD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_1___ctor(
        EventTutorialEntity___c__DisplayClass9_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_1___OpenTutorial_b__5(
        EventTutorialEntity___c__DisplayClass9_1_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct EventTutorialEntity___c__DisplayClass9_0_o *CS___8__locals1; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1C13F80(this, result);
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)this, this->fields.questId, method);
}