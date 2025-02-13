void __fastcall EventTutorialEntity___ctor(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC707 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC707 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventTutorialEntity__CreatePK(
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4BDC706 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4BDC706 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           flagType,
           num,
           (const MethodInfo_2FAE4B8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4BDC702 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17441/*"beforeActionSetup"*/);
    byte_4BDC702 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17441/*"beforeActionSetup"*/, 0LL);
}


System_String_array *__fastcall EventTutorialEntity__GetBeforeActionVals(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDC701 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17442/*"beforeActionVals"*/);
    byte_4BDC701 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17442/*"beforeActionVals"*/, 0LL);
}


System_String_o *__fastcall EventTutorialEntity__GetDialogPrefabName(
        EventTutorialEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDC705 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18932/*"dialogPrefabName"*/);
    byte_4BDC705 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18932/*"dialogPrefabName"*/, 0LL, 0LL);
}


int32_t __fastcall EventTutorialEntity__GetOpenType(EventTutorialEntity_o *this, const MethodInfo *method)
{
  return this->fields.openType;
}


int32_t __fastcall EventTutorialEntity__GetResumeTransitionWarId(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC704 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23332/*"resumeTransitionWar"*/);
    byte_4BDC704 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23332/*"resumeTransitionWar"*/, 0, 0LL);
}


bool __fastcall EventTutorialEntity__HasBeforeAction(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC700 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17442/*"beforeActionVals"*/);
    byte_4BDC700 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17442/*"beforeActionVals"*/, 0LL);
}


bool __fastcall EventTutorialEntity__HasResumeTransitionWar(EventTutorialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC703 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23332/*"resumeTransitionWar"*/);
    byte_4BDC703 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23332/*"resumeTransitionWar"*/, 0LL);
}


void __fastcall EventTutorialEntity__OpenTutorial(
        EventTutorialEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v21; // x0
  System_Int32_array *v22; // x21
  int32_t eventId; // w19
  int32_t flagType; // w22
  EventTutorialEntity_Fields *p_fields; // t2
  CommonUI_o *v26; // x23
  System_Action_o *v27; // x24
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v29; // x21
  System_Action_int__o *v30; // x22
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x1
  Il2CppObject *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x22
  const MethodInfo *v39; // x1
  System_String_o *DialogPrefabName; // x19
  System_Action_object__o *v41; // x23
  int32_t v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDC6FC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_EventCommonImageDialog__TypeInfo);
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__0__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__1__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__2__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__3__);
    sub_1C21E38(&EventTutorialEntity___c__DisplayClass9_0_TypeInfo);
    sub_1C21E38(&StringLiteral_6402/*"EventUI/Prefabs/{0}"*/);
    byte_4BDC6FC = 1;
  }
  v5 = sub_1C22084(EventTutorialEntity___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = this->fields.imageIds;
    p_fields = &this->fields;
    eventId = this->fields.eventId;
    flagType = p_fields->flagType;
    v26 = (CommonUI_o *)v21;
    v27 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__0__,
      0LL);
    if ( v26 )
    {
      CommonUI__OpenTutorialImageDialog_31154684(v26, v22, flagType, eventId, v27, 0LL, 0LL, 0LL);
      return;
    }
LABEL_18:
    sub_1C22094(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__1__,
      0LL);
    v30 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v30,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__2__,
      0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v29, v30, v31);
  }
  else if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0LL)
         || !EventTutorialEntity__GetDialogPrefabName(this, v32) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
    ActionExtensions__Call(*(System_Action_o **)(v5 + 16), 0LL);
  }
  else
  {
    v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v42 = this->fields.eventId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v34, v35, v36);
    v38 = System_String__Format((System_String_o *)StringLiteral_6402/*"EventUI/Prefabs/{0}"*/, v37, 0LL);
    DialogPrefabName = EventTutorialEntity__GetDialogPrefabName(this, v39);
    v41 = (System_Action_object__o *)sub_1C22084(System_Action_EventCommonImageDialog__TypeInfo);
    System_Action_object____ctor(
      v41,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__3__,
      0LL);
    if ( !v33 )
      goto LABEL_18;
    CommonUI__LoadAndCreateDialog_object_(
      (CommonUI_o *)v33,
      v38,
      DialogPrefabName,
      (System_Action_T__o *)v41,
      (const MethodInfo_2FA6624 *)Method_CommonUI_LoadAndCreateDialog_EventCommonImageDialog___);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Int32_array *imageIds; // x8
  Il2CppObject *v15; // x0
  System_Int32_array *v16; // x19
  CommonUI_o *v17; // x21
  System_Action_o *v18; // x22
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  System_Action_o *v20; // x21
  System_Action_int__o *v21; // x20
  const MethodInfo *v22; // x4

  if ( (byte_4BDC6FD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventTutorialEntity_TransitionQuest__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__0__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__1__);
    sub_1C21E38(&EventTutorialEntity___c__DisplayClass10_0_TypeInfo);
    byte_4BDC6FD = 1;
  }
  v5 = sub_1C22084(EventTutorialEntity___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)callback, v8, v9, v10, v11, v12, v13);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = this->fields.imageIds;
    v17 = (CommonUI_o *)v15;
    v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__0__,
      0LL);
    if ( v17 )
    {
      CommonUI__OpenTutorialImageDialog_31154684(v17, v16, -1, 0, v18, 0LL, 0LL, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(Instance, v7);
  }
  textJson = this->fields.textJson;
  if ( textJson && *(_QWORD *)&textJson->max_length )
  {
    v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)v5,
      Method_EventTutorialEntity___c__DisplayClass10_0__OpenTutorialWithoutFlag_b__1__,
      0LL);
    v21 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v21, (Il2CppObject *)this, Method_EventTutorialEntity_TransitionQuest__, 0LL);
    EventTutorialEntity__TextTutorialChain(this, 0, v20, v21, v22);
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 v31; // x9
  int max_length; // w10
  EventTutorialEntity_TextTuto_o *v33; // x8
  struct System_Int32_array *textPos; // x9
  float v35; // s9
  __int64 v36; // x10
  char v37; // w27
  float v38; // s10
  float v39; // s8
  struct System_Int32_array *ptPos; // x9
  __int64 v41; // x10
  float v42; // s11
  System_String_o *scrDlgTitle; // x21
  int spacingY; // w22
  struct EventTutorialEntity_TextTuto_array *v45; // x8
  __int64 v46; // x9
  EventTutorialEntity_TextTuto_o *v47; // x8
  Il2CppObject *Instance; // x20
  System_Action_object__o *v49; // x21
  struct EventTutorialEntity_TextTuto_array *v50; // x8
  __int64 v51; // x9
  EventTutorialEntity_TextTuto_o *v52; // x8
  System_String_o *text; // x22
  CommonUI_o *v54; // x20
  ScrollMessageDialog_ClickDelegate_o *v55; // x23
  System_Int32_array *releaseClassBoardBaseIds; // x20
  struct System_Int32_array *addClassIds; // x21
  int32_t v58; // w20
  CommonUI_o *v59; // x22
  System_Action_o *v60; // x23
  int v61; // w21
  struct EventTutorialEntity_TextTuto_array *v62; // x8
  __int64 v63; // x9
  EventTutorialEntity_TextTuto_o *v64; // x8
  CommonUI_o *v65; // x22
  System_String_o *v66; // x23
  System_String_o *Empty; // x24
  System_String_o *v68; // x25
  System_String_o *v69; // x26
  CommonConfirmDialog_ClickDelegate_o *v70; // x27
  struct EventTutorialEntity_TextTuto_array *v71; // x8
  __int64 v72; // x9
  EventTutorialEntity_TextTuto_o *v73; // x8
  Il2CppObject *v74; // x21
  System_Action_o *v75; // x22
  Il2CppObject *Master_object; // x0
  int32_t eventId; // w20
  SelectBonusBaseMaster_o *v78; // x21
  System_Action_o *v79; // x22
  struct EventTutorialEntity_TextTuto_array *v80; // x8
  __int64 v81; // x9
  EventTutorialEntity_TextTuto_o *v82; // x8
  System_String_o *title; // x23
  System_String_o *v84; // x24
  CommonUI_o *v85; // x22
  System_Action_o *v86; // x25
  struct EventTutorialEntity_TextTuto_array *v87; // x8
  __int64 v88; // x9
  EventTutorialEntity_TextTuto_o *v89; // x8
  struct EventTutorialEntity_RectData_array *rects; // x8
  struct EventTutorialEntity_TextTuto_array *v91; // x10
  int monitor; // w9
  UnityEngine_Rect_array *v93; // x22
  int v94; // w8
  bool v95; // w11
  __int64 v96; // x12
  EventTutorialEntity_TextTuto_o *v97; // x10
  struct EventTutorialEntity_RectData_array *v98; // x10
  int v99; // w12
  int32x4_t *v100; // x10
  int32_t v101; // w23
  struct EventTutorialEntity_TextTuto_array *v102; // x8
  __int64 v103; // x9
  EventTutorialEntity_TextTuto_o *v104; // x8
  int32_t v105; // w25
  struct EventTutorialEntity_TextTuto_array *v106; // x8
  __int64 v107; // x9
  EventTutorialEntity_TextTuto_o *v108; // x8
  System_String_o *v109; // x23
  System_String_o *v110; // x24
  CommonUI_o *v111; // x22
  System_Action_o *v112; // x26
  struct EventTutorialEntity_TextTuto_array *v113; // x8
  __int64 v114; // x9
  EventTutorialEntity_TextTuto_o *v115; // x8
  int32_t dlgFontSize; // w19
  struct EventTutorialEntity_TextTuto_array *v117; // x8
  __int64 v118; // x9
  EventTutorialEntity_TextTuto_o *v119; // x8
  struct EventTutorialEntity_TextTuto_array *v120; // x8
  __int64 v121; // x9
  EventTutorialEntity_TextTuto_o *v122; // x8
  System_String_o *v123; // x25
  int32_t dlgBgId; // w24
  CommonUI_o *v125; // x20
  System_Action_o *v126; // x26
  System_Nullable_int__o messageWidgetSizeX; // [xsp+48h] [xbp-78h] BYREF
  System_Nullable_int__o p_messageWidgetSizeX; // 0:x0.8
  UnityEngine_Vector2_o v129; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v130; // 0:s2.4,4:s3.4,8:s4.4

  if ( (byte_4BDC6FF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FortificationNotifyDialog__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
    sub_1C21E38(&Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&UnityEngine_Rect___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__0__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__10__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__1__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__2__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__3__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__5__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__6__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__8__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__9__);
    sub_1C21E38(&EventTutorialEntity___c__DisplayClass12_0_TypeInfo);
    sub_1C21E38(&StringLiteral_11113/*"QUEST_RELEASE_DIALOG_CANCEL"*/);
    sub_1C21E38(&StringLiteral_21445/*"left"*/);
    sub_1C21E38(&StringLiteral_6401/*"EventUI/Prefabs/80400"*/);
    sub_1C21E38(&StringLiteral_6975/*"FortificationNotifyDialog"*/);
    sub_1C21E38(&StringLiteral_23360/*"right"*/);
    sub_1C21E38(&StringLiteral_11114/*"QUEST_RELEASE_DIALOG_DECIDE"*/);
    byte_4BDC6FF = 1;
  }
  v9 = sub_1C22084(EventTutorialEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_105;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = idx;
  *(_QWORD *)(v9 + 32) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 40) = transitionQuest;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)transitionQuest, v24, v25, v26, v27, v28, v29);
  textJson = this->fields.textJson;
  if ( !textJson )
    goto LABEL_105;
  v31 = *(int *)(v9 + 24);
  max_length = textJson->max_length;
  if ( (int)v31 >= max_length )
    goto LABEL_39;
  if ( (unsigned int)v31 >= max_length )
    goto LABEL_106;
  v33 = textJson->m_Items[v31];
  if ( !v33 )
    goto LABEL_105;
  textPos = v33->fields.textPos;
  v35 = 0.0;
  if ( !textPos )
  {
    v37 = 1;
    goto LABEL_13;
  }
  v36 = *(_QWORD *)&textPos->max_length;
  v37 = (_DWORD)v36 == 0;
  if ( !v36 )
  {
LABEL_13:
    v39 = 0.0;
    v38 = 0.0;
    goto LABEL_14;
  }
  if ( (unsigned int)v36 < 2 )
    goto LABEL_106;
  v38 = (float)textPos->m_Items[1];
  v39 = (float)textPos->m_Items[2];
LABEL_14:
  ptPos = v33->fields.ptPos;
  if ( ptPos )
  {
    v41 = *(_QWORD *)&ptPos->max_length;
    v42 = 0.0;
    if ( v41 )
    {
      if ( (unsigned int)v41 < 2 )
        goto LABEL_106;
      v42 = (float)ptPos->m_Items[1];
      v35 = (float)ptPos->m_Items[2];
    }
  }
  else
  {
    v42 = 0.0;
  }
  scrDlgTitle = v33->fields.scrDlgTitle;
  spacingY = v33->fields.spacingY;
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(scrDlgTitle, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v50 = this->fields.textJson;
    if ( !v50 )
      goto LABEL_105;
    v51 = *(int *)(v9 + 24);
    if ( (unsigned int)v51 >= v50->max_length )
      goto LABEL_106;
    v52 = v50->m_Items[v51];
    if ( !v52 )
      goto LABEL_105;
    text = v52->fields.text;
    v54 = (CommonUI_o *)IsNullOrEmpty;
    v55 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C22084(ScrollMessageDialog_ClickDelegate_TypeInfo);
    ScrollMessageDialog_ClickDelegate___ctor(
      v55,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__0__,
      0LL);
    if ( !v54 )
      goto LABEL_105;
    CommonUI__OpenScrollMessageDialog(v54, scrDlgTitle, text, 10, v55, 0, 0, 0LL);
    return;
  }
  v45 = this->fields.textJson;
  if ( !v45 )
    goto LABEL_105;
  v46 = *(int *)(v9 + 24);
  if ( (unsigned int)v46 >= v45->max_length )
    goto LABEL_106;
  v47 = v45->m_Items[v46];
  if ( !v47 )
    goto LABEL_105;
  if ( v47->fields.isFortification )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v49 = (System_Action_object__o *)sub_1C22084(System_Action_FortificationNotifyDialog__TypeInfo);
    System_Action_object____ctor(
      v49,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__1__,
      0LL);
    if ( Instance )
    {
      CommonUI__LoadAndCreateDialog_object_(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_6401/*"EventUI/Prefabs/80400"*/,
        (System_String_o *)StringLiteral_6975/*"FortificationNotifyDialog"*/,
        (System_Action_T__o *)v49,
        (const MethodInfo_2FA6624 *)Method_CommonUI_LoadAndCreateDialog_FortificationNotifyDialog___);
      return;
    }
LABEL_105:
    sub_1C22094(IsNullOrEmpty, v11);
  }
  if ( v47->fields.isClassBoardRelease )
  {
    releaseClassBoardBaseIds = v47->fields.releaseClassBoardBaseIds;
    if ( releaseClassBoardBaseIds && *(_QWORD *)&releaseClassBoardBaseIds->max_length )
    {
      addClassIds = v47->fields.addClassIds;
      if ( addClassIds && *(_QWORD *)&addClassIds->max_length )
      {
        IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( releaseClassBoardBaseIds->max_length )
        {
          v58 = releaseClassBoardBaseIds->m_Items[1];
          v59 = (CommonUI_o *)IsNullOrEmpty;
          v60 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v60,
            (Il2CppObject *)v9,
            Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__5__,
            0LL);
          if ( !v59 )
            goto LABEL_105;
          CommonUI__OpenClassBoardAddClassDialog(v59, v58, addClassIds, v60, 0LL);
          return;
        }
        goto LABEL_106;
      }
      v74 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v75,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__6__,
        0LL);
      if ( !v74 )
        goto LABEL_105;
      CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)v74, releaseClassBoardBaseIds, v75, 0LL);
      return;
    }
LABEL_39:
    ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0LL);
    return;
  }
  v61 = spacingY & ~(spacingY >> 31);
  if ( v47->fields.isQuestRelease )
  {
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v62 = this->fields.textJson;
    if ( !v62 )
      goto LABEL_105;
    v63 = *(int *)(v9 + 24);
    if ( (unsigned int)v63 >= v62->max_length )
      goto LABEL_106;
    v64 = v62->m_Items[v63];
    if ( !v64 )
      goto LABEL_105;
    v65 = (CommonUI_o *)IsNullOrEmpty;
    v66 = v64->fields.text;
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11114/*"QUEST_RELEASE_DIALOG_DECIDE"*/, 0LL);
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11113/*"QUEST_RELEASE_DIALOG_CANCEL"*/, 0LL);
    v70 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v70,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__2__,
      0LL);
    v71 = this->fields.textJson;
    if ( !v71 )
      goto LABEL_105;
    v72 = *(int *)(v9 + 24);
    if ( (unsigned int)v72 >= v71->max_length )
      goto LABEL_106;
    v73 = v71->m_Items[v72];
    if ( !v73 || !v65 )
      goto LABEL_105;
    CommonUI__OpenConfirmDecideDlg(
      v65,
      Empty,
      v66,
      v68,
      v69,
      v70,
      v73->fields.dlgFontSize,
      0.0,
      15.0,
      v61,
      0,
      0,
      240,
      0,
      0,
      0,
      0,
      0LL);
  }
  else if ( v47->fields.isSelectBonus )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SelectBonusBaseMaster___);
    eventId = this->fields.eventId;
    v78 = (SelectBonusBaseMaster_o *)Master_object;
    v79 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v79,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__3__,
      0LL);
    if ( !v78 )
      goto LABEL_105;
    SelectBonusBaseMaster__OpenSelectBonusDialog(v78, eventId, v79, 0LL);
  }
  else if ( v47->fields.dlgFontSize < 1 )
  {
    rects = v47->fields.rects;
    if ( !rects )
      goto LABEL_105;
    IsNullOrEmpty = (Il2CppObject *)sub_1C21EE0(UnityEngine_Rect___TypeInfo, rects->max_length);
    if ( !IsNullOrEmpty )
      goto LABEL_105;
    v91 = this->fields.textJson;
    if ( !v91 )
      goto LABEL_105;
    monitor = (int)IsNullOrEmpty[1].monitor;
    v93 = (UnityEngine_Rect_array *)IsNullOrEmpty;
    v94 = 1;
    v95 = monitor > 0;
    while ( 1 )
    {
      v96 = *(int *)(v9 + 24);
      if ( (unsigned int)v96 >= v91->max_length )
        goto LABEL_106;
      v97 = v91->m_Items[v96];
      if ( !v97 )
        goto LABEL_105;
      if ( !v95 )
        break;
      v98 = v97->fields.rects;
      if ( !v98 )
        goto LABEL_105;
      v99 = v94 - 1;
      if ( v94 - 1 >= v98->max_length )
        goto LABEL_106;
      v100 = (int32x4_t *)v98->m_Items[v99];
      if ( !v100 )
        goto LABEL_105;
      if ( v99 >= (unsigned int)monitor )
        goto LABEL_106;
      IsNullOrEmpty[v99 + 2] = (Il2CppObject)vcvtq_f32_s32(v100[1]);
      monitor = (int)IsNullOrEmpty[1].monitor;
      v91 = this->fields.textJson;
      v95 = v94++ < monitor;
      if ( !v91 )
        goto LABEL_105;
    }
    IsNullOrEmpty = (Il2CppObject *)BasicHelper__EqualExceptNullOrEmpty(
                                      v97->fields.textAlign,
                                      (System_String_o *)StringLiteral_21445/*"left"*/,
                                      0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      v101 = 1;
    }
    else
    {
      v117 = this->fields.textJson;
      if ( !v117 )
        goto LABEL_105;
      v118 = *(int *)(v9 + 24);
      if ( (unsigned int)v118 >= v117->max_length )
        goto LABEL_106;
      v119 = v117->m_Items[v118];
      if ( !v119 )
        goto LABEL_105;
      if ( BasicHelper__EqualExceptNullOrEmpty(v119->fields.textAlign, (System_String_o *)StringLiteral_23360/*"right"*/, 0LL) )
        v101 = 3;
      else
        v101 = 2;
    }
    IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v120 = this->fields.textJson;
    if ( !v120 )
      goto LABEL_105;
    v121 = *(int *)(v9 + 24);
    if ( (unsigned int)v121 >= v120->max_length )
LABEL_106:
      sub_1C2209C(IsNullOrEmpty, v11);
    v122 = v120->m_Items[v121];
    if ( !v122 )
      goto LABEL_105;
    v123 = v122->fields.text;
    dlgBgId = v122->fields.dlgBgId;
    v125 = (CommonUI_o *)IsNullOrEmpty;
    v126 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v126,
      (Il2CppObject *)v9,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__10__,
      0LL);
    if ( !v125 )
      goto LABEL_105;
    v130.fields.z = 0.0;
    v129.fields.x = v38;
    v129.fields.y = v39;
    v130.fields.x = v42;
    v130.fields.y = v35;
    CommonUI__OpenEventTutorialNotificationDialog(v125, v123, v93, v129, v130, dlgBgId, v101, v126, 0LL, v61, 0LL);
  }
  else
  {
    IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(v47->fields.messageWidgetSizeX, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v80 = this->fields.textJson;
      if ( !v80 )
        goto LABEL_105;
      v81 = *(int *)(v9 + 24);
      if ( (unsigned int)v81 >= v80->max_length )
        goto LABEL_106;
      v82 = v80->m_Items[v81];
      if ( !v82 )
        goto LABEL_105;
      title = v82->fields.title;
      v84 = v82->fields.text;
      v85 = (CommonUI_o *)IsNullOrEmpty;
      v86 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v86,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__8__,
        0LL);
      v87 = this->fields.textJson;
      if ( !v87 )
        goto LABEL_105;
      v88 = *(int *)(v9 + 24);
      if ( (unsigned int)v88 >= v87->max_length )
        goto LABEL_106;
      v89 = v87->m_Items[v88];
      if ( !v89 || !v85 )
        goto LABEL_105;
      CommonUI__OpenNotificationDialog_31129380(
        v85,
        title,
        v84,
        v86,
        v39,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        v89->fields.dlgFontSize,
        0,
        v61,
        v37,
        0LL,
        0LL);
    }
    else
    {
      v102 = this->fields.textJson;
      if ( !v102 )
        goto LABEL_105;
      v103 = *(int *)(v9 + 24);
      if ( (unsigned int)v103 >= v102->max_length )
        goto LABEL_106;
      v104 = v102->m_Items[v103];
      if ( !v104 )
        goto LABEL_105;
      v105 = System_Int32__Parse(v104->fields.messageWidgetSizeX, 0LL);
      IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v106 = this->fields.textJson;
      if ( !v106 )
        goto LABEL_105;
      v107 = *(int *)(v9 + 24);
      if ( (unsigned int)v107 >= v106->max_length )
        goto LABEL_106;
      v108 = v106->m_Items[v107];
      if ( !v108 )
        goto LABEL_105;
      v109 = v108->fields.title;
      v110 = v108->fields.text;
      v111 = (CommonUI_o *)IsNullOrEmpty;
      v112 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v112,
        (Il2CppObject *)v9,
        Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__9__,
        0LL);
      v113 = this->fields.textJson;
      if ( !v113 )
        goto LABEL_105;
      v114 = *(int *)(v9 + 24);
      if ( (unsigned int)v114 >= v113->max_length )
        goto LABEL_106;
      v115 = v113->m_Items[v114];
      if ( !v115 )
        goto LABEL_105;
      dlgFontSize = v115->fields.dlgFontSize;
      p_messageWidgetSizeX = (System_Nullable_int__o)&messageWidgetSizeX;
      messageWidgetSizeX = 0LL;
      System_Nullable_int____ctor(
        p_messageWidgetSizeX,
        v105,
        (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
      if ( !v111 )
        goto LABEL_105;
      CommonUI__OpenNotificationDialog_31129380(
        v111,
        v109,
        v110,
        v112,
        v39,
        -162.5,
        -1,
        0,
        0,
        0,
        0,
        dlgFontSize,
        0,
        v61,
        v37,
        messageWidgetSizeX,
        0LL);
    }
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

  if ( (byte_4BDC6FE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDC6FE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD967F )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD967F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = 1;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL),
        TerminalPramsManager__SetAutoResumeByQuestId(questId, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(Instance, v6);
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
  PartyOrganizationUtility_o *p_monitor; // x21
  int max_length; // w9
  System_String_array *v11; // x0
  EventTutorialEntity___c_c *v12; // x8
  System_Object_array *v13; // x22
  System_Converter_object__int__o *_9__5_0; // x23
  Il2CppObject *v15; // x24
  struct EventTutorialEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BDC6F9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_ConvertAll_string__int___);
    sub_1C21E38(&System_Converter_string__int__TypeInfo);
    sub_1C21E38(&int_____TypeInfo);
    sub_1C21E38(&Method_EventTutorialEntity___c__getTargets_b__5_0__);
    sub_1C21E38(&EventTutorialEntity___c_TypeInfo);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDC6F9 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_1C21EE0(int_____TypeInfo, 1LL);
  v4 = (System_String_o *)sub_1C21EE0(int_____TypeInfo, targetIds->max_length);
  v6 = this->fields.targetIds;
  if ( !v6 )
LABEL_20:
    sub_1C22094(v4, v5);
  v7 = (System_Int32_array_array *)v4;
  v8 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&v4[1].monitor;
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
      v4 = System_String__Replace_63135104(
             v4,
             (System_String_o *)StringLiteral_16086/*"["*/,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      if ( v4 )
      {
        v4 = System_String__Replace_63135104(
               v4,
               (System_String_o *)StringLiteral_16345/*"]"*/,
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
          _9__5_0 = (System_Converter_object__int__o *)v12->static_fields->__9__5_0;
          if ( !_9__5_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = EventTutorialEntity___c_TypeInfo;
            }
            v15 = (Il2CppObject *)v12->static_fields->__9;
            _9__5_0 = (System_Converter_object__int__o *)sub_1C22084(System_Converter_string__int__TypeInfo);
            System_Converter_object__int____ctor(_9__5_0, v15, Method_EventTutorialEntity___c__getTargets_b__5_0__, 0LL);
            static_fields = EventTutorialEntity___c_TypeInfo->static_fields;
            static_fields->__9__5_0 = (struct System_Converter_string__int__o *)_9__5_0;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
              (int64_t)_9__5_0,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
          }
          v4 = (System_String_o *)System_Array__ConvertAll_object__int_(
                                    v13,
                                    (System_Converter_TInput__TOutput__o *)_9__5_0,
                                    (const MethodInfo_30A96A8 *)Method_System_Array_ConvertAll_string__int___);
          if ( v7 )
          {
            if ( (unsigned int)v8 >= v7->max_length )
LABEL_23:
              sub_1C2209C(v4, v5);
            p_monitor->klass = (PartyOrganizationUtility_c *)v4;
            sub_1C21DDC(p_monitor, (int64_t)v4, v23, v24, v25, v26, v27, v28);
            v6 = this->fields.targetIds;
            ++v8;
            p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
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

  if ( (byte_4BDC6FB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTutorialCondMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDC6FB = 1;
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
    case 0x5E:
    case 0x5F:
    case 0x60:
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
            sub_1C22094(Instance, v11);
          }
          goto LABEL_118;
        }
      }
      condType = this->fields.condType;
      if ( condType != 32 && condType != 26 )
        goto LABEL_118;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_120;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
                (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___) & 0x80000000) == 0 )
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
                 (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
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
        sub_1C2209C(Instance, v11);
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
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_120;
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTutorialCondMaster___);
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
      if ( !byte_4BD7183 )
      {
        sub_1C21E38(&TerminalSceneComponent_TypeInfo);
        byte_4BD7183 = 1;
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

  if ( (byte_4BDC6FA & 1) == 0 )
  {
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BDC6FA = 1;
  }
  eventId = this->fields.eventId;
  flagType = this->fields.flagType;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return !TutorialFlag__Get_38966028(flagType, eventId, 0LL)
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC708 & 1) == 0 )
  {
    sub_1C21E38(&EventTutorialEntity___c_TypeInfo);
    byte_4BDC708 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventTutorialEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTutorialEntity___c_TypeInfo->static_fields->__9 = (struct EventTutorialEntity___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventTutorialEntity___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BDC709 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDC709 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass10_0___OpenTutorialWithoutFlag_b__1(
        EventTutorialEntity___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDC70A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDC70A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
    sub_1C22094(0LL, isOk);
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
  struct EventTutorialEntity_o *_4__this; // x8
  struct EventTutorialEntity_TextTuto_array *textJson; // x8
  __int64 idx; // x9
  EventTutorialEntity_TextTuto_o *v8; // x8
  System_String_o *text; // x21
  System_Action_o *_9__4; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v4 = this;
  if ( (byte_4BDC70B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass12_0_o *)sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__4__);
    byte_4BDC70B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  textJson = _4__this->fields.textJson;
  if ( !textJson )
    goto LABEL_11;
  idx = v4->fields.idx;
  if ( (unsigned int)idx >= textJson->max_length )
    sub_1C2209C(this, dialog);
  v8 = textJson->m_Items[idx];
  if ( !v8 )
    goto LABEL_11;
  text = v8->fields.text;
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass12_0__TextTutorialChain_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.__9__4, (int64_t)_9__4, v11, v12, v13, v14, v15, v16);
  }
  if ( !dialog )
LABEL_11:
    sub_1C22094(this, dialog);
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
    sub_1C22094(0LL, method);
  EventTutorialEntity__TextTutorialChain(
    _4__this,
    this->fields.idx + 1,
    this->fields.callback,
    this->fields.transitionQuest,
    v2);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__2(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4BDC70C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass12_1__TextTutorialChain_b__7__);
    sub_1C21E38(&EventTutorialEntity___c__DisplayClass12_1_TypeInfo);
    byte_4BDC70C = 1;
  }
  v5 = sub_1C22084(EventTutorialEntity___c__DisplayClass12_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 16) = isDecide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_EventTutorialEntity___c__DisplayClass12_1__TextTutorialChain_b__7__,
          0LL),
        !Instance) )
  {
    sub_1C22094(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31128756((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass12_0___TextTutorialChain_b__3(
        EventTutorialEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  EventTutorialEntity_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
  struct EventTutorialEntity___c__DisplayClass12_0_o *CS___8__locals1; // x8
  struct EventTutorialEntity_o *_4__this; // x9
  struct EventTutorialEntity_TextTuto_array *textJson; // x9
  __int64 idx; // x8
  EventTutorialEntity_TextTuto_o *v7; // x8
  int32_t questId; // w20
  const MethodInfo *v9; // x4
  struct EventTutorialEntity___c__DisplayClass12_0_o *v10; // x8

  v2 = this;
  if ( (byte_4BDC70D & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_int___);
    this = (EventTutorialEntity___c__DisplayClass12_1_o *)sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4BDC70D = 1;
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
    sub_1C2209C(this, method);
  v7 = textJson->m_Items[idx];
  if ( !v7 )
    goto LABEL_14;
  questId = v7->fields.questId;
  this = (EventTutorialEntity___c__DisplayClass12_1_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      (const MethodInfo_2F02570 *)Method_ActionExtensions_Call_int___);
    return;
  }
  this = (EventTutorialEntity___c__DisplayClass12_1_o *)v10->fields.__4__this;
  if ( !this )
LABEL_14:
    sub_1C22094(this, method);
  EventTutorialEntity__TextTutorialChain(
    (EventTutorialEntity_o *)this,
    v10->fields.idx + 1,
    v10->fields.callback,
    v10->fields.transitionQuest,
    v9);
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

  if ( (byte_4BDC70E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDC70E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__1(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__4; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4BDC70F & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__4__);
    byte_4BDC70F = 1;
  }
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v4, v5, v6, v7, v8, v9);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__4,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1C22094(Request_object, v11);
  TutorialEventSetRequest__beginRequest(
    (TutorialEventSetRequest_o *)Request_object,
    _4__this->fields.flagType,
    _4__this->fields.eventId,
    0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__2(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4BDC711 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_1__OpenTutorial_b__5__);
    sub_1C21E38(&EventTutorialEntity___c__DisplayClass9_1_TypeInfo);
    byte_4BDC711 = 1;
  }
  v5 = sub_1C22084(EventTutorialEntity___c__DisplayClass9_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 16) = questId;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventTutorialEntity___c__DisplayClass9_1__OpenTutorial_b__5__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
LABEL_9:
    sub_1C22094(Request_object, v7);
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
  System_Action_o *_9__6; // x22
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v4 = this;
  if ( (byte_4BDC712 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (EventTutorialEntity___c__DisplayClass9_0_o *)sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__6__);
    byte_4BDC712 = 1;
  }
  _9__6 = v4->fields.__9__6;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)v4,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__6__,
      0LL);
    v4->fields.__9__6 = _9__6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.__9__6, (int64_t)_9__6, v6, v7, v8, v9, v10, v11);
  }
  if ( !dialog )
    sub_1C22094(this, dialog);
  EventCommonImageDialog__Open(dialog, _9__6, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__4(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDC710 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDC710 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall EventTutorialEntity___c__DisplayClass9_0___OpenTutorial_b__6(
        EventTutorialEntity___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *_9__7; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1
  struct EventTutorialEntity_o *_4__this; // x8

  if ( (byte_4BDC713 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialEventSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__7__);
    byte_4BDC713 = 1;
  }
  _9__7 = this->fields.__9__7;
  if ( !_9__7 )
  {
    _9__7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__7,
      (Il2CppObject *)this,
      Method_EventTutorialEntity___c__DisplayClass9_0__OpenTutorial_b__7__,
      0LL);
    this->fields.__9__7 = _9__7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__7, (int64_t)_9__7, v4, v5, v6, v7, v8, v9);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__7,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialEventSetRequest___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Request_object )
    sub_1C22094(Request_object, v11);
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

  if ( (byte_4BDC714 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BDC714 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
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
    sub_1C22094(this, result);
  EventTutorialEntity__TransitionQuest((EventTutorialEntity_o *)this, this->fields.questId, method);
}