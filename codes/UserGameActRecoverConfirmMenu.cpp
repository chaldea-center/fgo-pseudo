void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_421371C & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421371C = 1;
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_22581564(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_22581564(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_4213718 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_UserGameActRecoverConfirmMenu_EndClose__, v10);
    byte_4213718 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D840(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4213716 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4213716 = 1;
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
    sub_B0D97C(stoneTitleLabel);
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

  if ( (byte_421371A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421371A = 1;
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

  if ( (byte_421371B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421371B = 1;
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

  if ( (byte_4213719 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213719 = 1;
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v49; // x23
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x1
  UserGameEntity_o *v52; // x23
  System_String_o *v53; // x20
  int32_t BaseAct; // w0
  Il2CppObject *v55; // x23
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x20
  UILabel_o *closeLabel; // x23
  bool v59; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v63; // x21
  UserGameEntity_o *v64; // x8
  Il2CppObject *v65; // x22
  Il2CppObject *v66; // x0
  Il2CppObject *v67; // x21
  System_String_o *v68; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v70; // x21
  UILabel_o *v71; // x21
  __int64 *v72; // x8
  System_String_o *v73; // x22
  BalanceConfig_c *v74; // x8
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  System_Action_o *v78; // x20
  int32_t actMax; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v80; // [xsp+8h] [xbp-48h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4213717 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UserGameActRecoverConfirmMenu_EndOpen__, v15);
    sub_B0D8A4(&StringLiteral_14803/*"USER_GAME_ACT_RECOVER_STONE"*/, v16);
    sub_B0D8A4(&StringLiteral_14799/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/, v17);
    sub_B0D8A4(&StringLiteral_14793/*"USER_GAME_ACT_RECOVER_CANCEL"*/, v18);
    sub_B0D8A4(&StringLiteral_14802/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, v19);
    sub_B0D8A4(&StringLiteral_14794/*"USER_GAME_ACT_RECOVER_CLOSE"*/, v20);
    sub_B0D8A4(&StringLiteral_14795/*"USER_GAME_ACT_RECOVER_DECIDE"*/, v21);
    sub_B0D8A4(&StringLiteral_14798/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/, v22);
    sub_B0D8A4(&StringLiteral_14797/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, v23);
    sub_B0D8A4(&StringLiteral_12433/*"STONE_TAKE"*/, v24);
    sub_B0D8A4(&StringLiteral_14801/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, v25);
    sub_B0D8A4(&StringLiteral_12434/*"STONE_UNIT"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    sub_B0D8A4(&StringLiteral_14796/*"USER_GAME_ACT_RECOVER_INFO"*/, v28);
    sub_B0D8A4(&StringLiteral_14800/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/, v29);
    byte_4213717 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(v37);
      this->fields.userGameEntity = SelfUserGame;
      p_userGameEntity = &this->fields.userGameEntity;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      stoneTitleLabel = this->fields.stoneTitleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"STONE_TAKE"*/, 0LL);
      if ( stoneTitleLabel )
      {
        UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
        stoneDataLabel = this->fields.stoneDataLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"STONE_UNIT"*/, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          v49 = (System_String_o *)gameObject;
          stone = userGameEntity->fields.stone;
          v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v49, v50, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_14796/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                       0LL);
            v52 = *p_userGameEntity;
            if ( *p_userGameEntity )
            {
              v53 = (System_String_o *)gameObject;
              BaseAct = UserGameEntity__getBaseAct(*p_userGameEntity, v51);
              if ( BaseAct == v52->fields.actMax )
                BaseAct += v52->fields.carryOverActPoint;
              v80 = BaseAct;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
              if ( *p_userGameEntity )
              {
                v55 = (Il2CppObject *)gameObject;
                actMax = (*p_userGameEntity)->fields.actMax;
                v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax);
                v57 = (Il2CppObject *)System_String__Format_43845440(v53, v55, v56, 0LL);
                if ( (unsigned int)kind < 2 )
                {
                  messageLabel = this->fields.messageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_14801/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/,
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
                                      v59 = 0;
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
                                                             (System_String_o *)StringLiteral_14794/*"USER_GAME_ACT_RECOVER_CLOSE"*/,
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
                                        v59 = 1;
LABEL_46:
                                        UnityEngine_Behaviour__set_enabled(
                                          (UnityEngine_Behaviour_o *)gameObject,
                                          v59,
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
                                                                                       (System_String_o *)StringLiteral_14795/*"USER_GAME_ACT_RECOVER_DECIDE"*/,
                                                                                       0LL);
                                            if ( !decideLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                            cancelLabel = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14793/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !cancelLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14796/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                                                       0LL);
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v63 = (System_String_o *)gameObject;
                                            stone = (*p_userGameEntity)->fields.actMax;
                                            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                                                       int_TypeInfo,
                                                                                       &stone);
                                            v64 = *p_userGameEntity;
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v65 = (Il2CppObject *)gameObject;
                                            v80 = v64->fields.actMax;
                                            v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
                                            v67 = (Il2CppObject *)System_String__Format_43845440(v63, v65, v66, 0LL);
                                            v68 = LocalizationManager__Get((System_String_o *)StringLiteral_14797/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0LL);
                                            v57 = (Il2CppObject *)System_String__Format_43845440(v68, v57, v67, 0LL);
                                            goto LABEL_81;
                                          case 1:
                                            warningLabel = this->fields.warningLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14802/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/,
                                                                                       0LL);
                                            if ( !warningLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
                                            v70 = this->fields.decideLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14803/*"USER_GAME_ACT_RECOVER_STONE"*/,
                                                                                       0LL);
                                            if ( !v70 )
                                              goto LABEL_84;
                                            UILabel__set_text(v70, (System_String_o *)gameObject, 0LL);
                                            v71 = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14793/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !v71 )
                                              goto LABEL_84;
                                            goto LABEL_80;
                                          case 2:
                                            v71 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v72 = &StringLiteral_14798/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
                                            goto LABEL_76;
                                          case 3:
                                            v71 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v72 = &StringLiteral_14800/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
                                            goto LABEL_76;
                                          case 4:
                                            v71 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v72 = &StringLiteral_14799/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_76:
                                            v73 = LocalizationManager__Get((System_String_o *)*v72, 0LL);
                                            v74 = BalanceConfig_TypeInfo;
                                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                              v74 = BalanceConfig_TypeInfo;
                                            }
                                            stone = v74->static_fields->ServantFrameMax;
                                            v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
                                            gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                       v73,
                                                                                       v75,
                                                                                       0LL);
                                            if ( !v71 )
                                              goto LABEL_84;
LABEL_80:
                                            UILabel__set_text(v71, (System_String_o *)gameObject, 0LL);
LABEL_81:
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
                                            if ( !gameObject )
                                              goto LABEL_84;
                                            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v57, 0LL);
                                            this->fields.state = 1;
                                            v78 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v76, v77);
                                            System_Action___ctor(
                                              v78,
                                              (Il2CppObject *)this,
                                              Method_UserGameActRecoverConfirmMenu_EndOpen__,
                                              0LL);
                                            BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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
    sub_B0D97C(gameObject);
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

  if ( (byte_4213714 & 1) == 0 )
  {
    sub_B0D8A4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4213714 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B0DC70(v8);
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

  if ( (byte_4213715 & 1) == 0 )
  {
    sub_B0D8A4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4213715 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B0DC70(v8);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4212625 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4212625 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}