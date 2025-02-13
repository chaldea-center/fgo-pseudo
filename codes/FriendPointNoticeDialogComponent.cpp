void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BDE5E2 & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDialogComponent_TypeInfo);
    byte_4BDE5E2 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDE5E1 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDE5E1 = 1;
  }
  this->fields.addedPointLabelCenterPosY = 165.0;
  *(_QWORD *)&this->fields.servantNameLabelMaxWidth = 0x25843900000LL;
  *(_QWORD *)&this->fields.topPartsPosYMaxFp = 0xC31E000042200000LL;
  this->fields.buttonPosYMaxFp = -219.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__Awake(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendPointNoticeDialogComponent__Close(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDialogComponent__Close_43393116(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_43393116(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
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
  FriendPointNoticeDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  FriendPointNoticeDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  FriendPointNoticeDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  FriendPointNoticeDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x21

  if ( (byte_4BDE5D9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__);
    sub_1C21E38(&FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo);
    byte_4BDE5D9 = 1;
  }
  v5 = sub_1C22084(FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  FriendPointNoticeDialogComponent__SetEnableButton(v20, this->fields.decideButtonObject, 0, v21);
  FriendPointNoticeDialogComponent__SetEnableButton(v22, this->fields.friendSupportButtonObject, 0, v23);
  FriendPointNoticeDialogComponent__SetEnableButton(v24, this->fields.recommendedSupportButtonObject, 0, v25);
  FriendPointNoticeDialogComponent__SetEnableButton(v26, this->fields.closeButtonObject, 0, v27);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v28 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__ExecClickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct FriendPointNoticeDialogComponent_CallbackFunc_o *clickedFunc; // x8
  PartyOrganizationUtility_o *p_clickedFunc; // x19

  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = (PartyOrganizationUtility_o *)&this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))clickedFunc->fields.m_target)(
      clickedFunc->fields.original_method_info,
      result,
      *(_QWORD *)&clickedFunc->fields.extra_arg);
  p_clickedFunc->klass = 0LL;
  sub_1C21DDC(p_clickedFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BDE5D7 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    byte_4BDE5D7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C22094(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickCancel(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BDE5E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent_OnClickCancel__);
    byte_4BDE5E0 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4BDE5DC & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
    byte_4BDE5DC = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C21E50(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BDE5DD & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
    byte_4BDE5DD = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 0, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToRecommendedSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BDE5DF & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
    byte_4BDE5DF = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 2, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BDE5DE & 1) == 0 )
  {
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
    byte_4BDE5DE = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent__Open(
        FriendPointNoticeDialogComponent_o *this,
        CommonUI_LoginResultData_o *loginResultData,
        FriendPointNoticeDialogComponent_CallbackFunc_o *clickedAction,
        const MethodInfo *method)
{
  FriendPointNoticeDialogSvtInfo_o *gameObject; // x0
  Il2CppObject *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v17; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x21
  System_String_o *v28; // x0
  struct UILabel_o *v29; // x21
  System_String_o *v30; // x22
  System_String_o *v31; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  UILabel_o *v38; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  UILabel_o *v45; // x21
  UnityEngine_GameObject_o *v46; // x0
  System_Collections_Generic_List_object__o *v47; // x21
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v51; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // x23
  il2cpp_array_size_t v53; // w26
  unsigned __int64 v54; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v56; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v58; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v59; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v60; // x8
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct FriendPointNoticeDialogSvtInfo_array *v67; // x8
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  System_Collections_Generic_IEnumerable_T__o *v72; // x23
  FriendPointNoticeDialogComponent___c_c *v73; // x0
  System_Action_object__o *_9__46_1; // x24
  Il2CppObject *v75; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x24
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x23
  const MethodInfo *v86; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v87; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x24
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x23
  const MethodInfo *v90; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v91; // x8
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  unsigned int localPosition; // s0
  int v113; // w8
  float v114; // s8
  int v115; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v116; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v117; // x20
  UnityEngine_GameObject_o *v118; // x0
  const MethodInfo *v119; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v120; // x8
  const MethodInfo *v121; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v122; // x8
  const MethodInfo *v123; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v124; // x8
  float left; // s0
  float lowerRow1; // s1
  int v127; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  const MethodInfo *v129; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *layoutXPositionList; // x8
  const MethodInfo_364EDE4 *v131; // x2
  System_Collections_Generic_List_object__o *v132; // x0
  struct FriendPointNoticeDialogComponent_PositionYData_array *v133; // x8
  const MethodInfo *v134; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v135; // x8
  UILabel_o *noDataLabel; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *v137; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v138; // x20
  const MethodInfo *v139; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v140; // x8
  const MethodInfo *v141; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v142; // x8
  const MethodInfo *v143; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v144; // x8
  float right; // s0
  float upperRow1; // s1
  struct FriendPointNoticeDialogComponent_PositionYData_array *v147; // x8
  UnityEngine_GameObject_o *v148; // x0
  const MethodInfo *v149; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v150; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v151; // x8
  const MethodInfo *v152; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v153; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v154; // x8
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v156; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v158; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v160; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v162; // x22
  __int64 v163; // x2
  __int64 v164; // x3
  __int64 v165; // x4
  Il2CppObject *v166; // x0
  UILabel_o *v167; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v170; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v172; // x20
  System_Collections_Generic_List_object__o *v173; // [xsp+8h] [xbp-88h]
  CommonUI_LoginResultData_o *v174; // [xsp+10h] [xbp-80h]
  int32_t addFollowFriendPoint; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v177; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v178; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v179; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v180; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v181; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v182; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v183; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v184; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v185; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v186; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v187; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v188; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v189; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v190; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v191; // 0:s0.4,4:s1.4

  if ( (byte_4BDE5D8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent__Open_b__46_0__);
    sub_1C21E38(&FriendPointNoticeDialogComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__);
    sub_1C21E38(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_7083/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/);
    sub_1C21E38(&StringLiteral_7090/*"GET_FRIEND_POINT_SERVANT_TITLE"*/);
    sub_1C21E38(&StringLiteral_7086/*"GET_FRIEND_POINT_NO_DATA"*/);
    sub_1C21E38(&StringLiteral_7085/*"GET_FRIEND_POINT_NOW_POINT"*/);
    sub_1C21E38(&StringLiteral_7092/*"GET_FRIEND_POINT_SUPPORT_BTN"*/);
    sub_1C21E38(&StringLiteral_118/*"  "*/);
    sub_1C21E38(&StringLiteral_7082/*"GET_FRIEND_POINT_FP_NORMAL"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_7081/*"GET_FRIEND_POINT_FP_FOLLOW"*/);
    sub_1C21E38(&StringLiteral_7091/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/);
    sub_1C21E38(&StringLiteral_7078/*"GET_FRIEND_POINT_CAPTION_EVENT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_7084/*"GET_FRIEND_POINT_GACHA_BTN"*/);
    sub_1C21E38(&StringLiteral_7093/*"GET_FRIEND_POINT_TITLE"*/);
    sub_1C21E38(&StringLiteral_7077/*"GET_FRIEND_POINT_AT_LIMIT"*/);
    sub_1C21E38(&StringLiteral_7079/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/);
    byte_4BDE5D8 = 1;
  }
  entity = 0LL;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.clickedFunc,
    (int64_t)clickedAction,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.noDataLabel;
  this->fields.state = 1;
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7093/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_231;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
  if ( !gameObject )
    goto LABEL_231;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !loginResultData )
    goto LABEL_231;
  addFriendPoint = loginResultData->fields.addFriendPoint;
  v17 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_231;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_7082/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v21, v22, v23);
    v25 = System_String__Format(v20, v24, 0LL);
    v26 = System_String__Concat_63115476(mText, v25, 0LL);
    UILabel__set_text(addedPointLabel, v26, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v27 = this->fields.addedPointLabel;
      if ( !v27 )
        goto LABEL_231;
      v28 = System_String__Concat_63115476(v27->fields.mText, (System_String_o *)StringLiteral_118/*"  "*/, 0LL);
      UILabel__set_text(v27, v28, 0LL);
    }
    v29 = this->fields.addedPointLabel;
    if ( !v29 )
      goto LABEL_231;
    v30 = v29->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_7081/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v32, v33, v34);
    v36 = System_String__Format(v31, v35, 0LL);
    v37 = System_String__Concat_63115476(v30, v36, 0LL);
    UILabel__set_text(v29, v37, 0LL);
    v17 = 0;
  }
  v38 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v38 )
    goto LABEL_231;
  UILabel__SetCondensedScale_48213524(
    v38,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_231;
LABEL_38:
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_7083/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v41, v42, v43);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v40, v44, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_231;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v45 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v45 )
    goto LABEL_231;
  UILabel__SetCondensedScale_48213524(
    v45,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( v17 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_231;
    goto LABEL_38;
  }
LABEL_39:
  v47 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v173 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v173,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7091/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_231;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
  v174 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_231;
    v51 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v53 = 0;
      v54 = 0LL;
      while ( v54 < (unsigned int)v51 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v53 >= (int)max_length )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v54];
          if ( !gameObject )
            goto LABEL_231;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !gameObject )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( v53 >= max_length )
            goto LABEL_232;
          v56 = addRecommendSupportFriendPointSvtList->m_Items[v53];
          if ( !v56 || !v52 )
            goto LABEL_231;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v52,
                                                             &entity,
                                                             v56->fields.questId,
                                                             (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_231;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v59 = this->fields.recommendedSupportServantInfoList;
          if ( !v59 )
            goto LABEL_231;
          if ( v53 >= v59->max_length )
            goto LABEL_232;
          FriendPointNoticeDialogComponent__SetupServantInfo_43390300(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v59->m_Items[v53],
            v56,
            monitor,
            v56->fields.friendPoint,
            v58);
          v60 = this->fields.recommendedSupportServantInfoList;
          if ( !v60 )
            goto LABEL_231;
          if ( v53 >= v60->max_length )
            goto LABEL_232;
          gameObject = v60->m_Items[v53];
          if ( !gameObject )
            goto LABEL_231;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !gameObject )
            goto LABEL_231;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                             (UnityEngine_GameObject_o *)gameObject,
                                                             0LL);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            v67 = this->fields.recommendedSupportServantInfoList;
            if ( !v67 )
              goto LABEL_231;
            if ( v53 >= v67->max_length )
              goto LABEL_232;
            if ( !v47 )
              goto LABEL_231;
            v8 = (Il2CppObject *)v67->m_Items[v53];
            items = v47->fields._items;
            v69 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v47->fields._version;
            if ( !items )
              goto LABEL_231;
            size = v47->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v47,
                v8,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
            }
            else
            {
              v71 = &items->obj.klass + size;
              v47->fields._size = size + 1;
              v71[4] = (Il2CppClass *)v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)v8, v61, v62, v63, v64, v65, v66);
            }
          }
          ++v53;
        }
        LODWORD(v51) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v54 >= (int)v51 )
          goto LABEL_84;
      }
      goto LABEL_232;
    }
  }
  else
  {
    v72 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v73 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v73 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__46_1 = (System_Action_object__o *)v73->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v73->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v73);
        v73 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v75 = (Il2CppObject *)v73->static_fields->__9;
      _9__46_1 = (System_Action_object__o *)sub_1C22084(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__46_1, v75, Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__46_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__46_1,
        (int64_t)_9__46_1,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
    BasicHelper__ForEach_object_(
      v72,
      (System_Action_T__o *)_9__46_1,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7090/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_231;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  topAddFriendPointSvt = v174->fields.topAddFriendPointSvt;
  normalSupportServantInfo = this->fields.normalSupportServantInfo;
  if ( topAddFriendPointSvt )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7079/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/,
                                                       0LL);
    v87 = v174->fields.topAddFriendPointSvt;
    if ( !v87 )
      goto LABEL_231;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v87->fields.friendPoint,
      v86);
  }
  else
  {
    if ( !normalSupportServantInfo )
      goto LABEL_231;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.normalSupportServantInfo,
                                                       0LL);
    if ( !gameObject )
      goto LABEL_231;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  topAddFriendPointSvtEQ = v174->fields.topAddFriendPointSvtEQ;
  eventSupportServantInfo = this->fields.eventSupportServantInfo;
  if ( topAddFriendPointSvtEQ )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7078/*"GET_FRIEND_POINT_CAPTION_EVENT"*/,
                                                       0LL);
    v91 = v174->fields.topAddFriendPointSvtEQ;
    if ( !v91 )
      goto LABEL_231;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v91->fields.friendPoint,
      v90);
  }
  else
  {
    if ( !eventSupportServantInfo )
      goto LABEL_231;
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.eventSupportServantInfo,
                                                       0LL);
    if ( !gameObject )
      goto LABEL_231;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  gameObject = this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v173 )
      goto LABEL_231;
    v8 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v98 = v173->fields._items;
    v99 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v173->fields._version;
    if ( !v98 )
      goto LABEL_231;
    v100 = v173->fields._size;
    if ( (unsigned int)v100 >= v98->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v173,
        v8,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v173->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)v8;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v101 + 4), (int64_t)v8, v92, v93, v94, v95, v96, v97);
    }
  }
  gameObject = this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_activeSelf(
                                                     (UnityEngine_GameObject_o *)gameObject,
                                                     0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v173 )
      goto LABEL_231;
    v8 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v108 = v173->fields._items;
    v109 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v173->fields._version;
    if ( !v108 )
      goto LABEL_231;
    v110 = v173->fields._size;
    if ( (unsigned int)v110 >= v108->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v173,
        v8,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v173->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v8;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v111 + 4), (int64_t)v8, v102, v103, v104, v105, v106, v107);
    }
  }
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !v173 )
    goto LABEL_231;
  v113 = v173->fields._size;
  v114 = *(float *)&localPosition;
  if ( v113 )
  {
    if ( !v47 )
      goto LABEL_231;
  }
  else
  {
    if ( !v47 )
      goto LABEL_231;
    v127 = v47->fields._size;
    if ( (unsigned int)(v127 - 1) <= 1 )
    {
      layoutYPositionList = this->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_231;
      if ( layoutYPositionList->max_length )
      {
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        v117 = layoutYPositionList->m_Items[0];
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0LL);
        if ( !gameObject )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0LL);
        if ( !v117 )
          goto LABEL_231;
        v181.fields.y = v117->fields.upperLabel;
        v181.fields.x = v114;
        GameObjectExtensions__SetLocalPosition_34797564((UnityEngine_GameObject_o *)gameObject, v181, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v47,
                                                           0,
                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        layoutXPositionList = this->fields.layoutXPositionList;
        if ( !layoutXPositionList )
          goto LABEL_231;
        v182.fields.x = layoutXPositionList->fields.left;
        v182.fields.y = v117->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v182, v129);
        if ( v47->fields._size >= 2 )
        {
          v131 = (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
          v132 = v47;
LABEL_197:
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v132,
                                                             1,
                                                             v131);
          v154 = this->fields.layoutXPositionList;
          if ( !v154 )
            goto LABEL_231;
          right = v154->fields.right;
          upperRow1 = v117->fields.upperRow1;
LABEL_199:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            gameObject,
            *(UnityEngine_Vector2_o *)&right,
            v143);
          goto LABEL_200;
        }
        goto LABEL_200;
      }
      goto LABEL_232;
    }
    if ( v127 >= 3 )
    {
      v137 = this->fields.layoutYPositionList;
      if ( !v137 )
        goto LABEL_231;
      if ( v137->max_length > 1 )
      {
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        v138 = v137->m_Items[1];
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0LL);
        if ( !gameObject )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0LL);
        if ( !v138 )
          goto LABEL_231;
        v185.fields.y = v138->fields.upperLabel;
        v185.fields.x = v114;
        GameObjectExtensions__SetLocalPosition_34797564((UnityEngine_GameObject_o *)gameObject, v185, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v47,
                                                           0,
                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v140 = this->fields.layoutXPositionList;
        if ( !v140 )
          goto LABEL_231;
        v186.fields.x = v140->fields.left;
        v186.fields.y = v138->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v186, v139);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v47,
                                                           1,
                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v142 = this->fields.layoutXPositionList;
        if ( !v142 )
          goto LABEL_231;
        v187.fields.x = v142->fields.right;
        v187.fields.y = v138->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v187, v141);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v47,
                                                           2,
                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v144 = this->fields.layoutXPositionList;
        if ( !v144 )
          goto LABEL_231;
        right = v144->fields.left;
        upperRow1 = v138->fields.upperRow2;
        goto LABEL_199;
      }
      goto LABEL_232;
    }
  }
  v115 = v47->fields._size;
  if ( v115 )
  {
    if ( v113 >= 1 )
    {
      if ( v115 <= 2 )
      {
        v147 = this->fields.layoutYPositionList;
        if ( !v147 )
          goto LABEL_231;
        if ( v147->max_length > 2 )
        {
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v117 = v147->m_Items[2];
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !v117 )
            goto LABEL_231;
          v188.fields.y = v117->fields.lowerLabel;
          v188.fields.x = v114;
          GameObjectExtensions__SetLocalPosition_34797564((UnityEngine_GameObject_o *)gameObject, v188, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v189.fields.y = v117->fields.upperLabel;
          v189.fields.x = v114;
          GameObjectExtensions__SetLocalPosition_34797564(v148, v189, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v47,
                                                             0,
                                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v150 = this->fields.layoutXPositionList;
          if ( !v150 )
            goto LABEL_231;
          v190.fields.x = v150->fields.left;
          v190.fields.y = v117->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v190, v149);
          if ( v47->fields._size < 2 )
          {
LABEL_193:
            gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                               v173,
                                                               0,
                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v153 = this->fields.layoutXPositionList;
            if ( !v153 )
              goto LABEL_231;
            v191.fields.x = v153->fields.left;
            v191.fields.y = v117->fields.upperRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v191, v152);
            if ( v173->fields._size >= 2 )
            {
              v131 = (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
              goto LABEL_196;
            }
            goto LABEL_200;
          }
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v47,
                                                             1,
                                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v151 = this->fields.layoutXPositionList;
          if ( !v151 )
            goto LABEL_231;
          left = v151->fields.right;
          lowerRow1 = v117->fields.lowerRow1;
LABEL_192:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            gameObject,
            *(UnityEngine_Vector2_o *)&left,
            v123);
          goto LABEL_193;
        }
LABEL_232:
        sub_1C2209C(gameObject, v8);
      }
      if ( v115 == 3 )
      {
        v116 = this->fields.layoutYPositionList;
        if ( !v116 )
          goto LABEL_231;
        if ( v116->max_length > 3 )
        {
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v117 = v116->m_Items[3];
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !v117 )
            goto LABEL_231;
          v177.fields.y = v117->fields.lowerLabel;
          v177.fields.x = v114;
          GameObjectExtensions__SetLocalPosition_34797564((UnityEngine_GameObject_o *)gameObject, v177, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v178.fields.y = v117->fields.upperLabel;
          v178.fields.x = v114;
          GameObjectExtensions__SetLocalPosition_34797564(v118, v178, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v47,
                                                             0,
                                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v120 = this->fields.layoutXPositionList;
          if ( !v120 )
            goto LABEL_231;
          v179.fields.x = v120->fields.left;
          v179.fields.y = v117->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v179, v119);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v47,
                                                             1,
                                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v122 = this->fields.layoutXPositionList;
          if ( !v122 )
            goto LABEL_231;
          v180.fields.x = v122->fields.right;
          v180.fields.y = v117->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v180, v121);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v47,
                                                             2,
                                                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v124 = this->fields.layoutXPositionList;
          if ( !v124 )
            goto LABEL_231;
          left = v124->fields.left;
          lowerRow1 = v117->fields.lowerRow2;
          goto LABEL_192;
        }
        goto LABEL_232;
      }
    }
LABEL_158:
    if ( v174->fields.addFriendPoint > 0
      || v174->fields.addFollowFriendPoint > 0
      || v174->fields.addRecommendSupportFriendPoint >= 1 )
    {
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.noDataLabel;
      if ( !gameObject )
        goto LABEL_231;
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
      if ( !gameObject )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      noDataLabel = this->fields.noDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_7086/*"GET_FRIEND_POINT_NO_DATA"*/,
                                                         0LL);
      if ( !noDataLabel )
        goto LABEL_231;
      UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
      if ( !gameObject )
        goto LABEL_231;
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
      if ( !gameObject )
        goto LABEL_231;
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_GameObject__get_gameObject(
                                                         (UnityEngine_GameObject_o *)gameObject,
                                                         0LL);
      if ( !gameObject )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
      if ( !gameObject )
        goto LABEL_231;
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
      if ( !gameObject )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    goto LABEL_200;
  }
  if ( v113 < 1 )
    goto LABEL_158;
  v133 = this->fields.layoutYPositionList;
  if ( !v133 )
    goto LABEL_231;
  if ( !v133->max_length )
    goto LABEL_232;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_231;
  v117 = v133->m_Items[0];
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !v117 )
    goto LABEL_231;
  v183.fields.y = v117->fields.upperLabel;
  v183.fields.x = v114;
  GameObjectExtensions__SetLocalPosition_34797564((UnityEngine_GameObject_o *)gameObject, v183, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                     v173,
                                                     0,
                                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
  v135 = this->fields.layoutXPositionList;
  if ( !v135 )
    goto LABEL_231;
  v184.fields.x = v135->fields.left;
  v184.fields.y = v117->fields.upperRow1;
  FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v184, v134);
  if ( v173->fields._size >= 2 )
  {
    v131 = (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
LABEL_196:
    v132 = v173;
    goto LABEL_197;
  }
LABEL_200:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_231;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)TblUserMaster__getUserData(
                                                     (TblUserMaster_o *)Master_object,
                                                     *(_QWORD *)&gameObject[2].fields.friendPointLabel->fields.updateAnchors,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  v156 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v158 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v158 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v158->static_fields->FriendPointMax )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.friendPointMaxLabel;
    if ( gameObject )
    {
      gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        friendPointMaxLabel = this->fields.friendPointMaxLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_7077/*"GET_FRIEND_POINT_AT_LIMIT"*/,
                                                           0LL);
        if ( friendPointMaxLabel )
        {
          UILabel__set_text(friendPointMaxLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.basePanelSprite;
          if ( gameObject )
          {
            UIWidget__set_height((UIWidget_o *)gameObject, this->fields.confirmWindowHeightMaxFp, 0LL);
            GameObjectExtensions__SetLocalPositionY(this->fields.topParts, this->fields.topPartsPosYMaxFp, 0LL);
            gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.currentFriendPointLabel;
            if ( gameObject )
            {
              v160 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v160, this->fields.currentFpLabelYMaxFp, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.buttonParentObject,
                this->fields.buttonPosYMaxFp,
                0LL);
              goto LABEL_221;
            }
          }
        }
      }
    }
LABEL_231:
    sub_1C22094(gameObject, v8);
  }
LABEL_221:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v162 = LocalizationManager__Get((System_String_o *)StringLiteral_7085/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  addFollowFriendPoint = (int32_t)v156->fields.m_CancellationTokenSource;
  v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v163, v164, v165);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v162, v166, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_231;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  v167 = this->fields.currentFriendPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v167 )
    goto LABEL_231;
  UILabel__SetCondensedScale_48213524(
    v167,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_231;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7092/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_231;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v170);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7084/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_231;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v172 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v172, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__46_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v172, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetBackKeyForAndroid(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetEnableButton(
        FriendPointNoticeDialogComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20

  if ( (byte_4BDE5DA & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDE5DA = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_object, isEnable, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(this, buttonObj);
  }
}


void __fastcall FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v5; // x1
  RecommendSupportQuestEntity_array *List; // x0
  FriendPointNoticeDialogComponent___c_c *v7; // x8
  System_Object_array *v8; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v10; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool v18; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v20; // w20
  FriendPointNoticeDialogComponent_o *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_4BDE5DB & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_1C21E38(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__);
    sub_1C21E38(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_7087/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/);
    byte_4BDE5DB = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7087/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v7 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v8 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
    v7 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v7->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__53_0,
      v10,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__53_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = BasicHelper__Any_object__49917468(
          v8,
          (System_Func_T__bool__o *)_9__53_0,
          (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v20 = v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7087/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v21, this->fields.recommendedSupportButtonObject, v20, v22),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1C22094(Master_object, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v20, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v10; // x19
  const MethodInfo *v11; // x5
  bool v12; // w0

  if ( !servantInfo
    || (this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)servantInfo,
                                                       0LL)) == 0LL )
  {
    sub_1C22094(this, servantInfo);
  }
  v10 = this;
  if ( pointData )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v12 = FriendPointNoticeDialogSvtInfo__Set(
            servantInfo,
            pointData->fields.svtId,
            pointData->fields.userSvtId,
            questName,
            friendPoint,
            v11);
  }
  else
  {
    v12 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        UnityEngine_Vector2_o position,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4

  if ( !servantInfo )
    sub_1C22094(this, 0LL);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_34797564(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_43390300(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogSvtInfo_o *servantInfo,
        CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *pointData,
        System_String_o *questName,
        int32_t friendPoint,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *v10; // x19
  const MethodInfo *v11; // x5
  bool v12; // w0

  if ( !servantInfo
    || (this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)servantInfo,
                                                       0LL)) == 0LL )
  {
    sub_1C22094(this, servantInfo);
  }
  v10 = this;
  if ( pointData )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v12 = FriendPointNoticeDialogSvtInfo__Set(
            servantInfo,
            pointData->fields.svtId,
            pointData->fields.userSvtId,
            questName,
            friendPoint,
            v11);
  }
  else
  {
    v12 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v10, v12, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___Open_b__46_0(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall FriendPointNoticeDialogComponent__add_clickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *clickedFunc; // x21
  struct FriendPointNoticeDialogComponent_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDialogComponent_o *v10; // x0
  FriendPointNoticeDialogComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4BDE5D5 & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4BDE5D5 = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(clickedFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C5D328(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
  FriendPointNoticeDialogComponent__remove_clickedFunc(v10, v11, v12);
}


void __fastcall FriendPointNoticeDialogComponent__remove_clickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        FriendPointNoticeDialogComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *clickedFunc; // x21
  struct FriendPointNoticeDialogComponent_CallbackFunc_o **p_clickedFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDialogComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4BDE5D6 & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4BDE5D6 = 1;
  }
  clickedFunc = (System_Delegate_o *)this->fields.clickedFunc;
  p_clickedFunc = &this->fields.clickedFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(clickedFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendPointNoticeDialogComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C5D328(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
  FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent_CallbackFunc___ctor(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A65178;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A65130;
}


System_IAsyncResult_o *__fastcall FriendPointNoticeDialogComponent_CallbackFunc__BeginInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4BDE5E3 & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo);
    byte_4BDE5E3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__Invoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall FriendPointNoticeDialogComponent_PositionXData___ctor(
        FriendPointNoticeDialogComponent_PositionXData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent_PositionYData___ctor(
        FriendPointNoticeDialogComponent_PositionYData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDE5E4 & 1) == 0 )
  {
    sub_1C21E38(&FriendPointNoticeDialogComponent___c_TypeInfo);
    byte_4BDE5E4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall FriendPointNoticeDialogComponent___c___ctor(
        FriendPointNoticeDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c___Open_b__46_1(
        FriendPointNoticeDialogComponent___c_o *this,
        FriendPointNoticeDialogSvtInfo_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (FriendPointNoticeDialogComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)x,
                                                           0LL)) == 0LL )
  {
    sub_1C22094(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__53_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4BDE5E5 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1C21E38(&CondType_TypeInfo);
    byte_4BDE5E5 = 1;
  }
  if ( !entity )
    sub_1C22094(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c__DisplayClass51_0___ctor(
        FriendPointNoticeDialogComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent___c__DisplayClass51_0___Close_b__0(
        FriendPointNoticeDialogComponent___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  FriendPointNoticeDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (FriendPointNoticeDialogComponent__Init(_4__this, method), (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (FriendPointNoticeDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)_4__this,
                                                           0LL)) == 0LL )
  {
    sub_1C22094(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}