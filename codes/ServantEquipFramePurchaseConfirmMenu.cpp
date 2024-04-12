void __fastcall ServantEquipFramePurchaseConfirmMenu___ctor(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2EBA & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B2EBA = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Callback(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v9; // x19
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantEquipFramePurchaseConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Close(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseConfirmMenu__Close_30450164(this, 0LL, v2);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Close_30450164(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B2EB5 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ServantEquipFramePurchaseConfirmMenu_EndClose__);
    byte_42B2EB5 = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantEquipFramePurchaseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__EndClose(
        ServantEquipFramePurchaseConfirmMenu_o *this,
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

  ServantEquipFramePurchaseConfirmMenu__Init(this, method);
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


void __fastcall ServantEquipFramePurchaseConfirmMenu__EndOpen(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Init(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_42B2EB3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2EB3 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.infoLabel1;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.infoLabel2;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.infoLabel3;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.numberLabel1;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.numberLabel2;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.numberLabel3;
  if ( !messageLabel )
    goto LABEL_15;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnClickCancel(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B2EB7 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2EB7 = 1;
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
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnClickClose(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B2EB8 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2EB8 = 1;
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
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnClickDecide(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_42B2EB6 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2EB6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( this->fields.kind )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    SoundManager__playSystemSe(v3, 0LL);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 1, v4);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__OnEnable(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_42B2EB9 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_4259/*"ConfirmWindow/CloseButton"*/);
    sub_B52984(&StringLiteral_4258/*"ConfirmWindow/CancelButton"*/);
    byte_42B2EB9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_4258/*"ConfirmWindow/CancelButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21195324(v4, (System_String_o *)StringLiteral_4259/*"ConfirmWindow/CloseButton"*/, 0LL);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Open(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callback,
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
  __int64 v19; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *titleLabel; // x21
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  UILabel_o *infoLabel3; // x21
  UILabel_o *numberLabel3; // x21
  struct UserGameEntity_o *v32; // x8
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  UILabel_o *closeLabel; // x21
  bool v36; // w1
  UILabel_o *messageLabel; // x21
  System_String_o *v38; // x22
  BalanceConfig_c *v39; // x8
  Il2CppObject *v40; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  struct UserGameEntity_o *v44; // x8
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  UILabel_o *numberLabel2; // x21
  struct UserGameEntity_o *v48; // x8
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *v54; // x20
  UILabel_o *v55; // x20
  __int64 *v56; // x8
  System_String_o *v57; // x21
  BalanceConfig_c *v58; // x8
  Il2CppObject *v59; // x0
  UILabel_o *v60; // x20
  System_String_o *v61; // x21
  BalanceConfig_c *v62; // x8
  Il2CppObject *v63; // x0
  System_Action_o *v64; // x20
  int v65; // [xsp+Ch] [xbp-44h] BYREF
  int32_t svtEquipKeep; // [xsp+18h] [xbp-38h] BYREF
  int32_t ServantEquipFrameMax; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B2EB4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__);
    sub_B52984(&StringLiteral_11780/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/);
    sub_B52984(&StringLiteral_11778/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/);
    sub_B52984(&StringLiteral_11783/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/);
    sub_B52984(&StringLiteral_11785/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/);
    sub_B52984(&StringLiteral_11788/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/);
    sub_B52984(&StringLiteral_11782/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/);
    sub_B52984(&StringLiteral_11786/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/);
    sub_B52984(&StringLiteral_11779/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/);
    sub_B52984(&StringLiteral_11789/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/);
    sub_B52984(&StringLiteral_11781/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/);
    sub_B52984(&StringLiteral_11777/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/);
    sub_B52984(&StringLiteral_11784/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/);
    sub_B52984(&StringLiteral_11787/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_11790/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/);
    byte_42B2EB4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
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
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11790/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        userGameEntity = this->fields.userGameEntity;
        if ( userGameEntity )
        {
          stoneDataLabel = this->fields.stoneDataLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(
                                                     userGameEntity->fields.stone,
                                                     0LL);
          if ( stoneDataLabel )
          {
            UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0LL);
            if ( (unsigned int)kind < 2 )
            {
              messageLabel = this->fields.messageLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11785/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/, 0LL);
              v39 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v39 = BalanceConfig_TypeInfo;
              }
              ServantEquipFrameMax = v39->static_fields->ServantEquipFrameMax;
              v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantEquipFrameMax);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v38, v40, 0LL);
              if ( messageLabel )
              {
                UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
                if ( gameObject )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                    if ( gameObject )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                        if ( gameObject )
                        {
                          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                          if ( gameObject )
                          {
                            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                            infoLabel1 = this->fields.infoLabel1;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_11780/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/,
                                                                       0LL);
                            if ( infoLabel1 )
                            {
                              UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0LL);
                              infoLabel2 = this->fields.infoLabel2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11781/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/,
                                                                         0LL);
                              if ( infoLabel2 )
                              {
                                UILabel__set_text(infoLabel2, (System_String_o *)gameObject, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                                if ( gameObject )
                                {
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
                                  if ( gameObject )
                                  {
                                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                    if ( gameObject )
                                    {
                                      gameObject = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
                                      if ( gameObject )
                                      {
                                        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                        if ( gameObject )
                                        {
                                          gameObject = UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         0LL);
                                          if ( gameObject )
                                          {
                                            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                            numberLabel1 = this->fields.numberLabel1;
                                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                       (System_String_o *)StringLiteral_11786/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/,
                                                                                       0LL);
                                            v44 = this->fields.userGameEntity;
                                            if ( v44 )
                                            {
                                              v45 = (System_String_o *)gameObject;
                                              svtEquipKeep = v44->fields.svtEquipKeep;
                                              v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
                                              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                         v45,
                                                                                         v46,
                                                                                         0LL);
                                              if ( numberLabel1 )
                                              {
                                                UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0LL);
                                                numberLabel2 = this->fields.numberLabel2;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11787/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                           0LL);
                                                v48 = this->fields.userGameEntity;
                                                if ( v48 )
                                                {
                                                  v49 = (System_String_o *)gameObject;
                                                  v65 = BalanceConfig_TypeInfo->static_fields->ServantEquipFrameUseStone
                                                      + v48->fields.svtEquipKeep;
                                                  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
                                                  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                             v49,
                                                                                             v50,
                                                                                             0LL);
                                                  if ( numberLabel2 )
                                                  {
                                                    UILabel__set_text(numberLabel2, (System_String_o *)gameObject, 0LL);
                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
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
                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)gameObject,
                                                                         0LL);
                                                          if ( gameObject )
                                                          {
                                                            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                                            gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                            if ( gameObject )
                                                            {
                                                              gameObject = UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)gameObject,
                                                                             0LL);
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
                                                                    UnityEngine_GameObject__SetActive(
                                                                      gameObject,
                                                                      0,
                                                                      0LL);
                                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                                                    if ( gameObject )
                                                                    {
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        1,
                                                                        0LL);
                                                                      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                                      if ( gameObject )
                                                                      {
                                                                        UnityEngine_Behaviour__set_enabled(
                                                                          (UnityEngine_Behaviour_o *)gameObject,
                                                                          1,
                                                                          0LL);
                                                                        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                                                        if ( gameObject )
                                                                        {
                                                                          v36 = 0;
                                                                          goto LABEL_82;
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
                goto LABEL_83;
              gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                  if ( gameObject )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                      if ( gameObject )
                      {
                        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                        if ( gameObject )
                        {
                          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                          infoLabel3 = this->fields.infoLabel3;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11780/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/,
                                                                     0LL);
                          if ( infoLabel3 )
                          {
                            UILabel__set_text(infoLabel3, (System_String_o *)gameObject, 0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                            if ( gameObject )
                            {
                              gameObject = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
                              if ( gameObject )
                              {
                                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                if ( gameObject )
                                {
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
                                  if ( gameObject )
                                  {
                                    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                    gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                    if ( gameObject )
                                    {
                                      gameObject = UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     0LL);
                                      if ( gameObject )
                                      {
                                        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                        numberLabel3 = this->fields.numberLabel3;
                                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_11787/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                   0LL);
                                        v32 = this->fields.userGameEntity;
                                        if ( v32 )
                                        {
                                          v33 = (System_String_o *)gameObject;
                                          ServantEquipFrameMax = v32->fields.svtEquipKeep;
                                          v34 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                  int_TypeInfo,
                                                                  &ServantEquipFrameMax);
                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0LL);
                                          if ( numberLabel3 )
                                          {
                                            UILabel__set_text(numberLabel3, (System_String_o *)gameObject, 0LL);
                                            gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                            if ( gameObject )
                                            {
                                              gameObject = UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0LL);
                                              if ( gameObject )
                                              {
                                                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                                                closeLabel = this->fields.closeLabel;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11778/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/,
                                                                                           0LL);
                                                if ( closeLabel )
                                                {
                                                  UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
                                                  gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
                                                  if ( gameObject )
                                                  {
                                                    UILabel__set_text(
                                                      (UILabel_o *)gameObject,
                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                      0LL);
                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                                                    if ( gameObject )
                                                    {
                                                      gameObject = UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)gameObject,
                                                                     0LL);
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
                                                                  UnityEngine_Behaviour__set_enabled(
                                                                    (UnityEngine_Behaviour_o *)gameObject,
                                                                    0,
                                                                    0LL);
                                                                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                                                  if ( gameObject )
                                                                  {
                                                                    UnityEngine_Behaviour__set_enabled(
                                                                      (UnityEngine_Behaviour_o *)gameObject,
                                                                      0,
                                                                      0LL);
                                                                    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                                                                    if ( gameObject )
                                                                    {
                                                                      v36 = 1;
LABEL_82:
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        v36,
                                                                        0LL);
LABEL_83:
                                                                      switch ( kind )
                                                                      {
                                                                        case 0:
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
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
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11779/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/, 0LL);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            decideLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11777/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_138;
                                                                          goto LABEL_123;
                                                                        case 1:
                                                                          warningLabel = this->fields.warningLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11788/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, 0LL);
                                                                          if ( !warningLabel )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            warningLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v54 = this->fields.decideLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11789/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/, 0LL);
                                                                          if ( !v54 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v54,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v55 = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11777/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !v55 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v55,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          goto LABEL_134;
                                                                        case 2:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v56 = &StringLiteral_11782/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/;
                                                                          goto LABEL_119;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v56 = &StringLiteral_11784/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
LABEL_119:
                                                                          v57 = LocalizationManager__Get(
                                                                                  (System_String_o *)*v56,
                                                                                  0LL);
                                                                          v58 = BalanceConfig_TypeInfo;
                                                                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v58 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantEquipFrameMax = v58->static_fields->ServantEquipFrameMax;
                                                                          v59 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantEquipFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v57, v59, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_138;
LABEL_123:
                                                                          UILabel__set_text(
                                                                            cancelLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          goto LABEL_136;
                                                                        case 4:
                                                                          v60 = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v61 = LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11783/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/,
                                                                                  0LL);
                                                                          v62 = BalanceConfig_TypeInfo;
                                                                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v62 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantEquipFrameMax = v62->static_fields->ServantEquipFrameMax;
                                                                          v63 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantEquipFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v61, v63, 0LL);
                                                                          if ( !v60 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v60,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
LABEL_134:
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_138;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
LABEL_136:
                                                                          this->fields.state = 1;
                                                                          v64 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                                                          System_Action___ctor(
                                                                            v64,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__,
                                                                            0LL);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v64,
                                                                            0,
                                                                            0LL);
                                                                          break;
                                                                        default:
                                                                          goto LABEL_136;
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
LABEL_138:
    sub_B52A5C(gameObject, v19);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__add_callbackFunc(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantEquipFramePurchaseConfirmMenu_o *v11; // x0
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B2EB1 & 1) == 0 )
  {
    sub_B52984(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_42B2EB1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  ServantEquipFramePurchaseConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__remove_callbackFunc(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantEquipFramePurchaseConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B2EB2 & 1) == 0 )
  {
    sub_B52984(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_42B2EB2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  ServantEquipFramePurchaseConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__BeginInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42AD33B & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD33B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__Invoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **v8; // x25
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
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v20; // x8
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
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **)(v4 + 32);
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