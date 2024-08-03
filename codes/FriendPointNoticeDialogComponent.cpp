void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE5F3 & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDialogComponent_TypeInfo, v1);
    byte_49FE5F3 = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FE5F2 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FE5F2 = 1;
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

  FriendPointNoticeDialogComponent__Close_42005124(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_42005124(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  FriendPointNoticeDialogComponent_o *v13; // x0
  const MethodInfo *v14; // x3
  FriendPointNoticeDialogComponent_o *v15; // x0
  const MethodInfo *v16; // x3
  FriendPointNoticeDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  FriendPointNoticeDialogComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x21

  if ( (byte_49FE5EA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__, v5);
    sub_1B640C8(&FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo, v6);
    byte_49FE5EA = 1;
  }
  v7 = sub_1B64314(FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  FriendPointNoticeDialogComponent__SetEnableButton(v13, this->fields.decideButtonObject, 0, v14);
  FriendPointNoticeDialogComponent__SetEnableButton(v15, this->fields.friendSupportButtonObject, 0, v16);
  FriendPointNoticeDialogComponent__SetEnableButton(v17, this->fields.recommendedSupportButtonObject, 0, v18);
  FriendPointNoticeDialogComponent__SetEnableButton(v19, this->fields.closeButtonObject, 0, v20);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v23, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__ExecClickedFunc(
        FriendPointNoticeDialogComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct FriendPointNoticeDialogComponent_CallbackFunc_o *clickedFunc; // x8
  ServantStatusBattleListViewItem_o *p_clickedFunc; // x19

  clickedFunc = this->fields.clickedFunc;
  p_clickedFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickedFunc;
  if ( clickedFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))clickedFunc->fields.m_target)(
      clickedFunc->fields.original_method_info,
      result,
      *(_QWORD *)&clickedFunc->fields.extra_arg);
  p_clickedFunc->klass = 0LL;
  sub_1B6406C(p_clickedFunc, 0, (int32_t)method, v3);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49FE5E8 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FE5E8 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(titleLabel);
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

  if ( (byte_49FE5F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent_OnClickCancel__, method);
    byte_49FE5F1 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49FE5ED & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__, method);
    byte_49FE5ED = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FE5EE & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__, method);
    byte_49FE5EE = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 0, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToRecommendedSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FE5F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__, method);
    byte_49FE5F0 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 2, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToSupport(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FE5EF & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__, method);
    byte_49FE5EF = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
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
  int64_t gameObject; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v47; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct UILabel_o *v54; // x21
  System_String_o *v55; // x0
  struct UILabel_o *v56; // x21
  System_String_o *v57; // x22
  System_String_o *v58; // x23
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  UILabel_o *v62; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v64; // x22
  Il2CppObject *v65; // x0
  UILabel_o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  UnityEngine_GameObject_o *v69; // x0
  System_Collections_Generic_List_object__o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  __int64 v75; // x1
  __int64 v76; // x2
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v78; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // x23
  il2cpp_array_size_t v80; // w26
  unsigned __int64 v81; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v83; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v85; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v86; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v87; // x8
  int32_t v88; // w2
  int32_t v89; // w3
  struct FriendPointNoticeDialogSvtInfo_array *v90; // x8
  Il2CppObject *v91; // x1
  struct System_Object_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  Il2CppClass **v95; // x0
  System_Collections_Generic_IEnumerable_T__o *v96; // x23
  FriendPointNoticeDialogComponent___c_c *v97; // x0
  System_Action_object__o *_9__46_1; // x24
  Il2CppObject *v99; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x24
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x23
  const MethodInfo *v106; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v107; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x24
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x23
  const MethodInfo *v110; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v111; // x8
  int32_t v112; // w2
  int32_t v113; // w3
  Il2CppObject *v114; // x1
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  Il2CppObject *v121; // x1
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  unsigned int localPosition; // s0
  int v127; // w8
  float v128; // s8
  int v129; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v130; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v131; // x20
  UnityEngine_GameObject_o *v132; // x0
  const MethodInfo *v133; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v134; // x8
  const MethodInfo *v135; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v136; // x8
  const MethodInfo *v137; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v138; // x8
  float right; // s0
  float lowerRow1; // s1
  int v141; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v142; // x8
  const MethodInfo *v143; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v144; // x8
  const MethodInfo_34AD404 *v145; // x2
  System_Collections_Generic_List_object__o *v146; // x0
  struct FriendPointNoticeDialogComponent_PositionYData_array *v147; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v148; // x20
  const MethodInfo *v149; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v150; // x8
  const MethodInfo *v151; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v152; // x8
  float left; // s0
  UILabel_o *noDataLabel; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  const MethodInfo *v156; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *layoutXPositionList; // x8
  const MethodInfo *v158; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v159; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v160; // x8
  FriendPointNoticeDialogSvtInfo_o *v161; // x1
  float upperRow2; // s1
  struct FriendPointNoticeDialogComponent_PositionYData_array *v163; // x8
  UnityEngine_GameObject_o *v164; // x0
  const MethodInfo *v165; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v166; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v167; // x8
  const MethodInfo *v168; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v169; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v170; // x8
  Il2CppObject *Master_object; // x20
  int64_t v172; // x20
  int32_t v173; // w21
  BalanceConfig_c *v174; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v176; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v178; // x22
  Il2CppObject *v179; // x0
  UILabel_o *v180; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v183; // x1
  UILabel_o *decideButtonLabel; // x20
  __int64 v185; // x1
  __int64 v186; // x2
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

  if ( (byte_49FE5E9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo, loginResultData);
    sub_1B640C8(&System_Action_TypeInfo, v7);
    sub_1B640C8(&BalanceConfig_TypeInfo, v8);
    sub_1B640C8(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_TblUserMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent__Open_b__46_0__, v14);
    sub_1B640C8(&FriendPointNoticeDialogComponent_TypeInfo, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&NetworkManager_TypeInfo, v23);
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, v24);
    sub_1B640C8(&FriendPointNoticeDialogComponent___c_TypeInfo, v25);
    sub_1B640C8(&StringLiteral_6879/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, v26);
    sub_1B640C8(&StringLiteral_6886/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v27);
    sub_1B640C8(&StringLiteral_6882/*"GET_FRIEND_POINT_NO_DATA"*/, v28);
    sub_1B640C8(&StringLiteral_6881/*"GET_FRIEND_POINT_NOW_POINT"*/, v29);
    sub_1B640C8(&StringLiteral_6888/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v30);
    sub_1B640C8(&StringLiteral_118/*"  "*/, v31);
    sub_1B640C8(&StringLiteral_6878/*"GET_FRIEND_POINT_FP_NORMAL"*/, v32);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v33);
    sub_1B640C8(&StringLiteral_6877/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v34);
    sub_1B640C8(&StringLiteral_6887/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, v35);
    sub_1B640C8(&StringLiteral_6874/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v36);
    sub_1B640C8(&StringLiteral_1/*""*/, v37);
    sub_1B640C8(&StringLiteral_6880/*"GET_FRIEND_POINT_GACHA_BTN"*/, v38);
    sub_1B640C8(&StringLiteral_6889/*"GET_FRIEND_POINT_TITLE"*/, v39);
    sub_1B640C8(&StringLiteral_6873/*"GET_FRIEND_POINT_AT_LIMIT"*/, v40);
    sub_1B640C8(&StringLiteral_6875/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v41);
    byte_49FE5E9 = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickedFunc, (int32_t)clickedAction, v43, v44);
  gameObject = (int64_t)this->fields.noDataLabel;
  this->fields.state = 1;
  if ( !gameObject )
    goto LABEL_228;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6889/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_228;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)this->fields.addedPointLabel;
  if ( !gameObject )
    goto LABEL_228;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !loginResultData )
    goto LABEL_228;
  addFriendPoint = loginResultData->fields.addFriendPoint;
  v47 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_228;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_6878/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v52 = System_String__Format(v50, v51, 0LL);
    v53 = System_String__Concat_61375396(mText, v52, 0LL);
    UILabel__set_text(addedPointLabel, v53, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v54 = this->fields.addedPointLabel;
      if ( !v54 )
        goto LABEL_228;
      v55 = System_String__Concat_61375396(v54->fields.mText, (System_String_o *)StringLiteral_118/*"  "*/, 0LL);
      UILabel__set_text(v54, v55, 0LL);
    }
    v56 = this->fields.addedPointLabel;
    if ( !v56 )
      goto LABEL_228;
    v57 = v56->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_6877/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v60 = System_String__Format(v58, v59, 0LL);
    v61 = System_String__Concat_61375396(v57, v60, 0LL);
    UILabel__set_text(v56, v61, 0LL);
    v47 = 0;
  }
  v62 = this->fields.addedPointLabel;
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v62 )
    goto LABEL_228;
  UILabel__SetCondensedScale_46760740(
    v62,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (int64_t)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_228;
LABEL_38:
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v69, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_6879/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
  gameObject = (int64_t)System_String__Format(v64, v65, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_228;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  v66 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v66 )
    goto LABEL_228;
  UILabel__SetCondensedScale_46760740(
    v66,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  if ( v47 )
  {
    gameObject = (int64_t)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_228;
    goto LABEL_38;
  }
LABEL_39:
  v70 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo,
                                                       v67,
                                                       v68);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v188 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo,
                                                        v71,
                                                        v72);
  System_Collections_Generic_List_object____ctor(
    v188,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6887/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_228;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  v189 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_228;
    v78 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v78 >= 1 )
    {
      v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v80 = 0;
      v81 = 0LL;
      while ( v81 < (unsigned int)v78 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v80 >= (int)max_length )
        {
          gameObject = (int64_t)recommendedSupportServantInfoList->m_Items[v81];
          if ( !gameObject )
            goto LABEL_228;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_228;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( v80 >= max_length )
            goto LABEL_229;
          v83 = addRecommendSupportFriendPointSvtList->m_Items[v80];
          if ( !v83 || !v79 )
            goto LABEL_228;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = DataMasterBase_object__object__int___TryGetEntity(
                         v79,
                         &entity,
                         v83->fields.questId,
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( (gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_228;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v86 = this->fields.recommendedSupportServantInfoList;
          if ( !v86 )
            goto LABEL_228;
          if ( v80 >= v86->max_length )
            goto LABEL_229;
          FriendPointNoticeDialogComponent__SetupServantInfo_42002324(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v86->m_Items[v80],
            v83,
            monitor,
            v83->fields.friendPoint,
            v85);
          v87 = this->fields.recommendedSupportServantInfoList;
          if ( !v87 )
            goto LABEL_228;
          if ( v80 >= v87->max_length )
            goto LABEL_229;
          gameObject = (int64_t)v87->m_Items[v80];
          if ( !gameObject )
            goto LABEL_228;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_228;
          gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( (gameObject & 1) != 0 )
          {
            v90 = this->fields.recommendedSupportServantInfoList;
            if ( !v90 )
              goto LABEL_228;
            if ( v80 >= v90->max_length )
              goto LABEL_229;
            if ( !v70 )
              goto LABEL_228;
            v91 = (Il2CppObject *)v90->m_Items[v80];
            items = v70->fields._items;
            v93 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v70->fields._version;
            if ( !items )
              goto LABEL_228;
            size = v70->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v70,
                v91,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
            }
            else
            {
              v95 = &items->obj.klass + size;
              v70->fields._size = size + 1;
              v95[4] = (Il2CppClass *)v91;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v95 + 4), (int32_t)v91, v88, v89);
            }
          }
          ++v80;
        }
        LODWORD(v78) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v81 >= (int)v78 )
          goto LABEL_84;
      }
      goto LABEL_229;
    }
  }
  else
  {
    v96 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v97 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v97 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__46_1 = (System_Action_object__o *)v97->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97);
        v97 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v99 = (Il2CppObject *)v97->static_fields->__9;
      _9__46_1 = (System_Action_object__o *)sub_1B64314(
                                              System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo,
                                              v75,
                                              v76);
      System_Action_object____ctor(_9__46_1, v99, Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__46_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v101, v102);
    }
    BasicHelper__ForEach_object_(
      v96,
      (System_Action_T__o *)_9__46_1,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6886/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_228;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  topAddFriendPointSvt = v189->fields.topAddFriendPointSvt;
  normalSupportServantInfo = this->fields.normalSupportServantInfo;
  if ( topAddFriendPointSvt )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6875/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
    v107 = v189->fields.topAddFriendPointSvt;
    if ( !v107 )
      goto LABEL_228;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v107->fields.friendPoint,
      v106);
  }
  else
  {
    if ( !normalSupportServantInfo )
      goto LABEL_228;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.normalSupportServantInfo,
                            0LL);
    if ( !gameObject )
      goto LABEL_228;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  topAddFriendPointSvtEQ = v189->fields.topAddFriendPointSvtEQ;
  eventSupportServantInfo = this->fields.eventSupportServantInfo;
  if ( topAddFriendPointSvtEQ )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6874/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
    v111 = v189->fields.topAddFriendPointSvtEQ;
    if ( !v111 )
      goto LABEL_228;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v111->fields.friendPoint,
      v110);
  }
  else
  {
    if ( !eventSupportServantInfo )
      goto LABEL_228;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.eventSupportServantInfo,
                            0LL);
    if ( !gameObject )
      goto LABEL_228;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  gameObject = (int64_t)this->fields.normalSupportServantInfo;
  if ( !gameObject )
    goto LABEL_228;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v188 )
      goto LABEL_228;
    v114 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v115 = v188->fields._items;
    v116 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v188->fields._version;
    if ( !v115 )
      goto LABEL_228;
    v117 = v188->fields._size;
    if ( (unsigned int)v117 >= v115->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v188,
        v114,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
    }
    else
    {
      v118 = &v115->obj.klass + v117;
      v188->fields._size = v117 + 1;
      v118[4] = (Il2CppClass *)v114;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v114, v112, v113);
    }
  }
  gameObject = (int64_t)this->fields.eventSupportServantInfo;
  if ( !gameObject )
    goto LABEL_228;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v188 )
      goto LABEL_228;
    v121 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v122 = v188->fields._items;
    v123 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v188->fields._version;
    if ( !v122 )
      goto LABEL_228;
    v124 = v188->fields._size;
    if ( (unsigned int)v124 >= v122->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v188,
        v121,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    }
    else
    {
      v125 = &v122->obj.klass + v124;
      v188->fields._size = v124 + 1;
      v125[4] = (Il2CppClass *)v121;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v125 + 4), (int32_t)v121, v119, v120);
    }
  }
  gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_228;
  gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !v188 )
    goto LABEL_228;
  v127 = v188->fields._size;
  v128 = *(float *)&localPosition;
  if ( v127 )
  {
    if ( !v70 )
      goto LABEL_228;
    goto LABEL_124;
  }
  if ( !v70 )
    goto LABEL_228;
  v141 = v70->fields._size;
  if ( (unsigned int)(v141 - 1) > 1 )
  {
    if ( v141 >= 3 )
    {
      layoutYPositionList = this->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_228;
      if ( layoutYPositionList->max_length <= 1 )
        goto LABEL_229;
      gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
      if ( !gameObject )
        goto LABEL_228;
      v148 = layoutYPositionList->m_Items[1];
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_228;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
      if ( !gameObject )
        goto LABEL_228;
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !v148 )
        goto LABEL_228;
      v200.fields.y = v148->fields.upperLabel;
      v200.fields.x = v128;
      GameObjectExtensions__SetLocalPosition_33375356((UnityEngine_GameObject_o *)gameObject, v200, 0LL);
      gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v70,
                              0,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      layoutXPositionList = this->fields.layoutXPositionList;
      if ( !layoutXPositionList )
        goto LABEL_228;
      v201.fields.x = layoutXPositionList->fields.left;
      v201.fields.y = v148->fields.upperRow1;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        this,
        (FriendPointNoticeDialogSvtInfo_o *)gameObject,
        v201,
        v156);
      gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v70,
                              1,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v159 = this->fields.layoutXPositionList;
      if ( !v159 )
        goto LABEL_228;
      v202.fields.x = v159->fields.right;
      v202.fields.y = v148->fields.upperRow1;
      FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
        this,
        (FriendPointNoticeDialogSvtInfo_o *)gameObject,
        v202,
        v158);
      gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                              v70,
                              2,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
      v160 = this->fields.layoutXPositionList;
      if ( !v160 )
        goto LABEL_228;
      left = v160->fields.left;
      goto LABEL_184;
    }
LABEL_124:
    v129 = v70->fields._size;
    if ( v129 )
    {
      if ( v127 >= 1 )
      {
        if ( v129 <= 2 )
        {
          v163 = this->fields.layoutYPositionList;
          if ( !v163 )
            goto LABEL_228;
          if ( v163->max_length > 2 )
          {
            gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
            if ( !gameObject )
              goto LABEL_228;
            v131 = v163->m_Items[2];
            gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !v131 )
              goto LABEL_228;
            v203.fields.y = v131->fields.lowerLabel;
            v203.fields.x = v128;
            GameObjectExtensions__SetLocalPosition_33375356((UnityEngine_GameObject_o *)gameObject, v203, 0LL);
            gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
            if ( !gameObject )
              goto LABEL_228;
            v164 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            v204.fields.y = v131->fields.upperLabel;
            v204.fields.x = v128;
            GameObjectExtensions__SetLocalPosition_33375356(v164, v204, 0LL);
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v70,
                                    0,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v166 = this->fields.layoutXPositionList;
            if ( !v166 )
              goto LABEL_228;
            v205.fields.x = v166->fields.left;
            v205.fields.y = v131->fields.lowerRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
              this,
              (FriendPointNoticeDialogSvtInfo_o *)gameObject,
              v205,
              v165);
            if ( v70->fields._size < 2 )
            {
LABEL_195:
              gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      v188,
                                      0,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
              v169 = this->fields.layoutXPositionList;
              if ( !v169 )
                goto LABEL_228;
              v206.fields.x = v169->fields.left;
              v206.fields.y = v131->fields.upperRow1;
              FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
                this,
                (FriendPointNoticeDialogSvtInfo_o *)gameObject,
                v206,
                v168);
              if ( v188->fields._size >= 2 )
              {
                v145 = (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
                v146 = v188;
                goto LABEL_198;
              }
              goto LABEL_201;
            }
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v70,
                                    1,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v167 = this->fields.layoutXPositionList;
            if ( !v167 )
              goto LABEL_228;
            right = v167->fields.right;
            lowerRow1 = v131->fields.lowerRow1;
LABEL_194:
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
              this,
              (FriendPointNoticeDialogSvtInfo_o *)gameObject,
              *(UnityEngine_Vector2_o *)&right,
              v137);
            goto LABEL_195;
          }
LABEL_229:
          sub_1B6432C(gameObject, v75);
        }
        if ( v129 == 3 )
        {
          v130 = this->fields.layoutYPositionList;
          if ( !v130 )
            goto LABEL_228;
          if ( v130->max_length > 3 )
          {
            gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
            if ( !gameObject )
              goto LABEL_228;
            v131 = v130->m_Items[3];
            gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( !v131 )
              goto LABEL_228;
            v192.fields.y = v131->fields.lowerLabel;
            v192.fields.x = v128;
            GameObjectExtensions__SetLocalPosition_33375356((UnityEngine_GameObject_o *)gameObject, v192, 0LL);
            gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
            if ( !gameObject )
              goto LABEL_228;
            v132 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            v193.fields.y = v131->fields.upperLabel;
            v193.fields.x = v128;
            GameObjectExtensions__SetLocalPosition_33375356(v132, v193, 0LL);
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v70,
                                    0,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v134 = this->fields.layoutXPositionList;
            if ( !v134 )
              goto LABEL_228;
            v194.fields.x = v134->fields.left;
            v194.fields.y = v131->fields.lowerRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
              this,
              (FriendPointNoticeDialogSvtInfo_o *)gameObject,
              v194,
              v133);
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v70,
                                    1,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v136 = this->fields.layoutXPositionList;
            if ( !v136 )
              goto LABEL_228;
            v195.fields.x = v136->fields.right;
            v195.fields.y = v131->fields.lowerRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
              this,
              (FriendPointNoticeDialogSvtInfo_o *)gameObject,
              v195,
              v135);
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v70,
                                    2,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v138 = this->fields.layoutXPositionList;
            if ( !v138 )
              goto LABEL_228;
            right = v138->fields.left;
            lowerRow1 = v131->fields.lowerRow2;
            goto LABEL_194;
          }
          goto LABEL_229;
        }
      }
LABEL_159:
      if ( v189->fields.addFriendPoint > 0
        || v189->fields.addFollowFriendPoint > 0
        || v189->fields.addRecommendSupportFriendPoint >= 1 )
      {
        gameObject = (int64_t)this->fields.noDataLabel;
        if ( !gameObject )
          goto LABEL_228;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_228;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        noDataLabel = this->fields.noDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6882/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
        if ( !noDataLabel )
          goto LABEL_228;
        UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_228;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_228;
        gameObject = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_228;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_228;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_228;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      goto LABEL_201;
    }
    if ( v127 < 1 )
      goto LABEL_159;
    v147 = this->fields.layoutYPositionList;
    if ( !v147 )
      goto LABEL_228;
    if ( !v147->max_length )
      goto LABEL_229;
    gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
    if ( !gameObject )
      goto LABEL_228;
    v148 = v147->m_Items[0];
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !v148 )
      goto LABEL_228;
    v198.fields.y = v148->fields.upperLabel;
    v198.fields.x = v128;
    GameObjectExtensions__SetLocalPosition_33375356((UnityEngine_GameObject_o *)gameObject, v198, 0LL);
    gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
    if ( !gameObject )
      goto LABEL_228;
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_228;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v188,
                            0,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    v150 = this->fields.layoutXPositionList;
    if ( !v150 )
      goto LABEL_228;
    v199.fields.x = v150->fields.left;
    v199.fields.y = v148->fields.upperRow1;
    FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
      this,
      (FriendPointNoticeDialogSvtInfo_o *)gameObject,
      v199,
      v149);
    if ( v188->fields._size < 2 )
      goto LABEL_201;
    gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                            v188,
                            1,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    v152 = this->fields.layoutXPositionList;
    if ( !v152 )
      goto LABEL_228;
    left = v152->fields.right;
LABEL_184:
    v161 = (FriendPointNoticeDialogSvtInfo_o *)gameObject;
    upperRow2 = v148->fields.upperRow2;
LABEL_200:
    FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(this, v161, *(UnityEngine_Vector2_o *)&left, v151);
    goto LABEL_201;
  }
  v142 = this->fields.layoutYPositionList;
  if ( !v142 )
    goto LABEL_228;
  if ( !v142->max_length )
    goto LABEL_229;
  gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_228;
  v131 = v142->m_Items[0];
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_228;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !v131 )
    goto LABEL_228;
  v196.fields.y = v131->fields.upperLabel;
  v196.fields.x = v128;
  GameObjectExtensions__SetLocalPosition_33375356((UnityEngine_GameObject_o *)gameObject, v196, 0LL);
  gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v70,
                          0,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
  v144 = this->fields.layoutXPositionList;
  if ( !v144 )
    goto LABEL_228;
  v197.fields.x = v144->fields.left;
  v197.fields.y = v131->fields.upperRow1;
  FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
    this,
    (FriendPointNoticeDialogSvtInfo_o *)gameObject,
    v197,
    v143);
  if ( v70->fields._size >= 2 )
  {
    v145 = (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
    v146 = v70;
LABEL_198:
    gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(v146, 1, v145);
    v170 = this->fields.layoutXPositionList;
    if ( !v170 )
      goto LABEL_228;
    left = v170->fields.right;
    upperRow2 = v131->fields.upperRow1;
    v161 = (FriendPointNoticeDialogSvtInfo_o *)gameObject;
    goto LABEL_200;
  }
LABEL_201:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_228;
  gameObject = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)Master_object, gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_228;
  v172 = gameObject;
  v173 = *(_DWORD *)(gameObject + 24);
  v174 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v174 = BalanceConfig_TypeInfo;
  }
  if ( v173 >= v174->static_fields->FriendPointMax )
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6873/*"GET_FRIEND_POINT_AT_LIMIT"*/, 0LL);
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
              v176 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v176, this->fields.currentFpLabelYMaxFp, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.buttonParentObject,
                this->fields.buttonPosYMaxFp,
                0LL);
              goto LABEL_218;
            }
          }
        }
      }
    }
LABEL_228:
    sub_1B64324(gameObject);
  }
LABEL_218:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v178 = LocalizationManager__Get((System_String_o *)StringLiteral_6881/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  addFollowFriendPoint = *(_DWORD *)(v172 + 24);
  v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
  gameObject = (int64_t)System_String__Format(v178, v179, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_228;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  v180 = this->fields.currentFriendPointLabel;
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v180 )
    goto LABEL_228;
  UILabel__SetCondensedScale_46760740(
    v180,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_228;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6888/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_228;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v183);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6880/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_228;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v187 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v185, v186);
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

  if ( (byte_49FE5EB & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    this = (FriendPointNoticeDialogComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FE5EB = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1B64324(this);
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
  RecommendSupportQuestEntity_array *List; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  FriendPointNoticeDialogComponent___c_c *v15; // x8
  System_Object_array *v16; // x20
  System_Func_object__bool__o *_9__53_0; // x21
  Il2CppObject *v18; // x22
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  bool v22; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v24; // w20
  FriendPointNoticeDialogComponent_o *v25; // x0
  const MethodInfo *v26; // x3

  if ( (byte_49FE5EC & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_RecommendSupportQuestEntity___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__, v7);
    sub_1B640C8(&FriendPointNoticeDialogComponent___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_6883/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, v9);
    byte_49FE5EC = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6883/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  if ( !Master_object )
    goto LABEL_20;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v15 = FriendPointNoticeDialogComponent___c_TypeInfo;
  v16 = (System_Object_array *)List;
  if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
    v15 = FriendPointNoticeDialogComponent___c_TypeInfo;
  }
  _9__53_0 = (System_Func_object__bool__o *)v15->static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__53_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_RecommendSupportQuestEntity__bool__TypeInfo,
                                                v13,
                                                v14);
    System_Func_object__bool____ctor(
      _9__53_0,
      v18,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__53_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v20, v21);
  }
  v22 = BasicHelper__Any_object__48384284(
          v16,
          (System_Func_T__bool__o *)_9__53_0,
          (const MethodInfo_2E2491C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v24 = v22;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6883/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v25, this->fields.recommendedSupportButtonObject, v24, v26),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1B64324(Master_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v24, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_33375356(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_42002324(
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
    sub_1B64324(this);
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

  if ( (byte_49FE5E6 & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_49FE5E6 = 1;
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
    v8 = sub_1B9F5B8(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49FE5E7 & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo, value);
    byte_49FE5E7 = 1;
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
    v8 = sub_1B9F5B8(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AE1F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_19AE1A8;
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
  if ( (byte_49FE5F4 & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_49FE5F4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE5F5 & 1) == 0 )
  {
    sub_1B640C8(&FriendPointNoticeDialogComponent___c_TypeInfo, v1);
    byte_49FE5F5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(FriendPointNoticeDialogComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__53_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_49FE5F6 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1B640C8(&CondType_TypeInfo, entity);
    byte_49FE5F6 = 1;
  }
  if ( !entity )
    sub_1B64324(this);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37285996(questId, -1, 0, 0LL);
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
    sub_1B64324(_4__this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}