void __fastcall ServantFramePurchaseConfirmMenu___ctor(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A562C7 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A562C7 = 1;
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
    sub_1B88554(p_callbackFunc, 0LL);
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

  ServantFramePurchaseConfirmMenu__Close_30613452(this, 0LL, v2);
}


void __fastcall ServantFramePurchaseConfirmMenu__Close_30613452(
        ServantFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A562C2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantFramePurchaseConfirmMenu_EndClose__);
    byte_4A562C2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFramePurchaseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1B88554(p_closeCallbackFunc, 0LL);
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

  if ( (byte_4A562C0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A562C0 = 1;
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
    sub_1B8880C(messageLabel, method);
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

  if ( (byte_4A562C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantFramePurchaseConfirmMenu_OnClickCancel__);
    byte_4A562C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A562C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantFramePurchaseConfirmMenu_OnClickClose__);
    byte_4A562C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFramePurchaseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A562C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantFramePurchaseConfirmMenu_OnClickDecide__);
    byte_4A562C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_ServantFramePurchaseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFramePurchaseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8();
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind == 0), 0LL);
    ServantFramePurchaseConfirmMenu__Callback(this, 1, v6);
  }
}


void __fastcall ServantFramePurchaseConfirmMenu__OnEnable(
        ServantFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4A562C6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4678/*"ConfirmWindow/CloseButton"*/);
    sub_1B885B0(&StringLiteral_4677/*"ConfirmWindow/CancelButton"*/);
    byte_4A562C6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_4677/*"ConfirmWindow/CancelButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(v4, (System_String_o *)StringLiteral_4678/*"ConfirmWindow/CloseButton"*/, 0LL);
}


void __fastcall ServantFramePurchaseConfirmMenu__Open(
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct UserGameEntity_o *v20; // x8
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  UILabel_o *closeLabel; // x21
  bool v24; // w1
  UILabel_o *messageLabel; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_String_o *v29; // x22
  BalanceConfig_c *v30; // x8
  Il2CppObject *v31; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct UserGameEntity_o *v38; // x8
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  UILabel_o *numberLabel2; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct UserGameEntity_o *v45; // x8
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *v51; // x20
  UILabel_o *v52; // x20
  __int64 *v53; // x8
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_String_o *v57; // x21
  BalanceConfig_c *v58; // x8
  Il2CppObject *v59; // x0
  UILabel_o *v60; // x20
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_String_o *v64; // x21
  BalanceConfig_c *v65; // x8
  Il2CppObject *v66; // x0
  System_Action_o *v67; // x20
  int v68; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t svtKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t ServantFrameMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A562C1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantFramePurchaseConfirmMenu_EndOpen__);
    sub_1B885B0(&StringLiteral_11615/*"SERVANT_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11609/*"SERVANT_FRAME_PURCHASE_MESSAGE_END"*/);
    sub_1B885B0(&StringLiteral_11617/*"SERVANT_FRAME_PURCHASE_TITLE"*/);
    sub_1B885B0(&StringLiteral_11613/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/);
    sub_1B885B0(&StringLiteral_11612/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/);
    sub_1B885B0(&StringLiteral_11614/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/);
    sub_1B885B0(&StringLiteral_11607/*"SERVANT_FRAME_PURCHASE_INFO1"*/);
    sub_1B885B0(&StringLiteral_11608/*"SERVANT_FRAME_PURCHASE_INFO2"*/);
    sub_1B885B0(&StringLiteral_11604/*"SERVANT_FRAME_PURCHASE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11605/*"SERVANT_FRAME_PURCHASE_CLOSE"*/);
    sub_1B885B0(&StringLiteral_11611/*"SERVANT_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/);
    sub_1B885B0(&StringLiteral_11606/*"SERVANT_FRAME_PURCHASE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11610/*"SERVANT_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_11616/*"SERVANT_FRAME_PURCHASE_STONE"*/);
    byte_4A562C1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_1B88554(&this->fields.stoneShopEntity, stoneShopEntity);
    this->fields.callbackFunc = callback;
    sub_1B88554(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      this->fields.userGameEntity = SelfUserGame;
      sub_1B88554(&this->fields.userGameEntity, SelfUserGame);
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11617/*"SERVANT_FRAME_PURCHASE_TITLE"*/, 0LL);
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
              v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11612/*"SERVANT_FRAME_PURCHASE_MESSAGE_START"*/, 0LL);
              v30 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v30 = BalanceConfig_TypeInfo;
              }
              ServantFrameMax = v30->static_fields->ServantFrameMax;
              v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ServantFrameMax, v26, v27, v28);
              gameObject = (UnityEngine_GameObject_o *)System_String__Format(v29, v31, 0LL);
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
                                                                       (System_String_o *)StringLiteral_11607/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
                                                                       0LL);
                            if ( infoLabel1 )
                            {
                              UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0LL);
                              infoLabel2 = this->fields.infoLabel2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11608/*"SERVANT_FRAME_PURCHASE_INFO2"*/,
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
                                                                                       (System_String_o *)StringLiteral_11613/*"SERVANT_FRAME_PURCHASE_NUMBERO1"*/,
                                                                                       0LL);
                                            v38 = this->fields.userGameEntity;
                                            if ( v38 )
                                            {
                                              v39 = (System_String_o *)gameObject;
                                              svtKeep = v38->fields.svtKeep;
                                              v40 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                      int_TypeInfo,
                                                                      &svtKeep,
                                                                      v35,
                                                                      v36,
                                                                      v37);
                                              gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                         v39,
                                                                                         v40,
                                                                                         0LL);
                                              if ( numberLabel1 )
                                              {
                                                UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0LL);
                                                numberLabel2 = this->fields.numberLabel2;
                                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                           (System_String_o *)StringLiteral_11614/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                           0LL);
                                                v45 = this->fields.userGameEntity;
                                                if ( v45 )
                                                {
                                                  v46 = (System_String_o *)gameObject;
                                                  v68 = BalanceConfig_TypeInfo->static_fields->ServantFrameUseStone
                                                      + v45->fields.svtKeep;
                                                  v47 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                          int_TypeInfo,
                                                                          &v68,
                                                                          v42,
                                                                          v43,
                                                                          v44);
                                                  gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                                                             v46,
                                                                                             v47,
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
                                                                          v24 = 0;
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
                                                                     (System_String_o *)StringLiteral_11607/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
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
                                                                                   (System_String_o *)StringLiteral_11614/*"SERVANT_FRAME_PURCHASE_NUMBERO2"*/,
                                                                                   0LL);
                                        v20 = this->fields.userGameEntity;
                                        if ( v20 )
                                        {
                                          v21 = (System_String_o *)gameObject;
                                          ServantFrameMax = v20->fields.svtKeep;
                                          v22 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                  int_TypeInfo,
                                                                  &ServantFrameMax,
                                                                  v17,
                                                                  v18,
                                                                  v19);
                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v21, v22, 0LL);
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
                                                                                           (System_String_o *)StringLiteral_11605/*"SERVANT_FRAME_PURCHASE_CLOSE"*/,
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
                                                                      v24 = 1;
LABEL_78:
                                                                      UnityEngine_Behaviour__set_enabled(
                                                                        (UnityEngine_Behaviour_o *)gameObject,
                                                                        v24,
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
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11606/*"SERVANT_FRAME_PURCHASE_DECIDE"*/, 0LL);
                                                                          if ( !decideLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            decideLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          cancelLabel = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
                                                                          goto LABEL_114;
                                                                        case 1:
                                                                          warningLabel = this->fields.warningLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11615/*"SERVANT_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, 0LL);
                                                                          if ( !warningLabel )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            warningLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v51 = this->fields.decideLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11616/*"SERVANT_FRAME_PURCHASE_STONE"*/, 0LL);
                                                                          if ( !v51 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v51,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          v52 = this->fields.cancelLabel;
                                                                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11604/*"SERVANT_FRAME_PURCHASE_CANCEL"*/, 0LL);
                                                                          if ( !v52 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v52,
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
                                                                          v53 = &StringLiteral_11609/*"SERVANT_FRAME_PURCHASE_MESSAGE_END"*/;
                                                                          goto LABEL_111;
                                                                        case 3:
                                                                          cancelLabel = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v53 = &StringLiteral_11611/*"SERVANT_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
LABEL_111:
                                                                          v57 = LocalizationManager__Get(
                                                                                  (System_String_o *)*v53,
                                                                                  0LL);
                                                                          v58 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v58 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v58->static_fields->ServantFrameMax;
                                                                          v59 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax,
                                                                                                  v54,
                                                                                                  v55,
                                                                                                  v56);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v57, v59, 0LL);
                                                                          if ( !cancelLabel )
                                                                            goto LABEL_127;
LABEL_114:
                                                                          UILabel__set_text(
                                                                            cancelLabel,
                                                                            (System_String_o *)gameObject,
                                                                            0LL);
                                                                          goto LABEL_125;
                                                                        case 4:
                                                                          v60 = this->fields.messageLabel;
                                                                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                                          v64 = LocalizationManager__Get(
                                                                                  (System_String_o *)StringLiteral_11610/*"SERVANT_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/,
                                                                                  0LL);
                                                                          v65 = BalanceConfig_TypeInfo;
                                                                          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                                                                          {
                                                                            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                                                                            v65 = BalanceConfig_TypeInfo;
                                                                          }
                                                                          ServantFrameMax = v65->static_fields->ServantFrameMax;
                                                                          v66 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                                                                  int_TypeInfo,
                                                                                                  &ServantFrameMax,
                                                                                                  v61,
                                                                                                  v62,
                                                                                                  v63);
                                                                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v64, v66, 0LL);
                                                                          if ( !v60 )
                                                                            goto LABEL_127;
                                                                          UILabel__set_text(
                                                                            v60,
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
                                                                          v67 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                                                          System_Action___ctor(
                                                                            v67,
                                                                            (Il2CppObject *)this,
                                                                            Method_ServantFramePurchaseConfirmMenu_EndOpen__,
                                                                            0LL);
                                                                          BaseDialog__Open(
                                                                            (BaseDialog_o *)this,
                                                                            v67,
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
    sub_1B8880C(gameObject, v10);
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

  if ( (byte_4A562BE & 1) == 0 )
  {
    sub_1B885B0(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4A562BE = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A562BF & 1) == 0 )
  {
    sub_1B885B0(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4A562BF = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseConfirmMenu_o *)sub_1B88ACC(v8);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C6E88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C6E40;
}


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
  if ( (byte_4A562C8 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A562C8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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