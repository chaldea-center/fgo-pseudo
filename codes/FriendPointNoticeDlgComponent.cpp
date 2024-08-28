void __fastcall FriendPointNoticeDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FriendPointNoticeDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4A0AE78 & 1) == 0 )
  {
    sub_1B686D4(&FriendPointNoticeDlgComponent_TypeInfo, v1);
    byte_4A0AE78 = 1;
  }
  static_fields = FriendPointNoticeDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SERVANT_DISP_1_POS_Y = 0x442F000042480000LL;
  *(_QWORD *)&static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH = 0x21C442F0000LL;
  *(_QWORD *)&static_fields->TOP_PARTS_POS_Y_MAX_FP = 0xC302000041200000LL;
  static_fields->BUTTON_POS_Y_MAX_FP = -30.0;
}


void __fastcall FriendPointNoticeDlgComponent___ctor(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A0AE77 & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A0AE77 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__Callback(
        FriendPointNoticeDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct FriendPointNoticeDlgComponent_CallbackFunc_o *callbackFunc; // x20
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B68678(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall FriendPointNoticeDlgComponent__Close(FriendPointNoticeDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendPointNoticeDlgComponent__Close_42084000(this, 0LL, v2);
}


void __fastcall FriendPointNoticeDlgComponent__Close_42084000(
        FriendPointNoticeDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A0AE73 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_FriendPointNoticeDlgComponent_EndClose__, v5);
    byte_4A0AE73 = 1;
  }
  FriendPointNoticeDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  v8 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  FriendPointNoticeDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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

  if ( (byte_4A0AE6D & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A0AE6D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.addPointLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B68930(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickCancel(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A0AE76 & 1) == 0 )
  {
    sub_1B686D4(&Method_FriendPointNoticeDlgComponent_OnClickCancel__, method);
    byte_4A0AE76 = 1;
  }
  v3 = Method_FriendPointNoticeDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_FriendPointNoticeDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 2, v5);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickMiddle(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A0AE75 & 1) == 0 )
  {
    sub_1B686D4(&Method_FriendPointNoticeDlgComponent_OnClickMiddle__, method);
    byte_4A0AE75 = 1;
  }
  v3 = Method_FriendPointNoticeDlgComponent_OnClickMiddle__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDlgComponent_OnClickMiddle__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_FriendPointNoticeDlgComponent_OnClickMiddle__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.middleSeNo, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 1, v5);
}


void __fastcall FriendPointNoticeDlgComponent__OnClickRight(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A0AE74 & 1) == 0 )
  {
    sub_1B686D4(&Method_FriendPointNoticeDlgComponent_OnClickRight__, method);
    byte_4A0AE74 = 1;
  }
  v3 = Method_FriendPointNoticeDlgComponent_OnClickRight__;
  if ( (*((_BYTE *)Method_FriendPointNoticeDlgComponent_OnClickRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_FriendPointNoticeDlgComponent_OnClickRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.rightSeNo, 0LL);
  FriendPointNoticeDlgComponent__Callback(this, 0, v5);
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
  int64_t gameObject; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_GameObject_o *servantListObj; // x0
  UILabel_o *titleLabel; // x21
  struct UILabel_o *addPointLabel; // x21
  System_String_o *mText; // x22
  System_String_o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x21
  System_String_o *v49; // x0
  struct UILabel_o *v50; // x21
  System_String_o *v51; // x22
  System_String_o *v52; // x23
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  UILabel_o *v59; // x21
  UILabel_o *mostUsedServantTitleLabel; // x21
  UILabel_o *normalSupportServantCaptionLabel; // x21
  UILabel_o *eventSupportServantCaptionLabel; // x21
  const MethodInfo *v63; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvt; // x8
  const MethodInfo *v65; // x3
  struct CommonUI_LoginResultFriendPointSvtData_o *topAddFriendPointSvtEQ; // x8
  FriendPointNoticeDlgComponent_c *v67; // x0
  UnityEngine_GameObject_o *v68; // x21
  float SERVANT_DISP_1_POS_Y; // s0
  FriendPointNoticeDlgComponent_c *v70; // x0
  UILabel_o *noDataLabel; // x20
  Il2CppObject *Master_object; // x20
  int64_t v73; // x20
  int32_t v74; // w21
  BalanceConfig_c *v75; // x0
  UILabel_o *friendPointMaxLabel; // x21
  UIWidget_o *basePanelSprite; // x21
  UnityEngine_GameObject_o *v78; // x0
  UILabel_o *currentFriendPointLabel; // x21
  System_String_o *v80; // x22
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x0
  UILabel_o *v85; // x20
  UILabel_o *closeBtnLb; // x20
  UILabel_o *middleBtnLb; // x20
  UILabel_o *rightBtnLb; // x20
  System_Action_o *v89; // x20
  int v90; // [xsp+Ch] [xbp-54h] BYREF
  int32_t addFollowFriendPoint; // [xsp+18h] [xbp-48h] BYREF
  int32_t addFriendPoint; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A0AE6E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, mLoginResult);
    sub_1B686D4(&BalanceConfig_TypeInfo, v7);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantExceedMaster___, v8);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantLimitMaster___, v9);
    sub_1B686D4(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1B686D4(&Method_DataManager_GetMaster_TblUserMaster___, v11);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_1B686D4(&DataManager_TypeInfo, v13);
    sub_1B686D4(&Method_FriendPointNoticeDlgComponent_EndOpen__, v14);
    sub_1B686D4(&FriendPointNoticeDlgComponent_TypeInfo, v15);
    sub_1B686D4(&int_TypeInfo, v16);
    sub_1B686D4(&LocalizationManager_TypeInfo, v17);
    sub_1B686D4(&NetworkManager_TypeInfo, v18);
    sub_1B686D4(&StringLiteral_6886/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, v19);
    sub_1B686D4(&StringLiteral_6882/*"GET_FRIEND_POINT_NO_DATA"*/, v20);
    sub_1B686D4(&StringLiteral_6881/*"GET_FRIEND_POINT_NOW_POINT"*/, v21);
    sub_1B686D4(&StringLiteral_6888/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, v22);
    sub_1B686D4(&StringLiteral_118/*"  "*/, v23);
    sub_1B686D4(&StringLiteral_6878/*"GET_FRIEND_POINT_FP_NORMAL"*/, v24);
    sub_1B686D4(&StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, v25);
    sub_1B686D4(&StringLiteral_6877/*"GET_FRIEND_POINT_FP_FOLLOW"*/, v26);
    sub_1B686D4(&StringLiteral_6874/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, v27);
    sub_1B686D4(&StringLiteral_1/*""*/, v28);
    sub_1B686D4(&StringLiteral_6880/*"GET_FRIEND_POINT_GACHA_BTN"*/, v29);
    sub_1B686D4(&StringLiteral_6889/*"GET_FRIEND_POINT_TITLE"*/, v30);
    sub_1B686D4(&StringLiteral_6873/*"GET_FRIEND_POINT_AT_LIMIT"*/, v31);
    sub_1B686D4(&StringLiteral_6875/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, v32);
    byte_4A0AE6E = 1;
  }
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v35, v36);
  servantListObj = this->fields.servantListObj;
  *(_QWORD *)&this->fields.rightSeNo = 0x800000008LL;
  this->fields.state = 1;
  GameObjectExtensions__SetLocalPositionY(servantListObj, 0.0, 0LL);
  gameObject = (int64_t)this->fields.noDataLabel;
  if ( !gameObject )
    goto LABEL_102;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantLimitMaster___);
  DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_ServantExceedMaster___);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6889/*"GET_FRIEND_POINT_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_102;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)this->fields.addPointLabel;
  if ( !gameObject )
    goto LABEL_102;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !mLoginResult )
    goto LABEL_102;
  if ( mLoginResult->fields.addFriendPoint >= 1 )
  {
    addPointLabel = this->fields.addPointLabel;
    if ( !addPointLabel )
      goto LABEL_102;
    mText = addPointLabel->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6878/*"GET_FRIEND_POINT_FP_NORMAL"*/, 0LL);
    addFriendPoint = mLoginResult->fields.addFriendPoint;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFriendPoint, v42, v43, v44);
    v46 = System_String__Format(v41, v45, 0LL);
    v47 = System_String__Concat_61419468(mText, v46, 0LL);
    UILabel__set_text(addPointLabel, v47, 0LL);
  }
  if ( mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    if ( mLoginResult->fields.addFriendPoint >= 1 )
    {
      v48 = this->fields.addPointLabel;
      if ( !v48 )
        goto LABEL_102;
      v49 = System_String__Concat_61419468(v48->fields.mText, (System_String_o *)StringLiteral_118/*"  "*/, 0LL);
      UILabel__set_text(v48, v49, 0LL);
    }
    v50 = this->fields.addPointLabel;
    if ( !v50 )
      goto LABEL_102;
    v51 = v50->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_6877/*"GET_FRIEND_POINT_FP_FOLLOW"*/, 0LL);
    addFollowFriendPoint = mLoginResult->fields.addFollowFriendPoint;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &addFollowFriendPoint, v53, v54, v55);
    v57 = System_String__Format(v52, v56, 0LL);
    v58 = System_String__Concat_61419468(v51, v57, 0LL);
    UILabel__set_text(v50, v58, 0LL);
  }
  v59 = this->fields.addPointLabel;
  gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
  if ( !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  if ( !v59 )
    goto LABEL_102;
  UILabel__SetCondensedScale_46828548(
    v59,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->ADD_POINT_LABEL_MAX_WIDTH,
    0LL);
  mostUsedServantTitleLabel = this->fields.mostUsedServantTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6886/*"GET_FRIEND_POINT_SERVANT_TITLE"*/, 0LL);
  if ( !mostUsedServantTitleLabel )
    goto LABEL_102;
  UILabel__set_text(mostUsedServantTitleLabel, (System_String_o *)gameObject, 0LL);
  normalSupportServantCaptionLabel = this->fields.normalSupportServantCaptionLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6875/*"GET_FRIEND_POINT_CAPTION_NORMAL"*/, 0LL);
  if ( !normalSupportServantCaptionLabel )
    goto LABEL_102;
  UILabel__set_text(normalSupportServantCaptionLabel, (System_String_o *)gameObject, 0LL);
  eventSupportServantCaptionLabel = this->fields.eventSupportServantCaptionLabel;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6874/*"GET_FRIEND_POINT_CAPTION_EVENT"*/, 0LL);
  if ( !eventSupportServantCaptionLabel )
    goto LABEL_102;
  UILabel__set_text(eventSupportServantCaptionLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)this->fields.normalSupportServantObj;
  if ( !gameObject )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)this->fields.eventSupportServantObj;
  if ( !gameObject )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  topAddFriendPointSvt = mLoginResult->fields.topAddFriendPointSvt;
  if ( !topAddFriendPointSvt )
    goto LABEL_39;
  gameObject = (int64_t)this->fields.normalSvtInfo;
  if ( !gameObject )
    goto LABEL_102;
  if ( !FriendPointNoticeDlgSvtInfo__Set(
          (FriendPointNoticeDlgSvtInfo_o *)gameObject,
          topAddFriendPointSvt->fields.svtId,
          topAddFriendPointSvt->fields.userSvtId,
          v63) )
  {
LABEL_39:
    gameObject = (int64_t)this->fields.normalSupportServantObj;
    if ( !gameObject )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  topAddFriendPointSvtEQ = mLoginResult->fields.topAddFriendPointSvtEQ;
  if ( !topAddFriendPointSvtEQ )
    goto LABEL_44;
  gameObject = (int64_t)this->fields.eventSvtInfo;
  if ( !gameObject )
    goto LABEL_102;
  if ( !FriendPointNoticeDlgSvtInfo__Set(
          (FriendPointNoticeDlgSvtInfo_o *)gameObject,
          topAddFriendPointSvtEQ->fields.svtId,
          topAddFriendPointSvtEQ->fields.userSvtId,
          v65) )
  {
LABEL_44:
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  gameObject = (int64_t)this->fields.normalSupportServantObj;
  if ( !gameObject )
LABEL_102:
    sub_1B68930(gameObject, v34);
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_102;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      v67 = FriendPointNoticeDlgComponent_TypeInfo;
      v68 = this->fields.servantListObj;
      if ( !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v67 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = v67->static_fields->SERVANT_DISP_1_POS_Y;
LABEL_60:
      GameObjectExtensions__SetLocalPositionY(v68, SERVANT_DISP_1_POS_Y, 0LL);
      goto LABEL_61;
    }
  }
  gameObject = (int64_t)this->fields.normalSupportServantObj;
  if ( !gameObject )
    goto LABEL_102;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = (int64_t)this->fields.eventSupportServantObj;
    if ( !gameObject )
      goto LABEL_102;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      v70 = FriendPointNoticeDlgComponent_TypeInfo;
      v68 = this->fields.servantListObj;
      if ( !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
        v70 = FriendPointNoticeDlgComponent_TypeInfo;
      }
      SERVANT_DISP_1_POS_Y = -v70->static_fields->SERVANT_DISP_1_POS_Y;
      goto LABEL_60;
    }
  }
LABEL_61:
  if ( mLoginResult->fields.addFriendPoint > 0 || mLoginResult->fields.addFollowFriendPoint >= 1 )
  {
    gameObject = (int64_t)this->fields.normalSupportServantObj;
    if ( !gameObject )
      goto LABEL_102;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      gameObject = (int64_t)this->fields.eventSupportServantObj;
      if ( !gameObject )
        goto LABEL_102;
      if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
      {
        gameObject = (int64_t)this->fields.noDataLabel;
        if ( !gameObject )
          goto LABEL_102;
        gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_102;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        noDataLabel = this->fields.noDataLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6882/*"GET_FRIEND_POINT_NO_DATA"*/, 0LL);
        if ( !noDataLabel )
          goto LABEL_102;
        UILabel__set_text(noDataLabel, (System_String_o *)gameObject, 0LL);
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_TblUserMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_102;
  gameObject = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)Master_object, gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_102;
  v73 = gameObject;
  v74 = *(_DWORD *)(gameObject + 24);
  v75 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v75 = BalanceConfig_TypeInfo;
  }
  if ( v74 >= v75->static_fields->FriendPointMax )
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
          gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
          basePanelSprite = (UIWidget_o *)this->fields.basePanelSprite;
          if ( !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
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
            gameObject = (int64_t)this->fields.currentFriendPointLabel;
            if ( gameObject )
            {
              v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                v78,
                FriendPointNoticeDlgComponent_TypeInfo->static_fields->CURRENT_FP_LABEL_Y_MAX_FP,
                0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.btnObj,
                FriendPointNoticeDlgComponent_TypeInfo->static_fields->BUTTON_POS_Y_MAX_FP,
                0LL);
              goto LABEL_92;
            }
          }
        }
      }
    }
    goto LABEL_102;
  }
LABEL_92:
  currentFriendPointLabel = this->fields.currentFriendPointLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_6881/*"GET_FRIEND_POINT_NOW_POINT"*/, 0LL);
  v90 = *(_DWORD *)(v73 + 24);
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v81, v82, v83);
  gameObject = (int64_t)System_String__Format(v80, v84, 0LL);
  if ( !currentFriendPointLabel )
    goto LABEL_102;
  UILabel__set_text(currentFriendPointLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (int64_t)FriendPointNoticeDlgComponent_TypeInfo;
  v85 = this->fields.currentFriendPointLabel;
  if ( !FriendPointNoticeDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FriendPointNoticeDlgComponent_TypeInfo);
  if ( !v85 )
    goto LABEL_102;
  UILabel__SetCondensedScale_46828548(
    v85,
    FriendPointNoticeDlgComponent_TypeInfo->static_fields->CURRENT_FRIEND_POINT_LABEL_MAX_WIDTH,
    0LL);
  closeBtnLb = this->fields.closeBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeBtnLb )
    goto LABEL_102;
  UILabel__set_text(closeBtnLb, (System_String_o *)gameObject, 0LL);
  middleBtnLb = this->fields.middleBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6888/*"GET_FRIEND_POINT_SUPPORT_BTN"*/, 0LL);
  if ( !middleBtnLb )
    goto LABEL_102;
  UILabel__set_text(middleBtnLb, (System_String_o *)gameObject, 0LL);
  rightBtnLb = this->fields.rightBtnLb;
  gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6880/*"GET_FRIEND_POINT_GACHA_BTN"*/, 0LL);
  if ( !rightBtnLb )
    goto LABEL_102;
  UILabel__set_text(rightBtnLb, (System_String_o *)gameObject, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
  v89 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_FriendPointNoticeDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v89, 0, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__SetBackKeyForAndroid(
        FriendPointNoticeDlgComponent_o *this,
        const MethodInfo *method)
{
  AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0LL);
}


void __fastcall FriendPointNoticeDlgComponent__SetEnableButton(
        FriendPointNoticeDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4A0AE72 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    this = (FriendPointNoticeDlgComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    byte_4A0AE72 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FriendPointNoticeDlgComponent_o *)UnityEngine_Object__op_Inequality(
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
    sub_1B68930(this, buttonObj);
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

  if ( (byte_4A0AE6B & 1) == 0 )
  {
    sub_1B686D4(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A0AE6B = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
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

  if ( (byte_4A0AE6C & 1) == 0 )
  {
    sub_1B686D4(&FriendPointNoticeDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A0AE6C = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B68BF0(v7);
  FriendPointNoticeDlgComponent__Init(v10, v11);
}


void __fastcall FriendPointNoticeDlgComponent__setCallback(
        FriendPointNoticeDlgComponent_o *this,
        FriendPointNoticeDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackFunc = callback;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendPointNoticeDlgComponent__setStateLeftButton(
        FriendPointNoticeDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *closeBtn; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4A0AE71 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0AE71 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closeBtn,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  closeBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)closeBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[6].methodPtr);
      return;
    }
LABEL_10:
    sub_1B68930(closeBtn, disabled);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4A0AE70 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0AE70 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       middleBtn,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  middleBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)middleBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[6].methodPtr);
      return;
    }
LABEL_10:
    sub_1B68930(middleBtn, disabled);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4A0AE6F & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0AE6F = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rightBtn,
                       (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rightBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)rightBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[6].methodPtr);
      return;
    }
LABEL_10:
    sub_1B68930(rightBtn, disabled);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B27F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B27AC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall FriendPointNoticeDlgComponent_CallbackFunc__BeginInvoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A0AE79 & 1) == 0 )
  {
    sub_1B686D4(&FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_4A0AE79 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(FriendPointNoticeDlgComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__EndInvoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall FriendPointNoticeDlgComponent_CallbackFunc__Invoke(
        FriendPointNoticeDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}