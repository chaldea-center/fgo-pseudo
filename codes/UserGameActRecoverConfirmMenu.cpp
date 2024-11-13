void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14EAC & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14EAC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_38076064(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_38076064(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B14EA8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UserGameActRecoverConfirmMenu_EndClose__, v10, v11);
    byte_4B14EA8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  UILabel_o *stoneTitleLabel; // x0

  if ( (byte_4B14EA6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B14EA6 = 1;
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
    sub_1BCAA3C(stoneTitleLabel, method);
  }
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickCancel(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14EAA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserGameActRecoverConfirmMenu_OnClickCancel__, method, v2);
    byte_4B14EAA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_UserGameActRecoverConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v6);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14EAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserGameActRecoverConfirmMenu_OnClickClose__, method, v2);
    byte_4B14EAB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_UserGameActRecoverConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v6);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickDecide(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14EA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserGameActRecoverConfirmMenu_OnClickDecide__, method, v2);
    byte_4B14EA9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_UserGameActRecoverConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 1, v6);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v68; // x23
  Il2CppObject *v69; // x0
  System_String_o *v70; // x20
  Il2CppObject *v71; // x23
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x20
  UILabel_o *closeLabel; // x23
  bool v75; // w1
  UILabel_o *messageLabel; // x23
  __int64 v77; // x1
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v80; // x21
  UserGameEntity_o *v81; // x8
  Il2CppObject *v82; // x22
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x21
  System_String_o *v85; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v87; // x21
  UILabel_o *v88; // x21
  __int64 *v89; // x8
  __int64 v90; // x1
  System_String_o *v91; // x22
  BalanceConfig_c *v92; // x8
  Il2CppObject *v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Action_o *v97; // x20
  int32_t actMax; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Act; // [xsp+18h] [xbp-48h] BYREF
  int32_t stone; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B14EA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, stoneShopEntity);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v12, v13);
    sub_1BCA7E0(&int_TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UserGameActRecoverConfirmMenu_EndOpen__, v18, v19);
    sub_1BCA7E0(&StringLiteral_15011/*"USER_GAME_ACT_RECOVER_STONE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_15007/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15001/*"USER_GAME_ACT_RECOVER_CANCEL"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_15010/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_15002/*"USER_GAME_ACT_RECOVER_CLOSE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_15003/*"USER_GAME_ACT_RECOVER_DECIDE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_15006/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_15005/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_12457/*"STONE_TAKE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_15009/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_12458/*"STONE_UNIT"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_15004/*"USER_GAME_ACT_RECOVER_INFO"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_15008/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/, v46, v47);
    byte_4B14EA7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.stoneShopEntity,
      (int64_t)stoneShopEntity,
      (int64_t)stoneShopEntity,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    p_userGameEntity = &this->fields.userGameEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
      (int64_t)SelfUserGame,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    stoneTitleLabel = this->fields.stoneTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"STONE_TAKE"*/, 0LL);
    if ( !stoneTitleLabel )
      goto LABEL_72;
    UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
    stoneDataLabel = this->fields.stoneDataLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"STONE_UNIT"*/, 0LL);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_72;
    v68 = (System_String_o *)gameObject;
    stone = userGameEntity->fields.stone;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v68, v69, 0LL);
    if ( !stoneDataLabel )
      goto LABEL_72;
    UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15004/*"USER_GAME_ACT_RECOVER_INFO"*/, 0LL);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v70 = (System_String_o *)gameObject;
    Act = UserGameEntity__getAct(*p_userGameEntity, 0LL);
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &Act);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v71 = (Il2CppObject *)gameObject;
    actMax = (*p_userGameEntity)->fields.actMax;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax);
    v73 = (Il2CppObject *)System_String__Format_62415592(v70, v71, v72, 0LL);
    if ( (unsigned int)kind < 2 )
    {
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15009/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, 0LL);
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
      v75 = 1;
    }
    else
    {
      if ( (unsigned int)(kind - 2) > 2 )
        goto LABEL_41;
      closeLabel = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15002/*"USER_GAME_ACT_RECOVER_CLOSE"*/, 0LL);
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
        sub_1BCAA3C(gameObject, v55);
      }
      v75 = 0;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v75, 0LL);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15003/*"USER_GAME_ACT_RECOVER_DECIDE"*/, 0LL);
          if ( !decideLabel )
            goto LABEL_72;
          UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
          cancelLabel = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15001/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0LL);
          if ( !cancelLabel )
            goto LABEL_72;
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15004/*"USER_GAME_ACT_RECOVER_INFO"*/, 0LL);
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v80 = (System_String_o *)gameObject;
          stone = (*p_userGameEntity)->fields.actMax;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          v81 = *p_userGameEntity;
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v82 = (Il2CppObject *)gameObject;
          Act = v81->fields.actMax;
          v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Act);
          v84 = (Il2CppObject *)System_String__Format_62415592(v80, v82, v83, 0LL);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_15005/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0LL);
          v73 = (Il2CppObject *)System_String__Format_62415592(v85, v73, v84, 0LL);
          goto LABEL_69;
        case 1:
          warningLabel = this->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15010/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, 0LL);
          if ( !warningLabel )
            goto LABEL_72;
          UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
          v87 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15011/*"USER_GAME_ACT_RECOVER_STONE"*/, 0LL);
          if ( !v87 )
            goto LABEL_72;
          UILabel__set_text(v87, (System_String_o *)gameObject, 0LL);
          v88 = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15001/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0LL);
          if ( !v88 )
            goto LABEL_72;
          goto LABEL_68;
        case 2:
          v88 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
          v89 = &StringLiteral_15006/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
          goto LABEL_65;
        case 3:
          v88 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
          v89 = &StringLiteral_15008/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
          goto LABEL_65;
        case 4:
          v88 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
          v89 = &StringLiteral_15007/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_65:
          v91 = LocalizationManager__Get((System_String_o *)*v89, 0LL);
          v92 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v90);
            v92 = BalanceConfig_TypeInfo;
          }
          stone = v92->static_fields->ServantFrameMax;
          v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v91, v93, 0LL);
          if ( !v88 )
            goto LABEL_72;
LABEL_68:
          UILabel__set_text(v88, (System_String_o *)gameObject, 0LL);
LABEL_69:
          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
          if ( !gameObject )
            goto LABEL_72;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v73, 0LL);
          this->fields.state = 1;
          v97 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v94, v95, v96);
          System_Action___ctor(v97, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
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

  if ( (byte_4B14EA4 & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B14EA4 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B14EA5 & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B14EA5 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0BFA0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0BF58;
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
  if ( (byte_4B14EAD & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B14EAD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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