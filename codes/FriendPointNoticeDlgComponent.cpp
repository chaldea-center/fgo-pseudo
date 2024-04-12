void __fastcall FriendPointNoticeDlgComponent___cctor(const MethodInfo *method)
{
  FriendPointNoticeDlgComponent_c *v1; // x8

  if ( (byte_42B2AEC & 1) == 0 )
  {
    sub_B52984(&FriendPointNoticeDlgComponent_TypeInfo);
    byte_42B2AEC = 1;
  }
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->SERVANT_DISP_1_POS_Y = 50.0;
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH = 700.0;
  v1 = FriendPointNoticeDlgComponent_TypeInfo;
  FriendPointNoticeDlgComponent_TypeInfo->static_fields->SERVANT_NAME_LABEL_MAX_WIDTH = 500.0;
  v1->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH = 700.0;
  v1->static_fields->CONFIRM_WINDOW_HEIGHT_MAX_FP = 540;
  v1->static_fields->TOP_PARTS_POS_Y_MAX_FP = 10.0;
  v1->static_fields->CURRENT_FP_LABEL_Y_MAX_FP = -130.0;
  v1->static_fields->BUTTON_POS_Y_MAX_FP = -30.0;
}


void __fastcall FriendPointNoticeDlgComponent___ctor(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B2AEB & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B2AEB = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendPointNoticeDlgComponent_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall FriendPointNoticeDlgComponent__Close(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDlgComponent__Close_29997092(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDlgComponent__Close_29997092(
        FriendPointNoticeDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_42B2AE6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&Method_FriendPointNoticeDlgComponent_EndClose__);
    byte_42B2AE6 = 1;
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_42B2AE0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2AE0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.addPointLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickCancel(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B2AE9 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2AE9 = 1;
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

  if ( (byte_42B2AE8 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2AE8 = 1;
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

  if ( (byte_42B2AE7 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2AE7 = 1;
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
  int64_t gameObject; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_GameObject_o *servantListObj; // x0
  UILabel_o *titleLabel; // x21
  struct UILabel_o *addPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct UILabel_o *v23; // x21
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *v31; // x21
  UILabel_o *mostUsedServantTitleLabel; // x21
  UILabel_o *normalSupportServantCaptionLabel; // x21
  UILabel_o *eventSupportServantCaptionLabel; // x21
  const MethodInfo *v35; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x8
  const MethodInfo *v37; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x8
  FriendPointNoticeDlgComponent_c *v39; // x0
  UnityEngine_GameObject_o *v40; // x21
  float SERVANT_DISP_1_POS_Y; // s0
  FriendPointNoticeDlgComponent_c *v42; // x0
  UILabel_o *noDataLabel; // x20
  TblUserMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t v45; // x20
  int32_t v46; // w21
  BalanceConfig_c *v47; // x0
  struct UILabel_o **p_currentFriendPointLabel; // x25
  UILabel_o *friendPointMaxLabel; // x21
  UIWidget_o *basePanelSprite; // x21
  UnityEngine_GameObject_o *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  UILabel_o *v55; // x20
  UILabel_o *closeBtnLb; // x20
  UILabel_o *middleBtnLb; // x20
  UILabel_o *rightBtnLb; // x20
  const MethodInfo *v59; // x1
  System_Action_o *v60; // x20
  int v61; // [xsp+Ch] [xbp-44h] BYREF
  int32_t addFollowFriendPoint; // [xsp+18h] [xbp-38h] BYREF
  int32_t addFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B2AE1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_TblUserMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_FriendPointNoticeDlgComponent_EndOpen__);
    sub_B52984(&FriendPointNoticeDlgComponent_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_6917/*"GET_FRIEND_POINT_SERVANT_TITLE"*/);
    sub_B52984(&StringLiteral_6914/*"GET_FRIEND_POINT_NO_DATA"*/);
    sub_B52984(&StringLiteral_6913/*"GET_FRIEND_POINT_NOW_POINT"*/);
    sub_B52984(&StringLiteral_6918/*"GET_FRIEND_POINT_SUPPORT_BTN"*/);
    sub_B52984(&StringLiteral_82/*"  "*/);
    sub_B52984(&StringLiteral_6911/*"GET_FRIEND_POINT_FP_NORMAL"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_6910/*"GET_FRIEND_POINT_FP_FOLLOW"*/);
    sub_B52984(&StringLiteral_6908/*"GET_FRIEND_POINT_CAPTION_EVENT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_6912/*"GET_FRIEND_POINT_GACHA_BTN"*/);
    sub_B52984(&StringLiteral_6919/*"GET_FRIEND_POINT_TITLE"*/);
    sub_B52984(&StringLiteral_6907/*"GET_FRIEND_POINT_AT_LIMIT"*/);
    sub_B52984(&StringLiteral_6909/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/);
    byte_42B2AE1 = 1;
  }
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_119;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantExceedMaster___);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6919/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6911/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFriendPoint = mLoginResult->fields.addFriendPoint;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFriendPoint);
    v21 = System_String__Format(v19, v20, 0LL);
    v22 = System_String__Concat_44568316(mText, v21, 0LL);
    UILabel__set_text(addPointLabel, v22, 0LL);
  }
  if ( mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    if ( mLoginResult->fields.addFriendPoint >= 1 )
    {
      v23 = this->fields.addPointLabel;
      if ( !v23 )
        goto LABEL_119;
      v24 = System_String__Concat_44568316(v23->fields.mText, (System_String_o *)StringLiteral_82/*"  "*/, 0LL);
      UILabel__set_text(v23, v24, 0LL);
    }
    v25 = this->fields.addPointLabel;
    if ( !v25 )
      goto LABEL_119;
    v26 = v25->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6910/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = mLoginResult->fields.addFollowFriendPoint;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint);
    v29 = System_String__Format(v27, v28, 0LL);
    v30 = System_String__Concat_44568316(v26, v29, 0LL);
    UILabel__set_text(v25, v30, 0LL);
  }
  v31 = this->fields.addPointLabel;
  gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
  if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  }
  if ( !v31 )
    goto LABEL_119;
  UILabel__SetCondensedScale_41850568(
    v31,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6917/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_119;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  normalSupportServantCaptionLabel = this->fields.normalSupportServantCaptionLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6909/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
  if ( !normalSupportServantCaptionLabel )
    goto LABEL_119;
  UILabel__set_text(normalSupportServantCaptionLabel, (System_String_o *)gameObject, 0LL);
  eventSupportServantCaptionLabel = this->fields.eventSupportServantCaptionLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6908/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
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
          v35) )
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
          v37) )
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
    sub_B52A5C(gameObject, v8);
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_119;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      v39 = FriendPointNoticeDlgComponent_TypeInfo;
      v40 = this->fields.servantListObj;
      if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v39 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = v39->static_fields->SERVANT_DISP_1_POS_Y;
LABEL_68:
      GameObjectExtensions__SetLocalPositionY(v40, SERVANT_DISP_1_POS_Y, 0LL);
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
      v42 = FriendPointNoticeDlgComponent_TypeInfo;
      v40 = this->fields.servantListObj;
      if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v42 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = -v42->static_fields->SERVANT_DISP_1_POS_Y;
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6914/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
        if ( !noDataLabel )
          goto LABEL_119;
        UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
      }
    }
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TblUserMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TblUserMaster___);
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
  v45 = gameObject;
  v46 = *(_DWORD *)(gameObject + 24);
  v47 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  if ( v46 >= v47->static_fields->FriendPointMax )
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
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6907/*"GET_FRIEND_POINT_AT_LIMIT"*/, 0LL);
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
              v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                v51,
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
  v52 = *p_currentFriendPointLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6913/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  v61 = *(_DWORD *)(v45 + 24);
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
  gameObject = (int64_t)System_String__Format(v53, v54, 0LL);
  if ( !v52 )
    goto LABEL_119;
  UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
  v55 = *p_currentFriendPointLabel;
  if ( (BYTE3(FriendPointNoticeDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  }
  if ( !v55 )
    goto LABEL_119;
  UILabel__SetCondensedScale_41850568(
    v55,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeBtnLb = this->fields.closeBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeBtnLb )
    goto LABEL_119;
  UILabel__set_text(closeBtnLb, (System_String_o *)gameObject, 0LL);
  middleBtnLb = this->fields.middleBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6918/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !middleBtnLb )
    goto LABEL_119;
  UILabel__set_text(middleBtnLb, (System_String_o *)gameObject, 0LL);
  rightBtnLb = this->fields.rightBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6912/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !rightBtnLb )
    goto LABEL_119;
  UILabel__set_text(rightBtnLb, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  FriendPointNoticeDlgComponent__SetBackKeyForAndroid(this, v59);
  v60 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__SetBackKeyForAndroid(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x19

  if ( (byte_42B2AEA & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    byte_42B2AEA = 1;
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B2AE5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (FriendPointNoticeDlgComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2AE5 = 1;
  }
  if ( !buttonObj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B52A5C(this, buttonObj);
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

  if ( (byte_42B2ADE & 1) == 0 )
  {
    sub_B52984(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo);
    byte_42B2ADE = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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

  if ( (byte_42B2ADF & 1) == 0 )
  {
    sub_B52984(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo);
    byte_42B2ADF = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
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
  sub_B52920(
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
  UnityEngine_GameObject_o *closeBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B2AE4 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2AE4 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closeBtn,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B52A5C(closeBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateMiddleButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *middleBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B2AE3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2AE3 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      middleBtn,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B52A5C(middleBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateRightButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rightBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B2AE2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B2AE2 = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rightBtn,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B52A5C(rightBtn, disabled);
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
  sub_B52920(p_method);
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
  if ( (byte_42ACE2D & 1) == 0 )
  {
    sub_B52984(&FriendPointNoticeDlgComponent_ResultClicked_TypeInfo);
    byte_42ACE2D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__Invoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  FriendPointNoticeDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  FriendPointNoticeDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  FriendPointNoticeDlgComponent_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (FriendPointNoticeDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}