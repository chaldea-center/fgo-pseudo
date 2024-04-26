void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_43506F6 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43506F6 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__Callback(
        UserGameActRecoverConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v9; // x19
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_22812432(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_22812432(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_43506F2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UserGameActRecoverConfirmMenu_EndClose__);
    byte_43506F2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__EndClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserGameActRecoverConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B70630(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__EndOpen(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall UserGameActRecoverConfirmMenu__Init(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *stoneTitleLabel; // x0

  if ( (byte_43506F0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43506F0 = 1;
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
    sub_B7076C(stoneTitleLabel, method);
  }
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickCancel(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_43506F4 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43506F4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_43506F5 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43506F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickDecide(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_43506F3 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43506F3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    UserGameActRecoverConfirmMenu__Callback(this, 1, v3);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Open(
        UserGameActRecoverConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  __int64 v31; // x2
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v33; // x23
  Il2CppObject *v34; // x0
  UserGameEntity_o *v35; // x23
  System_String_o *v36; // x20
  int32_t BaseAct; // w0
  __int64 v38; // x2
  __int64 v39; // x2
  Il2CppObject *v40; // x23
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x20
  UILabel_o *closeLabel; // x23
  bool v44; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v48; // x2
  System_String_o *v49; // x21
  __int64 v50; // x2
  UserGameEntity_o *v51; // x8
  Il2CppObject *v52; // x22
  Il2CppObject *v53; // x0
  Il2CppObject *v54; // x21
  System_String_o *v55; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v57; // x21
  UILabel_o *v58; // x21
  __int64 *v59; // x8
  __int64 v60; // x2
  System_String_o *v61; // x22
  BalanceConfig_c *v62; // x8
  Il2CppObject *v63; // x0
  System_Action_o *v64; // x20
  int32_t actMax; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_43506F1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_UserGameActRecoverConfirmMenu_EndOpen__);
    sub_B70694(&StringLiteral_14943/*"USER_GAME_ACT_RECOVER_STONE"*/);
    sub_B70694(&StringLiteral_14939/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/);
    sub_B70694(&StringLiteral_14933/*"USER_GAME_ACT_RECOVER_CANCEL"*/);
    sub_B70694(&StringLiteral_14942/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/);
    sub_B70694(&StringLiteral_14934/*"USER_GAME_ACT_RECOVER_CLOSE"*/);
    sub_B70694(&StringLiteral_14935/*"USER_GAME_ACT_RECOVER_DECIDE"*/);
    sub_B70694(&StringLiteral_14938/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/);
    sub_B70694(&StringLiteral_14937/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/);
    sub_B70694(&StringLiteral_12564/*"STONE_TAKE"*/);
    sub_B70694(&StringLiteral_14941/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/);
    sub_B70694(&StringLiteral_12565/*"STONE_UNIT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_14936/*"USER_GAME_ACT_RECOVER_INFO"*/);
    sub_B70694(&StringLiteral_14940/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/);
    byte_43506F1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(v20);
      this->fields.userGameEntity = SelfUserGame;
      p_userGameEntity = &this->fields.userGameEntity;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      stoneTitleLabel = this->fields.stoneTitleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12564/*"STONE_TAKE"*/, 0LL);
      if ( stoneTitleLabel )
      {
        UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
        stoneDataLabel = this->fields.stoneDataLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12565/*"STONE_UNIT"*/, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          v33 = (System_String_o *)gameObject;
          stone = userGameEntity->fields.stone;
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v31);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_14936/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                       0LL);
            v35 = *p_userGameEntity;
            if ( *p_userGameEntity )
            {
              v36 = (System_String_o *)gameObject;
              BaseAct = UserGameEntity__getBaseAct(*p_userGameEntity, v19);
              if ( BaseAct == v35->fields.actMax )
                BaseAct += v35->fields.carryOverActPoint;
              v66 = BaseAct;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v38);
              if ( *p_userGameEntity )
              {
                v40 = (Il2CppObject *)gameObject;
                actMax = (*p_userGameEntity)->fields.actMax;
                v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax, v39);
                v42 = (Il2CppObject *)System_String__Format_44753704(v36, v40, v41, 0LL);
                if ( (unsigned int)kind < 2 )
                {
                  messageLabel = this->fields.messageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_14941/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/,
                                                             0LL);
                  if ( messageLabel )
                  {
                    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                    if ( gameObject )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                        if ( gameObject )
                        {
                          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          if ( gameObject )
                          {
                            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                            if ( gameObject )
                            {
                              gameObject = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
                              if ( gameObject )
                              {
                                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                if ( gameObject )
                                {
                                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                  if ( gameObject )
                                  {
                                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                    if ( gameObject )
                                    {
                                      v44 = 0;
                                      goto LABEL_46;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  if ( (unsigned int)(kind - 2) > 2 )
                    goto LABEL_47;
                  closeLabel = this->fields.closeLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_14934/*"USER_GAME_ACT_RECOVER_CLOSE"*/,
                                                             0LL);
                  if ( closeLabel )
                  {
                    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
                    if ( gameObject )
                    {
                      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                      if ( gameObject )
                      {
                        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                        if ( gameObject )
                        {
                          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                          if ( gameObject )
                          {
                            gameObject = UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
                            if ( gameObject )
                            {
                              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                              gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                              if ( gameObject )
                              {
                                gameObject = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
                                if ( gameObject )
                                {
                                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                  if ( gameObject )
                                  {
                                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                    if ( gameObject )
                                    {
                                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                      if ( gameObject )
                                      {
                                        v44 = 1;
LABEL_46:
                                        UnityEngine_Behaviour__set_enabled(
                                          (UnityEngine_Behaviour_o *)gameObject,
                                          v44,
                                          0LL);
LABEL_47:
                                        switch ( kind )
                                        {
                                          case 0:
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
                                            if ( !gameObject )
                                              goto LABEL_84;
                                            UILabel__set_text(
                                              (UILabel_o *)gameObject,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
                                            decideLabel = this->fields.decideLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14935/*"USER_GAME_ACT_RECOVER_DECIDE"*/,
                                                                                       0LL);
                                            if ( !decideLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                            cancelLabel = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14933/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !cancelLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14936/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                                                       0LL);
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v49 = (System_String_o *)gameObject;
                                            stone = (*p_userGameEntity)->fields.actMax;
                                            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                                                       int_TypeInfo,
                                                                                       &stone,
                                                                                       v48);
                                            v51 = *p_userGameEntity;
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v52 = (Il2CppObject *)gameObject;
                                            v66 = v51->fields.actMax;
                                            v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v50);
                                            v54 = (Il2CppObject *)System_String__Format_44753704(v49, v52, v53, 0LL);
                                            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_14937/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0LL);
                                            v42 = (Il2CppObject *)System_String__Format_44753704(v55, v42, v54, 0LL);
                                            goto LABEL_81;
                                          case 1:
                                            warningLabel = this->fields.warningLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14942/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/,
                                                                                       0LL);
                                            if ( !warningLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
                                            v57 = this->fields.decideLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14943/*"USER_GAME_ACT_RECOVER_STONE"*/,
                                                                                       0LL);
                                            if ( !v57 )
                                              goto LABEL_84;
                                            UILabel__set_text(v57, (System_String_o *)gameObject, 0LL);
                                            v58 = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14933/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !v58 )
                                              goto LABEL_84;
                                            goto LABEL_80;
                                          case 2:
                                            v58 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v59 = &StringLiteral_14938/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
                                            goto LABEL_76;
                                          case 3:
                                            v58 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v59 = &StringLiteral_14940/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
                                            goto LABEL_76;
                                          case 4:
                                            v58 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v59 = &StringLiteral_14939/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_76:
                                            v61 = LocalizationManager__Get((System_String_o *)*v59, 0LL);
                                            v62 = BalanceConfig_TypeInfo;
                                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                              v62 = BalanceConfig_TypeInfo;
                                            }
                                            stone = v62->static_fields->ServantFrameMax;
                                            v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone, v60);
                                            gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                       v61,
                                                                                       v63,
                                                                                       0LL);
                                            if ( !v58 )
                                              goto LABEL_84;
LABEL_80:
                                            UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
LABEL_81:
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
                                            if ( !gameObject )
                                              goto LABEL_84;
                                            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v42, 0LL);
                                            this->fields.state = 1;
                                            v64 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                                            System_Action___ctor(
                                              v64,
                                              (Il2CppObject *)this,
                                              Method_UserGameActRecoverConfirmMenu_EndOpen__,
                                              0LL);
                                            BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
                                            break;
                                          default:
                                            goto LABEL_81;
                                        }
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_84:
    sub_B7076C(gameObject, v19);
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

  if ( (byte_43506EE & 1) == 0 )
  {
    sub_B70694(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_43506EE = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B70A60(v8);
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

  if ( (byte_43506EF & 1) == 0 )
  {
    sub_B70694(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_43506EF = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B70A60(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall UserGameActRecoverConfirmMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_434F30E & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F30E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  UserGameActRecoverConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (UserGameActRecoverConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}