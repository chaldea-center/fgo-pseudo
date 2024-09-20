void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A59E54 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A59E54 = 1;
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *v5; // x20
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_37363804(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_37363804(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A59E50 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UserGameActRecoverConfirmMenu_EndClose__);
    byte_4A59E50 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__EndClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserGameActRecoverConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__EndOpen(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall UserGameActRecoverConfirmMenu__Init(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneTitleLabel; // x0

  if ( (byte_4A59E4E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E4E = 1;
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
    sub_1B8880C(stoneTitleLabel, method);
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

  if ( (byte_4A59E52 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    byte_4A59E52 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserGameActRecoverConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A59E53 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    byte_4A59E53 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserGameActRecoverConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A59E51 & 1) == 0 )
  {
    sub_1B885B0(&Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    byte_4A59E51 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserGameActRecoverConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserGameActRecoverConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_UserGameActRecoverConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 1, v5);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Open(
        UserGameActRecoverConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x20
  UILabel_o *closeLabel; // x23
  bool v36; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_String_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  UserGameEntity_o *v47; // x8
  Il2CppObject *v48; // x22
  Il2CppObject *v49; // x0
  Il2CppObject *v50; // x21
  System_String_o *v51; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v53; // x21
  UILabel_o *v54; // x21
  __int64 *v55; // x8
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_String_o *v59; // x22
  BalanceConfig_c *v60; // x8
  Il2CppObject *v61; // x0
  System_Action_o *v62; // x20
  int32_t actMax; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Act; // [xsp+18h] [xbp-48h] BYREF
  int32_t stone; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A59E4F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UserGameActRecoverConfirmMenu_EndOpen__);
    sub_1B885B0(&StringLiteral_14846/*"USER_GAME_ACT_RECOVER_STONE"*/);
    sub_1B885B0(&StringLiteral_14842/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/);
    sub_1B885B0(&StringLiteral_14836/*"USER_GAME_ACT_RECOVER_CANCEL"*/);
    sub_1B885B0(&StringLiteral_14845/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_14837/*"USER_GAME_ACT_RECOVER_CLOSE"*/);
    sub_1B885B0(&StringLiteral_14838/*"USER_GAME_ACT_RECOVER_DECIDE"*/);
    sub_1B885B0(&StringLiteral_14841/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/);
    sub_1B885B0(&StringLiteral_14840/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/);
    sub_1B885B0(&StringLiteral_12301/*"STONE_TAKE"*/);
    sub_1B885B0(&StringLiteral_14844/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/);
    sub_1B885B0(&StringLiteral_12302/*"STONE_UNIT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_14839/*"USER_GAME_ACT_RECOVER_INFO"*/);
    sub_1B885B0(&StringLiteral_14843/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/);
    byte_4A59E4F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.stoneShopEntity,
      (int32_t)stoneShopEntity,
      (int32_t)stoneShopEntity,
      (int32_t)callback);
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    this->fields.userGameEntity = SelfUserGame;
    p_userGameEntity = &this->fields.userGameEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v15, v16);
    stoneTitleLabel = this->fields.stoneTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12301/*"STONE_TAKE"*/, 0LL);
    if ( !stoneTitleLabel )
      goto LABEL_72;
    UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
    stoneDataLabel = this->fields.stoneDataLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"STONE_UNIT"*/, 0LL);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_72;
    v23 = (System_String_o *)gameObject;
    stone = userGameEntity->fields.stone;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v19, v20, v21);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, v24, 0LL);
    if ( !stoneDataLabel )
      goto LABEL_72;
    UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14839/*"USER_GAME_ACT_RECOVER_INFO"*/, 0LL);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v25 = (System_String_o *)gameObject;
    Act = UserGameEntity__getAct(*p_userGameEntity, 0LL);
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &Act, v26, v27, v28);
    if ( !*p_userGameEntity )
      goto LABEL_72;
    v32 = (Il2CppObject *)gameObject;
    actMax = (*p_userGameEntity)->fields.actMax;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax, v29, v30, v31);
    v34 = (Il2CppObject *)System_String__Format_61721404(v25, v32, v33, 0LL);
    if ( (unsigned int)kind < 2 )
    {
      messageLabel = this->fields.messageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14844/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, 0LL);
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
      v36 = 1;
    }
    else
    {
      if ( (unsigned int)(kind - 2) > 2 )
        goto LABEL_41;
      closeLabel = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14837/*"USER_GAME_ACT_RECOVER_CLOSE"*/, 0LL);
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
        sub_1B8880C(gameObject, v12);
      }
      v36 = 0;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v36, 0LL);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14838/*"USER_GAME_ACT_RECOVER_DECIDE"*/, 0LL);
          if ( !decideLabel )
            goto LABEL_72;
          UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
          cancelLabel = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14836/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0LL);
          if ( !cancelLabel )
            goto LABEL_72;
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14839/*"USER_GAME_ACT_RECOVER_INFO"*/, 0LL);
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v43 = (System_String_o *)gameObject;
          stone = (*p_userGameEntity)->fields.actMax;
          gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v40, v41, v42);
          v47 = *p_userGameEntity;
          if ( !*p_userGameEntity )
            goto LABEL_72;
          v48 = (Il2CppObject *)gameObject;
          Act = v47->fields.actMax;
          v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Act, v44, v45, v46);
          v50 = (Il2CppObject *)System_String__Format_61721404(v43, v48, v49, 0LL);
          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_14840/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0LL);
          v34 = (Il2CppObject *)System_String__Format_61721404(v51, v34, v50, 0LL);
          goto LABEL_69;
        case 1:
          warningLabel = this->fields.warningLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14845/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, 0LL);
          if ( !warningLabel )
            goto LABEL_72;
          UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
          v53 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14846/*"USER_GAME_ACT_RECOVER_STONE"*/, 0LL);
          if ( !v53 )
            goto LABEL_72;
          UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
          v54 = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14836/*"USER_GAME_ACT_RECOVER_CANCEL"*/, 0LL);
          if ( !v54 )
            goto LABEL_72;
          goto LABEL_68;
        case 2:
          v54 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v55 = &StringLiteral_14841/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
          goto LABEL_65;
        case 3:
          v54 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v55 = &StringLiteral_14843/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
          goto LABEL_65;
        case 4:
          v54 = this->fields.messageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v55 = &StringLiteral_14842/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_65:
          v59 = LocalizationManager__Get((System_String_o *)*v55, 0LL);
          v60 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v60 = BalanceConfig_TypeInfo;
          }
          stone = v60->static_fields->ServantFrameMax;
          v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v56, v57, v58);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v59, v61, 0LL);
          if ( !v54 )
            goto LABEL_72;
LABEL_68:
          UILabel__set_text(v54, (System_String_o *)gameObject, 0LL);
LABEL_69:
          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
          if ( !gameObject )
            goto LABEL_72;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v34, 0LL);
          this->fields.state = 1;
          v62 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v62, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
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

  if ( (byte_4A59E4C & 1) == 0 )
  {
    sub_1B885B0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_4A59E4C = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A59E4D & 1) == 0 )
  {
    sub_1B885B0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_4A59E4D = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  UserGameActRecoverConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19CDA38;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CD9F0;
}


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
  if ( (byte_4A59E55 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A59E55 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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