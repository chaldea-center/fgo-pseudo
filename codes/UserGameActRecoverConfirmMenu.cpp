void UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CED320 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CED320 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserGameActRecoverConfirmMenu__Callback(
        UserGameActRecoverConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *v9; // x20
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_40720112(this, 0, v2);
}


void UserGameActRecoverConfirmMenu__Close_40720112(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CED31C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UserGameActRecoverConfirmMenu_EndClose__);
    byte_4CED31C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void UserGameActRecoverConfirmMenu__EndClose(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserGameActRecoverConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void UserGameActRecoverConfirmMenu__EndOpen(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void UserGameActRecoverConfirmMenu__Init(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneTitleLabel; // x0

  if ( (byte_4CED31A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED31A = 1;
  }
  stoneTitleLabel = this->fields.stoneTitleLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  stoneTitleLabel = this->fields.stoneDataLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  stoneTitleLabel = this->fields.messageLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  stoneTitleLabel = this->fields.infoLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  stoneTitleLabel = this->fields.warningLabel;
  if ( !stoneTitleLabel
    || (UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (stoneTitleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (stoneTitleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (stoneTitleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_12:
    sub_1C7BD40(stoneTitleLabel, method);
  }
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void UserGameActRecoverConfirmMenu__OnClickCancel(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CED31E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    byte_4CED31E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void UserGameActRecoverConfirmMenu__OnClickClose(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CED31F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    byte_4CED31F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void UserGameActRecoverConfirmMenu__OnClickDecide(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CED31D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    byte_4CED31D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    UserGameActRecoverConfirmMenu__Callback(this, 1, v5);
  }
}


void UserGameActRecoverConfirmMenu__Open(
        UserGameActRecoverConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  System_String_o *v33; // x20
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x20
  UILabel_o *closeLabel; // x23
  bool v38; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v42; // x21
  UserGameEntity_o *v43; // x8
  Il2CppObject *v44; // x22
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x21
  System_String_o *v47; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v49; // x21
  UILabel_o *v50; // x21
  __int64 *v51; // x8
  System_String_o *v52; // x22
  BalanceConfig_c *v53; // x8
  Il2CppObject *v54; // x0
  System_Action_o *v55; // x20
  int32_t actMax; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Act; // [xsp+18h] [xbp-48h] BYREF
  int32_t stone; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CED31B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UserGameActRecoverConfirmMenu_EndOpen__);
    sub_1C7BAE8(&StringLiteral_14920/*"USER_GAME_ACT_RECOVER_STONE"*/);
    sub_1C7BAE8(&StringLiteral_14916/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/);
    sub_1C7BAE8(&StringLiteral_14910/*"USER_GAME_ACT_RECOVER_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_14919/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_14911/*"USER_GAME_ACT_RECOVER_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_14912/*"USER_GAME_ACT_RECOVER_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_14915/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/);
    sub_1C7BAE8(&StringLiteral_14914/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/);
    sub_1C7BAE8(&StringLiteral_12454/*"STONE_TAKE"*/);
    sub_1C7BAE8(&StringLiteral_14918/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/);
    sub_1C7BAE8(&StringLiteral_12455/*"STONE_UNIT"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_14913/*"USER_GAME_ACT_RECOVER_INFO"*/);
    sub_1C7BAE8(&StringLiteral_14917/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/);
    byte_4CED31B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.stoneShopEntity,
      (int32_t)stoneShopEntity,
      (int32_t)stoneShopEntity,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    this->fields.userGameEntity = SelfUserGame;
    p_userGameEntity = &this->fields.userGameEntity;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.userGameEntity,
      (int32_t)SelfUserGame,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    stoneTitleLabel = this->fields.stoneTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"STONE_TAKE"*/, 0);
    if ( !stoneTitleLabel )
      goto LABEL_72;
    UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0);
    stoneDataLabel = this->fields.stoneDataLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12455/*"STONE_UNIT"*/, 0);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_72;
    v31 = (System_String_o *)gameObject;
    stone = userGameEntity->fields.stone;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v31, v32, 0);
    if ( !stoneDataLabel )
      goto LABEL_72;
    UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14913/*"USER_GAME_ACT_RECOVER_INFO"*/, 0);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v33 = (System_String_o *)gameObject;
    Act = UserGameEntity__getAct(*p_userGameEntity, 0);
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &Act);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v34 = (Il2CppObject *)gameObject;
    actMax = (*p_userGameEntity)->fields.actMax;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax);
    v36 = (Il2CppObject *)System_String__Format_64218220(v33, v34, v35, 0);
    if ( (unsigned int)kind < 2 )
    {
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14918/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, 0);
      if ( !messageLabel )
        goto LABEL_72;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_72;
      v38 = 1;
    }
    else
    {
      if ( (unsigned int)(kind - 2) > 2 )
        goto LABEL_41;
      closeLabel = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14911/*"USER_GAME_ACT_RECOVER_CLOSE"*/, 0);
      if ( !closeLabel )
        goto LABEL_72;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
      if ( !gameObject )
        goto LABEL_72;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_72;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_72;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject
        || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton) == 0)
        || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0)
        || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0) )
      {
LABEL_72:
        sub_1C7BD40(gameObject, v19);
      }
      v38 = 0;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v38, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( gameObject )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, (unsigned int)kind > 1, 0);
LABEL_41:
      switch ( kind )
      {
        case 0:
          gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
          if ( !gameObject )
            goto LABEL_72;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          decideLabel = this->fields.decideLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14912/*"USER_GAME_ACT_RECOVER_DECIDE"*/, 0);
          if ( !decideLabel )
            goto LABEL_72;
          UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
          cancelLabel = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14910/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0);
          if ( !cancelLabel )
            goto LABEL_72;
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14913/*"USER_GAME_ACT_RECOVER_INFO"*/, 0);
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v42 = (System_String_o *)gameObject;
          stone = (*p_userGameEntity)->fields.actMax;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          v43 = *p_userGameEntity;
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v44 = (Il2CppObject *)gameObject;
          Act = v43->fields.actMax;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Act);
          v46 = (Il2CppObject *)System_String__Format_64218220(v42, v44, v45, 0);
          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_14914/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0);
          v36 = (Il2CppObject *)System_String__Format_64218220(v47, v36, v46, 0);
          goto LABEL_69;
        case 1:
          warningLabel = this->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14919/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, 0);
          if ( !warningLabel )
            goto LABEL_72;
          UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
          v49 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14920/*"USER_GAME_ACT_RECOVER_STONE"*/, 0);
          if ( !v49 )
            goto LABEL_72;
          UILabel__set_text(v49, (System_String_o *)gameObject, 0);
          v50 = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14910/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0);
          if ( !v50 )
            goto LABEL_72;
          goto LABEL_68;
        case 2:
          v50 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v51 = &StringLiteral_14915/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
          goto LABEL_65;
        case 3:
          v50 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v51 = &StringLiteral_14917/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
          goto LABEL_65;
        case 4:
          v50 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v51 = &StringLiteral_14916/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_65:
          v52 = LocalizationManager__Get((System_String_o *)*v51, 0);
          v53 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v53 = BalanceConfig_TypeInfo;
          }
          stone = v53->static_fields->ServantFrameMax;
          v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v52, v54, 0);
          if ( !v50 )
            goto LABEL_72;
LABEL_68:
          UILabel__set_text(v50, (System_String_o *)gameObject, 0);
LABEL_69:
          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
          if ( !gameObject )
            goto LABEL_72;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v36, 0);
          this->fields.state = 1;
          v55 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(v55, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0, 0);
          break;
        default:
          goto LABEL_69;
      }
      return;
    }
    goto LABEL_72;
  }
}


void UserGameActRecoverConfirmMenu__add_callbackFunc(
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

  if ( (byte_4CED318 & 1) == 0 )
  {
    sub_1C7BAE8(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CED318 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (UserGameActRecoverConfirmMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  UserGameActRecoverConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void UserGameActRecoverConfirmMenu__remove_callbackFunc(
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

  if ( (byte_4CED319 & 1) == 0 )
  {
    sub_1C7BAE8(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CED319 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (UserGameActRecoverConfirmMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  UserGameActRecoverConfirmMenu__Init(v11, v12);
}


void UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB0B10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB0AC8;
}


System_IAsyncResult_o *UserGameActRecoverConfirmMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CED321 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CED321 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}