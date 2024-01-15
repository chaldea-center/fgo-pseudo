void __fastcall FriendPointNoticeDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FriendPointNoticeDlgComponent_c *v2; // x8

  if ( (byte_40FD947 & 1) == 0 )
  {
    sub_B16FFC(&FriendPointNoticeDlgComponent_TypeInfo, v1);
    byte_40FD947 = 1;
  }
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->SERVANT_DISP_1_POS_Y = 50.0;
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH = 700.0;
  v2 = FriendPointNoticeDlgComponent_TypeInfo;
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH = 500.0;
  v2->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH = 700.0;
  v2->static_fields->CONFIRM_WINDOW_HEIGHT_MAX_FP = 540;
  v2->static_fields->TOP_PARTS_POS_Y_MAX_FP = 10.0;
  v2->static_fields->CURRENT_FP_LABEL_Y_MAX_FP = -130.0;
  v2->static_fields->BUTTON_POS_Y_MAX_FP = -30.0;
}


void __fastcall FriendPointNoticeDlgComponent___ctor(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FD946 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD946 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendPointNoticeDlgComponent_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall FriendPointNoticeDlgComponent__Close(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDlgComponent__Close_31869864(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDlgComponent__Close_31869864(
        FriendPointNoticeDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *closeBtn; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40FD941 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v5);
    sub_B16FFC(&Method_FriendPointNoticeDlgComponent_EndClose__, v6);
    byte_40FD941 = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *closeCallbackFunc; // x20

  FriendPointNoticeDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  UILabel_o *titleLabel; // x0
  UILabel_o *addPointLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FD93B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD93B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (addPointLabel = this->fields.addPointLabel) == 0LL)
    || (UILabel__set_text(addPointLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickCancel(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD944 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD944 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 2, v3);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickMiddle(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  int32_t middleSeNo; // w20
  const MethodInfo *v4; // x2

  if ( (byte_40FD943 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD943 = 1;
  }
  middleSeNo = this->fields.middleSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(middleSeNo, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 1, v4);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickRight(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  int32_t rightSeNo; // w20
  const MethodInfo *v4; // x2

  if ( (byte_40FD942 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD942 = 1;
  }
  rightSeNo = this->fields.rightSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(rightSeNo, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 0, v4);
}


void __fastcall FriendPointNoticeDlgComponent__Open(
        FriendPointNoticeDlgComponent_o *this,
        CommonUI_LoginResultData_o *mLoginResult,
        FriendPointNoticeDlgComponent_CallbackFunc_o *callback,
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_GameObject_o *servantListObj; // x0
  UnityEngine_Component_o *noDataLabel; // x0
  UnityEngine_GameObject_o *v42; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *v44; // x0
  UILabel_o *addPointLabel; // x0
  struct UILabel_o *v46; // x21
  System_String_o *mText; // x22
  System_String_o *v48; // x23
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  struct UILabel_o *v52; // x21
  System_String_o *v53; // x0
  struct UILabel_o *v54; // x21
  System_String_o *v55; // x22
  System_String_o *v56; // x23
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  UILabel_o *v60; // x21
  UILabel_o *mostUsedServantTitleLabel; // x21
  System_String_o *v62; // x0
  UILabel_o *normalSupportServantCaptionLabel; // x21
  System_String_o *v64; // x0
  UILabel_o *eventSupportServantCaptionLabel; // x21
  System_String_o *v66; // x0
  UnityEngine_GameObject_o *normalSupportServantObj; // x0
  UnityEngine_GameObject_o *eventSupportServantObj; // x0
  const MethodInfo *v69; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x8
  FriendPointNoticeDlgSvtInfo_o *normalSvtInfo; // x0
  const MethodInfo *v72; // x3
  UnityEngine_GameObject_o *v73; // x0
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x8
  FriendPointNoticeDlgSvtInfo_o *eventSvtInfo; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  FriendPointNoticeDlgComponent_c *v79; // x0
  UnityEngine_GameObject_o *v80; // x21
  float SERVANT_DISP_1_POS_Y; // s0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  FriendPointNoticeDlgComponent_c *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_Component_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  UILabel_o *v89; // x20
  System_String_o *v90; // x0
  TblUserMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  TblUserEntity_o *UserData; // x0
  TblUserEntity_o *v94; // x20
  int32_t friendPoint; // w21
  BalanceConfig_c *v96; // x0
  struct UILabel_o **p_currentFriendPointLabel; // x25
  UnityEngine_Component_o *friendPointMaxLabel; // x0
  UnityEngine_GameObject_o *v99; // x0
  UILabel_o *v100; // x21
  System_String_o *v101; // x0
  UIWidget_o *basePanelSprite; // x21
  UnityEngine_Component_o *currentFriendPointLabel; // x0
  UnityEngine_GameObject_o *v104; // x0
  UILabel_o *v105; // x21
  System_String_o *v106; // x22
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  UILabel_o *v109; // x20
  UILabel_o *closeBtnLb; // x20
  System_String_o *v111; // x0
  UILabel_o *middleBtnLb; // x20
  System_String_o *v113; // x0
  UILabel_o *rightBtnLb; // x20
  System_String_o *v115; // x0
  const MethodInfo *v116; // x1
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  System_Action_o *v121; // x20
  int32_t v122; // [xsp+Ch] [xbp-44h] BYREF
  int32_t addFollowFriendPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t addFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FD93C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, mLoginResult);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantExceedMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_TblUserMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_FriendPointNoticeDlgComponent_EndOpen__, v14);
    sub_B16FFC(&FriendPointNoticeDlgComponent_TypeInfo, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_6842/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v19);
    sub_B16FFC(&StringLiteral_6839/*"GET_FRIEND_POINT_NO_DATA"*/, v20);
    sub_B16FFC(&StringLiteral_6838/*"GET_FRIEND_POINT_NOW_POINT"*/, v21);
    sub_B16FFC(&StringLiteral_6843/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v22);
    sub_B16FFC(&StringLiteral_81/*"  "*/, v23);
    sub_B16FFC(&StringLiteral_6836/*"GET_FRIEND_POINT_FP_NORMAL"*/, v24);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v25);
    sub_B16FFC(&StringLiteral_6835/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v26);
    sub_B16FFC(&StringLiteral_6833/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v27);
    sub_B16FFC(&StringLiteral_1/*""*/, v28);
    sub_B16FFC(&StringLiteral_6837/*"GET_FRIEND_POINT_GACHA_BTN"*/, v29);
    sub_B16FFC(&StringLiteral_6844/*"GET_FRIEND_POINT_TITLE"*/, v30);
    sub_B16FFC(&StringLiteral_6832/*"GET_FRIEND_POINT_AT_LIMIT"*/, v31);
    sub_B16FFC(&StringLiteral_6834/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v32);
    byte_40FD93C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  servantListObj = this->fields.servantListObj;
  *(_QWORD *)&this->fields.rightSeNo = 0x800000008LL;
  this->fields.state = 1;
  GameObjectExtensions__SetLocalPositionY(servantListObj, 0.0, 0LL);
  noDataLabel = (UnityEngine_Component_o *)this->fields.noDataLabel;
  if ( !noDataLabel )
    goto LABEL_119;
  v42 = UnityEngine_Component__get_gameObject(noDataLabel, 0LL);
  if ( !v42 )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(v42, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6844/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_119;
  UILabel__set_text(titleLabel, v44, 0LL);
  addPointLabel = this->fields.addPointLabel;
  if ( !addPointLabel )
    goto LABEL_119;
  UILabel__set_text(addPointLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !mLoginResult )
    goto LABEL_119;
  if ( mLoginResult->fields.addFriendPoint >= 1 )
  {
    v46 = this->fields.addPointLabel;
    if ( !v46 )
      goto LABEL_119;
    mText = v46->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6836/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFriendPoint = mLoginResult->fields.addFriendPoint;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFriendPoint);
    v50 = System_String__Format(v48, v49, 0LL);
    v51 = System_String__Concat_43743732(mText, v50, 0LL);
    UILabel__set_text(v46, v51, 0LL);
  }
  if ( mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    if ( mLoginResult->fields.addFriendPoint >= 1 )
    {
      v52 = this->fields.addPointLabel;
      if ( !v52 )
        goto LABEL_119;
      v53 = System_String__Concat_43743732(v52->fields.mText, (System_String_o *)StringLiteral_81/*"  "*/, 0LL);
      UILabel__set_text(v52, v53, 0LL);
    }
    v54 = this->fields.addPointLabel;
    if ( !v54 )
      goto LABEL_119;
    v55 = v54->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_6835/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = mLoginResult->fields.addFollowFriendPoint;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v58 = System_String__Format(v56, v57, 0LL);
    v59 = System_String__Concat_43743732(v55, v58, 0LL);
    UILabel__set_text(v54, v59, 0LL);
  }
  v60 = this->fields.addPointLabel;
  if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  }
  if ( !v60 )
    goto LABEL_119;
  UILabel__SetCondensedScale_40440812(
    v60,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_6842/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_119;
  UILabel__set_text(mostUsedServantTitleLabel, v62, 0LL);
  normalSupportServantCaptionLabel = this->fields.normalSupportServantCaptionLabel;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_6834/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
  if ( !normalSupportServantCaptionLabel )
    goto LABEL_119;
  UILabel__set_text(normalSupportServantCaptionLabel, v64, 0LL);
  eventSupportServantCaptionLabel = this->fields.eventSupportServantCaptionLabel;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_6833/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
  if ( !eventSupportServantCaptionLabel )
    goto LABEL_119;
  UILabel__set_text(eventSupportServantCaptionLabel, v66, 0LL);
  normalSupportServantObj = this->fields.normalSupportServantObj;
  if ( !normalSupportServantObj )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(normalSupportServantObj, 1, 0LL);
  eventSupportServantObj = this->fields.eventSupportServantObj;
  if ( !eventSupportServantObj )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive(eventSupportServantObj, 1, 0LL);
  topAddFriendPointSvt = mLoginResult->fields.topAddFriendPointSvt;
  if ( !topAddFriendPointSvt )
    goto LABEL_45;
  normalSvtInfo = this->fields.normalSvtInfo;
  if ( !normalSvtInfo )
    goto LABEL_119;
  if ( !FriendPointNoticeDlgSvtInfo__Set(
          normalSvtInfo,
          topAddFriendPointSvt->fields.svtId,
          topAddFriendPointSvt->fields.userSvtId,
          v69) )
  {
LABEL_45:
    v73 = this->fields.normalSupportServantObj;
    if ( !v73 )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive(v73, 0, 0LL);
  }
  topAddFriendPointSvtEQ = mLoginResult->fields.topAddFriendPointSvtEQ;
  if ( !topAddFriendPointSvtEQ )
    goto LABEL_50;
  eventSvtInfo = this->fields.eventSvtInfo;
  if ( !eventSvtInfo )
    goto LABEL_119;
  if ( !FriendPointNoticeDlgSvtInfo__Set(
          eventSvtInfo,
          topAddFriendPointSvtEQ->fields.svtId,
          topAddFriendPointSvtEQ->fields.userSvtId,
          v72) )
  {
LABEL_50:
    v76 = this->fields.eventSupportServantObj;
    if ( !v76 )
      goto LABEL_119;
    UnityEngine_GameObject__SetActive(v76, 0, 0LL);
  }
  v77 = this->fields.normalSupportServantObj;
  if ( !v77 )
LABEL_119:
    sub_B170D4();
  if ( !UnityEngine_GameObject__get_activeSelf(v77, 0LL) )
  {
    v78 = this->fields.eventSupportServantObj;
    if ( !v78 )
      goto LABEL_119;
    if ( UnityEngine_GameObject__get_activeSelf(v78, 0LL) )
    {
      v79 = FriendPointNoticeDlgComponent_TypeInfo;
      v80 = this->fields.servantListObj;
      if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v79 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = v79->static_fields->SERVANT_DISP_1_POS_Y;
LABEL_68:
      GameObjectExtensions__SetLocalPositionY(v80, SERVANT_DISP_1_POS_Y, 0LL);
      goto LABEL_69;
    }
  }
  v82 = this->fields.normalSupportServantObj;
  if ( !v82 )
    goto LABEL_119;
  if ( UnityEngine_GameObject__get_activeSelf(v82, 0LL) )
  {
    v83 = this->fields.eventSupportServantObj;
    if ( !v83 )
      goto LABEL_119;
    if ( !UnityEngine_GameObject__get_activeSelf(v83, 0LL) )
    {
      v84 = FriendPointNoticeDlgComponent_TypeInfo;
      v80 = this->fields.servantListObj;
      if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v84 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = -v84->static_fields->SERVANT_DISP_1_POS_Y;
      goto LABEL_68;
    }
  }
LABEL_69:
  if ( mLoginResult->fields.addFriendPoint > 0 || mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    v85 = this->fields.normalSupportServantObj;
    if ( !v85 )
      goto LABEL_119;
    if ( !UnityEngine_GameObject__get_activeSelf(v85, 0LL) )
    {
      v86 = this->fields.eventSupportServantObj;
      if ( !v86 )
        goto LABEL_119;
      if ( !UnityEngine_GameObject__get_activeSelf(v86, 0LL) )
      {
        v87 = (UnityEngine_Component_o *)this->fields.noDataLabel;
        if ( !v87 )
          goto LABEL_119;
        v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
        if ( !v88 )
          goto LABEL_119;
        UnityEngine_GameObject__SetActive(v88, 1, 0LL);
        v89 = this->fields.noDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v90 = LocalizationManager__Get((System_String_o *)StringLiteral_6839/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
        if ( !v89 )
          goto LABEL_119;
        UILabel__set_text(v89, v90, 0LL);
      }
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_119;
  UserData = TblUserMaster__getUserData(Master_WarQuestSelectionMaster, UserId, 0LL);
  if ( !UserData )
    goto LABEL_119;
  v94 = UserData;
  friendPoint = UserData->fields.friendPoint;
  v96 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v96 = BalanceConfig_TypeInfo;
  }
  if ( friendPoint >= v96->static_fields->FriendPointMax )
  {
    friendPointMaxLabel = (UnityEngine_Component_o *)this->fields.friendPointMaxLabel;
    if ( friendPointMaxLabel )
    {
      v99 = UnityEngine_Component__get_gameObject(friendPointMaxLabel, 0LL);
      if ( v99 )
      {
        UnityEngine_GameObject__SetActive(v99, 1, 0LL);
        v100 = this->fields.friendPointMaxLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v101 = LocalizationManager__Get((System_String_o *)StringLiteral_6832/*"GET_FRIEND_POINT_AT_LIMIT"*/, 0LL);
        if ( v100 )
        {
          UILabel__set_text(v100, v101, 0LL);
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
            currentFriendPointLabel = (UnityEngine_Component_o *)this->fields.currentFriendPointLabel;
            if ( currentFriendPointLabel )
            {
              v104 = UnityEngine_Component__get_gameObject(currentFriendPointLabel, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                v104,
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
  v105 = *p_currentFriendPointLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_6838/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  v122 = v94->fields.friendPoint;
  v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v122);
  v108 = System_String__Format(v106, v107, 0LL);
  if ( !v105 )
    goto LABEL_119;
  UILabel__set_text(v105, v108, 0LL);
  v109 = *p_currentFriendPointLabel;
  if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  }
  if ( !v109 )
    goto LABEL_119;
  UILabel__SetCondensedScale_40440812(
    v109,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeBtnLb = this->fields.closeBtnLb;
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeBtnLb )
    goto LABEL_119;
  UILabel__set_text(closeBtnLb, v111, 0LL);
  middleBtnLb = this->fields.middleBtnLb;
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_6843/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !middleBtnLb )
    goto LABEL_119;
  UILabel__set_text(middleBtnLb, v113, 0LL);
  rightBtnLb = this->fields.rightBtnLb;
  v115 = LocalizationManager__Get((System_String_o *)StringLiteral_6837/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !rightBtnLb )
    goto LABEL_119;
  UILabel__set_text(rightBtnLb, v115, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  FriendPointNoticeDlgComponent__SetBackKeyForAndroid(this, v116);
  v121 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v117, v118, v119, v120);
  System_Action___ctor(v121, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v121, 0, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__SetBackKeyForAndroid(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x19

  if ( (byte_40FD945 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    byte_40FD945 = 1;
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
  __int64 v6; // x1
  UICommonButton_o *Component_srcLineSprite; // x20

  if ( (byte_40FD940 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FD940 = 1;
  }
  if ( !buttonObj )
    goto LABEL_11;
  Component_srcLineSprite = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  buttonObj,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      UICommonButton__SetButtonEnableWithCollider(Component_srcLineSprite, isEnable, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall FriendPointNoticeDlgComponent__add_callbackFunc(
        FriendPointNoticeDlgComponent_o *this,
        FriendPointNoticeDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FriendPointNoticeDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDlgComponent_o *v10; // x0
  FriendPointNoticeDlgComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FD939 & 1) == 0 )
  {
    sub_B16FFC(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FD939 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendPointNoticeDlgComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  FriendPointNoticeDlgComponent__remove_callbackFunc(v10, v11, v12);
}


void __fastcall FriendPointNoticeDlgComponent__remove_callbackFunc(
        FriendPointNoticeDlgComponent_o *this,
        FriendPointNoticeDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct FriendPointNoticeDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  FriendPointNoticeDlgComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FD93A & 1) == 0 )
  {
    sub_B16FFC(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FD93A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (FriendPointNoticeDlgComponent_CallbackFunc_c *)v7->klass != FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  FriendPointNoticeDlgComponent__Init(v10, v11);
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
  sub_B16F98(
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *closeBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40FD93F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD93F = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closeBtn,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateMiddleButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *middleBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40FD93E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD93E = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      middleBtn,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateRightButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *rightBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40FD93D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FD93D = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rightBtn,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent_CallbackFunc___ctor(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F68CC & 1) == 0 )
  {
    sub_B16FFC(&FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_40F68CC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  FriendPointNoticeDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  FriendPointNoticeDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}