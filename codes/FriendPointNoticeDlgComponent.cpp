void __fastcall FriendPointNoticeDlgComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  FriendPointNoticeDlgComponent_c *v4; // x8

  if ( (byte_42EB455 & 1) == 0 )
  {
    sub_B5D5C4(&FriendPointNoticeDlgComponent_TypeInfo, v1, v2, v3);
    byte_42EB455 = 1;
  }
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->SERVANT_DISP_1_POS_Y = 50.0;
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH = 700.0;
  v4 = FriendPointNoticeDlgComponent_TypeInfo;
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH = 500.0;
  v4->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH = 700.0;
  v4->static_fields->CONFIRM_WINDOW_HEIGHT_MAX_FP = 540;
  v4->static_fields->TOP_PARTS_POS_Y_MAX_FP = 10.0;
  v4->static_fields->CURRENT_FP_LABEL_Y_MAX_FP = -130.0;
  v4->static_fields->BUTTON_POS_Y_MAX_FP = -30.0;
}


void __fastcall FriendPointNoticeDlgComponent___ctor(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB454 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB454 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__Callback(
        FriendPointNoticeDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  FriendPointNoticeDlgComponent_CallbackFunc_o *callbackFunc; // x20
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendPointNoticeDlgComponent_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall FriendPointNoticeDlgComponent__Close(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDlgComponent__Close_30274012(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDlgComponent__Close_30274012(
        FriendPointNoticeDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *closeBtn; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *v19; // x20

  if ( (byte_42EB44F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_FriendPointNoticeDlgComponent_EndClose__, v9, v10, v11);
    byte_42EB44F = 1;
  }
  FriendPointNoticeDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  closeBtn = this->fields.closeBtn;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn(closeBtn, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__DisableButtons(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  FriendPointNoticeDlgComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  FriendPointNoticeDlgComponent_o *v6; // x0
  const MethodInfo *v7; // x3

  FriendPointNoticeDlgComponent__SetEnableButton(this, this->fields.rightBtn, 0, v2);
  FriendPointNoticeDlgComponent__SetEnableButton(v4, this->fields.middleBtn, 0, v5);
  FriendPointNoticeDlgComponent__SetEnableButton(v6, this->fields.closeBtn, 0, v7);
}


void __fastcall FriendPointNoticeDlgComponent__EndClose(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *closeCallbackFunc; // x20

  FriendPointNoticeDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall FriendPointNoticeDlgComponent__EndOpen(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall FriendPointNoticeDlgComponent__Init(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EB449 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB449 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.addPointLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickCancel(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB452 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB452 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 2, v5);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickMiddle(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t middleSeNo; // w20
  const MethodInfo *v6; // x2

  if ( (byte_42EB451 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB451 = 1;
  }
  middleSeNo = this->fields.middleSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(middleSeNo, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 1, v6);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickRight(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t rightSeNo; // w20
  const MethodInfo *v6; // x2

  if ( (byte_42EB450 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB450 = 1;
  }
  rightSeNo = this->fields.rightSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(rightSeNo, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 0, v6);
}


void __fastcall FriendPointNoticeDlgComponent__Open(
        FriendPointNoticeDlgComponent_o *this,
        CommonUI_LoginResultData_o *mLoginResult,
        FriendPointNoticeDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int64_t gameObject; // x0
  __int64 v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_GameObject_o *servantListObj; // x0
  UILabel_o *titleLabel; // x21
  struct UILabel_o *addPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v97; // x23
  Il2CppObject *v98; // x0
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  struct UILabel_o *v101; // x21
  System_String_o *v102; // x0
  struct UILabel_o *v103; // x21
  System_String_o *v104; // x22
  System_String_o *v105; // x23
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  UILabel_o *v109; // x21
  UILabel_o *mostUsedServantTitleLabel; // x21
  UILabel_o *normalSupportServantCaptionLabel; // x21
  UILabel_o *eventSupportServantCaptionLabel; // x21
  const MethodInfo *v113; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x8
  const MethodInfo *v115; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x8
  FriendPointNoticeDlgComponent_c *v117; // x0
  UnityEngine_GameObject_o *v118; // x21
  float SERVANT_DISP_1_POS_Y; // s0
  FriendPointNoticeDlgComponent_c *v120; // x0
  UILabel_o *noDataLabel; // x20
  TblUserMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t v123; // x20
  int32_t v124; // w21
  BalanceConfig_c *v125; // x0
  struct UILabel_o **p_currentFriendPointLabel; // x25
  UILabel_o *friendPointMaxLabel; // x21
  UIWidget_o *basePanelSprite; // x21
  UnityEngine_GameObject_o *v129; // x0
  UILabel_o *v130; // x21
  System_String_o *v131; // x22
  Il2CppObject *v132; // x0
  UILabel_o *v133; // x20
  UILabel_o *closeBtnLb; // x20
  UILabel_o *middleBtnLb; // x20
  UILabel_o *rightBtnLb; // x20
  const MethodInfo *v137; // x1
  System_Action_o *v138; // x20
  int v139; // [xsp+Ch] [xbp-44h] BYREF
  int32_t addFollowFriendPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t addFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EB44A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)mLoginResult, (_DWORD)callback, method);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantExceedMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_TblUserMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_FriendPointNoticeDlgComponent_EndOpen__, v28, v29, v30);
    sub_B5D5C4(&FriendPointNoticeDlgComponent_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&int_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&NetworkManager_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_6953/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_6950/*"GET_FRIEND_POINT_NO_DATA"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_6949/*"GET_FRIEND_POINT_NOW_POINT"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_6954/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_82/*"  "*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_6947/*"GET_FRIEND_POINT_FP_NORMAL"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_6946/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_6944/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_1/*""*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_6948/*"GET_FRIEND_POINT_GACHA_BTN"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_6955/*"GET_FRIEND_POINT_TITLE"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_6943/*"GET_FRIEND_POINT_AT_LIMIT"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_6945/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v82, v83, v84);
    byte_42EB44A = 1;
  }
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  servantListObj = this->fields.servantListObj;
  *(_QWORD *)&this->fields.rightSeNo = 0x800000008LL;
  this->fields.state = 1;
  GameObjectExtensions__SetLocalPositionY(servantListObj, 0.0, 0LL);
  gameObject = (int64_t)this->fields.noDataLabel;
  if ( !gameObject )
    goto LABEL_119;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6955/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_119;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)this->fields.addPointLabel;
  if ( !gameObject )
    goto LABEL_119;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !mLoginResult )
    goto LABEL_119;
  if ( mLoginResult->fields.addFriendPoint >= 1 )
  {
    addPointLabel = this->fields.addPointLabel;
    if ( !addPointLabel )
      goto LABEL_119;
    mText = addPointLabel->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v97 = LocalizationManager__Get((System_String_o *)StringLiteral_6947/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFriendPoint = mLoginResult->fields.addFriendPoint;
    v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFriendPoint);
    v99 = System_String__Format(v97, v98, 0LL);
    v100 = System_String__Concat_44577788(mText, v99, 0LL);
    UILabel__set_text(addPointLabel, v100, 0LL);
  }
  if ( mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    if ( mLoginResult->fields.addFriendPoint >= 1 )
    {
      v101 = this->fields.addPointLabel;
      if ( !v101 )
        goto LABEL_119;
      v102 = System_String__Concat_44577788(v101->fields.mText, (System_String_o *)StringLiteral_82/*"  "*/, 0LL);
      UILabel__set_text(v101, v102, 0LL);
    }
    v103 = this->fields.addPointLabel;
    if ( !v103 )
      goto LABEL_119;
    v104 = v103->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v105 = LocalizationManager__Get((System_String_o *)StringLiteral_6946/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = mLoginResult->fields.addFollowFriendPoint;
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v107 = System_String__Format(v105, v106, 0LL);
    v108 = System_String__Concat_44577788(v104, v107, 0LL);
    UILabel__set_text(v103, v108, 0LL);
  }
  v109 = this->fields.addPointLabel;
  gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
  if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  }
  if ( !v109 )
    goto LABEL_119;
  UILabel__SetCondensedScale_41950620(
    v109,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6953/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_119;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  normalSupportServantCaptionLabel = this->fields.normalSupportServantCaptionLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6945/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
  if ( !normalSupportServantCaptionLabel )
    goto LABEL_119;
  UILabel__set_text(normalSupportServantCaptionLabel, (System_String_o *)gameObject, 0LL);
  eventSupportServantCaptionLabel = this->fields.eventSupportServantCaptionLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6944/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
  if ( !eventSupportServantCaptionLabel )
    goto LABEL_119;
  UILabel__set_text(eventSupportServantCaptionLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)this->fields.normalSupportServantObj;
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)this->fields.eventSupportServantObj;
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  topAddFriendPointSvt = mLoginResult->fields.topAddFriendPointSvt;
  if ( !topAddFriendPointSvt )
    goto LABEL_45;
  gameObject = (int64_t)this->fields.normalSvtInfo;
  if ( !gameObject )
    goto LABEL_119;
  if ( !FriendPointNoticeDlgSvtInfo__Set(
          (FriendPointNoticeDlgSvtInfo_o *)gameObject,
          topAddFriendPointSvt->fields.svtId,
          topAddFriendPointSvt->fields.userSvtId,
          v113) )
  {
LABEL_45:
    gameObject = (int64_t)this->fields.normalSupportServantObj;
    if ( !gameObject )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  topAddFriendPointSvtEQ = mLoginResult->fields.topAddFriendPointSvtEQ;
  if ( !topAddFriendPointSvtEQ )
    goto LABEL_50;
  gameObject = (int64_t)this->fields.eventSvtInfo;
  if ( !gameObject )
    goto LABEL_119;
  if ( !FriendPointNoticeDlgSvtInfo__Set(
          (FriendPointNoticeDlgSvtInfo_o *)gameObject,
          topAddFriendPointSvtEQ->fields.svtId,
          topAddFriendPointSvtEQ->fields.userSvtId,
          v115) )
  {
LABEL_50:
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  gameObject = (int64_t)this->fields.normalSupportServantObj;
  if ( !gameObject )
LABEL_119:
    sub_B5D69C(gameObject, v86);
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_119;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      v117 = FriendPointNoticeDlgComponent_TypeInfo;
      v118 = this->fields.servantListObj;
      if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v117 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = v117->static_fields->SERVANT_DISP_1_POS_Y;
LABEL_68:
      GameObjectExtensions__SetLocalPositionY(v118, SERVANT_DISP_1_POS_Y, 0LL);
      goto LABEL_69;
    }
  }
  gameObject = (int64_t)this->fields.normalSupportServantObj;
  if ( !gameObject )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_119;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      v120 = FriendPointNoticeDlgComponent_TypeInfo;
      v118 = this->fields.servantListObj;
      if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v120 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = -v120->static_fields->SERVANT_DISP_1_POS_Y;
      goto LABEL_68;
    }
  }
LABEL_69:
  if ( mLoginResult->fields.addFriendPoint > 0 || mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    gameObject = (int64_t)this->fields.normalSupportServantObj;
    if ( !gameObject )
      goto LABEL_119;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      gameObject = (int64_t)this->fields.eventSupportServantObj;
      if ( !gameObject )
        goto LABEL_119;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
      {
        gameObject = (int64_t)this->fields.noDataLabel;
        if ( !gameObject )
          goto LABEL_119;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_119;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        noDataLabel = this->fields.noDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6950/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
        if ( !noDataLabel )
          goto LABEL_119;
        UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
      }
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_119;
  gameObject = (int64_t)TblUserMaster__getUserData(Master_WarQuestSelectionMaster, gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  v123 = gameObject;
  v124 = *(_DWORD *)(gameObject + 24);
  v125 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v125 = BalanceConfig_TypeInfo;
  }
  if ( v124 >= v125->static_fields->FriendPointMax )
  {
    gameObject = (int64_t)this->fields.friendPointMaxLabel;
    if ( gameObject )
    {
      gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        friendPointMaxLabel = this->fields.friendPointMaxLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6943/*"GET_FRIEND_POINT_AT_LIMIT"*/, 0LL);
        if ( friendPointMaxLabel )
        {
          UILabel__set_text(friendPointMaxLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
          basePanelSprite = (UIWidget_o *)this->fields.basePanelSprite;
          if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
          }
          if ( basePanelSprite )
          {
            UIWidget__set_height(
              basePanelSprite,
              FriendPointNoticeDlgComponent_TypeInfo->static_fields->CONFIRM_WINDOW_HEIGHT_MAX_FP,
              0LL);
            GameObjectExtensions__SetLocalPositionY(
              this->fields.topParts,
              FriendPointNoticeDlgComponent_TypeInfo->static_fields->TOP_PARTS_POS_Y_MAX_FP,
              0LL);
            p_currentFriendPointLabel = &this->fields.currentFriendPointLabel;
            gameObject = (int64_t)this->fields.currentFriendPointLabel;
            if ( gameObject )
            {
              v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                v129,
                FriendPointNoticeDlgComponent_TypeInfo->static_fields->CURRENT_FP_LABEL_Y_MAX_FP,
                0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.btnObj,
                FriendPointNoticeDlgComponent_TypeInfo->static_fields->BUTTON_POS_Y_MAX_FP,
                0LL);
              goto LABEL_107;
            }
          }
        }
      }
    }
    goto LABEL_119;
  }
  p_currentFriendPointLabel = &this->fields.currentFriendPointLabel;
LABEL_107:
  v130 = *p_currentFriendPointLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v131 = LocalizationManager__Get((System_String_o *)StringLiteral_6949/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  v139 = *(_DWORD *)(v123 + 24);
  v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139);
  gameObject = (int64_t)System_String__Format(v131, v132, 0LL);
  if ( !v130 )
    goto LABEL_119;
  UILabel__set_text(v130, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
  v133 = *p_currentFriendPointLabel;
  if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  }
  if ( !v133 )
    goto LABEL_119;
  UILabel__SetCondensedScale_41950620(
    v133,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeBtnLb = this->fields.closeBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeBtnLb )
    goto LABEL_119;
  UILabel__set_text(closeBtnLb, (System_String_o *)gameObject, 0LL);
  middleBtnLb = this->fields.middleBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6954/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !middleBtnLb )
    goto LABEL_119;
  UILabel__set_text(middleBtnLb, (System_String_o *)gameObject, 0LL);
  rightBtnLb = this->fields.rightBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6948/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !rightBtnLb )
    goto LABEL_119;
  UILabel__set_text(rightBtnLb, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  FriendPointNoticeDlgComponent__SetBackKeyForAndroid(this, v137);
  v138 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v138, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v138, 0, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__SetBackKeyForAndroid(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *closeBtn; // x19

  if ( (byte_42EB453 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB453 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(closeBtn, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__SetEnableButton(
        FriendPointNoticeDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EB44E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, (_DWORD)buttonObj, isEnable, method);
    this = (FriendPointNoticeDlgComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB44E = 1;
  }
  if ( !buttonObj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (FriendPointNoticeDlgComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_srcLineSprite, isEnable, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(this, buttonObj);
  }
}


void __fastcall FriendPointNoticeDlgComponent__add_callbackFunc(
        FriendPointNoticeDlgComponent_o *this,
        FriendPointNoticeDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FriendPointNoticeDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendPointNoticeDlgComponent_o *v11; // x0
  FriendPointNoticeDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EB447 & 1) == 0 )
  {
    sub_B5D5C4(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB447 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendPointNoticeDlgComponent_CallbackFunc_c *)v8->klass != FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FriendPointNoticeDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FriendPointNoticeDlgComponent__remove_callbackFunc(
        FriendPointNoticeDlgComponent_o *this,
        FriendPointNoticeDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct FriendPointNoticeDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendPointNoticeDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EB448 & 1) == 0 )
  {
    sub_B5D5C4(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB448 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendPointNoticeDlgComponent_CallbackFunc_c *)v8->klass != FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  FriendPointNoticeDlgComponent__Init(v11, v12);
}


void __fastcall FriendPointNoticeDlgComponent__setCallback(
        FriendPointNoticeDlgComponent_o *this,
        FriendPointNoticeDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateLeftButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *closeBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EB44D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB44D = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closeBtn,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  closeBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)closeBtn & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
        Component_srcLineSprite,
        !disabled,
        Component_srcLineSprite->klass[1]._1.byval_arg.data);
      return;
    }
LABEL_11:
    sub_B5D69C(closeBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateMiddleButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *middleBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EB44C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB44C = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      middleBtn,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  middleBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)middleBtn & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
        Component_srcLineSprite,
        !disabled,
        Component_srcLineSprite->klass[1]._1.byval_arg.data);
      return;
    }
LABEL_11:
    sub_B5D69C(middleBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateRightButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *rightBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EB44B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EB44B = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rightBtn,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rightBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rightBtn & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
        Component_srcLineSprite,
        !disabled,
        Component_srcLineSprite->klass[1]._1.byval_arg.data);
      return;
    }
LABEL_11:
    sub_B5D69C(rightBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent_CallbackFunc___ctor(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall FriendPointNoticeDlgComponent_CallbackFunc__BeginInvoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42E56E5 & 1) == 0 )
  {
    sub_B5D5C4(&FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, result, (_DWORD)callback, object);
    byte_42E56E5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__Invoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  FriendPointNoticeDlgComponent_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  FriendPointNoticeDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  FriendPointNoticeDlgComponent_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (FriendPointNoticeDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}