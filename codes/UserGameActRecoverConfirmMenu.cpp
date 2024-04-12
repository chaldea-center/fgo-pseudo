void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF38 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AEF38 = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_23208660(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_23208660(
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

  if ( (byte_42AEF34 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserGameActRecoverConfirmMenu_EndClose__);
    byte_42AEF34 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AEF32 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEF32 = 1;
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
    sub_B52A5C(stoneTitleLabel, method);
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

  if ( (byte_42AEF36 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEF36 = 1;
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

  if ( (byte_42AEF37 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEF37 = 1;
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

  if ( (byte_42AEF35 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEF35 = 1;
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
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v32; // x23
  Il2CppObject *v33; // x0
  UserGameEntity_o *v34; // x23
  System_String_o *v35; // x20
  int32_t BaseAct; // w0
  Il2CppObject *v37; // x23
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x20
  UILabel_o *closeLabel; // x23
  bool v41; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v45; // x21
  UserGameEntity_o *v46; // x8
  Il2CppObject *v47; // x22
  Il2CppObject *v48; // x0
  Il2CppObject *v49; // x21
  System_String_o *v50; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v52; // x21
  UILabel_o *v53; // x21
  __int64 *v54; // x8
  System_String_o *v55; // x22
  BalanceConfig_c *v56; // x8
  Il2CppObject *v57; // x0
  System_Action_o *v58; // x20
  int32_t actMax; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AEF33 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_UserGameActRecoverConfirmMenu_EndOpen__);
    sub_B52984(&StringLiteral_14856/*"USER_GAME_ACT_RECOVER_STONE"*/);
    sub_B52984(&StringLiteral_14852/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/);
    sub_B52984(&StringLiteral_14846/*"USER_GAME_ACT_RECOVER_CANCEL"*/);
    sub_B52984(&StringLiteral_14855/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/);
    sub_B52984(&StringLiteral_14847/*"USER_GAME_ACT_RECOVER_CLOSE"*/);
    sub_B52984(&StringLiteral_14848/*"USER_GAME_ACT_RECOVER_DECIDE"*/);
    sub_B52984(&StringLiteral_14851/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/);
    sub_B52984(&StringLiteral_14850/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/);
    sub_B52984(&StringLiteral_12484/*"STONE_TAKE"*/);
    sub_B52984(&StringLiteral_14854/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/);
    sub_B52984(&StringLiteral_12485/*"STONE_UNIT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_14849/*"USER_GAME_ACT_RECOVER_INFO"*/);
    sub_B52984(&StringLiteral_14853/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/);
    byte_42AEF33 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B52920(
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
      sub_B52920(
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"STONE_TAKE"*/, 0LL);
      if ( stoneTitleLabel )
      {
        UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
        stoneDataLabel = this->fields.stoneDataLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"STONE_UNIT"*/, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          v32 = (System_String_o *)gameObject;
          stone = userGameEntity->fields.stone;
          v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v32, v33, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_14849/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                       0LL);
            v34 = *p_userGameEntity;
            if ( *p_userGameEntity )
            {
              v35 = (System_String_o *)gameObject;
              BaseAct = UserGameEntity__getBaseAct(*p_userGameEntity, v19);
              if ( BaseAct == v34->fields.actMax )
                BaseAct += v34->fields.carryOverActPoint;
              v60 = BaseAct;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
              if ( *p_userGameEntity )
              {
                v37 = (Il2CppObject *)gameObject;
                actMax = (*p_userGameEntity)->fields.actMax;
                v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax);
                v39 = (Il2CppObject *)System_String__Format_44563852(v35, v37, v38, 0LL);
                if ( (unsigned int)kind < 2 )
                {
                  messageLabel = this->fields.messageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_14854/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/,
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
                                      v41 = 0;
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
                                                             (System_String_o *)StringLiteral_14847/*"USER_GAME_ACT_RECOVER_CLOSE"*/,
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
                                        v41 = 1;
LABEL_46:
                                        UnityEngine_Behaviour__set_enabled(
                                          (UnityEngine_Behaviour_o *)gameObject,
                                          v41,
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
                                                                                       (System_String_o *)StringLiteral_14848/*"USER_GAME_ACT_RECOVER_DECIDE"*/,
                                                                                       0LL);
                                            if ( !decideLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                            cancelLabel = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14846/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !cancelLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14849/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                                                       0LL);
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v45 = (System_String_o *)gameObject;
                                            stone = (*p_userGameEntity)->fields.actMax;
                                            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                                                       int_TypeInfo,
                                                                                       &stone);
                                            v46 = *p_userGameEntity;
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v47 = (Il2CppObject *)gameObject;
                                            v60 = v46->fields.actMax;
                                            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
                                            v49 = (Il2CppObject *)System_String__Format_44563852(v45, v47, v48, 0LL);
                                            v50 = LocalizationManager__Get((System_String_o *)StringLiteral_14850/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0LL);
                                            v39 = (Il2CppObject *)System_String__Format_44563852(v50, v39, v49, 0LL);
                                            goto LABEL_81;
                                          case 1:
                                            warningLabel = this->fields.warningLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14855/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/,
                                                                                       0LL);
                                            if ( !warningLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
                                            v52 = this->fields.decideLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14856/*"USER_GAME_ACT_RECOVER_STONE"*/,
                                                                                       0LL);
                                            if ( !v52 )
                                              goto LABEL_84;
                                            UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
                                            v53 = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14846/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !v53 )
                                              goto LABEL_84;
                                            goto LABEL_80;
                                          case 2:
                                            v53 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v54 = &StringLiteral_14851/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
                                            goto LABEL_76;
                                          case 3:
                                            v53 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v54 = &StringLiteral_14853/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
                                            goto LABEL_76;
                                          case 4:
                                            v53 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v54 = &StringLiteral_14852/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_76:
                                            v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
                                            v56 = BalanceConfig_TypeInfo;
                                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                              v56 = BalanceConfig_TypeInfo;
                                            }
                                            stone = v56->static_fields->ServantFrameMax;
                                            v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
                                            gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                       v55,
                                                                                       v57,
                                                                                       0LL);
                                            if ( !v53 )
                                              goto LABEL_84;
LABEL_80:
                                            UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
LABEL_81:
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
                                            if ( !gameObject )
                                              goto LABEL_84;
                                            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v39, 0LL);
                                            this->fields.state = 1;
                                            v58 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                            System_Action___ctor(
                                              v58,
                                              (Il2CppObject *)this,
                                              Method_UserGameActRecoverConfirmMenu_EndOpen__,
                                              0LL);
                                            BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0LL);
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
    sub_B52A5C(gameObject, v19);
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

  if ( (byte_42AEF30 & 1) == 0 )
  {
    sub_B52984(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_42AEF30 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B52D50(v8);
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

  if ( (byte_42AEF31 & 1) == 0 )
  {
    sub_B52984(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    byte_42AEF31 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B52D50(v8);
  UserGameActRecoverConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
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
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_42AE58D & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AE58D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  UserGameActRecoverConfirmMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (UserGameActRecoverConfirmMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}