void __fastcall ServantFramePurchaseConfirmMenu___ctor(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BAF432 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BAF432 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFramePurchaseConfirmMenu__Callback(
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
    *p_callbackFunc = 0LL;
    sub_1C13CC8(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__Close(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFramePurchaseConfirmMenu__Close_31262264(this, 0LL, v2);
}


void __fastcall ServantFramePurchaseConfirmMenu__Close_31262264(
        ServantFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BAF42D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_ServantFramePurchaseConfirmMenu_EndClose__, v5);
    byte_4BAF42D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C13CC8(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFramePurchaseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ServantFramePurchaseConfirmMenu__EndClose(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ServantFramePurchaseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C13CC8(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__EndOpen(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ServantFramePurchaseConfirmMenu__Init(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4BAF42B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BAF42B = 1;
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
    sub_1C13F80(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFramePurchaseConfirmMenu__OnClickCancel(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BAF42F & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantFramePurchaseConfirmMenu_OnClickCancel__, method);
    byte_4BAF42F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_ServantFramePurchaseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ServantFramePurchaseConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__OnClickClose(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BAF430 & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantFramePurchaseConfirmMenu_OnClickClose__, method);
    byte_4BAF430 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_ServantFramePurchaseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantFramePurchaseConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__OnClickDecide(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t kind; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BAF42E & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantFramePurchaseConfirmMenu_OnClickDecide__, method);
    byte_4BAF42E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_ServantFramePurchaseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C13D3C(Method_ServantFramePurchaseConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C13D08(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind == 0), 0, 0LL);
    ServantFramePurchaseConfirmMenu__Callback(this, 1, v6);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__OnEnable(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4BAF431 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_4760/*"Configurations"*/, method);
    sub_1C13D24(&StringLiteral_4759/*"Configuration"*/, v3);
    byte_4BAF431 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42984304(transform, (System_String_o *)StringLiteral_4759/*"Configuration"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42984304(v5, (System_String_o *)StringLiteral_4760/*"Configurations"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseConfirmMenu__Open(
        ServantFramePurchaseConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  UILabel_o *titleLabel; // x21
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  UILabel_o *infoLabel3; // x21
  UILabel_o *numberLabel3; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct UserGameEntity_o *v38; // x8
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  UILabel_o *closeLabel; // x21
  bool v42; // w1
  UILabel_o *messageLabel; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_String_o *v47; // x22
  BalanceConfig_c *v48; // x8
  Il2CppObject *v49; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  struct UserGameEntity_o *v56; // x8
  System_String_o *v57; // x22
  Il2CppObject *v58; // x0
  UILabel_o *numberLabel2; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  struct UserGameEntity_o *v63; // x8
  System_String_o *v64; // x22
  Il2CppObject *v65; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *v69; // x20
  UILabel_o *v70; // x20
  __int64 *v71; // x8
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_String_o *v75; // x21
  BalanceConfig_c *v76; // x8
  Il2CppObject *v77; // x0
  UILabel_o *v78; // x20
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_String_o *v82; // x21
  BalanceConfig_c *v83; // x8
  Il2CppObject *v84; // x0
  System_Action_o *v85; // x20
  int v86; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t svtKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t ServantFrameMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BAF42C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C13D24(&BalanceConfig_TypeInfo, v9);
    sub_1C13D24(&int_TypeInfo, v10);
    sub_1C13D24(&LocalizationManager_TypeInfo, v11);
    sub_1C13D24(&Method_ServantFramePurchaseConfirmMenu_EndOpen__, v12);
    sub_1C13D24(&StringLiteral_11812/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, v13);
    sub_1C13D24(&StringLiteral_11806/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/, v14);
    sub_1C13D24(&StringLiteral_11814/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, v15);
    sub_1C13D24(&StringLiteral_11810/*"SERVANT_EQUIP_UNIT"*/, v16);
    sub_1C13D24(&StringLiteral_11809/*"SERVANT_EQUIP_TAKE"*/, v17);
    sub_1C13D24(&StringLiteral_11811/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/, v18);
    sub_1C13D24(&StringLiteral_11804/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/, v19);
    sub_1C13D24(&StringLiteral_11805/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/, v20);
    sub_1C13D24(&StringLiteral_11801/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v21);
    sub_1C13D24(&StringLiteral_11802/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/, v22);
    sub_1C13D24(&StringLiteral_11808/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/, v23);
    sub_1C13D24(&StringLiteral_11803/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/, v24);
    sub_1C13D24(&StringLiteral_11807/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/, v25);
    sub_1C13D24(&StringLiteral_1/*""*/, v26);
    sub_1C13D24(&StringLiteral_11813/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, v27);
    byte_4BAF42C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1C13CC8(&this->fields.stoneShopEntity);
    this->fields.callbackFunc = callback;
    sub_1C13CC8(&this->fields.callbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.userGameEntity = UserGameMaster__getSelfUserGame(0LL);
      sub_1C13CC8(&this->fields.userGameEntity);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
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
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_EQUIP_TAKE"*/, 0LL);
              v48 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v48 = BalanceConfig_TypeInfo;
              }
              ServantFrameMax = v48->static_fields->ServantFrameMax;
              v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantFrameMax, v44, v45, v46);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v47, v49, 0LL);
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
                                                                       (System_String_o *)StringLiteral_11804/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/,
                                                                       0LL);
                            if ( infoLabel1 )
                            {
                              UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0LL);
                              infoLabel2 = this->fields.infoLabel2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11805/*"SERVANT_EQUIP_SELL_REQUEST_RARITY_MESSAGE"*/,
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
                                                                                       (System_String_o *)StringLiteral_11810/*"SERVANT_EQUIP_UNIT"*/,
                                                                                       0LL);
                                            v56 = this->fields.userGameEntity;
                                            if ( v56 )
                                            {
                                              v57 = (System_String_o *)gameObject;
                                              svtKeep = v56->fields.svtKeep;
                                              v58 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                      int_TypeInfo,
                                                                      &svtKeep,
                                                                      v53,
                                                                      v54,
                                                                      v55);
                                              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                         v57,
                                                                                         v58,
                                                                                         0LL);
                                              if ( numberLabel1 )
                                              {
                                                UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0LL);
                                                numberLabel2 = this->fields.numberLabel2;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11811/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/,
                                                                                           0LL);
                                                v63 = this->fields.userGameEntity;
                                                if ( v63 )
                                                {
                                                  v64 = (System_String_o *)gameObject;
                                                  v86 = BalanceConfig_TypeInfo->static_fields->ServantFrameUseStone
                                                      + v63->fields.svtKeep;
                                                  v65 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                          int_TypeInfo,
                                                                          &v86,
                                                                          v60,
                                                                          v61,
                                                                          v62);
                                                  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                             v64,
                                                                                             v65,
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
                                                                          v42 = 0;
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
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11804/*"SERVANT_EQUIP_SELL_MESSAGE_START"*/,
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
                                                                                   (System_String_o *)StringLiteral_11811/*"SERVANT_EQUIP_WAREHOUSE_EMPTY"*/,
                                                                                   0LL);
                                        v38 = this->fields.userGameEntity;
                                        if ( v38 )
                                        {
                                          v39 = (System_String_o *)gameObject;
                                          ServantFrameMax = v38->fields.svtKeep;
                                          v40 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                  int_TypeInfo,
                                                                  &ServantFrameMax,
                                                                  v35,
                                                                  v36,
                                                                  v37);
                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL);
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
                                                                                           (System_String_o *)StringLiteral_11802/*"SERVANT_EQUIP_SELL_MESSAGE_ERROR"*/,
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
                                                                      v42 = 1;
LABEL_78:
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        v42,
                                                                        0LL);
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
                                                                            0LL);
                                                                          decideLabel = this->fields.decideLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_EQUIP_SELL_MESSAGE_NO_SELECT"*/, 0LL);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            decideLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
                                                                          goto LABEL_114;
                                                                        case 1:
                                                                          warningLabel = this->fields.warningLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11812/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !warningLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            warningLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v69 = this->fields.decideLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, 0LL);
                                                                          if ( !v69 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v69,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v70 = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11801/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, 0LL);
                                                                          if ( !v70 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v70,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          goto LABEL_123;
                                                                        case 2:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v71 = &StringLiteral_11806/*"SERVANT_EQUIP_STORAGE_PURCHASE_MESSAGE"*/;
                                                                          goto LABEL_111;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v71 = &StringLiteral_11808/*"SERVANT_EQUIP_STORAGE_PURCHASE_TITLE"*/;
LABEL_111:
                                                                          v75 = LocalizationManager__Get(
                                                                                  (System_String_o *)*v71,
                                                                                  0LL);
                                                                          v76 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v76 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v76->static_fields->ServantFrameMax;
                                                                          v77 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax,
                                                                                                  v72,
                                                                                                  v73,
                                                                                                  v74);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v75, v77, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
LABEL_114:
                                                                          UILabel__set_text(
                                                                            cancelLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          goto LABEL_125;
                                                                        case 4:
                                                                          v78 = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v82 = LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11807/*"SERVANT_EQUIP_STORAGE_PURCHASE_RESULT"*/,
                                                                                  0LL);
                                                                          v83 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v83 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v83->static_fields->ServantFrameMax;
                                                                          v84 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax,
                                                                                                  v79,
                                                                                                  v80,
                                                                                                  v81);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v82, v84, 0LL);
                                                                          if ( !v78 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v78,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
                                                                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
LABEL_123:
                                                                          gameObject = UnityEngine_Component__get_gameObject(
                                                                                         (UnityEngine_Component_o *)gameObject,
                                                                                         0LL);
                                                                          if ( !gameObject )
                                                                            goto LABEL_127;
                                                                          UnityEngine_GameObject__SetActive(
                                                                            gameObject,
                                                                            0,
                                                                            0LL);
LABEL_125:
                                                                          this->fields.state = 1;
                                                                          v85 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
                                                                          System_Action___ctor(
                                                                            v85,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantFramePurchaseConfirmMenu_EndOpen__,
                                                                            0LL);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v85,
                                                                            0,
                                                                            0LL);
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
    sub_1C13F80(gameObject, v29);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__add_callbackFunc(
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

  if ( (byte_4BAF429 & 1) == 0 )
  {
    sub_1C13D24(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4BAF429 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1C14240(v8);
  ServantFramePurchaseConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantFramePurchaseConfirmMenu__remove_callbackFunc(
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

  if ( (byte_4BAF42A & 1) == 0 )
  {
    sub_1C13D24(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4BAF42A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C4F214(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1C14240(v8);
  ServantFramePurchaseConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
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
  sub_1C13CC8(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A4D7D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A4D78C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFramePurchaseConfirmMenu_CallbackFunc__BeginInvoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BAF433 & 1) == 0 )
  {
    sub_1C13D24(&bool_TypeInfo, result);
    byte_4BAF433 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall ServantFramePurchaseConfirmMenu_CallbackFunc__Invoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}