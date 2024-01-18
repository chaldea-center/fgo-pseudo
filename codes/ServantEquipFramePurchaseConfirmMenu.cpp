void __fastcall ServantEquipFramePurchaseConfirmMenu___ctor(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AB3A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AB3A = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantEquipFramePurchaseConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Close(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseConfirmMenu__Close_30773408(this, 0LL, v2);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu__Close_30773408(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418AB35 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantEquipFramePurchaseConfirmMenu_EndClose__, v10);
    byte_418AB35 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantEquipFramePurchaseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_418AB33 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418AB33 = 1;
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
    sub_B2C434(messageLabel, method);
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

  if ( (byte_418AB37 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AB37 = 1;
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

  if ( (byte_418AB38 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AB38 = 1;
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

  if ( (byte_418AB36 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AB36 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x0

  if ( (byte_418AB39 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_4221/*"ConfirmWindow/CloseButton"*/, v3);
    sub_B2C35C(&StringLiteral_4220/*"ConfirmWindow/CancelButton"*/, v4);
    byte_418AB39 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_4220/*"ConfirmWindow/CancelButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_21105064(v6, (System_String_o *)StringLiteral_4221/*"ConfirmWindow/CloseButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *titleLabel; // x21
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  UILabel_o *infoLabel3; // x21
  UILabel_o *numberLabel3; // x21
  struct UserGameEntity_o *v51; // x8
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  UILabel_o *closeLabel; // x21
  bool v55; // w1
  UILabel_o *messageLabel; // x21
  System_String_o *v57; // x22
  BalanceConfig_c *v58; // x8
  Il2CppObject *v59; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  struct UserGameEntity_o *v63; // x8
  System_String_o *v64; // x22
  Il2CppObject *v65; // x0
  UILabel_o *numberLabel2; // x21
  struct UserGameEntity_o *v67; // x8
  System_String_o *v68; // x22
  Il2CppObject *v69; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *v73; // x20
  UILabel_o *v74; // x20
  __int64 *v75; // x8
  System_String_o *v76; // x21
  BalanceConfig_c *v77; // x8
  Il2CppObject *v78; // x0
  UILabel_o *v79; // x20
  System_String_o *v80; // x21
  BalanceConfig_c *v81; // x8
  Il2CppObject *v82; // x0
  System_Action_o *v83; // x20
  int v84; // [xsp+Ch] [xbp-44h] BYREF
  int32_t svtEquipKeep; // [xsp+18h] [xbp-38h] BYREF
  int32_t ServantEquipFrameMax; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_418AB34 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&BalanceConfig_TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__, v15);
    sub_B2C35C(&StringLiteral_11695/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/, v16);
    sub_B2C35C(&StringLiteral_11693/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/, v17);
    sub_B2C35C(&StringLiteral_11698/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/, v18);
    sub_B2C35C(&StringLiteral_11700/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/, v19);
    sub_B2C35C(&StringLiteral_11703/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, v20);
    sub_B2C35C(&StringLiteral_11697/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/, v21);
    sub_B2C35C(&StringLiteral_11701/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/, v22);
    sub_B2C35C(&StringLiteral_11694/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/, v23);
    sub_B2C35C(&StringLiteral_11704/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/, v24);
    sub_B2C35C(&StringLiteral_11696/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/, v25);
    sub_B2C35C(&StringLiteral_11692/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, v26);
    sub_B2C35C(&StringLiteral_11699/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/, v27);
    sub_B2C35C(&StringLiteral_11702/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/, v28);
    sub_B2C35C(&StringLiteral_1/*""*/, v29);
    sub_B2C35C(&StringLiteral_11705/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/, v30);
    byte_418AB34 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
      (System_Int32_array **)stoneShopEntity,
      (System_String_array **)stoneShopEntity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.userGameEntity,
        (System_Int32_array **)SelfUserGame,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11705/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/, 0LL);
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
              v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11700/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/, 0LL);
              v58 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v58 = BalanceConfig_TypeInfo;
              }
              ServantEquipFrameMax = v58->static_fields->ServantEquipFrameMax;
              v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantEquipFrameMax);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v57, v59, 0LL);
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
                                                                       (System_String_o *)StringLiteral_11695/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/,
                                                                       0LL);
                            if ( infoLabel1 )
                            {
                              UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0LL);
                              infoLabel2 = this->fields.infoLabel2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11696/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/,
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
                                                                                       (System_String_o *)StringLiteral_11701/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/,
                                                                                       0LL);
                                            v63 = this->fields.userGameEntity;
                                            if ( v63 )
                                            {
                                              v64 = (System_String_o *)gameObject;
                                              svtEquipKeep = v63->fields.svtEquipKeep;
                                              v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtEquipKeep);
                                              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                         v64,
                                                                                         v65,
                                                                                         0LL);
                                              if ( numberLabel1 )
                                              {
                                                UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0LL);
                                                numberLabel2 = this->fields.numberLabel2;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11702/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                           0LL);
                                                v67 = this->fields.userGameEntity;
                                                if ( v67 )
                                                {
                                                  v68 = (System_String_o *)gameObject;
                                                  v84 = BalanceConfig_TypeInfo->static_fields->ServantEquipFrameUseStone
                                                      + v67->fields.svtEquipKeep;
                                                  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
                                                  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                             v68,
                                                                                             v69,
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
                                                                          v55 = 0;
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
                                                                     (System_String_o *)StringLiteral_11695/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/,
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
                                                                                   (System_String_o *)StringLiteral_11702/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                   0LL);
                                        v51 = this->fields.userGameEntity;
                                        if ( v51 )
                                        {
                                          v52 = (System_String_o *)gameObject;
                                          ServantEquipFrameMax = v51->fields.svtEquipKeep;
                                          v53 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                  int_TypeInfo,
                                                                  &ServantEquipFrameMax);
                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0LL);
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
                                                                                           (System_String_o *)StringLiteral_11693/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/,
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
                                                                      v55 = 1;
LABEL_82:
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        v55,
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
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11694/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/, 0LL);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            decideLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, 0LL);
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
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11703/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, 0LL);
                                                                          if ( !warningLabel )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            warningLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v73 = this->fields.decideLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11704/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/, 0LL);
                                                                          if ( !v73 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v73,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v74 = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11692/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !v74 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v74,
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
                                                                          v75 = &StringLiteral_11697/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/;
                                                                          goto LABEL_119;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v75 = &StringLiteral_11699/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
LABEL_119:
                                                                          v76 = LocalizationManager__Get(
                                                                                  (System_String_o *)*v75,
                                                                                  0LL);
                                                                          v77 = BalanceConfig_TypeInfo;
                                                                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v77 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantEquipFrameMax = v77->static_fields->ServantEquipFrameMax;
                                                                          v78 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantEquipFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v76, v78, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_138;
LABEL_123:
                                                                          UILabel__set_text(
                                                                            cancelLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          goto LABEL_136;
                                                                        case 4:
                                                                          v79 = this->fields.messageLabel;
                                                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          }
                                                                          v80 = LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11698/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/,
                                                                                  0LL);
                                                                          v81 = BalanceConfig_TypeInfo;
                                                                          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                                            && !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v81 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantEquipFrameMax = v81->static_fields->ServantEquipFrameMax;
                                                                          v82 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantEquipFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v80, v82, 0LL);
                                                                          if ( !v79 )
                                                                            goto LABEL_138;
                                                                          UILabel__set_text(
                                                                            v79,
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
                                                                          v83 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                                                          System_Action___ctor(
                                                                            v83,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__,
                                                                            0LL);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v83,
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
    sub_B2C434(gameObject, v38);
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

  if ( (byte_418AB31 & 1) == 0 )
  {
    sub_B2C35C(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_418AB31 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418AB32 & 1) == 0 )
  {
    sub_B2C35C(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_418AB32 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41853E3 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41853E3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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