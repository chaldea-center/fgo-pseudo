void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB6754 & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDialogComponent_TypeInfo, v1);
    byte_4BB6754 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB6753 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB6753 = 1;
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

  FriendPointNoticeDialogComponent__Close_43279080(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_43279080(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  FriendPointNoticeDialogComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  FriendPointNoticeDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  FriendPointNoticeDialogComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  FriendPointNoticeDialogComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  System_Action_o *v30; // x21

  if ( (byte_4BB674B & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__, v5);
    sub_1C13D24(&FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo, v6);
    byte_4BB674B = 1;
  }
  v7 = sub_1C13F70(FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C13F80(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  FriendPointNoticeDialogComponent__SetEnableButton(v22, this->fields.decideButtonObject, 0, v23);
  FriendPointNoticeDialogComponent__SetEnableButton(v24, this->fields.friendSupportButtonObject, 0, v25);
  FriendPointNoticeDialogComponent__SetEnableButton(v26, this->fields.recommendedSupportButtonObject, 0, v27);
  FriendPointNoticeDialogComponent__SetEnableButton(v28, this->fields.closeButtonObject, 0, v29);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v30 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v30, 0LL);
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
  sub_1C13CC8(p_clickedFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BB6749 & 1) == 0 )
  {
    sub_1C13D24(&string_TypeInfo, method);
    byte_4BB6749 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C13F80(titleLabel, method);
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

  if ( (byte_4BB6752 & 1) == 0 )
  {
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent_OnClickCancel__, method);
    byte_4BB6752 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4BB674E & 1) == 0 )
  {
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__, method);
    byte_4BB674E = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C13D3C(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C13D08(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB674F & 1) == 0 )
  {
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__, method);
    byte_4BB674F = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
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

  if ( (byte_4BB6751 & 1) == 0 )
  {
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__, method);
    byte_4BB6751 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
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

  if ( (byte_4BB6750 & 1) == 0 )
  {
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__, method);
    byte_4BB6750 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C13D3C(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  FriendPointNoticeDialogSvtInfo_o *gameObject; // x0
  Il2CppObject *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v52; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v55; // x23
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct UILabel_o *v62; // x21
  System_String_o *v63; // x0
  struct UILabel_o *v64; // x21
  System_String_o *v65; // x22
  System_String_o *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  UILabel_o *v73; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  UILabel_o *v80; // x21
  UnityEngine_GameObject_o *v81; // x0
  System_Collections_Generic_List_object__o *v82; // x21
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v86; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v87; // x23
  il2cpp_array_size_t v88; // w26
  unsigned __int64 v89; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v91; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v93; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v94; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v95; // x8
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct FriendPointNoticeDialogSvtInfo_array *v102; // x8
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  System_Collections_Generic_IEnumerable_T__o *v107; // x23
  FriendPointNoticeDialogComponent___c_c *v108; // x0
  System_Action_object__o *_9__46_1; // x24
  Il2CppObject *v110; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x24
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x23
  const MethodInfo *v121; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v122; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x24
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x23
  const MethodInfo *v125; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v126; // x8
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  Il2CppClass **v146; // x0
  unsigned int localPosition; // s0
  int v148; // w8
  float v149; // s8
  int v150; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v151; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v152; // x20
  UnityEngine_GameObject_o *v153; // x0
  const MethodInfo *v154; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v155; // x8
  const MethodInfo *v156; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v157; // x8
  const MethodInfo *v158; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v159; // x8
  float left; // s0
  float lowerRow1; // s1
  int v162; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  const MethodInfo *v164; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *layoutXPositionList; // x8
  const MethodInfo_362CEFC *v166; // x2
  System_Collections_Generic_List_object__o *v167; // x0
  struct FriendPointNoticeDialogComponent_PositionYData_array *v168; // x8
  const MethodInfo *v169; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v170; // x8
  UILabel_o *noDataLabel; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *v172; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v173; // x20
  const MethodInfo *v174; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v175; // x8
  const MethodInfo *v176; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v177; // x8
  const MethodInfo *v178; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v179; // x8
  float right; // s0
  float upperRow1; // s1
  struct FriendPointNoticeDialogComponent_PositionYData_array *v182; // x8
  UnityEngine_GameObject_o *v183; // x0
  const MethodInfo *v184; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v185; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v186; // x8
  const MethodInfo *v187; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v188; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v189; // x8
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v191; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v193; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v195; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v197; // x22
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  Il2CppObject *v201; // x0
  UILabel_o *v202; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v205; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v207; // x20
  System_Collections_Generic_List_object__o *v208; // [xsp+8h] [xbp-88h]
  CommonUI_LoginResultData_o *v209; // [xsp+10h] [xbp-80h]
  int32_t addFollowFriendPoint; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v212; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v213; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v214; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v215; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v216; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v217; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v218; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v219; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v220; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v221; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v222; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v223; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v224; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v225; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v226; // 0:s0.4,4:s1.4

  if ( (byte_4BB674A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo, loginResultData);
    sub_1C13D24(&System_Action_TypeInfo, v7);
    sub_1C13D24(&BalanceConfig_TypeInfo, v8);
    sub_1C13D24(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___, v9);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_TblUserMaster___, v11);
    sub_1C13D24(&DataManager_TypeInfo, v12);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent__Open_b__46_0__, v14);
    sub_1C13D24(&FriendPointNoticeDialogComponent_TypeInfo, v15);
    sub_1C13D24(&int_TypeInfo, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__, v20);
    sub_1C13D24(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo, v21);
    sub_1C13D24(&LocalizationManager_TypeInfo, v22);
    sub_1C13D24(&NetworkManager_TypeInfo, v23);
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, v24);
    sub_1C13D24(&FriendPointNoticeDialogComponent___c_TypeInfo, v25);
    sub_1C13D24(&StringLiteral_7070/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, v26);
    sub_1C13D24(&StringLiteral_7077/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, v27);
    sub_1C13D24(&StringLiteral_7073/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, v28);
    sub_1C13D24(&StringLiteral_7072/*"GET_FRIEND_POINT_FP_NORMAL"*/, v29);
    sub_1C13D24(&StringLiteral_7079/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, v30);
    sub_1C13D24(&StringLiteral_118/*"  "*/, v31);
    sub_1C13D24(&StringLiteral_7069/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v32);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v33);
    sub_1C13D24(&StringLiteral_7068/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v34);
    sub_1C13D24(&StringLiteral_7078/*"GET_FRIEND_POINT_SERVANT_NAME"*/, v35);
    sub_1C13D24(&StringLiteral_7065/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v36);
    sub_1C13D24(&StringLiteral_1/*""*/, v37);
    sub_1C13D24(&StringLiteral_7071/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v38);
    sub_1C13D24(&StringLiteral_7080/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v39);
    sub_1C13D24(&StringLiteral_7064/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE"*/, v40);
    sub_1C13D24(&StringLiteral_7066/*"GET_EXP_INFO"*/, v41);
    byte_4BB674A = 1;
  }
  entity = 0LL;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.clickedFunc,
    (int64_t)clickedAction,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7080/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
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
  v52 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_231;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_7069/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v56, v57, v58);
    v60 = System_String__Format(v55, v59, 0LL);
    v61 = System_String__Concat_62967944(mText, v60, 0LL);
    UILabel__set_text(addedPointLabel, v61, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v62 = this->fields.addedPointLabel;
      if ( !v62 )
        goto LABEL_231;
      v63 = System_String__Concat_62967944(v62->fields.mText, (System_String_o *)StringLiteral_118/*"  "*/, 0LL);
      UILabel__set_text(v62, v63, 0LL);
    }
    v64 = this->fields.addedPointLabel;
    if ( !v64 )
      goto LABEL_231;
    v65 = v64->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v66 = LocalizationManager__Get((System_String_o *)StringLiteral_7068/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v67, v68, v69);
    v71 = System_String__Format(v66, v70, 0LL);
    v72 = System_String__Concat_62967944(v65, v71, 0LL);
    UILabel__set_text(v64, v72, 0LL);
    v52 = 0;
  }
  v73 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v73 )
    goto LABEL_231;
  UILabel__SetCondensedScale_48079996(
    v73,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_231;
LABEL_38:
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v81, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_7070/*"GET_FRIEND_POINT_CAPTION_POINT_FORMAT"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v76, v77, v78);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v75, v79, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_231;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v80 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v80 )
    goto LABEL_231;
  UILabel__SetCondensedScale_48079996(
    v80,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( v52 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_231;
    goto LABEL_38;
  }
LABEL_39:
  v82 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v82,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v208 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v208,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7078/*"GET_FRIEND_POINT_SERVANT_NAME"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_231;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
  v209 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_231;
    v86 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v86 >= 1 )
    {
      v87 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v88 = 0;
      v89 = 0LL;
      while ( v89 < (unsigned int)v86 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v88 >= (int)max_length )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v89];
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
          if ( v88 >= max_length )
            goto LABEL_232;
          v91 = addRecommendSupportFriendPointSvtList->m_Items[v88];
          if ( !v91 || !v87 )
            goto LABEL_231;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v87,
                                                             &entity,
                                                             v91->fields.questId,
                                                             (const MethodInfo_3238670 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_231;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v94 = this->fields.recommendedSupportServantInfoList;
          if ( !v94 )
            goto LABEL_231;
          if ( v88 >= v94->max_length )
            goto LABEL_232;
          FriendPointNoticeDialogComponent__SetupServantInfo_43276264(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v94->m_Items[v88],
            v91,
            monitor,
            v91->fields.friendPoint,
            v93);
          v95 = this->fields.recommendedSupportServantInfoList;
          if ( !v95 )
            goto LABEL_231;
          if ( v88 >= v95->max_length )
            goto LABEL_232;
          gameObject = v95->m_Items[v88];
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
            v102 = this->fields.recommendedSupportServantInfoList;
            if ( !v102 )
              goto LABEL_231;
            if ( v88 >= v102->max_length )
              goto LABEL_232;
            if ( !v82 )
              goto LABEL_231;
            v43 = (Il2CppObject *)v102->m_Items[v88];
            items = v82->fields._items;
            v104 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v82->fields._version;
            if ( !items )
              goto LABEL_231;
            size = v82->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v82,
                v43,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v106 = &items->obj.klass + size;
              v82->fields._size = size + 1;
              v106[4] = (Il2CppClass *)v43;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v106 + 4), (int64_t)v43, v96, v97, v98, v99, v100, v101);
            }
          }
          ++v88;
        }
        LODWORD(v86) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v89 >= (int)v86 )
          goto LABEL_84;
      }
      goto LABEL_232;
    }
  }
  else
  {
    v107 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v108 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v108 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__46_1 = (System_Action_object__o *)v108->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v108->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v108);
        v108 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v110 = (Il2CppObject *)v108->static_fields->__9;
      _9__46_1 = (System_Action_object__o *)sub_1C13F70(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__46_1, v110, Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__46_1;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__46_1,
        (int64_t)_9__46_1,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
    }
    BasicHelper__ForEach_object_(
      v107,
      (System_Action_T__o *)_9__46_1,
      (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7077/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_231;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  topAddFriendPointSvt = v209->fields.topAddFriendPointSvt;
  normalSupportServantInfo = this->fields.normalSupportServantInfo;
  if ( topAddFriendPointSvt )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7066/*"GET_EXP_INFO"*/,
                                                       0LL);
    v122 = v209->fields.topAddFriendPointSvt;
    if ( !v122 )
      goto LABEL_231;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v122->fields.friendPoint,
      v121);
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
  topAddFriendPointSvtEQ = v209->fields.topAddFriendPointSvtEQ;
  eventSupportServantInfo = this->fields.eventSupportServantInfo;
  if ( topAddFriendPointSvtEQ )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_7065/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/,
                                                       0LL);
    v126 = v209->fields.topAddFriendPointSvtEQ;
    if ( !v126 )
      goto LABEL_231;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v126->fields.friendPoint,
      v125);
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
    if ( !v208 )
      goto LABEL_231;
    v43 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v133 = v208->fields._items;
    v134 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v208->fields._version;
    if ( !v133 )
      goto LABEL_231;
    v135 = v208->fields._size;
    if ( (unsigned int)v135 >= v133->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v208,
        v43,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
    }
    else
    {
      v136 = &v133->obj.klass + v135;
      v208->fields._size = v135 + 1;
      v136[4] = (Il2CppClass *)v43;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v136 + 4), (int64_t)v43, v127, v128, v129, v130, v131, v132);
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
    if ( !v208 )
      goto LABEL_231;
    v43 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v143 = v208->fields._items;
    v144 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v208->fields._version;
    if ( !v143 )
      goto LABEL_231;
    v145 = v208->fields._size;
    if ( (unsigned int)v145 >= v143->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v208,
        v43,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    }
    else
    {
      v146 = &v143->obj.klass + v145;
      v208->fields._size = v145 + 1;
      v146[4] = (Il2CppClass *)v43;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v146 + 4), (int64_t)v43, v137, v138, v139, v140, v141, v142);
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
  if ( !v208 )
    goto LABEL_231;
  v148 = v208->fields._size;
  v149 = *(float *)&localPosition;
  if ( v148 )
  {
    if ( !v82 )
      goto LABEL_231;
  }
  else
  {
    if ( !v82 )
      goto LABEL_231;
    v162 = v82->fields._size;
    if ( (unsigned int)(v162 - 1) <= 1 )
    {
      layoutYPositionList = this->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_231;
      if ( layoutYPositionList->max_length )
      {
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        v152 = layoutYPositionList->m_Items[0];
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
        if ( !v152 )
          goto LABEL_231;
        v216.fields.y = v152->fields.upperLabel;
        v216.fields.x = v149;
        GameObjectExtensions__SetLocalPosition_34711680((UnityEngine_GameObject_o *)gameObject, v216, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v82,
                                                           0,
                                                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        layoutXPositionList = this->fields.layoutXPositionList;
        if ( !layoutXPositionList )
          goto LABEL_231;
        v217.fields.x = layoutXPositionList->fields.left;
        v217.fields.y = v152->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v217, v164);
        if ( v82->fields._size >= 2 )
        {
          v166 = (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
          v167 = v82;
LABEL_197:
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v167,
                                                             1,
                                                             v166);
          v189 = this->fields.layoutXPositionList;
          if ( !v189 )
            goto LABEL_231;
          right = v189->fields.right;
          upperRow1 = v152->fields.upperRow1;
LABEL_199:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            gameObject,
            *(UnityEngine_Vector2_o *)&right,
            v178);
          goto LABEL_200;
        }
        goto LABEL_200;
      }
      goto LABEL_232;
    }
    if ( v162 >= 3 )
    {
      v172 = this->fields.layoutYPositionList;
      if ( !v172 )
        goto LABEL_231;
      if ( v172->max_length > 1 )
      {
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        v173 = v172->m_Items[1];
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
        if ( !v173 )
          goto LABEL_231;
        v220.fields.y = v173->fields.upperLabel;
        v220.fields.x = v149;
        GameObjectExtensions__SetLocalPosition_34711680((UnityEngine_GameObject_o *)gameObject, v220, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v82,
                                                           0,
                                                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v175 = this->fields.layoutXPositionList;
        if ( !v175 )
          goto LABEL_231;
        v221.fields.x = v175->fields.left;
        v221.fields.y = v173->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v221, v174);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v82,
                                                           1,
                                                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v177 = this->fields.layoutXPositionList;
        if ( !v177 )
          goto LABEL_231;
        v222.fields.x = v177->fields.right;
        v222.fields.y = v173->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v222, v176);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v82,
                                                           2,
                                                           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v179 = this->fields.layoutXPositionList;
        if ( !v179 )
          goto LABEL_231;
        right = v179->fields.left;
        upperRow1 = v173->fields.upperRow2;
        goto LABEL_199;
      }
      goto LABEL_232;
    }
  }
  v150 = v82->fields._size;
  if ( v150 )
  {
    if ( v148 >= 1 )
    {
      if ( v150 <= 2 )
      {
        v182 = this->fields.layoutYPositionList;
        if ( !v182 )
          goto LABEL_231;
        if ( v182->max_length > 2 )
        {
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v152 = v182->m_Items[2];
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !v152 )
            goto LABEL_231;
          v223.fields.y = v152->fields.lowerLabel;
          v223.fields.x = v149;
          GameObjectExtensions__SetLocalPosition_34711680((UnityEngine_GameObject_o *)gameObject, v223, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v183 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v224.fields.y = v152->fields.upperLabel;
          v224.fields.x = v149;
          GameObjectExtensions__SetLocalPosition_34711680(v183, v224, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v82,
                                                             0,
                                                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v185 = this->fields.layoutXPositionList;
          if ( !v185 )
            goto LABEL_231;
          v225.fields.x = v185->fields.left;
          v225.fields.y = v152->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v225, v184);
          if ( v82->fields._size < 2 )
          {
LABEL_193:
            gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                               v208,
                                                               0,
                                                               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v188 = this->fields.layoutXPositionList;
            if ( !v188 )
              goto LABEL_231;
            v226.fields.x = v188->fields.left;
            v226.fields.y = v152->fields.upperRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v226, v187);
            if ( v208->fields._size >= 2 )
            {
              v166 = (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
              goto LABEL_196;
            }
            goto LABEL_200;
          }
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v82,
                                                             1,
                                                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v186 = this->fields.layoutXPositionList;
          if ( !v186 )
            goto LABEL_231;
          left = v186->fields.right;
          lowerRow1 = v152->fields.lowerRow1;
LABEL_192:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            gameObject,
            *(UnityEngine_Vector2_o *)&left,
            v158);
          goto LABEL_193;
        }
LABEL_232:
        sub_1C13F88(gameObject, v43);
      }
      if ( v150 == 3 )
      {
        v151 = this->fields.layoutYPositionList;
        if ( !v151 )
          goto LABEL_231;
        if ( v151->max_length > 3 )
        {
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v152 = v151->m_Items[3];
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !v152 )
            goto LABEL_231;
          v212.fields.y = v152->fields.lowerLabel;
          v212.fields.x = v149;
          GameObjectExtensions__SetLocalPosition_34711680((UnityEngine_GameObject_o *)gameObject, v212, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v153 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v213.fields.y = v152->fields.upperLabel;
          v213.fields.x = v149;
          GameObjectExtensions__SetLocalPosition_34711680(v153, v213, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v82,
                                                             0,
                                                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v155 = this->fields.layoutXPositionList;
          if ( !v155 )
            goto LABEL_231;
          v214.fields.x = v155->fields.left;
          v214.fields.y = v152->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v214, v154);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v82,
                                                             1,
                                                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v157 = this->fields.layoutXPositionList;
          if ( !v157 )
            goto LABEL_231;
          v215.fields.x = v157->fields.right;
          v215.fields.y = v152->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v215, v156);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v82,
                                                             2,
                                                             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v159 = this->fields.layoutXPositionList;
          if ( !v159 )
            goto LABEL_231;
          left = v159->fields.left;
          lowerRow1 = v152->fields.lowerRow2;
          goto LABEL_192;
        }
        goto LABEL_232;
      }
    }
LABEL_158:
    if ( v209->fields.addFriendPoint > 0
      || v209->fields.addFollowFriendPoint > 0
      || v209->fields.addRecommendSupportFriendPoint >= 1 )
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
                                                         (System_String_o *)StringLiteral_7073/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/,
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
  if ( v148 < 1 )
    goto LABEL_158;
  v168 = this->fields.layoutYPositionList;
  if ( !v168 )
    goto LABEL_231;
  if ( !v168->max_length )
    goto LABEL_232;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_231;
  v152 = v168->m_Items[0];
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !v152 )
    goto LABEL_231;
  v218.fields.y = v152->fields.upperLabel;
  v218.fields.x = v149;
  GameObjectExtensions__SetLocalPosition_34711680((UnityEngine_GameObject_o *)gameObject, v218, 0LL);
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
                                                     v208,
                                                     0,
                                                     (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
  v170 = this->fields.layoutXPositionList;
  if ( !v170 )
    goto LABEL_231;
  v219.fields.x = v170->fields.left;
  v219.fields.y = v152->fields.upperRow1;
  FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v219, v169);
  if ( v208->fields._size >= 2 )
  {
    v166 = (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
LABEL_196:
    v167 = v208;
    goto LABEL_197;
  }
LABEL_200:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v43);
    byte_4BAF1E5 = 1;
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
  v191 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v193 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v193 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v193->static_fields->FriendPointMax )
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
                                                           (System_String_o *)StringLiteral_7064/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE"*/,
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
              v195 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v195, this->fields.currentFpLabelYMaxFp, 0LL);
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
    sub_1C13F80(gameObject, v43);
  }
LABEL_221:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v197 = LocalizationManager__Get((System_String_o *)StringLiteral_7072/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
  addFollowFriendPoint = (int32_t)v191->fields.m_CancellationTokenSource;
  v201 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v198, v199, v200);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v197, v201, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_231;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  v202 = this->fields.currentFriendPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v202 )
    goto LABEL_231;
  UILabel__SetCondensedScale_48079996(
    v202,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_231;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7079/*"GET_FRIEND_POINT_SERVANT_NAME_NORARE"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_231;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v205);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7071/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_231;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v207 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v207, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__46_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v207, 0, 0LL);
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
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4BB674C & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    this = (FriendPointNoticeDialogComponent_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    byte_4BB674C = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1C13F80(this, buttonObj);
  }
}


void __fastcall FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v12; // x1
  RecommendSupportQuestEntity_array *List; // x0
  FriendPointNoticeDialogComponent___c_c *v14; // x8
  System_Object_array *v15; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v17; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool v25; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v27; // w20
  FriendPointNoticeDialogComponent_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_4BB674D & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__, v7);
    sub_1C13D24(&FriendPointNoticeDialogComponent___c_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_7074/*"GET_FRIEND_POINT_GACHA_BTN"*/, v9);
    byte_4BB674D = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7074/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v14 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v15 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
    v14 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v14->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__53_0,
      v17,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__53_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = BasicHelper__Any_object__49783940(
          v15,
          (System_Func_T__bool__o *)_9__53_0,
          (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v27 = v25;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7074/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v28, this->fields.recommendedSupportButtonObject, v27, v29),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1C13F80(Master_object, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v27, 0LL);
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
    sub_1C13F80(this, servantInfo);
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
    sub_1C13F80(this, 0LL);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_34711680(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_43276264(
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
    sub_1C13F80(this, servantInfo);
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

  if ( (byte_4BB6747 & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_4BB6747 = 1;
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
    v8 = sub_1C4F214(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C14240(v7);
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

  if ( (byte_4BB6748 & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_4BB6748 = 1;
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
    v8 = sub_1C4F214(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C14240(v7);
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
  sub_1C13CC8(
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
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A573D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A57388;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4BB6755 & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4BB6755 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB6756 & 1) == 0 )
  {
    sub_1C13D24(&FriendPointNoticeDialogComponent___c_TypeInfo, v1);
    byte_4BB6756 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__53_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4BB6757 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1C13D24(&CondType_TypeInfo, entity);
    byte_4BB6757 = 1;
  }
  if ( !entity )
    sub_1C13F80(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38735352(questId, -1, 0, 0LL);
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
    sub_1C13F80(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}