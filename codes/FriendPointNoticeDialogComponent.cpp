void __fastcall FriendPointNoticeDialogComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5D1BE & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogComponent_TypeInfo);
    byte_4A5D1BE = 1;
  }
  *FriendPointNoticeDialogComponent_TypeInfo->static_fields = (struct FriendPointNoticeDialogComponent_StaticFields)vdup_n_s32(0x442F0000u).n64_u64[0];
}


void __fastcall FriendPointNoticeDialogComponent___ctor(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D1BD & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5D1BD = 1;
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

  FriendPointNoticeDialogComponent__Close_42178860(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDialogComponent__Close_42178860(
        FriendPointNoticeDialogComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  FriendPointNoticeDialogComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  FriendPointNoticeDialogComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  FriendPointNoticeDialogComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  FriendPointNoticeDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x21

  if ( (byte_4A5D1B5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__);
    sub_1B885B0(&FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo);
    byte_4A5D1B5 = 1;
  }
  v5 = sub_1B887FC(FriendPointNoticeDialogComponent___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  FriendPointNoticeDialogComponent__SetEnableButton(v12, this->fields.decideButtonObject, 0, v13);
  FriendPointNoticeDialogComponent__SetEnableButton(v14, this->fields.friendSupportButtonObject, 0, v15);
  FriendPointNoticeDialogComponent__SetEnableButton(v16, this->fields.recommendedSupportButtonObject, 0, v17);
  FriendPointNoticeDialogComponent__SetEnableButton(v18, this->fields.closeButtonObject, 0, v19);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeButtonObject, 0LL);
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_FriendPointNoticeDialogComponent___c__DisplayClass51_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
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
  sub_1B88554(p_clickedFunc, 0, (int32_t)method, v3);
}


void __fastcall FriendPointNoticeDialogComponent__Init(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A5D1B3 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D1B3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, string_TypeInfo->static_fields->Empty, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A5D1BC & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent_OnClickCancel__);
    byte_4A5D1BC = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FriendPointNoticeDialogComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  FriendPointNoticeDialogComponent__ExecClickedFunc(this, 3, v5);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickRecommendedSupportDisableMask(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A5D1B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
    byte_4A5D1B8 = 1;
  }
  v2 = Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_FriendPointNoticeDialogComponent_OnClickRecommendedSupportDisableMask__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 1, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__OnClickToFriedPointSummon(
        FriendPointNoticeDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A5D1B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
    byte_4A5D1B9 = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FriendPointNoticeDialogComponent_OnClickToFriedPointSummon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A5D1BB & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
    byte_4A5D1BB = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FriendPointNoticeDialogComponent_OnClickToRecommendedSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A5D1BA & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
    byte_4A5D1BA = 1;
  }
  v3 = Method_FriendPointNoticeDialogComponent_OnClickToSupport__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDialogComponent_OnClickToSupport__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_FriendPointNoticeDialogComponent_OnClickToSupport__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  int64_t gameObject; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  UILabel_o *titleLabel; // x21
  int32_t addFriendPoint; // w8
  _BOOL4 v13; // w20
  struct UILabel_o *addedPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v16; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct UILabel_o *v23; // x21
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *v34; // x21
  UILabel_o *addedRecommendedPointLabel; // x21
  System_String_o *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  UILabel_o *v41; // x21
  UnityEngine_GameObject_o *v42; // x0
  System_Collections_Generic_List_object__o *v43; // x21
  UILabel_o *usedRecommendedServantTitleLabel; // x23
  struct CommonUI_LoginResultRecommendSupportFriendPointSvtData_array *addRecommendSupportFriendPointSvtList; // x29
  struct FriendPointNoticeDialogSvtInfo_array *recommendedSupportServantInfoList; // x28
  __int64 v47; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // x23
  il2cpp_array_size_t v49; // w26
  unsigned __int64 v50; // x27
  il2cpp_array_size_t max_length; // w8
  CommonUI_LoginResultRecommendSupportFriendPointSvtData_o *v52; // x24
  System_String_o *monitor; // x25
  const MethodInfo *v54; // x5
  struct FriendPointNoticeDialogSvtInfo_array *v55; // x8
  struct FriendPointNoticeDialogSvtInfo_array *v56; // x8
  int32_t v57; // w2
  int32_t v58; // w3
  struct FriendPointNoticeDialogSvtInfo_array *v59; // x8
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_IEnumerable_T__o *v64; // x23
  FriendPointNoticeDialogComponent___c_c *v65; // x0
  System_Action_object__o *_9__46_1; // x24
  Il2CppObject *v67; // x25
  struct FriendPointNoticeDialogComponent___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  UILabel_o *mostUsedServantTitleLabel; // x23
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x24
  FriendPointNoticeDialogSvtInfo_o *normalSupportServantInfo; // x23
  const MethodInfo *v74; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v75; // x8
  CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x24
  FriendPointNoticeDialogSvtInfo_o *eventSupportServantInfo; // x23
  const MethodInfo *v78; // x5
  struct CommonUI_LoginResultFriendPointSvtData_o *v79; // x8
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  unsigned int localPosition; // s0
  int v93; // w8
  float v94; // s8
  int v95; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *v96; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v97; // x20
  UnityEngine_GameObject_o *v98; // x0
  const MethodInfo *v99; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v100; // x8
  const MethodInfo *v101; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v102; // x8
  const MethodInfo *v103; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v104; // x8
  float left; // s0
  float lowerRow1; // s1
  int v107; // w9
  struct FriendPointNoticeDialogComponent_PositionYData_array *layoutYPositionList; // x8
  const MethodInfo *v109; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *layoutXPositionList; // x8
  const MethodInfo_34FD564 *v111; // x2
  System_Collections_Generic_List_object__o *v112; // x0
  struct FriendPointNoticeDialogComponent_PositionYData_array *v113; // x8
  const MethodInfo *v114; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v115; // x8
  UILabel_o *noDataLabel; // x20
  struct FriendPointNoticeDialogComponent_PositionYData_array *v117; // x8
  FriendPointNoticeDialogComponent_PositionYData_o *v118; // x20
  const MethodInfo *v119; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v120; // x8
  const MethodInfo *v121; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v122; // x8
  const MethodInfo *v123; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v124; // x8
  float right; // s0
  float upperRow1; // s1
  struct FriendPointNoticeDialogComponent_PositionYData_array *v127; // x8
  UnityEngine_GameObject_o *v128; // x0
  const MethodInfo *v129; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v130; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v131; // x8
  const MethodInfo *v132; // x2
  struct FriendPointNoticeDialogComponent_PositionXData_o *v133; // x8
  struct FriendPointNoticeDialogComponent_PositionXData_o *v134; // x8
  Il2CppObject *Master_object; // x20
  int64_t v136; // x20
  int32_t v137; // w21
  BalanceConfig_c *v138; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UnityEngine_GameObject_o *v140; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v142; // x22
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  Il2CppObject *v146; // x0
  UILabel_o *v147; // x20
  UILabel_o *closeButtonLabel; // x20
  UILabel_o *friendSupportButtonLabel; // x20
  const MethodInfo *v150; // x1
  UILabel_o *decideButtonLabel; // x20
  System_Action_o *v152; // x20
  System_Collections_Generic_List_object__o *v153; // [xsp+8h] [xbp-88h]
  CommonUI_LoginResultData_o *v154; // [xsp+10h] [xbp-80h]
  int32_t addFollowFriendPoint; // [xsp+1Ch] [xbp-74h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector2_o v157; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v158; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v159; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v160; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v161; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v162; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v163; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v164; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v165; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v166; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v167; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v168; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v169; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v170; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v171; // 0:s0.4,4:s1.4

  if ( (byte_4A5D1B4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent__Open_b__46_0__);
    sub_1B885B0(&FriendPointNoticeDialogComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__);
    sub_1B885B0(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6907/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/);
    sub_1B885B0(&StringLiteral_6914/*"GET_FRIEND_POINT_SERVANT_TITLE"*/);
    sub_1B885B0(&StringLiteral_6910/*"GET_FRIEND_POINT_NO_DATA"*/);
    sub_1B885B0(&StringLiteral_6909/*"GET_FRIEND_POINT_NOW_POINT"*/);
    sub_1B885B0(&StringLiteral_6916/*"GET_FRIEND_POINT_SUPPORT_BTN"*/);
    sub_1B885B0(&StringLiteral_118/*"  "*/);
    sub_1B885B0(&StringLiteral_6906/*"GET_FRIEND_POINT_FP_NORMAL"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6905/*"GET_FRIEND_POINT_FP_FOLLOW"*/);
    sub_1B885B0(&StringLiteral_6915/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/);
    sub_1B885B0(&StringLiteral_6902/*"GET_FRIEND_POINT_CAPTION_EVENT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_6908/*"GET_FRIEND_POINT_GACHA_BTN"*/);
    sub_1B885B0(&StringLiteral_6917/*"GET_FRIEND_POINT_TITLE"*/);
    sub_1B885B0(&StringLiteral_6901/*"GET_FRIEND_POINT_AT_LIMIT"*/);
    sub_1B885B0(&StringLiteral_6903/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/);
    byte_4A5D1B4 = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.clickedFunc = clickedAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickedFunc, (int32_t)clickedAction, v9, v10);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6917/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
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
  v13 = addFriendPoint < 1;
  if ( addFriendPoint >= 1 )
  {
    addedPointLabel = this->fields.addedPointLabel;
    if ( !addedPointLabel )
      goto LABEL_227;
    mText = addedPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6906/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFriendPoint;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v17, v18, v19);
    v21 = System_String__Format(v16, v20, 0LL);
    v22 = System_String__Concat_61707032(mText, v21, 0LL);
    UILabel__set_text(addedPointLabel, v22, 0LL);
  }
  if ( loginResultData->fields.addFollowFriendPoint >= 1 )
  {
    if ( loginResultData->fields.addFriendPoint >= 1 )
    {
      v23 = this->fields.addedPointLabel;
      if ( !v23 )
        goto LABEL_227;
      v24 = System_String__Concat_61707032(v23->fields.mText, (System_String_o *)StringLiteral_118/*"  "*/, 0LL);
      UILabel__set_text(v23, v24, 0LL);
    }
    v25 = this->fields.addedPointLabel;
    if ( !v25 )
      goto LABEL_227;
    v26 = v25->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6905/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = loginResultData->fields.addFollowFriendPoint;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v28, v29, v30);
    v32 = System_String__Format(v27, v31, 0LL);
    v33 = System_String__Concat_61707032(v26, v32, 0LL);
    UILabel__set_text(v25, v33, 0LL);
    v13 = 0;
  }
  v34 = this->fields.addedPointLabel;
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v34 )
    goto LABEL_227;
  UILabel__SetCondensedScale_47038932(
    v34,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  if ( loginResultData->fields.addRecommendSupportFriendPoint < 1 )
  {
    gameObject = (int64_t)this->fields.addedPointLabel;
    if ( !gameObject )
      goto LABEL_227;
LABEL_38:
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v42, this->fields.addedPointLabelCenterPosY, 0LL);
    goto LABEL_39;
  }
  addedRecommendedPointLabel = this->fields.addedRecommendedPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6907/*"GET_FRIEND_POINT_FP_RECOMMENDED"*/, 0LL);
  addFollowFriendPoint = loginResultData->fields.addRecommendSupportFriendPoint;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v37, v38, v39);
  gameObject = (int64_t)System_String__Format(v36, v40, 0LL);
  if ( !addedRecommendedPointLabel )
    goto LABEL_227;
  UILabel__set_text(addedRecommendedPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  v41 = this->fields.addedRecommendedPointLabel;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v41 )
    goto LABEL_227;
  UILabel__SetCondensedScale_47038932(
    v41,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  if ( v13 )
  {
    gameObject = (int64_t)this->fields.addedRecommendedPointLabel;
    if ( !gameObject )
      goto LABEL_227;
    goto LABEL_38;
  }
LABEL_39:
  v43 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  v153 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v153,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo___ctor__);
  usedRecommendedServantTitleLabel = this->fields.usedRecommendedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6915/*"GET_FRIEND_POINT_SERVANT_USED_RECOMMENDED_TITLE"*/, 0LL);
  if ( !usedRecommendedServantTitleLabel )
    goto LABEL_227;
  UILabel__set_text(usedRecommendedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  addRecommendSupportFriendPointSvtList = loginResultData->fields.addRecommendSupportFriendPointSvtList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  v154 = loginResultData;
  if ( addRecommendSupportFriendPointSvtList && *(_QWORD *)&addRecommendSupportFriendPointSvtList->max_length )
  {
    recommendedSupportServantInfoList = this->fields.recommendedSupportServantInfoList;
    if ( !recommendedSupportServantInfoList )
      goto LABEL_227;
    v47 = *(_QWORD *)&recommendedSupportServantInfoList->max_length;
    if ( (int)v47 >= 1 )
    {
      v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v49 = 0;
      v50 = 0LL;
      while ( v50 < (unsigned int)v47 )
      {
        max_length = addRecommendSupportFriendPointSvtList->max_length;
        if ( (int)v49 >= (int)max_length )
        {
          gameObject = (int64_t)recommendedSupportServantInfoList->m_Items[v50];
          if ( !gameObject )
            goto LABEL_227;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_227;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          if ( v49 >= max_length )
            goto LABEL_228;
          v52 = addRecommendSupportFriendPointSvtList->m_Items[v49];
          if ( !v52 || !v48 )
            goto LABEL_227;
          monitor = (System_String_o *)StringLiteral_1/*""*/;
          gameObject = DataMasterBase_object__object__int___TryGetEntity(
                         v48,
                         &entity,
                         v52->fields.questId,
                         (const MethodInfo_311D988 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
          if ( (gameObject & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_227;
            monitor = (System_String_o *)entity[1].monitor;
          }
          v55 = this->fields.recommendedSupportServantInfoList;
          if ( !v55 )
            goto LABEL_227;
          if ( v49 >= v55->max_length )
            goto LABEL_228;
          FriendPointNoticeDialogComponent__SetupServantInfo_42176060(
            (FriendPointNoticeDialogComponent_o *)gameObject,
            v55->m_Items[v49],
            v52,
            monitor,
            v52->fields.friendPoint,
            v54);
          v56 = this->fields.recommendedSupportServantInfoList;
          if ( !v56 )
            goto LABEL_227;
          if ( v49 >= v56->max_length )
            goto LABEL_228;
          gameObject = (int64_t)v56->m_Items[v49];
          if ( !gameObject )
            goto LABEL_227;
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_227;
          gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( (gameObject & 1) != 0 )
          {
            v59 = this->fields.recommendedSupportServantInfoList;
            if ( !v59 )
              goto LABEL_227;
            if ( v49 >= v59->max_length )
              goto LABEL_228;
            if ( !v43 )
              goto LABEL_227;
            v8 = (Il2CppObject *)v59->m_Items[v49];
            items = v43->fields._items;
            v61 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_227;
            size = v43->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v43,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = &items->obj.klass + size;
              v43->fields._size = size + 1;
              v63[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v8, v57, v58);
            }
          }
          ++v49;
        }
        LODWORD(v47) = recommendedSupportServantInfoList->max_length;
        if ( (__int64)++v50 >= (int)v47 )
          goto LABEL_84;
      }
      goto LABEL_228;
    }
  }
  else
  {
    v64 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.recommendedSupportServantInfoList;
    v65 = FriendPointNoticeDialogComponent___c_TypeInfo;
    if ( !FriendPointNoticeDialogComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent___c_TypeInfo);
      v65 = FriendPointNoticeDialogComponent___c_TypeInfo;
    }
    _9__46_1 = (System_Action_object__o *)v65->static_fields->__9__46_1;
    if ( !_9__46_1 )
    {
      if ( !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v65 = FriendPointNoticeDialogComponent___c_TypeInfo;
      }
      v67 = (Il2CppObject *)v65->static_fields->__9;
      _9__46_1 = (System_Action_object__o *)sub_1B887FC(System_Action_FriendPointNoticeDialogSvtInfo__TypeInfo);
      System_Action_object____ctor(_9__46_1, v67, Method_FriendPointNoticeDialogComponent___c__Open_b__46_1__, 0LL);
      static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_1 = (struct System_Action_FriendPointNoticeDialogSvtInfo__o *)_9__46_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_1, (int32_t)_9__46_1, v69, v70);
    }
    BasicHelper__ForEach_object_(
      v64,
      (System_Action_T__o *)_9__46_1,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_FriendPointNoticeDialogSvtInfo___);
  }
LABEL_84:
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6914/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_227;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  topAddFriendPointSvt = v154->fields.topAddFriendPointSvt;
  normalSupportServantInfo = this->fields.normalSupportServantInfo;
  if ( topAddFriendPointSvt )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6903/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
    v75 = v154->fields.topAddFriendPointSvt;
    if ( !v75 )
      goto LABEL_227;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      normalSupportServantInfo,
      topAddFriendPointSvt,
      (System_String_o *)gameObject,
      v75->fields.friendPoint,
      v74);
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
  topAddFriendPointSvtEQ = v154->fields.topAddFriendPointSvtEQ;
  eventSupportServantInfo = this->fields.eventSupportServantInfo;
  if ( topAddFriendPointSvtEQ )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6902/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
    v79 = v154->fields.topAddFriendPointSvtEQ;
    if ( !v79 )
      goto LABEL_227;
    FriendPointNoticeDialogComponent__SetupServantInfo(
      (FriendPointNoticeDialogComponent_o *)gameObject,
      eventSupportServantInfo,
      topAddFriendPointSvtEQ,
      (System_String_o *)gameObject,
      v79->fields.friendPoint,
      v78);
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
    if ( !v153 )
      goto LABEL_227;
    v8 = (Il2CppObject *)this->fields.normalSupportServantInfo;
    v82 = v153->fields._items;
    v83 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v153->fields._version;
    if ( !v82 )
      goto LABEL_227;
    v84 = v153->fields._size;
    if ( (unsigned int)v84 >= v82->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v153,
        v8,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v82->obj.klass + v84;
      v153->fields._size = v84 + 1;
      v85[4] = (Il2CppClass *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v8, v80, v81);
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
    if ( !v153 )
      goto LABEL_227;
    v8 = (Il2CppObject *)this->fields.eventSupportServantInfo;
    v88 = v153->fields._items;
    v89 = Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__Add__;
    ++v153->fields._version;
    if ( !v88 )
      goto LABEL_227;
    v90 = v153->fields._size;
    if ( (unsigned int)v90 >= v88->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v153,
        v8,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->obj.klass + v90;
      v153->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v91 + 4), (int32_t)v8, v86, v87);
    }
  }
  gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !v153 )
    goto LABEL_227;
  v93 = v153->fields._size;
  v94 = *(float *)&localPosition;
  if ( v93 )
  {
    if ( !v43 )
      goto LABEL_227;
  }
  else
  {
    if ( !v43 )
      goto LABEL_227;
    v107 = v43->fields._size;
    if ( (unsigned int)(v107 - 1) <= 1 )
    {
      layoutYPositionList = this->fields.layoutYPositionList;
      if ( !layoutYPositionList )
        goto LABEL_227;
      if ( layoutYPositionList->max_length )
      {
        gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        v97 = layoutYPositionList->m_Items[0];
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_227;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v97 )
          goto LABEL_227;
        v161.fields.y = v97->fields.upperLabel;
        v161.fields.x = v94;
        GameObjectExtensions__SetLocalPosition_33724016((UnityEngine_GameObject_o *)gameObject, v161, 0LL);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v43,
                                0,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        layoutXPositionList = this->fields.layoutXPositionList;
        if ( !layoutXPositionList )
          goto LABEL_227;
        v162.fields.x = layoutXPositionList->fields.left;
        v162.fields.y = v97->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
          this,
          (FriendPointNoticeDialogSvtInfo_o *)gameObject,
          v162,
          v109);
        if ( v43->fields._size >= 2 )
        {
          v111 = (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
          v112 = v43;
LABEL_197:
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(v112, 1, v111);
          v134 = this->fields.layoutXPositionList;
          if ( !v134 )
            goto LABEL_227;
          right = v134->fields.right;
          upperRow1 = v97->fields.upperRow1;
LABEL_199:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            *(UnityEngine_Vector2_o *)&right,
            v123);
          goto LABEL_200;
        }
        goto LABEL_200;
      }
      goto LABEL_228;
    }
    if ( v107 >= 3 )
    {
      v117 = this->fields.layoutYPositionList;
      if ( !v117 )
        goto LABEL_227;
      if ( v117->max_length > 1 )
      {
        gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        v118 = v117->m_Items[1];
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_227;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
        if ( !gameObject )
          goto LABEL_227;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !v118 )
          goto LABEL_227;
        v165.fields.y = v118->fields.upperLabel;
        v165.fields.x = v94;
        GameObjectExtensions__SetLocalPosition_33724016((UnityEngine_GameObject_o *)gameObject, v165, 0LL);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v43,
                                0,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v120 = this->fields.layoutXPositionList;
        if ( !v120 )
          goto LABEL_227;
        v166.fields.x = v120->fields.left;
        v166.fields.y = v118->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
          this,
          (FriendPointNoticeDialogSvtInfo_o *)gameObject,
          v166,
          v119);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v43,
                                1,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v122 = this->fields.layoutXPositionList;
        if ( !v122 )
          goto LABEL_227;
        v167.fields.x = v122->fields.right;
        v167.fields.y = v118->fields.upperRow1;
        FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
          this,
          (FriendPointNoticeDialogSvtInfo_o *)gameObject,
          v167,
          v121);
        gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v43,
                                2,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
        v124 = this->fields.layoutXPositionList;
        if ( !v124 )
          goto LABEL_227;
        right = v124->fields.left;
        upperRow1 = v118->fields.upperRow2;
        goto LABEL_199;
      }
      goto LABEL_228;
    }
  }
  v95 = v43->fields._size;
  if ( v95 )
  {
    if ( v93 >= 1 )
    {
      if ( v95 <= 2 )
      {
        v127 = this->fields.layoutYPositionList;
        if ( !v127 )
          goto LABEL_227;
        if ( v127->max_length > 2 )
        {
          gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v97 = v127->m_Items[2];
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !v97 )
            goto LABEL_227;
          v168.fields.y = v97->fields.lowerLabel;
          v168.fields.x = v94;
          GameObjectExtensions__SetLocalPosition_33724016((UnityEngine_GameObject_o *)gameObject, v168, 0LL);
          gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v128 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v169.fields.y = v97->fields.upperLabel;
          v169.fields.x = v94;
          GameObjectExtensions__SetLocalPosition_33724016(v128, v169, 0LL);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v43,
                                  0,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v130 = this->fields.layoutXPositionList;
          if ( !v130 )
            goto LABEL_227;
          v170.fields.x = v130->fields.left;
          v170.fields.y = v97->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            v170,
            v129);
          if ( v43->fields._size < 2 )
          {
LABEL_193:
            gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v153,
                                    0,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
            v133 = this->fields.layoutXPositionList;
            if ( !v133 )
              goto LABEL_227;
            v171.fields.x = v133->fields.left;
            v171.fields.y = v97->fields.upperRow1;
            FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
              this,
              (FriendPointNoticeDialogSvtInfo_o *)gameObject,
              v171,
              v132);
            if ( v153->fields._size >= 2 )
            {
              v111 = (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
              goto LABEL_196;
            }
            goto LABEL_200;
          }
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v43,
                                  1,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v131 = this->fields.layoutXPositionList;
          if ( !v131 )
            goto LABEL_227;
          left = v131->fields.right;
          lowerRow1 = v97->fields.lowerRow1;
LABEL_192:
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            *(UnityEngine_Vector2_o *)&left,
            v103);
          goto LABEL_193;
        }
LABEL_228:
        sub_1B88814(gameObject, v8);
      }
      if ( v95 == 3 )
      {
        v96 = this->fields.layoutYPositionList;
        if ( !v96 )
          goto LABEL_227;
        if ( v96->max_length > 3 )
        {
          gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v97 = v96->m_Items[3];
          gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !v97 )
            goto LABEL_227;
          v157.fields.y = v97->fields.lowerLabel;
          v157.fields.x = v94;
          GameObjectExtensions__SetLocalPosition_33724016((UnityEngine_GameObject_o *)gameObject, v157, 0LL);
          gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
          if ( !gameObject )
            goto LABEL_227;
          v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          v158.fields.y = v97->fields.upperLabel;
          v158.fields.x = v94;
          GameObjectExtensions__SetLocalPosition_33724016(v98, v158, 0LL);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v43,
                                  0,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v100 = this->fields.layoutXPositionList;
          if ( !v100 )
            goto LABEL_227;
          v159.fields.x = v100->fields.left;
          v159.fields.y = v97->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            v159,
            v99);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v43,
                                  1,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v102 = this->fields.layoutXPositionList;
          if ( !v102 )
            goto LABEL_227;
          v160.fields.x = v102->fields.right;
          v160.fields.y = v97->fields.lowerRow1;
          FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
            this,
            (FriendPointNoticeDialogSvtInfo_o *)gameObject,
            v160,
            v101);
          gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v43,
                                  2,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
          v104 = this->fields.layoutXPositionList;
          if ( !v104 )
            goto LABEL_227;
          left = v104->fields.left;
          lowerRow1 = v97->fields.lowerRow2;
          goto LABEL_192;
        }
        goto LABEL_228;
      }
    }
LABEL_158:
    if ( v154->fields.addFriendPoint > 0
      || v154->fields.addFollowFriendPoint > 0
      || v154->fields.addRecommendSupportFriendPoint >= 1 )
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6910/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
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
  if ( v93 < 1 )
    goto LABEL_158;
  v113 = this->fields.layoutYPositionList;
  if ( !v113 )
    goto LABEL_227;
  if ( !v113->max_length )
    goto LABEL_228;
  gameObject = (int64_t)this->fields.mostUsedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_227;
  v97 = v113->m_Items[0];
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !v97 )
    goto LABEL_227;
  v163.fields.y = v97->fields.upperLabel;
  v163.fields.x = v94;
  GameObjectExtensions__SetLocalPosition_33724016((UnityEngine_GameObject_o *)gameObject, v163, 0LL);
  gameObject = (int64_t)this->fields.usedRecommendedServantTitleLabel;
  if ( !gameObject )
    goto LABEL_227;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (int64_t)System_Collections_Generic_List_object___get_Item(
                          v153,
                          0,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__);
  v115 = this->fields.layoutXPositionList;
  if ( !v115 )
    goto LABEL_227;
  v164.fields.x = v115->fields.left;
  v164.fields.y = v97->fields.upperRow1;
  FriendPointNoticeDialogComponent__SetupServantInfoLocalPosition(
    this,
    (FriendPointNoticeDialogSvtInfo_o *)gameObject,
    v164,
    v114);
  if ( v153->fields._size >= 2 )
  {
    v111 = (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FriendPointNoticeDialogSvtInfo__get_Item__;
LABEL_196:
    v112 = v153;
    goto LABEL_197;
  }
LABEL_200:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_227;
  gameObject = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)Master_object, gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_227;
  v136 = gameObject;
  v137 = *(_DWORD *)(gameObject + 24);
  v138 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v138 = BalanceConfig_TypeInfo;
  }
  if ( v137 >= v138->static_fields->FriendPointMax )
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6901/*"GET_FRIEND_POINT_AT_LIMIT"*/, 0LL);
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
              v140 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(v140, this->fields.currentFpLabelYMaxFp, 0LL);
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
    sub_1B8880C(gameObject, v8);
  }
LABEL_217:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v142 = LocalizationManager__Get((System_String_o *)StringLiteral_6909/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  addFollowFriendPoint = *(_DWORD *)(v136 + 24);
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v143, v144, v145);
  gameObject = (int64_t)System_String__Format(v142, v146, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_227;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  v147 = this->fields.currentFriendPointLabel;
  gameObject = (int64_t)FriendPointNoticeDialogComponent_TypeInfo;
  if ( !FriendPointNoticeDialogComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDialogComponent_TypeInfo);
  if ( !v147 )
    goto LABEL_227;
  UILabel__SetCondensedScale_47038932(
    v147,
    FriendPointNoticeDialogComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeButtonLabel = this->fields.closeButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeButtonLabel )
    goto LABEL_227;
  UILabel__set_text(closeButtonLabel, (System_String_o *)gameObject, 0LL);
  friendSupportButtonLabel = this->fields.friendSupportButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6916/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !friendSupportButtonLabel )
    goto LABEL_227;
  UILabel__set_text(friendSupportButtonLabel, (System_String_o *)gameObject, 0LL);
  FriendPointNoticeDialogComponent__SetRecommendedSupportButton(this, v150);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6908/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_227;
  UILabel__set_text(decideButtonLabel, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeButtonObject, 0LL);
  v152 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v152, (Il2CppObject *)this, Method_FriendPointNoticeDialogComponent__Open_b__46_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v152, 0, 0LL);
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

  if ( (byte_4A5D1B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (FriendPointNoticeDialogComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D1B6 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_1B8880C(this, buttonObj);
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
  int32_t v12; // w2
  int32_t v13; // w3
  bool v14; // w0
  UILabel_o *recommendedSupportButtonLabelForMask; // x21
  bool v16; // w20
  FriendPointNoticeDialogComponent_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4A5D1B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_RecommendSupportQuestEntity___);
    sub_1B885B0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__);
    sub_1B885B0(&FriendPointNoticeDialogComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6911/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/);
    byte_4A5D1B7 = 1;
  }
  recommendedSupportButtonLabel = this->fields.recommendedSupportButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6911/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabel )
    goto LABEL_20;
  UILabel__set_text(recommendedSupportButtonLabel, Master_object, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
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
    _9__53_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendSupportQuestEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__53_0,
      v10,
      Method_FriendPointNoticeDialogComponent___c__SetRecommendedSupportButton_b__53_0__,
      0LL);
    static_fields = FriendPointNoticeDialogComponent___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Func_RecommendSupportQuestEntity__bool__o *)_9__53_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__53_0, (int32_t)_9__53_0, v12, v13);
  }
  v14 = BasicHelper__Any_object__48672124(
          v8,
          (System_Func_T__bool__o *)_9__53_0,
          (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RecommendSupportQuestEntity___);
  recommendedSupportButtonLabelForMask = this->fields.recommendedSupportButtonLabelForMask;
  v16 = v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_6911/*"GET_FRIEND_POINT_RECOMMENDED_BTN"*/, 0LL);
  if ( !recommendedSupportButtonLabelForMask
    || (UILabel__set_text(recommendedSupportButtonLabelForMask, Master_object, 0LL),
        FriendPointNoticeDialogComponent__SetEnableButton(v17, this->fields.recommendedSupportButtonObject, v16, v18),
        (Master_object = (System_String_o *)this->fields.recommendedSupportButtonMaskTextObject) == 0LL) )
  {
LABEL_20:
    sub_1B8880C(Master_object, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !v16, 0LL);
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
    sub_1B8880C(this, servantInfo);
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
    sub_1B8880C(this, 0LL);
  y = position.fields.y;
  x = position.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  v11.fields.x = x;
  v11.fields.y = y;
  GameObjectExtensions__SetLocalPosition_33724016(gameObject, v11, 0LL);
  FriendPointNoticeDialogSvtInfo__SetLabelsCondensedScale(servantInfo, this->fields.servantNameLabelMaxWidth, v9);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantInfo, 0LL);
  GameObjectExtensions__ResetLocalScale(v10, 0LL);
}


void __fastcall FriendPointNoticeDialogComponent__SetupServantInfo_42176060(
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
    sub_1B8880C(this, servantInfo);
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

  if ( (byte_4A5D1B1 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4A5D1B1 = 1;
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
    v8 = sub_1BC3AA0(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5D1B2 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogComponent_CallbackFunc_TypeInfo);
    byte_4A5D1B2 = 1;
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
    v8 = sub_1BC3AA0(p_clickedFunc, v7, clickedFunc);
    v9 = clickedFunc == (System_Delegate_o *)v8;
    clickedFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D091C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_19D08D4;
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
  if ( (byte_4A5D1BF & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogComponent_ResultClicked_TypeInfo);
    byte_4A5D1BF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDialogComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDialogComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDialogComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D1C0 & 1) == 0 )
  {
    sub_1B885B0(&FriendPointNoticeDialogComponent___c_TypeInfo);
    byte_4A5D1C0 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FriendPointNoticeDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FriendPointNoticeDialogComponent___c_TypeInfo->static_fields->__9 = (struct FriendPointNoticeDialogComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)FriendPointNoticeDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


bool __fastcall FriendPointNoticeDialogComponent___c___SetRecommendedSupportButton_b__53_0(
        FriendPointNoticeDialogComponent___c_o *this,
        RecommendSupportQuestEntity_o *entity,
        const MethodInfo *method)
{
  int32_t questId; // w19

  if ( (byte_4A5D1C1 & 1) == 0 )
  {
    this = (FriendPointNoticeDialogComponent___c_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5D1C1 = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  questId = entity->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
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
    sub_1B8880C(_4__this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}