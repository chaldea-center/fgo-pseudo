void __fastcall ServantFramePurchaseConfirmMenu___ctor(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F76D6 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F76D6 = 1;
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
    sub_1B6406C(p_callbackFunc);
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

  ServantFramePurchaseConfirmMenu__Close_30454264(this, 0LL, v2);
}


void __fastcall ServantFramePurchaseConfirmMenu__Close_30454264(
        ServantFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_49F76D1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ServantFramePurchaseConfirmMenu_EndClose__, v5);
    byte_49F76D1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantFramePurchaseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
    sub_1B6406C(p_closeCallbackFunc);
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

  if ( (byte_49F76CF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F76CF = 1;
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
    sub_1B64324(messageLabel);
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

  if ( (byte_49F76D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantFramePurchaseConfirmMenu_OnClickCancel__, method);
    byte_49F76D3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_49F76D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantFramePurchaseConfirmMenu_OnClickClose__, method);
    byte_49F76D4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_49F76D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantFramePurchaseConfirmMenu_OnClickDecide__, method);
    byte_49F76D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_ServantFramePurchaseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0();
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind == 0), 0LL);
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

  if ( (byte_49F76D5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4655/*"ConfirmWindow/CloseButton"*/, method);
    sub_1B640C8(&StringLiteral_4654/*"ConfirmWindow/CancelButton"*/, v3);
    byte_49F76D5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_4654/*"ConfirmWindow/CancelButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(v5, (System_String_o *)StringLiteral_4655/*"ConfirmWindow/CloseButton"*/, 0LL);
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
  UILabel_o *titleLabel; // x21
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  UILabel_o *infoLabel3; // x21
  UILabel_o *numberLabel3; // x21
  struct UserGameEntity_o *v36; // x8
  System_String_o *v37; // x22
  Il2CppObject *v38; // x0
  UILabel_o *closeLabel; // x21
  bool v40; // w1
  UILabel_o *messageLabel; // x21
  System_String_o *v42; // x22
  BalanceConfig_c *v43; // x8
  Il2CppObject *v44; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  struct UserGameEntity_o *v48; // x8
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  UILabel_o *numberLabel2; // x21
  struct UserGameEntity_o *v52; // x8
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *v58; // x20
  UILabel_o *v59; // x20
  __int64 *v60; // x8
  System_String_o *v61; // x21
  BalanceConfig_c *v62; // x8
  Il2CppObject *v63; // x0
  UILabel_o *v64; // x20
  System_String_o *v65; // x21
  BalanceConfig_c *v66; // x8
  Il2CppObject *v67; // x0
  System_Action_o *v68; // x20
  int v69; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t svtKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t ServantFrameMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F76D0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&BalanceConfig_TypeInfo, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&Method_ServantFramePurchaseConfirmMenu_EndOpen__, v12);
    sub_1B640C8(&StringLiteral_11560/*"SERVANT_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, v13);
    sub_1B640C8(&StringLiteral_11554/*"SERVANT_FRAME_PURCHASE_MESSAGE_END"*/, v14);
    sub_1B640C8(&StringLiteral_11562/*"SERVANT_FRAME_PURCHASE_TITLE"*/, v15);
    sub_1B640C8(&StringLiteral_11558/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/, v16);
    sub_1B640C8(&StringLiteral_11557/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, v17);
    sub_1B640C8(&StringLiteral_11559/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/, v18);
    sub_1B640C8(&StringLiteral_11552/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v19);
    sub_1B640C8(&StringLiteral_11553/*"SERVANT_FRAME_PURCHASE_INFO2"*/, v20);
    sub_1B640C8(&StringLiteral_11549/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, v21);
    sub_1B640C8(&StringLiteral_11550/*"SERVANT_FRAME_PURCHASE_CLOSE"*/, v22);
    sub_1B640C8(&StringLiteral_11556/*"SERVANT_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/, v23);
    sub_1B640C8(&StringLiteral_11551/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, v24);
    sub_1B640C8(&StringLiteral_11555/*"SERVANT_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/, v25);
    sub_1B640C8(&StringLiteral_1/*""*/, v26);
    sub_1B640C8(&StringLiteral_11561/*"SERVANT_FRAME_PURCHASE_STONE"*/, v27);
    byte_49F76D0 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1B6406C(&this->fields.stoneShopEntity);
    this->fields.callbackFunc = callback;
    sub_1B6406C(&this->fields.callbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.userGameEntity = UserGameMaster__getSelfUserGame(0LL);
      sub_1B6406C(&this->fields.userGameEntity);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11562/*"SERVANT_FRAME_PURCHASE_TITLE"*/, 0LL);
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
              v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11557/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, 0LL);
              v43 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v43 = BalanceConfig_TypeInfo;
              }
              ServantFrameMax = v43->static_fields->ServantFrameMax;
              v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantFrameMax);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v42, v44, 0LL);
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
                                                                       (System_String_o *)StringLiteral_11552/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
                                                                       0LL);
                            if ( infoLabel1 )
                            {
                              UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0LL);
                              infoLabel2 = this->fields.infoLabel2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11553/*"SERVANT_FRAME_PURCHASE_INFO2"*/,
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
                                                                                       (System_String_o *)StringLiteral_11558/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/,
                                                                                       0LL);
                                            v48 = this->fields.userGameEntity;
                                            if ( v48 )
                                            {
                                              v49 = (System_String_o *)gameObject;
                                              svtKeep = v48->fields.svtKeep;
                                              v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
                                              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                         v49,
                                                                                         v50,
                                                                                         0LL);
                                              if ( numberLabel1 )
                                              {
                                                UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0LL);
                                                numberLabel2 = this->fields.numberLabel2;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11559/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                           0LL);
                                                v52 = this->fields.userGameEntity;
                                                if ( v52 )
                                                {
                                                  v53 = (System_String_o *)gameObject;
                                                  v69 = BalanceConfig_TypeInfo->static_fields->ServantFrameUseStone
                                                      + v52->fields.svtKeep;
                                                  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
                                                  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                             v53,
                                                                                             v54,
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
                                                                          v40 = 0;
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
                                                                     (System_String_o *)StringLiteral_11552/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
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
                                                                                   (System_String_o *)StringLiteral_11559/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                   0LL);
                                        v36 = this->fields.userGameEntity;
                                        if ( v36 )
                                        {
                                          v37 = (System_String_o *)gameObject;
                                          ServantFrameMax = v36->fields.svtKeep;
                                          v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantFrameMax);
                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v37, v38, 0LL);
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
                                                                                           (System_String_o *)StringLiteral_11550/*"SERVANT_FRAME_PURCHASE_CLOSE"*/,
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
                                                                      v40 = 1;
LABEL_78:
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        v40,
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
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11551/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            decideLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11549/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
                                                                          goto LABEL_114;
                                                                        case 1:
                                                                          warningLabel = this->fields.warningLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11560/*"SERVANT_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, 0LL);
                                                                          if ( !warningLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            warningLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v58 = this->fields.decideLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11561/*"SERVANT_FRAME_PURCHASE_STONE"*/, 0LL);
                                                                          if ( !v58 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v58,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v59 = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11549/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !v59 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v59,
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
                                                                          v60 = &StringLiteral_11554/*"SERVANT_FRAME_PURCHASE_MESSAGE_END"*/;
                                                                          goto LABEL_111;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v60 = &StringLiteral_11556/*"SERVANT_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
LABEL_111:
                                                                          v61 = LocalizationManager__Get(
                                                                                  (System_String_o *)*v60,
                                                                                  0LL);
                                                                          v62 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v62 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v62->static_fields->ServantFrameMax;
                                                                          v63 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v61, v63, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
LABEL_114:
                                                                          UILabel__set_text(
                                                                            cancelLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          goto LABEL_125;
                                                                        case 4:
                                                                          v64 = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v65 = LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11555/*"SERVANT_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/,
                                                                                  0LL);
                                                                          v66 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v66 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v66->static_fields->ServantFrameMax;
                                                                          v67 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v65, v67, 0LL);
                                                                          if ( !v64 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v64,
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
                                                                          v68 = (System_Action_o *)sub_1B64314(
                                                                                                     System_Action_TypeInfo,
                                                                                                     v32,
                                                                                                     v33);
                                                                          System_Action___ctor(
                                                                            v68,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantFramePurchaseConfirmMenu_EndOpen__,
                                                                            0LL);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v68,
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
    sub_1B64324(gameObject);
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

  if ( (byte_49F76CD & 1) == 0 )
  {
    sub_1B640C8(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_49F76CD = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1B645E4(v8);
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

  if ( (byte_49F76CE & 1) == 0 )
  {
    sub_1B640C8(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_49F76CE = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1B645E4(v8);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4694;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A464C;
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
  if ( (byte_49F76D7 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49F76D7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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