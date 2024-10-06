void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4A6C652 & 1) == 0 )
  {
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4A6C652 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_QWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = 0x30C00000019LL;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BB72E0;
  *(_QWORD *)&static_fields->BONUS_INFO_NOT_GET_POS_X = 0xC3230000C2F00000LL;
  *(_QWORD *)&static_fields->ADD_MSG_INFO_POS_Y_DEF = 0x2C2AC0000LL;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A6C651 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A6C651 = 1;
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
  if ( (byte_4A6C63F & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B90010(&LocalizationManager_TypeInfo, v9);
    sub_1B90010(&StringLiteral_3054/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1B90010(&StringLiteral_429/*"#,0"*/, v11);
    sub_1B90010(&StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_4A6C63F = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3054/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v24 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  v19 = (Il2CppObject *)System_Int32__ToString_62592372((int32_t)&v25, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
  v20 = System_String__Format_61801464(v14, v18, v19, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v20, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1B9026C(v20, v21);
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
  const MethodInfo *v46; // x6
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v53; // x0
  const MethodInfo *v54; // [xsp+8h] [xbp-78h]
  int32_t v55; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v56; // [xsp+18h] [xbp-68h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A6C640 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1B90010(&int_TypeInfo, v17);
    sub_1B90010(&LocalizationManager_TypeInfo, v18);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject____76256160, v19);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v20);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1B90010(&StringLiteral_12302/*"STONE_PURCHASE"*/, v22);
    sub_1B90010(&StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1B90010(&StringLiteral_3058/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1B90010(&StringLiteral_3059/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_4A6C640 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3059/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3058/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v57 = haveStoneNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v28, v29, v30);
  v56 = haveChargeStoneNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v32, v33, v34);
  v55 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v36, v37, v38);
  baseWindow = System_String__Format_61801532(v27, v31, v35, v39, 0LL);
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__49357576(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2F12308 *)Method_UnityEngine_Object_Instantiate_GameObject____76256160);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B8FFB4(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v50,
            v51);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1B9026C(baseWindow, v41);
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
    v46);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v53, callback, 14.0, 0LL, 0, 0, 1, v54);
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
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_33116116(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_33116116(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A6C64D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_SummonConfirmDlgComponent_EndClose__, v6);
    byte_4A6C64D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4A6C64E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6C64E = 1;
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
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, v4);
      goto LABEL_9;
    }
LABEL_12:
    sub_1B9026C(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
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
  int32_t v22; // w3
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v26; // x1
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v28; // x1
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4A6C63C & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1B90010(&StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1B90010(&StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1B90010(&StringLiteral_1/*""*/, v7);
    byte_4A6C63C = 1;
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
    v11 = 0;
    while ( v11 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v11];
      if ( !confirmTitleLabel )
        goto LABEL_63;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
LABEL_64:
    sub_1B90274(confirmTitleLabel, method);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_63;
  v13 = extraItemIconComponents->max_length;
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( v14 < v13 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v14];
      if ( !confirmTitleLabel )
        goto LABEL_63;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v13 = extraItemIconComponents->max_length;
      if ( (int)++v14 >= v13 )
        goto LABEL_22;
    }
    goto LABEL_64;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_63;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
    goto LABEL_63;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, 0, v21, v22);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v23,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v24,
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
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, method);
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
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v26);
    byte_4A6A9C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v28);
    byte_4A6A9C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_63:
    sub_1B9026C(confirmTitleLabel, method);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A6C64F & 1) == 0 )
  {
    sub_1B90010(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1B90010(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4A6C64F = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B90028(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1B9025C(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          v11),
        !autoSaleDlgInfo) )
  {
    sub_1B9026C(gameObject, v8);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v10, v12);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Transform_o *v7; // x0

  if ( (byte_4A6C650 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_4679/*"ConfirmWindow/CloseButton"*/, method);
    sub_1B90010(&StringLiteral_4681/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1B90010(&StringLiteral_4677/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_4A6C650 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42000584(transform, (System_String_o *)StringLiteral_4681/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42000584(v6, (System_String_o *)StringLiteral_4679/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42000584(v7, (System_String_o *)StringLiteral_4677/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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
  const MethodInfo *v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_Object_o *confirmTitleLabel; // x26
  System_String_o *v43; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v45; // x1
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v48; // x25
  int32_t v49; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v54; // w0
  float v55; // s8
  int32_t v56; // w24
  float v57; // s9
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v63; // x22
  System_Func_object__bool__o **v64; // x24
  System_Func_object__bool__o *v65; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x25
  int32_t v67; // w2
  int32_t v68; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  SummonConfirmDlgComponent___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x25
  System_Func_object__int__o *_9__72_1; // x26
  Il2CppObject *v73; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_ICollection_o *v78; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v80; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v82; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v84; // w8
  bool v85; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v90; // s0
  float v91; // s1
  float v92; // s8
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  bool v95; // w1
  const MethodInfo *v96; // x1
  System_Action_o *v97; // x20

  if ( (byte_4A6C646 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, title);
    sub_1B90010(&Method_DataManager_GetMasterData_GiftMaster___, v20);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v21);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_int___, v22);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v23);
    sub_1B90010(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v24);
    sub_1B90010(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v25);
    sub_1B90010(&LocalizationManager_TypeInfo, v26);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v27);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B90010(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v30);
    sub_1B90010(&Method_SummonConfirmDlgComponent___c__Open_b__72_1__, v31);
    sub_1B90010(&Method_SummonConfirmDlgComponent___c__DisplayClass72_0__Open_b__0__, v32);
    sub_1B90010(&SummonConfirmDlgComponent___c__DisplayClass72_0_TypeInfo, v33);
    sub_1B90010(&SummonConfirmDlgComponent___c_TypeInfo, v34);
    sub_1B90010(&StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, v35);
    sub_1B90010(&StringLiteral_1/*""*/, v36);
    byte_4A6C646 = 1;
  }
  v37 = sub_1B9025C(SummonConfirmDlgComponent___c__DisplayClass72_0_TypeInfo);
  SummonConfirmDlgComponent___c__DisplayClass72_0___ctor((SummonConfirmDlgComponent___c__DisplayClass72_0_o *)v37, 0LL);
  if ( !v37 )
    goto LABEL_120;
  *(_DWORD *)(v37 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_120;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v40, v41);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    if ( title )
      v43 = title;
    else
      v43 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v43, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v45 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v45, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, msgOffY, 0LL);
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v48 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v48 )
      goto LABEL_120;
    UILabel__set_text(v48, decideTxt, 0LL);
  }
  v49 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v49 <= 2 )
    {
      v51 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v51 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v51->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v52, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v54 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v54 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v49 <= 2 )
      v55 = 54.0;
    else
      v55 = 43.0;
    if ( v49 <= 2 )
      v56 = 20;
    else
      v56 = 18;
    if ( !gameObject )
      goto LABEL_120;
    v57 = v49 <= 2 ? 188.0 : 178.0;
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v58, v57, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v59, v55, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_120;
    UILabel__set_fontSize((UILabel_o *)gameObject, v56, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_120;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v37 + 20) = 1;
      v63 = (GiftMaster_o *)MasterData_object;
      v64 = (System_Func_object__bool__o **)(v37 + 24);
      while ( 1 )
      {
        v65 = *v64;
        v66 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v64 )
        {
          v65 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v65,
            (Il2CppObject *)v37,
            Method_SummonConfirmDlgComponent___c__DisplayClass72_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v37 + 24) = v65;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v37 + 24), (int32_t)v65, v67, v68);
        }
        v69 = System_Linq_Enumerable__Where_object_(
                v66,
                (System_Func_TSource__bool__o *)v65,
                (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v70 = SummonConfirmDlgComponent___c_TypeInfo;
        v71 = v69;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v70 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__72_1 = (System_Func_object__int__o *)v70->static_fields->__9__72_1;
        if ( !_9__72_1 )
        {
          if ( !v70->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v70);
            v70 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v73 = (Il2CppObject *)v70->static_fields->__9;
          _9__72_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__72_1, v73, Method_SummonConfirmDlgComponent___c__Open_b__72_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__72_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__72_1;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_1, (int32_t)_9__72_1, v75, v76);
        }
        v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v71,
                                                                     (System_Func_TSource__TResult__o *)_9__72_1,
                                                                     (const MethodInfo_2EBE4B0 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v78 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v77,
                                                    (const MethodInfo_2ECA640 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v78, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v63 )
            goto LABEL_120;
          GiftListByIds = GiftMaster__GetGiftListByIds(v63, (System_Collections_Generic_IEnumerable_int__o *)v78, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v37 + 20), v80);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v37 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v82);
            goto LABEL_89;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v37 + 20) == 2 )
            break;
        }
        v84 = *(_DWORD *)(v37 + 20) + 1;
        v85 = *(_DWORD *)(v37 + 20) - 2 < 0;
        *(_DWORD *)(v37 + 20) = v84;
        if ( v85 == __OFSUB__(v84, 3) )
          goto LABEL_89;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v39);
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
        v87 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v87,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v88 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v90 = -42.0;
        if ( v49 > 2 )
          v90 = -44.0;
        v91 = -34.0;
        if ( v49 <= 2 )
          v91 = -30.0;
        if ( isAppendSummon )
          v92 = v91;
        else
          v92 = v90;
        if ( !gameObject )
          goto LABEL_120;
        v93 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v93, v92, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_120;
        v94 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v94, v92, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_120;
        v88 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v88, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_109:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_120;
    v95 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_120;
    v95 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v95, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_120:
    sub_1B9026C(gameObject, v39);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v96);
  v97 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v97, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v97, 0, 0LL);
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
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_4A6C648 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_4A6C648 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1B9026C(gameObject, v9);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
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
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v32; // x24
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x25
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  SummonConfirmDlgComponent_c *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // [xsp+8h] [xbp-78h]
  int32_t v46; // [xsp+10h] [xbp-70h] BYREF
  int32_t v47; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v48; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+28h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4A6C645 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, callback);
    sub_1B90010(&int_TypeInfo, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v9);
    sub_1B90010(&SummonControl_TypeInfo, v10);
    sub_1B90010(&UserGachaMaster_TypeInfo, v11);
    sub_1B90010(&StringLiteral_3818/*"CONFIRM_FREESUMMON_MSG"*/, v12);
    sub_1B90010(&StringLiteral_3817/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v13);
    sub_1B90010(&StringLiteral_6525/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v14);
    byte_4A6C645 = 1;
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
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3818/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v30 = System_String__Format(v44, v18, 0LL);
    goto LABEL_21;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v22 )
    goto LABEL_20;
LABEL_13:
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3817/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v48 = maxNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v24, v25, v26);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61801464(v23, v18, v27, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_22;
  v30 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_6525/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v47 = remainNum;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v33, v34, v35);
  v46 = maxNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v37, v38, v39);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_61801464(v32, v36, v40, 0LL);
  if ( !campaignLabel )
LABEL_22:
    sub_1B9026C(gameObject, v29);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v43 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v43 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v43->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_21:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v41,
    v42);
  SummonConfirmDlgComponent__Open(this, 0LL, v30, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, v45);
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
  __int64 v36; // x0
  __int64 v37; // x0
  void *MasterData_object; // x0
  GachaEntity_array *GachaDataInGroup; // x27
  int32_t v40; // w2
  int32_t v41; // w3
  void *v42; // x28
  __int64 v43; // x8
  int v44; // w24
  int max_length; // w21
  GachaEntity_o *v46; // x8
  GachaEntity_o *v47; // x9
  Il2CppObject *name; // x21
  Il2CppObject *v49; // x20
  UILabel_o *infoMsgLabel; // x27
  int32_t v51; // w25
  System_String_o *v52; // x28
  int32_t v53; // w2
  int32_t v54; // w3
  System_Object_array *v55; // x29
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x20
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Int32_c *v67; // x0
  int32_t *v68; // x1
  Il2CppObject *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x20
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  Il2CppObject *v86; // x20
  UILabel_o *msgLabel; // x26
  System_String_o *v88; // x27
  System_Object_array *v89; // x28
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int32_t v93; // w2
  int32_t v94; // w3
  Il2CppObject *v95; // x20
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  int32_t v99; // w2
  int32_t v100; // w3
  Il2CppObject *v101; // x20
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int32_t v105; // w2
  int32_t v106; // w3
  Il2CppObject *v107; // x20
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  int32_t v111; // w2
  int32_t v112; // w3
  Il2CppObject *v113; // x20
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  int32_t v117; // w2
  int32_t v118; // w3
  Il2CppObject *v119; // x20
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  int32_t v123; // w2
  int32_t v124; // w3
  Il2CppObject *v125; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x1
  System_Action_o *v129; // x20
  __int64 v130; // x0
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+0h] [xbp-90h]
  int32_t v132; // [xsp+Ch] [xbp-84h]
  int32_t v133; // [xsp+10h] [xbp-80h]
  int32_t v134; // [xsp+14h] [xbp-7Ch]
  int32_t v135; // [xsp+18h] [xbp-78h] BYREF
  int32_t v136; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v137; // [xsp+20h] [xbp-70h] BYREF
  int32_t v138; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v139; // [xsp+28h] [xbp-68h] BYREF
  int v140; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A6C647 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1B90010(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1B90010(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1B90010(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1B90010(&int_TypeInfo, v24);
    sub_1B90010(&LocalizationManager_TypeInfo, v25);
    sub_1B90010(&object___TypeInfo, v26);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1B90010(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_1B90010(&StringLiteral_3822/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_1B90010(&StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_1B90010(&StringLiteral_3820/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_1B90010(&StringLiteral_1/*""*/, v33);
    sub_1B90010(&StringLiteral_3821/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_4A6C647 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, price, haveStoneNum);
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1BE1EEC(v36);
  v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1BE1EEC(v37);
  MasterData_object = **(void ***)(v37 + 184);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_84;
  v133 = haveFreeStoneNum;
  v134 = haveStoneNum;
  v132 = afterStoneNum;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        groupId,
                        (const MethodInfo_312C5A8 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v42 = MasterData_object;
  if ( !MasterData_object )
    goto LABEL_15;
  v43 = *((_QWORD *)MasterData_object + 4);
  if ( !v43 )
    goto LABEL_84;
  if ( *(_QWORD *)(v43 + 24) )
    v44 = *((_DWORD *)MasterData_object + 5);
  else
LABEL_15:
    v44 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v40, v41);
  if ( !GachaDataInGroup )
    goto LABEL_84;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v46 = GachaDataInGroup->m_Items[0];
    if ( !v46 )
      goto LABEL_84;
    v47 = GachaDataInGroup->m_Items[1];
    if ( !v47 )
      goto LABEL_84;
    name = (Il2CppObject *)v46->fields.name;
    v49 = (Il2CppObject *)v47->fields.name;
    infoMsgLabel = this->fields.infoMsgLabel;
    v51 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3820/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
    MasterData_object = (void *)sub_1B900B8(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v55 = (System_Object_array *)MasterData_object;
    if ( name )
    {
      MasterData_object = (void *)sub_1B9014C(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v55->max_length )
      goto LABEL_85;
    v55->m_Items[0] = name;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)name, v53, v54);
    if ( v49 )
    {
      MasterData_object = (void *)sub_1B9014C(v49, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 1 )
      goto LABEL_85;
    v55->m_Items[1] = v49;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v49, v56, v57);
    v140 = v44;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v58, v59, v60);
    v63 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B9014C(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 2 )
      goto LABEL_85;
    v55->m_Items[2] = v63;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v63, v61, v62);
    v67 = int_TypeInfo;
    v68 = &v139;
    v139 = price;
  }
  else
  {
    if ( !v42 )
      goto LABEL_84;
    v69 = (Il2CppObject *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)v42 + 3), 0LL) )
      v69 = (Il2CppObject *)*((_QWORD *)v42 + 3);
    infoMsgLabel = this->fields.infoMsgLabel;
    v51 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3821/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
    MasterData_object = (void *)sub_1B900B8(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v55 = (System_Object_array *)MasterData_object;
    if ( v69 )
    {
      MasterData_object = (void *)sub_1B9014C(v69, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v55->max_length )
      goto LABEL_85;
    v55->m_Items[0] = v69;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v55->m_Items, (int32_t)v69, v70, v71);
    v140 = max_length;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v72, v73, v74);
    v77 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B9014C(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 1 )
      goto LABEL_85;
    v55->m_Items[1] = v77;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v55->m_Items[1], (int32_t)v77, v75, v76);
    v139 = v44;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v78, v79, v80);
    v83 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1B9014C(MasterData_object, v55->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v55->max_length <= 2 )
      goto LABEL_85;
    v55->m_Items[2] = v83;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v55->m_Items[2], (int32_t)v83, v81, v82);
    v67 = int_TypeInfo;
    v138 = price;
    v68 = &v138;
  }
  MasterData_object = (void *)j_il2cpp_value_box_0(v67, v68, v64, v65, v66);
  v86 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v55->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v55->max_length <= 3 )
    goto LABEL_85;
  v55->m_Items[3] = v86;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v55->m_Items[3], (int32_t)v86, v84, v85);
  MasterData_object = System_String__Format_61801600(v52, v55, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_84;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v89 = (System_Object_array *)sub_1B900B8(object___TypeInfo, 6LL);
  v140 = v134;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v90, v91, v92);
  if ( !v89 )
LABEL_84:
    sub_1B9026C(MasterData_object, v35);
  v95 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( !v89->max_length )
    goto LABEL_85;
  v89->m_Items[0] = v95;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v89->m_Items, (int32_t)v95, v93, v94);
  v139 = v51;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v96, v97, v98);
  v101 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v89->max_length <= 1 )
    goto LABEL_85;
  v89->m_Items[1] = v101;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v89->m_Items[1], (int32_t)v101, v99, v100);
  v138 = v133;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v102, v103, v104);
  v107 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v89->max_length <= 2 )
    goto LABEL_85;
  v89->m_Items[2] = v107;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v89->m_Items[2], (int32_t)v107, v105, v106);
  v137 = v132;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v108, v109, v110);
  v113 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v89->max_length <= 3 )
    goto LABEL_85;
  v89->m_Items[3] = v113;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v89->m_Items[3], (int32_t)v113, v111, v112);
  v136 = afterChargeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v114, v115, v116);
  v119 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v89->max_length <= 4 )
    goto LABEL_85;
  v89->m_Items[4] = v119;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v89->m_Items[4], (int32_t)v119, v117, v118);
  v135 = afterFreeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v135, v120, v121, v122);
  v125 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1B9014C(MasterData_object, v89->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_86:
      v130 = sub_1B90290();
      sub_1B90138(v130, 0LL);
    }
  }
  if ( v89->max_length <= 5 )
LABEL_85:
    sub_1B90274(MasterData_object, v35);
  v89->m_Items[5] = v125;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v89->m_Items[5], (int32_t)v125, v123, v124);
  MasterData_object = System_String__Format_61801600(v88, v89, 0LL);
  if ( !msgLabel )
    goto LABEL_84;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v127);
  MasterData_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v128);
  v129 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v129, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v129, 0, 0LL);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  System_String_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  SummonConfirmDlgComponent_c *v32; // x0
  const MethodInfo *v33; // [xsp+8h] [xbp-68h]
  int32_t v34; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v35; // [xsp+18h] [xbp-58h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A6C644 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1B90010(&LocalizationManager_TypeInfo, v13);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1B90010(&StringLiteral_3825/*"CONFIRM_POINTSUMMON_MSG"*/, v15);
    byte_4A6C644 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v36 = needPointNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v17, v18, v19);
  v35 = havePointNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v21, v22, v23);
  v34 = afterPointNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v25, v26, v27);
  v29 = System_String__Format_61801532(v16, v20, v24, v28, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v30,
    v31);
  v32 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v32 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v29,
    0LL,
    callback,
    v32->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    v33);
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
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 addMsgBgSprite; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x27
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x27
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x27
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x27
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  Il2CppObject *v79; // x27
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int32_t v83; // w2
  int32_t v84; // w3
  Il2CppObject *v85; // x27
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x27
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int32_t v95; // w2
  int32_t v96; // w3
  Il2CppObject *v97; // x27
  System_String_o *v98; // x29
  System_String_o *v99; // x27
  System_String_o *v100; // x26
  Il2CppObject *DateTime; // x0
  System_String_o *v102; // x0
  int32_t v103; // w1
  int32_t v104; // w1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  System_String_o *v109; // x27
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  Il2CppObject *v113; // x0
  System_String_o *v114; // x27
  System_String_o *v115; // x0
  System_String_o *v116; // x27
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x24
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  Il2CppObject *v124; // x0
  System_String_o *v125; // x27
  System_String_o *v126; // x24
  System_Object_array *v127; // x29
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  int32_t v131; // w2
  int32_t v132; // w3
  Il2CppObject *v133; // x22
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  int32_t v137; // w2
  int32_t v138; // w3
  Il2CppObject *v139; // x21
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // x20
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  int32_t v149; // w2
  int32_t v150; // w3
  Il2CppObject *v151; // x20
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  int32_t v155; // w2
  int32_t v156; // w3
  Il2CppObject *v157; // x20
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  int32_t v161; // w2
  int32_t v162; // w3
  Il2CppObject *v163; // x20
  System_String_o *v164; // x20
  System_String_o *v165; // x0
  _QWORD *v166; // x21
  System_String_o *v167; // x22
  __int64 v168; // x8
  __int64 v169; // x0
  __int64 v170; // x0
  System_String_o *v171; // x25
  System_String_o *v172; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v174; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v179; // w2
  int32_t v180; // w3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v182; // x0
  __int64 v183; // x0
  const MethodInfo *isBonusSelect; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v185; // [xsp+8h] [xbp-B8h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v190; // [xsp+40h] [xbp-80h] BYREF
  int32_t v191; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v192; // [xsp+48h] [xbp-78h] BYREF
  int32_t v193; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v194; // [xsp+50h] [xbp-70h] BYREF
  int32_t v195; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v196; // [xsp+58h] [xbp-68h] BYREF
  int32_t v197; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4A6C642 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_object___, title);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v27);
    sub_1B90010(&int_TypeInfo, v28);
    sub_1B90010(&LocalizationManager_TypeInfo, v29);
    sub_1B90010(&object___TypeInfo, v30);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject____76256160, v31);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v32);
    sub_1B90010(&StringLiteral_3804/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v33);
    sub_1B90010(&StringLiteral_3810/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v34);
    sub_1B90010(&StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v35);
    sub_1B90010(&StringLiteral_3808/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v36);
    sub_1B90010(&StringLiteral_3824/*"CONFIRM_PAYSUMMON_MSG"*/, v37);
    sub_1B90010(&StringLiteral_3806/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v38);
    sub_1B90010(&StringLiteral_3807/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v39);
    sub_1B90010(&StringLiteral_12399/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_1B90010(&StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_1B90010(&StringLiteral_12386/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_1B90010(&StringLiteral_12351/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_1B90010(&StringLiteral_3809/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_4A6C642 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, type, price);
  titlea = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3810/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3824/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v45 = (System_String_o **)&StringLiteral_3809/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get(*v45, 0LL);
  v47 = (System_Object_array *)sub_1B900B8(object___TypeInfo, 8LL);
  v197 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v197, v48, v49, v50);
  if ( !v47 )
    goto LABEL_107;
  v55 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v47->max_length )
    goto LABEL_105;
  v47->m_Items[0] = v55;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v55, v53, v54);
  v196 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v196, v56, v57, v58);
  v61 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_105;
  v47->m_Items[1] = v61;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[1], (int32_t)v61, v59, v60);
  v195 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v195, v62, v63, v64);
  v67 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_105;
  v47->m_Items[2] = v67;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[2], (int32_t)v67, v65, v66);
  v194 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v194, v68, v69, v70);
  v73 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_105;
  v47->m_Items[3] = v73;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[3], (int32_t)v73, v71, v72);
  v193 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v193, v74, v75, v76);
  v79 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_105;
  v47->m_Items[4] = v79;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[4], (int32_t)v79, v77, v78);
  v192 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v192, v80, v81, v82);
  v85 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_105;
  v47->m_Items[5] = v85;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[5], (int32_t)v85, v83, v84);
  v191 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v191, v86, v87, v88);
  v91 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_105;
  v47->m_Items[6] = v91;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[6], (int32_t)v91, v89, v90);
  v190 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v190, v92, v93, v94);
  v97 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_105;
  v47->m_Items[7] = v97;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->m_Items[7], (int32_t)v97, v95, v96);
  v98 = System_String__Format_61801600(v46, v47, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12399/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12386/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v102 = System_String__Format(v100, DateTime, 0LL);
    v99 = System_String__Concat_61787092(v99, v102, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  v103 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v103, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  if ( isPickup )
    v104 = 76;
  else
    v104 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v104, 0LL);
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(this, titlea, v98, 0LL, callback, 14.0, v99, shopIdIdx, isAppendSummon, 0, v185);
    return;
  }
  v197 = gachaId;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v197, v105, v106, v107);
  v109 = System_String__Format((System_String_o *)StringLiteral_3808/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v108, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v109, 0LL) )
  {
    v197 = gachaId;
    v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v197, v110, v111, v112);
    v114 = System_String__Format((System_String_o *)StringLiteral_3808/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v113, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v115 = v114;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v115 = (System_String_o *)StringLiteral_3807/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v115, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v197 = price;
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v197, v117, v118, v119);
  v196 = num;
  v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v196, v121, v122, v123);
  v125 = System_String__Format_61801464(v116, v120, v124, 0LL);
  v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3806/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v127 = (System_Object_array *)sub_1B900B8(object___TypeInfo, 6LL);
  v195 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v195, v128, v129, v130);
  if ( !v127 )
    goto LABEL_107;
  v133 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v127->max_length )
    goto LABEL_105;
  v127->m_Items[0] = v133;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v127->m_Items, (int32_t)v133, v131, v132);
  v194 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v194, v134, v135, v136);
  v139 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 1 )
    goto LABEL_105;
  v127->m_Items[1] = v139;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v127->m_Items[1], (int32_t)v139, v137, v138);
  v193 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v193, v140, v141, v142);
  v145 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 2 )
    goto LABEL_105;
  v127->m_Items[2] = v145;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v127->m_Items[2], (int32_t)v145, v143, v144);
  v192 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v192, v146, v147, v148);
  v151 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 3 )
    goto LABEL_105;
  v127->m_Items[3] = v151;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v127->m_Items[3], (int32_t)v151, v149, v150);
  v191 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v191, v152, v153, v154);
  v157 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 4 )
    goto LABEL_105;
  v127->m_Items[4] = v157;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v127->m_Items[4], (int32_t)v157, v155, v156);
  v190 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v190, v158, v159, v160);
  v163 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1B9014C(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v183 = sub_1B90290();
      sub_1B90138(v183, 0LL);
    }
  }
  if ( v127->max_length <= 5 )
LABEL_105:
    sub_1B90274(addMsgBgSprite, v52);
  v127->m_Items[5] = v163;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v127->m_Items[5], (int32_t)v163, v161, v162);
  v164 = System_String__Format_61801600(v126, v127, 0LL);
  v165 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v166 = Method_System_Array_Empty_object___;
  v167 = v165;
  v168 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v168 )
  {
    sub_1BE1F48(Method_System_Array_Empty_object___);
    v168 = v166[7];
  }
  v169 = *(_QWORD *)(v168 + 16);
  if ( (*(_BYTE *)(v169 + 309) & 1) == 0 )
    v169 = sub_1BE1EEC(v169);
  if ( !*(_DWORD *)(v169 + 224) )
    j_il2cpp_runtime_class_init_0(v169);
  v170 = *(_QWORD *)(v166[7] + 16LL);
  if ( (*(_BYTE *)(v170 + 309) & 1) == 0 )
    v170 = sub_1BE1EEC(v170);
  v171 = v125;
  v172 = System_String__Format_61801600(v167, **(System_Object_array ***)(v170 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v174 = v172;
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__49357576(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2F12308 *)Method_UnityEngine_Object_Instantiate_GameObject____76256160);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1B8FFB4(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v179,
            v180);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1B9026C(addMsgBgSprite, v52);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v171,
    v164,
    v174,
    tryGetBonusSelectData,
    assetManager,
    isBonusSelect);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v182 = LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v182, callback, 14.0, 0LL, shopIdIdx, 0, 1, v185);
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
  const MethodInfo *v40; // [xsp+8h] [xbp-68h]
  int32_t v41; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v42; // [xsp+28h] [xbp-48h] BYREF
  int32_t v43; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4A6C643 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, title);
    sub_1B90010(&LocalizationManager_TypeInfo, v13);
    sub_1B90010(&StringLiteral_3826/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1B90010(&StringLiteral_3827/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1B90010(&StringLiteral_1/*""*/, v16);
    byte_4A6C643 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_61801464(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_61801532(v27, v31, v35, v39, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v26, 0LL, callback, 14.0, 0LL, 0, 0, 0, v40);
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
  const MethodInfo *v28; // [xsp+8h] [xbp-68h]
  int32_t v29; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v30; // [xsp+18h] [xbp-58h] BYREF
  int32_t v31; // [xsp+1Ch] [xbp-54h] BYREF

  v31 = haveFreeStoneNum;
  if ( (byte_4A6C63E & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&price);
    sub_1B90010(&LocalizationManager_TypeInfo, v10);
    sub_1B90010(&StringLiteral_12302/*"STONE_PURCHASE"*/, v11);
    sub_1B90010(&StringLiteral_12131/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1B90010(&StringLiteral_429/*"#,0"*/, v13);
    sub_1B90010(&StringLiteral_1/*""*/, v14);
    byte_4A6C63E = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_62592372((int32_t)&v31, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
  v26 = System_String__Format_61801532(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v26, v27, callback, 14.0, 0LL, 0, 0, 0, v28);
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
  const MethodInfo *v17; // [xsp+8h] [xbp-48h]
  int32_t v18; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A6C641 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&StringLiteral_12132/*"SHORT_HAVE_POINT"*/, v8);
    sub_1B90010(&StringLiteral_12130/*"SHORT_DLG_TITLE"*/, v9);
    byte_4A6C641 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12130/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SHORT_HAVE_POINT"*/, 0LL);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v16, 0LL, callback, 14.0, 0LL, 0, 0, 0, v17);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]
  int32_t v20; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A6C63D & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&StringLiteral_12302/*"STONE_PURCHASE"*/, v8);
    sub_1B90010(&StringLiteral_12133/*"SHORT_HAVE_STONE"*/, v9);
    sub_1B90010(&StringLiteral_12130/*"SHORT_DLG_TITLE"*/, v10);
    byte_4A6C63D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12130/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHORT_HAVE_STONE"*/, 0LL);
  v20 = haveNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15);
  v17 = System_String__Format(v12, v16, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12302/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v11, v17, v18, callback, 14.0, 0LL, 0, 0, 0, v19);
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
  System_Action_object__o *_9__77_0; // x22
  Il2CppObject *v44; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
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

  if ( (byte_4A6C64B & 1) == 0 )
  {
    sub_1B90010(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1B90010(&BalanceConfig_TypeInfo, v7);
    sub_1B90010(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1B90010(&int_TypeInfo, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1B90010(&LocalizationManager_TypeInfo, v13);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1B90010(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__77_0__, v15);
    sub_1B90010(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1B90010(&StringLiteral_117/*" "*/, v17);
    sub_1B90010(&StringLiteral_12361/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1B90010(&StringLiteral_12363/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1B90010(&StringLiteral_12364/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1B90010(&StringLiteral_12366/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1B90010(&StringLiteral_12365/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1B90010(&StringLiteral_12362/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_4A6C64B = 1;
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
    _9__77_0 = (System_Action_object__o *)v42->static_fields->__9__77_0;
    if ( !_9__77_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__77_0 = (System_Action_object__o *)sub_1B9025C(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__77_0, v44, Method_SummonConfirmDlgComponent___c__SetBonusText_b__77_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__77_0 = (struct System_Action_ItemIconComponent__o *)_9__77_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v46, v47);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__77_0,
      (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v49 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v49 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 52LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v49 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v49,
                                                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
        sub_1B90274(SelfUserGame, v25);
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
      ItemIconComponent__SetGift_38197016((ItemIconComponent_o *)v52, v54[5], v54[6], v54[7], 0, 0LL);
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
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v57 = v54[7];
        v58 = v56;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v57, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v58, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12362/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v61 = v54[7];
        v62 = v60;
        v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v61, 0LL);
        v64 = System_String__Format(v62, v63, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_61787092(
                                                     v64,
                                                     (System_String_o *)StringLiteral_117/*" "*/,
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
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12364/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
             (const MethodInfo_2EB00E8 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v30 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v31 = (System_String_o **)&StringLiteral_12363/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_12366/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v32 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v34 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12361/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12365/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
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
    sub_1B9026C(SelfUserGame, v25);
  }
  ItemIconComponent__SetGift_38197016((ItemIconComponent_o *)SelfUserGame, v30[5], v30[6], v30[7], 0, 0LL);
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
    sub_1B9026C(this, method);
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
  if ( (byte_4A6C64C & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_4A6C64C = 1;
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
      sub_1B90274(this, method);
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
    sub_1B9026C(this, method);
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
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  SummonConfirmDlgComponent___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x23
  System_Func_object__int__o *_9__76_1; // x24
  Il2CppObject *v34; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
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

  if ( (byte_4A6C64A & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1B90010(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1B90010(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B90010(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1B90010(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__76_1__, v13);
    sub_1B90010(&Method_SummonConfirmDlgComponent___c__DisplayClass76_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1B90010(&SummonConfirmDlgComponent___c__DisplayClass76_0_TypeInfo, v15);
    sub_1B90010(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_4A6C64A = 1;
  }
  v17 = sub_1B9025C(SummonConfirmDlgComponent___c__DisplayClass76_0_TypeInfo);
  SummonConfirmDlgComponent___c__DisplayClass76_0___ctor((SummonConfirmDlgComponent___c__DisplayClass76_0_o *)v17, 0LL);
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
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1B9026C(baseWindowSprite, v19);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_GiftMaster___);
  v25 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v26 = *v25;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v25 )
    {
      v26 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass76_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v26;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v26, v28, v29);
    }
    v30 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v31 = SummonConfirmDlgComponent___c_TypeInfo;
    v32 = v30;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v31 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_1 = (System_Func_object__int__o *)v31->static_fields->__9__76_1;
    if ( !_9__76_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__76_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__76_1,
        v34,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__76_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__76_1;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__76_1, (int32_t)_9__76_1, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v32,
                                                                 (System_Func_TSource__TResult__o *)_9__76_1,
                                                                 (const MethodInfo_2EBE4B0 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v39 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v38,
                                                (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
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
          v50 = 28LL;
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
          v50 = 24LL;
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

  if ( (byte_4A6C63A & 1) == 0 )
  {
    sub_1B90010(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A6C63A = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6C63B & 1) == 0 )
  {
    sub_1B90010(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A6C63B = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B9052C(v7);
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

  if ( (byte_4A6C649 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, method);
    sub_1B90010(&StringLiteral_12344/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4A6C649 = 1;
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
        sub_1B9026C(closeBtnObject, method);
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
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12344/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1B9026C(0LL, isTutorial);
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
  int32_t v7; // w3
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  autoSaleDlgInfo = this->fields.autoSaleDlgInfo;
  if ( !autoSaleDlgInfo )
    goto LABEL_8;
  AutomaticSaleDlgComponent__Close_33035516(autoSaleDlgInfo, 0LL, method);
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
    sub_1B9026C(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_33116116(this, 0LL, v11);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D1E64;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1E1C;
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
  if ( (byte_4A6C653 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6C653 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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
  int32_t v4; // w3

  if ( (byte_4A6C654 & 1) == 0 )
  {
    sub_1B90010(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_4A6C654 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__76_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}