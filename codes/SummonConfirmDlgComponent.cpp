void SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_596CA17 & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    byte_596CA17 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_E9D2C0;
  *(_OWORD *)&static_fields->PRIVILEGE_SUMMON_MESSAGE_WIDTH_THRESHOLD = xmmword_E9D1A0;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_E9CC80;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CA16 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596CA16 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v16; // x4
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v18 = haveFreeStoneNum;
  if ( (byte_596CA03 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3072/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_596CA03 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&price, *(_QWORD *)&haveChargeStoneNum);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3072/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0);
  v17 = haveChargeStoneNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
  v12 = (Il2CppObject *)System_Int32__ToString_77138656((int32_t)&v18, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  v13 = System_String__Format_75697880(v10, v11, v12, 0);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v13, 0),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_2213CDC(v13, v14);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v13, 0);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v16);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v16; // x24
  System_String_o *v17; // x28
  Il2CppObject *v18; // x27
  Il2CppObject *v19; // x26
  Il2CppObject *v20; // x0
  System_String_o *baseWindow; // x0
  __int64 v22; // x1
  System_String_o *v23; // x25
  __int64 v24; // x2
  UIWidget_o *baseWindowSprite; // x26
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x26
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  __int64 v41; // x2
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // [xsp+10h] [xbp-80h]
  int32_t v47; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v48; // [xsp+28h] [xbp-68h] BYREF
  int32_t v49; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_596CA04 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&StringLiteral_12890/*"STONE_PURCHASE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_3076/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_3077/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/);
    byte_596CA04 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, callback, *(_QWORD *)&haveStoneNum);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3077/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3076/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0);
  v49 = haveStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v49);
  v48 = haveChargeStoneNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
  v47 = haveFreeStoneNum;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v47);
  baseWindow = System_String__Format_75697948(v17, v18, v19, v20, 0);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v23 = baseWindow;
  UnityEngine_GameObject__SetActive(this->fields.bonusSelectNotHaveChargeStoneBeforeInfo, 0, 0);
  baseWindow = (System_String_o *)SummonConfirmDlgComponent_TypeInfo;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v22, v24);
  if ( !baseWindowSprite )
    goto LABEL_25;
  UIWidget__set_width(baseWindowSprite, SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH, 0);
  baseWindow = (System_String_o *)this->fields.baseWindowSprite;
  if ( !baseWindow )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)baseWindow, 580, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__59717116(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          this->fields.bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_2213CDC(baseWindow, v22);
  }
LABEL_19:
  baseWindow = (System_String_o *)this->fields.bonusSelectMsgInfo;
  if ( !baseWindow )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v16,
    v23,
    tryGetBonusSelectData,
    assetManager,
    0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0);
  v43 = (System_String_o *)StringLiteral_12890/*"STONE_PURCHASE"*/;
  this->fields.state = 4;
  v44 = LocalizationManager__Get(v43, 0);
  SummonConfirmDlgComponent__Open(this, 0, 0, v44, callback, 14.0, 0, 0, 0, 1, 0, v45);
}


void SummonConfirmDlgComponent__Callback(SummonConfirmDlgComponent_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_42185804(this, 0, v2);
}


void SummonConfirmDlgComponent__Close_42185804(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596CA12 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_596CA12 = 1;
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
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_596CA13 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CA13 = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, 0);
      goto LABEL_9;
    }
LABEL_12:
    sub_2213CDC(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v8, v9, v10, v11, v12, v13);
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
  __int64 v4; // x2
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  __int64 v7; // x22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v9; // w8
  __int64 v10; // x21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  SummonConfirmDlgComponent_c *v16; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_596CA00 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA00 = 1;
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
    v7 = 0;
    while ( (unsigned int)v7 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v7];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_2213CE4(confirmTitleLabel);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v9 = extraItemIconComponents->max_length;
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( (unsigned int)v10 < v9 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v10];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0);
      v9 = extraItemIconComponents->max_length;
      if ( (int)++v10 >= v9 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v4);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
  v16 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v14, v15);
    v16 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v16->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v18, -64.0, 0);
  this->fields.extraGiftEntList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.extraGiftEntList, 0, v19, v20, v21, v22, v23, v24);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v25,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(
    v26,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
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
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_65:
    sub_2213CDC(confirmTitleLabel, method);
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

  if ( (byte_596CA14 & 1) == 0 )
  {
    sub_2213A60(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SummonConfirmDlgComponent_OnClickSetting__);
    sub_2213A60(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_596CA14 = 1;
  }
  v3 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_2213CCC(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0),
        !autoSaleDlgInfo) )
  {
    sub_2213CDC(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0);
}


void SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_596CA15 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4827/*"ConfirmWindow/CloseButton"*/);
    sub_2213A60(&StringLiteral_4829/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    sub_2213A60(&StringLiteral_4825/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/);
    byte_596CA15 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_4829/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v4, (System_String_o *)StringLiteral_4827/*"ConfirmWindow/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(v5, (System_String_o *)StringLiteral_4825/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0);
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
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *confirmTitleLabel; // x27
  __int64 v33; // x2
  System_String_o *v34; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  __int64 v36; // x2
  System_String_o *v37; // x1
  UnityEngine_GameObject_o *v38; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  __int64 v41; // x2
  UILabel_o *v42; // x27
  int32_t v43; // w25
  __int64 v44; // x2
  UILabel_o *v45; // x27
  __int64 v46; // x2
  UILabel_o *v47; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  __int64 v49; // x2
  UILabel_o *v50; // x25
  __int64 v51; // x2
  int32_t v52; // w25
  float CONFIRM_TITLE_LABEL_POS_Y; // s8
  SummonConfirmDlgComponent_c *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v57; // w0
  int32_t v58; // w24
  float v59; // s8
  float v60; // s9
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x2
  struct UILabel_o *addMsgLabel; // x8
  int32_t mWidth; // w22
  UIWidget_o *addMsgBgSprite; // x22
  UILabel_o *v67; // x22
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x22
  System_Func_object__bool__o *v71; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x24
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  SummonConfirmDlgComponent___c_c *v82; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x24
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__75_1; // x25
  Il2CppObject *v86; // x26
  struct SummonConfirmDlgComponent___c_StaticFields *v87; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  System_Collections_ICollection_o *v95; // x24
  __int64 v96; // x2
  int v97; // w8
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v99; // x3
  __int64 v100; // x1
  __int64 v101; // x2
  UnityEngine_Object_o *bonusMsgInfo; // x24
  const MethodInfo *v103; // x1
  __int64 v104; // x2
  UnityEngine_Object_o *extraMsgInfo; // x24
  bool v106; // w0
  int v107; // w8
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v112; // s0
  float v113; // s1
  float v114; // s8
  UnityEngine_GameObject_o *v115; // x0
  UnityEngine_GameObject_o *v116; // x0
  bool v117; // w1
  const MethodInfo *v118; // x1
  System_Action_o *v119; // x20
  int v120; // [xsp+4h] [xbp-7Ch]

  if ( (byte_596CA0B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_2213A60(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_2213A60(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&Method_SummonConfirmDlgComponent___c__Open_b__75_1__);
    sub_2213A60(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__);
    sub_2213A60(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA0B = 1;
  }
  v21 = sub_2213CCC(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_146;
  *(_DWORD *)(v21 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_146;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_146;
    if ( title )
      v34 = title;
    else
      v34 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v34, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v33);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_146;
    v37 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v37, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_146;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v38, msgOffY, 0);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0);
      v42 = this->fields.confirmDetailLabel;
      v43 = (int)gameObject;
      if ( SummonConfirmMessageSpacingX == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v23, v41);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingX = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 16);
      }
      if ( !v42 )
        goto LABEL_146;
      UILabel__set_spacingX(v42, SummonConfirmMessageSpacingX, 0);
      v45 = this->fields.confirmDetailLabel;
      if ( SummonConfirmMessageSpacingY == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v23, v44);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingY = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 20);
      }
      if ( !v45 )
        goto LABEL_146;
      UILabel__set_spacingY(v45, SummonConfirmMessageSpacingY, 0);
      v47 = this->fields.confirmDetailLabel;
      if ( !v43 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v23, v46);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v43 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 12);
      }
      if ( !v47 )
        goto LABEL_146;
      UILabel__set_fontSize(v47, v43, 0);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v36);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v50 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v49);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v50 )
      goto LABEL_146;
    UILabel__set_text(v50, decideTxt, 0);
  }
  v52 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0);
  if ( this->fields.state == 5 )
  {
    if ( v52 <= 2 )
    {
      v54 = SummonConfirmDlgComponent_TypeInfo;
      if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v23, v51);
        v54 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y = v54->static_fields->CONFIRM_TITLE_LABEL_POS_Y;
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y = 164.0;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_146;
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v55, CONFIRM_TITLE_LABEL_POS_Y, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v51);
  v57 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v57 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v52 <= 2 )
      v58 = 20;
    else
      v58 = 18;
    if ( v52 <= 2 )
      v59 = 54.0;
    else
      v59 = 43.0;
    if ( !gameObject )
      goto LABEL_146;
    v60 = v52 <= 2 ? 188.0 : 178.0;
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v61, v60, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_146;
    v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v62, v59, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_146;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_146;
    UILabel__set_fontSize((UILabel_o *)gameObject, v58, 0);
    gameObject = this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_146;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !gameObject )
      goto LABEL_146;
    UILabel__set_text((UILabel_o *)gameObject, addMsg, 0);
    addMsgLabel = this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_146;
    mWidth = addMsgLabel->fields.mWidth;
    gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v23, v63);
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( mWidth > *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 28) )
    {
      addMsgBgSprite = (UIWidget_o *)this->fields.addMsgBgSprite;
      if ( !HIDWORD(gameObject[9].monitor) )
        j_il2cpp_runtime_class_init_0(gameObject, v23, v63);
      if ( !addMsgBgSprite )
        goto LABEL_146;
      UIWidget__set_width(
        addMsgBgSprite,
        SummonConfirmDlgComponent_TypeInfo->static_fields->PRIVILEGE_SUMMON_MAX_FRAME_SIZE,
        0);
      gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    v67 = this->fields.addMsgLabel;
    if ( !HIDWORD(gameObject[9].monitor) )
      j_il2cpp_runtime_class_init_0(gameObject, v23, v63);
    if ( !v67 )
      goto LABEL_146;
    UILabel__SetCondensedScale(
      v67,
      SummonConfirmDlgComponent_TypeInfo->static_fields->PRIVILEGE_SUMMON_ADD_MESSAGE_MAX_WIDTH,
      0,
      0);
  }
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( !extraGiftEntList )
    goto LABEL_135;
  state = this->fields.state;
  if ( state == 4 || state == 2 )
  {
    if ( !extraGiftEntList->max_length )
      goto LABEL_135;
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
    if ( !gameObject )
      goto LABEL_146;
    UIWidget__set_width((UIWidget_o *)gameObject, 852, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
    if ( !gameObject )
      goto LABEL_146;
    v120 = v52;
    UIWidget__set_height((UIWidget_o *)gameObject, 524, 0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_146;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
    *(_DWORD *)(v21 + 20) = 1;
    while ( 1 )
    {
      v71 = *(System_Func_object__bool__o **)(v21 + 24);
      v72 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
      if ( !v71 )
      {
        v71 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v71,
          (Il2CppObject *)v21,
          Method_SummonConfirmDlgComponent___c__DisplayClass75_0__Open_b__0__,
          0);
        *(_QWORD *)(v21 + 24) = v71;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 24), (int32_t)v71, v73, v74, v75, v76, v77, v78);
      }
      v79 = System_Linq_Enumerable__Where_object_(
              v72,
              (System_Func_TSource__bool__o *)v71,
              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
      v82 = SummonConfirmDlgComponent___c_TypeInfo;
      v83 = v79;
      if ( !*(&SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo, v80, v81);
        v82 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      static_fields = v82->static_fields;
      _9__75_1 = (System_Func_object__int__o *)static_fields->__9__75_1;
      if ( !_9__75_1 )
      {
        if ( !*(&v82->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v82, v80, v81);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
        }
        v86 = (Il2CppObject *)static_fields->__9;
        _9__75_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GachaExtraGiftEntity__int__TypeInfo);
        System_Func_object__int____ctor(_9__75_1, v86, Method_SummonConfirmDlgComponent___c__Open_b__75_1__, 0);
        v87 = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
        v87->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v87->__9__75_1,
          (int32_t)_9__75_1,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
      }
      v94 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v83,
                                                                   (System_Func_TSource__TResult__o *)_9__75_1,
                                                                   (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
      v95 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                  v94,
                                                  (const MethodInfo_38A0B70 *)Method_System_Linq_Enumerable_ToList_int___);
      gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v95, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v97 = *(_DWORD *)(v21 + 20);
      }
      else
      {
        if ( !MasterData_object )
          goto LABEL_146;
        GiftListByIds = GiftMaster__GetGiftListByIds(
                          (GiftMaster_o *)MasterData_object,
                          (System_Collections_Generic_IEnumerable_int__o *)v95,
                          0);
        SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v21 + 20), v99);
        bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100, v101);
        if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v21 + 20) == 1 )
        {
          SummonConfirmDlgComponent__SetBonusTextPos(this, v103);
LABEL_117:
          if ( isBonusSelect )
          {
            baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
            gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
            if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v23, v96);
            if ( baseWindowSprite )
            {
              UIWidget__set_width(
                baseWindowSprite,
                SummonConfirmDlgComponent_TypeInfo->static_fields->BASE_WINDOW_DEFAULT_WIDTH,
                0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.baseWindowSprite;
              if ( gameObject )
              {
                UIWidget__set_height((UIWidget_o *)gameObject, 580, 0);
                GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
                gameObject = this->fields.bonusMsgInfo;
                if ( gameObject )
                {
                  v109 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                  GameObjectExtensions__SetLocalPositionY(
                    v109,
                    SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
                    0);
                  gameObject = this->fields.extraMsgInfo;
                  if ( gameObject )
                  {
                    v110 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
                    BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
                    goto LABEL_134;
                  }
                }
              }
            }
            goto LABEL_146;
          }
          v112 = -30.0;
          gameObject = this->fields.bonusMsgInfo;
          v113 = -42.0;
          if ( v120 > 2 )
          {
            v112 = -34.0;
            v113 = -44.0;
          }
          if ( isAppendSummon )
            v114 = v112;
          else
            v114 = v113;
          if ( !gameObject )
            goto LABEL_146;
          v115 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v115, v114, 0);
          gameObject = this->fields.extraMsgInfo;
          if ( !gameObject )
            goto LABEL_146;
          v116 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v116, v114, 0);
          GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0);
          GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0);
          gameObject = this->fields.confirmBtnObject;
          if ( !gameObject )
            goto LABEL_146;
          v110 = UnityEngine_GameObject__get_gameObject(gameObject, 0);
          BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
LABEL_134:
          GameObjectExtensions__SetLocalPositionY(v110, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0);
LABEL_135:
          state = this->fields.state;
          break;
        }
        extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103, v104);
        v106 = UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0);
        v97 = *(_DWORD *)(v21 + 20);
        if ( v106 && v97 == 2 )
        {
          SummonConfirmDlgComponent__SetExtraTextPos(this, v23);
          goto LABEL_117;
        }
      }
      v107 = v97 + 1;
      *(_DWORD *)(v21 + 20) = v107;
      if ( v107 >= 3 )
        goto LABEL_117;
    }
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_146;
    v117 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_146;
    v117 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v117, 0);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.singleMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.defMsgInfo) == 0) )
  {
LABEL_146:
    sub_2213CDC(gameObject, v23);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v118);
  v119 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v119, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v119, 0, 0, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Action_o *v15; // x20

  if ( (byte_596CA0D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SummonConfirmDlgComponent_EndOpen__);
    byte_596CA0D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.defMsgInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.confirmBtnObject) == 0) )
  {
    sub_2213CDC(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        int32_t gachaId,
        const MethodInfo *method)
{
  BalanceConfig_c *v9; // x0
  int v10; // w8
  System_String_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  SummonConfirmDlgComponent_c *v14; // x8
  Il2CppObject *v15; // x23
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  bool v19; // w8
  int v20; // w9
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  System_String_o *v25; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x25
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  SummonConfirmDlgComponent_c *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // [xsp+10h] [xbp-80h]
  int32_t v40; // [xsp+20h] [xbp-70h] BYREF
  int32_t v41; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v42; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_596CA09 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&UserGachaMaster_TypeInfo);
    sub_2213A60(&StringLiteral_3894/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_2213A60(&StringLiteral_3893/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_2213A60(&StringLiteral_6840/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_596CA09 = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  DailyFreeGachaResetTime = 0;
  v10 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  remainNum = 0;
  maxNum = 0;
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, callback, autoSaleDialogCloseCallback);
    v9 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v9->static_fields->DailyFreeGachaResetTime;
  v11 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0);
  v14 = SummonConfirmDlgComponent_TypeInfo;
  v15 = (Il2CppObject *)v11;
  if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v12, v13);
    v14 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v14->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v12, v13);
  v19 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0);
  v20 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v19 )
  {
    if ( !v20 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3893/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0);
    v42 = maxNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v42);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(v21, v15, v22, 0);
    if ( !this->fields.campaignLabel )
      goto LABEL_22;
    v25 = (System_String_o *)gameObject;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    campaignLabel = this->fields.campaignLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6840/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0);
    v41 = remainNum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v41);
    v40 = maxNum;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v40);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(v27, v28, v29, 0);
    if ( !campaignLabel )
LABEL_22:
      sub_2213CDC(gameObject, v24);
    UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0);
    v37 = SummonConfirmDlgComponent_TypeInfo;
    if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v30, v31);
      v37 = SummonConfirmDlgComponent_TypeInfo;
    }
    CONFIRM_DETAIL_LABEL_POS_Y = v37->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
  }
  else
  {
    if ( !v20 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3894/*"CONFIRM_FREESUMMON_MSG"*/, 0);
    v25 = System_String__Format(v38, v15, 0);
  }
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  SummonConfirmDlgComponent__Open(this, 0, v25, 0, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0, 0, 0, 0, 0, v39);
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
  __int64 v19; // x1
  long double v20; // q0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 MasterData_object; // x0
  GachaMaster_o *v24; // x20
  GachaEntity_array *GachaDataInGroup; // x27
  Il2CppObject *Entity; // x28
  __int64 v27; // x2
  char v28; // w29
  int32_t v29; // w21
  Il2CppClass *klass; // x8
  GachaEntity_o *v31; // x8
  int32_t v32; // w26
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *monitor; // x20
  System_String_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  System_String_o *v43; // x21
  __int64 v44; // x2
  UILabel_o *v45; // x29
  System_String_o *v46; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Object_array *v53; // x21
  Il2CppObject *v54; // x8
  __int64 max_length_low; // x24
  GachaEntity_o *v56; // x8
  GachaEntity_o *v57; // x9
  Il2CppObject *name; // x29
  Il2CppObject *v59; // x28
  struct UILabel_o *infoMsgLabel; // x20
  System_String_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_Object_array *v68; // x27
  __int64 v69; // x1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  Il2CppObject *v82; // x26
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  Il2CppObject *v89; // x25
  System_String_o *v90; // x1
  UILabel_o *v91; // x0
  __int64 v92; // x2
  System_String_o **v93; // x8
  GachaEntity_o *v94; // x9
  System_String_o *v95; // x21
  struct UILabel_o *v96; // x27
  System_String_o *v97; // x21
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_Object_array *v104; // x28
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  Il2CppObject *v111; // x20
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  Il2CppObject *v118; // x20
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  Il2CppObject *v125; // x20
  __int64 v126; // x1
  __int64 v127; // x2
  int32_t v128; // w21
  Il2CppObject *v129; // x28
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  Il2CppObject *v136; // x27
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  Il2CppObject *v143; // x26
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  Il2CppObject *v150; // x25
  UILabel_o *msgLabel; // x25
  System_String_o *v152; // x26
  System_Object_array *v153; // x27
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  Il2CppObject *v160; // x20
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  Il2CppObject *v167; // x20
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  Il2CppObject *v174; // x20
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  Il2CppObject *v181; // x20
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  Il2CppObject *v188; // x20
  System_String_o *v189; // x2
  System_String_o *v190; // x3
  int32_t v191; // w4
  int32_t v192; // w5
  bool v193; // w6
  bool v194; // w7
  Il2CppObject *v195; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v197; // x2
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x8
  const MethodInfo *v199; // x1
  System_Action_o *v200; // x20
  __int64 v201; // x0
  int32_t v202; // [xsp+4h] [xbp-9Ch]
  int32_t v203; // [xsp+8h] [xbp-98h]
  int32_t v206; // [xsp+18h] [xbp-88h] BYREF
  int32_t v207; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t v208; // [xsp+20h] [xbp-80h] BYREF
  int32_t v209; // [xsp+24h] [xbp-7Ch] BYREF
  int32_t v210; // [xsp+28h] [xbp-78h] BYREF
  int max_length; // [xsp+2Ch] [xbp-74h] BYREF
  System_String_o *resultText; // [xsp+30h] [xbp-70h] BYREF
  int32_t v213; // [xsp+3Ch] [xbp-64h] BYREF

  v213 = groupId;
  if ( (byte_596CA0C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_2213A60(&StringLiteral_3899/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/);
    sub_2213A60(&StringLiteral_3901/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3897/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_3898/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    sub_2213A60(&StringLiteral_3900/*"CONFIRM_GROUPSUMMON_INFOMSG_UNIQUE_"*/);
    byte_596CA0C = 1;
  }
  resultText = 0;
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    *(System_String_o **)&price,
    *(System_String_o **)&haveStoneNum,
    haveFreeStoneNum,
    haveChargeStoneNum,
    afterStoneNum,
    afterFreeStoneNum);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_224B908(v20);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
    v22 = sub_224B908(v20);
  MasterData_object = **(_QWORD **)(v22 + 184);
  if ( !MasterData_object )
    goto LABEL_124;
  v202 = afterStoneNum;
  v203 = haveFreeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_124;
  v24 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_124;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_124;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  MasterData_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GachaDataInGroup, 0);
  v28 = 1;
  v29 = 1;
  if ( (MasterData_object & 1) == 0 && Entity )
  {
    klass = Entity[2].klass;
    if ( !klass )
      goto LABEL_124;
    if ( LODWORD(klass->_1.namespaze) )
    {
      MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v24, groupId, 0);
      if ( !GachaDataInGroup )
        goto LABEL_124;
      if ( !LODWORD(GachaDataInGroup->max_length) )
LABEL_125:
        sub_2213CE4(MasterData_object);
      v31 = GachaDataInGroup->m_Items[0];
      if ( !v31 )
        goto LABEL_124;
      v28 = 0;
      v29 = (int)MasterData_object / v31->fields.drawNum1;
    }
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v19, v27);
  v32 = System_Math__Max_77153260(v29, 1, 0);
  this->fields.extraGiftEntList = giftEntList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.extraGiftEntList,
    (int32_t)giftEntList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  v40 = System_Int32__ToString((int32_t)&v213, 0);
  v43 = System_String__Concat_75651716((System_String_o *)StringLiteral_3900/*"CONFIRM_GROUPSUMMON_INFOMSG_UNIQUE_"*/, v40, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
  MasterData_object = LocalizationManager__TryGet(&resultText, v43, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( (MasterData_object & 1) == 0 )
  {
    if ( !GachaDataInGroup )
      goto LABEL_124;
    max_length_low = LODWORD(GachaDataInGroup->max_length);
    if ( max_length_low == 2 )
    {
      v56 = GachaDataInGroup->m_Items[0];
      if ( v56 )
      {
        v57 = GachaDataInGroup->m_Items[1];
        if ( v57 )
        {
          name = (Il2CppObject *)v56->fields.name;
          v59 = (Il2CppObject *)v57->fields.name;
          infoMsgLabel = this->fields.infoMsgLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v44);
          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3897/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0);
          MasterData_object = sub_2213B20(object___TypeInfo, 4);
          if ( MasterData_object )
          {
            v68 = (System_Object_array *)MasterData_object;
            if ( name )
            {
              MasterData_object = sub_2213BB4(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
              if ( !MasterData_object )
                goto LABEL_126;
            }
            if ( !LODWORD(v68->max_length) )
              goto LABEL_125;
            v68->m_Items[0] = name;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v68->m_Items, (int32_t)name, v62, v63, v64, v65, v66, v67);
            if ( v59 )
            {
              MasterData_object = sub_2213BB4(v59, v68->obj.klass->_1.element_class);
              if ( !MasterData_object )
                goto LABEL_126;
            }
            if ( (v68->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_125;
            v68->m_Items[1] = v59;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v68->m_Items[1],
              (int32_t)v59,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75);
            max_length = v32;
            MasterData_object = j_il2cpp_value_box_0(qword_5984348, &max_length);
            v82 = (Il2CppObject *)MasterData_object;
            if ( MasterData_object )
            {
              MasterData_object = sub_2213BB4(MasterData_object, v68->obj.klass->_1.element_class);
              if ( !MasterData_object )
                goto LABEL_126;
            }
            if ( LODWORD(v68->max_length) <= 2 )
              goto LABEL_125;
            v68->m_Items[2] = v82;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v68->m_Items[2],
              (int32_t)v82,
              v76,
              v77,
              v78,
              v79,
              v80,
              v81);
            v210 = price;
            MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v210);
            v89 = (Il2CppObject *)MasterData_object;
            if ( MasterData_object )
            {
              MasterData_object = sub_2213BB4(MasterData_object, v68->obj.klass->_1.element_class);
              if ( !MasterData_object )
                goto LABEL_126;
            }
            if ( (v68->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_125;
            v68->m_Items[3] = v89;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v68->m_Items[3],
              (int32_t)v89,
              v83,
              v84,
              v85,
              v86,
              v87,
              v88);
            MasterData_object = (__int64)System_String__Format_75698016(v61, v68, 0);
            if ( !infoMsgLabel )
              goto LABEL_124;
            v90 = (System_String_o *)MasterData_object;
            v91 = infoMsgLabel;
LABEL_72:
            UILabel__set_text(v91, v90, 0);
            v128 = haveStoneNum;
            goto LABEL_93;
          }
        }
      }
    }
    else
    {
      if ( !Entity )
        goto LABEL_124;
      MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0);
      if ( (MasterData_object & 1) == 0 )
        monitor = (Il2CppObject *)Entity[1].monitor;
      v93 = (System_String_o **)&StringLiteral_3898/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
      if ( (v28 & 1) == 0 )
      {
        if ( !LODWORD(GachaDataInGroup->max_length) )
          goto LABEL_125;
        v94 = GachaDataInGroup->m_Items[0];
        if ( !v94 )
          goto LABEL_124;
        if ( SHIDWORD(Entity[1].klass) / v94->fields.drawNum1 > 1 )
          v93 = (System_String_o **)&StringLiteral_3899/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
      }
      v95 = *v93;
      v96 = this->fields.infoMsgLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v92);
      v97 = LocalizationManager__Get(v95, 0);
      MasterData_object = sub_2213B20(object___TypeInfo, 4);
      if ( MasterData_object )
      {
        v104 = (System_Object_array *)MasterData_object;
        if ( monitor )
        {
          MasterData_object = sub_2213BB4(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
          if ( !MasterData_object )
            goto LABEL_126;
        }
        if ( !LODWORD(v104->max_length) )
          goto LABEL_125;
        v104->m_Items[0] = monitor;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)v104->m_Items,
          (int32_t)monitor,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103);
        max_length = max_length_low;
        MasterData_object = j_il2cpp_value_box_0(qword_5984348, &max_length);
        v111 = (Il2CppObject *)MasterData_object;
        if ( MasterData_object )
        {
          MasterData_object = sub_2213BB4(MasterData_object, v104->obj.klass->_1.element_class);
          if ( !MasterData_object )
            goto LABEL_126;
        }
        if ( (v104->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_125;
        v104->m_Items[1] = v111;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v104->m_Items[1],
          (int32_t)v111,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
        v210 = v32;
        MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v210);
        v118 = (Il2CppObject *)MasterData_object;
        if ( MasterData_object )
        {
          MasterData_object = sub_2213BB4(MasterData_object, v104->obj.klass->_1.element_class);
          if ( !MasterData_object )
            goto LABEL_126;
        }
        if ( LODWORD(v104->max_length) <= 2 )
          goto LABEL_125;
        v104->m_Items[2] = v118;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v104->m_Items[2],
          (int32_t)v118,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117);
        v209 = price;
        MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v209);
        v125 = (Il2CppObject *)MasterData_object;
        if ( MasterData_object )
        {
          MasterData_object = sub_2213BB4(MasterData_object, v104->obj.klass->_1.element_class);
          if ( !MasterData_object )
            goto LABEL_126;
        }
        if ( (v104->max_length & 0xFFFFFFFC) == 0 )
          goto LABEL_125;
        v104->m_Items[3] = v125;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v104->m_Items[3],
          (int32_t)v125,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124);
        MasterData_object = (__int64)System_String__Format_75698016(v97, v104, 0);
        if ( !v96 )
          goto LABEL_124;
        v90 = (System_String_o *)MasterData_object;
        v91 = v96;
        goto LABEL_72;
      }
    }
LABEL_124:
    sub_2213CDC(MasterData_object, v19);
  }
  v45 = this->fields.infoMsgLabel;
  v46 = resultText;
  MasterData_object = sub_2213B20(object___TypeInfo, 4);
  v53 = (System_Object_array *)MasterData_object;
  if ( Entity )
    v54 = (Il2CppObject *)Entity[1].monitor;
  else
    v54 = 0;
  if ( v54 )
    v129 = v54;
  else
    v129 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !MasterData_object )
    goto LABEL_124;
  if ( v129 )
  {
    MasterData_object = sub_2213BB4(v129, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( !LODWORD(v53->max_length) )
    goto LABEL_125;
  v53->m_Items[0] = v129;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v53->m_Items, (int32_t)v129, v47, v48, v49, v50, v51, v52);
  if ( !GachaDataInGroup )
    goto LABEL_124;
  max_length = GachaDataInGroup->max_length;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &max_length);
  v136 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v53->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( (v53->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_125;
  v53->m_Items[1] = v136;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->m_Items[1], (int32_t)v136, v130, v131, v132, v133, v134, v135);
  v210 = v32;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v210);
  v143 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v53->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( LODWORD(v53->max_length) <= 2 )
    goto LABEL_125;
  v53->m_Items[2] = v143;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->m_Items[2], (int32_t)v143, v137, v138, v139, v140, v141, v142);
  v209 = price;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v209);
  v150 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v53->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( (v53->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_125;
  v53->m_Items[3] = v150;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->m_Items[3], (int32_t)v150, v144, v145, v146, v147, v148, v149);
  MasterData_object = (__int64)System_String__Format_75698016(v46, v53, 0);
  if ( !v45 )
    goto LABEL_124;
  UILabel__set_text(v45, (System_String_o *)MasterData_object, 0);
  v128 = haveStoneNum;
LABEL_93:
  msgLabel = this->fields.msgLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v126, v127);
  v152 = LocalizationManager__Get((System_String_o *)StringLiteral_3901/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0);
  v153 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
  max_length = v128;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &max_length);
  if ( !v153 )
    goto LABEL_124;
  v160 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v153->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( !LODWORD(v153->max_length) )
    goto LABEL_125;
  v153->m_Items[0] = v160;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v153->m_Items, (int32_t)v160, v154, v155, v156, v157, v158, v159);
  v210 = haveChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v210);
  v167 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v153->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( (v153->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_125;
  v153->m_Items[1] = v167;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v153->m_Items[1], (int32_t)v167, v161, v162, v163, v164, v165, v166);
  v209 = v203;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v209);
  v174 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v153->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( LODWORD(v153->max_length) <= 2 )
    goto LABEL_125;
  v153->m_Items[2] = v174;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v153->m_Items[2], (int32_t)v174, v168, v169, v170, v171, v172, v173);
  v208 = v202;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v208);
  v181 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v153->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( (v153->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_125;
  v153->m_Items[3] = v181;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v153->m_Items[3], (int32_t)v181, v175, v176, v177, v178, v179, v180);
  v207 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v207);
  v188 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v153->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_126;
  }
  if ( LODWORD(v153->max_length) <= 4 )
    goto LABEL_125;
  v153->m_Items[4] = v188;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v153->m_Items[4], (int32_t)v188, v182, v183, v184, v185, v186, v187);
  v206 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(qword_5984348, &v206);
  v195 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_2213BB4(MasterData_object, v153->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_126:
      v201 = sub_2213D00(MasterData_object, v69);
      sub_2213BA0(v201, 0);
    }
  }
  if ( LODWORD(v153->max_length) <= 5 )
    goto LABEL_125;
  v153->m_Items[5] = v195;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v153->m_Items[5], (int32_t)v195, v189, v190, v191, v192, v193, v194);
  MasterData_object = (__int64)System_String__Format_75698016(v152, v153, 0);
  if ( !msgLabel )
    goto LABEL_124;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLb )
    goto LABEL_124;
  UILabel__set_text(confirmBtnLb, (System_String_o *)MasterData_object, 0);
  MasterData_object = (__int64)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  this->fields.state = 4;
  if ( !MasterData_object )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
  MasterData_object = (__int64)this->fields.defMsgInfo;
  if ( !MasterData_object )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 0, 0);
  MasterData_object = (__int64)this->fields.singleMsgInfo;
  if ( !MasterData_object )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  extraGiftEntList = this->fields.extraGiftEntList;
  if ( extraGiftEntList && extraGiftEntList->max_length )
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v197);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !MasterData_object )
    goto LABEL_124;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v199);
  v200 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v200, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v200, 0, 0, 0);
}


void SummonConfirmDlgComponent__OpenConfirmOnePayFree(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  int v8; // w8
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x22
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // [xsp+10h] [xbp-50h]
  int32_t GachaDailyMaxDrawNumResetAt; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_596CA0A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3903/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/);
    byte_596CA0A = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  v8 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  GachaDailyMaxDrawNumResetAt = 0;
  if ( !v8 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, title, callback);
    v7 = BalanceConfig_TypeInfo;
  }
  GachaDailyMaxDrawNumResetAt = v7->static_fields->GachaDailyMaxDrawNumResetAt;
  v11 = (Il2CppObject *)System_Int32__ToString((int32_t)&GachaDailyMaxDrawNumResetAt, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3903/*"CONFIRM_ONETIME_FREESUMMON_CAMPAIGN_MSG"*/, 0);
  v13 = System_String__Format(v12, v11, 0);
  this->fields.state = 9;
  SummonConfirmDlgComponent__Open(this, title, v13, 0, callback, 35.0, 0, 0, 0, 0, 0, v14);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x29
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // x28
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x28
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x28
  System_String_o *v50; // x26
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  Il2CppObject *v57; // x25
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  SummonConfirmDlgComponent_c *v62; // x0
  __int64 v63; // x0
  const MethodInfo *v64; // [xsp+10h] [xbp-80h]
  int32_t v66; // [xsp+20h] [xbp-70h] BYREF
  int32_t v67; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v68; // [xsp+28h] [xbp-68h] BYREF
  int32_t v69; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_596CA08 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&StringLiteral_3905/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_596CA08 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&havePointNum, *(_QWORD *)&gachaTime);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3905/*"CONFIRM_POINTSUMMON_MSG"*/, 0);
  v18 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
  v69 = needPointNum;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v69);
  if ( !v18 )
    sub_2213CDC(v19, v20);
  v27 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( !LODWORD(v18->max_length) )
    goto LABEL_23;
  v18->m_Items[0] = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v18->m_Items, (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v68 = gachaTime;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v68);
  v35 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( (v18->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_23;
  v18->m_Items[1] = v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[1], (int32_t)v35, v29, v30, v31, v32, v33, v34);
  v67 = havePointNum;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v67);
  v42 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
      goto LABEL_24;
  }
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_23;
  v18->m_Items[2] = v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[2], (int32_t)v42, v36, v37, v38, v39, v40, v41);
  v66 = afterPointNum;
  v19 = j_il2cpp_value_box_0(qword_5984348, &v66);
  v49 = (Il2CppObject *)v19;
  if ( v19 )
  {
    v19 = sub_2213BB4(v19, v18->obj.klass->_1.element_class);
    if ( !v19 )
    {
LABEL_24:
      v63 = sub_2213D00(v19, v28);
      sub_2213BA0(v63, 0);
    }
  }
  if ( (v18->max_length & 0xFFFFFFFC) == 0 )
LABEL_23:
    sub_2213CE4(v19);
  v18->m_Items[3] = v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[3], (int32_t)v49, v43, v44, v45, v46, v47, v48);
  v50 = System_String__Format_75698016(v17, v18, 0);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0) )
  {
    v69 = needPointNum;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v69);
    v68 = havePointNum;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v68);
    v67 = afterPointNum;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v67);
    v50 = System_String__Format_75697948(summonConfirmMessage, v57, v58, v59, 0);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v62 = SummonConfirmDlgComponent_TypeInfo;
  if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v60, v61);
    v62 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0,
    v50,
    0,
    callback,
    v62->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0,
    0,
    0,
    0,
    gachaSubEntity,
    v64);
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
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x26
  System_String_o **v32; // x8
  System_Object_array *v33; // x27
  __int64 addMsgBgSprite; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x20
  __int64 v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  Il2CppObject *v57; // x20
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  Il2CppObject *v71; // x20
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x20
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  Il2CppObject *v85; // x20
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  Il2CppObject *v92; // x20
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int32_t v99; // w21
  __int64 v100; // x1
  __int64 v101; // x2
  System_String_o *v102; // x29
  System_String_o *v103; // x20
  __int64 v104; // x1
  __int64 v105; // x2
  System_String_o *v106; // x20
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  System_String_o *v109; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v111; // x0
  System_String_o *v112; // x27
  Il2CppObject *v113; // x0
  System_String_o *v114; // x0
  GachaDetailEntity_o *v115; // x29
  __int64 v116; // x1
  __int64 v117; // x2
  System_String_o *v118; // x20
  Il2CppObject *v119; // x24
  Il2CppObject *v120; // x0
  System_String_o *v121; // x25
  System_String_o *v122; // x24
  System_Object_array *v123; // x20
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  Il2CppObject *v130; // x22
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  Il2CppObject *v137; // x21
  System_String_o *v138; // x2
  System_String_o *v139; // x3
  int32_t v140; // w4
  int32_t v141; // w5
  bool v142; // w6
  bool v143; // w7
  Il2CppObject *v144; // x21
  System_String_o *v145; // x2
  System_String_o *v146; // x3
  int32_t v147; // w4
  int32_t v148; // w5
  bool v149; // w6
  bool v150; // w7
  Il2CppObject *v151; // x21
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  Il2CppObject *v158; // x21
  System_String_o *v159; // x2
  System_String_o *v160; // x3
  int32_t v161; // w4
  int32_t v162; // w5
  bool v163; // w6
  bool v164; // w7
  Il2CppObject *v165; // x22
  System_String_o *v166; // x20
  System_String_o *ConfirmBonusSelectSummonLowMsg; // x0
  __int64 v168; // x1
  __int64 v169; // x2
  UnityEngine_Object_o *bonusSelectMsgInfo; // x24
  System_String_o *v171; // x22
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x24
  __int64 v173; // x1
  __int64 v174; // x2
  UnityEngine_Transform_o *transform; // x29
  Il2CppObject *Component_object; // x0
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  __int64 v183; // x1
  __int64 v184; // x2
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v186; // x3
  __int64 v187; // x0
  const MethodInfo *v188; // [xsp+10h] [xbp-D0h]
  System_String_o *titlea; // [xsp+28h] [xbp-B8h]
  int32_t v190; // [xsp+40h] [xbp-A0h]
  int32_t v194; // [xsp+50h] [xbp-90h] BYREF
  int32_t v195; // [xsp+54h] [xbp-8Ch] BYREF
  int32_t v196; // [xsp+58h] [xbp-88h] BYREF
  int32_t v197; // [xsp+5Ch] [xbp-84h] BYREF
  int32_t v198; // [xsp+60h] [xbp-80h] BYREF
  int32_t v199; // [xsp+64h] [xbp-7Ch] BYREF
  int32_t v200; // [xsp+68h] [xbp-78h] BYREF
  int32_t v201; // [xsp+6Ch] [xbp-74h] BYREF
  System_String_o *defaultText; // [xsp+70h] [xbp-70h] BYREF
  System_String_o *resultText; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_596CA06 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12958/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_3886/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_2213A60(&StringLiteral_3882/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_2213A60(&StringLiteral_3904/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_2213A60(&StringLiteral_3883/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_2213A60(&StringLiteral_13003/*"SUMMON_WARNING_MESSAGE_501"*/);
    sub_2213A60(&StringLiteral_13001/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12988/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_2213A60(&StringLiteral_3907/*"CONFIRM_SUMMON_MESSAGE_{0}"*/);
    sub_2213A60(&StringLiteral_13004/*"SUMMON_WARNING_MESSAGE_{0}"*/);
    sub_2213A60(&StringLiteral_12948/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_2213A60(&StringLiteral_3885/*"CONFIRM_CHARGESUMMON_MSG"*/);
    sub_2213A60(&StringLiteral_3906/*"CONFIRM_SUMMON_MESSAGE_501"*/);
    byte_596CA06 = 1;
  }
  resultText = 0;
  defaultText = 0;
  this->fields.extraGiftEntList = giftEntList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.extraGiftEntList,
    (int32_t)giftEntList,
    *(System_String_o **)&type,
    *(System_String_o **)&price,
    num,
    haveStoneNum,
    haveFreeStoneNum,
    haveChargeStoneNum);
  if ( privilegeGachaTextId < 1 )
  {
    if ( isAppendSummon )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
      v32 = (System_String_o **)&StringLiteral_3886/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
      v32 = (System_String_o **)&StringLiteral_3885/*"CONFIRM_CHARGESUMMON_MSG"*/;
      if ( type != 7 )
        v32 = (System_String_o **)&StringLiteral_3904/*"CONFIRM_PAYSUMMON_MSG"*/;
    }
    v31 = LocalizationManager__Get(*v32, 0);
    resultText = v31;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
    resultText = LocalizationManager__Get((System_String_o *)StringLiteral_3906/*"CONFIRM_SUMMON_MESSAGE_501"*/, 0);
    v201 = privilegeGachaTextId;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v201);
    v30 = System_String__Format((System_String_o *)StringLiteral_3907/*"CONFIRM_SUMMON_MESSAGE_{0}"*/, v29, 0);
    LocalizationManager__TryGet(&resultText, v30, resultText, 0);
    v31 = resultText;
  }
  v33 = (System_Object_array *)sub_2213B20(object___TypeInfo, 9);
  v201 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v201);
  if ( !v33 )
    goto LABEL_102;
  v42 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( !LODWORD(v33->max_length) )
    goto LABEL_101;
  v33->m_Items[0] = v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v33->m_Items, (int32_t)v42, v36, v37, v38, v39, v40, v41);
  v200 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v200);
  v50 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( (v33->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_101;
  v33->m_Items[1] = v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[1], (int32_t)v50, v44, v45, v46, v47, v48, v49);
  v199 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v199);
  v57 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v33->max_length) <= 2 )
    goto LABEL_101;
  v33->m_Items[2] = v57;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[2], (int32_t)v57, v51, v52, v53, v54, v55, v56);
  v198 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v198);
  v64 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( (v33->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_101;
  v33->m_Items[3] = v64;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[3], (int32_t)v64, v58, v59, v60, v61, v62, v63);
  v197 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v197);
  v71 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  v190 = price;
  if ( LODWORD(v33->max_length) <= 4 )
    goto LABEL_101;
  v33->m_Items[4] = v71;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[4], (int32_t)v71, v65, v66, v67, v68, v69, v70);
  v196 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v196);
  v78 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v33->max_length) <= 5 )
    goto LABEL_101;
  v33->m_Items[5] = v78;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[5], (int32_t)v78, v72, v73, v74, v75, v76, v77);
  v195 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v195);
  v85 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v33->max_length) <= 6 )
    goto LABEL_101;
  v33->m_Items[6] = v85;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[6], (int32_t)v85, v79, v80, v81, v82, v83, v84);
  v194 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v194);
  v92 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( (v33->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_101;
  v33->m_Items[7] = v92;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[7], (int32_t)v92, v86, v87, v88, v89, v90, v91);
  v99 = num;
  if ( title )
  {
    addMsgBgSprite = sub_2213BB4(title, v33->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v33->max_length) <= 8 )
    goto LABEL_101;
  v33->m_Items[8] = (Il2CppObject *)title;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->m_Items[8], (int32_t)title, v93, v94, v95, v96, v97, v98);
  v102 = System_String__Format_75698016(v31, v33, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100, v101);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13001/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
  if ( !this->fields.addMsgBgSprite )
    goto LABEL_102;
  v103 = (System_String_o *)addMsgBgSprite;
  UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 434, 0);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_102;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 60, 0);
  if ( privilegeGachaTextId >= 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v104, v105);
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_12958/*"SUMMON_CHARGE_STONEPAY_WARNING_MSG"*/, 0);
    defaultText = LocalizationManager__Get((System_String_o *)StringLiteral_13003/*"SUMMON_WARNING_MESSAGE_501"*/, 0);
    v201 = privilegeGachaTextId;
    v107 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v201);
    v108 = System_String__Format((System_String_o *)StringLiteral_13004/*"SUMMON_WARNING_MESSAGE_{0}"*/, v107, 0);
    LocalizationManager__TryGet(&defaultText, v108, defaultText, 0);
    v109 = defaultText;
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v111 = System_String__Format_75697880(v109, (Il2CppObject *)title, DateTime, 0);
    addMsgBgSprite = (__int64)System_String__Concat_75651716(v106, v111, 0);
    if ( !this->fields.addMsgBgSprite )
      goto LABEL_102;
    v103 = (System_String_o *)addMsgBgSprite;
    UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 652, 0);
    addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
    if ( !addMsgBgSprite )
      goto LABEL_102;
    goto LABEL_59;
  }
  if ( isPickup )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v104, v105);
    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12988/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0);
    v113 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
    v114 = System_String__Format(v112, v113, 0);
    addMsgBgSprite = (__int64)System_String__Concat_75651716(v103, v114, 0);
    if ( this->fields.addMsgBgSprite )
    {
      v103 = (System_String_o *)addMsgBgSprite;
      UIWidget__set_width((UIWidget_o *)this->fields.addMsgBgSprite, 494, 0);
      addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
      if ( addMsgBgSprite )
      {
LABEL_59:
        UIWidget__set_height((UIWidget_o *)addMsgBgSprite, 76, 0);
        goto LABEL_60;
      }
    }
LABEL_102:
    sub_2213CDC(addMsgBgSprite, v35);
  }
LABEL_60:
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(this, title, v102, 0, callback, 14.0, v103, shopIdIdx, isAppendSummon, 0, 0, v188);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v104, v105);
  addMsgBgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaDetailMaster___);
  if ( !addMsgBgSprite )
    goto LABEL_102;
  addMsgBgSprite = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)addMsgBgSprite,
                              gachaId,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
  if ( !addMsgBgSprite )
    goto LABEL_102;
  v115 = (GachaDetailEntity_o *)addMsgBgSprite;
  titlea = GachaDetailEntity__GetConfirmBonusSelectSummonTitle((GachaDetailEntity_o *)addMsgBgSprite, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v116, v117);
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0);
  v201 = v190;
  v119 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v201);
  v200 = v99;
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v200);
  v121 = System_String__Format_75697880(v118, v119, v120, 0);
  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3883/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0);
  v123 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
  v199 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v199);
  if ( !v123 )
    goto LABEL_102;
  v130 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v123->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( !LODWORD(v123->max_length) )
    goto LABEL_101;
  v123->m_Items[0] = v130;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v123->m_Items, (int32_t)v130, v124, v125, v126, v127, v128, v129);
  v198 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v198);
  v137 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v123->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( (v123->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_101;
  v123->m_Items[1] = v137;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v123->m_Items[1], (int32_t)v137, v131, v132, v133, v134, v135, v136);
  v197 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v197);
  v144 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v123->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v123->max_length) <= 2 )
    goto LABEL_101;
  v123->m_Items[2] = v144;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v123->m_Items[2], (int32_t)v144, v138, v139, v140, v141, v142, v143);
  v196 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v196);
  v151 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v123->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( (v123->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_101;
  v123->m_Items[3] = v151;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v123->m_Items[3], (int32_t)v151, v145, v146, v147, v148, v149, v150);
  v195 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v195);
  v158 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v123->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_103;
  }
  if ( LODWORD(v123->max_length) <= 4 )
    goto LABEL_101;
  v123->m_Items[4] = v158;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v123->m_Items[4], (int32_t)v158, v152, v153, v154, v155, v156, v157);
  v194 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(qword_5984348, &v194);
  v165 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_2213BB4(addMsgBgSprite, v123->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_103:
      v187 = sub_2213D00(addMsgBgSprite, v43);
      sub_2213BA0(v187, 0);
    }
  }
  if ( LODWORD(v123->max_length) <= 5 )
LABEL_101:
    sub_2213CE4(addMsgBgSprite);
  v123->m_Items[5] = v165;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v123->m_Items[5], (int32_t)v165, v159, v160, v161, v162, v163, v164);
  v166 = System_String__Format_75698016(v122, v123, 0);
  ConfirmBonusSelectSummonLowMsg = GachaDetailEntity__GetConfirmBonusSelectSummonLowMsg(v115, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v171 = ConfirmBonusSelectSummonLowMsg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v168, v169);
  addMsgBgSprite = UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
  if ( (addMsgBgSprite & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_102;
    addMsgBgSprite = (__int64)this->fields.baseWindow;
    if ( !addMsgBgSprite )
      goto LABEL_102;
    MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)addMsgBgSprite, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v173, v174);
    addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__59717116(
                                MsgInfoPrefab_k__BackingField,
                                transform,
                                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    if ( !addMsgBgSprite )
      goto LABEL_102;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)addMsgBgSprite,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    this->fields.bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bonusSelectMsgInfo,
      (int32_t)Component_object,
      v177,
      v178,
      v179,
      v180,
      v181,
      v182);
  }
  addMsgBgSprite = (__int64)this->fields.bonusSelectMsgInfo;
  if ( !addMsgBgSprite )
    goto LABEL_102;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titlea,
    v121,
    v166,
    v171,
    tryGetBonusSelectData,
    assetManager,
    0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v183, v184);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_102;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0);
  v186 = LocalizationManager__Get((System_String_o *)StringLiteral_12948/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
  SummonConfirmDlgComponent__Open(this, 0, 0, v186, callback, 14.0, 0, shopIdIdx, 0, 1, 0, v188);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenConfirmTicket(
        SummonConfirmDlgComponent_o *this,
        System_String_o *title,
        int32_t num,
        int32_t haveTicketNum,
        int32_t afterTicketNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v13; // w8
  System_String_o *v14; // x24
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x25
  Il2CppObject *v19; // x24
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // [xsp+10h] [xbp-60h]
  int32_t v23; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v24; // [xsp+28h] [xbp-48h] BYREF
  int32_t v25; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_596CA07 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3909/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_2213A60(&StringLiteral_3910/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA07 = 1;
  }
  v13 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( num == 1 )
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, title, *(_QWORD *)&num);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3909/*"CONFIRM_TICKETSUMMON_MSG"*/, 0);
    v25 = haveTicketNum;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
    v24 = afterTicketNum;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
    v17 = System_String__Format_75697880(v14, v15, v16, 0);
  }
  else
  {
    if ( !v13 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, title, *(_QWORD *)&num);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3910/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0);
    v25 = num;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
    v24 = haveTicketNum;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
    v23 = afterTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
    v17 = System_String__Format_75697948(v18, v19, v20, v21, 0);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v17, 0, callback, 14.0, 0, 0, 0, 0, 0, v22);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenShortChargeStone(
        SummonConfirmDlgComponent_o *this,
        int32_t price,
        int32_t haveChargeStoneNum,
        int32_t haveFreeStoneNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v10; // x21
  System_String_o *v11; // x24
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  System_String_o *v16; // x0
  const MethodInfo *v17; // [xsp+10h] [xbp-70h]
  int32_t v18; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v19; // [xsp+28h] [xbp-58h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-54h] BYREF

  v20 = haveFreeStoneNum;
  if ( (byte_596CA02 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12890/*"STONE_PURCHASE"*/);
    sub_2213A60(&StringLiteral_12702/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CA02 = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&price, *(_QWORD *)&haveChargeStoneNum);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SHORT_HAVE_CHARGE_STONE"*/, 0);
  v19 = price;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
  v18 = haveChargeStoneNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
  v14 = (Il2CppObject *)System_Int32__ToString_77138656((int32_t)&v20, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  v15 = System_String__Format_75697948(v11, v12, v13, v14, 0);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12890/*"STONE_PURCHASE"*/, 0);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v10, v15, v16, callback, 14.0, 0, 0, 0, 0, 0, v17);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // [xsp+10h] [xbp-40h]
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_596CA05 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12703/*"SHORT_HAVE_POINT"*/);
    sub_2213A60(&StringLiteral_12701/*"SHORT_DLG_TITLE"*/);
    byte_596CA05 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&havePoint, callback);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12701/*"SHORT_DLG_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12703/*"SHORT_HAVE_POINT"*/, 0);
  v12 = havePoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  v10 = System_String__Format(v8, v9, 0);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v7, v10, 0, callback, 14.0, 0, 0, 0, 0, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveFreeStone,
        int32_t haveChargeStone,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v9; // x23
  System_String_o *v10; // x24
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  const MethodInfo *v15; // [xsp+10h] [xbp-60h]
  int32_t v16; // [xsp+28h] [xbp-48h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_596CA01 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12890/*"STONE_PURCHASE"*/);
    sub_2213A60(&StringLiteral_12704/*"SHORT_HAVE_STONE"*/);
    sub_2213A60(&StringLiteral_12701/*"SHORT_DLG_TITLE"*/);
    byte_596CA01 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&haveFreeStone, *(_QWORD *)&haveChargeStone);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12701/*"SHORT_DLG_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12704/*"SHORT_HAVE_STONE"*/, 0);
  v17 = haveChargeStone;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
  v16 = haveFreeStone;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
  v13 = System_String__Format_75697880(v10, v11, v12, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12890/*"STONE_PURCHASE"*/, 0);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v9, v13, v14, callback, 14.0, 0, 0, 0, 0, 0, v15);
}


void SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v8; // x1
  __int64 v9; // x2
  int32_t klass; // w21
  BalanceConfig_c *v11; // x8
  const MethodInfo_387FC04 *v12; // x1
  Il2CppObject *object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *titleLabel; // x21
  int32_t *v17; // x20
  System_String_o **v18; // x9
  System_String_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *messageLabel; // x21
  System_String_o **v23; // x8
  System_String_o *v24; // x22
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v28; // x0
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__80_0; // x22
  Il2CppObject *v31; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x2
  __int64 i; // x28
  unsigned int v41; // w21
  struct ItemIconComponent_array *v42; // x8
  struct UILabel_array *extraMessageLabels; // x9
  ItemIconComponent_o *v44; // x23
  int32_t *v45; // x22
  UILabel_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  SummonConfirmDlgComponent_c *v49; // x0
  System_String_o *v50; // x0
  int32_t v51; // w8
  System_String_o *v52; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v54; // x0
  int32_t v55; // w8
  System_String_o *v56; // x22
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596CA10 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ItemIconComponent__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_2213A60(&Method_System_Linq_Enumerable_First_GiftEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__);
    sub_2213A60(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_12959/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12961/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_2213A60(&StringLiteral_12962/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_2213A60(&StringLiteral_12964/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_2213A60(&StringLiteral_12963/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_2213A60(&StringLiteral_12960/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/);
    byte_596CA10 = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( bonusType == 2 )
  {
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    this->fields.isGetBonus = 1;
    v28 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !*(&SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo, v8, v9);
      v28 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__80_0 = (System_Action_object__o *)static_fields->__9__80_0;
    if ( !_9__80_0 )
    {
      if ( !*(&v28->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v28, v8, v9);
        static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__80_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__80_0, v31, Method_SummonConfirmDlgComponent___c__SetBonusText_b__80_0__, 0);
      v32 = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      v32->__9__80_0 = (struct System_Action_ItemIconComponent__o *)_9__80_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__80_0, (int32_t)_9__80_0, v33, v34, v35, v36, v37, v38);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__80_0,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 4; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v8, v39);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      v41 = i - 4;
      if ( (int)i - 4 >= *(_DWORD *)(SelfUserGame[7].fields.m_CachedPtr + 60) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( (signed int)v41 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v41,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v42 = this->fields.extraItemIconComponents;
      if ( !v42 )
        goto LABEL_59;
      if ( v41 >= LODWORD(v42->max_length) )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v41 >= LODWORD(extraMessageLabels->max_length) )
LABEL_60:
        sub_2213CE4(SelfUserGame);
      v44 = (ItemIconComponent_o *)*((_QWORD *)&v42->obj.klass + i);
      if ( !v44 )
        goto LABEL_59;
      v45 = (int32_t *)SelfUserGame;
      v46 = (UILabel_o *)*((_QWORD *)&extraMessageLabels->obj.klass + i);
      SelfUserGame = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)&v42->obj.klass + i), 0);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0);
      if ( !v45 )
        goto LABEL_59;
      ItemIconComponent__SetGift_47884936(v44, v45[5], v45[6], v45[7], 0, 0);
      if ( (_DWORD)i - 3 == giftEntities->fields._size )
        goto LABEL_63;
      v49 = SummonConfirmDlgComponent_TypeInfo;
      if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v47, v48);
        v49 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( (_DWORD)i - 3 == v49->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12959/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0);
        v51 = v45[7];
        v52 = v50;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v51, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v52, NumberFormat, 0);
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12960/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0);
        v55 = v45[7];
        v56 = v54;
        v57 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v55, 0);
        v58 = System_String__Format(v56, v57, 0);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_75651716(
                                                     v58,
                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                     0);
      }
      v8 = SelfUserGame;
      if ( !v46 )
        goto LABEL_59;
      UILabel__set_text(v46, (System_String_o *)SelfUserGame, 0);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v39);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12962/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0);
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
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_GiftEntity___;
  this->fields.isGetBonus = klass < v11->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_((System_Collections_Generic_IEnumerable_TSource__o *)giftEntities, v12);
  titleLabel = this->fields.titleLabel;
  v17 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v18 = (System_String_o **)&StringLiteral_12961/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v18 = (System_String_o **)&StringLiteral_12964/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v19 = *v18;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19, 0);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0);
  messageLabel = this->fields.messageLabel;
  v23 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12959/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12963/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v24 = *v23;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v24, 0);
  if ( !v17
    || (v25 = (System_String_o *)SelfUserGame,
        v60 = v17[7],
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v60),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0) )
  {
LABEL_59:
    sub_2213CDC(SelfUserGame, v8);
  }
  ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)SelfUserGame, v17[5], v17[6], v17[7], 0, 0);
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
  float v14; // s8
  int v15; // w21
  UnityEngine_GameObject_o *v16; // x0
  int v17; // w8
  unsigned int localPosition; // s0

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
  v14 = *(float *)&localPosition;
  v15 = v7 + mWidth + addMsgBgSprite;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v16, (float)(v14 + (float)(v8 >> 1)) + (float)(v11 >> 1), 0);
  v17 = v15 >= 0 ? v15 : v15 + 1;
  GameObjectExtensions__SetLocalPositionX(v5->fields.bonusMsgInfo, (float)(v10 - (v17 >> 1)), 0);
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
    sub_2213CDC(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


void SummonConfirmDlgComponent__SetExtraTextPos(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonConfirmDlgComponent_o *v3; // x19
  struct UILabel_o *extraTitleLabel; // x8
  __int64 v5; // x24
  float v6; // s10
  float v7; // s9
  float v8; // s12
  unsigned int v9; // w20
  struct ItemIconComponent_array *extraItemIconComponents; // x8
  struct UILabel_array *extraMessageLabels; // x8
  struct ItemIconComponent_array *v12; // x9
  __int64 v13; // x9
  __int64 v14; // x21
  __int64 v15; // x20
  int v16; // s14
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
  if ( (byte_596CA11 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    byte_596CA11 = 1;
  }
  extraTitleLabel = v3->fields.extraTitleLabel;
  if ( !extraTitleLabel )
    goto LABEL_27;
  v5 = 4;
  v6 = (float)extraTitleLabel->fields.mWidth * 0.5;
  v7 = v6;
  v8 = v6;
  while ( 1 )
  {
    this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, method, v2);
      this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    v9 = v5 - 4;
    if ( (int)v5 - 4 >= SLODWORD(this->fields.closeBtn->fields.pressed.fields.g) )
      break;
    extraItemIconComponents = v3->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v9 >= LODWORD(extraItemIconComponents->max_length) )
LABEL_28:
      sub_2213CE4(this);
    this = (SummonConfirmDlgComponent_o *)*((_QWORD *)&extraItemIconComponents->obj.klass + v5);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_27;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    extraMessageLabels = v3->fields.extraMessageLabels;
    if ( !extraMessageLabels )
      goto LABEL_27;
    if ( v9 >= LODWORD(extraMessageLabels->max_length) )
      goto LABEL_28;
    v12 = v3->fields.extraItemIconComponents;
    if ( !v12 )
      goto LABEL_27;
    if ( v9 >= LODWORD(v12->max_length) )
      goto LABEL_28;
    v13 = *((_QWORD *)&v12->obj.klass + v5);
    if ( !v13 )
      goto LABEL_27;
    v14 = *((_QWORD *)&extraMessageLabels->obj.klass + v5);
    if ( !v14 )
      goto LABEL_27;
    v15 = *(_QWORD *)(v13 + 40);
    UILabel__UpdateCondensedScaleComponent(*((UILabel_o **)&extraMessageLabels->obj.klass + v5), 0);
    if ( !v15 )
      goto LABEL_27;
    v16 = *(_DWORD *)(v14 + 168);
    v17 = (float)*(int *)(v15 + 168) * 0.5;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
    LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0);
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    GameObjectExtensions__SetLocalPositionX(v20, v7 + v17, 0);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
    v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v22, 0);
    GameObjectExtensions__SetLocalPositionX(v21, v17 + LocalPositionX, 0);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
    v25 = GameObjectExtensions__GetLocalPositionX(v24, 0);
    v26 = *(_DWORD *)(v14 + 168);
    v27 = v25;
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
    if ( !this )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
    if ( !this )
      goto LABEL_27;
    v7 = v27 + (float)v26;
    v8 = v8 + (float)(v17 + (float)((float)(LocalScaleX * (float)v16) * 0.5));
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    ++v5;
  }
  GameObjectExtensions__SetLocalPositionX(v3->fields.extraMsgInfo, v6 - v8, 0);
  this = (SummonConfirmDlgComponent_o *)v3->fields.extraTitleLabel;
  if ( !this
    || (this = (SummonConfirmDlgComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SummonConfirmDlgComponent_o *)v3->fields.extraMsgInfo) == 0) )
  {
LABEL_27:
    sub_2213CDC(this, method);
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
  System_Func_object__bool__o *v13; // x23
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  SummonConfirmDlgComponent___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__79_1; // x23
  Il2CppObject *v28; // x24
  struct SummonConfirmDlgComponent___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_ICollection_o *v37; // x22
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *bonusMsgInfo; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_GameObject_o *v45; // x22
  SummonConfirmDlgComponent_c *v46; // x0
  const MethodInfo *v47; // x1
  UnityEngine_Object_o *extraMsgInfo; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_GameObject_o *v51; // x22
  UnityEngine_Object_o *v52; // x23
  __int64 v53; // x2
  SummonConfirmDlgComponent_c *v54; // x0
  float *p_GROUP_BONUS_LABEL_POS_Y_2; // x8
  SummonConfirmDlgComponent_c *v56; // x0
  const MethodInfo *v57; // x1
  int v58; // w8
  bool v59; // nf

  if ( (byte_596CA0F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_2213A60(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_2213A60(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SummonConfirmDlgComponent_TypeInfo);
    sub_2213A60(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__);
    sub_2213A60(&Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__);
    sub_2213A60(&SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
    sub_2213A60(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_596CA0F = 1;
  }
  v5 = sub_2213CCC(SummonConfirmDlgComponent___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_51;
  state = this->fields.state;
  *(_DWORD *)(v5 + 16) = shopIdIdx;
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
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_51:
    sub_2213CDC(baseWindowSprite, v7);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  *(_DWORD *)(v5 + 20) = 1;
  do
  {
    v13 = *(System_Func_object__bool__o **)(v5 + 24);
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !v13 )
    {
      v13 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v13,
        (Il2CppObject *)v5,
        Method_SummonConfirmDlgComponent___c__DisplayClass79_0__SetGroupSummonBonusMsg_b__0__,
        0);
      *(_QWORD *)(v5 + 24) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v13, v15, v16, v17, v18, v19, v20);
    }
    v21 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v13,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v24 = SummonConfirmDlgComponent___c_TypeInfo;
    v25 = v21;
    if ( !*(&SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo, v22, v23);
      v24 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__79_1 = (System_Func_object__int__o *)static_fields->__9__79_1;
    if ( !_9__79_1 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v22, v23);
        static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__79_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__79_1,
        v28,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__79_1__,
        0);
      v29 = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      v29->__9__79_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__79_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__79_1, (int32_t)_9__79_1, v30, v31, v32, v33, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__79_1,
                                                                 (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v37 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v36,
                                                (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v37, 0);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v37,
                        0);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v5 + 20), v39);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 1 )
      {
        v45 = this->fields.bonusMsgInfo;
        v46 = SummonConfirmDlgComponent_TypeInfo;
        if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v43, v44);
          v46 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v45, v46->static_fields->GROUP_BONUS_LABEL_POS_Y, 0);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v47);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0, 0) && *(_DWORD *)(v5 + 20) == 2 )
      {
        v51 = this->fields.extraMsgInfo;
        v52 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
        if ( !UnityEngine_Object__op_Inequality(v52, 0, 0) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0) )
        {
          v54 = SummonConfirmDlgComponent_TypeInfo;
          if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v7, v53);
            v54 = SummonConfirmDlgComponent_TypeInfo;
          }
          p_GROUP_BONUS_LABEL_POS_Y_2 = &v54->static_fields->GROUP_BONUS_LABEL_POS_Y_2;
        }
        else
        {
LABEL_44:
          v56 = SummonConfirmDlgComponent_TypeInfo;
          if ( !*(&SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v7, v53);
            v56 = SummonConfirmDlgComponent_TypeInfo;
          }
          p_GROUP_BONUS_LABEL_POS_Y_2 = &v56->static_fields->GROUP_BONUS_LABEL_POS_Y;
        }
        GameObjectExtensions__SetLocalPositionY(v51, *p_GROUP_BONUS_LABEL_POS_Y_2, 0);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v57);
      }
    }
    v58 = *(_DWORD *)(v5 + 20) + 1;
    v59 = *(_DWORD *)(v5 + 20) - 2 < 0;
    *(_DWORD *)(v5 + 20) = v58;
  }
  while ( v59 != __OFSUB__(v58, 3) );
  return 1;
}


void SummonConfirmDlgComponent__add_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SummonConfirmDlgComponent_o *v11; // x0
  SummonConfirmDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596C9FE & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_596C9FE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v6->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v7, v8);
  SummonConfirmDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void SummonConfirmDlgComponent__remove_callbackFunc(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  SummonConfirmDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596C9FF & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_596C9FF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (SummonConfirmDlgComponent_CallbackFunc_c *)v6->klass != SummonConfirmDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, SummonConfirmDlgComponent_CallbackFunc_TypeInfo, v7, v8);
  SummonConfirmDlgComponent__Init(v11, v12);
}


void SummonConfirmDlgComponent__setBtnInfoActive(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t v7; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_596CA0E & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12940/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_596CA0E = 1;
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
        sub_2213CDC(closeBtnObject, method);
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
  v7 = this->fields.state;
  if ( v7 == 8 || v7 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12940/*"SUMMON_AUTOSALE_BUTTON"*/, 0);
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
    sub_2213CDC(0, isTutorial);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))closeBtn->klass->vtable._5_set_isEnabled.methodPtr)(
    closeBtn,
    isTutorial,
    closeBtn->klass->vtable._5_set_isEnabled.method);
}


// local variable allocation has failed, the output may be wrong!
void SummonConfirmDlgComponent__settingResult(SummonConfirmDlgComponent_o *this, bool res, const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2

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
    sub_2213CDC(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_42185804(this, 0, v19);
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
  this->fields.invoke_impl = (intptr_t)sub_20064FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20064B4;
}


System_IAsyncResult_o *SummonConfirmDlgComponent_CallbackFunc__BeginInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
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
  return sub_2213A14(this, v9, callback, object);
}


void SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CA18 & 1) == 0 )
  {
    sub_2213A60(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_596CA18 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


int32_t SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__79_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}