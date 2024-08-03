void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_49F8C89 & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_49F8C89 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_QWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 0x30C00000019LL;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BA2C60;
  *(_QWORD *)&static_fields->BONUS_INFO_NOT_GET_POS_X = 0xC3230000C2F00000LL;
  *(_QWORD *)&static_fields->ADD_MSG_INFO_POS_Y_DEF = 0x2C2AC0000LL;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49F8C88 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F8C88 = 1;
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
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v19; // x4
  int32_t v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  v21 = haveFreeStoneNum;
  if ( (byte_49F8C76 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_3033/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v11);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_49F8C76 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3033/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v20 = haveChargeStoneNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v16 = (Il2CppObject *)System_Int32__ToString_62180668((int32_t)&v21, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
  v17 = System_String__Format_61389768(v14, v15, v16, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v17, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1B64324(v17);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v17, 0LL);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v19);
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
  Il2CppObject *v28; // x27
  Il2CppObject *v29; // x26
  Il2CppObject *v30; // x0
  System_String_o *baseWindow; // x0
  System_String_o *v32; // x25
  UIWidget_o *baseWindowSprite; // x26
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  const MethodInfo *v36; // x6
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v43; // x0
  const MethodInfo *v44; // [xsp+8h] [xbp-78h]
  int32_t v45; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v46; // [xsp+18h] [xbp-68h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49F8C77 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_12222/*"STONE_PURCHASE"*/, v22);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1B640C8(&StringLiteral_3037/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1B640C8(&StringLiteral_3038/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_49F8C77 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3038/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3037/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v47 = haveStoneNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v46 = haveChargeStoneNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v45 = haveFreeStoneNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  baseWindow = System_String__Format_61389836(v27, v28, v29, v30, 0LL);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v32 = baseWindow;
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__49003980(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v40,
            v41);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1B64324(baseWindow);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v26,
    v32,
    tryGetBonusSelectData,
    assetManager,
    v36);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v43, callback, 14.0, 0LL, 0, 0, 1, v44);
}


void __fastcall SummonConfirmDlgComponent__Callback(
        SummonConfirmDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_32804452(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_32804452(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49F8C84 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SummonConfirmDlgComponent_EndClose__, v6);
    byte_49F8C84 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_49F8C85 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8C85 = 1;
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
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, v5);
      goto LABEL_9;
    }
LABEL_12:
    sub_1B64324(gameObject);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
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
  __int64 v9; // x1
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
  int32_t v23; // w3
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v30; // x1
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_49F8C73 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F8C73 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmTitleLabel = this->fields.extraTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  extraMessageLabels = this->fields.extraMessageLabels;
  if ( !extraMessageLabels )
    goto LABEL_63;
  max_length = extraMessageLabels->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v12];
      if ( !confirmTitleLabel )
        goto LABEL_63;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_16;
    }
LABEL_64:
    sub_1B6432C(confirmTitleLabel, v9);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_63;
  v14 = extraItemIconComponents->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v14 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v15];
      if ( !confirmTitleLabel )
        goto LABEL_63;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v14 = extraItemIconComponents->max_length;
      if ( (int)++v15 >= v14 )
        goto LABEL_22;
    }
    goto LABEL_64;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_63;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_63;
  UILabel__set_text(cancelBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.confirmBtnObject;
  this->fields.isGetBonus = 0;
  if ( !confirmTitleLabel )
    goto LABEL_63;
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
    goto LABEL_63;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v21, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, 0, v22, v23);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v24,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v25,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = this->fields.infoMsgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UILabel__set_fontSize(
    confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UIWidget__set_width(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UIWidget__set_height(
    (UIWidget_o *)confirmTitleLabel,
    SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_HEIGHT,
    0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.defMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.singleMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.settingBtnObject;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.campaignLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !confirmTitleLabel )
      goto LABEL_63;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, v27);
  }
  confirmTitleLabel = (UILabel_o *)this->fields.bonusItemIconComponent;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.titleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = this->fields.messageLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)confirmTitleLabel,
                                     0LL);
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  bonusMsgInfo = this->fields.bonusMsgInfo;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v28);
    byte_49F7111 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v30);
    byte_49F7111 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_63:
    sub_1B64324(confirmTitleLabel);
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
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  AutomaticSaleDlgComponent_CallbackFunc_o *v11; // x21

  if ( (byte_49F8C86 & 1) == 0 )
  {
    sub_1B640C8(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1B640C8(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_49F8C86 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v11 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                            AutomaticSaleDlgComponent_CallbackFunc_TypeInfo,
                                                            v9,
                                                            v10),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1B64324(gameObject);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v11, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_49F8C87 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4655/*"ConfirmWindow/CloseButton"*/, method);
    sub_1B640C8(&StringLiteral_4657/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1B640C8(&StringLiteral_4653/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_49F8C87 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_4657/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(v6, (System_String_o *)StringLiteral_4655/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(v7, (System_String_o *)StringLiteral_4653/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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
        const MethodInfo *method)
{
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v42; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v44; // x1
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v47; // x25
  int32_t v48; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v53; // w0
  float v54; // s8
  int32_t v55; // w24
  float v56; // s9
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v62; // x1
  __int64 v63; // x2
  GiftMaster_o *v64; // x22
  System_Func_object__bool__o **v65; // x24
  System_Func_object__bool__o *v66; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x25
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  SummonConfirmDlgComponent___c_c *v73; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x25
  System_Func_object__int__o *_9__72_1; // x26
  Il2CppObject *v76; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_ICollection_o *v81; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v83; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v85; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v87; // w8
  bool v88; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v93; // s0
  float v94; // s1
  float v95; // s8
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  bool v98; // w1
  const MethodInfo *v99; // x1
  __int64 v100; // x1
  __int64 v101; // x2
  System_Action_o *v102; // x20

  if ( (byte_49F8C7D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, title);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v20);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v21);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v22);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v23);
    sub_1B640C8(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v24);
    sub_1B640C8(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v25);
    sub_1B640C8(&LocalizationManager_TypeInfo, v26);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B640C8(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v30);
    sub_1B640C8(&Method_SummonConfirmDlgComponent___c__Open_b__72_1__, v31);
    sub_1B640C8(&Method_SummonConfirmDlgComponent___c__DisplayClass72_0__Open_b__0__, v32);
    sub_1B640C8(&SummonConfirmDlgComponent___c__DisplayClass72_0_TypeInfo, v33);
    sub_1B640C8(&SummonConfirmDlgComponent___c_TypeInfo, v34);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v35);
    sub_1B640C8(&StringLiteral_1/*""*/, v36);
    byte_49F8C7D = 1;
  }
  v37 = sub_1B64314(SummonConfirmDlgComponent___c__DisplayClass72_0_TypeInfo, title, msg);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_120;
  *(_DWORD *)(v37 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v39, v40);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    if ( title )
      v42 = title;
    else
      v42 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v42, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v44 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v44, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v45, msgOffY, 0LL);
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v47 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v47 )
      goto LABEL_120;
    UILabel__set_text(v47, decideTxt, 0LL);
  }
  v48 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v48 <= 2 )
    {
      v50 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v50 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v50->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v51, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v53 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v53 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v48 <= 2 )
      v54 = 54.0;
    else
      v54 = 43.0;
    if ( v48 <= 2 )
      v55 = 20;
    else
      v55 = 18;
    if ( !gameObject )
      goto LABEL_120;
    v56 = v48 <= 2 ? 188.0 : 178.0;
    v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v57, v56, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v58, v54, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)gameObject, v55, 0LL);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_120;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0LL);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_109;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( *(_QWORD *)&extraGiftEntList->max_length )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_120;
      UIWidget__set_width((UIWidget_o *)gameObject, 852, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
      if ( !gameObject )
        goto LABEL_120;
      UIWidget__set_height((UIWidget_o *)gameObject, 524, 0LL);
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_120;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v37 + 20) = 1;
      v64 = (GiftMaster_o *)MasterData_object;
      v65 = (System_Func_object__bool__o **)(v37 + 24);
      while ( 1 )
      {
        v66 = *v65;
        v67 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v65 )
        {
          v66 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GachaExtraGiftEntity__bool__TypeInfo, v62, v63);
          System_Func_object__bool____ctor(
            v66,
            (Il2CppObject *)v37,
            Method_SummonConfirmDlgComponent___c__DisplayClass72_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v37 + 24) = v66;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)v66, v68, v69);
        }
        v70 = System_Linq_Enumerable__Where_object_(
                v67,
                (System_Func_TSource__bool__o *)v66,
                (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v73 = SummonConfirmDlgComponent___c_TypeInfo;
        v74 = v70;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v73 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__72_1 = (System_Func_object__int__o *)v73->static_fields->__9__72_1;
        if ( !_9__72_1 )
        {
          if ( !v73->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v73);
            v73 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v76 = (Il2CppObject *)v73->static_fields->__9;
          _9__72_1 = (System_Func_object__int__o *)sub_1B64314(
                                                     System_Func_GachaExtraGiftEntity__int__TypeInfo,
                                                     v71,
                                                     v72);
          System_Func_object__int____ctor(_9__72_1, v76, Method_SummonConfirmDlgComponent___c__Open_b__72_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__72_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__72_1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v78, v79);
        }
        v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v74,
                                                                     (System_Func_TSource__TResult__o *)_9__72_1,
                                                                     (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v81 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v80,
                                                    (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v81, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v64 )
            goto LABEL_120;
          GiftListByIds = GiftMaster__GetGiftListByIds(v64, (System_Collections_Generic_IEnumerable_int__o *)v81, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v37 + 20), v83);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v37 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v85);
            goto LABEL_89;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v37 + 20) == 2 )
            break;
        }
        v87 = *(_DWORD *)(v37 + 20) + 1;
        v88 = *(_DWORD *)(v37 + 20) - 2 < 0;
        *(_DWORD *)(v37 + 20) = v87;
        if ( v88 == __OFSUB__(v87, 3) )
          goto LABEL_89;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v62);
LABEL_89:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        if ( !baseWindowSprite )
          goto LABEL_120;
        UIWidget__set_width(
          baseWindowSprite,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
          0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
        if ( !gameObject )
          goto LABEL_120;
        UIWidget__set_height((UIWidget_o *)gameObject, 580, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
        gameObject = this->fields.bonusMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v90 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v90,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v91 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v93 = -42.0;
        if ( v48 > 2 )
          v93 = -44.0;
        v94 = -34.0;
        if ( v48 <= 2 )
          v94 = -30.0;
        if ( isAppendSummon )
          v95 = v94;
        else
          v95 = v93;
        if ( !gameObject )
          goto LABEL_120;
        v96 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v96, v95, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v97 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v97, v95, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_120;
        v91 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v91, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_109:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_120;
    v98 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_120;
    v98 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v98, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_120:
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v99);
  v102 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v100, v101);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_49F8C7F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_49F8C7F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
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
  BalanceConfig_c *v15; // x0
  System_String_o *v16; // x0
  SummonConfirmDlgComponent_c *v17; // x8
  Il2CppObject *v18; // x22
  SummonControl_c *v19; // x0
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  int32_t FRIEND_POINT_SUMMON_ID; // w23
  bool v22; // w23
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v26; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v28; // x24
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  SummonConfirmDlgComponent_c *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // [xsp+8h] [xbp-78h]
  int32_t v36; // [xsp+10h] [xbp-70h] BYREF
  int32_t v37; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v38; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+28h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_49F8C7C & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, callback);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v9);
    sub_1B640C8(&SummonControl_TypeInfo, v10);
    sub_1B640C8(&UserGachaMaster_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_3794/*"CONFIRM_FREESUMMON_MSG"*/, v12);
    sub_1B640C8(&StringLiteral_3793/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v13);
    sub_1B640C8(&StringLiteral_6495/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v14);
    byte_49F8C7C = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v15->static_fields->DailyFreeGachaResetTime;
  v16 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
  v17 = SummonConfirmDlgComponent_TypeInfo;
  v18 = (Il2CppObject *)v16;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v17 = SummonConfirmDlgComponent_TypeInfo;
  }
  v19 = SummonControl_TypeInfo;
  CONFIRM_DETAIL_LABEL_POS_Y = v17->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v19 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v19->static_fields->FRIEND_POINT_SUMMON_ID;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  v22 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v22 )
      goto LABEL_13;
LABEL_20:
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v26 = System_String__Format(v34, v18, 0LL);
    goto LABEL_21;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v22 )
    goto LABEL_20;
LABEL_13:
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v38 = maxNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61389768(v23, v18, v24, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_22;
  v26 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_6495/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v37 = remainNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v36 = maxNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61389768(v28, v29, v30, 0LL);
  if ( !campaignLabel )
LABEL_22:
    sub_1B64324(gameObject);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v33 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v33 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v33->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_21:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v31,
    v32);
  SummonConfirmDlgComponent__Open(this, 0LL, v26, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v35);
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
  __int64 v35; // x0
  __int64 v36; // x0
  void *MasterData_object; // x0
  GachaEntity_array *GachaDataInGroup; // x27
  int32_t v39; // w2
  int32_t v40; // w3
  void *v41; // x28
  __int64 v42; // x8
  int v43; // w24
  int max_length; // w21
  GachaEntity_o *v45; // x8
  GachaEntity_o *v46; // x9
  Il2CppObject *name; // x21
  Il2CppObject *v48; // x20
  UILabel_o *infoMsgLabel; // x27
  int32_t v50; // w25
  System_String_o *v51; // x28
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_Object_array *v55; // x29
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x20
  System_Int32_c *v61; // x0
  int32_t *v62; // x1
  Il2CppObject *v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  Il2CppObject *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x20
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *v74; // x20
  UILabel_o *msgLabel; // x26
  System_String_o *v76; // x27
  System_Object_array *v77; // x28
  int32_t v78; // w2
  int32_t v79; // w3
  Il2CppObject *v80; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  Il2CppObject *v86; // x20
  int32_t v87; // w2
  int32_t v88; // w3
  Il2CppObject *v89; // x20
  int32_t v90; // w2
  int32_t v91; // w3
  Il2CppObject *v92; // x20
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v97; // x2
  const MethodInfo *v98; // x1
  __int64 v99; // x1
  __int64 v100; // x2
  System_Action_o *v101; // x20
  __int64 v102; // x0
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+0h] [xbp-90h]
  int32_t v104; // [xsp+Ch] [xbp-84h]
  int32_t v105; // [xsp+10h] [xbp-80h]
  int32_t v106; // [xsp+14h] [xbp-7Ch]
  int32_t v107; // [xsp+18h] [xbp-78h] BYREF
  int32_t v108; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v109; // [xsp+20h] [xbp-70h] BYREF
  int32_t v110; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v111; // [xsp+28h] [xbp-68h] BYREF
  int v112; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_49F8C7E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1B640C8(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1B640C8(&int_TypeInfo, v24);
    sub_1B640C8(&LocalizationManager_TypeInfo, v25);
    sub_1B640C8(&object___TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B640C8(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_1B640C8(&StringLiteral_3798/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_1B640C8(&StringLiteral_3796/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_1B640C8(&StringLiteral_1/*""*/, v33);
    sub_1B640C8(&StringLiteral_3797/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_49F8C7E = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, price, haveStoneNum);
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1BB5FA4(v35);
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1BB5FA4(v36);
  MasterData_object = **(void ***)(v36 + 184);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_84;
  v105 = haveFreeStoneNum;
  v106 = haveStoneNum;
  v104 = afterStoneNum;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        groupId,
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v41 = MasterData_object;
  if ( !MasterData_object )
    goto LABEL_15;
  v42 = *((_QWORD *)MasterData_object + 4);
  if ( !v42 )
    goto LABEL_84;
  if ( *(_QWORD *)(v42 + 24) )
    v43 = *((_DWORD *)MasterData_object + 5);
  else
LABEL_15:
    v43 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v39, v40);
  if ( !GachaDataInGroup )
    goto LABEL_84;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v45 = GachaDataInGroup->m_Items[0];
    if ( !v45 )
      goto LABEL_84;
    v46 = GachaDataInGroup->m_Items[1];
    if ( !v46 )
      goto LABEL_84;
    name = (Il2CppObject *)v45->fields.name;
    v48 = (Il2CppObject *)v46->fields.name;
    infoMsgLabel = this->fields.infoMsgLabel;
    v50 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
    MasterData_object = (void *)sub_1B64170(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v55 = (System_Object_array *)MasterData_object;
    if ( name )
    {
      MasterData_object = (void *)sub_1B64204(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v55->max_length )
      goto LABEL_85;
    v55->m_Items[0] = name;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)name, v53, v54);
    if ( v48 )
    {
      MasterData_object = (void *)sub_1B64204(v48, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 1 )
      goto LABEL_85;
    v55->m_Items[1] = v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v48, v56, v57);
    v112 = v43;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
    v60 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B64204(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 2 )
      goto LABEL_85;
    v55->m_Items[2] = v60;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v60, v58, v59);
    v61 = int_TypeInfo;
    v62 = &v111;
    v111 = price;
  }
  else
  {
    if ( !v41 )
      goto LABEL_84;
    v63 = (Il2CppObject *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)v41 + 3), 0LL) )
      v63 = (Il2CppObject *)*((_QWORD *)v41 + 3);
    infoMsgLabel = this->fields.infoMsgLabel;
    v50 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3797/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
    MasterData_object = (void *)sub_1B64170(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v55 = (System_Object_array *)MasterData_object;
    if ( v63 )
    {
      MasterData_object = (void *)sub_1B64204(v63, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v55->max_length )
      goto LABEL_85;
    v55->m_Items[0] = v63;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)v63, v64, v65);
    v112 = max_length;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
    v68 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B64204(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 1 )
      goto LABEL_85;
    v55->m_Items[1] = v68;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v68, v66, v67);
    v111 = v43;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
    v71 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B64204(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 2 )
      goto LABEL_85;
    v55->m_Items[2] = v71;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v71, v69, v70);
    v61 = int_TypeInfo;
    v110 = price;
    v62 = &v110;
  }
  MasterData_object = (void *)j_il2cpp_value_box_0(v61, v62);
  v74 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v55->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_85;
  v55->m_Items[3] = v74;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v55->m_Items[3], (int32_t)v74, v72, v73);
  MasterData_object = System_String__Format_61389904(v51, v55, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_84;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v77 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  v112 = v106;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
  if ( !v77 )
LABEL_84:
    sub_1B64324(MasterData_object);
  v80 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v77->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( !v77->max_length )
    goto LABEL_85;
  v77->m_Items[0] = v80;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v77->m_Items, (int32_t)v80, v78, v79);
  v111 = v50;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
  v83 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v77->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v77->max_length <= 1 )
    goto LABEL_85;
  v77->m_Items[1] = v83;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v77->m_Items[1], (int32_t)v83, v81, v82);
  v110 = v105;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
  v86 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v77->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v77->max_length <= 2 )
    goto LABEL_85;
  v77->m_Items[2] = v86;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v77->m_Items[2], (int32_t)v86, v84, v85);
  v109 = v104;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v89 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v77->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v77->max_length <= 3 )
    goto LABEL_85;
  v77->m_Items[3] = v89;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v77->m_Items[3], (int32_t)v89, v87, v88);
  v108 = afterChargeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
  v92 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v77->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v77->max_length <= 4 )
    goto LABEL_85;
  v77->m_Items[4] = v92;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v77->m_Items[4], (int32_t)v92, v90, v91);
  v107 = afterFreeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
  v95 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B64204(MasterData_object, v77->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_86:
      v102 = sub_1B64348();
      sub_1B641F0(v102, 0LL);
    }
  }
  if ( v77->max_length <= 5 )
LABEL_85:
    sub_1B6432C(MasterData_object, v52);
  v77->m_Items[5] = v95;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v77->m_Items[5], (int32_t)v95, v93, v94);
  MasterData_object = System_String__Format_61389904(v76, v77, 0LL);
  if ( !msgLabel )
    goto LABEL_84;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_84;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0LL);
  MasterData_object = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0LL);
  MasterData_object = this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  if ( *p_extraGiftEntList && *(_QWORD *)&(*p_extraGiftEntList)->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v97);
  MasterData_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v98);
  v101 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v99, v100);
  System_Action___ctor(v101, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v101, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePointNum,
        int32_t needPointNum,
        int32_t afterPointNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x25
  Il2CppObject *v17; // x24
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  SummonConfirmDlgComponent_c *v23; // x0
  const MethodInfo *v24; // [xsp+8h] [xbp-68h]
  int32_t v25; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v26; // [xsp+18h] [xbp-58h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49F8C7B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_3801/*"CONFIRM_POINTSUMMON_MSG"*/, v15);
    byte_49F8C7B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v27 = needPointNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v26 = havePointNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v25 = afterPointNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v20 = System_String__Format_61389836(v16, v17, v18, v19, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v21,
    v22);
  v23 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v23 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v20,
    0LL,
    callback,
    v23->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v24);
}


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
        const MethodInfo *method)
{
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  System_String_o **v45; // x8
  System_String_o *v46; // x25
  System_Object_array *v47; // x26
  __int64 addMsgBgSprite; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x27
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x27
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x27
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x27
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x27
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x27
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x27
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x27
  System_String_o *v74; // x29
  System_String_o *v75; // x27
  System_String_o *v76; // x26
  Il2CppObject *DateTime; // x0
  System_String_o *v78; // x0
  int32_t v79; // w1
  int32_t v80; // w1
  Il2CppObject *v81; // x0
  System_String_o *v82; // x27
  Il2CppObject *v83; // x0
  System_String_o *v84; // x27
  System_String_o *v85; // x0
  System_String_o *v86; // x27
  Il2CppObject *v87; // x24
  Il2CppObject *v88; // x0
  System_String_o *v89; // x27
  System_String_o *v90; // x24
  System_Object_array *v91; // x29
  int32_t v92; // w2
  int32_t v93; // w3
  Il2CppObject *v94; // x22
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  Il2CppObject *v100; // x20
  int32_t v101; // w2
  int32_t v102; // w3
  Il2CppObject *v103; // x20
  int32_t v104; // w2
  int32_t v105; // w3
  Il2CppObject *v106; // x20
  int32_t v107; // w2
  int32_t v108; // w3
  Il2CppObject *v109; // x20
  System_String_o *v110; // x20
  System_String_o *v111; // x0
  _QWORD *v112; // x21
  System_String_o *v113; // x22
  __int64 v114; // x8
  __int64 v115; // x0
  __int64 v116; // x0
  System_String_o *v117; // x25
  System_String_o *v118; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v120; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v128; // x0
  __int64 v129; // x0
  const MethodInfo *isBonusSelect; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v131; // [xsp+8h] [xbp-B8h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v136; // [xsp+40h] [xbp-80h] BYREF
  int32_t v137; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v138; // [xsp+48h] [xbp-78h] BYREF
  int32_t v139; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v140; // [xsp+50h] [xbp-70h] BYREF
  int32_t v141; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v142; // [xsp+58h] [xbp-68h] BYREF
  int32_t v143; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_49F8C79 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_object___, title);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v27);
    sub_1B640C8(&int_TypeInfo, v28);
    sub_1B640C8(&LocalizationManager_TypeInfo, v29);
    sub_1B640C8(&object___TypeInfo, v30);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v31);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v32);
    sub_1B640C8(&StringLiteral_3780/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v33);
    sub_1B640C8(&StringLiteral_3786/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v34);
    sub_1B640C8(&StringLiteral_3781/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v35);
    sub_1B640C8(&StringLiteral_3784/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v36);
    sub_1B640C8(&StringLiteral_3800/*"CONFIRM_PAYSUMMON_MSG"*/, v37);
    sub_1B640C8(&StringLiteral_3782/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v38);
    sub_1B640C8(&StringLiteral_3783/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v39);
    sub_1B640C8(&StringLiteral_12319/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_1B640C8(&StringLiteral_12306/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_1B640C8(&StringLiteral_12271/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_1B640C8(&StringLiteral_3785/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_49F8C79 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, type, price);
  titlea = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3786/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3800/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v45 = (System_String_o **)&StringLiteral_3785/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get(*v45, 0LL);
  v47 = (System_Object_array *)sub_1B64170(object___TypeInfo, 8LL);
  v143 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v143);
  if ( !v47 )
    goto LABEL_107;
  v52 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v47->max_length )
    goto LABEL_105;
  v47->m_Items[0] = v52;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v52, v50, v51);
  v142 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v142);
  v55 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_105;
  v47->m_Items[1] = v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[1], (int32_t)v55, v53, v54);
  v141 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v141);
  v58 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_105;
  v47->m_Items[2] = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[2], (int32_t)v58, v56, v57);
  v140 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v140);
  v61 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_105;
  v47->m_Items[3] = v61;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[3], (int32_t)v61, v59, v60);
  v139 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v139);
  v64 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_105;
  v47->m_Items[4] = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[4], (int32_t)v64, v62, v63);
  v138 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v138);
  v67 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_105;
  v47->m_Items[5] = v67;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[5], (int32_t)v67, v65, v66);
  v137 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v137);
  v70 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_105;
  v47->m_Items[6] = v70;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[6], (int32_t)v70, v68, v69);
  v136 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v136);
  v73 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_105;
  v47->m_Items[7] = v73;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->m_Items[7], (int32_t)v73, v71, v72);
  v74 = System_String__Format_61389904(v46, v47, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12306/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v78 = System_String__Format(v76, DateTime, 0LL);
    v75 = System_String__Concat_61375396(v75, v78, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  v79 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v79, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  if ( isPickup )
    v80 = 76;
  else
    v80 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v80, 0LL);
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(this, titlea, v74, 0LL, callback, 14.0, v75, shopIdIdx, isAppendSummon, 0, v131);
    return;
  }
  v143 = gachaId;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143);
  v82 = System_String__Format((System_String_o *)StringLiteral_3784/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v81, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v82, 0LL) )
  {
    v143 = gachaId;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143);
    v84 = System_String__Format((System_String_o *)StringLiteral_3784/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v83, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = v84;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v85 = (System_String_o *)StringLiteral_3783/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v85, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_3781/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v143 = price;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143);
  v142 = num;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
  v89 = System_String__Format_61389768(v86, v87, v88, 0LL);
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3782/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v91 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
  v141 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v141);
  if ( !v91 )
    goto LABEL_107;
  v94 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v91->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v91->max_length )
    goto LABEL_105;
  v91->m_Items[0] = v94;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v91->m_Items, (int32_t)v94, v92, v93);
  v140 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v140);
  v97 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v91->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v91->max_length <= 1 )
    goto LABEL_105;
  v91->m_Items[1] = v97;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v91->m_Items[1], (int32_t)v97, v95, v96);
  v139 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v139);
  v100 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v91->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v91->max_length <= 2 )
    goto LABEL_105;
  v91->m_Items[2] = v100;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v91->m_Items[2], (int32_t)v100, v98, v99);
  v138 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v138);
  v103 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v91->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v91->max_length <= 3 )
    goto LABEL_105;
  v91->m_Items[3] = v103;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v91->m_Items[3], (int32_t)v103, v101, v102);
  v137 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v137);
  v106 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v91->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v91->max_length <= 4 )
    goto LABEL_105;
  v91->m_Items[4] = v106;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v91->m_Items[4], (int32_t)v106, v104, v105);
  v136 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v136);
  v109 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B64204(addMsgBgSprite, v91->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v129 = sub_1B64348();
      sub_1B641F0(v129, 0LL);
    }
  }
  if ( v91->max_length <= 5 )
LABEL_105:
    sub_1B6432C(addMsgBgSprite, v49);
  v91->m_Items[5] = v109;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v91->m_Items[5], (int32_t)v109, v107, v108);
  v110 = System_String__Format_61389904(v90, v91, 0LL);
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_3780/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v112 = Method_System_Array_Empty_object___;
  v113 = v111;
  v114 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v114 )
  {
    sub_1BB6000(Method_System_Array_Empty_object___);
    v114 = v112[7];
  }
  v115 = *(_QWORD *)(v114 + 16);
  if ( (*(_BYTE *)(v115 + 309) & 1) == 0 )
    v115 = sub_1BB5FA4(v115);
  if ( !*(_DWORD *)(v115 + 224) )
    j_il2cpp_runtime_class_init_0(v115);
  v116 = *(_QWORD *)(v112[7] + 16LL);
  if ( (*(_BYTE *)(v116 + 309) & 1) == 0 )
    v116 = sub_1BB5FA4(v116);
  v117 = v89;
  v118 = System_String__Format_61389904(v113, **(System_Object_array ***)(v116 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v120 = v118;
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__49003980(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v125,
            v126);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1B64324(addMsgBgSprite);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v117,
    v110,
    v120,
    tryGetBonusSelectData,
    assetManager,
    isBonusSelect);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v128 = LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v128, callback, 14.0, 0LL, shopIdIdx, 0, 1, v131);
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
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x25
  Il2CppObject *v22; // x24
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // [xsp+8h] [xbp-68h]
  int32_t v26; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v27; // [xsp+28h] [xbp-48h] BYREF
  int32_t v28; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_49F8C7A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, title);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_3802/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1B640C8(&StringLiteral_3803/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49F8C7A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v28 = haveTicketNum;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = afterTicketNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v20 = System_String__Format_61389768(v17, v18, v19, 0LL);
  }
  else
  {
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v28 = num;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v27 = haveTicketNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = afterTicketNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v20 = System_String__Format_61389836(v21, v22, v23, v24, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v20, 0LL, callback, 14.0, 0LL, 0, 0, 0, v25);
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
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  const MethodInfo *v22; // [xsp+8h] [xbp-68h]
  int32_t v23; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v24; // [xsp+18h] [xbp-58h] BYREF
  int32_t v25; // [xsp+1Ch] [xbp-54h] BYREF

  v25 = haveFreeStoneNum;
  if ( (byte_49F8C75 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_12222/*"STONE_PURCHASE"*/, v11);
    sub_1B640C8(&StringLiteral_12051/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49F8C75 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12051/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v24 = price;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v19 = (Il2CppObject *)System_Int32__ToString_62180668((int32_t)&v25, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
  v20 = System_String__Format_61389836(v16, v17, v18, v19, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v20, v21, callback, 14.0, 0LL, 0, 0, 0, v22);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-48h]
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49F8C78 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_12052/*"SHORT_HAVE_POINT"*/, v8);
    sub_1B640C8(&StringLiteral_12050/*"SHORT_DLG_TITLE"*/, v9);
    byte_49F8C78 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12052/*"SHORT_HAVE_POINT"*/, 0LL);
  v15 = havePoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = System_String__Format(v11, v12, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v13, 0LL, callback, 14.0, 0LL, 0, 0, 0, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  const MethodInfo *v16; // [xsp+8h] [xbp-58h]
  int32_t v17; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49F8C74 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_12222/*"STONE_PURCHASE"*/, v8);
    sub_1B640C8(&StringLiteral_12053/*"SHORT_HAVE_STONE"*/, v9);
    sub_1B640C8(&StringLiteral_12050/*"SHORT_DLG_TITLE"*/, v10);
    byte_49F8C74 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12053/*"SHORT_HAVE_STONE"*/, 0LL);
  v17 = haveNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format(v12, v13, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v11, v14, v15, callback, 14.0, 0LL, 0, 0, 0, v16);
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
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t m_CachedPtr; // w21
  BalanceConfig_c *v28; // x8
  Il2CppObject *object; // x0
  UILabel_o *titleLabel; // x21
  int32_t *v31; // x20
  System_String_o **v32; // x9
  System_String_o *v33; // x22
  UILabel_o *messageLabel; // x21
  System_String_o **v35; // x8
  System_String_o *v36; // x22
  System_String_o *v37; // x22
  Il2CppObject *v38; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v40; // x0
  System_Action_object__o *_9__77_0; // x22
  Il2CppObject *v42; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int i; // w24
  int32_t v47; // w21
  __int64 v48; // x1
  struct ItemIconComponent_array *v49; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v51; // x23
  UILabel_o *v52; // x21
  int32_t *v53; // x22
  SummonConfirmDlgComponent_c *v54; // x0
  System_String_o *v55; // x0
  int32_t v56; // w8
  System_String_o *v57; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v59; // x0
  int32_t v60; // w8
  System_String_o *v61; // x22
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v65; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F8C82 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1B640C8(&BalanceConfig_TypeInfo, v7);
    sub_1B640C8(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1B640C8(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__77_0__, v15);
    sub_1B640C8(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_117/*" "*/, v17);
    sub_1B640C8(&StringLiteral_12281/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1B640C8(&StringLiteral_12283/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1B640C8(&StringLiteral_12284/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1B640C8(&StringLiteral_12286/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1B640C8(&StringLiteral_12285/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1B640C8(&StringLiteral_12282/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_49F8C82 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v40 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v40 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__77_0 = (System_Action_object__o *)v40->static_fields->__9__77_0;
    if ( !_9__77_0 )
    {
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v40->static_fields->__9;
      _9__77_0 = (System_Action_object__o *)sub_1B64314(System_Action_ItemIconComponent__TypeInfo, v25, v26);
      System_Action_object____ctor(_9__77_0, v42, Method_SummonConfirmDlgComponent___c__SetBonusText_b__77_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__77_0 = (struct System_Action_ItemIconComponent__o *)_9__77_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v44, v45);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__77_0,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v47 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v47 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 52LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v47 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v47,
                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v49 = this->fields.extraItemIconComponents;
      if ( !v49 )
        goto LABEL_59;
      if ( v47 >= v49->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v47 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1B6432C(SelfUserGame, v48);
      v51 = (UnityEngine_Component_o *)v49->m_Items[v47];
      if ( !v51 )
        goto LABEL_59;
      v52 = extraMessageLabels->m_Items[v47];
      v53 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v53 )
        goto LABEL_59;
      ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)v51, v53[5], v53[6], v53[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v54 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v54 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v54->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12281/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v56 = v53[7];
        v57 = v55;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v56, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v57, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12282/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v60 = v53[7];
        v61 = v59;
        v62 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v60, 0LL);
        v63 = System_String__Format(v61, v62, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                                     v63,
                                                     (System_String_o *)StringLiteral_117/*" "*/,
                                                     0LL);
      }
      if ( !v52 )
        goto LABEL_59;
      UILabel__set_text(v52, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12284/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
  v28 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = m_CachedPtr < v28->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v31 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v32 = (System_String_o **)&StringLiteral_12283/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v32 = (System_String_o **)&StringLiteral_12286/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v33 = *v32;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v33, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v35 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12281/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12285/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v36 = *v35;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v36, 0LL);
  if ( !v31
    || (v37 = (System_String_o *)SelfUserGame,
        v65 = v31[7],
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v37, v38, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1B64324(SelfUserGame);
  }
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)SelfUserGame, v31[5], v31[6], v31[7], 0, 0LL);
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
  int closeBtnObject; // w24
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
  closeBtnObject = (int)this->fields.closeBtnObject;
  v10 = v6 >> 1;
  v11 = closeBtnObject >= 0 ? LODWORD(this->fields.closeBtnObject) : closeBtnObject + 1;
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
  v16 = v7 + mWidth + closeBtnObject;
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
    sub_1B64324(this);
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
  if ( (byte_49F8C83 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_49F8C83 = 1;
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
    if ( (signed int)v5 >= SHIDWORD(this->fields.closeBtnLb->fields.bottomAnchor) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *MasterData_object; // x21
  System_Func_object__bool__o **v26; // x22
  System_Func_object__bool__o *v27; // x24
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x23
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  SummonConfirmDlgComponent___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x23
  System_Func_object__int__o *_9__76_1; // x24
  Il2CppObject *v37; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_ICollection_o *v42; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v44; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v46; // x23
  SummonConfirmDlgComponent_c *v47; // x0
  const MethodInfo *v48; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v50; // x23
  UnityEngine_Object_o *v51; // x24
  SummonConfirmDlgComponent_c *v52; // x0
  __int64 v53; // x8
  const MethodInfo *v54; // x1
  int v55; // w8
  bool v56; // nf

  if ( (byte_49F8C81 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1B640C8(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1B640C8(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1B640C8(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__76_1__, v13);
    sub_1B640C8(&Method_SummonConfirmDlgComponent___c__DisplayClass76_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1B640C8(&SummonConfirmDlgComponent___c__DisplayClass76_0_TypeInfo, v15);
    sub_1B640C8(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_49F8C81 = 1;
  }
  v17 = sub_1B64314(SummonConfirmDlgComponent___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&shopIdIdx, method);
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
    || (v21 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v21, 19.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0LL)
    || (v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v22, -29.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1B64324(baseWindowSprite);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  v26 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v27 = *v26;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v26 )
    {
      v27 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GachaExtraGiftEntity__bool__TypeInfo, v23, v24);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass76_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v27;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v27, v29, v30);
    }
    v31 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v27,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v34 = SummonConfirmDlgComponent___c_TypeInfo;
    v35 = v31;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v34 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_1 = (System_Func_object__int__o *)v34->static_fields->__9__76_1;
    if ( !_9__76_1 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v34->static_fields->__9;
      _9__76_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_GachaExtraGiftEntity__int__TypeInfo, v32, v33);
      System_Func_object__int____ctor(
        _9__76_1,
        v37,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__76_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__76_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__76_1, (int32_t)_9__76_1, v39, v40);
    }
    v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v35,
                                                                 (System_Func_TSource__TResult__o *)_9__76_1,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v42 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v41,
                                                (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v42, 0LL);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v42,
                        0LL);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v17 + 20), v44);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v17 + 20) == 1 )
      {
        v46 = this->fields.bonusMsgInfo;
        v47 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v47 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v46, v47->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v48);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v17 + 20) == 2 )
      {
        v50 = this->fields.extraMsgInfo;
        v51 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0LL) )
        {
          v52 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v52 = SummonConfirmDlgComponent_TypeInfo;
          }
          v53 = 28LL;
        }
        else
        {
LABEL_44:
          v52 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v52 = SummonConfirmDlgComponent_TypeInfo;
          }
          v53 = 24LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v50,
          *(float *)((char *)&v52->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v53),
          0LL);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v54);
      }
    }
    v55 = *(_DWORD *)(v17 + 20) + 1;
    v56 = *(_DWORD *)(v17 + 20) - 2 < 0;
    *(_DWORD *)(v17 + 20) = v55;
  }
  while ( v56 != __OFSUB__(v55, 3) );
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

  if ( (byte_49F8C71 & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_49F8C71 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F8C72 & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_49F8C72 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
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

  if ( (byte_49F8C80 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12264/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_49F8C80 = 1;
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
        sub_1B64324(closeBtnObject);
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
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))closeBtn->klass->vtable._5_set_isEnabled.method)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._6_OnInit.methodPtr);
}


void __fastcall SummonConfirmDlgComponent__settingResult(
        SummonConfirmDlgComponent_o *this,
        bool res,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v9; // w2
  int32_t v10; // w3
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
    sub_1B64324(autoSaleDlgInfo);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_32804452(this, 0LL, v11);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
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
  this->fields.m_target = (Il2CppObject *)sub_19A82B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8270;
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
  if ( (byte_49F8C8A & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49F8C8A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8C8B & 1) == 0 )
  {
    sub_1B640C8(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_49F8C8B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SummonConfirmDlgComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___Open_b__72_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c___SetBonusText_b__77_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__76_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass72_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass72_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass72_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass76_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass76_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass76_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}