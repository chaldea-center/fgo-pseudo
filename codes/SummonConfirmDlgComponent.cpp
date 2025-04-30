void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4A4AA6A & 1) == 0 )
  {
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4A4AA6A = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_BC3330;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BC3D10;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A4AA69 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A4AA69 = 1;
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
  if ( (byte_4A4AA57 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_2961/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1B863B8(&StringLiteral_397/*"#,0"*/, v11);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_4A4AA57 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2961/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v24 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  v19 = (Il2CppObject *)System_Int32__ToString_63159428((int32_t)&v25, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
  v20 = System_String__Format_61686468(v14, v18, v19, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v20, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1B86614(v20, v21);
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

  if ( (byte_4A4AA58 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1B863B8(&int_TypeInfo, v17);
    sub_1B863B8(&LocalizationManager_TypeInfo, v18);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v19);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_12149/*"STONE_PURCHASE"*/, v22);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1B863B8(&StringLiteral_2965/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1B863B8(&StringLiteral_2966/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_4A4AA58 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2966/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2965/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v56 = haveStoneNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v28, v29, v30);
  v55 = haveChargeStoneNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v32, v33, v34);
  v54 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v36, v37, v38);
  baseWindow = System_String__Format_61686536(v27, v31, v35, v39, 0LL);
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__50290416(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo, (int32_t)Component_object, v49, v50);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1B86614(baseWindow, v41);
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
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"STONE_PURCHASE"*/, 0LL);
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_33775528(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_33775528(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A4AA65 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_SummonConfirmDlgComponent_EndClose__, v6);
    byte_4A4AA65 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4AA66 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4AA66 = 1;
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
    sub_1B86614(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
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
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  unsigned int v11; // w22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v13; // w8
  unsigned int v14; // w21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  SummonConfirmDlgComponent_c *v18; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v26; // x1
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v28; // x1
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4A4AA54 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4AA54 = 1;
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
    v11 = 0;
    while ( v11 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v11];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1B8661C(confirmTitleLabel, method);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v13 = extraItemIconComponents->max_length;
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( v14 < v13 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v14];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v13 = extraItemIconComponents->max_length;
      if ( (int)++v14 >= v13 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  v18 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v18 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v18->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, 0, v21, v22);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v23,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v24,
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
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_4A487E1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v28);
    byte_4A487E1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1B86614(confirmTitleLabel, method);
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

  if ( (byte_4A4AA67 & 1) == 0 )
  {
    sub_1B863B8(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1B863B8(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4A4AA67 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B863D0(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1B86604(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1B86614(gameObject, v8);
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

  if ( (byte_4A4AA68 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_4619/*"ConfirmWindow/CloseButton"*/, method);
    sub_1B863B8(&StringLiteral_4621/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1B863B8(&StringLiteral_4617/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_4A4AA68 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42896176(transform, (System_String_o *)StringLiteral_4621/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42896176(v6, (System_String_o *)StringLiteral_4619/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42896176(v7, (System_String_o *)StringLiteral_4617/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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

  if ( (byte_4A4AA5E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, title);
    sub_1B863B8(&Method_DataManager_GetMasterData_GiftMaster___, v21);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v22);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_int___, v23);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v24);
    sub_1B863B8(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v25);
    sub_1B863B8(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v26);
    sub_1B863B8(&LocalizationManager_TypeInfo, v27);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v28);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B863B8(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v31);
    sub_1B863B8(&Method_SummonConfirmDlgComponent___c__Open_b__71_1__, v32);
    sub_1B863B8(&Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__, v33);
    sub_1B863B8(&SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo, v34);
    sub_1B863B8(&SummonConfirmDlgComponent___c_TypeInfo, v35);
    sub_1B863B8(&StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, v36);
    sub_1B863B8(&StringLiteral_1/*""*/, v37);
    byte_4A4AA5E = 1;
  }
  v38 = sub_1B86604(SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_136;
  *(_DWORD *)(v38 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v41, v42);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v38 + 20) = 1;
      v70 = (GiftMaster_o *)MasterData_object;
      v71 = (System_Func_object__bool__o **)(v38 + 24);
      while ( 1 )
      {
        v72 = *v71;
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v71 )
        {
          v72 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v72,
            (Il2CppObject *)v38,
            Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v38 + 24) = v72;
          sub_1B8635C((CGThumbnailListItem_o *)(v38 + 24), (int32_t)v72, v74, v75);
        }
        v76 = System_Linq_Enumerable__Where_object_(
                v73,
                (System_Func_TSource__bool__o *)v72,
                (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
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
          _9__71_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__71_1, v80, Method_SummonConfirmDlgComponent___c__Open_b__71_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__71_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__71_1;
          sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__71_1, (int32_t)_9__71_1, v82, v83);
        }
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v78,
                                                                     (System_Func_TSource__TResult__o *)_9__71_1,
                                                                     (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v85 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v84,
                                                    (const MethodInfo_2FAD974 *)Method_System_Linq_Enumerable_ToList_int___);
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
    sub_1B86614(gameObject, v40);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v103);
  v104 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4AA60 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_4A4AA60 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1B86614(gameObject, v9);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A4AA5D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, callback);
    sub_1B863B8(&int_TypeInfo, v9);
    sub_1B863B8(&LocalizationManager_TypeInfo, v10);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v11);
    sub_1B863B8(&UserGachaMaster_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_3739/*"CONFIRM_FREESUMMON_MSG"*/, v13);
    sub_1B863B8(&StringLiteral_3738/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v14);
    sub_1B863B8(&StringLiteral_6487/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v15);
    byte_4A4AA5D = 1;
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
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v29 = System_String__Format(v43, v19, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v21 )
    goto LABEL_18;
LABEL_11:
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v47 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v23, v24, v25);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61686468(v22, v19, v26, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v29 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6487/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v46 = remainNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v32, v33, v34);
  v45 = maxNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61686468(v31, v35, v39, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1B86614(gameObject, v28);
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
  sub_1B8635C(
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
  GachaEntity_o *v48; // x8
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v50; // w27
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int max_length; // w22
  GachaEntity_o *v54; // x8
  GachaEntity_o *v55; // x9
  Il2CppObject *name; // x22
  Il2CppObject *v57; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v59; // x20
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Object_array *v62; // x29
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x21
  int v77; // w21
  Il2CppObject *monitor; // x21
  System_String_o **v79; // x8
  GachaEntity_o *v80; // x9
  System_String_o *v81; // x20
  UILabel_o *v82; // x28
  System_String_o *v83; // x29
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Object_array *v86; // x20
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  Il2CppObject *v92; // x21
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  Il2CppObject *v98; // x21
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  Il2CppObject *v104; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v106; // x27
  System_Object_array *v107; // x28
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  Il2CppObject *v113; // x20
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  Il2CppObject *v119; // x20
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x20
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  Il2CppObject *v131; // x20
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  Il2CppObject *v137; // x20
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  Il2CppObject *v143; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v145; // x2
  const MethodInfo *v146; // x1
  System_Action_o *v147; // x20
  __int64 v148; // x0
  int32_t v149; // [xsp+4h] [xbp-8Ch]
  int32_t v150; // [xsp+8h] [xbp-88h]
  int32_t v151; // [xsp+Ch] [xbp-84h]
  int32_t v152; // [xsp+10h] [xbp-80h]
  int32_t v153; // [xsp+14h] [xbp-7Ch]
  int32_t v154; // [xsp+18h] [xbp-78h] BYREF
  int32_t v155; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v156; // [xsp+20h] [xbp-70h] BYREF
  int32_t v157; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v158; // [xsp+28h] [xbp-68h] BYREF
  int32_t v159; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A4AA5F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1B863B8(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1B863B8(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1B863B8(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1B863B8(&int_TypeInfo, v24);
    sub_1B863B8(&LocalizationManager_TypeInfo, v25);
    sub_1B863B8(&System_Math_TypeInfo, v26);
    sub_1B863B8(&object___TypeInfo, v27);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v28);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1B863B8(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1B863B8(&StringLiteral_3743/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/, v31);
    sub_1B863B8(&StringLiteral_3744/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v32);
    sub_1B863B8(&StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, v33);
    sub_1B863B8(&StringLiteral_3741/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v34);
    sub_1B863B8(&StringLiteral_1/*""*/, v35);
    sub_1B863B8(&StringLiteral_3742/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v36);
    byte_4A4AA5F = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    price,
    *(const MethodInfo **)&haveStoneNum);
  v39 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
    v39 = sub_1BD6A48(v38);
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 192) + 16LL);
  if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
    v40 = sub_1BD6A48(v38);
  MasterData_object = **(_QWORD **)(v40 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v153 = price;
  v151 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v42 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v152 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
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
    sub_1B8661C(MasterData_object, v37);
  v48 = GachaDataInGroup->m_Items[0];
  if ( !v48 )
    goto LABEL_100;
  v45 = 0;
  v46 = (int)MasterData_object / v48->fields.drawNum1;
LABEL_21:
  v150 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v149 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v50 = System_Math__Max_63172752(v46, 1, 0LL);
  this->fields.extraGiftEntList = giftEntList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v51, v52);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v54 = GachaDataInGroup->m_Items[0];
    if ( v54 )
    {
      v55 = GachaDataInGroup->m_Items[1];
      if ( v55 )
      {
        name = (Il2CppObject *)v54->fields.name;
        v57 = (Il2CppObject *)v55->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3741/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_object = sub_1B86460(object___TypeInfo, 4LL);
        if ( MasterData_object )
        {
          v62 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1B864F4(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !v62->max_length )
            goto LABEL_101;
          v62->m_Items[0] = name;
          sub_1B8635C((CGThumbnailListItem_o *)v62->m_Items, (int32_t)name, v60, v61);
          if ( v57 )
          {
            MasterData_object = sub_1B864F4(v57, v62->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v62->max_length <= 1 )
            goto LABEL_101;
          v62->m_Items[1] = v57;
          sub_1B8635C((CGThumbnailListItem_o *)&v62->m_Items[1], (int32_t)v57, v63, v64);
          v159 = v50;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v159, v65, v66, v67);
          v70 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1B864F4(MasterData_object, v62->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v62->max_length <= 2 )
            goto LABEL_101;
          v62->m_Items[2] = v70;
          sub_1B8635C((CGThumbnailListItem_o *)&v62->m_Items[2], (int32_t)v70, v68, v69);
          v158 = v153;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v158, v71, v72, v73);
          v76 = (Il2CppObject *)MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1B864F4(MasterData_object, v62->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v62->max_length <= 3 )
            goto LABEL_101;
          v62->m_Items[3] = v76;
          sub_1B8635C((CGThumbnailListItem_o *)&v62->m_Items[3], (int32_t)v76, v74, v75);
          MasterData_object = (__int64)System_String__Format_61686604(v59, v62, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
          v77 = v152;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1B86614(MasterData_object, v37);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0LL);
  if ( (MasterData_object & 1) == 0 )
    monitor = (Il2CppObject *)Entity[1].monitor;
  v79 = (System_String_o **)&StringLiteral_3742/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v45 & 1) == 0 )
  {
    if ( !GachaDataInGroup->max_length )
      goto LABEL_101;
    v80 = GachaDataInGroup->m_Items[0];
    if ( !v80 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v80->fields.drawNum1 > 1 )
      v79 = (System_String_o **)&StringLiteral_3743/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v81 = *v79;
  v82 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v83 = LocalizationManager__Get(v81, 0LL);
  MasterData_object = sub_1B86460(object___TypeInfo, 4LL);
  if ( !MasterData_object )
    goto LABEL_100;
  v86 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1B864F4(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v86->max_length )
    goto LABEL_101;
  v86->m_Items[0] = monitor;
  sub_1B8635C((CGThumbnailListItem_o *)v86->m_Items, (int32_t)monitor, v84, v85);
  v159 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v159, v87, v88, v89);
  v92 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v86->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v86->max_length <= 1 )
    goto LABEL_101;
  v86->m_Items[1] = v92;
  sub_1B8635C((CGThumbnailListItem_o *)&v86->m_Items[1], (int32_t)v92, v90, v91);
  v158 = v50;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v158, v93, v94, v95);
  v98 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v86->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v86->max_length <= 2 )
    goto LABEL_101;
  v86->m_Items[2] = v98;
  sub_1B8635C((CGThumbnailListItem_o *)&v86->m_Items[2], (int32_t)v98, v96, v97);
  v157 = v153;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v157, v99, v100, v101);
  v104 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v86->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v86->max_length <= 3 )
    goto LABEL_101;
  v86->m_Items[3] = v104;
  sub_1B8635C((CGThumbnailListItem_o *)&v86->m_Items[3], (int32_t)v104, v102, v103);
  MasterData_object = (__int64)System_String__Format_61686604(v83, v86, 0LL);
  if ( !v82 )
    goto LABEL_100;
  UILabel__set_text(v82, (System_String_o *)MasterData_object, 0LL);
  v77 = v152;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v106 = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v107 = (System_Object_array *)sub_1B86460(object___TypeInfo, 6LL);
  v159 = v77;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v159, v108, v109, v110);
  if ( !v107 )
    goto LABEL_100;
  v113 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v107->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v107->max_length )
    goto LABEL_101;
  v107->m_Items[0] = v113;
  sub_1B8635C((CGThumbnailListItem_o *)v107->m_Items, (int32_t)v113, v111, v112);
  v158 = v151;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v158, v114, v115, v116);
  v119 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v107->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v107->max_length <= 1 )
    goto LABEL_101;
  v107->m_Items[1] = v119;
  sub_1B8635C((CGThumbnailListItem_o *)&v107->m_Items[1], (int32_t)v119, v117, v118);
  v157 = v150;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v157, v120, v121, v122);
  v125 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v107->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v107->max_length <= 2 )
    goto LABEL_101;
  v107->m_Items[2] = v125;
  sub_1B8635C((CGThumbnailListItem_o *)&v107->m_Items[2], (int32_t)v125, v123, v124);
  v156 = v149;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v156, v126, v127, v128);
  v131 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v107->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v107->max_length <= 3 )
    goto LABEL_101;
  v107->m_Items[3] = v131;
  sub_1B8635C((CGThumbnailListItem_o *)&v107->m_Items[3], (int32_t)v131, v129, v130);
  v155 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v155, v132, v133, v134);
  v137 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v107->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v107->max_length <= 4 )
    goto LABEL_101;
  v107->m_Items[4] = v137;
  sub_1B8635C((CGThumbnailListItem_o *)&v107->m_Items[4], (int32_t)v137, v135, v136);
  v154 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v154, v138, v139, v140);
  v143 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1B864F4(MasterData_object, v107->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v148 = sub_1B86638();
      sub_1B864E0(v148, 0LL);
    }
  }
  if ( v107->max_length <= 5 )
    goto LABEL_101;
  v107->m_Items[5] = v143;
  sub_1B8635C((CGThumbnailListItem_o *)&v107->m_Items[5], (int32_t)v143, v141, v142);
  MasterData_object = (__int64)System_String__Format_61686604(v106, v107, 0LL);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v145);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v146);
  v147 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v147, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v147, 0, 0LL);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x29
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x28
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x28
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x28
  System_String_o *v49; // x26
  __int64 v50; // x2
  const MethodInfo *v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x25
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x24
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  SummonConfirmDlgComponent_c *v62; // x0
  __int64 v63; // x0
  const MethodInfo *v64; // [xsp+10h] [xbp-80h]
  int32_t v66; // [xsp+20h] [xbp-70h] BYREF
  int32_t v67; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v68; // [xsp+28h] [xbp-68h] BYREF
  int32_t v69; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A4AA5C & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1B863B8(&LocalizationManager_TypeInfo, v17);
    sub_1B863B8(&object___TypeInfo, v18);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_3747/*"CONFIRM_POINTSUMMON_MSG"*/, v20);
    byte_4A4AA5C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3747/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v22 = (System_Object_array *)sub_1B86460(object___TypeInfo, 4LL);
  v69 = needPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v69, v23, v24, v25);
  if ( !v22 )
    sub_1B86614(v26, v27);
  v30 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1B864F4(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( !v22->max_length )
    goto LABEL_23;
  v22->m_Items[0] = v30;
  sub_1B8635C((CGThumbnailListItem_o *)v22->m_Items, (int32_t)v30, v28, v29);
  v68 = gachaTime;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v68, v31, v32, v33);
  v36 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1B864F4(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_23;
  v22->m_Items[1] = v36;
  sub_1B8635C((CGThumbnailListItem_o *)&v22->m_Items[1], (int32_t)v36, v34, v35);
  v67 = havePointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v67, v37, v38, v39);
  v42 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1B864F4(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_24;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_23;
  v22->m_Items[2] = v42;
  sub_1B8635C((CGThumbnailListItem_o *)&v22->m_Items[2], (int32_t)v42, v40, v41);
  v66 = afterPointNum;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v66, v43, v44, v45);
  v48 = (Il2CppObject *)v26;
  if ( v26 )
  {
    v26 = sub_1B864F4(v26, v22->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_24:
      v63 = sub_1B86638();
      sub_1B864E0(v63, 0LL);
    }
  }
  if ( v22->max_length <= 3 )
LABEL_23:
    sub_1B8661C(v26, v27);
  v22->m_Items[3] = v48;
  sub_1B8635C((CGThumbnailListItem_o *)&v22->m_Items[3], (int32_t)v48, v46, v47);
  v49 = System_String__Format_61686604(v21, v22, 0LL);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    v69 = needPointNum;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v50, v51, v52);
    v68 = havePointNum;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v54, v55, v56);
    v67 = afterPointNum;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v58, v59, v60);
    v49 = System_String__Format_61686536(summonConfirmMessage, v53, v57, v61, 0LL);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v50,
    v51);
  v62 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v62 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v49,
    0LL,
    callback,
    v62->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    gachaSubEntity,
    v64);
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
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x20
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x20
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  Il2CppObject *v78; // x20
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppObject *v84; // x20
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  Il2CppObject *v90; // x20
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x20
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x20
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  Il2CppObject *v108; // x20
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  System_String_o *v111; // x29
  System_String_o *v112; // x20
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  System_String_o *v116; // x20
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v124; // x0
  UIWidget_o *v125; // x8
  int32_t v126; // w1
  System_String_o *v127; // x27
  Il2CppObject *v128; // x0
  System_String_o *v129; // x0
  Il2CppObject *v130; // x0
  System_String_o *v131; // x20
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  Il2CppObject *v135; // x0
  System_String_o *v136; // x20
  System_String_o *v137; // x0
  System_String_o *v138; // x20
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  Il2CppObject *v142; // x24
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  Il2CppObject *v146; // x0
  System_String_o *v147; // x25
  System_String_o *v148; // x24
  System_Object_array *v149; // x29
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  Il2CppObject *v155; // x20
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  Il2CppObject *v161; // x20
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  Il2CppObject *v167; // x20
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  Il2CppObject *v173; // x20
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  Il2CppObject *v179; // x20
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  Il2CppObject *v185; // x20
  System_String_o *v186; // x20
  System_String_o *v187; // x0
  long double inited; // q0
  _QWORD *v189; // x21
  System_String_o *v190; // x22
  __int64 v191; // x8
  __int64 v192; // x0
  __int64 v193; // x0
  System_String_o *v194; // x26
  System_String_o *v195; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v197; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  int32_t v202; // w2
  const MethodInfo *v203; // x3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v205; // x0
  __int64 v206; // x0
  const MethodInfo *v207; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+38h] [xbp-88h]
  int32_t v211; // [xsp+40h] [xbp-80h] BYREF
  int32_t v212; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v213; // [xsp+48h] [xbp-78h] BYREF
  int32_t v214; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v215; // [xsp+50h] [xbp-70h] BYREF
  int32_t v216; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v217; // [xsp+58h] [xbp-68h] BYREF
  int32_t v218; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4A4AA5A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_object___, title);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v28);
    sub_1B863B8(&int_TypeInfo, v29);
    sub_1B863B8(&LocalizationManager_TypeInfo, v30);
    sub_1B863B8(&object___TypeInfo, v31);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v32);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v33);
    sub_1B863B8(&StringLiteral_3725/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v34);
    sub_1B863B8(&StringLiteral_12211/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, v35);
    sub_1B863B8(&StringLiteral_3731/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v36);
    sub_1B863B8(&StringLiteral_3726/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v37);
    sub_1B863B8(&StringLiteral_3729/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v38);
    sub_1B863B8(&StringLiteral_3746/*"CONFIRM_PAYSUMMON_MSG"*/, v39);
    sub_1B863B8(&StringLiteral_3727/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v40);
    sub_1B863B8(&StringLiteral_3728/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v41);
    sub_1B863B8(&StringLiteral_12253/*"SUMMON_STONEPAY_WARNING_MSG"*/, v42);
    sub_1B863B8(&StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, v43);
    sub_1B863B8(&StringLiteral_12240/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v44);
    sub_1B863B8(&StringLiteral_3748/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v45);
    sub_1B863B8(&StringLiteral_12255/*"SUMMON_WARNING_MESSAGE_{0}"*/, v46);
    sub_1B863B8(&StringLiteral_12201/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v47);
    sub_1B863B8(&StringLiteral_3730/*"CONFIRM_CHARGESUMMON_MSG"*/, v48);
    byte_4A4AA5A = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1B8635C(
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
      v55 = &StringLiteral_3731/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( type == 7 )
        v55 = &StringLiteral_3730/*"CONFIRM_CHARGESUMMON_MSG"*/;
      else
        v55 = &StringLiteral_3746/*"CONFIRM_PAYSUMMON_MSG"*/;
    }
    v54 = (System_String_o *)*v55;
  }
  else
  {
    v218 = privilegeGachaTextId;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v49, v50, v51);
    v53 = System_String__Format((System_String_o *)StringLiteral_3748/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v52, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = v53;
  }
  v56 = LocalizationManager__Get(v54, 0LL);
  v57 = price;
  v58 = (System_Object_array *)sub_1B86460(object___TypeInfo, 9LL);
  v218 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v218, v59, v60, v61);
  if ( !v58 )
    goto LABEL_118;
  v66 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( !v58->max_length )
    goto LABEL_116;
  v58->m_Items[0] = v66;
  sub_1B8635C((CGThumbnailListItem_o *)v58->m_Items, (int32_t)v66, v64, v65);
  v217 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v217, v67, v68, v69);
  v72 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 1 )
    goto LABEL_116;
  v58->m_Items[1] = v72;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[1], (int32_t)v72, v70, v71);
  v216 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v216, v73, v74, v75);
  v78 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 2 )
    goto LABEL_116;
  v58->m_Items[2] = v78;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[2], (int32_t)v78, v76, v77);
  v215 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v215, v79, v80, v81);
  v84 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 3 )
    goto LABEL_116;
  v58->m_Items[3] = v84;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[3], (int32_t)v84, v82, v83);
  v214 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v214, v85, v86, v87);
  v90 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 4 )
    goto LABEL_116;
  v58->m_Items[4] = v90;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[4], (int32_t)v90, v88, v89);
  v213 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v213, v91, v92, v93);
  v96 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 5 )
    goto LABEL_116;
  v58->m_Items[5] = v96;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[5], (int32_t)v96, v94, v95);
  v212 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v212, v97, v98, v99);
  v102 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 6 )
    goto LABEL_116;
  v58->m_Items[6] = v102;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[6], (int32_t)v102, v100, v101);
  v211 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v211, v103, v104, v105);
  v108 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 7 )
    goto LABEL_116;
  v58->m_Items[7] = v108;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[7], (int32_t)v108, v106, v107);
  if ( title )
  {
    addMsgBgSprite = sub_1B864F4(title, v58->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v58->max_length <= 8 )
    goto LABEL_116;
  v58->m_Items[8] = (Il2CppObject *)title;
  sub_1B8635C((CGThumbnailListItem_o *)&v58->m_Items[8], (int32_t)title, v109, v110);
  v111 = System_String__Format_61686604(v56, v58, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12253/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( !this->fields.addMsgBgSprite )
    goto LABEL_118;
  v112 = (System_String_o *)addMsgBgSprite;
  UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 434, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_118;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 60, 0LL);
  if ( privilegeGachaTextId >= 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_12211/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, 0LL);
    v218 = privilegeGachaTextId;
    v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v117, v118, v119);
    v121 = System_String__Format((System_String_o *)StringLiteral_12255/*"SUMMON_WARNING_MESSAGE_{0}"*/, v120, 0LL);
    v122 = LocalizationManager__Get(v121, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v124 = System_String__Format_61686468(v122, (Il2CppObject *)title, DateTime, 0LL);
    addMsgBgSprite = (__int64)System_String__Concat_61645176(v116, v124, 0LL);
    v125 = (UIWidget_o *)this->fields.addMsgBgSprite;
    if ( !v125 )
      goto LABEL_118;
    v112 = (System_String_o *)addMsgBgSprite;
    v126 = 652;
LABEL_59:
    UIWidget__set_width(v125, v126, 0LL);
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
    v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12240/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    v128 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v129 = System_String__Format(v127, v128, 0LL);
    addMsgBgSprite = (__int64)System_String__Concat_61645176(v112, v129, 0LL);
    v125 = (UIWidget_o *)this->fields.addMsgBgSprite;
    if ( !v125 )
      goto LABEL_118;
    v112 = (System_String_o *)addMsgBgSprite;
    v126 = 494;
    goto LABEL_59;
  }
LABEL_61:
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(
      this,
      title,
      v111,
      0LL,
      callback,
      14.0,
      v112,
      shopIdIdx,
      isAppendSummon,
      0,
      0LL,
      v207);
    return;
  }
  v218 = gachaId;
  v130 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v113, v114, v115);
  v131 = System_String__Format((System_String_o *)StringLiteral_3729/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v130, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v131, 0LL) )
  {
    v218 = gachaId;
    v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v132, v133, v134);
    v136 = System_String__Format((System_String_o *)StringLiteral_3729/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v135, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v137 = v136;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v137 = (System_String_o *)StringLiteral_3728/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titlea = LocalizationManager__Get(v137, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v138 = LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v218 = v57;
  v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218, v139, v140, v141);
  v217 = num;
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v217, v143, v144, v145);
  v147 = System_String__Format_61686468(v138, v142, v146, 0LL);
  v148 = LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v149 = (System_Object_array *)sub_1B86460(object___TypeInfo, 6LL);
  v216 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v216, v150, v151, v152);
  if ( !v149 )
    goto LABEL_118;
  v155 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v149->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( !v149->max_length )
    goto LABEL_116;
  v149->m_Items[0] = v155;
  sub_1B8635C((CGThumbnailListItem_o *)v149->m_Items, (int32_t)v155, v153, v154);
  v215 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v215, v156, v157, v158);
  v161 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v149->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v149->max_length <= 1 )
    goto LABEL_116;
  v149->m_Items[1] = v161;
  sub_1B8635C((CGThumbnailListItem_o *)&v149->m_Items[1], (int32_t)v161, v159, v160);
  v214 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v214, v162, v163, v164);
  v167 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v149->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v149->max_length <= 2 )
    goto LABEL_116;
  v149->m_Items[2] = v167;
  sub_1B8635C((CGThumbnailListItem_o *)&v149->m_Items[2], (int32_t)v167, v165, v166);
  v213 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v213, v168, v169, v170);
  v173 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v149->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v149->max_length <= 3 )
    goto LABEL_116;
  v149->m_Items[3] = v173;
  sub_1B8635C((CGThumbnailListItem_o *)&v149->m_Items[3], (int32_t)v173, v171, v172);
  v212 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v212, v174, v175, v176);
  v179 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v149->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_117;
  }
  if ( v149->max_length <= 4 )
    goto LABEL_116;
  v149->m_Items[4] = v179;
  sub_1B8635C((CGThumbnailListItem_o *)&v149->m_Items[4], (int32_t)v179, v177, v178);
  v211 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v211, v180, v181, v182);
  v185 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B864F4(addMsgBgSprite, v149->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_117:
      v206 = sub_1B86638();
      sub_1B864E0(v206, 0LL);
    }
  }
  if ( v149->max_length <= 5 )
LABEL_116:
    sub_1B8661C(addMsgBgSprite, v63);
  v149->m_Items[5] = v185;
  sub_1B8635C((CGThumbnailListItem_o *)&v149->m_Items[5], (int32_t)v185, v183, v184);
  v186 = System_String__Format_61686604(v148, v149, 0LL);
  v187 = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v189 = Method_System_Array_Empty_object___;
  v190 = v187;
  v191 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v191 )
  {
    sub_1BD6AA4(Method_System_Array_Empty_object___);
    v191 = v189[7];
  }
  v192 = *(_QWORD *)(v191 + 16);
  if ( (*(_BYTE *)(v192 + 309) & 1) == 0 )
    v192 = sub_1BD6A48(inited);
  if ( !*(_DWORD *)(v192 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v192);
  v193 = *(_QWORD *)(v189[7] + 16LL);
  if ( (*(_BYTE *)(v193 + 309) & 1) == 0 )
    v193 = sub_1BD6A48(inited);
  v194 = v147;
  v195 = System_String__Format_61686604(v190, **(System_Object_array ***)(v193 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v197 = v195;
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__50290416(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo, (int32_t)Component_object, v202, v203);
          goto LABEL_110;
        }
      }
    }
LABEL_118:
    sub_1B86614(addMsgBgSprite, v63);
  }
LABEL_110:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_118;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titlea,
    v194,
    v186,
    v197,
    tryGetBonusSelectData,
    assetManager,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_118;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v205 = LocalizationManager__Get((System_String_o *)StringLiteral_12201/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v205, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v207);
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

  if ( (byte_4A4AA5B & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, title);
    sub_1B863B8(&LocalizationManager_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_3749/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1B863B8(&StringLiteral_3750/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1B863B8(&StringLiteral_1/*""*/, v16);
    byte_4A4AA5B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3749/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_61686468(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_61686536(v27, v31, v35, v39, 0LL);
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
  if ( (byte_4A4AA56 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B863B8(&LocalizationManager_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_12149/*"STONE_PURCHASE"*/, v11);
    sub_1B863B8(&StringLiteral_11976/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1B863B8(&StringLiteral_397/*"#,0"*/, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    byte_4A4AA56 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_11976/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_63159428((int32_t)&v31, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
  v26 = System_String__Format_61686536(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"STONE_PURCHASE"*/, 0LL);
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

  if ( (byte_4A4AA59 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_11977/*"SHORT_HAVE_POINT"*/, v8);
    sub_1B863B8(&StringLiteral_11975/*"SHORT_DLG_TITLE"*/, v9);
    byte_4A4AA59 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11975/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SHORT_HAVE_POINT"*/, 0LL);
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

  if ( (byte_4A4AA55 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&haveFreeStone);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_12149/*"STONE_PURCHASE"*/, v10);
    sub_1B863B8(&StringLiteral_11978/*"SHORT_HAVE_STONE"*/, v11);
    sub_1B863B8(&StringLiteral_11975/*"SHORT_DLG_TITLE"*/, v12);
    byte_4A4AA55 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_11975/*"SHORT_DLG_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_11978/*"SHORT_HAVE_STONE"*/, 0LL);
  v27 = haveChargeStone;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v26 = haveFreeStone;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v19, v20, v21);
  v23 = System_String__Format_61686468(v14, v18, v22, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"STONE_PURCHASE"*/, 0LL);
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
  int32_t m_CachedPtr; // w21
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
  struct ItemIconComponent_array *v50; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v52; // x23
  UILabel_o *v53; // x21
  int32_t *v54; // x22
  SummonConfirmDlgComponent_c *v55; // x0
  System_String_o *v56; // x0
  int32_t v57; // w8
  System_String_o *v58; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v60; // x0
  int32_t v61; // w8
  System_String_o *v62; // x22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v66; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A4AA63 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1B863B8(&BalanceConfig_TypeInfo, v7);
    sub_1B863B8(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1B863B8(&int_TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1B863B8(&LocalizationManager_TypeInfo, v13);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1B863B8(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, v15);
    sub_1B863B8(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1B863B8(&StringLiteral_115/*" "*/, v17);
    sub_1B863B8(&StringLiteral_12212/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1B863B8(&StringLiteral_12214/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1B863B8(&StringLiteral_12215/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1B863B8(&StringLiteral_12217/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1B863B8(&StringLiteral_12216/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1B863B8(&StringLiteral_12213/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_4A4AA63 = 1;
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
      _9__76_0 = (System_Action_object__o *)sub_1B86604(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__76_0, v44, Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_0 = (struct System_Action_ItemIconComponent__o *)_9__76_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__76_0, (int32_t)_9__76_0, v46, v47);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__76_0,
      (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
                                                   (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v50 = this->fields.extraItemIconComponents;
      if ( !v50 )
        goto LABEL_59;
      if ( v49 >= v50->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v49 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1B8661C(SelfUserGame, v25);
      v52 = (UnityEngine_Component_o *)v50->m_Items[v49];
      if ( !v52 )
        goto LABEL_59;
      v53 = extraMessageLabels->m_Items[v49];
      v54 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v52, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v54 )
        goto LABEL_59;
      ItemIconComponent__SetGift_39099496((ItemIconComponent_o *)v52, v54[5], v54[6], v54[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v55 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v55 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v55->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12212/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v57 = v54[7];
        v58 = v56;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v57, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v58, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v61 = v54[7];
        v62 = v60;
        v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v61, 0LL);
        v64 = System_String__Format(v62, v63, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_61645176(
                                                     v64,
                                                     (System_String_o *)StringLiteral_115/*" "*/,
                                                     0LL);
      }
      v25 = SelfUserGame;
      if ( !v53 )
        goto LABEL_59;
      UILabel__set_text(v53, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12215/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
  m_CachedPtr = SelfUserGame[7].fields.m_CachedPtr;
  v27 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = m_CachedPtr < v27->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_2F91E3C *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v30 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v31 = (System_String_o **)&StringLiteral_12214/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_12217/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v32 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v34 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12212/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12216/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v35 = *v34;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v35, 0LL);
  if ( !v30
    || (v39 = (System_String_o *)SelfUserGame,
        v66 = v30[7],
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v36, v37, v38),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1B86614(SelfUserGame, v25);
  }
  ItemIconComponent__SetGift_39099496((ItemIconComponent_o *)SelfUserGame, v30[5], v30[6], v30[7], 0, 0LL);
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
    sub_1B86614(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


void __fastcall SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  SummonConfirmDlgComponent_o *v2; // x19
  struct UILabel_o *extraTitleLabel; // x8
  float v4; // s10
  il2cpp_array_size_t v5; // w23
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
  if ( (byte_4A4AA64 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_4A4AA64 = 1;
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
    if ( (signed int)v5 >= SLODWORD(this->fields.closeBtn->fields.hover.fields.b) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1B8661C(this, method);
    this = (SummonConfirmDlgComponent_o *)extraItemIconComponents->m_Items[v5];
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    extraMessageLabels = v2->fields.extraMessageLabels;
    if ( !extraMessageLabels )
      goto LABEL_27;
    if ( v5 >= extraMessageLabels->max_length )
      goto LABEL_28;
    v10 = v2->fields.extraItemIconComponents;
    if ( !v10 )
      goto LABEL_27;
    if ( v5 >= v10->max_length )
      goto LABEL_28;
    v11 = v10->m_Items[v5];
    if ( !v11 )
      goto LABEL_27;
    v12 = &extraMessageLabels->obj.klass + (int)v5;
    v13 = v12[4];
    if ( !v13 )
      goto LABEL_27;
    iconSprite = v11->fields.iconSprite;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)v12[4], 0LL);
    if ( !iconSprite )
      goto LABEL_27;
    implementedInterfaces = (int)v13->_1.implementedInterfaces;
    v16 = (float)iconSprite->fields.mWidth * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0LL);
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
    GameObjectExtensions__SetLocalPositionX(v19, v6 + v16, 0LL);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v21, 0LL);
    GameObjectExtensions__SetLocalPositionX(v20, v16 + LocalPositionX, 0LL);
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    v24 = GameObjectExtensions__GetLocalPositionX(v23, 0LL);
    v25 = (int)v13->_1.implementedInterfaces;
    v26 = v24;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)iconSprite,
                                            0LL);
    if ( !this )
      goto LABEL_27;
    v7 = v7 + (float)(v16 + (float)((float)(LocalScaleX * (float)implementedInterfaces) * 0.5));
    v6 = v26 + (float)v25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    ++v5;
  }
  GameObjectExtensions__SetLocalPositionX(v2->fields.extraMsgInfo, v4 - v7, 0LL);
  this = (SummonConfirmDlgComponent_o *)v2->fields.extraTitleLabel;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
        (this = (SummonConfirmDlgComponent_o *)v2->fields.extraMsgInfo) == 0LL) )
  {
LABEL_27:
    sub_1B86614(this, method);
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

  if ( (byte_4A4AA62 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1B863B8(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1B863B8(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1B863B8(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__, v13);
    sub_1B863B8(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1B863B8(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo, v15);
    sub_1B863B8(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_4A4AA62 = 1;
  }
  v17 = sub_1B86604(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
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
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1B86614(baseWindowSprite, v19);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GiftMaster___);
  v25 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v26 = *v25;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v25 )
    {
      v26 = (System_Func_object__bool__o *)sub_1B86604(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v26;
      sub_1B8635C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)v26, v28, v29);
    }
    v30 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
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
      _9__75_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__75_1,
        v34,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__75_1, (int32_t)_9__75_1, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v32,
                                                                 (System_Func_TSource__TResult__o *)_9__75_1,
                                                                 (const MethodInfo_2FA0998 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v39 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v38,
                                                (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4A4AA52 & 1) == 0 )
  {
    sub_1B863B8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A4AA52 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4AA53 & 1) == 0 )
  {
    sub_1B863B8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A4AA53 = 1;
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
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4AA61 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_12194/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4A4AA61 = 1;
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
        sub_1B86614(closeBtnObject, method);
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
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12194/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1B86614(0LL, isTutorial);
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
    sub_1B86614(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_33775528(this, 0LL, v11);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CEA94;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEA4C;
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
  if ( (byte_4A4AA6B & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    byte_4A4AA6B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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

  if ( (byte_4A4AA6C & 1) == 0 )
  {
    sub_1B863B8(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_4A4AA6C = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}