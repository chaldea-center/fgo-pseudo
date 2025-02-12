void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BB3454 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB3454 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__Callback(
        UserGameActRecoverConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *v9; // x20
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C13CC8(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_38578560(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_38578560(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BB3450 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_UserGameActRecoverConfirmMenu_EndClose__, v10);
    byte_4BB3450 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__EndClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserGameActRecoverConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C13CC8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__EndOpen(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall UserGameActRecoverConfirmMenu__Init(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneTitleLabel; // x0

  if ( (byte_4BB344E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB344E = 1;
  }
  stoneTitleLabel = this->fields.stoneTitleLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  stoneTitleLabel = this->fields.stoneDataLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  stoneTitleLabel = this->fields.messageLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  stoneTitleLabel = this->fields.infoLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  stoneTitleLabel = this->fields.warningLabel;
  if ( !stoneTitleLabel
    || (UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneTitleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneTitleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (stoneTitleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_12:
    sub_1C13F80(stoneTitleLabel, method);
  }
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickCancel(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB3452 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserGameActRecoverConfirmMenu_OnClickCancel__, method);
    byte_4BB3452 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB3453 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserGameActRecoverConfirmMenu_OnClickClose__, method);
    byte_4BB3453 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickDecide(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BB3451 & 1) == 0 )
  {
    sub_1C13D24(&Method_UserGameActRecoverConfirmMenu_OnClickDecide__, method);
    byte_4BB3451 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverConfirmMenu__Open(
        UserGameActRecoverConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v52; // x23
  Il2CppObject *v53; // x0
  System_String_o *v54; // x20
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x23
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x20
  UILabel_o *closeLabel; // x23
  bool v65; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_String_o *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  UserGameEntity_o *v76; // x8
  Il2CppObject *v77; // x22
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x21
  System_String_o *v80; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v82; // x21
  UILabel_o *v83; // x21
  __int64 *v84; // x8
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_String_o *v88; // x22
  BalanceConfig_c *v89; // x8
  Il2CppObject *v90; // x0
  System_Action_o *v91; // x20
  int32_t actMax; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Act; // [xsp+18h] [xbp-48h] BYREF
  int32_t stone; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BB344F & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&BalanceConfig_TypeInfo, v12);
    sub_1C13D24(&int_TypeInfo, v13);
    sub_1C13D24(&LocalizationManager_TypeInfo, v14);
    sub_1C13D24(&Method_UserGameActRecoverConfirmMenu_EndOpen__, v15);
    sub_1C13D24(&StringLiteral_15084/*"USER_FRIEND_CODE"*/, v16);
    sub_1C13D24(&StringLiteral_15080/*"USER_DATA_INFO"*/, v17);
    sub_1C13D24(&StringLiteral_15074/*"USEEDGEBLUR_ON"*/, v18);
    sub_1C13D24(&StringLiteral_15083/*"USER_FREE_STONE"*/, v19);
    sub_1C13D24(&StringLiteral_15075/*"USER"*/, v20);
    sub_1C13D24(&StringLiteral_15076/*"USER_ACTION_POINT_MAX_TIME"*/, v21);
    sub_1C13D24(&StringLiteral_15079/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/, v22);
    sub_1C13D24(&StringLiteral_15078/*"USER_ACTION_POINT_NEXT_TIME"*/, v23);
    sub_1C13D24(&StringLiteral_12520/*"STONE_SHOP_BANNER_INFO"*/, v24);
    sub_1C13D24(&StringLiteral_15082/*"USER_EXP_UNIT"*/, v25);
    sub_1C13D24(&StringLiteral_12521/*"STONE_SHOP_DETAIL_BUTTON"*/, v26);
    sub_1C13D24(&StringLiteral_1/*""*/, v27);
    sub_1C13D24(&StringLiteral_15077/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, v28);
    sub_1C13D24(&StringLiteral_15081/*"USER_EXP_NAME"*/, v29);
    byte_4BB344F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.stoneShopEntity,
      (int64_t)stoneShopEntity,
      (int64_t)stoneShopEntity,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    p_userGameEntity = &this->fields.userGameEntity;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
      (int64_t)SelfUserGame,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    stoneTitleLabel = this->fields.stoneTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12520/*"STONE_SHOP_BANNER_INFO"*/, 0LL);
    if ( !stoneTitleLabel )
      goto LABEL_72;
    UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
    stoneDataLabel = this->fields.stoneDataLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"STONE_SHOP_DETAIL_BUTTON"*/, 0LL);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_72;
    v52 = (System_String_o *)gameObject;
    stone = userGameEntity->fields.stone;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v48, v49, v50);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0LL);
    if ( !stoneDataLabel )
      goto LABEL_72;
    UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15077/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, 0LL);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v54 = (System_String_o *)gameObject;
    Act = UserGameEntity__getAct(*p_userGameEntity, 0LL);
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &Act, v55, v56, v57);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v61 = (Il2CppObject *)gameObject;
    actMax = (*p_userGameEntity)->fields.actMax;
    v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax, v58, v59, v60);
    v63 = (Il2CppObject *)System_String__Format_62982316(v54, v61, v62, 0LL);
    if ( (unsigned int)kind < 2 )
    {
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15082/*"USER_EXP_UNIT"*/, 0LL);
      if ( !messageLabel )
        goto LABEL_72;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_72;
      v65 = 1;
    }
    else
    {
      if ( (unsigned int)(kind - 2) > 2 )
        goto LABEL_41;
      closeLabel = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15075/*"USER"*/, 0LL);
      if ( !closeLabel )
        goto LABEL_72;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
      if ( !gameObject )
        goto LABEL_72;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject
        || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton) == 0LL)
        || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL)
        || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL) )
      {
LABEL_72:
        sub_1C13F80(gameObject, v37);
      }
      v65 = 0;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v65, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( gameObject )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, (unsigned int)kind > 1, 0LL);
LABEL_41:
      switch ( kind )
      {
        case 0:
          gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
          if ( !gameObject )
            goto LABEL_72;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          decideLabel = this->fields.decideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15076/*"USER_ACTION_POINT_MAX_TIME"*/, 0LL);
          if ( !decideLabel )
            goto LABEL_72;
          UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
          cancelLabel = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15074/*"USEEDGEBLUR_ON"*/, 0LL);
          if ( !cancelLabel )
            goto LABEL_72;
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15077/*"USER_ACTION_POINT_MAX_TIME_FORMAT"*/, 0LL);
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v72 = (System_String_o *)gameObject;
          stone = (*p_userGameEntity)->fields.actMax;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v69, v70, v71);
          v76 = *p_userGameEntity;
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v77 = (Il2CppObject *)gameObject;
          Act = v76->fields.actMax;
          v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Act, v73, v74, v75);
          v79 = (Il2CppObject *)System_String__Format_62982316(v72, v77, v78, 0LL);
          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_15078/*"USER_ACTION_POINT_NEXT_TIME"*/, 0LL);
          v63 = (Il2CppObject *)System_String__Format_62982316(v80, v63, v79, 0LL);
          goto LABEL_69;
        case 1:
          warningLabel = this->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15083/*"USER_FREE_STONE"*/, 0LL);
          if ( !warningLabel )
            goto LABEL_72;
          UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
          v82 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15084/*"USER_FRIEND_CODE"*/, 0LL);
          if ( !v82 )
            goto LABEL_72;
          UILabel__set_text(v82, (System_String_o *)gameObject, 0LL);
          v83 = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15074/*"USEEDGEBLUR_ON"*/, 0LL);
          if ( !v83 )
            goto LABEL_72;
          goto LABEL_68;
        case 2:
          v83 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v84 = &StringLiteral_15079/*"USER_ACTION_POINT_NEXT_TIME_FORMAT"*/;
          goto LABEL_65;
        case 3:
          v83 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v84 = &StringLiteral_15081/*"USER_EXP_NAME"*/;
          goto LABEL_65;
        case 4:
          v83 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v84 = &StringLiteral_15080/*"USER_DATA_INFO"*/;
LABEL_65:
          v88 = LocalizationManager__Get((System_String_o *)*v84, 0LL);
          v89 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v89 = BalanceConfig_TypeInfo;
          }
          stone = v89->static_fields->ServantFrameMax;
          v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v85, v86, v87);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v88, v90, 0LL);
          if ( !v83 )
            goto LABEL_72;
LABEL_68:
          UILabel__set_text(v83, (System_String_o *)gameObject, 0LL);
LABEL_69:
          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
          if ( !gameObject )
            goto LABEL_72;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v63, 0LL);
          this->fields.state = 1;
          v91 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(v91, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
          break;
        default:
          goto LABEL_69;
      }
      return;
    }
    goto LABEL_72;
  }
}


void __fastcall UserGameActRecoverConfirmMenu__add_callbackFunc(
        UserGameActRecoverConfirmMenu_o *this,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserGameActRecoverConfirmMenu_o *v11; // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BB344C & 1) == 0 )
  {
    sub_1C13D24(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4BB344C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserGameActRecoverConfirmMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  UserGameActRecoverConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserGameActRecoverConfirmMenu__remove_callbackFunc(
        UserGameActRecoverConfirmMenu_o *this,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserGameActRecoverConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BB344D & 1) == 0 )
  {
    sub_1C13D24(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4BB344D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserGameActRecoverConfirmMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C14240(v8);
  UserGameActRecoverConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A54718;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A546D0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserGameActRecoverConfirmMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BB3455 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, result);
    byte_4BB3455 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}