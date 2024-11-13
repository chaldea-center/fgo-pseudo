void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B181D6 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogComponent_TypeInfo, v1, v2);
    byte_4B181D6 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B181D5 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B181D5 = 1;
  }
  this->fields.addedPointLabelCenterPosY = 165.0;
  *(_QWORD *)&this->fields.servantNameLabelMaxWidth = 0x25843900000LL;
  *(_QWORD *)&this->fields.topPartsPosYMaxFp = 0xC31E000042200000LL;
  this->fields.buttonPosYMaxFp = -219.0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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

  FriendPointNoticeDialogComponent__Close_42824388(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_42824388(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  FriendPointNoticeDialogComponent_o *v25; // x0
  const MethodInfo *v26; // x3
  FriendPointNoticeDialogComponent_o *v27; // x0
  const MethodInfo *v28; // x3
  FriendPointNoticeDialogComponent_o *v29; // x0
  const MethodInfo *v30; // x3
  FriendPointNoticeDialogComponent_o *v31; // x0
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x21

  if ( (byte_4B181CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__, v6, v7);
    sub_1BCA7E0(&FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo, v8, v9);
    byte_4B181CD = 1;
  }
  v10 = sub_1BCAA2C(FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v19, v20, v21, v22, v23, v24);
  FriendPointNoticeDialogComponent__SetEnableButton(v25, this->fields.decideButtonObject, 0, v26);
  FriendPointNoticeDialogComponent__SetEnableButton(v27, this->fields.friendSupportButtonObject, 0, v28);
  FriendPointNoticeDialogComponent__SetEnableButton(v29, this->fields.recommendedSupportButtonObject, 0, v30);
  FriendPointNoticeDialogComponent__SetEnableButton(v31, this->fields.closeButtonObject, 0, v32);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v10,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v36, 0LL);
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
  sub_1BCA784(p_clickedFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B181CB & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B181CB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickCancel(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B181D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent_OnClickCancel__, method, v2);
    byte_4B181D4 = 1;
  }
  v4 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v6);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B181D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__, method, v2);
    byte_4B181D0 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B181D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__, method, v2);
    byte_4B181D1 = 1;
  }
  v4 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 0, v6);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToRecommendedSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B181D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__, method, v2);
    byte_4B181D3 = 1;
  }
  v4 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 2, v6);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B181D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__, method, v2);
    byte_4B181D2 = 1;
  }
  v4 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent__Open(
        FriendPointNoticeDialogComponent_o *this,
        CommonUI_LoginResultData_o *loginResultData,
        FriendPointNoticeDialogComponent_CallbackFunc_o *clickedAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  int64_t gameObject; // x0
  Il2CppObject *v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v88; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v91; // x23
  Il2CppObject *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  struct UILabel_o *v95; // x21
  System_String_o *v96; // x0
  struct UILabel_o *v97; // x21
  System_String_o *v98; // x22
  System_String_o *v99; // x23
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  UILabel_o *v103; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v105; // x22
  Il2CppObject *v106; // x0
  UILabel_o *v107; // x21
  __int64 v108; // x2
  __int64 v109; // x3
  UnityEngine_GameObject_o *v110; // x0
  System_Collections_Generic_List_object__o *v111; // x21
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x1
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  __int64 v117; // x1
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  __int64 v119; // x2
  __int64 v120; // x3
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v122; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v123; // x23
  il2cpp_array_size_t v124; // w26
  unsigned __int64 v125; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v127; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v129; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v130; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v131; // x8
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  struct FriendPointNoticeDialogSvtInfo_array *v138; // x8
  struct System_Object_array *items; // x8
  _QWORD *v140; // x9
  __int64 size; // x10
  Il2CppClass **v142; // x0
  System_Collections_Generic_IEnumerable_T__o *v143; // x23
  FriendPointNoticeDialogComponent___c_c *v144; // x0
  System_Action_object__o *_9__46_1; // x24
  Il2CppObject *v146; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x24
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x23
  const MethodInfo *v157; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v158; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x24
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x23
  const MethodInfo *v161; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v162; // x8
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  Il2CppClass **v172; // x0
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  struct System_Object_array *v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  Il2CppClass **v182; // x0
  unsigned int localPosition; // s0
  int v184; // w8
  float v185; // s8
  int v186; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v187; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v188; // x20
  UnityEngine_GameObject_o *v189; // x0
  const MethodInfo *v190; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v191; // x8
  const MethodInfo *v192; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v193; // x8
  const MethodInfo *v194; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v195; // x8
  float left; // s0
  float lowerRow1; // s1
  int v198; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  const MethodInfo *v200; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *layoutXPositionList; // x8
  const MethodInfo_35A198C *v202; // x2
  System_Collections_Generic_List_object__o *v203; // x0
  struct FriendPointNoticeDialogComponent_PositionYData_array *v204; // x8
  const MethodInfo *v205; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v206; // x8
  __int64 v207; // x1
  UILabel_o *noDataLabel; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *v209; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v210; // x20
  const MethodInfo *v211; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v212; // x8
  const MethodInfo *v213; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v214; // x8
  const MethodInfo *v215; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v216; // x8
  float right; // s0
  float upperRow1; // s1
  struct FriendPointNoticeDialogComponent_PositionYData_array *v219; // x8
  UnityEngine_GameObject_o *v220; // x0
  const MethodInfo *v221; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v222; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v223; // x8
  const MethodInfo *v224; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v225; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v226; // x8
  __int64 v227; // x1
  Il2CppObject *Master_object; // x20
  int64_t v229; // x20
  int32_t v230; // w21
  BalanceConfig_c *v231; // x0
  __int64 v232; // x1
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v234; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v236; // x22
  Il2CppObject *v237; // x0
  UILabel_o *v238; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v241; // x1
  UILabel_o *decideButtonLabel; // x20
  __int64 v243; // x1
  __int64 v244; // x2
  __int64 v245; // x3
  System_Action_o *v246; // x20
  System_Collections_Generic_List_object__o *v247; // [xsp+8h] [xbp-88h]
  CommonUI_LoginResultData_o *v248; // [xsp+10h] [xbp-80h]
  int32_t addFollowFriendPoint; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v251; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v252; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v253; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v254; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v255; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v256; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v257; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v258; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v259; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v260; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v261; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v262; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v263; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v264; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v265; // 0:s0.4,4:s1.4

  if ( (byte_4B181CC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo, loginResultData, clickedAction);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TblUserMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent__Open_b__46_0__, v21, v22);
    sub_1BCA7E0(&FriendPointNoticeDialogComponent_TypeInfo, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo, v35, v36);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, v41, v42);
    sub_1BCA7E0(&FriendPointNoticeDialogComponent___c_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_7030/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_7037/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_7033/*"GET_FRIEND_POINT_NO_DATA"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_7032/*"GET_FRIEND_POINT_NOW_POINT"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_7039/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_117/*"  "*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_7029/*"GET_FRIEND_POINT_FP_NORMAL"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_7028/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_7038/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_7025/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_7031/*"GET_FRIEND_POINT_GACHA_BTN"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_7040/*"GET_FRIEND_POINT_TITLE"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_7024/*"GET_FRIEND_POINT_AT_LIMIT"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_7026/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v75, v76);
    byte_4B181CC = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickedFunc,
    (int64_t)clickedAction,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  gameObject = (int64_t)this->fields.noDataLabel;
  this->fields.state = 1;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v85);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7040/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_227;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)this->fields.addedPointLabel;
  if ( !gameObject )
    goto LABEL_227;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !loginResultData )
    goto LABEL_227;
  addFriendPoint = loginResultData->fields.addFriendPoint;
  v88 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_227;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
    v91 = LocalizationManager__Get((System_String_o *)StringLiteral_7029/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v93 = System_String__Format(v91, v92, 0LL);
    v94 = System_String__Concat_62401220(mText, v93, 0LL);
    UILabel__set_text(addedPointLabel, v94, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v95 = this->fields.addedPointLabel;
      if ( !v95 )
        goto LABEL_227;
      v96 = System_String__Concat_62401220(v95->fields.mText, (System_String_o *)StringLiteral_117/*"  "*/, 0LL);
      UILabel__set_text(v95, v96, 0LL);
    }
    v97 = this->fields.addedPointLabel;
    if ( !v97 )
      goto LABEL_227;
    v98 = v97->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_7028/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v101 = System_String__Format(v99, v100, 0LL);
    v102 = System_String__Concat_62401220(v98, v101, 0LL);
    UILabel__set_text(v97, v102, 0LL);
    v88 = 0;
  }
  v103 = this->fields.addedPointLabel;
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo, v78);
  if ( !v103 )
    goto LABEL_227;
  UILabel__SetCondensedScale_47600808(
    v103,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (int64_t)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_227;
LABEL_38:
    v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v110, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_7030/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
  gameObject = (int64_t)System_String__Format(v105, v106, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_227;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  v107 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo, v78);
  if ( !v107 )
    goto LABEL_227;
  UILabel__SetCondensedScale_47600808(
    v107,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  if ( v88 )
  {
    gameObject = (int64_t)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_227;
    goto LABEL_38;
  }
LABEL_39:
  v111 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo,
                                                        v78,
                                                        v108,
                                                        v109);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v247 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo,
                                                        v112,
                                                        v113,
                                                        v114);
  System_Collections_Generic_List_object____ctor(
    v247,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v115);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7038/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_227;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v117);
  gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  v248 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_227;
    v122 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v122 >= 1 )
    {
      v123 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v124 = 0;
      v125 = 0LL;
      while ( v125 < (unsigned int)v122 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v124 >= (int)max_length )
        {
          gameObject = (int64_t)recommendedSupportServantInfoList->m_Items[v125];
          if ( !gameObject )
            goto LABEL_227;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_227;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( v124 >= max_length )
            goto LABEL_228;
          v127 = addRecommendSupportFriendPointSvtList->m_Items[v124];
          if ( !v127 || !v123 )
            goto LABEL_227;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = DataMasterBase_object__object__int___TryGetEntity(
                         v123,
                         &entity,
                         v127->fields.questId,
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( (gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_227;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v130 = this->fields.recommendedSupportServantInfoList;
          if ( !v130 )
            goto LABEL_227;
          if ( v124 >= v130->max_length )
            goto LABEL_228;
          FriendPointNoticeDialogComponent__SetupServantInfo_42821588(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v130->m_Items[v124],
            v127,
            monitor,
            v127->fields.friendPoint,
            v129);
          v131 = this->fields.recommendedSupportServantInfoList;
          if ( !v131 )
            goto LABEL_227;
          if ( v124 >= v131->max_length )
            goto LABEL_228;
          gameObject = (int64_t)v131->m_Items[v124];
          if ( !gameObject )
            goto LABEL_227;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_227;
          gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( (gameObject & 1) != 0 )
          {
            v138 = this->fields.recommendedSupportServantInfoList;
            if ( !v138 )
              goto LABEL_227;
            if ( v124 >= v138->max_length )
              goto LABEL_228;
            if ( !v111 )
              goto LABEL_227;
            v78 = (Il2CppObject *)v138->m_Items[v124];
            items = v111->fields._items;
            v140 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v111->fields._version;
            if ( !items )
              goto LABEL_227;
            size = v111->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v111,
                v78,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
            }
            else
            {
              v142 = &items->obj.klass + size;
              v111->fields._size = size + 1;
              v142[4] = (Il2CppClass *)v78;
              sub_1BCA784((PartyOrganizationUtility_o *)(v142 + 4), (int64_t)v78, v132, v133, v134, v135, v136, v137);
            }
          }
          ++v124;
        }
        LODWORD(v122) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v125 >= (int)v122 )
          goto LABEL_84;
      }
      goto LABEL_228;
    }
  }
  else
  {
    v143 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v144 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo, v78);
      v144 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__46_1 = (System_Action_object__o *)v144->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v144->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v144, v78);
        v144 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v146 = (Il2CppObject *)v144->static_fields->__9;
      _9__46_1 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo,
                                              v78,
                                              v119,
                                              v120);
      System_Action_object____ctor(_9__46_1, v146, Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__46_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__46_1,
        (int64_t)_9__46_1,
        v148,
        v149,
        v150,
        v151,
        v152,
        v153);
    }
    BasicHelper__ForEach_object_(
      v143,
      (System_Action_T__o *)_9__46_1,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7037/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_227;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  topAddFriendPointSvt = v248->fields.topAddFriendPointSvt;
  normalSupportServantInfo = this->fields.normalSupportServantInfo;
  if ( topAddFriendPointSvt )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7026/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
    v158 = v248->fields.topAddFriendPointSvt;
    if ( !v158 )
      goto LABEL_227;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v158->fields.friendPoint,
      v157);
  }
  else
  {
    if ( !normalSupportServantInfo )
      goto LABEL_227;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.normalSupportServantInfo,
                            0LL);
    if ( !gameObject )
      goto LABEL_227;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  topAddFriendPointSvtEQ = v248->fields.topAddFriendPointSvtEQ;
  eventSupportServantInfo = this->fields.eventSupportServantInfo;
  if ( topAddFriendPointSvtEQ )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7025/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
    v162 = v248->fields.topAddFriendPointSvtEQ;
    if ( !v162 )
      goto LABEL_227;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v162->fields.friendPoint,
      v161);
  }
  else
  {
    if ( !eventSupportServantInfo )
      goto LABEL_227;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.eventSupportServantInfo,
                            0LL);
    if ( !gameObject )
      goto LABEL_227;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  gameObject = (int64_t)this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v247 )
      goto LABEL_227;
    v78 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v169 = v247->fields._items;
    v170 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v247->fields._version;
    if ( !v169 )
      goto LABEL_227;
    v171 = v247->fields._size;
    if ( (unsigned int)v171 >= v169->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v247,
        v78,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
    }
    else
    {
      v172 = &v169->obj.klass + v171;
      v247->fields._size = v171 + 1;
      v172[4] = (Il2CppClass *)v78;
      sub_1BCA784((PartyOrganizationUtility_o *)(v172 + 4), (int64_t)v78, v163, v164, v165, v166, v167, v168);
    }
  }
  gameObject = (int64_t)this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v247 )
      goto LABEL_227;
    v78 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v179 = v247->fields._items;
    v180 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v247->fields._version;
    if ( !v179 )
      goto LABEL_227;
    v181 = v247->fields._size;
    if ( (unsigned int)v181 >= v179->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v247,
        v78,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
    }
    else
    {
      v182 = &v179->obj.klass + v181;
      v247->fields._size = v181 + 1;
      v182[4] = (Il2CppClass *)v78;
      sub_1BCA784((PartyOrganizationUtility_o *)(v182 + 4), (int64_t)v78, v173, v174, v175, v176, v177, v178);
    }
  }
  gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !v247 )
    goto LABEL_227;
  v184 = v247->fields._size;
  v185 = *(float *)&localPosition;
  if ( v184 )
  {
    if ( !v111 )
      goto LABEL_227;
  }
  else
  {
    if ( !v111 )
      goto LABEL_227;
    v198 = v111->fields._size;
    if ( (unsigned int)(v198 - 1) <= 1 )
    {
      layoutYPositionList = this->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_227;
      if ( layoutYPositionList->max_length )
      {
        gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        v188 = layoutYPositionList->m_Items[0];
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_227;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v188 )
          goto LABEL_227;
        v255.fields.y = v188->fields.upperLabel;
        v255.fields.x = v185;
        GameObjectExtensions__SetLocalPosition_34330940((UnityEngine_GameObject_o *)gameObject, v255, 0LL);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v111,
                                0,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        layoutXPositionList = this->fields.layoutXPositionList;
        if ( !layoutXPositionList )
          goto LABEL_227;
        v256.fields.x = layoutXPositionList->fields.left;
        v256.fields.y = v188->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
          this,
          (FriendPointNoticeDialogSvtInfo_o *)gameObject,
          v256,
          v200);
        if ( v111->fields._size >= 2 )
        {
          v202 = (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
          v203 = v111;
LABEL_197:
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(v203, 1, v202);
          v226 = this->fields.layoutXPositionList;
          if ( !v226 )
            goto LABEL_227;
          right = v226->fields.right;
          upperRow1 = v188->fields.upperRow1;
LABEL_199:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            *(UnityEngine_Vector2_o *)&right,
            v215);
          goto LABEL_200;
        }
        goto LABEL_200;
      }
      goto LABEL_228;
    }
    if ( v198 >= 3 )
    {
      v209 = this->fields.layoutYPositionList;
      if ( !v209 )
        goto LABEL_227;
      if ( v209->max_length > 1 )
      {
        gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        v210 = v209->m_Items[1];
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_227;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v210 )
          goto LABEL_227;
        v259.fields.y = v210->fields.upperLabel;
        v259.fields.x = v185;
        GameObjectExtensions__SetLocalPosition_34330940((UnityEngine_GameObject_o *)gameObject, v259, 0LL);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v111,
                                0,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v212 = this->fields.layoutXPositionList;
        if ( !v212 )
          goto LABEL_227;
        v260.fields.x = v212->fields.left;
        v260.fields.y = v210->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
          this,
          (FriendPointNoticeDialogSvtInfo_o *)gameObject,
          v260,
          v211);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v111,
                                1,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v214 = this->fields.layoutXPositionList;
        if ( !v214 )
          goto LABEL_227;
        v261.fields.x = v214->fields.right;
        v261.fields.y = v210->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
          this,
          (FriendPointNoticeDialogSvtInfo_o *)gameObject,
          v261,
          v213);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v111,
                                2,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v216 = this->fields.layoutXPositionList;
        if ( !v216 )
          goto LABEL_227;
        right = v216->fields.left;
        upperRow1 = v210->fields.upperRow2;
        goto LABEL_199;
      }
      goto LABEL_228;
    }
  }
  v186 = v111->fields._size;
  if ( v186 )
  {
    if ( v184 >= 1 )
    {
      if ( v186 <= 2 )
      {
        v219 = this->fields.layoutYPositionList;
        if ( !v219 )
          goto LABEL_227;
        if ( v219->max_length > 2 )
        {
          gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v188 = v219->m_Items[2];
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !v188 )
            goto LABEL_227;
          v262.fields.y = v188->fields.lowerLabel;
          v262.fields.x = v185;
          GameObjectExtensions__SetLocalPosition_34330940((UnityEngine_GameObject_o *)gameObject, v262, 0LL);
          gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v220 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v263.fields.y = v188->fields.upperLabel;
          v263.fields.x = v185;
          GameObjectExtensions__SetLocalPosition_34330940(v220, v263, 0LL);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v111,
                                  0,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v222 = this->fields.layoutXPositionList;
          if ( !v222 )
            goto LABEL_227;
          v264.fields.x = v222->fields.left;
          v264.fields.y = v188->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            v264,
            v221);
          if ( v111->fields._size < 2 )
          {
LABEL_193:
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v247,
                                    0,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v225 = this->fields.layoutXPositionList;
            if ( !v225 )
              goto LABEL_227;
            v265.fields.x = v225->fields.left;
            v265.fields.y = v188->fields.upperRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
              this,
              (FriendPointNoticeDialogSvtInfo_o *)gameObject,
              v265,
              v224);
            if ( v247->fields._size >= 2 )
            {
              v202 = (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
              goto LABEL_196;
            }
            goto LABEL_200;
          }
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v111,
                                  1,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v223 = this->fields.layoutXPositionList;
          if ( !v223 )
            goto LABEL_227;
          left = v223->fields.right;
          lowerRow1 = v188->fields.lowerRow1;
LABEL_192:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            *(UnityEngine_Vector2_o *)&left,
            v194);
          goto LABEL_193;
        }
LABEL_228:
        sub_1BCAA44(gameObject, v78);
      }
      if ( v186 == 3 )
      {
        v187 = this->fields.layoutYPositionList;
        if ( !v187 )
          goto LABEL_227;
        if ( v187->max_length > 3 )
        {
          gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v188 = v187->m_Items[3];
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !v188 )
            goto LABEL_227;
          v251.fields.y = v188->fields.lowerLabel;
          v251.fields.x = v185;
          GameObjectExtensions__SetLocalPosition_34330940((UnityEngine_GameObject_o *)gameObject, v251, 0LL);
          gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v189 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v252.fields.y = v188->fields.upperLabel;
          v252.fields.x = v185;
          GameObjectExtensions__SetLocalPosition_34330940(v189, v252, 0LL);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v111,
                                  0,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v191 = this->fields.layoutXPositionList;
          if ( !v191 )
            goto LABEL_227;
          v253.fields.x = v191->fields.left;
          v253.fields.y = v188->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            v253,
            v190);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v111,
                                  1,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v193 = this->fields.layoutXPositionList;
          if ( !v193 )
            goto LABEL_227;
          v254.fields.x = v193->fields.right;
          v254.fields.y = v188->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            v254,
            v192);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v111,
                                  2,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v195 = this->fields.layoutXPositionList;
          if ( !v195 )
            goto LABEL_227;
          left = v195->fields.left;
          lowerRow1 = v188->fields.lowerRow2;
          goto LABEL_192;
        }
        goto LABEL_228;
      }
    }
LABEL_158:
    if ( v248->fields.addFriendPoint > 0
      || v248->fields.addFollowFriendPoint > 0
      || v248->fields.addRecommendSupportFriendPoint >= 1 )
    {
      gameObject = (int64_t)this->fields.noDataLabel;
      if ( !gameObject )
        goto LABEL_227;
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_227;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      noDataLabel = this->fields.noDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v207);
      gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7033/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
      if ( !noDataLabel )
        goto LABEL_227;
      UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
      if ( !gameObject )
        goto LABEL_227;
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_227;
      gameObject = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_227;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
      if ( !gameObject )
        goto LABEL_227;
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_227;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    goto LABEL_200;
  }
  if ( v184 < 1 )
    goto LABEL_158;
  v204 = this->fields.layoutYPositionList;
  if ( !v204 )
    goto LABEL_227;
  if ( !v204->max_length )
    goto LABEL_228;
  gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_227;
  v188 = v204->m_Items[0];
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !v188 )
    goto LABEL_227;
  v257.fields.y = v188->fields.upperLabel;
  v257.fields.x = v185;
  GameObjectExtensions__SetLocalPosition_34330940((UnityEngine_GameObject_o *)gameObject, v257, 0LL);
  gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v247,
                          0,
                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
  v206 = this->fields.layoutXPositionList;
  if ( !v206 )
    goto LABEL_227;
  v258.fields.x = v206->fields.left;
  v258.fields.y = v188->fields.upperRow1;
  FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
    this,
    (FriendPointNoticeDialogSvtInfo_o *)gameObject,
    v258,
    v205);
  if ( v247->fields._size >= 2 )
  {
    v202 = (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
LABEL_196:
    v203 = v247;
    goto LABEL_197;
  }
LABEL_200:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v78);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v227);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_227;
  gameObject = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)Master_object, gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  v229 = gameObject;
  v230 = *(_DWORD *)(gameObject + 24);
  v231 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v78);
    v231 = BalanceConfig_TypeInfo;
  }
  if ( v230 >= v231->static_fields->FriendPointMax )
  {
    gameObject = (int64_t)this->fields.friendPointMaxLabel;
    if ( gameObject )
    {
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        friendPointMaxLabel = this->fields.friendPointMaxLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v232);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7024/*"GET_FRIEND_POINT_AT_LIMIT"*/, 0LL);
        if ( friendPointMaxLabel )
        {
          UILabel__set_text(friendPointMaxLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (int64_t)this->fields.basePanelSprite;
          if ( gameObject )
          {
            UIWidget__set_height((UIWidget_o *)gameObject, this->fields.confirmWindowHeightMaxFp, 0LL);
            GameObjectExtensions__SetLocalPositionY(this->fields.topParts, this->fields.topPartsPosYMaxFp, 0LL);
            gameObject = (int64_t)this->fields.currentFriendPointLabel;
            if ( gameObject )
            {
              v234 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v234, this->fields.currentFpLabelYMaxFp, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.buttonParentObject,
                this->fields.buttonPosYMaxFp,
                0LL);
              goto LABEL_217;
            }
          }
        }
      }
    }
LABEL_227:
    sub_1BCAA3C(gameObject, v78);
  }
LABEL_217:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  v236 = LocalizationManager__Get((System_String_o *)StringLiteral_7032/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  addFollowFriendPoint = *(_DWORD *)(v229 + 24);
  v237 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
  gameObject = (int64_t)System_String__Format(v236, v237, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_227;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  v238 = this->fields.currentFriendPointLabel;
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo, v78);
  if ( !v238 )
    goto LABEL_227;
  UILabel__SetCondensedScale_47600808(
    v238,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_227;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7039/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_227;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v241);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_7031/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_227;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v246 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v243, v244, v245);
  System_Action___ctor(v246, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__46_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v246, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetBackKeyForAndroid(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent__SetEnableButton(
        FriendPointNoticeDialogComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B181CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj, isEnable);
    this = (FriendPointNoticeDialogComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B181CE = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(this, buttonObj);
  }
}


void __fastcall FriendPointNoticeDialogComponent__SetRecommendedSupportButton(
        FriendPointNoticeDialogComponent_o *this,
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
  UILabel_o *recommendedSupportButtonLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  RecommendSupportQuestEntity_array *List; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  FriendPointNoticeDialogComponent___c_c *v26; // x8
  System_Object_array *v27; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v29; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  bool v37; // w0
  __int64 v38; // x1
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v40; // w20
  FriendPointNoticeDialogComponent_o *v41; // x0
  const MethodInfo *v42; // x3

  if ( (byte_4B181CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__, v12, v13);
    sub_1BCA7E0(&FriendPointNoticeDialogComponent___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_7034/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, v16, v17);
    byte_4B181CF = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7034/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v26 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v27 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo, v23);
    v26 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v26->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v23);
      v26 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_RecommendSupportQuestEntity__bool__TypeInfo,
                                                v23,
                                                v24,
                                                v25);
    System_Func_object__bool____ctor(
      _9__53_0,
      v29,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__53_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__53_0,
      (int64_t)_9__53_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = BasicHelper__Any_object__49274176(
          v27,
          (System_Func_T__bool__o *)_9__53_0,
          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v40 = v37;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_7034/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v41, this->fields.recommendedSupportButtonObject, v40, v42),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(Master_object, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v40, 0LL);
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
    sub_1BCAA3C(this, servantInfo);
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
    sub_1BCAA3C(this, 0LL);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_34330940(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_42821588(
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
    sub_1BCAA3C(this, servantInfo);
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

  if ( (byte_4B181C9 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B181C9 = 1;
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
    v8 = sub_1C05CD0(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B181CA & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B181CA = 1;
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
    v8 = sub_1C05CD0(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0EDBC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0ED74;
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
  if ( (byte_4B181D7 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B181D7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B181D8 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendPointNoticeDialogComponent___c_TypeInfo, v1, v2);
    byte_4B181D8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FriendPointNoticeDialogComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__53_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4B181D9 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1BCA7E0(&CondType_TypeInfo, entity, method);
    byte_4B181D9 = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, entity);
  return CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
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
    sub_1BCAA3C(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}