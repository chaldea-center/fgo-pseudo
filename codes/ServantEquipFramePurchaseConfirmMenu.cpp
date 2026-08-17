void ServantEquipFramePurchaseConfirmMenu___ctor(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A92A & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A92A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantEquipFramePurchaseConfirmMenu__Callback(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v9; // x20
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ServantEquipFramePurchaseConfirmMenu__Close(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseConfirmMenu__Close_38508388(this, 0, v2);
}


void ServantEquipFramePurchaseConfirmMenu__Close_38508388(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596A925 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantEquipFramePurchaseConfirmMenu_EndClose__);
    byte_596A925 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantEquipFramePurchaseConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ServantEquipFramePurchaseConfirmMenu__EndClose(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  ServantEquipFramePurchaseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantEquipFramePurchaseConfirmMenu__EndOpen(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void ServantEquipFramePurchaseConfirmMenu__Init(ServantEquipFramePurchaseConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_596A923 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A923 = 1;
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
    sub_2213CDC(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantEquipFramePurchaseConfirmMenu__OnClickCancel(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596A927 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantEquipFramePurchaseConfirmMenu_OnClickCancel__);
    byte_596A927 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantEquipFramePurchaseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantEquipFramePurchaseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantEquipFramePurchaseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 0, v5);
  }
}


void ServantEquipFramePurchaseConfirmMenu__OnClickClose(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596A928 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantEquipFramePurchaseConfirmMenu_OnClickClose__);
    byte_596A928 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantEquipFramePurchaseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantEquipFramePurchaseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantEquipFramePurchaseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 0, v5);
  }
}


void ServantEquipFramePurchaseConfirmMenu__OnClickDecide(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t kind; // w9
  _QWORD *v4; // x0
  int32_t v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596A926 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantEquipFramePurchaseConfirmMenu_OnClickDecide__);
    byte_596A926 = 1;
  }
  if ( this->fields.state == 2 )
  {
    kind = this->fields.kind;
    this->fields.state = 3;
    v4 = Method_ServantEquipFramePurchaseConfirmMenu_OnClickDecide__;
    v5 = 8 * (kind == 0);
    if ( (*((_BYTE *)Method_ServantEquipFramePurchaseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ServantEquipFramePurchaseConfirmMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
    ServantEquipFramePurchaseConfirmMenu__Callback(this, 1, v7);
  }
}


void ServantEquipFramePurchaseConfirmMenu__OnEnable(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_596A929 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4827/*"ConfirmWindow/CloseButton"*/);
    sub_2213A60(&StringLiteral_4826/*"ConfirmWindow/CancelButton"*/);
    byte_596A929 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_4826/*"ConfirmWindow/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v4, (System_String_o *)StringLiteral_4827/*"ConfirmWindow/CloseButton"*/, 0);
}


void ServantEquipFramePurchaseConfirmMenu__Open(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        int32_t kind,
        StoneShopEntity_o *stoneShopEntity,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *titleLabel; // x21
  struct UserGameEntity_o *userGameEntity; // x8
  UILabel_o *stoneDataLabel; // x21
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *infoLabel3; // x21
  UILabel_o *numberLabel3; // x21
  struct UserGameEntity_o *v37; // x8
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
  UILabel_o *closeLabel; // x21
  bool v41; // w1
  UILabel_o *messageLabel; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *v45; // x22
  BalanceConfig_c *v46; // x8
  Il2CppObject *v47; // x0
  UILabel_o *infoLabel1; // x21
  UILabel_o *infoLabel2; // x21
  UILabel_o *numberLabel1; // x21
  struct UserGameEntity_o *v51; // x8
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  UILabel_o *numberLabel2; // x21
  struct UserGameEntity_o *v55; // x8
  System_String_o *v56; // x22
  Il2CppObject *v57; // x0
  UILabel_o *v58; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  System_String_o *v61; // x21
  BalanceConfig_c *v62; // x8
  Il2CppObject *v63; // x0
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *v67; // x20
  __int64 *v68; // x8
  __int64 v69; // x1
  __int64 v70; // x2
  System_String_o *v71; // x21
  BalanceConfig_c *v72; // x8
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  UILabel_o *v76; // x20
  System_Action_o *v77; // x20
  int v78; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t svtEquipKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t ServantEquipFrameMax; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596A924 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__);
    sub_2213A60(&StringLiteral_12121/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/);
    sub_2213A60(&StringLiteral_12119/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/);
    sub_2213A60(&StringLiteral_12124/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/);
    sub_2213A60(&StringLiteral_12126/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/);
    sub_2213A60(&StringLiteral_12129/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12123/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/);
    sub_2213A60(&StringLiteral_12127/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/);
    sub_2213A60(&StringLiteral_12120/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/);
    sub_2213A60(&StringLiteral_12130/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/);
    sub_2213A60(&StringLiteral_12122/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/);
    sub_2213A60(&StringLiteral_12118/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/);
    sub_2213A60(&StringLiteral_12125/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/);
    sub_2213A60(&StringLiteral_12128/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12131/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/);
    byte_596A924 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.stoneShopEntity = stoneShopEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.stoneShopEntity,
      (int32_t)stoneShopEntity,
      (System_String_o *)stoneShopEntity,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_132;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    this->fields.userGameEntity = SelfUserGame;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
      (int32_t)SelfUserGame,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SERVANT_EQUIP_FRAME_PURCHASE_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_132;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    userGameEntity = this->fields.userGameEntity;
    if ( !userGameEntity )
      goto LABEL_132;
    stoneDataLabel = this->fields.stoneDataLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat(userGameEntity->fields.stone, 0);
    if ( !stoneDataLabel )
      goto LABEL_132;
    UILabel__set_text(stoneDataLabel, (System_String_o *)gameObject, 0);
    if ( (unsigned int)kind < 2 )
    {
      messageLabel = this->fields.messageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v32);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12126/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_START"*/, 0);
      v46 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v43, v44);
        v46 = BalanceConfig_TypeInfo;
      }
      ServantEquipFrameMax = v46->static_fields->ServantEquipFrameMax;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantEquipFrameMax);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v45, v47, 0);
      if ( !messageLabel )
        goto LABEL_132;
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      infoLabel1 = this->fields.infoLabel1;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/, 0);
      if ( !infoLabel1 )
        goto LABEL_132;
      UILabel__set_text(infoLabel1, (System_String_o *)gameObject, 0);
      infoLabel2 = this->fields.infoLabel2;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12122/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO2"*/, 0);
      if ( !infoLabel2 )
        goto LABEL_132;
      UILabel__set_text(infoLabel2, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      numberLabel1 = this->fields.numberLabel1;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12127/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO1"*/, 0);
      v51 = this->fields.userGameEntity;
      if ( !v51 )
        goto LABEL_132;
      v52 = (System_String_o *)gameObject;
      svtEquipKeep = v51->fields.svtEquipKeep;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtEquipKeep);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0);
      if ( !numberLabel1 )
        goto LABEL_132;
      UILabel__set_text(numberLabel1, (System_String_o *)gameObject, 0);
      numberLabel2 = this->fields.numberLabel2;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/, 0);
      v55 = this->fields.userGameEntity;
      if ( !v55 )
        goto LABEL_132;
      v56 = (System_String_o *)gameObject;
      v78 = BalanceConfig_TypeInfo->static_fields->ServantEquipFrameUseStone + v55->fields.svtEquipKeep;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v78);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v56, v57, 0);
      if ( !numberLabel2 )
        goto LABEL_132;
      UILabel__set_text(numberLabel2, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_132;
      v41 = 0;
    }
    else
    {
      if ( (unsigned int)(kind - 5) < 0xFFFFFFFD )
        goto LABEL_79;
      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel1;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel2;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      infoLabel3 = this->fields.infoLabel3;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SERVANT_EQUIP_FRAME_PURCHASE_INFO1"*/, 0);
      if ( !infoLabel3 )
        goto LABEL_132;
      UILabel__set_text(infoLabel3, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel2;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      numberLabel3 = this->fields.numberLabel3;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SERVANT_EQUIP_FRAME_PURCHASE_NUMBERO2"*/, 0);
      v37 = this->fields.userGameEntity;
      if ( !v37 )
        goto LABEL_132;
      v38 = (System_String_o *)gameObject;
      ServantEquipFrameMax = v37->fields.svtEquipKeep;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantEquipFrameMax);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v38, v39, 0);
      if ( !numberLabel3 )
        goto LABEL_132;
      UILabel__set_text(numberLabel3, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      closeLabel = this->fields.closeLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12119/*"SERVANT_EQUIP_FRAME_PURCHASE_CLOSE"*/, 0);
      if ( !closeLabel )
        goto LABEL_132;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
      if ( !gameObject )
        goto LABEL_132;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_132;
      v41 = 1;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, v41, 0);
LABEL_79:
    if ( kind <= 1 )
    {
      if ( kind )
      {
        if ( kind != 1 )
          goto LABEL_130;
        warningLabel = this->fields.warningLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v32);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SERVANT_EQUIP_FRAME_PURCHASE_REQUEST_STONE_MESSAGE"*/, 0);
        if ( warningLabel )
        {
          UILabel__set_text(warningLabel, (System_String_o *)gameObject, 0);
          decideLabel = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12130/*"SERVANT_EQUIP_FRAME_PURCHASE_STONE"*/, 0);
          if ( decideLabel )
          {
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12118/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, 0);
            if ( cancelLabel )
            {
              UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
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
                          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel1;
                          if ( gameObject )
                          {
                            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
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
                                      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.spritIconSprite;
                                      if ( gameObject )
                                      {
LABEL_112:
                                        gameObject = UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)gameObject,
                                                       0);
                                        if ( !gameObject )
                                          goto LABEL_132;
                                        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                                        goto LABEL_130;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_132;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.warningLabel;
      if ( !gameObject )
        goto LABEL_132;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      v76 = this->fields.decideLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74, v75);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12120/*"SERVANT_EQUIP_FRAME_PURCHASE_DECIDE"*/, 0);
      if ( !v76 )
        goto LABEL_132;
      UILabel__set_text(v76, (System_String_o *)gameObject, 0);
      v67 = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12118/*"SERVANT_EQUIP_FRAME_PURCHASE_CANCEL"*/, 0);
      if ( !v67 )
        goto LABEL_132;
    }
    else
    {
      switch ( kind )
      {
        case 2:
          v67 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v32);
          v68 = &StringLiteral_12123/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_END"*/;
          break;
        case 3:
          v67 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v32);
          v68 = &StringLiteral_12125/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_MAX_FRAME"*/;
          break;
        case 4:
          v58 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v32);
          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12124/*"SERVANT_EQUIP_FRAME_PURCHASE_MESSAGE_INFO_NONE"*/, 0);
          v62 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v59, v60);
            v62 = BalanceConfig_TypeInfo;
          }
          ServantEquipFrameMax = v62->static_fields->ServantEquipFrameMax;
          v63 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantEquipFrameMax);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v61, v63, 0);
          if ( !v58 )
            goto LABEL_132;
          UILabel__set_text(v58, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.infoLabel3;
          if ( !gameObject )
            goto LABEL_132;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_132;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.numberLabel3;
          if ( !gameObject )
            goto LABEL_132;
          goto LABEL_112;
        default:
LABEL_130:
          this->fields.state = 1;
          v77 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v77, (Il2CppObject *)this, Method_ServantEquipFramePurchaseConfirmMenu_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0, 0);
          return;
      }
      v71 = LocalizationManager__Get((System_String_o *)*v68, 0);
      v72 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v69, v70);
        v72 = BalanceConfig_TypeInfo;
      }
      ServantEquipFrameMax = v72->static_fields->ServantEquipFrameMax;
      v73 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &ServantEquipFrameMax);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v71, v73, 0);
      if ( !v67 )
LABEL_132:
        sub_2213CDC(gameObject, v19);
    }
    UILabel__set_text(v67, (System_String_o *)gameObject, 0);
    goto LABEL_130;
  }
}


void ServantEquipFramePurchaseConfirmMenu__add_callbackFunc(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantEquipFramePurchaseConfirmMenu_o *v13; // x0
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596A921 & 1) == 0 )
  {
    sub_2213A60(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_596A921 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantEquipFramePurchaseConfirmMenu_o *)sub_221405C(
                                                    v8,
                                                    ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10);
  ServantEquipFramePurchaseConfirmMenu__remove_callbackFunc(v13, v14, v15);
}


void ServantEquipFramePurchaseConfirmMenu__remove_callbackFunc(
        ServantEquipFramePurchaseConfirmMenu_o *this,
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantEquipFramePurchaseConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596A922 & 1) == 0 )
  {
    sub_2213A60(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    byte_596A922 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantEquipFramePurchaseConfirmMenu_o *)sub_221405C(
                                                    v8,
                                                    ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                    v9,
                                                    v10);
  ServantEquipFramePurchaseConfirmMenu__Init(v13, v14);
}


void ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2001138;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20010F0;
}


System_IAsyncResult_o *ServantEquipFramePurchaseConfirmMenu_CallbackFunc__BeginInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ServantEquipFramePurchaseConfirmMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ServantEquipFramePurchaseConfirmMenu_CallbackFunc__Invoke(
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}