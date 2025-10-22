void SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4C5321E & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    byte_4C5321E = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_C11B10;
  *(_OWORD *)&static_fields->PRIVILEGE_SUMMON_MESSAGE_WIDTH_THRESHOLD = xmmword_C11C20;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_C13320;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C5321D & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C5321D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *bonusSelectBeforeMessage; // x22
  System_String_o *v10; // x23
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v22; // x4
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  v24 = haveFreeStoneNum;
  if ( (byte_4C5320A & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2950/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_397/*"#,0"*/);
    sub_1C3E564(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4C5320A = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2950/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0);
  v23 = haveChargeStoneNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v11, v12, v13, v14, v15, v16);
  v18 = (Il2CppObject *)System_Int32__ToString_65146576((int32_t)&v24, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
  v19 = System_String__Format_63677760(v10, v17, v18, 0);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v19, 0),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1C3E7C0(v19, v20);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v19, 0);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v22);
}


void SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        int32_t haveStoneNum,
        int32_t haveFreeStoneNum,
        int32_t haveChargeStoneNum,
        int32_t gachaId,
        BonusSelectSummonAssetManager_o *assetManager,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        const MethodInfo *method)
{
  System_String_o *v17; // x24
  System_String_o *v18; // x28
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x27
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x26
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  System_String_o *baseWindow; // x0
  __int64 v41; // x1
  System_String_o *v42; // x25
  UIWidget_o *baseWindowSprite; // x26
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v52; // x0
  const MethodInfo *v53; // [xsp+10h] [xbp-80h]
  int32_t v54; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v55; // [xsp+28h] [xbp-68h] BYREF
  int32_t v56; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C5320B & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_12374/*"STONE_PURCHASE"*/);
    sub_1C3E564(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C3E564(&StringLiteral_2954/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_2955/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/);
    byte_4C5320B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0);
  v56 = haveStoneNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v19, v20, v21, v22, v23, v24);
  v55 = haveChargeStoneNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v26, v27, v28, v29, v30, v31);
  v54 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v33, v34, v35, v36, v37, v38);
  baseWindow = System_String__Format_63677828(v18, v25, v32, v39, 0);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v42 = baseWindow;
  UnityEngine_GameObject__SetActive(this->fields.bonusSelectNotHaveChargeStoneBeforeInfo, 0, 0);
  baseWindow = (System_String_o *)SummonConfirmDlgComponent_TypeInfo;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
  if ( !baseWindowSprite )
    goto LABEL_25;
  UIWidget__set_width(baseWindowSprite, SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH, 0);
  baseWindow = (System_String_o *)this->fields.baseWindowSprite;
  if ( !baseWindow )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)baseWindow, 580, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
  baseWindow = (System_String_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    if ( assetManager )
    {
      baseWindow = (System_String_o *)this->fields.baseWindow;
      if ( baseWindow )
      {
        MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__51929056(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo, (int32_t)Component_object, v49, v50);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1C3E7C0(baseWindow, v41);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v17,
    v42,
    tryGetBonusSelectData,
    assetManager,
    0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0);
  this->fields.state = 4;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12374/*"STONE_PURCHASE"*/, 0);
  SummonConfirmDlgComponent__Open(this, 0, 0, v52, callback, 14.0, 0, 0, 0, 1, 0, v53);
}


void SummonConfirmDlgComponent__Callback(SummonConfirmDlgComponent_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_35555300(this, 0, v2);
}


void SummonConfirmDlgComponent__Close_35555300(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C53219 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_4C53219 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4C5321A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5321A = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, 0);
      goto LABEL_9;
    }
LABEL_12:
    sub_1C3E7C0(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  unsigned int v6; // w22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v8; // w8
  unsigned int v9; // w21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  SummonConfirmDlgComponent_c *v13; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4C53207 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C3E564(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53207 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  extraMessageLabels = this->fields.extraMessageLabels;
  if ( !extraMessageLabels )
    goto LABEL_65;
  max_length = extraMessageLabels->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v6];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1C3E7C8(confirmTitleLabel, method);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v8 = extraItemIconComponents->max_length;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( v9 < v8 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v9];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0);
      v8 = extraItemIconComponents->max_length;
      if ( (int)++v9 >= v8 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_65;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0);
  v13 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v13 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v13->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v15, -64.0, 0);
  this->fields.extraGiftEntList = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, 0, v16, v17);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v18,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v19,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingX(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_X,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingY(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_Y,
    0);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_65;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, 0);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_65:
    sub_1C3E7C0(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  *(_QWORD *)&this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonConfirmDlgComponent__OnClickCancel(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 0, v2);
}


void SummonConfirmDlgComponent__OnClickDecide(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 1, v2);
}


void SummonConfirmDlgComponent__OnClickSetting(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_4C5321B & 1) == 0 )
  {
    sub_1C3E564(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SummonConfirmDlgComponent_OnClickSetting__);
    sub_1C3E564(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_4C5321B = 1;
  }
  v3 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C3E7B0(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0),
        !autoSaleDlgInfo) )
  {
    sub_1C3E7C0(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0);
}


void SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4C5321C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_4649/*"ConfirmWindow/CloseButton"*/);
    sub_1C3E564(&StringLiteral_4651/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    sub_1C3E564(&StringLiteral_4647/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/);
    byte_4C5321C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(transform, (System_String_o *)StringLiteral_4651/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(v4, (System_String_o *)StringLiteral_4649/*"ConfirmWindow/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45015816(v5, (System_String_o *)StringLiteral_4647/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0);
}


void SummonConfirmDlgComponent__Open(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        System_String_o *msg,
        System_String_o *decideTxt,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        float msgOffY,
        System_String_o *addMsg,
        int32_t shopIdIdx,
        bool isAppendSummon,
        bool isBonusSelect,
        GachaSubEntity_o *gachaSubEntity,
        const MethodInfo *method)
{
  __int64 v21; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v27; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v29; // x1
  UnityEngine_GameObject_o *v30; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v33; // x27
  int32_t v34; // w25
  UILabel_o *v35; // x27
  UILabel_o *v36; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v38; // x25
  int32_t v39; // w23
  float CONFIRM_TITLE_LABEL_POS_Y; // s8
  SummonConfirmDlgComponent_c *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v44; // w0
  float v45; // s8
  int32_t v46; // w24
  float v47; // s9
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  struct UILabel_o *addMsgLabel; // x8
  int32_t mWidth; // w22
  UIWidget_o *addMsgBgSprite; // x22
  UILabel_o *v53; // x22
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v57; // x22
  System_Func_object__bool__o **v58; // x24
  System_Func_object__bool__o *v59; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x25
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  SummonConfirmDlgComponent___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x25
  System_Func_object__int__o *_9__75_1; // x26
  Il2CppObject *v67; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_ICollection_o *v72; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v74; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v76; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v78; // w8
  bool v79; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v84; // s0
  float v85; // s1
  float v86; // s8
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  bool v89; // w1
  const MethodInfo *v90; // x1
  System_Action_o *v91; // x20

  if ( (byte_4C53212 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C3E564(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&Method_SummonConfirmDlgComponent___c__Open_b__75_1__);
    sub_1C3E564(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__);
    sub_1C3E564(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C3E564(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53212 = 1;
  }
  v21 = sub_1C3E7B0(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_147;
  *(_DWORD *)(v21 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_147;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v24, v25);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    if ( title )
      v27 = title;
    else
      v27 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v27, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v29 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v29, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v30, msgOffY, 0);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0);
      v33 = this->fields.confirmDetailLabel;
      v34 = (int)gameObject;
      if ( SummonConfirmMessageSpacingX == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingX = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 16);
      }
      if ( !v33 )
        goto LABEL_147;
      UILabel__set_spacingX(v33, SummonConfirmMessageSpacingX, 0);
      v35 = this->fields.confirmDetailLabel;
      if ( SummonConfirmMessageSpacingY == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingY = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 20);
      }
      if ( !v35 )
        goto LABEL_147;
      UILabel__set_spacingY(v35, SummonConfirmMessageSpacingY, 0);
      v36 = this->fields.confirmDetailLabel;
      if ( !v34 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v34 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      if ( !v36 )
        goto LABEL_147;
      UILabel__set_fontSize(v36, v34, 0);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v38 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v38 )
      goto LABEL_147;
    UILabel__set_text(v38, decideTxt, 0);
  }
  v39 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0);
  if ( this->fields.state == 5 )
  {
    if ( v39 <= 2 )
    {
      v41 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v41 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y = v41->static_fields->CONFIRM_TITLE_LABEL_POS_Y;
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y = 164.0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v42, CONFIRM_TITLE_LABEL_POS_Y, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v44 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v44 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v39 <= 2 )
      v45 = 54.0;
    else
      v45 = 43.0;
    if ( v39 <= 2 )
      v46 = 20;
    else
      v46 = 18;
    if ( !gameObject )
      goto LABEL_147;
    v47 = v39 <= 2 ? 188.0 : 178.0;
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v48, v47, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v49, v45, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_fontSize((UILabel_o *)gameObject, v46, 0);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_147;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_147;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0);
    addMsgLabel = this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_147;
    mWidth = addMsgLabel->fields.mWidth;
    gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( mWidth > *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 28) )
    {
      addMsgBgSprite = (UIWidget_o *)this->fields.addMsgBgSprite;
      if ( !LODWORD(gameObject[9].monitor) )
        j_il2cpp_runtime_class_init_0(gameObject);
      if ( !addMsgBgSprite )
        goto LABEL_147;
      UIWidget__set_width(
        addMsgBgSprite,
        SummonConfirmDlgComponent_TypeInfo->static_fields->PRIVILEGE_SUMMON_MAX_FRAME_SIZE,
        0);
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    v53 = this->fields.addMsgLabel;
    if ( !LODWORD(gameObject[9].monitor) )
      j_il2cpp_runtime_class_init_0(gameObject);
    if ( !v53 )
      goto LABEL_147;
    UILabel__SetCondensedScale(
      v53,
      SummonConfirmDlgComponent_TypeInfo->static_fields->PRIVILEGE_SUMMON_ADD_MESSAGE_MAX_WIDTH,
      0,
      0);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_136;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( extraGiftEntList->max_length )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_147;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_147;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_147;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v21 + 20) = 1;
      v57 = (GiftMaster_o *)MasterData_object;
      v58 = (System_Func_object__bool__o **)(v21 + 24);
      while ( 1 )
      {
        v59 = *v58;
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v58 )
        {
          v59 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v59,
            (Il2CppObject *)v21,
            Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__,
            0);
          *(_QWORD *)(v21 + 24) = v59;
          sub_1C3E508((CGThumbnailListItem_o *)(v21 + 24), (int32_t)v59, v61, v62);
        }
        v63 = System_Linq_Enumerable__Where_object_(
                v60,
                (System_Func_TSource__bool__o *)v59,
                (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v64 = SummonConfirmDlgComponent___c_TypeInfo;
        v65 = v63;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v64 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__75_1 = (System_Func_object__int__o *)v64->static_fields->__9__75_1;
        if ( !_9__75_1 )
        {
          if ( !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            v64 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v67 = (Il2CppObject *)v64->static_fields->__9;
          _9__75_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__75_1, v67, Method_SummonConfirmDlgComponent___c__Open_b__75_1__, 0);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__75_1, (int32_t)_9__75_1, v69, v70);
        }
        v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v65,
                                                                     (System_Func_TSource__TResult__o *)_9__75_1,
                                                                     (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v72 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v71,
                                                    (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v72, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v57 )
            goto LABEL_147;
          GiftListByIds = GiftMaster__GetGiftListByIds(v57, (System_Collections_Generic_IEnumerable_int__o *)v72, 0);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v21 + 20), v74);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v76);
            goto LABEL_116;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 2 )
            break;
        }
        v78 = *(_DWORD *)(v21 + 20) + 1;
        v79 = *(_DWORD *)(v21 + 20) - 2 < 0;
        *(_DWORD *)(v21 + 20) = v78;
        if ( v79 == __OFSUB__(v78, 3) )
          goto LABEL_116;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v23);
LABEL_116:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        if ( !baseWindowSprite )
          goto LABEL_147;
        UIWidget__set_width(
          baseWindowSprite,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
          0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
        if ( !gameObject )
          goto LABEL_147;
        UIWidget__set_height((UIWidget_o *)gameObject, 580, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
        gameObject = this->fields.bonusMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v81 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(
          v81,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v82 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v84 = -42.0;
        if ( v39 > 2 )
          v84 = -44.0;
        v85 = -34.0;
        if ( v39 <= 2 )
          v85 = -30.0;
        if ( isAppendSummon )
          v86 = v85;
        else
          v86 = v84;
        if ( !gameObject )
          goto LABEL_147;
        v87 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(v87, v86, 0);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_147;
        v88 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        GameObjectExtensions__SetLocalPositionY(v88, v86, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_147;
        v82 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v82, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0);
    }
LABEL_136:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_147;
    v89 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_147;
    v89 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v89, 0);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.singleMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.defMsgInfo) == 0) )
  {
LABEL_147:
    sub_1C3E7C0(gameObject, v23);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v90);
  v91 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v91, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4C53214 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SummonConfirmDlgComponent_EndOpen__);
    byte_4C53214 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.defMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.confirmBtnObject) == 0) )
  {
    sub_1C3E7C0(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        int32_t gachaId,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  System_String_o *v10; // x0
  SummonConfirmDlgComponent_c *v11; // x8
  Il2CppObject *v12; // x23
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  bool v14; // w22
  System_String_o *v15; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  System_String_o *v25; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v27; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x25
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  SummonConfirmDlgComponent_c *v44; // x0
  System_String_o *v45; // x0
  const MethodInfo *v46; // [xsp+10h] [xbp-80h]
  int32_t v47; // [xsp+20h] [xbp-70h] BYREF
  int32_t v48; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v49; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4C53210 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&UserGachaMaster_TypeInfo);
    sub_1C3E564(&StringLiteral_3751/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_1C3E564(&StringLiteral_3750/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_1C3E564(&StringLiteral_6555/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_4C53210 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v9->static_fields->DailyFreeGachaResetTime;
  v10 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0);
  v11 = SummonConfirmDlgComponent_TypeInfo;
  v12 = (Il2CppObject *)v10;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v11 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v11->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v14 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v14 )
      goto LABEL_11;
LABEL_18:
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3751/*"CONFIRM_FREESUMMON_MSG"*/, 0);
    v25 = System_String__Format(v45, v12, 0);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v14 )
    goto LABEL_18;
LABEL_11:
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0);
  v49 = maxNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v16, v17, v18, v19, v20, v21);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(v15, v12, v22, 0);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v25 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  campaignLabel = this->fields.campaignLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6555/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0);
  v48 = remainNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v28, v29, v30, v31, v32, v33);
  v47 = maxNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v35, v36, v37, v38, v39, v40);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(v27, v34, v41, 0);
  if ( !campaignLabel )
LABEL_20:
    sub_1C3E7C0(gameObject, v24);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0);
  v44 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v44 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v44->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v42,
    v43);
  SummonConfirmDlgComponent__Open(this, 0, v25, 0, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0, 0, 0, 0, 0, v46);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenConfirmGroupSummon(
        SummonConfirmDlgComponent_o *this,
        int32_t groupId,
        int32_t price,
        int32_t haveStoneNum,
        int32_t haveFreeStoneNum,
        int32_t haveChargeStoneNum,
        int32_t afterStoneNum,
        int32_t afterFreeStoneNum,
        int32_t afterChargeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        GachaExtraGiftEntity_array *giftEntList,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v21; // x1
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 MasterData_object; // x0
  GachaMaster_o *v26; // x20
  GachaEntity_array *GachaDataInGroup; // x28
  Il2CppObject *Entity; // x29
  char v29; // w25
  int32_t v30; // w21
  Il2CppClass *klass; // x8
  GachaEntity_o *v32; // x8
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v34; // w27
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t max_length; // w22
  GachaEntity_o *v38; // x8
  GachaEntity_o *v39; // x9
  Il2CppObject *name; // x22
  Il2CppObject *v41; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Object_array *v46; // x29
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x21
  int32_t v67; // w21
  __int64 monitor; // x21
  System_String_o **v69; // x8
  GachaEntity_o *v70; // x9
  System_String_o *v71; // x20
  UILabel_o *v72; // x28
  System_String_o *v73; // x29
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Object_array *v76; // x20
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x5
  __int64 v81; // x6
  __int64 v82; // x7
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  __int64 v89; // x5
  __int64 v90; // x6
  __int64 v91; // x7
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x21
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x5
  __int64 v99; // x6
  __int64 v100; // x7
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  Il2CppObject *v103; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v105; // x27
  System_Object_array *v106; // x28
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  __int64 v110; // x5
  __int64 v111; // x6
  __int64 v112; // x7
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  Il2CppObject *v115; // x20
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  __int64 v119; // x5
  __int64 v120; // x6
  __int64 v121; // x7
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  Il2CppObject *v124; // x20
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  __int64 v128; // x5
  __int64 v129; // x6
  __int64 v130; // x7
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  Il2CppObject *v133; // x20
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  __int64 v137; // x5
  __int64 v138; // x6
  __int64 v139; // x7
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  Il2CppObject *v142; // x20
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  __int64 v146; // x5
  __int64 v147; // x6
  __int64 v148; // x7
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  Il2CppObject *v151; // x20
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  __int64 v155; // x5
  __int64 v156; // x6
  __int64 v157; // x7
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  Il2CppObject *v160; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v162; // x2
  const MethodInfo *v163; // x1
  System_Action_o *v164; // x20
  __int64 v165; // x0
  int32_t v166; // [xsp+4h] [xbp-8Ch]
  int32_t v167; // [xsp+8h] [xbp-88h]
  int32_t v168; // [xsp+Ch] [xbp-84h]
  int32_t v169; // [xsp+10h] [xbp-80h]
  int32_t v170; // [xsp+14h] [xbp-7Ch]
  int32_t v171; // [xsp+18h] [xbp-78h] BYREF
  int32_t v172; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v173; // [xsp+20h] [xbp-70h] BYREF
  int32_t v174; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v175; // [xsp+28h] [xbp-68h] BYREF
  int32_t v176; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C53213 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C3E564(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C3E564(&StringLiteral_3756/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/);
    sub_1C3E564(&StringLiteral_3757/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_1C3E564(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C3E564(&StringLiteral_3754/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_3755/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    byte_4C53213 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    price,
    *(const MethodInfo **)&haveStoneNum);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C8EC78(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C8EC78(v22);
  MasterData_object = **(_QWORD **)(v24 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v170 = price;
  v168 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v26 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v169 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  MasterData_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GachaDataInGroup, 0);
  v29 = 1;
  if ( (MasterData_object & 1) != 0 )
    goto LABEL_20;
  v30 = 1;
  if ( !Entity )
    goto LABEL_21;
  klass = Entity[2].klass;
  if ( !klass )
    goto LABEL_100;
  if ( !LODWORD(klass->_1.namespaze) )
  {
    v29 = 1;
LABEL_20:
    v30 = 1;
    goto LABEL_21;
  }
  MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v26, groupId, 0);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  if ( !LODWORD(GachaDataInGroup->max_length) )
LABEL_101:
    sub_1C3E7C8(MasterData_object, v21);
  v32 = GachaDataInGroup->m_Items[0];
  if ( !v32 )
    goto LABEL_100;
  v29 = 0;
  v30 = (int)MasterData_object / v32->fields.drawNum1;
LABEL_21:
  v167 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v166 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v34 = System_Math__Max_65159900(v30, 1, 0);
  this->fields.extraGiftEntList = giftEntList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v35, v36);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v38 = GachaDataInGroup->m_Items[0];
    if ( v38 )
    {
      v39 = GachaDataInGroup->m_Items[1];
      if ( v39 )
      {
        name = (Il2CppObject *)v38->fields.name;
        v41 = (Il2CppObject *)v39->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0);
        MasterData_object = sub_1C3E60C(object___TypeInfo, 4);
        if ( MasterData_object )
        {
          v46 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1C3E6A0(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !LODWORD(v46->max_length) )
            goto LABEL_101;
          v46->m_Items[0] = name;
          sub_1C3E508((CGThumbnailListItem_o *)v46->m_Items, (int32_t)name, v44, v45);
          if ( v41 )
          {
            MasterData_object = sub_1C3E6A0(v41, v46->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v46->max_length) <= 1 )
            goto LABEL_101;
          v46->m_Items[1] = v41;
          sub_1C3E508((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v41, v47, v48);
          v176 = v34;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v176, v49, v50, v51, v52, v53, v54);
          v57 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C3E6A0(MasterData_object, v46->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v46->max_length) <= 2 )
            goto LABEL_101;
          v46->m_Items[2] = v57;
          sub_1C3E508((CGThumbnailListItem_o *)&v46->m_Items[2], (int32_t)v57, v55, v56);
          v175 = v170;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v175, v58, v59, v60, v61, v62, v63);
          v66 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C3E6A0(MasterData_object, v46->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( LODWORD(v46->max_length) <= 3 )
            goto LABEL_101;
          v46->m_Items[3] = v66;
          sub_1C3E508((CGThumbnailListItem_o *)&v46->m_Items[3], (int32_t)v66, v64, v65);
          MasterData_object = (__int64)System_String__Format_63677896(v43, v46, 0);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0);
          v67 = v169;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1C3E7C0(MasterData_object, v21);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0);
  if ( (MasterData_object & 1) == 0 )
    monitor = (__int64)Entity[1].monitor;
  v69 = (System_String_o **)&StringLiteral_3755/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v29 & 1) == 0 )
  {
    if ( !LODWORD(GachaDataInGroup->max_length) )
      goto LABEL_101;
    v70 = GachaDataInGroup->m_Items[0];
    if ( !v70 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v70->fields.drawNum1 > 1 )
      v69 = (System_String_o **)&StringLiteral_3756/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v71 = *v69;
  v72 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v73 = LocalizationManager__Get(v71, 0);
  MasterData_object = sub_1C3E60C(object___TypeInfo, 4);
  if ( !MasterData_object )
    goto LABEL_100;
  v76 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1C3E6A0(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !LODWORD(v76->max_length) )
    goto LABEL_101;
  v76->m_Items[0] = (Il2CppObject *)monitor;
  sub_1C3E508((CGThumbnailListItem_o *)v76->m_Items, monitor, v74, v75);
  v176 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v176, v77, v78, v79, v80, v81, v82);
  v85 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 1 )
    goto LABEL_101;
  v76->m_Items[1] = v85;
  sub_1C3E508((CGThumbnailListItem_o *)&v76->m_Items[1], (int32_t)v85, v83, v84);
  v175 = v34;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v175, v86, v87, v88, v89, v90, v91);
  v94 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 2 )
    goto LABEL_101;
  v76->m_Items[2] = v94;
  sub_1C3E508((CGThumbnailListItem_o *)&v76->m_Items[2], (int32_t)v94, v92, v93);
  v174 = v170;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v174, v95, v96, v97, v98, v99, v100);
  v103 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v76->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v76->max_length) <= 3 )
    goto LABEL_101;
  v76->m_Items[3] = v103;
  sub_1C3E508((CGThumbnailListItem_o *)&v76->m_Items[3], (int32_t)v103, v101, v102);
  MasterData_object = (__int64)System_String__Format_63677896(v73, v76, 0);
  if ( !v72 )
    goto LABEL_100;
  UILabel__set_text(v72, (System_String_o *)MasterData_object, 0);
  v67 = v169;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v105 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0);
  v106 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 6);
  v176 = v67;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v176, v107, v108, v109, v110, v111, v112);
  if ( !v106 )
    goto LABEL_100;
  v115 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v106->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !LODWORD(v106->max_length) )
    goto LABEL_101;
  v106->m_Items[0] = v115;
  sub_1C3E508((CGThumbnailListItem_o *)v106->m_Items, (int32_t)v115, v113, v114);
  v175 = v168;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v175, v116, v117, v118, v119, v120, v121);
  v124 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v106->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v106->max_length) <= 1 )
    goto LABEL_101;
  v106->m_Items[1] = v124;
  sub_1C3E508((CGThumbnailListItem_o *)&v106->m_Items[1], (int32_t)v124, v122, v123);
  v174 = v167;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v174, v125, v126, v127, v128, v129, v130);
  v133 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v106->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v106->max_length) <= 2 )
    goto LABEL_101;
  v106->m_Items[2] = v133;
  sub_1C3E508((CGThumbnailListItem_o *)&v106->m_Items[2], (int32_t)v133, v131, v132);
  v173 = v166;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v173, v134, v135, v136, v137, v138, v139);
  v142 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v106->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v106->max_length) <= 3 )
    goto LABEL_101;
  v106->m_Items[3] = v142;
  sub_1C3E508((CGThumbnailListItem_o *)&v106->m_Items[3], (int32_t)v142, v140, v141);
  v172 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v172, v143, v144, v145, v146, v147, v148);
  v151 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v106->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( LODWORD(v106->max_length) <= 4 )
    goto LABEL_101;
  v106->m_Items[4] = v151;
  sub_1C3E508((CGThumbnailListItem_o *)&v106->m_Items[4], (int32_t)v151, v149, v150);
  v171 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v171, v152, v153, v154, v155, v156, v157);
  v160 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C3E6A0(MasterData_object, v106->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v165 = sub_1C3E7E4();
      sub_1C3E68C(v165, 0);
    }
  }
  if ( LODWORD(v106->max_length) <= 5 )
    goto LABEL_101;
  v106->m_Items[5] = v160;
  sub_1C3E508((CGThumbnailListItem_o *)&v106->m_Items[5], (int32_t)v160, v158, v159);
  MasterData_object = (__int64)System_String__Format_63677896(v105, v106, 0);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_100;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0);
  MasterData_object = (__int64)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
  MasterData_object = (__int64)this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
  MasterData_object = (__int64)this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  if ( *p_extraGiftEntList && (*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v162);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v163);
  v164 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v164, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v164, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenConfirmOnePayFree(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  Il2CppObject *v8; // x22
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // [xsp+10h] [xbp-50h]
  int32_t GachaDailyMaxDrawNumResetAt; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4C53211 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3759/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/);
    byte_4C53211 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v7->static_fields->GachaDailyMaxDrawNumResetAt;
  v8 = (Il2CppObject *)System_Int32__ToString((int32_t)&GachaDailyMaxDrawNumResetAt, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/, 0);
  v10 = System_String__Format(v9, v8, 0);
  this->fields.state = 9;
  SummonConfirmDlgComponent__Open(this, title, v10, 0, callback, 35.0, 0, 0, 0, 0, 0, v11);
}


void SummonConfirmDlgComponent__OpenConfirmPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePointNum,
        int32_t gachaTime,
        int32_t needPointNum,
        int32_t afterPointNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        System_String_o *summonConfirmMessage,
        GachaSubEntity_o *gachaSubEntity,
        const MethodInfo *method)
{
  System_String_o *v17; // x26
  System_Object_array *v18; // x27
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *v29; // x29
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x28
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x28
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x28
  System_String_o *v57; // x26
  __int64 v58; // x2
  const MethodInfo *v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x25
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  Il2CppObject *v71; // x24
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  Il2CppObject *v78; // x0
  SummonConfirmDlgComponent_c *v79; // x0
  __int64 v80; // x0
  const MethodInfo *v81; // [xsp+10h] [xbp-80h]
  int32_t v83; // [xsp+20h] [xbp-70h] BYREF
  int32_t v84; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v85; // [xsp+28h] [xbp-68h] BYREF
  int32_t v86; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C5320F & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_3761/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_4C5320F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"CONFIRM_POINTSUMMON_MSG"*/, 0);
  v18 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
  v86 = needPointNum;
  v25 = j_il2cpp_value_box_0(int_TypeInfo, &v86, v19, v20, v21, v22, v23, v24);
  if ( !v18 )
    sub_1C3E7C0(v25, v26);
  v29 = (Il2CppObject *)v25;
  if ( v25 )
  {
    v25 = sub_1C3E6A0(v25, v18->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_24;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_23;
  v18->m_Items[0] = v29;
  sub_1C3E508((CGThumbnailListItem_o *)v18->m_Items, (int32_t)v29, v27, v28);
  v85 = gachaTime;
  v25 = j_il2cpp_value_box_0(int_TypeInfo, &v85, v30, v31, v32, v33, v34, v35);
  v38 = (Il2CppObject *)v25;
  if ( v25 )
  {
    v25 = sub_1C3E6A0(v25, v18->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_23;
  v18->m_Items[1] = v38;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[1], (int32_t)v38, v36, v37);
  v84 = havePointNum;
  v25 = j_il2cpp_value_box_0(int_TypeInfo, &v84, v39, v40, v41, v42, v43, v44);
  v47 = (Il2CppObject *)v25;
  if ( v25 )
  {
    v25 = sub_1C3E6A0(v25, v18->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_23;
  v18->m_Items[2] = v47;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[2], (int32_t)v47, v45, v46);
  v83 = afterPointNum;
  v25 = j_il2cpp_value_box_0(int_TypeInfo, &v83, v48, v49, v50, v51, v52, v53);
  v56 = (Il2CppObject *)v25;
  if ( v25 )
  {
    v25 = sub_1C3E6A0(v25, v18->obj.klass->_1.element_class);
    if ( !v25 )
    {
LABEL_24:
      v80 = sub_1C3E7E4();
      sub_1C3E68C(v80, 0);
    }
  }
  if ( LODWORD(v18->max_length) <= 3 )
LABEL_23:
    sub_1C3E7C8(v25, v26);
  v18->m_Items[3] = v56;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->m_Items[3], (int32_t)v56, v54, v55);
  v57 = System_String__Format_63677896(v17, v18, 0);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0) )
  {
    v86 = needPointNum;
    v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v58, v59, v60, v61, v62, v63);
    v85 = havePointNum;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v65, v66, v67, v68, v69, v70);
    v84 = afterPointNum;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v72, v73, v74, v75, v76, v77);
    v57 = System_String__Format_63677828(summonConfirmMessage, v64, v71, v78, 0);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v58,
    v59);
  v79 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v79 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0,
    v57,
    0,
    callback,
    v79->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0,
    0,
    0,
    0,
    gachaSubEntity,
    v81);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenConfirmStone(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t type,
        int32_t price,
        int32_t num,
        int32_t haveStoneNum,
        int32_t haveFreeStoneNum,
        int32_t haveChargeStoneNum,
        int32_t afterStoneNum,
        int32_t afterFreeStoneNum,
        int32_t afterChargeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool isAppendSummon,
        bool isPickup,
        int64_t summonCloseAt,
        int32_t gachaId,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        GachaExtraGiftEntity_array *giftEntList,
        int32_t shopIdIdx,
        int32_t privilegeGachaTextId,
        const MethodInfo *method)
{
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x26
  System_String_o **v36; // x8
  System_Object_array *v37; // x27
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  __int64 addMsgBgSprite; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x20
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x20
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x20
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x20
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  __int64 v79; // x5
  __int64 v80; // x6
  __int64 v81; // x7
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x20
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  Il2CppObject *v93; // x20
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x5
  __int64 v98; // x6
  __int64 v99; // x7
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x20
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  __int64 v106; // x5
  __int64 v107; // x6
  __int64 v108; // x7
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x20
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  System_String_o *v114; // x29
  System_String_o *v115; // x20
  System_String_o *v116; // x20
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  __int64 v120; // x5
  __int64 v121; // x6
  __int64 v122; // x7
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  System_String_o *v125; // x27
  Il2CppObject *v126; // x0
  System_String_o *v127; // x0
  System_String_o *v128; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v130; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v131; // x27
  GachaDetailEntity_o *v132; // x29
  System_String_o *ConfirmBonusSelectSummonTitle; // x26
  System_String_o *v134; // x20
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  __int64 v138; // x5
  __int64 v139; // x6
  __int64 v140; // x7
  Il2CppObject *v141; // x24
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  __int64 v145; // x5
  __int64 v146; // x6
  __int64 v147; // x7
  Il2CppObject *v148; // x0
  System_String_o *v149; // x25
  System_String_o *v150; // x24
  __int64 v151; // x20
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  __int64 v155; // x5
  __int64 v156; // x6
  __int64 v157; // x7
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  __int64 v160; // x22
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  __int64 v164; // x5
  __int64 v165; // x6
  __int64 v166; // x7
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  __int64 v169; // x21
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  __int64 v173; // x5
  __int64 v174; // x6
  __int64 v175; // x7
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  __int64 v178; // x21
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  __int64 v182; // x5
  __int64 v183; // x6
  __int64 v184; // x7
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  __int64 v187; // x21
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  __int64 v191; // x5
  __int64 v192; // x6
  __int64 v193; // x7
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  __int64 v196; // x21
  __int64 v197; // x2
  __int64 v198; // x3
  __int64 v199; // x4
  __int64 v200; // x5
  __int64 v201; // x6
  __int64 v202; // x7
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  __int64 v205; // x22
  System_String_o *v206; // x20
  System_String_o *ConfirmBonusSelectSummonLowMsg; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v209; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  System_String_o *v212; // x27
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v218; // x0
  __int64 v219; // x0
  const MethodInfo *v220; // [xsp+10h] [xbp-C0h]
  int32_t v221; // [xsp+20h] [xbp-B0h]
  int32_t v222; // [xsp+2Ch] [xbp-A4h]
  int32_t v226; // [xsp+40h] [xbp-90h] BYREF
  int32_t v227; // [xsp+44h] [xbp-8Ch] BYREF
  int32_t v228; // [xsp+48h] [xbp-88h] BYREF
  int32_t v229; // [xsp+4Ch] [xbp-84h] BYREF
  int32_t v230; // [xsp+50h] [xbp-80h] BYREF
  int32_t v231; // [xsp+54h] [xbp-7Ch] BYREF
  int32_t v232; // [xsp+58h] [xbp-78h] BYREF
  int32_t v233; // [xsp+5Ch] [xbp-74h] BYREF
  System_String_o *defaultText; // [xsp+60h] [xbp-70h] BYREF
  System_String_o *resultText; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C5320D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_12440/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/);
    sub_1C3E564(&StringLiteral_3743/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_1C3E564(&StringLiteral_3739/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_1C3E564(&StringLiteral_3760/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_1C3E564(&StringLiteral_3740/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_1C3E564(&StringLiteral_12484/*"SUMMON_WARNING_MESSAGE_501"*/);
    sub_1C3E564(&StringLiteral_12482/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1C3E564(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C3E564(&StringLiteral_12469/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_1C3E564(&StringLiteral_3763/*"CONFIRM_SUMMON_MESSAGE_{0}"*/);
    sub_1C3E564(&StringLiteral_12485/*"SUMMON_WARNING_MESSAGE_{0}"*/);
    sub_1C3E564(&StringLiteral_12430/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_1C3E564(&StringLiteral_3742/*"CONFIRM_CHARGESUMMON_MSG"*/);
    sub_1C3E564(&StringLiteral_3762/*"CONFIRM_SUMMON_MESSAGE_501"*/);
    byte_4C5320D = 1;
  }
  defaultText = 0;
  this->fields.extraGiftEntList = giftEntList;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.extraGiftEntList,
    (int32_t)giftEntList,
    type,
    *(const MethodInfo **)&price);
  if ( privilegeGachaTextId < 1 )
  {
    if ( isAppendSummon )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = (System_String_o **)&StringLiteral_3743/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = (System_String_o **)&StringLiteral_3742/*"CONFIRM_CHARGESUMMON_MSG"*/;
      if ( type != 7 )
        v36 = (System_String_o **)&StringLiteral_3760/*"CONFIRM_PAYSUMMON_MSG"*/;
    }
    v35 = LocalizationManager__Get(*v36, 0);
    resultText = v35;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    resultText = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"CONFIRM_SUMMON_MESSAGE_501"*/, 0);
    v233 = privilegeGachaTextId;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v233, v27, v28, v29, v30, v31, v32);
    v34 = System_String__Format((System_String_o *)StringLiteral_3763/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v33, 0);
    LocalizationManager__TryGet(&resultText, v34, resultText, 0);
    v35 = resultText;
  }
  v37 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 9);
  v233 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v233, v38, v39, v40, v41, v42, v43);
  if ( !v37 )
    goto LABEL_102;
  v48 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( !LODWORD(v37->max_length) )
    goto LABEL_101;
  v37->m_Items[0] = v48;
  sub_1C3E508((CGThumbnailListItem_o *)v37->m_Items, (int32_t)v48, v46, v47);
  v232 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v232, v49, v50, v51, v52, v53, v54);
  v57 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v37->max_length) <= 1 )
    goto LABEL_101;
  v37->m_Items[1] = v57;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[1], (int32_t)v57, v55, v56);
  v231 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v231, v58, v59, v60, v61, v62, v63);
  v66 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v37->max_length) <= 2 )
    goto LABEL_101;
  v37->m_Items[2] = v66;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[2], (int32_t)v66, v64, v65);
  v230 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v230, v67, v68, v69, v70, v71, v72);
  v75 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v37->max_length) <= 3 )
    goto LABEL_101;
  v37->m_Items[3] = v75;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[3], (int32_t)v75, v73, v74);
  v229 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v229, v76, v77, v78, v79, v80, v81);
  v84 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v222 = price;
  if ( LODWORD(v37->max_length) <= 4 )
    goto LABEL_101;
  v37->m_Items[4] = v84;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[4], (int32_t)v84, v82, v83);
  v228 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v228, v85, v86, v87, v88, v89, v90);
  v93 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v37->max_length) <= 5 )
    goto LABEL_101;
  v37->m_Items[5] = v93;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[5], (int32_t)v93, v91, v92);
  v227 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v227, v94, v95, v96, v97, v98, v99);
  v102 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v37->max_length) <= 6 )
    goto LABEL_101;
  v37->m_Items[6] = v102;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[6], (int32_t)v102, v100, v101);
  v226 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v226, v103, v104, v105, v106, v107, v108);
  v111 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v37->max_length) <= 7 )
    goto LABEL_101;
  v37->m_Items[7] = v111;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[7], (int32_t)v111, v109, v110);
  if ( title )
  {
    addMsgBgSprite = sub_1C3E6A0(title, v37->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v221 = haveFreeStoneNum;
  if ( LODWORD(v37->max_length) <= 8 )
    goto LABEL_101;
  v37->m_Items[8] = (Il2CppObject *)title;
  sub_1C3E508((CGThumbnailListItem_o *)&v37->m_Items[8], (int32_t)title, v112, v113);
  v114 = System_String__Format_63677896(v35, v37, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
  if ( !this->fields.addMsgBgSprite )
    goto LABEL_102;
  v115 = (System_String_o *)addMsgBgSprite;
  UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 434, 0);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_102;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 60, 0);
  if ( privilegeGachaTextId < 1 )
  {
    if ( !isPickup )
      goto LABEL_60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v130 = System_String__Format(v128, DateTime, 0);
    addMsgBgSprite = (__int64)System_String__Concat_63636468(v115, v130, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v115 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 494, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, 0);
    defaultText = LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SUMMON_WARNING_MESSAGE_501"*/, 0);
    v233 = privilegeGachaTextId;
    v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v233, v117, v118, v119, v120, v121, v122);
    v124 = System_String__Format((System_String_o *)StringLiteral_12485/*"SUMMON_WARNING_MESSAGE_{0}"*/, v123, 0);
    LocalizationManager__TryGet(&defaultText, v124, defaultText, 0);
    v125 = defaultText;
    v126 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v127 = System_String__Format_63677760(v125, (Il2CppObject *)title, v126, 0);
    addMsgBgSprite = (__int64)System_String__Concat_63636468(v116, v127, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v115 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 652, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
  }
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 76, 0);
LABEL_60:
  v131 = callback;
  this->fields.state = 4;
  if ( gachaId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    addMsgBgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaDetailMaster___);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    addMsgBgSprite = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)addMsgBgSprite,
                                gachaId,
                                (const MethodInfo_33B2F58 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    v132 = (GachaDetailEntity_o *)addMsgBgSprite;
    ConfirmBonusSelectSummonTitle = GachaDetailEntity__GetConfirmBonusSelectSummonTitle(
                                      (GachaDetailEntity_o *)addMsgBgSprite,
                                      0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v134 = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0);
    v233 = v222;
    v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v233, v135, v136, v137, v138, v139, v140);
    v232 = num;
    v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232, v142, v143, v144, v145, v146, v147);
    v149 = System_String__Format_63677760(v134, v141, v148, 0);
    v150 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0);
    v151 = sub_1C3E60C(object___TypeInfo, 6);
    v231 = haveStoneNum;
    addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v231, v152, v153, v154, v155, v156, v157);
    if ( !v151 )
      goto LABEL_102;
    v160 = addMsgBgSprite;
    if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v151 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v151 + 24) )
        goto LABEL_101;
      *(_QWORD *)(v151 + 32) = v160;
      sub_1C3E508((CGThumbnailListItem_o *)(v151 + 32), v160, v158, v159);
      v230 = haveChargeStoneNum;
      addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v230, v161, v162, v163, v164, v165, v166);
      v169 = addMsgBgSprite;
      if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v151 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v151 + 24) <= 1u )
          goto LABEL_101;
        *(_QWORD *)(v151 + 40) = v169;
        sub_1C3E508((CGThumbnailListItem_o *)(v151 + 40), v169, v167, v168);
        v229 = v221;
        addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v229, v170, v171, v172, v173, v174, v175);
        v178 = addMsgBgSprite;
        if ( !addMsgBgSprite || (addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v151 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v151 + 24) <= 2u )
            goto LABEL_101;
          *(_QWORD *)(v151 + 48) = v178;
          sub_1C3E508((CGThumbnailListItem_o *)(v151 + 48), v178, v176, v177);
          v228 = afterStoneNum;
          addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v228, v179, v180, v181, v182, v183, v184);
          v187 = addMsgBgSprite;
          if ( !addMsgBgSprite
            || (addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v151 + 64LL))) != 0 )
          {
            if ( *(_DWORD *)(v151 + 24) <= 3u )
              goto LABEL_101;
            *(_QWORD *)(v151 + 56) = v187;
            sub_1C3E508((CGThumbnailListItem_o *)(v151 + 56), v187, v185, v186);
            v227 = afterChargeStoneNum;
            addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v227, v188, v189, v190, v191, v192, v193);
            v196 = addMsgBgSprite;
            if ( !addMsgBgSprite
              || (addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v151 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v151 + 24) <= 4u )
                goto LABEL_101;
              *(_QWORD *)(v151 + 64) = v196;
              sub_1C3E508((CGThumbnailListItem_o *)(v151 + 64), v196, v194, v195);
              v226 = afterFreeStoneNum;
              addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v226, v197, v198, v199, v200, v201, v202);
              v205 = addMsgBgSprite;
              if ( !addMsgBgSprite
                || (addMsgBgSprite = sub_1C3E6A0(addMsgBgSprite, *(_QWORD *)(*(_QWORD *)v151 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v151 + 24) > 5u )
                {
                  *(_QWORD *)(v151 + 72) = v205;
                  sub_1C3E508((CGThumbnailListItem_o *)(v151 + 72), v205, v203, v204);
                  v206 = System_String__Format_63677896(v150, (System_Object_array *)v151, 0);
                  ConfirmBonusSelectSummonLowMsg = GachaDetailEntity__GetConfirmBonusSelectSummonLowMsg(v132, 0);
                  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                  v209 = ConfirmBonusSelectSummonLowMsg;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
                  if ( (addMsgBgSprite & 1) != 0 )
                  {
                    if ( !assetManager )
                      goto LABEL_102;
                    addMsgBgSprite = (__int64)this->fields.baseWindow;
                    if ( !addMsgBgSprite )
                      goto LABEL_102;
                    MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
                    v212 = v149;
                    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__51929056(
                                                MsgInfoPrefab_k__BackingField,
                                                transform,
                                                (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
                    if ( !addMsgBgSprite )
                      goto LABEL_102;
                    Component_object = UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)addMsgBgSprite,
                                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                    *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                    sub_1C3E508(
                      (CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo,
                      (int32_t)Component_object,
                      v215,
                      v216);
                    v149 = v212;
                    v131 = callback;
                  }
                  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetConfirmDlg(
                      (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
                      gachaId,
                      ConfirmBonusSelectSummonTitle,
                      v149,
                      v206,
                      v209,
                      tryGetBonusSelectData,
                      assetManager,
                      0);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0);
                      v218 = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
                      SummonConfirmDlgComponent__Open(this, 0, 0, v218, v131, 14.0, 0, shopIdIdx, 0, 1, 0, v220);
                      return;
                    }
                  }
LABEL_102:
                  sub_1C3E7C0(addMsgBgSprite, v45);
                }
LABEL_101:
                sub_1C3E7C8(addMsgBgSprite, v45);
              }
            }
          }
        }
      }
    }
LABEL_103:
    v219 = sub_1C3E7E4();
    sub_1C3E68C(v219, 0);
  }
  SummonConfirmDlgComponent__Open(this, title, v114, 0, callback, 14.0, v115, shopIdIdx, isAppendSummon, 0, 0, v220);
}


void SummonConfirmDlgComponent__OpenConfirmTicket(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t num,
        int32_t haveTicketNum,
        int32_t afterTicketNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x25
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  Il2CppObject *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // [xsp+10h] [xbp-60h]
  int32_t v52; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v53; // [xsp+28h] [xbp-48h] BYREF
  int32_t v54; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4C5320E & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3765/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_1C3E564(&StringLiteral_3766/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5320E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3765/*"CONFIRM_TICKETSUMMON_MSG"*/, 0);
    v54 = haveTicketNum;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v14, v15, v16, v17, v18, v19);
    v53 = afterTicketNum;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v21, v22, v23, v24, v25, v26);
    v28 = System_String__Format_63677760(v13, v20, v27, 0);
  }
  else
  {
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0);
    v54 = num;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v30, v31, v32, v33, v34, v35);
    v53 = haveTicketNum;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v37, v38, v39, v40, v41, v42);
    v52 = afterTicketNum;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v44, v45, v46, v47, v48, v49);
    v28 = System_String__Format_63677828(v29, v36, v43, v50, 0);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v28, 0, callback, 14.0, 0, 0, 0, 0, 0, v51);
}


void SummonConfirmDlgComponent__OpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v10; // x22
  System_String_o *v11; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  const MethodInfo *v29; // [xsp+10h] [xbp-70h]
  int32_t v30; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v31; // [xsp+28h] [xbp-58h] BYREF
  int32_t v32; // [xsp+2Ch] [xbp-54h] BYREF

  v32 = haveFreeStoneNum;
  if ( (byte_4C53209 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12374/*"STONE_PURCHASE"*/);
    sub_1C3E564(&StringLiteral_12188/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_1C3E564(&StringLiteral_397/*"#,0"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53209 = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SHORT_HAVE_CHARGE_STONE"*/, 0);
  v31 = price;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v12, v13, v14, v15, v16, v17);
  v30 = haveChargeStoneNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v19, v20, v21, v22, v23, v24);
  v26 = (Il2CppObject *)System_Int32__ToString_65146576((int32_t)&v32, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
  v27 = System_String__Format_63677828(v11, v18, v25, v26, 0);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12374/*"STONE_PURCHASE"*/, 0);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v10, v27, v28, callback, 14.0, 0, 0, 0, 0, 0, v29);
}


void SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // [xsp+10h] [xbp-50h]
  int32_t v18; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4C5320C & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12189/*"SHORT_HAVE_POINT"*/);
    sub_1C3E564(&StringLiteral_12187/*"SHORT_DLG_TITLE"*/);
    byte_4C5320C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SHORT_DLG_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12189/*"SHORT_HAVE_POINT"*/, 0);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11, v12, v13, v14);
  v16 = System_String__Format(v8, v15, 0);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v7, v16, 0, callback, 14.0, 0, 0, 0, 0, 0, v17);
}


void SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveFreeStone,
        int32_t haveChargeStone,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v9; // x23
  System_String_o *v10; // x24
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x22
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  const MethodInfo *v27; // [xsp+10h] [xbp-60h]
  int32_t v28; // [xsp+28h] [xbp-48h] BYREF
  int32_t v29; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4C53208 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12374/*"STONE_PURCHASE"*/);
    sub_1C3E564(&StringLiteral_12190/*"SHORT_HAVE_STONE"*/);
    sub_1C3E564(&StringLiteral_12187/*"SHORT_DLG_TITLE"*/);
    byte_4C53208 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SHORT_DLG_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12190/*"SHORT_HAVE_STONE"*/, 0);
  v29 = haveChargeStone;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v11, v12, v13, v14, v15, v16);
  v28 = haveFreeStone;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v18, v19, v20, v21, v22, v23);
  v25 = System_String__Format_63677760(v10, v17, v24, 0);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12374/*"STONE_PURCHASE"*/, 0);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v9, v25, v26, callback, 14.0, 0, 0, 0, 0, 0, v27);
}


void SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v8; // x1
  int32_t klass; // w21
  BalanceConfig_c *v10; // x8
  Il2CppObject *object; // x0
  UILabel_o *titleLabel; // x21
  int32_t *v13; // x20
  System_String_o **v14; // x9
  System_String_o *v15; // x22
  UILabel_o *messageLabel; // x21
  System_String_o **v17; // x8
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v28; // x0
  System_Action_object__o *_9__80_0; // x22
  Il2CppObject *v30; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int i; // w24
  int32_t v35; // w21
  struct ItemIconComponent_array *v36; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v38; // x23
  UILabel_o *v39; // x21
  int32_t *v40; // x22
  SummonConfirmDlgComponent_c *v41; // x0
  System_String_o *v42; // x0
  int32_t v43; // w8
  System_String_o *v44; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v46; // x0
  int32_t v47; // w8
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C53217 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_GiftEntity___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__);
    sub_1C3E564(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C3E564(&StringLiteral_113/*" "*/);
    sub_1C3E564(&StringLiteral_12441/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12443/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_1C3E564(&StringLiteral_12444/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_1C3E564(&StringLiteral_12446/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_1C3E564(&StringLiteral_12445/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_1C3E564(&StringLiteral_12442/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/);
    byte_4C53217 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v28 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v28 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__80_0 = (System_Action_object__o *)v28->static_fields->__9__80_0;
    if ( !_9__80_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__80_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__80_0, v30, Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__, 0);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__80_0 = (struct System_Action_ItemIconComponent__o *)_9__80_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__80_0, (int32_t)_9__80_0, v32, v33);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__80_0,
      (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v35 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v35 >= *(_DWORD *)(SelfUserGame[7].fields.m_CachedPtr + 60) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v35 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v35,
                                                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v36 = this->fields.extraItemIconComponents;
      if ( !v36 )
        goto LABEL_59;
      if ( (unsigned int)v35 >= LODWORD(v36->max_length) )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( (unsigned int)v35 >= LODWORD(extraMessageLabels->max_length) )
LABEL_60:
        sub_1C3E7C8(SelfUserGame, v8);
      v38 = (UnityEngine_Component_o *)v36->m_Items[v35];
      if ( !v38 )
        goto LABEL_59;
      v39 = extraMessageLabels->m_Items[v35];
      v40 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v38, 0);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0);
      if ( !v40 )
        goto LABEL_59;
      ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)v38, v40[5], v40[6], v40[7], 0, 0);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v41 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v41 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v41->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0);
        v43 = v40[7];
        v44 = v42;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v43, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v44, NumberFormat, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0);
        v47 = v40[7];
        v48 = v46;
        v49 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v47, 0);
        v50 = System_String__Format(v48, v49, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_63636468(
                                                     v50,
                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                     0);
      }
      v8 = SelfUserGame;
      if ( !v39 )
        goto LABEL_59;
      UILabel__set_text(v39, (System_String_o *)SelfUserGame, 0);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12444/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0);
    if ( extraTitleLabel )
    {
      UILabel__set_text(extraTitleLabel, (System_String_o *)SelfUserGame, 0);
      return;
    }
    goto LABEL_59;
  }
  if ( bonusType != 1 )
    return;
  if ( !SelfUserGame )
    goto LABEL_59;
  klass = (int32_t)SelfUserGame[8].klass;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = klass < v10->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_3120424 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v13 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v14 = (System_String_o **)&StringLiteral_12443/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12446/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v15 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  messageLabel = this->fields.messageLabel;
  v17 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12441/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12445/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0);
  if ( !v13
    || (v25 = (System_String_o *)SelfUserGame,
        v52 = v13[7],
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v19, v20, v21, v22, v23, v24),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0) )
  {
LABEL_59:
    sub_1C3E7C0(SelfUserGame, v8);
  }
  ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)SelfUserGame, v13[5], v13[6], v13[7], 0, 0);
}


void SummonConfirmDlgComponent__SetBonusTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *titleLabel; // x8
  int mWidth; // w21
  struct UILabel_o *messageLabel; // x9
  SummonConfirmDlgComponent_o *v5; // x19
  int v6; // w8
  int v7; // w22
  int v8; // w23
  int addMsgBgSprite; // w24
  int v10; // w20
  int v11; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  unsigned int localPosition; // s0
  float v15; // s8
  int v16; // w21
  UnityEngine_GameObject_o *v17; // x0
  int v18; // w8

  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_31;
  mWidth = titleLabel->fields.mWidth;
  messageLabel = this->fields.messageLabel;
  v5 = this;
  v6 = mWidth >= 0 ? titleLabel->fields.mWidth : mWidth + 1;
  if ( !messageLabel )
    goto LABEL_31;
  v7 = messageLabel->fields.mWidth;
  this = (SummonConfirmDlgComponent_o *)this->fields.bonusItemSpr;
  v8 = v7 >= 0 ? messageLabel->fields.mWidth : v7 + 1;
  if ( !this )
    goto LABEL_31;
  addMsgBgSprite = (int)this->fields.addMsgBgSprite;
  v10 = v6 >> 1;
  v11 = addMsgBgSprite >= 0 ? LODWORD(this->fields.addMsgBgSprite) : addMsgBgSprite + 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v10 + (v11 >> 1)), 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v13, 1.0, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  v15 = *(float *)&localPosition;
  v16 = v7 + mWidth + addMsgBgSprite;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v17, (float)(v15 + (float)(v8 >> 1)) + (float)(v11 >> 1), 0);
  v18 = v16 >= 0 ? v16 : v16 + 1;
  GameObjectExtensions__SetLocalPositionX(v5->fields.bonusMsgInfo, (float)(v10 - (v18 >> 1)), 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.titleLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemIconComponent) == 0)
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusMsgInfo) == 0) )
  {
LABEL_31:
    sub_1C3E7C0(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *v2; // x19
  struct UILabel_o *extraTitleLabel; // x8
  float v4; // s10
  unsigned int v5; // w23
  float v6; // s9
  float v7; // s12
  struct ItemIconComponent_array *extraItemIconComponents; // x8
  struct UILabel_array *extraMessageLabels; // x8
  struct ItemIconComponent_array *v10; // x9
  ItemIconComponent_o *v11; // x9
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x21
  struct UISprite_o *iconSprite; // x20
  int implementedInterfaces; // s14
  float v16; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalScaleX; // s8
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_GameObject_o *v21; // x0
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *v23; // x0
  float v24; // s0
  int v25; // s15
  float v26; // s9

  v2 = this;
  if ( (byte_4C53218 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    byte_4C53218 = 1;
  }
  extraTitleLabel = v2->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_27;
  v4 = (float)extraTitleLabel->fields.mWidth * 0.5;
  v5 = 0;
  v6 = v4;
  v7 = v4;
  while ( 1 )
  {
    this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( (signed int)v5 >= SLODWORD(this->fields.closeBtn->fields.pressed.fields.g) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= LODWORD(extraItemIconComponents->max_length) )
LABEL_28:
      sub_1C3E7C8(this, method);
    this = (SummonConfirmDlgComponent_o *)extraItemIconComponents->m_Items[v5];
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    extraMessageLabels = v2->fields.extraMessageLabels;
    if ( !extraMessageLabels )
      goto LABEL_27;
    if ( v5 >= LODWORD(extraMessageLabels->max_length) )
      goto LABEL_28;
    v10 = v2->fields.extraItemIconComponents;
    if ( !v10 )
      goto LABEL_27;
    if ( v5 >= LODWORD(v10->max_length) )
      goto LABEL_28;
    v11 = v10->m_Items[v5];
    if ( !v11 )
      goto LABEL_27;
    v12 = &extraMessageLabels->obj.klass + (int)v5;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_27;
    iconSprite = v11->fields.iconSprite;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)v12[4], 0);
    if ( !iconSprite )
      goto LABEL_27;
    implementedInterfaces = (int)v13->_1.implementedInterfaces;
    v16 = (float)iconSprite->fields.mWidth * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0);
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
    GameObjectExtensions__SetLocalPositionX(v19, v6 + v16, 0);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v21, 0);
    GameObjectExtensions__SetLocalPositionX(v20, v16 + LocalPositionX, 0);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    v24 = GameObjectExtensions__GetLocalPositionX(v23, 0);
    v25 = (int)v13->_1.implementedInterfaces;
    v26 = v24;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)iconSprite,
                                            0);
    if ( !this )
      goto LABEL_27;
    v7 = v7 + (float)(v16 + (float)((float)(LocalScaleX * (float)implementedInterfaces) * 0.5));
    v6 = v26 + (float)v25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    ++v5;
  }
  GameObjectExtensions__SetLocalPositionX(v2->fields.extraMsgInfo, v4 - v7, 0);
  this = (SummonConfirmDlgComponent_o *)v2->fields.extraTitleLabel;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v2->fields.extraMsgInfo) == 0) )
  {
LABEL_27:
    sub_1C3E7C0(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


bool SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UIWidget_o *baseWindowSprite; // x0
  __int64 v7; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  Il2CppObject *MasterData_object; // x21
  System_Func_object__bool__o **v13; // x22
  System_Func_object__bool__o *v14; // x24
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  SummonConfirmDlgComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x23
  System_Func_object__int__o *_9__79_1; // x24
  Il2CppObject *v22; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_ICollection_o *v27; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v31; // x23
  SummonConfirmDlgComponent_c *v32; // x0
  const MethodInfo *v33; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v35; // x23
  UnityEngine_Object_o *v36; // x24
  SummonConfirmDlgComponent_c *v37; // x0
  __int64 v38; // x8
  const MethodInfo *v39; // x1
  int v40; // w8
  bool v41; // nf

  if ( (byte_4C53216 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C3E564(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C3E564(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__);
    sub_1C3E564(&Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__);
    sub_1C3E564(&SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
    sub_1C3E564(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4C53216 = 1;
  }
  v5 = sub_1C3E7B0(SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_51;
  *(_DWORD *)(v5 + 16) = shopIdIdx;
  state = this->fields.state;
  if ( state != 4 && state != 2 || !this->fields.extraGiftEntList )
    return 0;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_width(baseWindowSprite, 780, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_height(baseWindowSprite, 480, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.confirmBtnObject;
  if ( !baseWindowSprite )
    goto LABEL_51;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.infoMsgLabel;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)baseWindowSprite, 20, 0);
  baseWindowSprite = (UIWidget_o *)this->fields.singleMsgInfo;
  if ( !baseWindowSprite
    || (v10 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0),
        GameObjectExtensions__SetLocalPositionY(v10, 19.0, 0),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0)
    || (v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0),
        GameObjectExtensions__SetLocalPositionY(v11, -29.0, 0),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_51:
    sub_1C3E7C0(baseWindowSprite, v7);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
  v13 = (System_Func_object__bool__o **)(v5 + 24);
  *(_DWORD *)(v5 + 20) = 1;
  do
  {
    v14 = *v13;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v13 )
    {
      v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__,
        0);
      *(_QWORD *)(v5 + 24) = v14;
      sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v14, v16, v17);
    }
    v18 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v19 = SummonConfirmDlgComponent___c_TypeInfo;
    v20 = v18;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v19 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__79_1 = (System_Func_object__int__o *)v19->static_fields->__9__79_1;
    if ( !_9__79_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__79_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__79_1,
        v22,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__,
        0);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__79_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__79_1;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__79_1, (int32_t)_9__79_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__79_1,
                                                                 (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v27 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v26,
                                                (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v27, 0);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v27,
                        0);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v5 + 20), v29);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 1 )
      {
        v31 = this->fields.bonusMsgInfo;
        v32 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v32 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v31, v32->static_fields->GROUP_BONUS_LABEL_POS_Y, 0);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v33);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 2 )
      {
        v35 = this->fields.extraMsgInfo;
        v36 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v36, 0, 0) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0) )
        {
          v37 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v37 = SummonConfirmDlgComponent_TypeInfo;
          }
          v38 = 48;
        }
        else
        {
LABEL_44:
          v37 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v37 = SummonConfirmDlgComponent_TypeInfo;
          }
          v38 = 44;
        }
        GameObjectExtensions__SetLocalPositionY(
          v35,
          *(float *)((char *)&v37->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v38),
          0);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v39);
      }
    }
    v40 = *(_DWORD *)(v5 + 20) + 1;
    v41 = *(_DWORD *)(v5 + 20) - 2 < 0;
    *(_DWORD *)(v5 + 20) = v40;
  }
  while ( v41 != __OFSUB__(v40, 3) );
  return 1;
}


void SummonConfirmDlgComponent__add_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonConfirmDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonConfirmDlgComponent_o *v10; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C53205 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4C53205 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  SummonConfirmDlgComponent__remove_callbackFunc(v10, v11, v12);
}


void SummonConfirmDlgComponent__remove_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct SummonConfirmDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SummonConfirmDlgComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C53206 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4C53206 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C787BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3EA80(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void SummonConfirmDlgComponent__setBtnInfoActive(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v5; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4C53215 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12422/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_4C53215 = 1;
  }
  state = this->fields.state;
  if ( state > 9 )
    return;
  if ( ((1 << state) & 0x370) == 0 )
  {
    if ( ((1 << state) & 6) != 0 )
    {
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0) )
      {
        closeBtnObject = this->fields.closeBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0);
      }
      closeBtnObject = this->fields.confirmBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
    }
    else
    {
      if ( state != 3 )
        return;
      closeBtnObject = this->fields.confirmBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0) )
      {
        closeBtnObject = this->fields.confirmBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0);
      }
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
LABEL_32:
        sub_1C3E7C0(closeBtnObject, method);
    }
LABEL_30:
    UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0);
    return;
  }
  closeBtnObject = this->fields.closeBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0) )
  {
    closeBtnObject = this->fields.closeBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0);
  }
  closeBtnObject = this->fields.confirmBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0);
  v5 = this->fields.state;
  if ( v5 == 8 || v5 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"SUMMON_AUTOSALE_BUTTON"*/, 0);
    if ( !settingBtnLb )
      goto LABEL_32;
    UILabel__set_text(settingBtnLb, (System_String_o *)closeBtnObject, 0);
    closeBtnObject = this->fields.settingBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    goto LABEL_30;
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__setTutorial(
        SummonConfirmDlgComponent_o *this,
        bool isTutorial,
        const MethodInfo *method)
{
  struct UIButton_o *closeBtn; // x0

  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    sub_1C3E7C0(0, isTutorial);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))closeBtn->klass->vtable._5_set_isEnabled.methodPtr)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._5_set_isEnabled.method);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__settingResult(SummonConfirmDlgComponent_o *this, bool res, const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0);
  if ( !res )
  {
    autoSaleDlgInfo = (AutomaticSaleDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( autoSaleDlgInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSaleDlgInfo, 1, 0);
      return;
    }
LABEL_8:
    sub_1C3E7C0(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_35555300(this, 0, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))autoSaleDialogCloseCallbackFunc->fields.invoke_impl)(
      autoSaleDialogCloseCallbackFunc->fields.method_code,
      autoSaleDialogCloseCallbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent_CallbackFunc___ctor(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7EE30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7EDE8;
}


System_IAsyncResult_o *SummonConfirmDlgComponent_CallbackFunc__BeginInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C5321F & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C5321F = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void SummonConfirmDlgComponent_CallbackFunc__Invoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void SummonConfirmDlgComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C53220 & 1) == 0 )
  {
    sub_1C3E564(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4C53220 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SummonConfirmDlgComponent___c___Open_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.giftId;
}


void SummonConfirmDlgComponent___c___SetBonusText_b__80_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0)) == 0 )
  {
    sub_1C3E7C0(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


int32_t SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__79_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.giftId;
}


void SummonConfirmDlgComponent___c__DisplayClass75_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonConfirmDlgComponent___c__DisplayClass75_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void SummonConfirmDlgComponent___c__DisplayClass79_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SummonConfirmDlgComponent___c__DisplayClass79_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass79_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C3E7C0(this, 0);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}