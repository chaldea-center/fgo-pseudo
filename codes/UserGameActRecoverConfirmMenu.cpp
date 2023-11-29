void __fastcall UserGameActRecoverConfirmMenu___ctor(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F96E5 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F96E5 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    UserGameActRecoverConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall UserGameActRecoverConfirmMenu__Close(UserGameActRecoverConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverConfirmMenu__Close_24018132(this, 0LL, v2);
}


void __fastcall UserGameActRecoverConfirmMenu__Close_24018132(
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F96E1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UserGameActRecoverConfirmMenu_EndClose__, v10);
    byte_40F96E1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_UserGameActRecoverConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *stoneDataLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *infoLabel; // x0
  UILabel_o *warningLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40F96DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F96DF = 1;
  }
  stoneTitleLabel = this->fields.stoneTitleLabel;
  if ( !stoneTitleLabel )
    goto LABEL_12;
  UILabel__set_text(stoneTitleLabel, (System_String_o *)StringLiteral_1, 0LL);
  stoneDataLabel = this->fields.stoneDataLabel;
  if ( !stoneDataLabel )
    goto LABEL_12;
  UILabel__set_text(stoneDataLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  infoLabel = this->fields.infoLabel;
  if ( !infoLabel )
    goto LABEL_12;
  UILabel__set_text(infoLabel, (System_String_o *)StringLiteral_1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel
    || (UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserGameActRecoverConfirmMenu__OnClickCancel(
        UserGameActRecoverConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F96E3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F96E3 = 1;
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

  if ( (byte_40F96E4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F96E4 = 1;
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

  if ( (byte_40F96E2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F96E2 = 1;
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
  System_String_o *v47; // x0
  UILabel_o *stoneDataLabel; // x20
  System_String_o *v49; // x0
  struct UserGameEntity_o *userGameEntity; // x8
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  const MethodInfo *v55; // x1
  UserGameEntity_o *v56; // x23
  System_String_o *v57; // x20
  int32_t BaseAct; // w0
  __int64 v59; // x0
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x20
  UILabel_o *closeLabel; // x23
  System_String_o *v64; // x0
  UILabel_o *warningLabel; // x0
  UnityEngine_Component_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_Component_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_Component_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Behaviour_o *v72; // x0
  UnityEngine_Behaviour_o *v73; // x0
  UnityEngine_Behaviour_o *v74; // x0
  bool v75; // w1
  UILabel_o *messageLabel; // x23
  System_String_o *v77; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Behaviour_o *v84; // x0
  UnityEngine_Behaviour_o *v85; // x0
  UILabel_o *v86; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v88; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v90; // x0
  System_String_o *v91; // x0
  System_String_o *v92; // x21
  __int64 v93; // x0
  UserGameEntity_o *v94; // x8
  Il2CppObject *v95; // x22
  Il2CppObject *v96; // x0
  Il2CppObject *v97; // x21
  System_String_o *v98; // x0
  UILabel_o *v99; // x21
  System_String_o *v100; // x0
  UILabel_o *v101; // x21
  System_String_o *v102; // x0
  UILabel_o *v103; // x21
  System_String_o *v104; // x0
  __int64 *v105; // x8
  System_String_o *v106; // x22
  BalanceConfig_c *v107; // x8
  Il2CppObject *v108; // x0
  UILabel_o *infoLabel; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  System_Action_o *v114; // x20
  int32_t actMax; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v116; // [xsp+8h] [xbp-48h] BYREF
  int32_t stone; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F96E0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&BalanceConfig_TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_UserGameActRecoverConfirmMenu_EndOpen__, v15);
    sub_B16FFC(&StringLiteral_14697, v16);
    sub_B16FFC(&StringLiteral_14693, v17);
    sub_B16FFC(&StringLiteral_14687, v18);
    sub_B16FFC(&StringLiteral_14696, v19);
    sub_B16FFC(&StringLiteral_14688, v20);
    sub_B16FFC(&StringLiteral_14689, v21);
    sub_B16FFC(&StringLiteral_14692, v22);
    sub_B16FFC(&StringLiteral_14691, v23);
    sub_B16FFC(&StringLiteral_12340, v24);
    sub_B16FFC(&StringLiteral_14695, v25);
    sub_B16FFC(&StringLiteral_12341, v26);
    sub_B16FFC(&StringLiteral_1, v27);
    sub_B16FFC(&StringLiteral_14690, v28);
    sub_B16FFC(&StringLiteral_14694, v29);
    byte_40F96E0 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
      sub_B16F98(
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
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12340, 0LL);
      if ( stoneTitleLabel )
      {
        UILabel__set_text(stoneTitleLabel, v47, 0LL);
        stoneDataLabel = this->fields.stoneDataLabel;
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12341, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          v51 = v49;
          stone = userGameEntity->fields.stone;
          v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
          v53 = System_String__Format(v51, v52, 0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, v53, 0LL);
            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_14690, 0LL);
            v56 = *p_userGameEntity;
            if ( *p_userGameEntity )
            {
              v57 = v54;
              BaseAct = UserGameEntity__getBaseAct(*p_userGameEntity, v55);
              if ( BaseAct == v56->fields.actMax )
                BaseAct += v56->fields.carryOverActPoint;
              v116 = BaseAct;
              v59 = j_il2cpp_value_box_0(int_TypeInfo, &v116);
              if ( *p_userGameEntity )
              {
                v60 = (Il2CppObject *)v59;
                actMax = (*p_userGameEntity)->fields.actMax;
                v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &actMax);
                v62 = (Il2CppObject *)System_String__Format_43739268(v57, v60, v61, 0LL);
                if ( (unsigned int)kind < 2 )
                {
                  messageLabel = this->fields.messageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_14695, 0LL);
                  if ( messageLabel )
                  {
                    UILabel__set_text(messageLabel, v77, 0LL);
                    decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
                    if ( decideButton )
                    {
                      v79 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
                      if ( v79 )
                      {
                        UnityEngine_GameObject__SetActive(v79, 1, 0LL);
                        cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
                        if ( cancelButton )
                        {
                          v81 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
                          if ( v81 )
                          {
                            UnityEngine_GameObject__SetActive(v81, 1, 0LL);
                            closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
                            if ( closeButton )
                            {
                              v83 = UnityEngine_Component__get_gameObject(closeButton, 0LL);
                              if ( v83 )
                              {
                                UnityEngine_GameObject__SetActive(v83, 0, 0LL);
                                v84 = (UnityEngine_Behaviour_o *)this->fields.decideButton;
                                if ( v84 )
                                {
                                  UnityEngine_Behaviour__set_enabled(v84, 1, 0LL);
                                  v85 = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
                                  if ( v85 )
                                  {
                                    UnityEngine_Behaviour__set_enabled(v85, 1, 0LL);
                                    v74 = (UnityEngine_Behaviour_o *)this->fields.closeButton;
                                    if ( v74 )
                                    {
                                      v75 = 0;
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
                  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_14688, 0LL);
                  if ( closeLabel )
                  {
                    UILabel__set_text(closeLabel, v64, 0LL);
                    warningLabel = this->fields.warningLabel;
                    if ( warningLabel )
                    {
                      UILabel__set_text(warningLabel, (System_String_o *)StringLiteral_1, 0LL);
                      v66 = (UnityEngine_Component_o *)this->fields.decideButton;
                      if ( v66 )
                      {
                        v67 = UnityEngine_Component__get_gameObject(v66, 0LL);
                        if ( v67 )
                        {
                          UnityEngine_GameObject__SetActive(v67, 0, 0LL);
                          v68 = (UnityEngine_Component_o *)this->fields.cancelButton;
                          if ( v68 )
                          {
                            v69 = UnityEngine_Component__get_gameObject(v68, 0LL);
                            if ( v69 )
                            {
                              UnityEngine_GameObject__SetActive(v69, 0, 0LL);
                              v70 = (UnityEngine_Component_o *)this->fields.closeButton;
                              if ( v70 )
                              {
                                v71 = UnityEngine_Component__get_gameObject(v70, 0LL);
                                if ( v71 )
                                {
                                  UnityEngine_GameObject__SetActive(v71, 1, 0LL);
                                  v72 = (UnityEngine_Behaviour_o *)this->fields.decideButton;
                                  if ( v72 )
                                  {
                                    UnityEngine_Behaviour__set_enabled(v72, 0, 0LL);
                                    v73 = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
                                    if ( v73 )
                                    {
                                      UnityEngine_Behaviour__set_enabled(v73, 0, 0LL);
                                      v74 = (UnityEngine_Behaviour_o *)this->fields.closeButton;
                                      if ( v74 )
                                      {
                                        v75 = 1;
LABEL_46:
                                        UnityEngine_Behaviour__set_enabled(v74, v75, 0LL);
LABEL_47:
                                        switch ( kind )
                                        {
                                          case 0:
                                            v86 = this->fields.warningLabel;
                                            if ( !v86 )
                                              goto LABEL_84;
                                            UILabel__set_text(v86, (System_String_o *)StringLiteral_1, 0LL);
                                            decideLabel = this->fields.decideLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v88 = LocalizationManager__Get((System_String_o *)StringLiteral_14689, 0LL);
                                            if ( !decideLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(decideLabel, v88, 0LL);
                                            cancelLabel = this->fields.cancelLabel;
                                            v90 = LocalizationManager__Get((System_String_o *)StringLiteral_14687, 0LL);
                                            if ( !cancelLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(cancelLabel, v90, 0LL);
                                            v91 = LocalizationManager__Get((System_String_o *)StringLiteral_14690, 0LL);
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v92 = v91;
                                            stone = (*p_userGameEntity)->fields.actMax;
                                            v93 = j_il2cpp_value_box_0(int_TypeInfo, &stone);
                                            v94 = *p_userGameEntity;
                                            if ( !*p_userGameEntity )
                                              goto LABEL_84;
                                            v95 = (Il2CppObject *)v93;
                                            v116 = v94->fields.actMax;
                                            v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
                                            v97 = (Il2CppObject *)System_String__Format_43739268(v92, v95, v96, 0LL);
                                            v98 = LocalizationManager__Get((System_String_o *)StringLiteral_14691, 0LL);
                                            v62 = (Il2CppObject *)System_String__Format_43739268(v98, v62, v97, 0LL);
                                            goto LABEL_81;
                                          case 1:
                                            v99 = this->fields.warningLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v100 = LocalizationManager__Get((System_String_o *)StringLiteral_14696, 0LL);
                                            if ( !v99 )
                                              goto LABEL_84;
                                            UILabel__set_text(v99, v100, 0LL);
                                            v101 = this->fields.decideLabel;
                                            v102 = LocalizationManager__Get((System_String_o *)StringLiteral_14697, 0LL);
                                            if ( !v101 )
                                              goto LABEL_84;
                                            UILabel__set_text(v101, v102, 0LL);
                                            v103 = this->fields.cancelLabel;
                                            v104 = LocalizationManager__Get((System_String_o *)StringLiteral_14687, 0LL);
                                            if ( !v103 )
                                              goto LABEL_84;
                                            goto LABEL_80;
                                          case 2:
                                            v103 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v105 = &StringLiteral_14692;
                                            goto LABEL_76;
                                          case 3:
                                            v103 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v105 = &StringLiteral_14694;
                                            goto LABEL_76;
                                          case 4:
                                            v103 = this->fields.messageLabel;
                                            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            }
                                            v105 = &StringLiteral_14693;
LABEL_76:
                                            v106 = LocalizationManager__Get((System_String_o *)*v105, 0LL);
                                            v107 = BalanceConfig_TypeInfo;
                                            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                              && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                              v107 = BalanceConfig_TypeInfo;
                                            }
                                            stone = v107->static_fields->ServantFrameMax;
                                            v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &stone);
                                            v104 = System_String__Format(v106, v108, 0LL);
                                            if ( !v103 )
                                              goto LABEL_84;
LABEL_80:
                                            UILabel__set_text(v103, v104, 0LL);
LABEL_81:
                                            infoLabel = this->fields.infoLabel;
                                            if ( !infoLabel )
                                              goto LABEL_84;
                                            UILabel__set_text(infoLabel, (System_String_o *)v62, 0LL);
                                            this->fields.state = 1;
                                            v114 = (System_Action_o *)sub_B170CC(
                                                                        System_Action_TypeInfo,
                                                                        v110,
                                                                        v111,
                                                                        v112,
                                                                        v113);
                                            System_Action___ctor(
                                              v114,
                                              (Il2CppObject *)this,
                                              Method_UserGameActRecoverConfirmMenu_EndOpen__,
                                              0LL);
                                            BaseDialog__Open((BaseDialog_o *)this, v114, 0, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40F96DD & 1) == 0 )
  {
    sub_B16FFC(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40F96DD = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B173C8(v8);
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

  if ( (byte_40F96DE & 1) == 0 )
  {
    sub_B16FFC(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40F96DE = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverConfirmMenu_o *)sub_B173C8(v8);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7986 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7986 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall UserGameActRecoverConfirmMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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