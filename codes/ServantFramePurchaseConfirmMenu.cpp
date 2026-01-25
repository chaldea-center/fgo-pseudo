void ServantFramePurchaseConfirmMenu___ctor(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8D85 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE8D85 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantFramePurchaseConfirmMenu__Callback(
        ServantFramePurchaseConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o *v4; // x20
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C7BA8C(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void ServantFramePurchaseConfirmMenu__Close(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFramePurchaseConfirmMenu__Close_32727856(this, 0, v2);
}


void ServantFramePurchaseConfirmMenu__Close_32727856(
        ServantFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE8D80 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ServantFramePurchaseConfirmMenu_EndClose__);
    byte_4CE8D80 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFramePurchaseConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void ServantFramePurchaseConfirmMenu__EndClose(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  ServantFramePurchaseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C7BA8C(&this->fields.closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantFramePurchaseConfirmMenu__EndOpen(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ServantFramePurchaseConfirmMenu__Init(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4CE8D7E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8D7E = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.infoLabel1;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.infoLabel2;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.infoLabel3;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.numberLabel1;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.numberLabel2;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.numberLabel3;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.closeLabel) == 0) )
  {
LABEL_15:
    sub_1C7BD40(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantFramePurchaseConfirmMenu__OnClickCancel(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE8D82 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ServantFramePurchaseConfirmMenu_OnClickCancel__);
    byte_4CE8D82 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ServantFramePurchaseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantFramePurchaseConfirmMenu__Callback(this, 0, v5);
  }
}


void ServantFramePurchaseConfirmMenu__OnClickClose(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE8D83 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ServantFramePurchaseConfirmMenu_OnClickClose__);
    byte_4CE8D83 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_ServantFramePurchaseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantFramePurchaseConfirmMenu__Callback(this, 0, v5);
  }
}


void ServantFramePurchaseConfirmMenu__OnClickDecide(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t kind; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4CE8D81 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ServantFramePurchaseConfirmMenu_OnClickDecide__);
    byte_4CE8D81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_ServantFramePurchaseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_ServantFramePurchaseConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind == 0), 0, 0);
    ServantFramePurchaseConfirmMenu__Callback(this, 1, v6);
  }
}


void ServantFramePurchaseConfirmMenu__OnEnable(ServantFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4CE8D84 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4653/*"ConfirmWindow/CloseButton"*/);
    sub_1C7BAE8(&StringLiteral_4652/*"ConfirmWindow/CancelButton"*/);
    byte_4CE8D84 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_4652/*"ConfirmWindow/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(v4, (System_String_o *)StringLiteral_4653/*"ConfirmWindow/CloseButton"*/, 0);
}


void ServantFramePurchaseConfirmMenu__Open(
        ServantFramePurchaseConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UILabel_o *titleLabel; // x21
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  UILabel_o *infoLabel3; // x21
  UILabel_o *numberLabel3; // x21
  struct UserGameEntity_o *v17; // x8
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  UILabel_o *closeLabel; // x21
  bool v21; // w1
  UILabel_o *messageLabel; // x21
  System_String_o *v23; // x22
  BalanceConfig_c *v24; // x8
  Il2CppObject *v25; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  struct UserGameEntity_o *v29; // x8
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  UILabel_o *numberLabel2; // x21
  struct UserGameEntity_o *v33; // x8
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *v39; // x20
  UILabel_o *v40; // x20
  __int64 *v41; // x8
  System_String_o *v42; // x21
  BalanceConfig_c *v43; // x8
  Il2CppObject *v44; // x0
  UILabel_o *v45; // x20
  System_String_o *v46; // x21
  BalanceConfig_c *v47; // x8
  Il2CppObject *v48; // x0
  System_Action_o *v49; // x20
  int v50; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t svtKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t ServantFrameMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE8D7F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_ServantFramePurchaseConfirmMenu_EndOpen__);
    sub_1C7BAE8(&StringLiteral_11698/*"SERVANT_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_11692/*"SERVANT_FRAME_PURCHASE_MESSAGE_END"*/);
    sub_1C7BAE8(&StringLiteral_11700/*"SERVANT_FRAME_PURCHASE_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11696/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/);
    sub_1C7BAE8(&StringLiteral_11695/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/);
    sub_1C7BAE8(&StringLiteral_11697/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/);
    sub_1C7BAE8(&StringLiteral_11690/*"SERVANT_FRAME_PURCHASE_INFO1"*/);
    sub_1C7BAE8(&StringLiteral_11691/*"SERVANT_FRAME_PURCHASE_INFO2"*/);
    sub_1C7BAE8(&StringLiteral_11687/*"SERVANT_FRAME_PURCHASE_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11688/*"SERVANT_FRAME_PURCHASE_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_11694/*"SERVANT_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/);
    sub_1C7BAE8(&StringLiteral_11689/*"SERVANT_FRAME_PURCHASE_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_11693/*"SERVANT_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_11699/*"SERVANT_FRAME_PURCHASE_STONE"*/);
    byte_4CE8D7F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1C7BA8C(&this->fields.stoneShopEntity, stoneShopEntity);
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      this->fields.userGameEntity = SelfUserGame;
      sub_1C7BA8C(&this->fields.userGameEntity, SelfUserGame);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11700/*"SERVANT_FRAME_PURCHASE_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(userGameEntity->fields.stone, 0);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
            if ( (unsigned int)kind < 2 )
            {
              messageLabel = this->fields.messageLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11695/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, 0);
              v24 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v24 = BalanceConfig_TypeInfo;
              }
              ServantFrameMax = v24->static_fields->ServantFrameMax;
              v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantFrameMax);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v23, v25, 0);
              if ( messageLabel )
              {
                UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
                gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
                if ( gameObject )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                    if ( gameObject )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                        if ( gameObject )
                        {
                          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                          if ( gameObject )
                          {
                            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                            infoLabel1 = this->fields.infoLabel1;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_11690/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
                                                                       0);
                            if ( infoLabel1 )
                            {
                              UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0);
                              infoLabel2 = this->fields.infoLabel2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11691/*"SERVANT_FRAME_PURCHASE_INFO2"*/,
                                                                         0);
                              if ( infoLabel2 )
                              {
                                UILabel__set_text(infoLabel2, (System_String_o *)gameObject, 0);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                                if ( gameObject )
                                {
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
                                  if ( gameObject )
                                  {
                                    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                    if ( gameObject )
                                    {
                                      gameObject = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
                                      if ( gameObject )
                                      {
                                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                        if ( gameObject )
                                        {
                                          gameObject = UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0);
                                          if ( gameObject )
                                          {
                                            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                            numberLabel1 = this->fields.numberLabel1;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_11696/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/,
                                                                                       0);
                                            v29 = this->fields.userGameEntity;
                                            if ( v29 )
                                            {
                                              v30 = (System_String_o *)gameObject;
                                              svtKeep = v29->fields.svtKeep;
                                              v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
                                              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                         v30,
                                                                                         v31,
                                                                                         0);
                                              if ( numberLabel1 )
                                              {
                                                UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0);
                                                numberLabel2 = this->fields.numberLabel2;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11697/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                           0);
                                                v33 = this->fields.userGameEntity;
                                                if ( v33 )
                                                {
                                                  v34 = (System_String_o *)gameObject;
                                                  v50 = BalanceConfig_TypeInfo->static_fields->ServantFrameUseStone
                                                      + v33->fields.svtKeep;
                                                  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
                                                  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                             v34,
                                                                                             v35,
                                                                                             0);
                                                  if ( numberLabel2 )
                                                  {
                                                    UILabel__set_text(numberLabel2, (System_String_o *)gameObject, 0);
                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                                    if ( gameObject )
                                                    {
                                                      gameObject = UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0);
                                                      if ( gameObject )
                                                      {
                                                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                                        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                                        if ( gameObject )
                                                        {
                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)gameObject,
                                                                         0);
                                                          if ( gameObject )
                                                          {
                                                            UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                                            gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                            if ( gameObject )
                                                            {
                                                              gameObject = UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             0);
                                                              if ( gameObject )
                                                              {
                                                                UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                                                gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                                                if ( gameObject )
                                                                {
                                                                  gameObject = UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)gameObject,
                                                                                 0);
                                                                  if ( gameObject )
                                                                  {
                                                                    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                                                    if ( gameObject )
                                                                    {
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        1,
                                                                        0);
                                                                      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                                      if ( gameObject )
                                                                      {
                                                                        UnityEngine_Behaviour__set_enabled(
                                                                          (UnityEngine_Behaviour_o *)gameObject,
                                                                          1,
                                                                          0);
                                                                        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                                                        if ( gameObject )
                                                                        {
                                                                          v21 = 0;
                                                                          goto LABEL_78;
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
            else
            {
              if ( (unsigned int)(kind - 2) > 2 )
                goto LABEL_79;
              gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                  if ( gameObject )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                      if ( gameObject )
                      {
                        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                        if ( gameObject )
                        {
                          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                          infoLabel3 = this->fields.infoLabel3;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11690/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
                                                                     0);
                          if ( infoLabel3 )
                          {
                            UILabel__set_text(infoLabel3, (System_String_o *)gameObject, 0);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                            if ( gameObject )
                            {
                              gameObject = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
                              if ( gameObject )
                              {
                                UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                if ( gameObject )
                                {
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
                                  if ( gameObject )
                                  {
                                    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                    if ( gameObject )
                                    {
                                      gameObject = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0);
                                      if ( gameObject )
                                      {
                                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                        numberLabel3 = this->fields.numberLabel3;
                                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11697/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                   0);
                                        v17 = this->fields.userGameEntity;
                                        if ( v17 )
                                        {
                                          v18 = (System_String_o *)gameObject;
                                          ServantFrameMax = v17->fields.svtKeep;
                                          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantFrameMax);
                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v19, 0);
                                          if ( numberLabel3 )
                                          {
                                            UILabel__set_text(numberLabel3, (System_String_o *)gameObject, 0);
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                            if ( gameObject )
                                            {
                                              gameObject = UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0);
                                              if ( gameObject )
                                              {
                                                UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                                closeLabel = this->fields.closeLabel;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11688/*"SERVANT_FRAME_PURCHASE_CLOSE"*/,
                                                                                           0);
                                                if ( closeLabel )
                                                {
                                                  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
                                                  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
                                                  if ( gameObject )
                                                  {
                                                    UILabel__set_text(
                                                      (UILabel_o *)gameObject,
                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                      0);
                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                                    if ( gameObject )
                                                    {
                                                      gameObject = UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0);
                                                      if ( gameObject )
                                                      {
                                                        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                                        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                        if ( gameObject )
                                                        {
                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)gameObject,
                                                                         0);
                                                          if ( gameObject )
                                                          {
                                                            UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                                            gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                                            if ( gameObject )
                                                            {
                                                              gameObject = UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             0);
                                                              if ( gameObject )
                                                              {
                                                                UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                                                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                                                if ( gameObject )
                                                                {
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)gameObject,
                                                                    0,
                                                                    0);
                                                                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                                  if ( gameObject )
                                                                  {
                                                                    UnityEngine_Behaviour__set_enabled(
                                                                      (UnityEngine_Behaviour_o *)gameObject,
                                                                      0,
                                                                      0);
                                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                                                    if ( gameObject )
                                                                    {
                                                                      v21 = 1;
LABEL_78:
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        v21,
                                                                        0);
LABEL_79:
                                                                      switch ( kind )
                                                                      {
                                                                        case 0:
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            (UILabel_o *)gameObject,
                                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                                            0);
                                                                          decideLabel = this->fields.decideLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11689/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            decideLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
                                                                          goto LABEL_114;
                                                                        case 1:
                                                                          warningLabel = this->fields.warningLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11698/*"SERVANT_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, 0);
                                                                          if ( !warningLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            warningLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0);
                                                                          v39 = this->fields.decideLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11699/*"SERVANT_FRAME_PURCHASE_STONE"*/, 0);
                                                                          if ( !v39 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v39,
                                                                            (System_String_o *)gameObject,
                                                                            0);
                                                                          v40 = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0);
                                                                          if ( !v40 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v40,
                                                                            (System_String_o *)gameObject,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          goto LABEL_123;
                                                                        case 2:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v41 = &StringLiteral_11692/*"SERVANT_FRAME_PURCHASE_MESSAGE_END"*/;
                                                                          goto LABEL_111;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v41 = &StringLiteral_11694/*"SERVANT_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
LABEL_111:
                                                                          v42 = LocalizationManager__Get(
                                                                                  (System_String_o *)*v41,
                                                                                  0);
                                                                          v43 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v43 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v43->static_fields->ServantFrameMax;
                                                                          v44 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v42, v44, 0);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
LABEL_114:
                                                                          UILabel__set_text(
                                                                            cancelLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0);
                                                                          goto LABEL_125;
                                                                        case 4:
                                                                          v45 = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v46 = LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11693/*"SERVANT_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/,
                                                                                  0);
                                                                          v47 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v47 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v47->static_fields->ServantFrameMax;
                                                                          v48 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v46, v48, 0);
                                                                          if ( !v45 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v45,
                                                                            (System_String_o *)gameObject,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
LABEL_123:
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0);
LABEL_125:
                                                                          this->fields.state = 1;
                                                                          v49 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                                                                          System_Action___ctor(
                                                                            v49,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantFramePurchaseConfirmMenu_EndOpen__,
                                                                            0);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v49,
                                                                            0,
                                                                            0,
                                                                            0);
                                                                          break;
                                                                        default:
                                                                          goto LABEL_125;
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
LABEL_127:
    sub_1C7BD40(gameObject, v10);
  }
}


void ServantFramePurchaseConfirmMenu__add_callbackFunc(
        ServantFramePurchaseConfirmMenu_o *this,
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFramePurchaseConfirmMenu_o *v11; // x0
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE8D7C & 1) == 0 )
  {
    sub_1C7BAE8(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CE8D7C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1C7C0DC(v8);
  ServantFramePurchaseConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void ServantFramePurchaseConfirmMenu__remove_callbackFunc(
        ServantFramePurchaseConfirmMenu_o *this,
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFramePurchaseConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE8D7D & 1) == 0 )
  {
    sub_1C7BAE8(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CE8D7D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1C7C0DC(v8);
  ServantFramePurchaseConfirmMenu__Init(v11, v12);
}


void ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA8DFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA8DB4;
}


System_IAsyncResult_o *ServantFramePurchaseConfirmMenu_CallbackFunc__BeginInvoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CE8D86 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE8D86 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void ServantFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void ServantFramePurchaseConfirmMenu_CallbackFunc__Invoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}