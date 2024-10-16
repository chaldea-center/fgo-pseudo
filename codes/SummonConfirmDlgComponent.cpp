void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4AB2479 & 1) == 0 )
  {
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v1);
    byte_4AB2479 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_BC3920;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BC2F70;
  *(_QWORD *)&static_fields->BONUS_INFO_NOT_GET_POS_X = 0xC3230000C2F00000LL;
  *(_QWORD *)&static_fields->ADD_MSG_INFO_POS_Y_DEF = 0x2C2AC0000LL;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AB2478 & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB2478 = 1;
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
  if ( (byte_4AB2466 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&price);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_3049/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v10);
    sub_1BAB41C(&StringLiteral_424/*"#,0"*/, v11);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_4AB2466 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3049/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v24 = haveChargeStoneNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17);
  v19 = (Il2CppObject *)System_Int32__ToString_62853408((int32_t)&v25, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  v20 = System_String__Format_62062500(v14, v18, v19, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v20, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1BAB678(v20, v21);
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
  const MethodInfo *v54; // [xsp+10h] [xbp-80h]
  int32_t v55; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v56; // [xsp+28h] [xbp-68h] BYREF
  int32_t v57; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AB2467 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, callback);
    sub_1BAB41C(&int_TypeInfo, v17);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v18);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v19);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v20);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v21);
    sub_1BAB41C(&StringLiteral_12304/*"STONE_PURCHASE"*/, v22);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1BAB41C(&StringLiteral_3053/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v24);
    sub_1BAB41C(&StringLiteral_3054/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v25);
    byte_4AB2467 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3054/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3053/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v57 = haveStoneNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v28, v29, v30);
  v56 = haveChargeStoneNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v32, v33, v34);
  v55 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v36, v37, v38);
  baseWindow = System_String__Format_62062568(v27, v31, v35, v39, 0LL);
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__49579268(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v50,
            v51);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1BAB678(baseWindow, v41);
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
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v53, callback, 14.0, 0LL, 0, 0, 1, 0LL, v54);
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
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_33366316(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_33366316(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4AB2474 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent_EndClose__, v6);
    byte_4AB2474 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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

  if ( (byte_4AB2475 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB2475 = 1;
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
    sub_1BAB678(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v6, v7);
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

  if ( (byte_4AB2463 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1BAB41C(&StringLiteral_1/*""*/, v7);
    byte_4AB2463 = 1;
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
    sub_1BAB680(confirmTitleLabel, method);
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, 0, v21, v22);
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
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)confirmTitleLabel, method);
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
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v26);
    byte_4AB0691 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, v28);
    byte_4AB0691 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1BAB678(confirmTitleLabel, method);
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

  if ( (byte_4AB2476 & 1) == 0 )
  {
    sub_1BAB41C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent_OnClickSetting__, v3);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent_settingResult__, v4);
    byte_4AB2476 = 1;
  }
  v5 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BAB434(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v10 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1BAB668(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          v11),
        !autoSaleDlgInfo) )
  {
    sub_1BAB678(gameObject, v8);
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

  if ( (byte_4AB2477 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4676/*"ConfirmWindow/CloseButton"*/, method);
    sub_1BAB41C(&StringLiteral_4678/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v3);
    sub_1BAB41C(&StringLiteral_4674/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v4);
    byte_4AB2477 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42185032(transform, (System_String_o *)StringLiteral_4678/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42185032(v6, (System_String_o *)StringLiteral_4676/*"ConfirmWindow/CloseButton"*/, 0LL);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42185032(v7, (System_String_o *)StringLiteral_4674/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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
  int32_t v42; // w3
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
  int32_t v75; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  SummonConfirmDlgComponent___c_c *v77; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x25
  System_Func_object__int__o *_9__74_1; // x26
  Il2CppObject *v80; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  int32_t v83; // w3
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

  if ( (byte_4AB246D & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, title);
    sub_1BAB41C(&Method_DataManager_GetMasterData_GiftMaster___, v21);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v22);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToList_int___, v23);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v24);
    sub_1BAB41C(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v25);
    sub_1BAB41C(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v26);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v27);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v28);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent_EndOpen__, v30);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v31);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent___c__Open_b__74_1__, v32);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent___c__DisplayClass74_0__Open_b__0__, v33);
    sub_1BAB41C(&SummonConfirmDlgComponent___c__DisplayClass74_0_TypeInfo, v34);
    sub_1BAB41C(&SummonConfirmDlgComponent___c_TypeInfo, v35);
    sub_1BAB41C(&StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, v36);
    sub_1BAB41C(&StringLiteral_1/*""*/, v37);
    byte_4AB246D = 1;
  }
  v38 = sub_1BAB668(SummonConfirmDlgComponent___c__DisplayClass74_0_TypeInfo);
  SummonConfirmDlgComponent___c__DisplayClass74_0___ctor((SummonConfirmDlgComponent___c__DisplayClass74_0_o *)v38, 0LL);
  if ( !v38 )
    goto LABEL_136;
  *(_DWORD *)(v38 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v41, v42);
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v55 )
      goto LABEL_136;
    UILabel__set_text(v55, decideTxt, 0LL);
  }
  v56 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v38 + 20) = 1;
      v70 = (GiftMaster_o *)MasterData_object;
      v71 = (System_Func_object__bool__o **)(v38 + 24);
      while ( 1 )
      {
        v72 = *v71;
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v71 )
        {
          v72 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v72,
            (Il2CppObject *)v38,
            Method_SummonConfirmDlgComponent___c__DisplayClass74_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v38 + 24) = v72;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)v72, v74, v75);
        }
        v76 = System_Linq_Enumerable__Where_object_(
                v73,
                (System_Func_TSource__bool__o *)v72,
                (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v77 = SummonConfirmDlgComponent___c_TypeInfo;
        v78 = v76;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v77 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__74_1 = (System_Func_object__int__o *)v77->static_fields->__9__74_1;
        if ( !_9__74_1 )
        {
          if ( !v77->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v77);
            v77 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v77->static_fields->__9;
          _9__74_1 = (System_Func_object__int__o *)sub_1BAB668(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__74_1, v80, Method_SummonConfirmDlgComponent___c__Open_b__74_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__74_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__74_1;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__74_1, (int32_t)_9__74_1, v82, v83);
        }
        v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v78,
                                                                     (System_Func_TSource__TResult__o *)_9__74_1,
                                                                     (const MethodInfo_2EF3A3C *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v85 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v84,
                                                    (const MethodInfo_2F00798 *)Method_System_Linq_Enumerable_ToList_int___);
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
    sub_1BAB678(gameObject, v40);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v103);
  v104 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_4AB246F & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent_EndOpen__, v7);
    byte_4AB246F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1BAB678(gameObject, v9);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  int32_t v41; // w3
  SummonConfirmDlgComponent_c *v42; // x0
  System_String_o *v43; // x0
  const MethodInfo *v44; // [xsp+10h] [xbp-80h]
  int32_t v45; // [xsp+20h] [xbp-70h] BYREF
  int32_t v46; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v47; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4AB246C & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, callback);
    sub_1BAB41C(&int_TypeInfo, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v11);
    sub_1BAB41C(&UserGachaMaster_TypeInfo, v12);
    sub_1BAB41C(&StringLiteral_3815/*"CONFIRM_FREESUMMON_MSG"*/, v13);
    sub_1BAB41C(&StringLiteral_3814/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v14);
    sub_1BAB41C(&StringLiteral_6523/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v15);
    byte_4AB246C = 1;
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
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3815/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v29 = System_String__Format(v43, v19, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v21 )
    goto LABEL_18;
LABEL_11:
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3814/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v47 = maxNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v23, v24, v25);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62062500(v22, v19, v26, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v29 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6523/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v46 = remainNum;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v32, v33, v34);
  v45 = maxNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62062500(v31, v35, v39, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1BAB678(gameObject, v28);
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
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
  long double v36; // q0
  __int64 v37; // x0
  __int64 v38; // x0
  void *MasterData_object; // x0
  GachaEntity_array *GachaDataInGroup; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  void *v43; // x28
  __int64 v44; // x8
  int v45; // w24
  int max_length; // w21
  GachaEntity_o *v47; // x8
  GachaEntity_o *v48; // x9
  Il2CppObject *name; // x21
  Il2CppObject *v50; // x20
  UILabel_o *infoMsgLabel; // x27
  int32_t v52; // w25
  System_String_o *v53; // x28
  int32_t v54; // w2
  int32_t v55; // w3
  System_Object_array *v56; // x29
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x20
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Int32_c *v68; // x0
  int32_t *v69; // x1
  Il2CppObject *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x20
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x20
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x20
  UILabel_o *msgLabel; // x26
  System_String_o *v89; // x27
  System_Object_array *v90; // x28
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  int32_t v94; // w2
  int32_t v95; // w3
  Il2CppObject *v96; // x20
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  int32_t v100; // w2
  int32_t v101; // w3
  Il2CppObject *v102; // x20
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  int32_t v106; // w2
  int32_t v107; // w3
  Il2CppObject *v108; // x20
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  int32_t v112; // w2
  int32_t v113; // w3
  Il2CppObject *v114; // x20
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  int32_t v118; // w2
  int32_t v119; // w3
  Il2CppObject *v120; // x20
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  int32_t v124; // w2
  int32_t v125; // w3
  Il2CppObject *v126; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x1
  System_Action_o *v130; // x20
  __int64 v131; // x0
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+0h] [xbp-90h]
  int32_t v133; // [xsp+Ch] [xbp-84h]
  int32_t v134; // [xsp+10h] [xbp-80h]
  int32_t v135; // [xsp+14h] [xbp-7Ch]
  int32_t v136; // [xsp+18h] [xbp-78h] BYREF
  int32_t v137; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v138; // [xsp+20h] [xbp-70h] BYREF
  int32_t v139; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v140; // [xsp+28h] [xbp-68h] BYREF
  int v141; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4AB246E & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&groupId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21);
    sub_1BAB41C(&Method_DataManager_GetMasterData_GachaMaster___, v22);
    sub_1BAB41C(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v23);
    sub_1BAB41C(&int_TypeInfo, v24);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v25);
    sub_1BAB41C(&object___TypeInfo, v26);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v27);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent_EndOpen__, v29);
    sub_1BAB41C(&StringLiteral_3819/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v30);
    sub_1BAB41C(&StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_1BAB41C(&StringLiteral_3817/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v32);
    sub_1BAB41C(&StringLiteral_1/*""*/, v33);
    sub_1BAB41C(&StringLiteral_3818/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v34);
    byte_4AB246E = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, price, haveStoneNum);
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1BFD2F8(v36);
  v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1BFD2F8(v36);
  MasterData_object = **(void ***)(v38 + 184);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_84;
  v134 = haveFreeStoneNum;
  v135 = haveStoneNum;
  v133 = afterStoneNum;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        groupId,
                        (const MethodInfo_3163D90 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v43 = MasterData_object;
  if ( !MasterData_object )
    goto LABEL_15;
  v44 = *((_QWORD *)MasterData_object + 4);
  if ( !v44 )
    goto LABEL_84;
  if ( *(_QWORD *)(v44 + 24) )
    v45 = *((_DWORD *)MasterData_object + 5);
  else
LABEL_15:
    v45 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, v41, v42);
  if ( !GachaDataInGroup )
    goto LABEL_84;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v47 = GachaDataInGroup->m_Items[0];
    if ( !v47 )
      goto LABEL_84;
    v48 = GachaDataInGroup->m_Items[1];
    if ( !v48 )
      goto LABEL_84;
    name = (Il2CppObject *)v47->fields.name;
    v50 = (Il2CppObject *)v48->fields.name;
    infoMsgLabel = this->fields.infoMsgLabel;
    v52 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3817/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
    MasterData_object = (void *)sub_1BAB4C4(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v56 = (System_Object_array *)MasterData_object;
    if ( name )
    {
      MasterData_object = (void *)sub_1BAB558(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v56->max_length )
      goto LABEL_85;
    v56->m_Items[0] = name;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v56->m_Items, (int32_t)name, v54, v55);
    if ( v50 )
    {
      MasterData_object = (void *)sub_1BAB558(v50, v56->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v56->max_length <= 1 )
      goto LABEL_85;
    v56->m_Items[1] = v50;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v56->m_Items[1], (int32_t)v50, v57, v58);
    v141 = v45;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v59, v60, v61);
    v64 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1BAB558(MasterData_object, v56->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v56->max_length <= 2 )
      goto LABEL_85;
    v56->m_Items[2] = v64;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v56->m_Items[2], (int32_t)v64, v62, v63);
    v68 = int_TypeInfo;
    v69 = &v140;
    v140 = price;
  }
  else
  {
    if ( !v43 )
      goto LABEL_84;
    v70 = (Il2CppObject *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)v43 + 3), 0LL) )
      v70 = (Il2CppObject *)*((_QWORD *)v43 + 3);
    infoMsgLabel = this->fields.infoMsgLabel;
    v52 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3818/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
    MasterData_object = (void *)sub_1BAB4C4(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v56 = (System_Object_array *)MasterData_object;
    if ( v70 )
    {
      MasterData_object = (void *)sub_1BAB558(v70, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v56->max_length )
      goto LABEL_85;
    v56->m_Items[0] = v70;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v56->m_Items, (int32_t)v70, v71, v72);
    v141 = max_length;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v73, v74, v75);
    v78 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1BAB558(MasterData_object, v56->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v56->max_length <= 1 )
      goto LABEL_85;
    v56->m_Items[1] = v78;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v56->m_Items[1], (int32_t)v78, v76, v77);
    v140 = v45;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v79, v80, v81);
    v84 = (Il2CppObject *)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1BAB558(MasterData_object, v56->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v56->max_length <= 2 )
      goto LABEL_85;
    v56->m_Items[2] = v84;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v56->m_Items[2], (int32_t)v84, v82, v83);
    v68 = int_TypeInfo;
    v139 = price;
    v69 = &v139;
  }
  MasterData_object = (void *)j_il2cpp_value_box_0(v68, v69, v65, v66, v67);
  v87 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v56->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v56->max_length <= 3 )
    goto LABEL_85;
  v56->m_Items[3] = v87;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v56->m_Items[3], (int32_t)v87, v85, v86);
  MasterData_object = System_String__Format_62062636(v53, v56, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_84;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v90 = (System_Object_array *)sub_1BAB4C4(object___TypeInfo, 6LL);
  v141 = v135;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v91, v92, v93);
  if ( !v90 )
LABEL_84:
    sub_1BAB678(MasterData_object, v35);
  v96 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v90->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( !v90->max_length )
    goto LABEL_85;
  v90->m_Items[0] = v96;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v90->m_Items, (int32_t)v96, v94, v95);
  v140 = v52;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v97, v98, v99);
  v102 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v90->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v90->max_length <= 1 )
    goto LABEL_85;
  v90->m_Items[1] = v102;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v90->m_Items[1], (int32_t)v102, v100, v101);
  v139 = v134;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v103, v104, v105);
  v108 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v90->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v90->max_length <= 2 )
    goto LABEL_85;
  v90->m_Items[2] = v108;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v90->m_Items[2], (int32_t)v108, v106, v107);
  v138 = v133;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v109, v110, v111);
  v114 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v90->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v90->max_length <= 3 )
    goto LABEL_85;
  v90->m_Items[3] = v114;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v90->m_Items[3], (int32_t)v114, v112, v113);
  v137 = afterChargeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v137, v115, v116, v117);
  v120 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v90->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v90->max_length <= 4 )
    goto LABEL_85;
  v90->m_Items[4] = v120;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v90->m_Items[4], (int32_t)v120, v118, v119);
  v136 = afterFreeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v136, v121, v122, v123);
  v126 = (Il2CppObject *)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BAB558(MasterData_object, v90->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_86:
      v131 = sub_1BAB69C();
      sub_1BAB544(v131, 0LL);
    }
  }
  if ( v90->max_length <= 5 )
LABEL_85:
    sub_1BAB680(MasterData_object, v35);
  v90->m_Items[5] = v126;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v90->m_Items[5], (int32_t)v126, v124, v125);
  MasterData_object = System_String__Format_62062636(v89, v90, 0LL);
  if ( !msgLabel )
    goto LABEL_84;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v128);
  MasterData_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v129);
  v130 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v130, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v130, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenConfirmPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePointNum,
        int32_t needPointNum,
        int32_t afterPointNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        System_String_o *summonConfirmMessage,
        GachaSubEntity_o *gachaSubEntity,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *v18; // x27
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x28
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x29
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x26
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_String_o *v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  SummonConfirmDlgComponent_c *v46; // x0
  const MethodInfo *v47; // [xsp+10h] [xbp-90h]
  int32_t v50; // [xsp+34h] [xbp-6Ch] BYREF
  int32_t v51; // [xsp+38h] [xbp-68h] BYREF
  int32_t v52; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4AB246B & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&havePointNum);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v15);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v16);
    sub_1BAB41C(&StringLiteral_3822/*"CONFIRM_POINTSUMMON_MSG"*/, v17);
    byte_4AB246B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v52 = needPointNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v19, v20, v21);
  v51 = havePointNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v23, v24, v25);
  v50 = afterPointNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v27, v28, v29);
  System_String__Format_62062568(v18, v22, v26, v30, 0LL);
  if ( System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    summonConfirmMessage = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  }
  v52 = needPointNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v31, v32, v33);
  v51 = havePointNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v35, v36, v37);
  v50 = afterPointNum;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v39, v40, v41);
  v43 = System_String__Format_62062568(summonConfirmMessage, v34, v38, v42, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int32_t)autoSaleDialogCloseCallback,
    v44,
    v45);
  v46 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v46 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v43,
    0LL,
    callback,
    v46->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    gachaSubEntity,
    v47);
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
  long double v166; // q0
  _QWORD *v167; // x21
  System_String_o *v168; // x22
  __int64 v169; // x8
  __int64 v170; // x0
  __int64 v171; // x0
  System_String_o *v172; // x25
  System_String_o *v173; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v175; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v183; // x0
  __int64 v184; // x0
  const MethodInfo *isBonusSelect; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v186; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v191; // [xsp+40h] [xbp-80h] BYREF
  int32_t v192; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v193; // [xsp+48h] [xbp-78h] BYREF
  int32_t v194; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v195; // [xsp+50h] [xbp-70h] BYREF
  int32_t v196; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v197; // [xsp+58h] [xbp-68h] BYREF
  int32_t v198; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4AB2469 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_object___, title);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v27);
    sub_1BAB41C(&int_TypeInfo, v28);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v29);
    sub_1BAB41C(&object___TypeInfo, v30);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject____76537840, v31);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v32);
    sub_1BAB41C(&StringLiteral_3801/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v33);
    sub_1BAB41C(&StringLiteral_3807/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v34);
    sub_1BAB41C(&StringLiteral_3802/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v35);
    sub_1BAB41C(&StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v36);
    sub_1BAB41C(&StringLiteral_3821/*"CONFIRM_PAYSUMMON_MSG"*/, v37);
    sub_1BAB41C(&StringLiteral_3803/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v38);
    sub_1BAB41C(&StringLiteral_3804/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v39);
    sub_1BAB41C(&StringLiteral_12401/*"SUMMON_STONEPAY_WARNING_MSG"*/, v40);
    sub_1BAB41C(&StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, v41);
    sub_1BAB41C(&StringLiteral_12388/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v42);
    sub_1BAB41C(&StringLiteral_12353/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v43);
    sub_1BAB41C(&StringLiteral_3806/*"CONFIRM_CHARGESUMMON_MSG"*/, v44);
    byte_4AB2469 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.extraGiftEntList, (int32_t)giftEntList, type, price);
  titlea = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3807/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v45 = (System_String_o **)&StringLiteral_3821/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v45 = (System_String_o **)&StringLiteral_3806/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v46 = LocalizationManager__Get(*v45, 0LL);
  v47 = (System_Object_array *)sub_1BAB4C4(object___TypeInfo, 8LL);
  v198 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v198, v48, v49, v50);
  if ( !v47 )
    goto LABEL_107;
  v55 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v47->max_length )
    goto LABEL_105;
  v47->m_Items[0] = v55;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v55, v53, v54);
  v197 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v197, v56, v57, v58);
  v61 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_105;
  v47->m_Items[1] = v61;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[1], (int32_t)v61, v59, v60);
  v196 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v196, v62, v63, v64);
  v67 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_105;
  v47->m_Items[2] = v67;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[2], (int32_t)v67, v65, v66);
  v195 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v195, v68, v69, v70);
  v73 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_105;
  v47->m_Items[3] = v73;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[3], (int32_t)v73, v71, v72);
  v194 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v194, v74, v75, v76);
  v79 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_105;
  v47->m_Items[4] = v79;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[4], (int32_t)v79, v77, v78);
  v193 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v193, v80, v81, v82);
  v85 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_105;
  v47->m_Items[5] = v85;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[5], (int32_t)v85, v83, v84);
  v192 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v192, v86, v87, v88);
  v91 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_105;
  v47->m_Items[6] = v91;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[6], (int32_t)v91, v89, v90);
  v191 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v191, v92, v93, v94);
  v97 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v47->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_105;
  v47->m_Items[7] = v97;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v47->m_Items[7], (int32_t)v97, v95, v96);
  v98 = System_String__Format_62062636(v46, v47, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12388/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v102 = System_String__Format(v100, DateTime, 0LL);
    v99 = System_String__Concat_62048128(v99, v102, 0LL);
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
    SummonConfirmDlgComponent__Open(
      this,
      titlea,
      v98,
      0LL,
      callback,
      14.0,
      v99,
      shopIdIdx,
      isAppendSummon,
      0,
      0LL,
      v186);
    return;
  }
  v198 = gachaId;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v198, v105, v106, v107);
  v109 = System_String__Format((System_String_o *)StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v108, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v109, 0LL) )
  {
    v198 = gachaId;
    v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v198, v110, v111, v112);
    v114 = System_String__Format((System_String_o *)StringLiteral_3805/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v113, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v115 = v114;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v115 = (System_String_o *)StringLiteral_3804/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v115, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v198 = price;
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v198, v117, v118, v119);
  v197 = num;
  v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v197, v121, v122, v123);
  v125 = System_String__Format_62062500(v116, v120, v124, 0LL);
  v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v127 = (System_Object_array *)sub_1BAB4C4(object___TypeInfo, 6LL);
  v196 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v196, v128, v129, v130);
  if ( !v127 )
    goto LABEL_107;
  v133 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v127->max_length )
    goto LABEL_105;
  v127->m_Items[0] = v133;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v127->m_Items, (int32_t)v133, v131, v132);
  v195 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v195, v134, v135, v136);
  v139 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 1 )
    goto LABEL_105;
  v127->m_Items[1] = v139;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v127->m_Items[1], (int32_t)v139, v137, v138);
  v194 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v194, v140, v141, v142);
  v145 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 2 )
    goto LABEL_105;
  v127->m_Items[2] = v145;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v127->m_Items[2], (int32_t)v145, v143, v144);
  v193 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v193, v146, v147, v148);
  v151 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 3 )
    goto LABEL_105;
  v127->m_Items[3] = v151;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v127->m_Items[3], (int32_t)v151, v149, v150);
  v192 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v192, v152, v153, v154);
  v157 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v127->max_length <= 4 )
    goto LABEL_105;
  v127->m_Items[4] = v157;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v127->m_Items[4], (int32_t)v157, v155, v156);
  v191 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v191, v158, v159, v160);
  v163 = (Il2CppObject *)addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BAB558(addMsgBgSprite, v127->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v184 = sub_1BAB69C();
      sub_1BAB544(v184, 0LL);
    }
  }
  if ( v127->max_length <= 5 )
LABEL_105:
    sub_1BAB680(addMsgBgSprite, v52);
  v127->m_Items[5] = v163;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v127->m_Items[5], (int32_t)v163, v161, v162);
  v164 = System_String__Format_62062636(v126, v127, 0LL);
  v165 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v167 = Method_System_Array_Empty_object___;
  v168 = v165;
  v169 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v169 )
  {
    sub_1BFD354(Method_System_Array_Empty_object___);
    v169 = v167[7];
  }
  v170 = *(_QWORD *)(v169 + 16);
  if ( (*(_BYTE *)(v170 + 309) & 1) == 0 )
    v170 = sub_1BFD2F8(v166);
  if ( !*(_DWORD *)(v170 + 224) )
    *(__n128 *)&v166 = j_il2cpp_runtime_class_init_0(v170);
  v171 = *(_QWORD *)(v167[7] + 16LL);
  if ( (*(_BYTE *)(v171 + 309) & 1) == 0 )
    v171 = sub_1BFD2F8(v166);
  v172 = v125;
  v173 = System_String__Format_62062636(v168, **(System_Object_array ***)(v171 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v175 = v173;
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__49579268(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2F48504 *)Method_UnityEngine_Object_Instantiate_GameObject____76537840);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
            (int32_t)Component_object,
            v180,
            v181);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1BAB678(addMsgBgSprite, v52);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v172,
    v164,
    v175,
    tryGetBonusSelectData,
    assetManager,
    isBonusSelect);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3753/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v183 = LocalizationManager__Get((System_String_o *)StringLiteral_12353/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v183, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v186);
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

  if ( (byte_4AB246A & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, title);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v13);
    sub_1BAB41C(&StringLiteral_3823/*"CONFIRM_TICKETSUMMON_MSG"*/, v14);
    sub_1BAB41C(&StringLiteral_3824/*"CONFIRM_TICKETSUMMON_MSG2"*/, v15);
    sub_1BAB41C(&StringLiteral_1/*""*/, v16);
    byte_4AB246A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v43 = haveTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v18, v19, v20);
    v42 = afterTicketNum;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v22, v23, v24);
    v26 = System_String__Format_62062500(v17, v21, v25, 0LL);
  }
  else
  {
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v43 = num;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v28, v29, v30);
    v42 = haveTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v32, v33, v34);
    v41 = afterTicketNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v36, v37, v38);
    v26 = System_String__Format_62062568(v27, v31, v35, v39, 0LL);
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
  if ( (byte_4AB2465 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&price);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&StringLiteral_12304/*"STONE_PURCHASE"*/, v11);
    sub_1BAB41C(&StringLiteral_12133/*"SHORT_HAVE_CHARGE_STONE"*/, v12);
    sub_1BAB41C(&StringLiteral_424/*"#,0"*/, v13);
    sub_1BAB41C(&StringLiteral_1/*""*/, v14);
    byte_4AB2465 = 1;
  }
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v30 = price;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
  v29 = haveChargeStoneNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23);
  v25 = (Il2CppObject *)System_Int32__ToString_62853408((int32_t)&v31, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  v26 = System_String__Format_62062568(v16, v20, v24, v25, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"STONE_PURCHASE"*/, 0LL);
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

  if ( (byte_4AB2468 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&havePoint);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_12134/*"SHORT_HAVE_POINT"*/, v8);
    sub_1BAB41C(&StringLiteral_12132/*"SHORT_DLG_TITLE"*/, v9);
    byte_4AB2468 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SHORT_DLG_TITLE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SHORT_HAVE_POINT"*/, 0LL);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v10, v16, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v17);
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
  const MethodInfo *v19; // [xsp+10h] [xbp-50h]
  int32_t v20; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4AB2464 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&haveNum);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v7);
    sub_1BAB41C(&StringLiteral_12304/*"STONE_PURCHASE"*/, v8);
    sub_1BAB41C(&StringLiteral_12135/*"SHORT_HAVE_STONE"*/, v9);
    sub_1BAB41C(&StringLiteral_12132/*"SHORT_DLG_TITLE"*/, v10);
    byte_4AB2464 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SHORT_DLG_TITLE"*/, 0LL);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12135/*"SHORT_HAVE_STONE"*/, 0LL);
  v20 = haveNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15);
  v17 = System_String__Format(v12, v16, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_12304/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v11, v17, v18, callback, 14.0, 0LL, 0, 0, 0, 0LL, v19);
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
  System_Action_object__o *_9__79_0; // x22
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

  if ( (byte_4AB2472 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_ItemIconComponent__TypeInfo, giftEntities);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v7);
    sub_1BAB41C(&Method_BasicHelper_ForEach_ItemIconComponent___, v8);
    sub_1BAB41C(&Method_System_Linq_Enumerable_First_GiftEntity___, v9);
    sub_1BAB41C(&int_TypeInfo, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v13);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v14);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__79_0__, v15);
    sub_1BAB41C(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v17);
    sub_1BAB41C(&StringLiteral_12363/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v18);
    sub_1BAB41C(&StringLiteral_12365/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v19);
    sub_1BAB41C(&StringLiteral_12366/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v20);
    sub_1BAB41C(&StringLiteral_12368/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v21);
    sub_1BAB41C(&StringLiteral_12367/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v22);
    sub_1BAB41C(&StringLiteral_12364/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v23);
    byte_4AB2472 = 1;
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
    _9__79_0 = (System_Action_object__o *)v42->static_fields->__9__79_0;
    if ( !_9__79_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__79_0 = (System_Action_object__o *)sub_1BAB668(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__79_0, v44, Method_SummonConfirmDlgComponent___c__SetBonusText_b__79_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__79_0 = (struct System_Action_ItemIconComponent__o *)_9__79_0;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v46, v47);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__79_0,
      (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v49 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v49 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 60LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v49 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v49,
                                                   (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
        sub_1BAB680(SelfUserGame, v25);
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
      ItemIconComponent__SetGift_38524704((ItemIconComponent_o *)v52, v54[5], v54[6], v54[7], 0, 0LL);
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
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12363/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v57 = v54[7];
        v58 = v56;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v57, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v58, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12364/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v61 = v54[7];
        v62 = v60;
        v63 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v61, 0LL);
        v64 = System_String__Format(v62, v63, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_62048128(
                                                     v64,
                                                     (System_String_o *)StringLiteral_116/*" "*/,
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
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12366/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
             (const MethodInfo_2EE5674 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v30 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v31 = (System_String_o **)&StringLiteral_12365/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_12368/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v32 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v32, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v34 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12363/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12367/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
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
    sub_1BAB678(SelfUserGame, v25);
  }
  ItemIconComponent__SetGift_38524704((ItemIconComponent_o *)SelfUserGame, v30[5], v30[6], v30[7], 0, 0LL);
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
    sub_1BAB678(this, method);
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
  if ( (byte_4AB2473 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, method);
    byte_4AB2473 = 1;
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
    if ( (signed int)v5 >= SHIDWORD(this->fields.closeBtnLb->fields.topAnchor) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1BAB680(this, method);
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
    sub_1BAB678(this, method);
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
  System_Func_object__int__o *_9__78_1; // x24
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

  if ( (byte_4AB2471 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v7);
    sub_1BAB41C(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v8);
    sub_1BAB41C(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&SummonConfirmDlgComponent_TypeInfo, v12);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__78_1__, v13);
    sub_1BAB41C(&Method_SummonConfirmDlgComponent___c__DisplayClass78_0__SetGroupSummonBonusMsg_b__0__, v14);
    sub_1BAB41C(&SummonConfirmDlgComponent___c__DisplayClass78_0_TypeInfo, v15);
    sub_1BAB41C(&SummonConfirmDlgComponent___c_TypeInfo, v16);
    byte_4AB2471 = 1;
  }
  v17 = sub_1BAB668(SummonConfirmDlgComponent___c__DisplayClass78_0_TypeInfo);
  SummonConfirmDlgComponent___c__DisplayClass78_0___ctor((SummonConfirmDlgComponent___c__DisplayClass78_0_o *)v17, 0LL);
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
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1BAB678(baseWindowSprite, v19);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GiftMaster___);
  v25 = (System_Func_object__bool__o **)(v17 + 24);
  *(_DWORD *)(v17 + 20) = 1;
  do
  {
    v26 = *v25;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v25 )
    {
      v26 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v17,
        Method_SummonConfirmDlgComponent___c__DisplayClass78_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v17 + 24) = v26;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)v26, v28, v29);
    }
    v30 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_2F02B34 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v31 = SummonConfirmDlgComponent___c_TypeInfo;
    v32 = v30;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v31 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__78_1 = (System_Func_object__int__o *)v31->static_fields->__9__78_1;
    if ( !_9__78_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__78_1 = (System_Func_object__int__o *)sub_1BAB668(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__78_1,
        v34,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__78_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__78_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__78_1;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__78_1, (int32_t)_9__78_1, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v32,
                                                                 (System_Func_TSource__TResult__o *)_9__78_1,
                                                                 (const MethodInfo_2EF3A3C *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v39 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v38,
                                                (const MethodInfo_2EFCF54 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4AB2461 & 1) == 0 )
  {
    sub_1BAB41C(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4AB2461 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BAB938(v7);
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

  if ( (byte_4AB2462 & 1) == 0 )
  {
    sub_1BAB41C(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4AB2462 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BAB938(v7);
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

  if ( (byte_4AB2470 & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_12346/*"SUMMON_AUTOSALE_BUTTON"*/, v3);
    byte_4AB2470 = 1;
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
        sub_1BAB678(closeBtnObject, method);
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
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12346/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1BAB678(0LL, isTutorial);
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
  AutomaticSaleDlgComponent__Close_33285244(autoSaleDlgInfo, 0LL, method);
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
    sub_1BAB678(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.autoSaleDialogCloseCallbackFunc, 0, v9, v10);
    SummonConfirmDlgComponent__Close_33366316(this, 0LL, v11);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EAE00;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EADB8;
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
  if ( (byte_4AB247A & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, result);
    byte_4AB247A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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

  if ( (byte_4AB247B & 1) == 0 )
  {
    sub_1BAB41C(&SummonConfirmDlgComponent___c_TypeInfo, v1);
    byte_4AB247B = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall SummonConfirmDlgComponent___c___ctor(SummonConfirmDlgComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___Open_b__74_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BAB678(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c___SetBonusText_b__79_0(
        SummonConfirmDlgComponent___c_o *this,
        ItemIconComponent_o *obj,
        const MethodInfo *method)
{
  if ( !obj
    || (this = (SummonConfirmDlgComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)obj,
                                                    0LL)) == 0LL )
  {
    sub_1BAB678(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__78_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BAB678(this, 0LL);
  return entity->fields.giftId;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass74_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass74_0___Open_b__0(
        SummonConfirmDlgComponent___c__DisplayClass74_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BAB678(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}


void __fastcall SummonConfirmDlgComponent___c__DisplayClass78_0___ctor(
        SummonConfirmDlgComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SummonConfirmDlgComponent___c__DisplayClass78_0___SetGroupSummonBonusMsg_b__0(
        SummonConfirmDlgComponent___c__DisplayClass78_0_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BAB678(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}