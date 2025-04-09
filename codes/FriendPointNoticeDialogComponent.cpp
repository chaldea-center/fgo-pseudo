void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BCF90 & 1) == 0 )
  {
    sub_1B4CF90(&FriendPointNoticeDialogComponent_TypeInfo, v1);
    byte_49BCF90 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BCF8F & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BCF8F = 1;
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

  FriendPointNoticeDialogComponent__Close_42741500(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_42741500(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  FriendPointNoticeDialogComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  FriendPointNoticeDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  FriendPointNoticeDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  FriendPointNoticeDialogComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x21

  if ( (byte_49BCF87 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__, v5);
    sub_1B4CF90(&FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo, v6);
    byte_49BCF87 = 1;
  }
  v7 = sub_1B4D1DC(FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B4D1EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  FriendPointNoticeDialogComponent__SetEnableButton(v14, this->fields.decideButtonObject, 0, v15);
  FriendPointNoticeDialogComponent__SetEnableButton(v16, this->fields.friendSupportButtonObject, 0, v17);
  FriendPointNoticeDialogComponent__SetEnableButton(v18, this->fields.recommendedSupportButtonObject, 0, v19);
  FriendPointNoticeDialogComponent__SetEnableButton(v20, this->fields.closeButtonObject, 0, v21);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__ExecClickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct FriendPointNoticeDialogComponent_CallbackFunc_o *clickedFunc; // x8
  CGThumbnailListItem_o *p_clickedFunc; // x19

  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = (CGThumbnailListItem_o *)&this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))clickedFunc->fields.m_target)(
      clickedFunc->fields.original_method_info,
      result,
      *(_QWORD *)&clickedFunc->fields.extra_arg);
  p_clickedFunc->klass = 0LL;
  sub_1B4CF34(p_clickedFunc, 0, (int32_t)method, v3);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49BCF85 & 1) == 0 )
  {
    sub_1B4CF90(&string_TypeInfo, method);
    byte_49BCF85 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(titleLabel, method);
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

  if ( (byte_49BCF8E & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent_OnClickCancel__, method);
    byte_49BCF8E = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49BCF8A & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__, method);
    byte_49BCF8A = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B4CFA8(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49BCF8B & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__, method);
    byte_49BCF8B = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
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

  if ( (byte_49BCF8D & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__, method);
    byte_49BCF8D = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
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

  if ( (byte_49BCF8C & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__, method);
    byte_49BCF8C = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
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
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v48; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  struct UILabel_o *v58; // x21
  System_String_o *v59; // x0
  struct UILabel_o *v60; // x21
  System_String_o *v61; // x22
  System_String_o *v62; // x23
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *v69; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v71; // x22
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  UILabel_o *v76; // x21
  UnityEngine_GameObject_o *v77; // x0
  System_Collections_Generic_List_object__o *v78; // x21
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v82; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x23
  il2cpp_array_size_t v84; // w26
  unsigned __int64 v85; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v87; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v89; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v90; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v91; // x8
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct FriendPointNoticeDialogSvtInfo_array *v94; // x8
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  Il2CppClass **v98; // x0
  System_Collections_Generic_IEnumerable_T__o *v99; // x23
  FriendPointNoticeDialogComponent___c_c *v100; // x0
  System_Action_object__o *_9__46_1; // x24
  Il2CppObject *v102; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x24
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x23
  const MethodInfo *v109; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v110; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x24
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x23
  const MethodInfo *v113; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v114; // x8
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  unsigned int localPosition; // s0
  int v128; // w8
  float v129; // s8
  int v130; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v131; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v132; // x20
  UnityEngine_GameObject_o *v133; // x0
  const MethodInfo *v134; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v135; // x8
  const MethodInfo *v136; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v137; // x8
  const MethodInfo *v138; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v139; // x8
  float left; // s0
  float lowerRow1; // s1
  int v142; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  const MethodInfo *v144; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *layoutXPositionList; // x8
  const MethodInfo_357FF0C *v146; // x2
  System_Collections_Generic_List_object__o *v147; // x0
  struct FriendPointNoticeDialogComponent_PositionYData_array *v148; // x8
  const MethodInfo *v149; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v150; // x8
  UILabel_o *noDataLabel; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *v152; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v153; // x20
  const MethodInfo *v154; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v155; // x8
  const MethodInfo *v156; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v157; // x8
  const MethodInfo *v158; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v159; // x8
  float right; // s0
  float upperRow1; // s1
  struct FriendPointNoticeDialogComponent_PositionYData_array *v162; // x8
  UnityEngine_GameObject_o *v163; // x0
  const MethodInfo *v164; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v165; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v166; // x8
  const MethodInfo *v167; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v168; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v169; // x8
  Il2CppObject *Master_object; // x20
  FriendPointNoticeDialogSvtInfo_o *v171; // x20
  int32_t m_CancellationTokenSource; // w21
  BalanceConfig_c *v173; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v175; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v177; // x22
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  Il2CppObject *v181; // x0
  UILabel_o *v182; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v185; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v187; // x20
  System_Collections_Generic_List_object__o *v188; // [xsp+8h] [xbp-88h]
  CommonUI_LoginResultData_o *v189; // [xsp+10h] [xbp-80h]
  int32_t addFollowFriendPoint; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v192; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v193; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v194; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v195; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v196; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v197; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v198; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v199; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v200; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v201; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v202; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v203; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v204; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v205; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v206; // 0:s0.4,4:s1.4

  if ( (byte_49BCF86 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo, loginResultData);
    sub_1B4CF90(&System_Action_TypeInfo, v7);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v8);
    sub_1B4CF90(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___, v9);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_TblUserMaster___, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent__Open_b__46_0__, v14);
    sub_1B4CF90(&FriendPointNoticeDialogComponent_TypeInfo, v15);
    sub_1B4CF90(&int_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo, v21);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v22);
    sub_1B4CF90(&NetworkManager_TypeInfo, v23);
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, v24);
    sub_1B4CF90(&FriendPointNoticeDialogComponent___c_TypeInfo, v25);
    sub_1B4CF90(&StringLiteral_6830/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, v26);
    sub_1B4CF90(&StringLiteral_6837/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v27);
    sub_1B4CF90(&StringLiteral_6833/*"GET_FRIEND_POINT_NO_DATA"*/, v28);
    sub_1B4CF90(&StringLiteral_6832/*"GET_FRIEND_POINT_NOW_POINT"*/, v29);
    sub_1B4CF90(&StringLiteral_6839/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v30);
    sub_1B4CF90(&StringLiteral_116/*"  "*/, v31);
    sub_1B4CF90(&StringLiteral_6829/*"GET_FRIEND_POINT_FP_NORMAL"*/, v32);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v33);
    sub_1B4CF90(&StringLiteral_6828/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v34);
    sub_1B4CF90(&StringLiteral_6838/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, v35);
    sub_1B4CF90(&StringLiteral_6825/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v36);
    sub_1B4CF90(&StringLiteral_1/*""*/, v37);
    sub_1B4CF90(&StringLiteral_6831/*"GET_FRIEND_POINT_GACHA_BTN"*/, v38);
    sub_1B4CF90(&StringLiteral_6840/*"GET_FRIEND_POINT_TITLE"*/, v39);
    sub_1B4CF90(&StringLiteral_6824/*"GET_FRIEND_POINT_AT_LIMIT"*/, v40);
    sub_1B4CF90(&StringLiteral_6826/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v41);
    byte_49BCF86 = 1;
  }
  entity = 0LL;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !gameObject )
    goto LABEL_231;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickedFunc, (int32_t)clickedAction, v44, v45);
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
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6840/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
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
  v48 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_231;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_6829/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v52, v53, v54);
    v56 = System_String__Format(v51, v55, 0LL);
    v57 = System_String__Concat_61093468(mText, v56, 0LL);
    UILabel__set_text(addedPointLabel, v57, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v58 = this->fields.addedPointLabel;
      if ( !v58 )
        goto LABEL_231;
      v59 = System_String__Concat_61093468(v58->fields.mText, (System_String_o *)StringLiteral_116/*"  "*/, 0LL);
      UILabel__set_text(v58, v59, 0LL);
    }
    v60 = this->fields.addedPointLabel;
    if ( !v60 )
      goto LABEL_231;
    v61 = v60->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_6828/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v63, v64, v65);
    v67 = System_String__Format(v62, v66, 0LL);
    v68 = System_String__Concat_61093468(v61, v67, 0LL);
    UILabel__set_text(v60, v68, 0LL);
    v48 = 0;
  }
  v69 = this->fields.addedPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v69 )
    goto LABEL_231;
  UILabel__SetCondensedScale_47600732(
    v69,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_231;
LABEL_38:
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v77, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_6830/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v72, v73, v74);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v71, v75, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_231;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  v76 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v76 )
    goto LABEL_231;
  UILabel__SetCondensedScale_47600732(
    v76,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  if ( v48 )
  {
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_231;
    goto LABEL_38;
  }
LABEL_39:
  v78 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v188 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v188,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6838/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_231;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestMaster___);
  v189 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_231;
    v82 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v82 >= 1 )
    {
      v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v84 = 0;
      v85 = 0LL;
      while ( v85 < (unsigned int)v82 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v84 >= (int)max_length )
        {
          gameObject = recommendedSupportServantInfoList->m_Items[v85];
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
          if ( v84 >= max_length )
            goto LABEL_232;
          v87 = addRecommendSupportFriendPointSvtList->m_Items[v84];
          if ( !v87 || !v83 )
            goto LABEL_231;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             v83,
                                                             &entity,
                                                             v87->fields.questId,
                                                             (const MethodInfo_319D9E8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_231;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v90 = this->fields.recommendedSupportServantInfoList;
          if ( !v90 )
            goto LABEL_231;
          if ( v84 >= v90->max_length )
            goto LABEL_232;
          FriendPointNoticeDialogComponent__SetupServantInfo_42738684(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v90->m_Items[v84],
            v87,
            monitor,
            v87->fields.friendPoint,
            v89);
          v91 = this->fields.recommendedSupportServantInfoList;
          if ( !v91 )
            goto LABEL_231;
          if ( v84 >= v91->max_length )
            goto LABEL_232;
          gameObject = v91->m_Items[v84];
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
            v94 = this->fields.recommendedSupportServantInfoList;
            if ( !v94 )
              goto LABEL_231;
            if ( v84 >= v94->max_length )
              goto LABEL_232;
            if ( !v78 )
              goto LABEL_231;
            v43 = (Il2CppObject *)v94->m_Items[v84];
            items = v78->fields._items;
            v96 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v78->fields._version;
            if ( !items )
              goto LABEL_231;
            size = v78->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v78,
                v43,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
            }
            else
            {
              v98 = &items->obj.klass + size;
              v78->fields._size = size + 1;
              v98[4] = (Il2CppClass *)v43;
              sub_1B4CF34((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v43, v92, v93);
            }
          }
          ++v84;
        }
        LODWORD(v82) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v85 >= (int)v82 )
          goto LABEL_84;
      }
      goto LABEL_232;
    }
  }
  else
  {
    v99 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v100 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v100 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__46_1 = (System_Action_object__o *)v100->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100);
        v100 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v102 = (Il2CppObject *)v100->static_fields->__9;
      _9__46_1 = (System_Action_object__o *)sub_1B4D1DC(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__46_1, v102, Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__46_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v104, v105);
    }
    BasicHelper__ForEach_object_(
      v99,
      (System_Action_T__o *)_9__46_1,
      (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6837/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_231;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  topAddFriendPointSvt = v189->fields.topAddFriendPointSvt;
  normalSupportServantInfo = this->fields.normalSupportServantInfo;
  if ( topAddFriendPointSvt )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6826/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/,
                                                       0LL);
    v110 = v189->fields.topAddFriendPointSvt;
    if ( !v110 )
      goto LABEL_231;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v110->fields.friendPoint,
      v109);
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
  topAddFriendPointSvtEQ = v189->fields.topAddFriendPointSvtEQ;
  eventSupportServantInfo = this->fields.eventSupportServantInfo;
  if ( topAddFriendPointSvtEQ )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6825/*"GET_FRIEND_POINT_CAPTION_EVENT"*/,
                                                       0LL);
    v114 = v189->fields.topAddFriendPointSvtEQ;
    if ( !v114 )
      goto LABEL_231;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v114->fields.friendPoint,
      v113);
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
    if ( !v188 )
      goto LABEL_231;
    v43 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v117 = v188->fields._items;
    v118 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v188->fields._version;
    if ( !v117 )
      goto LABEL_231;
    v119 = v188->fields._size;
    if ( (unsigned int)v119 >= v117->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v188,
        v43,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
    }
    else
    {
      v120 = &v117->obj.klass + v119;
      v188->fields._size = v119 + 1;
      v120[4] = (Il2CppClass *)v43;
      sub_1B4CF34((CGThumbnailListItem_o *)(v120 + 4), (int32_t)v43, v115, v116);
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
    if ( !v188 )
      goto LABEL_231;
    v43 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v123 = v188->fields._items;
    v124 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v188->fields._version;
    if ( !v123 )
      goto LABEL_231;
    v125 = v188->fields._size;
    if ( (unsigned int)v125 >= v123->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v188,
        v43,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
    }
    else
    {
      v126 = &v123->obj.klass + v125;
      v188->fields._size = v125 + 1;
      v126[4] = (Il2CppClass *)v43;
      sub_1B4CF34((CGThumbnailListItem_o *)(v126 + 4), (int32_t)v43, v121, v122);
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
  if ( !v188 )
    goto LABEL_231;
  v128 = v188->fields._size;
  v129 = *(float *)&localPosition;
  if ( v128 )
  {
    if ( !v78 )
      goto LABEL_231;
  }
  else
  {
    if ( !v78 )
      goto LABEL_231;
    v142 = v78->fields._size;
    if ( (unsigned int)(v142 - 1) <= 1 )
    {
      layoutYPositionList = this->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_231;
      if ( layoutYPositionList->max_length )
      {
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        v132 = layoutYPositionList->m_Items[0];
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
        if ( !v132 )
          goto LABEL_231;
        v196.fields.y = v132->fields.upperLabel;
        v196.fields.x = v129;
        GameObjectExtensions__SetLocalPosition_34069452((UnityEngine_GameObject_o *)gameObject, v196, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v78,
                                                           0,
                                                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        layoutXPositionList = this->fields.layoutXPositionList;
        if ( !layoutXPositionList )
          goto LABEL_231;
        v197.fields.x = layoutXPositionList->fields.left;
        v197.fields.y = v132->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v197, v144);
        if ( v78->fields._size >= 2 )
        {
          v146 = (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
          v147 = v78;
LABEL_197:
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v147,
                                                             1,
                                                             v146);
          v169 = this->fields.layoutXPositionList;
          if ( !v169 )
            goto LABEL_231;
          right = v169->fields.right;
          upperRow1 = v132->fields.upperRow1;
LABEL_199:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            gameObject,
            *(UnityEngine_Vector2_o *)&right,
            v158);
          goto LABEL_200;
        }
        goto LABEL_200;
      }
      goto LABEL_232;
    }
    if ( v142 >= 3 )
    {
      v152 = this->fields.layoutYPositionList;
      if ( !v152 )
        goto LABEL_231;
      if ( v152->max_length > 1 )
      {
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_231;
        v153 = v152->m_Items[1];
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
        if ( !v153 )
          goto LABEL_231;
        v200.fields.y = v153->fields.upperLabel;
        v200.fields.x = v129;
        GameObjectExtensions__SetLocalPosition_34069452((UnityEngine_GameObject_o *)gameObject, v200, 0LL);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v78,
                                                           0,
                                                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v155 = this->fields.layoutXPositionList;
        if ( !v155 )
          goto LABEL_231;
        v201.fields.x = v155->fields.left;
        v201.fields.y = v153->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v201, v154);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v78,
                                                           1,
                                                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v157 = this->fields.layoutXPositionList;
        if ( !v157 )
          goto LABEL_231;
        v202.fields.x = v157->fields.right;
        v202.fields.y = v153->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v202, v156);
        gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                           v78,
                                                           2,
                                                           (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v159 = this->fields.layoutXPositionList;
        if ( !v159 )
          goto LABEL_231;
        right = v159->fields.left;
        upperRow1 = v153->fields.upperRow2;
        goto LABEL_199;
      }
      goto LABEL_232;
    }
  }
  v130 = v78->fields._size;
  if ( v130 )
  {
    if ( v128 >= 1 )
    {
      if ( v130 <= 2 )
      {
        v162 = this->fields.layoutYPositionList;
        if ( !v162 )
          goto LABEL_231;
        if ( v162->max_length > 2 )
        {
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v132 = v162->m_Items[2];
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !v132 )
            goto LABEL_231;
          v203.fields.y = v132->fields.lowerLabel;
          v203.fields.x = v129;
          GameObjectExtensions__SetLocalPosition_34069452((UnityEngine_GameObject_o *)gameObject, v203, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v163 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v204.fields.y = v132->fields.upperLabel;
          v204.fields.x = v129;
          GameObjectExtensions__SetLocalPosition_34069452(v163, v204, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v78,
                                                             0,
                                                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v165 = this->fields.layoutXPositionList;
          if ( !v165 )
            goto LABEL_231;
          v205.fields.x = v165->fields.left;
          v205.fields.y = v132->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v205, v164);
          if ( v78->fields._size < 2 )
          {
LABEL_193:
            gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                               v188,
                                                               0,
                                                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v168 = this->fields.layoutXPositionList;
            if ( !v168 )
              goto LABEL_231;
            v206.fields.x = v168->fields.left;
            v206.fields.y = v132->fields.upperRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v206, v167);
            if ( v188->fields._size >= 2 )
            {
              v146 = (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
              goto LABEL_196;
            }
            goto LABEL_200;
          }
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v78,
                                                             1,
                                                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v166 = this->fields.layoutXPositionList;
          if ( !v166 )
            goto LABEL_231;
          left = v166->fields.right;
          lowerRow1 = v132->fields.lowerRow1;
LABEL_192:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            gameObject,
            *(UnityEngine_Vector2_o *)&left,
            v138);
          goto LABEL_193;
        }
LABEL_232:
        sub_1B4D1F4(gameObject, v43);
      }
      if ( v130 == 3 )
      {
        v131 = this->fields.layoutYPositionList;
        if ( !v131 )
          goto LABEL_231;
        if ( v131->max_length > 3 )
        {
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v132 = v131->m_Items[3];
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
          if ( !v132 )
            goto LABEL_231;
          v192.fields.y = v132->fields.lowerLabel;
          v192.fields.x = v129;
          GameObjectExtensions__SetLocalPosition_34069452((UnityEngine_GameObject_o *)gameObject, v192, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_231;
          v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v193.fields.y = v132->fields.upperLabel;
          v193.fields.x = v129;
          GameObjectExtensions__SetLocalPosition_34069452(v133, v193, 0LL);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v78,
                                                             0,
                                                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v135 = this->fields.layoutXPositionList;
          if ( !v135 )
            goto LABEL_231;
          v194.fields.x = v135->fields.left;
          v194.fields.y = v132->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v194, v134);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v78,
                                                             1,
                                                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v137 = this->fields.layoutXPositionList;
          if ( !v137 )
            goto LABEL_231;
          v195.fields.x = v137->fields.right;
          v195.fields.y = v132->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v195, v136);
          gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                             v78,
                                                             2,
                                                             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v139 = this->fields.layoutXPositionList;
          if ( !v139 )
            goto LABEL_231;
          left = v139->fields.left;
          lowerRow1 = v132->fields.lowerRow2;
          goto LABEL_192;
        }
        goto LABEL_232;
      }
    }
LABEL_158:
    if ( v189->fields.addFriendPoint > 0
      || v189->fields.addFollowFriendPoint > 0
      || v189->fields.addRecommendSupportFriendPoint >= 1 )
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
                                                         (System_String_o *)StringLiteral_6833/*"GET_FRIEND_POINT_NO_DATA"*/,
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
  if ( v128 < 1 )
    goto LABEL_158;
  v148 = this->fields.layoutYPositionList;
  if ( !v148 )
    goto LABEL_231;
  if ( !v148->max_length )
    goto LABEL_232;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)this->fields.mostUsedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_231;
  v132 = v148->m_Items[0];
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
  if ( !v132 )
    goto LABEL_231;
  v198.fields.y = v132->fields.upperLabel;
  v198.fields.x = v129;
  GameObjectExtensions__SetLocalPosition_34069452((UnityEngine_GameObject_o *)gameObject, v198, 0LL);
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
                                                     v188,
                                                     0,
                                                     (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
  v150 = this->fields.layoutXPositionList;
  if ( !v150 )
    goto LABEL_231;
  v199.fields.x = v150->fields.left;
  v199.fields.y = v132->fields.upperRow1;
  FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, gameObject, v199, v149);
  if ( v188->fields._size >= 2 )
  {
    v146 = (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
LABEL_196:
    v147 = v188;
    goto LABEL_197;
  }
LABEL_200:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v43);
    byte_49B57A5 = 1;
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
  v171 = gameObject;
  m_CancellationTokenSource = (int32_t)gameObject->fields.m_CancellationTokenSource;
  v173 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v173 = BalanceConfig_TypeInfo;
  }
  if ( m_CancellationTokenSource >= v173->static_fields->FriendPointMax )
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
                                                           (System_String_o *)StringLiteral_6824/*"GET_FRIEND_POINT_AT_LIMIT"*/,
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
              v175 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v175, this->fields.currentFpLabelYMaxFp, 0LL);
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
    sub_1B4D1EC(gameObject, v43);
  }
LABEL_221:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v177 = LocalizationManager__Get((System_String_o *)StringLiteral_6832/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  addFollowFriendPoint = (int32_t)v171->fields.m_CancellationTokenSource;
  v181 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v178, v179, v180);
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)System_String__Format(v177, v181, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_231;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  v182 = this->fields.currentFriendPointLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v182 )
    goto LABEL_231;
  UILabel__SetCondensedScale_47600732(
    v182,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0.0,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_231;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6839/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_231;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v185);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (FriendPointNoticeDialogSvtInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6831/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_231;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v187 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v187, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__46_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v187, 0, 0LL);
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

  if ( (byte_49BCF88 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    this = (FriendPointNoticeDialogComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    byte_49BCF88 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1B4D1EC(this, buttonObj);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool v21; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v23; // w20
  FriendPointNoticeDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_49BCF89 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__, v7);
    sub_1B4CF90(&FriendPointNoticeDialogComponent___c_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_6834/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, v9);
    byte_49BCF89 = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6834/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__53_0,
      v17,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__53_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v19, v20);
  }
  v21 = BasicHelper__Any_object__49202496(
          v15,
          (System_Func_T__bool__o *)_9__53_0,
          (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v23 = v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6834/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v24, this->fields.recommendedSupportButtonObject, v23, v25),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1B4D1EC(Master_object, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v23, 0LL);
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
    sub_1B4D1EC(this, servantInfo);
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
    sub_1B4D1EC(this, 0LL);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_34069452(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_42738684(
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
    sub_1B4D1EC(this, servantInfo);
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

  if ( (byte_49BCF83 & 1) == 0 )
  {
    sub_1B4CF90(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_49BCF83 = 1;
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
    v8 = sub_1B8724C(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B4D4AC(v7);
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

  if ( (byte_49BCF84 & 1) == 0 )
  {
    sub_1B4CF90(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_49BCF84 = 1;
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
    v8 = sub_1B8724C(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B4D4AC(v7);
  FriendPointNoticeDialogComponent__CheckSerializeFieldAssertion(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDialogComponent_CallbackFunc___ctor(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_199E4C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199E480;
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
  if ( (byte_49BCF91 & 1) == 0 )
  {
    sub_1B4CF90(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_49BCF91 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BCF92 & 1) == 0 )
  {
    sub_1B4CF90(&FriendPointNoticeDialogComponent___c_TypeInfo, v1);
    byte_49BCF92 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B4D1EC(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__53_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_49BCF93 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1B4CF90(&CondType_TypeInfo, entity);
    byte_49BCF93 = 1;
  }
  if ( !entity )
    sub_1B4D1EC(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_38126524(questId, -1, 0, 0LL);
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
    sub_1B4D1EC(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}