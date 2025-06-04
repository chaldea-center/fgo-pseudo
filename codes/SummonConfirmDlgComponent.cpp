void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4AFE4FB & 1) == 0 )
  {
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4AFE4FB = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_BDED00;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BDF750;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AFE4FA & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFE4FA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *bonusSelectBeforeMessage; // x22
  System_String_o *v14; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v23; // x4
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  v25 = haveFreeStoneNum;
  if ( (byte_4AFE4E8 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&price);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_2929/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, v11);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_4AFE4E8 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2929/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v24 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  v19 = (Il2CppObject *)System_Int32__ToString_63857360((int32_t)&v25, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL);
  v20 = System_String__Format_62389940(v14, v18, v19, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v20, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1BC3264(v20, v21);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v20, 0LL);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v23);
}


void __fastcall SummonConfirmDlgComponent__BonusSelectStoneBuyDialog(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *v26; // x24
  System_String_o *v27; // x28
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x27
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x26
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
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

  if ( (byte_4AFE4E9 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1BC3008(&int_TypeInfo, v17);
    sub_1BC3008(&LocalizationManager_TypeInfo, v18);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v19);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v20);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1BC3008(&StringLiteral_12253/*"STONE_PURCHASE"*/, v22);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1BC3008(&StringLiteral_2933/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1BC3008(&StringLiteral_2934/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_4AFE4E9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2934/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v56 = haveStoneNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v28, v29, v30);
  v55 = haveChargeStoneNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v32, v33, v34);
  v54 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v36, v37, v38);
  baseWindow = System_String__Format_62390008(v27, v31, v35, v39, 0LL);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v42 = baseWindow;
  UnityEngine_GameObject__SetActive(this->fields.bonusSelectNotHaveChargeStoneBeforeInfo, 0, 0LL);
  baseWindow = (System_String_o *)SummonConfirmDlgComponent_TypeInfo;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
  if ( !baseWindowSprite )
    goto LABEL_25;
  UIWidget__set_width(
    baseWindowSprite,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  baseWindow = (System_String_o *)this->fields.baseWindowSprite;
  if ( !baseWindow )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)baseWindow, 580, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
  baseWindow = (System_String_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    if ( assetManager )
    {
      baseWindow = (System_String_o *)this->fields.baseWindow;
      if ( baseWindow )
      {
        MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseWindow, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__50900816(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo, (int32_t)Component_object, v49, v50);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1BC3264(baseWindow, v41);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v26,
    v42,
    tryGetBonusSelectData,
    assetManager,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v52, callback, 14.0, 0LL, 0, 0, 1, 0LL, v53);
}


void __fastcall SummonConfirmDlgComponent__Callback(
        SummonConfirmDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_34518780(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_34518780(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4AFE4F6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SummonConfirmDlgComponent_EndClose__, v6);
    byte_4AFE4F6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4AFE4F7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFE4F7 = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, 0LL);
      goto LABEL_9;
    }
LABEL_12:
    sub_1BC3264(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__EndOpen(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonConfirmDlgComponent__Init(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *confirmTitleLabel; // x0
  __int64 v9; // x2
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  unsigned int v12; // w22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v14; // w8
  unsigned int v15; // w21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  SummonConfirmDlgComponent_c *v19; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v27; // x1
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v29; // x1
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4AFE4E5 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4AFE4E5 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraMessageLabels = this->fields.extraMessageLabels;
  if ( !extraMessageLabels )
    goto LABEL_65;
  max_length = extraMessageLabels->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v12];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1BC326C(confirmTitleLabel, method, v9);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v14 = extraItemIconComponents->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v14 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v15];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v14 = extraItemIconComponents->max_length;
      if ( (int)++v15 >= v14 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_65;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 0.0, 0LL);
  v19 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v19 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v19->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v21, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, 0, v22, v23);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v24,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v25,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingX(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_X,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UILabel__set_spacingY(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_SPACING_Y,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_65;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, 0LL);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v27);
    byte_4AFBDB1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v29);
    byte_4AFBDB1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1BC3264(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  *(_QWORD *)&this->fields.state = 0LL;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnClickCancel(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 0, v2);
}


void __fastcall SummonConfirmDlgComponent__OnClickDecide(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Callback(this, 1, v2);
}


void __fastcall SummonConfirmDlgComponent__OnClickSetting(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v10; // x21

  if ( (byte_4AFE4F8 & 1) == 0 )
  {
    sub_1BC3008(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1BC3008(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4AFE4F8 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1BC3254(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1BC3264(gameObject, v8);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v10, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4AFE4F9 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4609/*"ConfirmWindow/CloseButton"*/, method);
    sub_1BC3008(&StringLiteral_4611/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1BC3008(&StringLiteral_4607/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_4AFE4F9 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_4611/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(v6, (System_String_o *)StringLiteral_4609/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(v7, (System_String_o *)StringLiteral_4607/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
}


void __fastcall SummonConfirmDlgComponent__Open(
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v44; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v46; // x1
  UnityEngine_GameObject_o *v47; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v50; // x27
  int32_t v51; // w25
  UILabel_o *v52; // x27
  UILabel_o *v53; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v55; // x25
  int32_t v56; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v61; // w0
  float v62; // s8
  int32_t v63; // w24
  float v64; // s9
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v70; // x22
  System_Func_object__bool__o **v71; // x24
  System_Func_object__bool__o *v72; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x25
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  SummonConfirmDlgComponent___c_c *v77; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x25
  System_Func_object__int__o *_9__71_1; // x26
  Il2CppObject *v80; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Collections_ICollection_o *v85; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v87; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v89; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v91; // w8
  bool v92; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v97; // s0
  float v98; // s1
  float v99; // s8
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  bool v102; // w1
  const MethodInfo *v103; // x1
  System_Action_o *v104; // x20

  if ( (byte_4AFE4EF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, title);
    sub_1BC3008(&Method_DataManager_GetMasterData_GiftMaster___, v21);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v22);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_int___, v23);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v24);
    sub_1BC3008(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v25);
    sub_1BC3008(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v26);
    sub_1BC3008(&LocalizationManager_TypeInfo, v27);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v28);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BC3008(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v31);
    sub_1BC3008(&Method_SummonConfirmDlgComponent___c__Open_b__71_1__, v32);
    sub_1BC3008(&Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__, v33);
    sub_1BC3008(&SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo, v34);
    sub_1BC3008(&SummonConfirmDlgComponent___c_TypeInfo, v35);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v36);
    sub_1BC3008(&StringLiteral_1/*""*/, v37);
    byte_4AFE4EF = 1;
  }
  v38 = sub_1BC3254(SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_136;
  *(_DWORD *)(v38 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v41, v42);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    if ( title )
      v44 = title;
    else
      v44 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v44, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v46 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v46, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v47, msgOffY, 0LL);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0LL);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0LL);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0LL);
      v50 = this->fields.confirmDetailLabel;
      v51 = (int)gameObject;
      if ( SummonConfirmMessageSpacingX == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingX = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 16LL);
      }
      if ( !v50 )
        goto LABEL_136;
      UILabel__set_spacingX(v50, SummonConfirmMessageSpacingX, 0LL);
      v52 = this->fields.confirmDetailLabel;
      if ( SummonConfirmMessageSpacingY == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingY = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 20LL);
      }
      if ( !v52 )
        goto LABEL_136;
      UILabel__set_spacingY(v52, SummonConfirmMessageSpacingY, 0LL);
      v53 = this->fields.confirmDetailLabel;
      if ( !v51 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v51 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      }
      if ( !v53 )
        goto LABEL_136;
      UILabel__set_fontSize(v53, v51, 0LL);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v55 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v55 )
      goto LABEL_136;
    UILabel__set_text(v55, decideTxt, 0LL);
  }
  v56 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v56 <= 2 )
    {
      v58 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v58 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v58->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v59, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v61 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v61 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v56 <= 2 )
      v62 = 54.0;
    else
      v62 = 43.0;
    if ( v56 <= 2 )
      v63 = 20;
    else
      v63 = 18;
    if ( !gameObject )
      goto LABEL_136;
    v64 = v56 <= 2 ? 188.0 : 178.0;
    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v65, v64, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v66, v62, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, v63, 0LL);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_136;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0LL);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_125;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( *(_QWORD *)&extraGiftEntList->max_length )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_136;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_136;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0LL);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v38 + 20) = 1;
      v70 = (GiftMaster_o *)MasterData_object;
      v71 = (System_Func_object__bool__o **)(v38 + 24);
      while ( 1 )
      {
        v72 = *v71;
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v71 )
        {
          v72 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v72,
            (Il2CppObject *)v38,
            Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v38 + 24) = v72;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 24), (int32_t)v72, v74, v75);
        }
        v76 = System_Linq_Enumerable__Where_object_(
                v73,
                (System_Func_TSource__bool__o *)v72,
                (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v77 = SummonConfirmDlgComponent___c_TypeInfo;
        v78 = v76;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v77 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__71_1 = (System_Func_object__int__o *)v77->static_fields->__9__71_1;
        if ( !_9__71_1 )
        {
          if ( !v77->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v77);
            v77 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v77->static_fields->__9;
          _9__71_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__71_1, v80, Method_SummonConfirmDlgComponent___c__Open_b__71_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__71_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__71_1;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__71_1, (int32_t)_9__71_1, v82, v83);
        }
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v78,
                                                                     (System_Func_TSource__TResult__o *)_9__71_1,
                                                                     (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v85 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v84,
                                                    (const MethodInfo_3042B74 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v85, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v70 )
            goto LABEL_136;
          GiftListByIds = GiftMaster__GetGiftListByIds(v70, (System_Collections_Generic_IEnumerable_int__o *)v85, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v38 + 20), v87);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v38 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v89);
            goto LABEL_105;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v38 + 20) == 2 )
            break;
        }
        v91 = *(_DWORD *)(v38 + 20) + 1;
        v92 = *(_DWORD *)(v38 + 20) - 2 < 0;
        *(_DWORD *)(v38 + 20) = v91;
        if ( v92 == __OFSUB__(v91, 3) )
          goto LABEL_105;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v40);
LABEL_105:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        if ( !baseWindowSprite )
          goto LABEL_136;
        UIWidget__set_width(
          baseWindowSprite,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
          0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
        if ( !gameObject )
          goto LABEL_136;
        UIWidget__set_height((UIWidget_o *)gameObject, 580, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
        gameObject = this->fields.bonusMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v94 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v94,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v95 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v97 = -42.0;
        if ( v56 > 2 )
          v97 = -44.0;
        v98 = -34.0;
        if ( v56 <= 2 )
          v98 = -30.0;
        if ( isAppendSummon )
          v99 = v98;
        else
          v99 = v97;
        if ( !gameObject )
          goto LABEL_136;
        v100 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v100, v99, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v101 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v101, v99, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_136;
        v95 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v95, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_125:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v102 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v102 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v102, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_136:
    sub_1BC3264(gameObject, v40);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v103);
  v104 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v104, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v104, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4AFE4F1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_4AFE4F1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1BC3264(gameObject, v9);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  System_String_o *v17; // x0
  SummonConfirmDlgComponent_c *v18; // x8
  Il2CppObject *v19; // x23
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  bool v21; // w22
  System_String_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  System_String_o *v29; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  SummonConfirmDlgComponent_c *v42; // x0
  System_String_o *v43; // x0
  const MethodInfo *v44; // [xsp+10h] [xbp-80h]
  int32_t v45; // [xsp+20h] [xbp-70h] BYREF
  int32_t v46; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v47; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4AFE4EE & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, callback);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v11);
    sub_1BC3008(&UserGachaMaster_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_3715/*"CONFIRM_FREESUMMON_MSG"*/, v13);
    sub_1BC3008(&StringLiteral_3714/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v14);
    sub_1BC3008(&StringLiteral_6501/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v15);
    byte_4AFE4EE = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v16->static_fields->DailyFreeGachaResetTime;
  v17 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
  v18 = SummonConfirmDlgComponent_TypeInfo;
  v19 = (Il2CppObject *)v17;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v18 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v18->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v21 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v21 )
      goto LABEL_11;
LABEL_18:
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v29 = System_String__Format(v43, v19, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v21 )
    goto LABEL_18;
LABEL_11:
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v47 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v23, v24, v25);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(v22, v19, v26, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v29 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6501/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v46 = remainNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v32, v33, v34);
  v45 = maxNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(v31, v35, v39, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1BC3264(gameObject, v28);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v42 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v42 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v42->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v40,
    v41);
  SummonConfirmDlgComponent__Open(this, 0LL, v29, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, 0LL, v44);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmGroupSummon(
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  long double v38; // q0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 MasterData_object; // x0
  GachaMaster_o *v42; // x20
  GachaEntity_array *GachaDataInGroup; // x28
  Il2CppObject *Entity; // x29
  char v45; // w25
  int v46; // w21
  Il2CppClass *klass; // x8
  __int64 v48; // x2
  GachaEntity_o *v49; // x8
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v51; // w27
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int max_length; // w22
  GachaEntity_o *v55; // x8
  GachaEntity_o *v56; // x9
  Il2CppObject *name; // x22
  Il2CppObject *v58; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v60; // x20
  const MethodInfo *v61; // x3
  System_Object_array *v62; // x29
  const MethodInfo *v63; // x3
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x21
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x21
  int v74; // w21
  Il2CppObject *monitor; // x21
  System_String_o **v76; // x8
  GachaEntity_o *v77; // x9
  System_String_o *v78; // x20
  UILabel_o *v79; // x28
  System_String_o *v80; // x29
  const MethodInfo *v81; // x3
  System_Object_array *v82; // x20
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x21
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  const MethodInfo *v91; // x3
  Il2CppObject *v92; // x21
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  const MethodInfo *v96; // x3
  Il2CppObject *v97; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v99; // x27
  System_Object_array *v100; // x28
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  const MethodInfo *v104; // x3
  Il2CppObject *v105; // x20
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  const MethodInfo *v109; // x3
  Il2CppObject *v110; // x20
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  const MethodInfo *v114; // x3
  Il2CppObject *v115; // x20
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x20
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x20
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  const MethodInfo *v129; // x3
  Il2CppObject *v130; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v132; // x2
  const MethodInfo *v133; // x1
  System_Action_o *v134; // x20
  __int64 v135; // x0
  int32_t v136; // [xsp+4h] [xbp-8Ch]
  int32_t v137; // [xsp+8h] [xbp-88h]
  int32_t v138; // [xsp+Ch] [xbp-84h]
  int32_t v139; // [xsp+10h] [xbp-80h]
  int32_t v140; // [xsp+14h] [xbp-7Ch]
  int32_t v141; // [xsp+18h] [xbp-78h] BYREF
  int32_t v142; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v143; // [xsp+20h] [xbp-70h] BYREF
  int32_t v144; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v145; // [xsp+28h] [xbp-68h] BYREF
  int32_t v146; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AFE4F0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1BC3008(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1BC3008(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1BC3008(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1BC3008(&int_TypeInfo, v24);
    sub_1BC3008(&LocalizationManager_TypeInfo, v25);
    sub_1BC3008(&System_Math_TypeInfo, v26);
    sub_1BC3008(&object___TypeInfo, v27);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BC3008(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1BC3008(&StringLiteral_3720/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/, v31);
    sub_1BC3008(&StringLiteral_3721/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v32);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v33);
    sub_1BC3008(&StringLiteral_3718/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v34);
    sub_1BC3008(&StringLiteral_1/*""*/, v35);
    sub_1BC3008(&StringLiteral_3719/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v36);
    byte_4AFE4F0 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    price,
    *(const MethodInfo **)&haveStoneNum);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1C1346C(v38);
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1C1346C(v38);
  MasterData_object = **(_QWORD **)(v40 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v140 = price;
  v138 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v42 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v139 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  MasterData_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GachaDataInGroup, 0LL);
  v45 = 1;
  if ( (MasterData_object & 1) != 0 )
    goto LABEL_20;
  v46 = 1;
  if ( !Entity )
    goto LABEL_21;
  klass = Entity[2].klass;
  if ( !klass )
    goto LABEL_100;
  if ( !LODWORD(klass->_1.namespaze) )
  {
    v45 = 1;
LABEL_20:
    v46 = 1;
    goto LABEL_21;
  }
  MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v42, groupId, 0LL);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  if ( !GachaDataInGroup->max_length )
LABEL_101:
    sub_1BC326C(MasterData_object, v37, v48);
  v49 = GachaDataInGroup->m_Items[0];
  if ( !v49 )
    goto LABEL_100;
  v45 = 0;
  v46 = (int)MasterData_object / v49->fields.drawNum1;
LABEL_21:
  v137 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v136 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v51 = System_Math__Max_63870684(v46, 1, 0LL);
  this->fields.extraGiftEntList = giftEntList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v52, v53);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v55 = GachaDataInGroup->m_Items[0];
    if ( v55 )
    {
      v56 = GachaDataInGroup->m_Items[1];
      if ( v56 )
      {
        name = (Il2CppObject *)v55->fields.name;
        v58 = (Il2CppObject *)v56->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_object = sub_1BC30B0(object___TypeInfo, 4LL);
        if ( MasterData_object )
        {
          v62 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1BC3144(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !v62->max_length )
            goto LABEL_101;
          v62->m_Items[0] = name;
          sub_1BC2FAC((CGThumbnailListItem_o *)v62->m_Items, (int32_t)name, v48, v61);
          if ( v58 )
          {
            MasterData_object = sub_1BC3144(v58, v62->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v62->max_length <= 1 )
            goto LABEL_101;
          v62->m_Items[1] = v58;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v62->m_Items[1], (int32_t)v58, v48, v63);
          v146 = v51;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v146, v64, v65, v66);
          v68 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1BC3144(MasterData_object, v62->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v62->max_length <= 2 )
            goto LABEL_101;
          v62->m_Items[2] = v68;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v62->m_Items[2], (int32_t)v68, v48, v67);
          v145 = v140;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v145, v69, v70, v71);
          v73 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1BC3144(MasterData_object, v62->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v62->max_length <= 3 )
            goto LABEL_101;
          v62->m_Items[3] = v73;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v62->m_Items[3], (int32_t)v73, v48, v72);
          MasterData_object = (__int64)System_String__Format_62390076(v60, v62, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
          v74 = v139;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1BC3264(MasterData_object, v37);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0LL);
  if ( (MasterData_object & 1) == 0 )
    monitor = (Il2CppObject *)Entity[1].monitor;
  v76 = (System_String_o **)&StringLiteral_3719/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v45 & 1) == 0 )
  {
    if ( !GachaDataInGroup->max_length )
      goto LABEL_101;
    v77 = GachaDataInGroup->m_Items[0];
    if ( !v77 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v77->fields.drawNum1 > 1 )
      v76 = (System_String_o **)&StringLiteral_3720/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v78 = *v76;
  v79 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = LocalizationManager__Get(v78, 0LL);
  MasterData_object = sub_1BC30B0(object___TypeInfo, 4LL);
  if ( !MasterData_object )
    goto LABEL_100;
  v82 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1BC3144(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v82->max_length )
    goto LABEL_101;
  v82->m_Items[0] = monitor;
  sub_1BC2FAC((CGThumbnailListItem_o *)v82->m_Items, (int32_t)monitor, v48, v81);
  v146 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v146, v83, v84, v85);
  v87 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v82->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v82->max_length <= 1 )
    goto LABEL_101;
  v82->m_Items[1] = v87;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v82->m_Items[1], (int32_t)v87, v48, v86);
  v145 = v51;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v145, v88, v89, v90);
  v92 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v82->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v82->max_length <= 2 )
    goto LABEL_101;
  v82->m_Items[2] = v92;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v82->m_Items[2], (int32_t)v92, v48, v91);
  v144 = v140;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v144, v93, v94, v95);
  v97 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v82->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v82->max_length <= 3 )
    goto LABEL_101;
  v82->m_Items[3] = v97;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v82->m_Items[3], (int32_t)v97, v48, v96);
  MasterData_object = (__int64)System_String__Format_62390076(v80, v82, 0LL);
  if ( !v79 )
    goto LABEL_100;
  UILabel__set_text(v79, (System_String_o *)MasterData_object, 0LL);
  v74 = v139;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_3721/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v100 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
  v146 = v74;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v146, v101, v102, v103);
  if ( !v100 )
    goto LABEL_100;
  v105 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v100->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v100->max_length )
    goto LABEL_101;
  v100->m_Items[0] = v105;
  sub_1BC2FAC((CGThumbnailListItem_o *)v100->m_Items, (int32_t)v105, v48, v104);
  v145 = v138;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v145, v106, v107, v108);
  v110 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v100->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v100->max_length <= 1 )
    goto LABEL_101;
  v100->m_Items[1] = v110;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v100->m_Items[1], (int32_t)v110, v48, v109);
  v144 = v137;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v144, v111, v112, v113);
  v115 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v100->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v100->max_length <= 2 )
    goto LABEL_101;
  v100->m_Items[2] = v115;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v100->m_Items[2], (int32_t)v115, v48, v114);
  v143 = v136;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v143, v116, v117, v118);
  v120 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v100->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v100->max_length <= 3 )
    goto LABEL_101;
  v100->m_Items[3] = v120;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v100->m_Items[3], (int32_t)v120, v48, v119);
  v142 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v142, v121, v122, v123);
  v125 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v100->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v100->max_length <= 4 )
    goto LABEL_101;
  v100->m_Items[4] = v125;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v100->m_Items[4], (int32_t)v125, v48, v124);
  v141 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v141, v126, v127, v128);
  v130 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1BC3144(MasterData_object, v100->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v135 = sub_1BC3288();
      sub_1BC3130(v135, 0LL);
    }
  }
  if ( v100->max_length <= 5 )
    goto LABEL_101;
  v100->m_Items[5] = v130;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v100->m_Items[5], (int32_t)v130, v48, v129);
  MasterData_object = (__int64)System_String__Format_62390076(v99, v100, 0LL);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_100;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = (__int64)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = (__int64)this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = (__int64)this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v132);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v133);
  v134 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v134, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v134, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmPoint(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x26
  System_Object_array *v22; // x27
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x29
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x28
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x28
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x28
  System_String_o *v46; // x26
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x25
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x24
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  SummonConfirmDlgComponent_c *v59; // x0
  __int64 v60; // x0
  const MethodInfo *v61; // [xsp+10h] [xbp-80h]
  int32_t v63; // [xsp+20h] [xbp-70h] BYREF
  int32_t v64; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v65; // [xsp+28h] [xbp-68h] BYREF
  int32_t v66; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AFE4ED & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1BC3008(&LocalizationManager_TypeInfo, v17);
    sub_1BC3008(&object___TypeInfo, v18);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v19);
    sub_1BC3008(&StringLiteral_3724/*"CONFIRM_POINTSUMMON_MSG"*/, v20);
    byte_4AFE4ED = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3724/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v22 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 4LL);
  v66 = needPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v66, v23, v24, v25);
  if ( !v22 )
    sub_1BC3264(v26, v27);
  v30 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1BC3144(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( !v22->max_length )
    goto LABEL_23;
  v22->m_Items[0] = v30;
  sub_1BC2FAC((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v30, v28, v29);
  v65 = gachaTime;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v65, v31, v32, v33);
  v35 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1BC3144(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_23;
  v22->m_Items[1] = v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[1], (int32_t)v35, v28, v34);
  v64 = havePointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v64, v36, v37, v38);
  v40 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1BC3144(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_23;
  v22->m_Items[2] = v40;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[2], (int32_t)v40, v28, v39);
  v63 = afterPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v63, v41, v42, v43);
  v45 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1BC3144(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_24:
      v60 = sub_1BC3288();
      sub_1BC3130(v60, 0LL);
    }
  }
  if ( v22->max_length <= 3 )
LABEL_23:
    sub_1BC326C(v26, v27, v28);
  v22->m_Items[3] = v45;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->m_Items[3], (int32_t)v45, v28, v44);
  v46 = System_String__Format_62390076(v21, v22, 0LL);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    v66 = needPointNum;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v47, v48, v49);
    v65 = havePointNum;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v51, v52, v53);
    v64 = afterPointNum;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v55, v56, v57);
    v46 = System_String__Format_62390008(summonConfirmMessage, v50, v54, v58, 0LL);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v47,
    v48);
  v59 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v59 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v46,
    0LL,
    callback,
    v59->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    gachaSubEntity,
    v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmStone(
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  System_String_o *v53; // x20
  System_String_o *v54; // x0
  __int64 *v55; // x8
  System_String_o *v56; // x26
  int32_t v57; // w24
  System_Object_array *v58; // x27
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 addMsgBgSprite; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x20
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  const MethodInfo *v70; // x3
  Il2CppObject *v71; // x20
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x20
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x20
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  const MethodInfo *v85; // x3
  Il2CppObject *v86; // x20
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x20
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x20
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  const MethodInfo *v100; // x3
  Il2CppObject *v101; // x20
  const MethodInfo *v102; // x3
  System_String_o *v103; // x29
  System_String_o *v104; // x20
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  System_String_o *v108; // x20
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  System_String_o *v114; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v116; // x0
  UIWidget_o *v117; // x8
  int32_t v118; // w1
  System_String_o *v119; // x27
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  Il2CppObject *v122; // x0
  System_String_o *v123; // x20
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  Il2CppObject *v127; // x0
  System_String_o *v128; // x20
  System_String_o *v129; // x0
  System_String_o *v130; // x20
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  Il2CppObject *v134; // x24
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  Il2CppObject *v138; // x0
  System_String_o *v139; // x25
  System_String_o *v140; // x24
  System_Object_array *v141; // x29
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  const MethodInfo *v145; // x3
  Il2CppObject *v146; // x20
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  const MethodInfo *v150; // x3
  Il2CppObject *v151; // x20
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  const MethodInfo *v155; // x3
  Il2CppObject *v156; // x20
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  const MethodInfo *v160; // x3
  Il2CppObject *v161; // x20
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  const MethodInfo *v165; // x3
  Il2CppObject *v166; // x20
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x4
  const MethodInfo *v170; // x3
  Il2CppObject *v171; // x20
  System_String_o *v172; // x20
  System_String_o *v173; // x0
  long double inited; // q0
  _QWORD *v175; // x21
  System_String_o *v176; // x22
  __int64 v177; // x8
  __int64 v178; // x0
  __int64 v179; // x0
  System_String_o *v180; // x26
  System_String_o *v181; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v183; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v191; // x0
  __int64 v192; // x0
  const MethodInfo *v193; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+38h] [xbp-88h]
  int32_t v197; // [xsp+40h] [xbp-80h] BYREF
  int32_t v198; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v199; // [xsp+48h] [xbp-78h] BYREF
  int32_t v200; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v201; // [xsp+50h] [xbp-70h] BYREF
  int32_t v202; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v203; // [xsp+58h] [xbp-68h] BYREF
  int32_t v204; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4AFE4EB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_object___, title);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28);
    sub_1BC3008(&int_TypeInfo, v29);
    sub_1BC3008(&LocalizationManager_TypeInfo, v30);
    sub_1BC3008(&object___TypeInfo, v31);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v32);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v33);
    sub_1BC3008(&StringLiteral_3701/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v34);
    sub_1BC3008(&StringLiteral_12315/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, v35);
    sub_1BC3008(&StringLiteral_3707/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v36);
    sub_1BC3008(&StringLiteral_3702/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v37);
    sub_1BC3008(&StringLiteral_3705/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v38);
    sub_1BC3008(&StringLiteral_3723/*"CONFIRM_PAYSUMMON_MSG"*/, v39);
    sub_1BC3008(&StringLiteral_3703/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v40);
    sub_1BC3008(&StringLiteral_3704/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v41);
    sub_1BC3008(&StringLiteral_12357/*"SUMMON_STONEPAY_WARNING_MSG"*/, v42);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v43);
    sub_1BC3008(&StringLiteral_12344/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v44);
    sub_1BC3008(&StringLiteral_3725/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v45);
    sub_1BC3008(&StringLiteral_12359/*"SUMMON_WARNING_MESSAGE_{0}"*/, v46);
    sub_1BC3008(&StringLiteral_12305/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v47);
    sub_1BC3008(&StringLiteral_3706/*"CONFIRM_CHARGESUMMON_MSG"*/, v48);
    byte_4AFE4EB = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1BC2FAC(
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
      v55 = &StringLiteral_3707/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( type == 7 )
        v55 = &StringLiteral_3706/*"CONFIRM_CHARGESUMMON_MSG"*/;
      else
        v55 = &StringLiteral_3723/*"CONFIRM_PAYSUMMON_MSG"*/;
    }
    v54 = (System_String_o *)*v55;
  }
  else
  {
    v204 = privilegeGachaTextId;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v49, v50, v51);
    v53 = System_String__Format((System_String_o *)StringLiteral_3725/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v52, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = v53;
  }
  v56 = LocalizationManager__Get(v54, 0LL);
  v57 = price;
  v58 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 9LL);
  v204 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v204, v59, v60, v61);
  if ( !v58 )
    goto LABEL_118;
  v66 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( !v58->max_length )
    goto LABEL_116;
  v58->m_Items[0] = v66;
  sub_1BC2FAC((CGThumbnailListItem_o *)v58->m_Items, (int32_t)v66, v64, v65);
  v203 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v203, v67, v68, v69);
  v71 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_116;
  v58->m_Items[1] = v71;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[1], (int32_t)v71, v64, v70);
  v202 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v202, v72, v73, v74);
  v76 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 2 )
    goto LABEL_116;
  v58->m_Items[2] = v76;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[2], (int32_t)v76, v64, v75);
  v201 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v201, v77, v78, v79);
  v81 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 3 )
    goto LABEL_116;
  v58->m_Items[3] = v81;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[3], (int32_t)v81, v64, v80);
  v200 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v200, v82, v83, v84);
  v86 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 4 )
    goto LABEL_116;
  v58->m_Items[4] = v86;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[4], (int32_t)v86, v64, v85);
  v199 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v199, v87, v88, v89);
  v91 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 5 )
    goto LABEL_116;
  v58->m_Items[5] = v91;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[5], (int32_t)v91, v64, v90);
  v198 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v198, v92, v93, v94);
  v96 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 6 )
    goto LABEL_116;
  v58->m_Items[6] = v96;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[6], (int32_t)v96, v64, v95);
  v197 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v197, v97, v98, v99);
  v101 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 7 )
    goto LABEL_116;
  v58->m_Items[7] = v101;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[7], (int32_t)v101, v64, v100);
  if ( title )
  {
    addMsgBgSprite = sub_1BC3144(title, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 8 )
    goto LABEL_116;
  v58->m_Items[8] = (Il2CppObject *)title;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v58->m_Items[8], (int32_t)title, v64, v102);
  v103 = System_String__Format_62390076(v56, v58, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12357/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( !this->fields.addMsgBgSprite )
    goto LABEL_118;
  v104 = (System_String_o *)addMsgBgSprite;
  UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 434, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_118;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 60, 0LL);
  if ( privilegeGachaTextId >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, 0LL);
    v204 = privilegeGachaTextId;
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v109, v110, v111);
    v113 = System_String__Format((System_String_o *)StringLiteral_12359/*"SUMMON_WARNING_MESSAGE_{0}"*/, v112, 0LL);
    v114 = LocalizationManager__Get(v113, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v116 = System_String__Format_62389940(v114, (Il2CppObject *)title, DateTime, 0LL);
    addMsgBgSprite = (__int64)System_String__Concat_62348648(v108, v116, 0LL);
    v117 = (UIWidget_o *)this->fields.addMsgBgSprite;
    if ( !v117 )
      goto LABEL_118;
    v104 = (System_String_o *)addMsgBgSprite;
    v118 = 652;
LABEL_59:
    UIWidget__set_width(v117, v118, 0LL);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_118;
    UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 76, 0LL);
    goto LABEL_61;
  }
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12344/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    v120 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v121 = System_String__Format(v119, v120, 0LL);
    addMsgBgSprite = (__int64)System_String__Concat_62348648(v104, v121, 0LL);
    v117 = (UIWidget_o *)this->fields.addMsgBgSprite;
    if ( !v117 )
      goto LABEL_118;
    v104 = (System_String_o *)addMsgBgSprite;
    v118 = 494;
    goto LABEL_59;
  }
LABEL_61:
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(
      this,
      title,
      v103,
      0LL,
      callback,
      14.0,
      v104,
      shopIdIdx,
      isAppendSummon,
      0,
      0LL,
      v193);
    return;
  }
  v204 = gachaId;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v105, v106, v107);
  v123 = System_String__Format((System_String_o *)StringLiteral_3705/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v122, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v123, 0LL) )
  {
    v204 = gachaId;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v124, v125, v126);
    v128 = System_String__Format((System_String_o *)StringLiteral_3705/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v127, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = v128;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = (System_String_o *)StringLiteral_3704/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titlea = LocalizationManager__Get(v129, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_3702/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v204 = v57;
  v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v131, v132, v133);
  v203 = num;
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v203, v135, v136, v137);
  v139 = System_String__Format_62389940(v130, v134, v138, 0LL);
  v140 = LocalizationManager__Get((System_String_o *)StringLiteral_3703/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v141 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
  v202 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v202, v142, v143, v144);
  if ( !v141 )
    goto LABEL_118;
  v146 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( !v141->max_length )
    goto LABEL_116;
  v141->m_Items[0] = v146;
  sub_1BC2FAC((CGThumbnailListItem_o *)v141->m_Items, (int32_t)v146, v64, v145);
  v201 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v201, v147, v148, v149);
  v151 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v141->max_length <= 1 )
    goto LABEL_116;
  v141->m_Items[1] = v151;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v141->m_Items[1], (int32_t)v151, v64, v150);
  v200 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v200, v152, v153, v154);
  v156 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v141->max_length <= 2 )
    goto LABEL_116;
  v141->m_Items[2] = v156;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v141->m_Items[2], (int32_t)v156, v64, v155);
  v199 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v199, v157, v158, v159);
  v161 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v141->max_length <= 3 )
    goto LABEL_116;
  v141->m_Items[3] = v161;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v141->m_Items[3], (int32_t)v161, v64, v160);
  v198 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v198, v162, v163, v164);
  v166 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v141->max_length <= 4 )
    goto LABEL_116;
  v141->m_Items[4] = v166;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v141->m_Items[4], (int32_t)v166, v64, v165);
  v197 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v197, v167, v168, v169);
  v171 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BC3144(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_117:
      v192 = sub_1BC3288();
      sub_1BC3130(v192, 0LL);
    }
  }
  if ( v141->max_length <= 5 )
LABEL_116:
    sub_1BC326C(addMsgBgSprite, v63, v64);
  v141->m_Items[5] = v171;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v141->m_Items[5], (int32_t)v171, v64, v170);
  v172 = System_String__Format_62390076(v140, v141, 0LL);
  v173 = LocalizationManager__Get((System_String_o *)StringLiteral_3701/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v175 = Method_System_Array_Empty_object___;
  v176 = v173;
  v177 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v177 )
  {
    sub_1C134C8(Method_System_Array_Empty_object___);
    v177 = v175[7];
  }
  v178 = *(_QWORD *)(v177 + 16);
  if ( (*(_BYTE *)(v178 + 309) & 1) == 0 )
    v178 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v178 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v178);
  v179 = *(_QWORD *)(v175[7] + 16LL);
  if ( (*(_BYTE *)(v179 + 309) & 1) == 0 )
    v179 = sub_1C1346C(inited);
  v180 = v139;
  v181 = System_String__Format_62390076(v176, **(System_Object_array ***)(v179 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v183 = v181;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
  if ( (addMsgBgSprite & 1) != 0 )
  {
    if ( assetManager )
    {
      addMsgBgSprite = (__int64)this->fields.baseWindow;
      if ( addMsgBgSprite )
      {
        MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__50900816(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo, (int32_t)Component_object, v188, v189);
          goto LABEL_110;
        }
      }
    }
LABEL_118:
    sub_1BC3264(addMsgBgSprite, v63);
  }
LABEL_110:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_118;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titlea,
    v180,
    v172,
    v183,
    tryGetBonusSelectData,
    assetManager,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_118;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v191 = LocalizationManager__Get((System_String_o *)StringLiteral_12305/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v191, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v193);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmTicket(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t num,
        int32_t haveTicketNum,
        int32_t afterTicketNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x23
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x25
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // [xsp+10h] [xbp-60h]
  int32_t v41; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v42; // [xsp+28h] [xbp-48h] BYREF
  int32_t v43; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4AFE4EC & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, title);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_3726/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1BC3008(&StringLiteral_3727/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1BC3008(&StringLiteral_1/*""*/, v16);
    byte_4AFE4EC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_62389940(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_62390008(v27, v31, v35, v39, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v26, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x22
  System_String_o *v16; // x24
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  const MethodInfo *v28; // [xsp+10h] [xbp-70h]
  int32_t v29; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v30; // [xsp+28h] [xbp-58h] BYREF
  int32_t v31; // [xsp+2Ch] [xbp-54h] BYREF

  v31 = haveFreeStoneNum;
  if ( (byte_4AFE4E7 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&price);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_12253/*"STONE_PURCHASE"*/, v11);
    sub_1BC3008(&StringLiteral_12072/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, v13);
    sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4AFE4E7 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_63857360((int32_t)&v31, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL);
  v26 = System_String__Format_62390008(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v26, v27, callback, 14.0, 0LL, 0, 0, 0, 0LL, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x22
  System_String_o *v11; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // [xsp+10h] [xbp-50h]
  int32_t v18; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4AFE4EA & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_12073/*"SHORT_HAVE_POINT"*/, v8);
    sub_1BC3008(&StringLiteral_12071/*"SHORT_DLG_TITLE"*/, v9);
    byte_4AFE4EA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SHORT_HAVE_POINT"*/, 0LL);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v16, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveFreeStone,
        int32_t haveChargeStone,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  const MethodInfo *v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+28h] [xbp-48h] BYREF
  int32_t v27; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4AFE4E6 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&haveFreeStone);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_12253/*"STONE_PURCHASE"*/, v10);
    sub_1BC3008(&StringLiteral_12074/*"SHORT_HAVE_STONE"*/, v11);
    sub_1BC3008(&StringLiteral_12071/*"SHORT_DLG_TITLE"*/, v12);
    byte_4AFE4E6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SHORT_DLG_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SHORT_HAVE_STONE"*/, 0LL);
  v27 = haveChargeStone;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v26 = haveFreeStone;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v19, v20, v21);
  v23 = System_String__Format_62389940(v14, v18, v22, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v13, v23, v24, callback, 14.0, 0LL, 0, 0, 0, 0LL, v25);
}


void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
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
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v25; // x1
  int32_t klass; // w21
  BalanceConfig_c *v27; // x8
  Il2CppObject *object; // x0
  UILabel_o *titleLabel; // x21
  int32_t *v30; // x20
  System_String_o **v31; // x9
  System_String_o *v32; // x22
  UILabel_o *messageLabel; // x21
  System_String_o **v34; // x8
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v42; // x0
  System_Action_object__o *_9__76_0; // x22
  Il2CppObject *v44; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int i; // w24
  int32_t v49; // w21
  __int64 v50; // x2
  struct ItemIconComponent_array *v51; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v53; // x23
  UILabel_o *v54; // x21
  int32_t *v55; // x22
  SummonConfirmDlgComponent_c *v56; // x0
  System_String_o *v57; // x0
  int32_t v58; // w8
  System_String_o *v59; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v61; // x0
  int32_t v62; // w8
  System_String_o *v63; // x22
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v67; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4AFE4F4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1BC3008(&BalanceConfig_TypeInfo, v7);
    sub_1BC3008(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1BC3008(&int_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1BC3008(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, v15);
    sub_1BC3008(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_113/*" "*/, v17);
    sub_1BC3008(&StringLiteral_12316/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1BC3008(&StringLiteral_12318/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1BC3008(&StringLiteral_12319/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1BC3008(&StringLiteral_12321/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1BC3008(&StringLiteral_12320/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1BC3008(&StringLiteral_12317/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_4AFE4F4 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v42 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v42 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_0 = (System_Action_object__o *)v42->static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__76_0 = (System_Action_object__o *)sub_1BC3254(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__76_0, v44, Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_0 = (struct System_Action_ItemIconComponent__o *)_9__76_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__76_0, (int32_t)_9__76_0, v46, v47);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__76_0,
      (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v49 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v49 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 48LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v49 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v49,
                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v51 = this->fields.extraItemIconComponents;
      if ( !v51 )
        goto LABEL_59;
      if ( v49 >= v51->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v49 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1BC326C(SelfUserGame, v25, v50);
      v53 = (UnityEngine_Component_o *)v51->m_Items[v49];
      if ( !v53 )
        goto LABEL_59;
      v54 = extraMessageLabels->m_Items[v49];
      v55 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v53, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v55 )
        goto LABEL_59;
      ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)v53, v55[5], v55[6], v55[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v56 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v56 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v56->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12316/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v58 = v55[7];
        v59 = v57;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v58, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v59, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v62 = v55[7];
        v63 = v61;
        v64 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v62, 0LL);
        v65 = System_String__Format(v63, v64, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_62348648(
                                                     v65,
                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                     0LL);
      }
      v25 = SelfUserGame;
      if ( !v54 )
        goto LABEL_59;
      UILabel__set_text(v54, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
    if ( extraTitleLabel )
    {
      UILabel__set_text(extraTitleLabel, (System_String_o *)SelfUserGame, 0LL);
      return;
    }
    goto LABEL_59;
  }
  if ( bonusType != 1 )
    return;
  if ( !SelfUserGame )
    goto LABEL_59;
  klass = (int32_t)SelfUserGame[8].klass;
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = klass < v27->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_3024764 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v30 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v31 = (System_String_o **)&StringLiteral_12318/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_12321/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v32 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v34 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12316/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12320/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v35 = *v34;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v35, 0LL);
  if ( !v30
    || (v39 = (System_String_o *)SelfUserGame,
        v67 = v30[7],
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v36, v37, v38),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1BC3264(SelfUserGame, v25);
  }
  ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)SelfUserGame, v30[5], v30[6], v30[7], 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetBonusTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, (float)(v10 + (v11 >> 1)), 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, 1.0, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  v15 = *(float *)&localPosition;
  v16 = v7 + mWidth + addMsgBgSprite;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v17, (float)(v15 + (float)(v8 >> 1)) + (float)(v11 >> 1), 0LL);
  v18 = v16 >= 0 ? v16 : v16 + 1;
  GameObjectExtensions__SetLocalPositionX(v5->fields.bonusMsgInfo, (float)(v10 - (v18 >> 1)), 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.titleLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_31;
  this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemSpr;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusItemIconComponent) == 0LL)
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v5->fields.bonusMsgInfo) == 0LL) )
  {
LABEL_31:
    sub_1BC3264(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonConfirmDlgComponent_o *v3; // x19
  struct UILabel_o *extraTitleLabel; // x8
  float v5; // s10
  il2cpp_array_size_t v6; // w23
  float v7; // s9
  float v8; // s12
  struct ItemIconComponent_array *extraItemIconComponents; // x8
  struct UILabel_array *extraMessageLabels; // x8
  struct ItemIconComponent_array *v11; // x9
  ItemIconComponent_o *v12; // x9
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x21
  struct UISprite_o *iconSprite; // x20
  int implementedInterfaces; // s14
  float v17; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalScaleX; // s8
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x0
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *v24; // x0
  float v25; // s0
  int v26; // s15
  float v27; // s9

  v3 = this;
  if ( (byte_4AFE4F5 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_4AFE4F5 = 1;
  }
  extraTitleLabel = v3->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_27;
  v5 = (float)extraTitleLabel->fields.mWidth * 0.5;
  v6 = 0;
  v7 = v5;
  v8 = v5;
  while ( 1 )
  {
    this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
      this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( (signed int)v6 >= SLODWORD(this->fields.closeBtn->fields.hover.fields.b) )
      break;
    extraItemIconComponents = v3->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v6 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1BC326C(this, method, v2);
    this = (SummonConfirmDlgComponent_o *)extraItemIconComponents->m_Items[v6];
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    extraMessageLabels = v3->fields.extraMessageLabels;
    if ( !extraMessageLabels )
      goto LABEL_27;
    if ( v6 >= extraMessageLabels->max_length )
      goto LABEL_28;
    v11 = v3->fields.extraItemIconComponents;
    if ( !v11 )
      goto LABEL_27;
    if ( v6 >= v11->max_length )
      goto LABEL_28;
    v12 = v11->m_Items[v6];
    if ( !v12 )
      goto LABEL_27;
    v13 = &extraMessageLabels->obj.klass + (int)v6;
    v14 = v13[4];
    if ( !v14 )
      goto LABEL_27;
    iconSprite = v12->fields.iconSprite;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)v13[4], 0LL);
    if ( !iconSprite )
      goto LABEL_27;
    implementedInterfaces = (int)v14->_1.implementedInterfaces;
    v17 = (float)iconSprite->fields.mWidth * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0LL);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v20, v7 + v17, 0LL);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v22, 0LL);
    GameObjectExtensions__SetLocalPositionX(v21, v17 + LocalPositionX, 0LL);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    v25 = GameObjectExtensions__GetLocalPositionX(v24, 0LL);
    v26 = (int)v14->_1.implementedInterfaces;
    v27 = v25;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)iconSprite,
                                            0LL);
    if ( !this )
      goto LABEL_27;
    v8 = v8 + (float)(v17 + (float)((float)(LocalScaleX * (float)implementedInterfaces) * 0.5));
    v7 = v27 + (float)v26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    ++v6;
  }
  GameObjectExtensions__SetLocalPositionX(v3->fields.extraMsgInfo, v5 - v8, 0LL);
  this = (SummonConfirmDlgComponent_o *)v3->fields.extraTitleLabel;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v3->fields.extraMsgInfo) == 0LL) )
  {
LABEL_27:
    sub_1BC3264(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  UIWidget_o *baseWindowSprite; // x0
  __int64 v19; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  Il2CppObject *MasterData_object; // x21
  System_Func_object__bool__o **v25; // x22
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  SummonConfirmDlgComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x23
  System_Func_object__int__o *_9__75_1; // x24
  Il2CppObject *v34; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_ICollection_o *v39; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v43; // x23
  SummonConfirmDlgComponent_c *v44; // x0
  const MethodInfo *v45; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v47; // x23
  UnityEngine_Object_o *v48; // x24
  SummonConfirmDlgComponent_c *v49; // x0
  __int64 v50; // x8
  const MethodInfo *v51; // x1
  int v52; // w8
  bool v53; // nf

  if ( (byte_4AFE4F3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1BC3008(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1BC3008(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1BC3008(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__, v13);
    sub_1BC3008(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1BC3008(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo, v15);
    sub_1BC3008(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_4AFE4F3 = 1;
  }
  v17 = sub_1BC3254(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_51;
  *(_DWORD *)(v17 + 16) = shopIdIdx;
  state = this->fields.state;
  if ( state != 4 && state != 2 || !this->fields.extraGiftEntList )
    return 0;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_width(baseWindowSprite, 780, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UIWidget__set_height(baseWindowSprite, 480, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.confirmBtnObject;
  if ( !baseWindowSprite )
    goto LABEL_51;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.infoMsgLabel;
  if ( !baseWindowSprite )
    goto LABEL_51;
  UILabel__set_fontSize((UILabel_o *)baseWindowSprite, 20, 0LL);
  baseWindowSprite = (UIWidget_o *)this->fields.singleMsgInfo;
  if ( !baseWindowSprite
    || (v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v22, 19.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0LL)
    || (v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v23, -29.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1BC3264(baseWindowSprite, v19);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GiftMaster___);
  v25 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v26 = *v25;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v25 )
    {
      v26 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v26;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v26, v28, v29);
    }
    v30 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v31 = SummonConfirmDlgComponent___c_TypeInfo;
    v32 = v30;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v31 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__75_1 = (System_Func_object__int__o *)v31->static_fields->__9__75_1;
    if ( !_9__75_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__75_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__75_1,
        v34,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__75_1, (int32_t)_9__75_1, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v32,
                                                                 (System_Func_TSource__TResult__o *)_9__75_1,
                                                                 (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v39 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v38,
                                                (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v39, 0LL);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v39,
                        0LL);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v17 + 20), v41);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v17 + 20) == 1 )
      {
        v43 = this->fields.bonusMsgInfo;
        v44 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v44 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v43, v44->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v45);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v17 + 20) == 2 )
      {
        v47 = this->fields.extraMsgInfo;
        v48 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0LL) )
        {
          v49 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v49 = SummonConfirmDlgComponent_TypeInfo;
          }
          v50 = 36LL;
        }
        else
        {
LABEL_44:
          v49 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v49 = SummonConfirmDlgComponent_TypeInfo;
          }
          v50 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v47,
          *(float *)((char *)&v49->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v50),
          0LL);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v51);
      }
    }
    v52 = *(_DWORD *)(v17 + 20) + 1;
    v53 = *(_DWORD *)(v17 + 20) - 2 < 0;
    *(_DWORD *)(v17 + 20) = v52;
  }
  while ( v53 != __OFSUB__(v52, 3) );
  return 1;
}


void __fastcall SummonConfirmDlgComponent__add_callbackFunc(
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

  if ( (byte_4AFE4E3 & 1) == 0 )
  {
    sub_1BC3008(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4AFE4E3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  SummonConfirmDlgComponent__remove_callbackFunc(v10, v11, v12);
}


void __fastcall SummonConfirmDlgComponent__remove_callbackFunc(
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

  if ( (byte_4AFE4E4 & 1) == 0 )
  {
    sub_1BC3008(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4AFE4E4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v7->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v6; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4AFE4F2 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_12298/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4AFE4F2 = 1;
  }
  state = this->fields.state;
  if ( state > 8 )
    return;
  if ( ((1 << state) & 0x170) == 0 )
  {
    if ( ((1 << state) & 6) != 0 )
    {
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
        goto LABEL_32;
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0LL) )
      {
        closeBtnObject = this->fields.closeBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0LL);
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
      if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0LL) )
      {
        closeBtnObject = this->fields.confirmBtnObject;
        if ( !closeBtnObject )
          goto LABEL_32;
        UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0LL);
      }
      closeBtnObject = this->fields.closeBtnObject;
      if ( !closeBtnObject )
LABEL_32:
        sub_1BC3264(closeBtnObject, method);
    }
LABEL_30:
    UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0LL);
    return;
  }
  closeBtnObject = this->fields.closeBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf(closeBtnObject, 0LL) )
  {
    closeBtnObject = this->fields.closeBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(closeBtnObject, 0, 0LL);
  }
  closeBtnObject = this->fields.confirmBtnObject;
  if ( !closeBtnObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(closeBtnObject, 1, 0LL);
  v6 = this->fields.state;
  if ( v6 == 8 || v6 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12298/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
    if ( !settingBtnLb )
      goto LABEL_32;
    UILabel__set_text(settingBtnLb, (System_String_o *)closeBtnObject, 0LL);
    closeBtnObject = this->fields.settingBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    goto LABEL_30;
  }
}


void __fastcall SummonConfirmDlgComponent__setTutorial(
        SummonConfirmDlgComponent_o *this,
        bool isTutorial,
        const MethodInfo *method)
{
  struct UIButton_o *closeBtn; // x0

  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    sub_1BC3264(0LL, isTutorial);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))closeBtn->klass->vtable._5_set_isEnabled.method)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._6_OnInit.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__settingResult(
        SummonConfirmDlgComponent_o *this,
        bool res,
        const MethodInfo *method)
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
  AutomaticSaleDlgComponent__Close(autoSaleDlgInfo, 0LL);
  if ( !res )
  {
    autoSaleDlgInfo = (AutomaticSaleDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( autoSaleDlgInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)autoSaleDlgInfo, 1, 0LL);
      return;
    }
LABEL_8:
    sub_1BC3264(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_34518780(this, 0LL, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))autoSaleDialogCloseCallbackFunc->fields.m_target)(
      autoSaleDialogCloseCallbackFunc->fields.original_method_info,
      *(_QWORD *)&autoSaleDialogCloseCallbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent_CallbackFunc___ctor(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0964C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09604;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonConfirmDlgComponent_CallbackFunc__BeginInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4AFE4FC & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, result);
    byte_4AFE4FC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__Invoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SummonConfirmDlgComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFE4FD & 1) == 0 )
  {
    sub_1BC3008(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_4AFE4FD = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___Open_b__71_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c___SetBonusText_b__76_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0LL)) == 0LL )
  {
    sub_1BC3264(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass71_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass71_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass71_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass75_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass75_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass75_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}