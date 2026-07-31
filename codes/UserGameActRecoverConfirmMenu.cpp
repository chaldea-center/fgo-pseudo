void UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59372DB & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59372DB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserGameActRecoverConfirmMenu__Callback(
        UserGameActRecoverConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *v9; // x20
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_47087000(this, 0, v2);
}


void UserGameActRecoverConfirmMenu__Close_47087000(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_59372D7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverConfirmMenu_EndClose__);
    byte_59372D7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void UserGameActRecoverConfirmMenu__EndClose(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserGameActRecoverConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_59372D5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59372D5 = 1;
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
    sub_21FFECC(stoneTitleLabel, method);
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

  if ( (byte_59372D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    byte_59372D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void UserGameActRecoverConfirmMenu__OnClickClose(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_59372DA & 1) == 0 )
  {
    sub_21FFC50(&Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    byte_59372DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void UserGameActRecoverConfirmMenu__OnClickDecide(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_59372D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    byte_59372D8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v33; // x23
  Il2CppObject *v34; // x0
  System_String_o *v35; // x20
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  __int64 v38; // x2
  Il2CppObject *v39; // x20
  UILabel_o *closeLabel; // x23
  bool v41; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *v43; // x21
  __int64 *v44; // x8
  UILabel_o *warningLabel; // x21
  UILabel_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  System_String_o *v49; // x22
  BalanceConfig_c *v50; // x8
  Il2CppObject *v51; // x0
  System_Action_o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v57; // x21
  UserGameEntity_o *v58; // x8
  Il2CppObject *v59; // x22
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x21
  System_String_o *v62; // x0
  int32_t actMax; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Act; // [xsp+18h] [xbp-48h] BYREF
  int32_t stone; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_59372D6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverConfirmMenu_EndOpen__);
    sub_21FFC50(&StringLiteral_15427/*"USER_GAME_ACT_RECOVER_STONE"*/);
    sub_21FFC50(&StringLiteral_15423/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/);
    sub_21FFC50(&StringLiteral_15417/*"USER_GAME_ACT_RECOVER_CANCEL"*/);
    sub_21FFC50(&StringLiteral_15426/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_15418/*"USER_GAME_ACT_RECOVER_CLOSE"*/);
    sub_21FFC50(&StringLiteral_15419/*"USER_GAME_ACT_RECOVER_DECIDE"*/);
    sub_21FFC50(&StringLiteral_15422/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/);
    sub_21FFC50(&StringLiteral_15421/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/);
    sub_21FFC50(&StringLiteral_12894/*"STONE_TAKE"*/);
    sub_21FFC50(&StringLiteral_15425/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/);
    sub_21FFC50(&StringLiteral_12895/*"STONE_UNIT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_15420/*"USER_GAME_ACT_RECOVER_INFO"*/);
    sub_21FFC50(&StringLiteral_15424/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/);
    byte_59372D6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.stoneShopEntity,
      (int32_t)stoneShopEntity,
      (System_String_o *)stoneShopEntity,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    this->fields.userGameEntity = SelfUserGame;
    p_userGameEntity = &this->fields.userGameEntity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
      (int32_t)SelfUserGame,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    stoneTitleLabel = this->fields.stoneTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12894/*"STONE_TAKE"*/, 0);
    if ( !stoneTitleLabel )
      goto LABEL_78;
    UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0);
    stoneDataLabel = this->fields.stoneDataLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12895/*"STONE_UNIT"*/, 0);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_78;
    v33 = (System_String_o *)gameObject;
    stone = userGameEntity->fields.stone;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &stone);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0);
    if ( !stoneDataLabel )
      goto LABEL_78;
    UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15420/*"USER_GAME_ACT_RECOVER_INFO"*/, 0);
    if ( !*p_userGameEntity )
      goto LABEL_78;
    v35 = (System_String_o *)gameObject;
    Act = UserGameEntity__getAct(*p_userGameEntity, 0);
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C070, &Act);
    if ( !*p_userGameEntity )
      goto LABEL_78;
    v36 = (Il2CppObject *)gameObject;
    actMax = (*p_userGameEntity)->fields.actMax;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &actMax);
    v39 = (Il2CppObject *)System_String__Format_75484576(v35, v36, v37, 0);
    if ( (unsigned int)kind < 2 )
    {
      messageLabel = this->fields.messageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v38);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15425/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, 0);
      if ( !messageLabel )
        goto LABEL_78;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_78;
      v41 = 0;
    }
    else
    {
      if ( (unsigned int)(kind - 5) < 0xFFFFFFFD )
        goto LABEL_42;
      closeLabel = this->fields.closeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v38);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15418/*"USER_GAME_ACT_RECOVER_CLOSE"*/, 0);
      if ( !closeLabel )
        goto LABEL_78;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
      if ( !gameObject )
        goto LABEL_78;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_78;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_78;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_78;
      v41 = 1;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v41, 0);
LABEL_42:
    if ( kind <= 1 )
    {
      if ( !kind )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
        if ( !gameObject )
          goto LABEL_78;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        decideLabel = this->fields.decideLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15419/*"USER_GAME_ACT_RECOVER_DECIDE"*/, 0);
        if ( !decideLabel )
          goto LABEL_78;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0);
        if ( !cancelLabel )
          goto LABEL_78;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15420/*"USER_GAME_ACT_RECOVER_INFO"*/, 0);
        if ( !*p_userGameEntity )
          goto LABEL_78;
        v57 = (System_String_o *)gameObject;
        stone = (*p_userGameEntity)->fields.actMax;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C070, &stone);
        v58 = *p_userGameEntity;
        if ( !*p_userGameEntity )
          goto LABEL_78;
        v59 = (Il2CppObject *)gameObject;
        Act = v58->fields.actMax;
        v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Act);
        v61 = (Il2CppObject *)System_String__Format_75484576(v57, v59, v60, 0);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_15421/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0);
        v39 = (Il2CppObject *)System_String__Format_75484576(v62, v39, v61, 0);
        goto LABEL_67;
      }
      if ( kind != 1 )
      {
LABEL_67:
        gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v39, 0);
          this->fields.state = 1;
          v52 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v52, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0, 0);
          return;
        }
LABEL_78:
        sub_21FFECC(gameObject, v19);
      }
      warningLabel = this->fields.warningLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v38);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15426/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, 0);
      if ( !warningLabel )
        goto LABEL_78;
      UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
      v46 = this->fields.decideLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15427/*"USER_GAME_ACT_RECOVER_STONE"*/, 0);
      if ( !v46 )
        goto LABEL_78;
      UILabel__set_text(v46, (System_String_o *)gameObject, 0);
      v43 = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15417/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0);
      if ( !v43 )
        goto LABEL_78;
    }
    else
    {
      switch ( kind )
      {
        case 2:
          v43 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v38);
          v44 = &StringLiteral_15422/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
          break;
        case 3:
          v43 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v38);
          v44 = &StringLiteral_15424/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
          break;
        case 4:
          v43 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v38);
          v44 = &StringLiteral_15423/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
          break;
        default:
          goto LABEL_67;
      }
      v49 = LocalizationManager__Get((System_String_o *)*v44, 0);
      v50 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47, v48);
        v50 = BalanceConfig_TypeInfo;
      }
      stone = v50->static_fields->ServantFrameMax;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &stone);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v49, v51, 0);
      if ( !v43 )
        goto LABEL_78;
    }
    UILabel__set_text(v43, (System_String_o *)gameObject, 0);
    goto LABEL_67;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserGameActRecoverConfirmMenu_o *v13; // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59372D3 & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_59372D3 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  UserGameActRecoverConfirmMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserGameActRecoverConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59372D4 & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_59372D4 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  UserGameActRecoverConfirmMenu__Init(v13, v14);
}


void UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF8D74;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF8D2C;
}


System_IAsyncResult_o *UserGameActRecoverConfirmMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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