void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7130 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7130 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_22498144(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_22498144(
        UserGameActRecoverConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E712C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserGameActRecoverConfirmMenu_EndClose__, v10, v11, v12);
    byte_42E712C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__EndOpen(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall UserGameActRecoverConfirmMenu__Init(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *stoneTitleLabel; // x0

  if ( (byte_42E712A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E712A = 1;
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
    sub_B5D69C(stoneTitleLabel, method);
  }
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickCancel(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E712E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E712E = 1;
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
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickClose(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E712F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E712F = 1;
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
    UserGameActRecoverConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickDecide(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E712D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E712D = 1;
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o **p_userGameEntity; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UILabel_o *stoneTitleLabel; // x20
  UILabel_o *stoneDataLabel; // x20
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v86; // x23
  Il2CppObject *v87; // x0
  UserGameEntity_o *v88; // x23
  System_String_o *v89; // x20
  int32_t BaseAct; // w0
  Il2CppObject *v91; // x23
  Il2CppObject *v92; // x0
  Il2CppObject *v93; // x20
  UILabel_o *closeLabel; // x23
  bool v95; // w1
  UILabel_o *messageLabel; // x23
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_o *v99; // x21
  UserGameEntity_o *v100; // x8
  Il2CppObject *v101; // x22
  Il2CppObject *v102; // x0
  Il2CppObject *v103; // x21
  System_String_o *v104; // x0
  UILabel_o *warningLabel; // x21
  UILabel_o *v106; // x21
  UILabel_o *v107; // x21
  __int64 *v108; // x8
  System_String_o *v109; // x22
  BalanceConfig_c *v110; // x8
  Il2CppObject *v111; // x0
  System_Action_o *v112; // x20
  int32_t actMax; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v114; // [xsp+8h] [xbp-48h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E712B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)stoneShopEntity, callback);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UserGameActRecoverConfirmMenu_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_14915/*"USER_GAME_ACT_RECOVER_STONE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_14911/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_14905/*"USER_GAME_ACT_RECOVER_CANCEL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_14914/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_14906/*"USER_GAME_ACT_RECOVER_CLOSE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_14907/*"USER_GAME_ACT_RECOVER_DECIDE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_14910/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_14909/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12543/*"STONE_TAKE"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_14913/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12544/*"STONE_UNIT"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1/*""*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_14908/*"USER_GAME_ACT_RECOVER_INFO"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_14912/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/, v63, v64, v65);
    byte_42E712B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(v74);
      this->fields.userGameEntity = SelfUserGame;
      p_userGameEntity = &this->fields.userGameEntity;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      stoneTitleLabel = this->fields.stoneTitleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12543/*"STONE_TAKE"*/, 0LL);
      if ( stoneTitleLabel )
      {
        UILabel__set_text(stoneTitleLabel, (System_String_o *)gameObject, 0LL);
        stoneDataLabel = this->fields.stoneDataLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12544/*"STONE_UNIT"*/, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          v86 = (System_String_o *)gameObject;
          stone = userGameEntity->fields.stone;
          v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v86, v87, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_14908/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                       0LL);
            v88 = *p_userGameEntity;
            if ( *p_userGameEntity )
            {
              v89 = (System_String_o *)gameObject;
              BaseAct = UserGameEntity__getBaseAct(*p_userGameEntity, v73);
              if ( BaseAct == v88->fields.actMax )
                BaseAct += v88->fields.carryOverActPoint;
              v114 = BaseAct;
              gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
              if ( *p_userGameEntity )
              {
                v91 = (Il2CppObject *)gameObject;
                actMax = (*p_userGameEntity)->fields.actMax;
                v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax);
                v93 = (Il2CppObject *)System_String__Format_44573324(v89, v91, v92, 0LL);
                if ( (unsigned int)kind < 2 )
                {
                  messageLabel = this->fields.messageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_14913/*"USER_GAME_ACT_RECOVER_MESSAGE_START"*/,
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
                                      v95 = 0;
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
                                                             (System_String_o *)StringLiteral_14906/*"USER_GAME_ACT_RECOVER_CLOSE"*/,
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
                                        v95 = 1;
LABEL_46:
                                        UnityEngine_Behaviour__set_enabled(
                                          (UnityEngine_Behaviour_o *)gameObject,
                                          v95,
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
                                                                                       (System_String_o *)StringLiteral_14907/*"USER_GAME_ACT_RECOVER_DECIDE"*/,
                                                                                       0LL);
                                            if ( !decideLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                            cancelLabel = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14905/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !cancelLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14908/*"USER_GAME_ACT_RECOVER_INFO"*/,
                                                                                       0LL);
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v99 = (System_String_o *)gameObject;
                                            stone = (*p_userGameEntity)->fields.actMax;
                                            gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                                                       int_TypeInfo,
                                                                                       &stone);
                                            v100 = *p_userGameEntity;
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v101 = (Il2CppObject *)gameObject;
                                            v114 = v100->fields.actMax;
                                            v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
                                            v103 = (Il2CppObject *)System_String__Format_44573324(v99, v101, v102, 0LL);
                                            v104 = LocalizationManager__Get((System_String_o *)StringLiteral_14909/*"USER_GAME_ACT_RECOVER_INFO_BEFORE_AFTER"*/, 0LL);
                                            v93 = (Il2CppObject *)System_String__Format_44573324(v104, v93, v103, 0LL);
                                            goto LABEL_81;
                                          case 1:
                                            warningLabel = this->fields.warningLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14914/*"USER_GAME_ACT_RECOVER_REQUEST_STONE_MESSAGE"*/,
                                                                                       0LL);
                                            if ( !warningLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0LL);
                                            v106 = this->fields.decideLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14915/*"USER_GAME_ACT_RECOVER_STONE"*/,
                                                                                       0LL);
                                            if ( !v106 )
                                              goto LABEL_84;
                                            UILabel__set_text(v106, (System_String_o *)gameObject, 0LL);
                                            v107 = this->fields.cancelLabel;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_14905/*"USER_GAME_ACT_RECOVER_CANCEL"*/,
                                                                                       0LL);
                                            if ( !v107 )
                                              goto LABEL_84;
                                            goto LABEL_80;
                                          case 2:
                                            v107 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v108 = &StringLiteral_14910/*"USER_GAME_ACT_RECOVER_MESSAGE_END"*/;
                                            goto LABEL_76;
                                          case 3:
                                            v107 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v108 = &StringLiteral_14912/*"USER_GAME_ACT_RECOVER_MESSAGE_MAX_ACT"*/;
                                            goto LABEL_76;
                                          case 4:
                                            v107 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v108 = &StringLiteral_14911/*"USER_GAME_ACT_RECOVER_MESSAGE_INFO_NONE"*/;
LABEL_76:
                                            v109 = LocalizationManager__Get((System_String_o *)*v108, 0LL);
                                            v110 = BalanceConfig_TypeInfo;
                                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                              v110 = BalanceConfig_TypeInfo;
                                            }
                                            stone = v110->static_fields->ServantFrameMax;
                                            v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
                                            gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                       v109,
                                                                                       v111,
                                                                                       0LL);
                                            if ( !v107 )
                                              goto LABEL_84;
LABEL_80:
                                            UILabel__set_text(v107, (System_String_o *)gameObject, 0LL);
LABEL_81:
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
                                            if ( !gameObject )
                                              goto LABEL_84;
                                            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)v93, 0LL);
                                            this->fields.state = 1;
                                            v112 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                            System_Action___ctor(
                                              v112,
                                              (Il2CppObject *)this,
                                              Method_UserGameActRecoverConfirmMenu_EndOpen__,
                                              0LL);
                                            BaseDialog__Open((BaseDialog_o *)this, v112, 0, 0LL);
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
    sub_B5D69C(gameObject, v73);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__add_callbackFunc(
        UserGameActRecoverConfirmMenu_o *this,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserGameActRecoverConfirmMenu_o *v12; // x0
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7128 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7128 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (UserGameActRecoverConfirmMenu_CallbackFunc_c *)v9->klass != UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserGameActRecoverConfirmMenu_o *)sub_B5D990(v9);
  UserGameActRecoverConfirmMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall UserGameActRecoverConfirmMenu__remove_callbackFunc(
        UserGameActRecoverConfirmMenu_o *this,
        UserGameActRecoverConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct UserGameActRecoverConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserGameActRecoverConfirmMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E7129 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7129 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (UserGameActRecoverConfirmMenu_CallbackFunc_c *)v9->klass != UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserGameActRecoverConfirmMenu_o *)sub_B5D990(v9);
  UserGameActRecoverConfirmMenu__Init(v12, v13);
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
  sub_B5D560(
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
  if ( (byte_42E7000 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7000 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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