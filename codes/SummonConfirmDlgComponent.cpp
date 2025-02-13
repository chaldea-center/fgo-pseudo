void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4BD8BA6 & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    byte_4BD8BA6 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_BFE940;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BFF310;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BD8BA5 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD8BA5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonConfirmDlgComponent__BonusSelectAfterOpenShortChargeStone(
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
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v19; // x4
  int32_t v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  v21 = haveFreeStoneNum;
  if ( (byte_4BD8B93 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3098/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_426/*"#,0"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4BD8B93 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3098/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v20 = haveChargeStoneNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v11, v12, v13);
  v15 = (Il2CppObject *)System_Int32__ToString_63921084((int32_t)&v21, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
  v16 = System_String__Format_63129848(v10, v14, v15, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v16, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1C22094(v16, v17);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v16, 0LL);
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
  System_String_o *v17; // x24
  System_String_o *v18; // x28
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x27
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x26
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  System_String_o *baseWindow; // x0
  __int64 v32; // x1
  System_String_o *v33; // x25
  UIWidget_o *baseWindowSprite; // x26
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v47; // x0
  const MethodInfo *v48; // [xsp+10h] [xbp-80h]
  int32_t v49; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v50; // [xsp+28h] [xbp-68h] BYREF
  int32_t v51; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BD8B94 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_12515/*"STONE_PURCHASE"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_3102/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_3103/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/);
    byte_4BD8B94 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3103/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3102/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v51 = haveStoneNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v19, v20, v21);
  v50 = haveChargeStoneNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v23, v24, v25);
  v49 = haveFreeStoneNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v27, v28, v29);
  baseWindow = System_String__Format_63129916(v18, v22, v26, v30, 0LL);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v33 = baseWindow;
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
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__50551272(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1C22094(baseWindow, v32);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v17,
    v33,
    tryGetBonusSelectData,
    assetManager,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12515/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v47, callback, 14.0, 0LL, 0, 0, 1, 0LL, v48);
}


void __fastcall SummonConfirmDlgComponent__Callback(
        SummonConfirmDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SummonConfirmDlgComponent_CallbackFunc_o *callbackFunc; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonConfirmDlgComponent__Close(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonConfirmDlgComponent__Close_34129316(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_34129316(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BD8BA1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SummonConfirmDlgComponent_EndClose__);
    byte_4BD8BA1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4BD8BA2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8BA2 = 1;
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
    sub_1C22094(gameObject, v4);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4BD8B90 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8B90 = 1;
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
    v6 = 0;
    while ( v6 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v6];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1C2209C(confirmTitleLabel, method);
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
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
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
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  v13 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v13 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v13->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v15, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.extraGiftEntList, 0LL, v16, v17, v18, v19, v20, v21);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v22,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v23,
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
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1C22094(confirmTitleLabel, method);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  AutomaticSaleDlgComponent_CallbackFunc_o *v8; // x21

  if ( (byte_4BD8BA3 & 1) == 0 )
  {
    sub_1C21E38(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SummonConfirmDlgComponent_OnClickSetting__);
    sub_1C21E38(&Method_SummonConfirmDlgComponent_settingResult__);
    byte_4BD8BA3 = 1;
  }
  v3 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v8 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1C22084(AutomaticSaleDlgComponent_CallbackFunc_TypeInfo),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          0LL),
        !autoSaleDlgInfo) )
  {
    sub_1C22094(gameObject, v6);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v8, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4BD8BA4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4773/*"ConfirmWindow/CloseButton"*/);
    sub_1C21E38(&StringLiteral_4775/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    sub_1C21E38(&StringLiteral_4771/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/);
    byte_4BD8BA4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(transform, (System_String_o *)StringLiteral_4775/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(v4, (System_String_o *)StringLiteral_4773/*"ConfirmWindow/CloseButton"*/, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43098604(v5, (System_String_o *)StringLiteral_4771/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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
  __int64 v21; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v31; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v37; // x27
  int32_t v38; // w25
  UILabel_o *v39; // x27
  UILabel_o *v40; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v42; // x25
  int32_t v43; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v48; // w0
  float v49; // s8
  int32_t v50; // w24
  float v51; // s9
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  GiftMaster_o *v57; // x22
  System_Func_object__bool__o **v58; // x24
  System_Func_object__bool__o *v59; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x25
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  SummonConfirmDlgComponent___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x25
  System_Func_object__int__o *_9__71_1; // x26
  Il2CppObject *v71; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Collections_ICollection_o *v80; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v82; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v84; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v86; // w8
  bool v87; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v92; // s0
  float v93; // s1
  float v94; // s8
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  bool v97; // w1
  const MethodInfo *v98; // x1
  System_Action_o *v99; // x20

  if ( (byte_4BD8B9A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C21E38(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&Method_SummonConfirmDlgComponent___c__Open_b__71_1__);
    sub_1C21E38(&Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__);
    sub_1C21E38(&SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8B9A = 1;
  }
  v21 = sub_1C22084(SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_136;
  *(_DWORD *)(v21 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v24, v25, v26, v27, v28, v29);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    if ( title )
      v31 = title;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v31, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v33 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v34, msgOffY, 0LL);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0LL);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0LL);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0LL);
      v37 = this->fields.confirmDetailLabel;
      v38 = (int)gameObject;
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
      if ( !v37 )
        goto LABEL_136;
      UILabel__set_spacingX(v37, SummonConfirmMessageSpacingX, 0LL);
      v39 = this->fields.confirmDetailLabel;
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
      if ( !v39 )
        goto LABEL_136;
      UILabel__set_spacingY(v39, SummonConfirmMessageSpacingY, 0LL);
      v40 = this->fields.confirmDetailLabel;
      if ( !v38 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v38 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      }
      if ( !v40 )
        goto LABEL_136;
      UILabel__set_fontSize(v40, v38, 0LL);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v42 = this->fields.confirmBtnLb;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      decideTxt = (System_String_o *)gameObject;
    }
    if ( !v42 )
      goto LABEL_136;
    UILabel__set_text(v42, decideTxt, 0LL);
  }
  v43 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v43 <= 2 )
    {
      v45 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v45 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v45->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v48 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v48 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v43 <= 2 )
      v49 = 54.0;
    else
      v49 = 43.0;
    if ( v43 <= 2 )
      v50 = 20;
    else
      v50 = 18;
    if ( !gameObject )
      goto LABEL_136;
    v51 = v43 <= 2 ? 188.0 : 178.0;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v52, v51, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v53, v49, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, v50, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v21 + 20) = 1;
      v57 = (GiftMaster_o *)MasterData_object;
      v58 = (System_Func_object__bool__o **)(v21 + 24);
      while ( 1 )
      {
        v59 = *v58;
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v58 )
        {
          v59 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v59,
            (Il2CppObject *)v21,
            Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v21 + 24) = v59;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)v59, v61, v62, v63, v64, v65, v66);
        }
        v67 = System_Linq_Enumerable__Where_object_(
                v60,
                (System_Func_TSource__bool__o *)v59,
                (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v68 = SummonConfirmDlgComponent___c_TypeInfo;
        v69 = v67;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
          v68 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__71_1 = (System_Func_object__int__o *)v68->static_fields->__9__71_1;
        if ( !_9__71_1 )
        {
          if ( !v68->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v68);
            v68 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v71 = (Il2CppObject *)v68->static_fields->__9;
          _9__71_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_GachaExtraGiftEntity__int__TypeInfo);
          System_Func_object__int____ctor(_9__71_1, v71, Method_SummonConfirmDlgComponent___c__Open_b__71_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__71_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__71_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__71_1,
            (int64_t)_9__71_1,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
        }
        v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v69,
                                                                     (System_Func_TSource__TResult__o *)_9__71_1,
                                                                     (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v80 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                    v79,
                                                    (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v80, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v57 )
            goto LABEL_136;
          GiftListByIds = GiftMaster__GetGiftListByIds(v57, (System_Collections_Generic_IEnumerable_int__o *)v80, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v21 + 20), v82);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v21 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v84);
            goto LABEL_105;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v21 + 20) == 2 )
            break;
        }
        v86 = *(_DWORD *)(v21 + 20) + 1;
        v87 = *(_DWORD *)(v21 + 20) - 2 < 0;
        *(_DWORD *)(v21 + 20) = v86;
        if ( v87 == __OFSUB__(v86, 3) )
          goto LABEL_105;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v23);
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
        v89 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v89,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v90 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v92 = -42.0;
        if ( v43 > 2 )
          v92 = -44.0;
        v93 = -34.0;
        if ( v43 <= 2 )
          v93 = -30.0;
        if ( isAppendSummon )
          v94 = v93;
        else
          v94 = v92;
        if ( !gameObject )
          goto LABEL_136;
        v95 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v95, v94, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v96 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v96, v94, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_136;
        v90 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v90, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_125:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v97 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v97 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v97, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_136:
    sub_1C22094(gameObject, v23);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v98);
  v99 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v99, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_4BD8B9C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SummonConfirmDlgComponent_EndOpen__);
    byte_4BD8B9C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1C22094(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v9, v10, v11, v12, v13, v14);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
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
  Il2CppObject *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  System_String_o *v22; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v24; // x24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x25
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  SummonConfirmDlgComponent_c *v39; // x0
  System_String_o *v40; // x0
  const MethodInfo *v41; // [xsp+10h] [xbp-80h]
  int32_t v42; // [xsp+20h] [xbp-70h] BYREF
  int32_t v43; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v44; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4BD8B99 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&UserGachaMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_3874/*"CONFIRM_FREESUMMON_MSG"*/);
    sub_1C21E38(&StringLiteral_3873/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/);
    sub_1C21E38(&StringLiteral_6691/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/);
    byte_4BD8B99 = 1;
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
  v10 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
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
  v14 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v14 )
      goto LABEL_11;
LABEL_18:
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3874/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v22 = System_String__Format(v40, v12, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v14 )
    goto LABEL_18;
LABEL_11:
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3873/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v44 = maxNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v16, v17, v18);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63129848(v15, v12, v19, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v22 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6691/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v43 = remainNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v25, v26, v27);
  v42 = maxNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v29, v30, v31);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63129848(v24, v28, v32, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1C22094(gameObject, v21);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v39 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v39 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v39->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  SummonConfirmDlgComponent__Open(this, 0LL, v22, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, 0LL, v41);
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
  long double v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 MasterData_object; // x0
  GachaMaster_o *v26; // x20
  GachaEntity_array *GachaDataInGroup; // x28
  Il2CppObject *Entity; // x29
  char v29; // w25
  int v30; // w21
  Il2CppClass *klass; // x8
  GachaEntity_o *v32; // x8
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // x24
  int32_t v34; // w27
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int max_length; // w22
  GachaEntity_o *v42; // x8
  GachaEntity_o *v43; // x9
  int64_t name; // x22
  int64_t v45; // x21
  UILabel_o *infoMsgLabel; // x28
  System_String_o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Object_array *v54; // x29
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x21
  int v81; // w21
  Il2CppObject *monitor; // x21
  System_String_o **v83; // x8
  GachaEntity_o *v84; // x9
  System_String_o *v85; // x20
  UILabel_o *v86; // x28
  System_String_o *v87; // x29
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_Object_array *v94; // x20
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x21
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x21
  __int64 v115; // x2
  __int64 v116; // x3
  __int64 v117; // x4
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x21
  UILabel_o *msgLabel; // x26
  System_String_o *v126; // x27
  System_Object_array *v127; // x28
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x20
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x20
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x20
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  int64_t v167; // x20
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x20
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v189; // x2
  const MethodInfo *v190; // x1
  System_Action_o *v191; // x20
  __int64 v192; // x0
  int32_t v193; // [xsp+4h] [xbp-8Ch]
  int32_t v194; // [xsp+8h] [xbp-88h]
  int32_t v195; // [xsp+Ch] [xbp-84h]
  int32_t v196; // [xsp+10h] [xbp-80h]
  int32_t v197; // [xsp+14h] [xbp-7Ch]
  int32_t v198; // [xsp+18h] [xbp-78h] BYREF
  int32_t v199; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v200; // [xsp+20h] [xbp-70h] BYREF
  int32_t v201; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v202; // [xsp+28h] [xbp-68h] BYREF
  int32_t v203; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BD8B9B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonConfirmDlgComponent_EndOpen__);
    sub_1C21E38(&StringLiteral_3878/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/);
    sub_1C21E38(&StringLiteral_3879/*"CONFIRM_GROUPSUMMON_STONEMSG"*/);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3876/*"CONFIRM_GROUPSUMMON_INFOMSG"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_3877/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/);
    byte_4BD8B9B = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    *(int64_t *)&price,
    haveStoneNum,
    *(System_String_o **)&haveFreeStoneNum,
    *(BattleSetupInfo_o **)&haveChargeStoneNum,
    *(FollowerInfo_o **)&afterStoneNum,
    *(PartyListViewItem_o **)&afterFreeStoneNum);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    v23 = sub_1C73D14(v22);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C73D14(v22);
  MasterData_object = **(_QWORD **)(v24 + 184);
  if ( !MasterData_object )
    goto LABEL_100;
  v197 = price;
  v195 = haveChargeStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  v26 = (GachaMaster_o *)MasterData_object;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_100;
  v196 = haveStoneNum;
  MasterData_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)MasterData_object,
                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_100;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             groupId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  MasterData_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GachaDataInGroup, 0LL);
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
  MasterData_object = GachaMaster__GetGroupRemainingDrawNum(v26, groupId, 0LL);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  if ( !GachaDataInGroup->max_length )
LABEL_101:
    sub_1C2209C(MasterData_object, v21);
  v32 = GachaDataInGroup->m_Items[0];
  if ( !v32 )
    goto LABEL_100;
  v29 = 0;
  v30 = (int)MasterData_object / v32->fields.drawNum1;
LABEL_21:
  v194 = haveFreeStoneNum;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v193 = afterStoneNum;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  v34 = System_Math__Max_63934620(v30, 1, 0LL);
  this->fields.extraGiftEntList = giftEntList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.extraGiftEntList,
    (int64_t)giftEntList,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !GachaDataInGroup )
    goto LABEL_100;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v42 = GachaDataInGroup->m_Items[0];
    if ( v42 )
    {
      v43 = GachaDataInGroup->m_Items[1];
      if ( v43 )
      {
        name = (int64_t)v42->fields.name;
        v45 = (int64_t)v43->fields.name;
        infoMsgLabel = this->fields.infoMsgLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3876/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
        MasterData_object = sub_1C21EE0(object___TypeInfo, 4LL);
        if ( MasterData_object )
        {
          v54 = (System_Object_array *)MasterData_object;
          if ( name )
          {
            MasterData_object = sub_1C21F74(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( !v54->max_length )
            goto LABEL_101;
          v54->m_Items[0] = (Il2CppObject *)name;
          sub_1C21DDC((PartyOrganizationUtility_o *)v54->m_Items, name, v48, v49, v50, v51, v52, v53);
          if ( v45 )
          {
            MasterData_object = sub_1C21F74(v45, v54->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v54->max_length <= 1 )
            goto LABEL_101;
          v54->m_Items[1] = (Il2CppObject *)v45;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v54->m_Items[1], v45, v55, v56, v57, v58, v59, v60);
          v203 = v34;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v203, v61, v62, v63);
          v70 = MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C21F74(MasterData_object, v54->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v54->max_length <= 2 )
            goto LABEL_101;
          v54->m_Items[2] = (Il2CppObject *)v70;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v54->m_Items[2], v70, v64, v65, v66, v67, v68, v69);
          v202 = v197;
          MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v202, v71, v72, v73);
          v80 = MasterData_object;
          if ( MasterData_object )
          {
            MasterData_object = sub_1C21F74(MasterData_object, v54->obj.klass->_1.element_class);
            if ( !MasterData_object )
              goto LABEL_102;
          }
          if ( v54->max_length <= 3 )
            goto LABEL_101;
          v54->m_Items[3] = (Il2CppObject *)v80;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v54->m_Items[3], v80, v74, v75, v76, v77, v78, v79);
          MasterData_object = (__int64)System_String__Format_63129984(v47, v54, 0LL);
          if ( !infoMsgLabel )
            goto LABEL_100;
          UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
          v81 = v196;
          goto LABEL_69;
        }
      }
    }
LABEL_100:
    sub_1C22094(MasterData_object, v21);
  }
  if ( !Entity )
    goto LABEL_100;
  monitor = (Il2CppObject *)StringLiteral_1/*""*/;
  MasterData_object = System_String__IsNullOrEmpty((System_String_o *)Entity[1].monitor, 0LL);
  if ( (MasterData_object & 1) == 0 )
    monitor = (Il2CppObject *)Entity[1].monitor;
  v83 = (System_String_o **)&StringLiteral_3877/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/;
  if ( (v29 & 1) == 0 )
  {
    if ( !GachaDataInGroup->max_length )
      goto LABEL_101;
    v84 = GachaDataInGroup->m_Items[0];
    if ( !v84 )
      goto LABEL_100;
    if ( SHIDWORD(Entity[1].klass) / v84->fields.drawNum1 > 1 )
      v83 = (System_String_o **)&StringLiteral_3878/*"CONFIRM_GROUPSUMMON_INFOMSG_3"*/;
  }
  v85 = *v83;
  v86 = this->fields.infoMsgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v87 = LocalizationManager__Get(v85, 0LL);
  MasterData_object = sub_1C21EE0(object___TypeInfo, 4LL);
  if ( !MasterData_object )
    goto LABEL_100;
  v94 = (System_Object_array *)MasterData_object;
  if ( monitor )
  {
    MasterData_object = sub_1C21F74(monitor, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v94->max_length )
    goto LABEL_101;
  v94->m_Items[0] = monitor;
  sub_1C21DDC((PartyOrganizationUtility_o *)v94->m_Items, (int64_t)monitor, v88, v89, v90, v91, v92, v93);
  v203 = max_length;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v203, v95, v96, v97);
  v104 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v94->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v94->max_length <= 1 )
    goto LABEL_101;
  v94->m_Items[1] = (Il2CppObject *)v104;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v94->m_Items[1], v104, v98, v99, v100, v101, v102, v103);
  v202 = v34;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v202, v105, v106, v107);
  v114 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v94->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v94->max_length <= 2 )
    goto LABEL_101;
  v94->m_Items[2] = (Il2CppObject *)v114;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v94->m_Items[2], v114, v108, v109, v110, v111, v112, v113);
  v201 = v197;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v201, v115, v116, v117);
  v124 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v94->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v94->max_length <= 3 )
    goto LABEL_101;
  v94->m_Items[3] = (Il2CppObject *)v124;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v94->m_Items[3], v124, v118, v119, v120, v121, v122, v123);
  MasterData_object = (__int64)System_String__Format_63129984(v87, v94, 0LL);
  if ( !v86 )
    goto LABEL_100;
  UILabel__set_text(v86, (System_String_o *)MasterData_object, 0LL);
  v81 = v196;
LABEL_69:
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v126 = LocalizationManager__Get((System_String_o *)StringLiteral_3879/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v127 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 6LL);
  v203 = v81;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v203, v128, v129, v130);
  if ( !v127 )
    goto LABEL_100;
  v137 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v127->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( !v127->max_length )
    goto LABEL_101;
  v127->m_Items[0] = (Il2CppObject *)v137;
  sub_1C21DDC((PartyOrganizationUtility_o *)v127->m_Items, v137, v131, v132, v133, v134, v135, v136);
  v202 = v195;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v202, v138, v139, v140);
  v147 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v127->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v127->max_length <= 1 )
    goto LABEL_101;
  v127->m_Items[1] = (Il2CppObject *)v147;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v127->m_Items[1], v147, v141, v142, v143, v144, v145, v146);
  v201 = v194;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v201, v148, v149, v150);
  v157 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v127->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v127->max_length <= 2 )
    goto LABEL_101;
  v127->m_Items[2] = (Il2CppObject *)v157;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v127->m_Items[2], v157, v151, v152, v153, v154, v155, v156);
  v200 = v193;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v200, v158, v159, v160);
  v167 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v127->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v127->max_length <= 3 )
    goto LABEL_101;
  v127->m_Items[3] = (Il2CppObject *)v167;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v127->m_Items[3], v167, v161, v162, v163, v164, v165, v166);
  v199 = afterChargeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v199, v168, v169, v170);
  v177 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v127->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_102;
  }
  if ( v127->max_length <= 4 )
    goto LABEL_101;
  v127->m_Items[4] = (Il2CppObject *)v177;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v127->m_Items[4], v177, v171, v172, v173, v174, v175, v176);
  v198 = afterFreeStoneNum;
  MasterData_object = j_il2cpp_value_box_0(int_TypeInfo, &v198, v178, v179, v180);
  v187 = MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = sub_1C21F74(MasterData_object, v127->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_102:
      v192 = sub_1C220B8();
      sub_1C21F60(v192, 0LL);
    }
  }
  if ( v127->max_length <= 5 )
    goto LABEL_101;
  v127->m_Items[5] = (Il2CppObject *)v187;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v127->m_Items[5], v187, v181, v182, v183, v184, v185, v186);
  MasterData_object = (__int64)System_String__Format_63129984(v126, v127, 0LL);
  if ( !msgLabel )
    goto LABEL_100;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v189);
  MasterData_object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v190);
  v191 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v191, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v191, 0, 0LL);
}


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
  System_String_o *v17; // x26
  System_Object_array *v18; // x27
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x29
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x28
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x28
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x28
  System_String_o *v61; // x26
  int64_t v62; // x2
  __int64 v63; // x3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppObject *v68; // x25
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x24
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  SummonConfirmDlgComponent_c *v77; // x0
  __int64 v78; // x0
  const MethodInfo *v79; // [xsp+10h] [xbp-80h]
  int32_t v81; // [xsp+20h] [xbp-70h] BYREF
  int32_t v82; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v83; // [xsp+28h] [xbp-68h] BYREF
  int32_t v84; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BD8B98 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_3882/*"CONFIRM_POINTSUMMON_MSG"*/);
    byte_4BD8B98 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v18 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
  v84 = needPointNum;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v84, v19, v20, v21);
  if ( !v18 )
    sub_1C22094(v22, v23);
  v30 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v18->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_24;
  }
  if ( !v18->max_length )
    goto LABEL_23;
  v18->m_Items[0] = (Il2CppObject *)v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)v18->m_Items, v30, v24, v25, v26, v27, v28, v29);
  v83 = gachaTime;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v83, v31, v32, v33);
  v40 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v18->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_24;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_23;
  v18->m_Items[1] = (Il2CppObject *)v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
  v82 = havePointNum;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v82, v41, v42, v43);
  v50 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v18->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_24;
  }
  if ( v18->max_length <= 2 )
    goto LABEL_23;
  v18->m_Items[2] = (Il2CppObject *)v50;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
  v81 = afterPointNum;
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &v81, v51, v52, v53);
  v60 = v22;
  if ( v22 )
  {
    v22 = sub_1C21F74(v22, v18->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_24:
      v78 = sub_1C220B8();
      sub_1C21F60(v78, 0LL);
    }
  }
  if ( v18->max_length <= 3 )
LABEL_23:
    sub_1C2209C(v22, v23);
  v18->m_Items[3] = (Il2CppObject *)v60;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->m_Items[3], v60, v54, v55, v56, v57, v58, v59);
  v61 = System_String__Format_63129984(v17, v18, 0LL);
  if ( !System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    v84 = needPointNum;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v62, v63, v64);
    v83 = havePointNum;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v69, v70, v71);
    v82 = afterPointNum;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v73, v74, v75);
    v61 = System_String__Format_63129916(summonConfirmMessage, v68, v72, v76, 0LL);
  }
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v77 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
    v77 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v61,
    0LL,
    callback,
    v77->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    gachaSubEntity,
    v79);
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
        const MethodInfo *method)
{
  System_String_o **v27; // x8
  System_String_o *v28; // x25
  System_Object_array *v29; // x26
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 addMsgBgSprite; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x27
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x27
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x27
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x27
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x27
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x27
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x27
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x27
  System_String_o *v112; // x29
  System_String_o *v113; // x27
  System_String_o *v114; // x26
  Il2CppObject *DateTime; // x0
  System_String_o *v116; // x0
  int32_t v117; // w1
  int32_t v118; // w1
  __int64 v119; // x2
  __int64 v120; // x3
  __int64 v121; // x4
  Il2CppObject *v122; // x0
  System_String_o *v123; // x27
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  Il2CppObject *v127; // x0
  System_String_o *v128; // x27
  System_String_o *v129; // x0
  System_String_o *v130; // x27
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  Il2CppObject *v134; // x24
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x4
  Il2CppObject *v138; // x0
  System_String_o *v139; // x27
  System_String_o *v140; // x24
  System_Object_array *v141; // x29
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x22
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x21
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  int64_t v171; // x20
  __int64 v172; // x2
  __int64 v173; // x3
  __int64 v174; // x4
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  int64_t v181; // x20
  __int64 v182; // x2
  __int64 v183; // x3
  __int64 v184; // x4
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  int64_t v191; // x20
  __int64 v192; // x2
  __int64 v193; // x3
  __int64 v194; // x4
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  int64_t v201; // x20
  System_String_o *v202; // x20
  System_String_o *v203; // x0
  long double inited; // q0
  _QWORD *v205; // x21
  System_String_o *v206; // x22
  __int64 v207; // x8
  __int64 v208; // x0
  __int64 v209; // x0
  System_String_o *v210; // x25
  System_String_o *v211; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v213; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v225; // x0
  __int64 v226; // x0
  const MethodInfo *v227; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v232; // [xsp+40h] [xbp-80h] BYREF
  int32_t v233; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v234; // [xsp+48h] [xbp-78h] BYREF
  int32_t v235; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v236; // [xsp+50h] [xbp-70h] BYREF
  int32_t v237; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v238; // [xsp+58h] [xbp-68h] BYREF
  int32_t v239; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4BD8B96 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_object___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3860/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/);
    sub_1C21E38(&StringLiteral_3866/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/);
    sub_1C21E38(&StringLiteral_3861/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/);
    sub_1C21E38(&StringLiteral_3864/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/);
    sub_1C21E38(&StringLiteral_3881/*"CONFIRM_PAYSUMMON_MSG"*/);
    sub_1C21E38(&StringLiteral_3862/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/);
    sub_1C21E38(&StringLiteral_3863/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/);
    sub_1C21E38(&StringLiteral_12618/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_12605/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/);
    sub_1C21E38(&StringLiteral_12567/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    sub_1C21E38(&StringLiteral_3865/*"CONFIRM_CHARGESUMMON_MSG"*/);
    byte_4BD8B96 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.extraGiftEntList,
    (int64_t)giftEntList,
    *(int64_t *)&type,
    price,
    *(System_String_o **)&num,
    *(BattleSetupInfo_o **)&haveStoneNum,
    *(FollowerInfo_o **)&haveFreeStoneNum,
    *(PartyListViewItem_o **)&haveChargeStoneNum);
  titlea = title;
  if ( isAppendSummon )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = (System_String_o **)&StringLiteral_3866/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = (System_String_o **)&StringLiteral_3881/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v27 = (System_String_o **)&StringLiteral_3865/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v28 = LocalizationManager__Get(*v27, 0LL);
  v29 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 8LL);
  v239 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v239, v30, v31, v32);
  if ( !v29 )
    goto LABEL_107;
  v41 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v29->max_length )
    goto LABEL_105;
  v29->m_Items[0] = (Il2CppObject *)v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)v29->m_Items, v41, v35, v36, v37, v38, v39, v40);
  v238 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v238, v42, v43, v44);
  v51 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_105;
  v29->m_Items[1] = (Il2CppObject *)v51;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[1], v51, v45, v46, v47, v48, v49, v50);
  v237 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v237, v52, v53, v54);
  v61 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_105;
  v29->m_Items[2] = (Il2CppObject *)v61;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[2], v61, v55, v56, v57, v58, v59, v60);
  v236 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v236, v62, v63, v64);
  v71 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 3 )
    goto LABEL_105;
  v29->m_Items[3] = (Il2CppObject *)v71;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[3], v71, v65, v66, v67, v68, v69, v70);
  v235 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v235, v72, v73, v74);
  v81 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 4 )
    goto LABEL_105;
  v29->m_Items[4] = (Il2CppObject *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[4], v81, v75, v76, v77, v78, v79, v80);
  v234 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v234, v82, v83, v84);
  v91 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 5 )
    goto LABEL_105;
  v29->m_Items[5] = (Il2CppObject *)v91;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[5], v91, v85, v86, v87, v88, v89, v90);
  v233 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v233, v92, v93, v94);
  v101 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 6 )
    goto LABEL_105;
  v29->m_Items[6] = (Il2CppObject *)v101;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[6], v101, v95, v96, v97, v98, v99, v100);
  v232 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v232, v102, v103, v104);
  v111 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v29->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v29->max_length <= 7 )
    goto LABEL_105;
  v29->m_Items[7] = (Il2CppObject *)v111;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v29->m_Items[7], v111, v105, v106, v107, v108, v109, v110);
  v112 = System_String__Format_63129984(v28, v29, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12618/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v114 = LocalizationManager__Get((System_String_o *)StringLiteral_12605/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v116 = System_String__Format(v114, DateTime, 0LL);
    v113 = System_String__Concat_63115476(v113, v116, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  v117 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v117, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  if ( isPickup )
    v118 = 76;
  else
    v118 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v118, 0LL);
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(
      this,
      titlea,
      v112,
      0LL,
      callback,
      14.0,
      v113,
      shopIdIdx,
      isAppendSummon,
      0,
      0LL,
      v227);
    return;
  }
  v239 = gachaId;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v239, v119, v120, v121);
  v123 = System_String__Format((System_String_o *)StringLiteral_3864/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v122, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v123, 0LL) )
  {
    v239 = gachaId;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v239, v124, v125, v126);
    v128 = System_String__Format((System_String_o *)StringLiteral_3864/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v127, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = v128;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = (System_String_o *)StringLiteral_3863/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v129, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v130 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v239 = price;
  v134 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v239, v131, v132, v133);
  v238 = num;
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v238, v135, v136, v137);
  v139 = System_String__Format_63129848(v130, v134, v138, 0LL);
  v140 = LocalizationManager__Get((System_String_o *)StringLiteral_3862/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v141 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 6LL);
  v237 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v237, v142, v143, v144);
  if ( !v141 )
    goto LABEL_107;
  v151 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v141->max_length )
    goto LABEL_105;
  v141->m_Items[0] = (Il2CppObject *)v151;
  sub_1C21DDC((PartyOrganizationUtility_o *)v141->m_Items, v151, v145, v146, v147, v148, v149, v150);
  v236 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v236, v152, v153, v154);
  v161 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v141->max_length <= 1 )
    goto LABEL_105;
  v141->m_Items[1] = (Il2CppObject *)v161;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v141->m_Items[1], v161, v155, v156, v157, v158, v159, v160);
  v235 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v235, v162, v163, v164);
  v171 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v141->max_length <= 2 )
    goto LABEL_105;
  v141->m_Items[2] = (Il2CppObject *)v171;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v141->m_Items[2], v171, v165, v166, v167, v168, v169, v170);
  v234 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v234, v172, v173, v174);
  v181 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v141->max_length <= 3 )
    goto LABEL_105;
  v141->m_Items[3] = (Il2CppObject *)v181;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v141->m_Items[3], v181, v175, v176, v177, v178, v179, v180);
  v233 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v233, v182, v183, v184);
  v191 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v141->max_length <= 4 )
    goto LABEL_105;
  v141->m_Items[4] = (Il2CppObject *)v191;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v141->m_Items[4], v191, v185, v186, v187, v188, v189, v190);
  v232 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v232, v192, v193, v194);
  v201 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1C21F74(addMsgBgSprite, v141->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v226 = sub_1C220B8();
      sub_1C21F60(v226, 0LL);
    }
  }
  if ( v141->max_length <= 5 )
LABEL_105:
    sub_1C2209C(addMsgBgSprite, v34);
  v141->m_Items[5] = (Il2CppObject *)v201;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v141->m_Items[5], v201, v195, v196, v197, v198, v199, v200);
  v202 = System_String__Format_63129984(v140, v141, 0LL);
  v203 = LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v205 = Method_System_Array_Empty_object___;
  v206 = v203;
  v207 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v207 )
  {
    sub_1C73D70(Method_System_Array_Empty_object___);
    v207 = v205[7];
  }
  v208 = *(_QWORD *)(v207 + 16);
  if ( (*(_BYTE *)(v208 + 309) & 1) == 0 )
    v208 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v208 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v208);
  v209 = *(_QWORD *)(v205[7] + 16LL);
  if ( (*(_BYTE *)(v209 + 309) & 1) == 0 )
    v209 = sub_1C73D14(inited);
  v210 = v139;
  v211 = System_String__Format_63129984(v206, **(System_Object_array ***)(v209 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v213 = v211;
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
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__50551272(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v218,
            v219,
            v220,
            v221,
            v222,
            v223);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1C22094(addMsgBgSprite, v34);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v210,
    v202,
    v213,
    tryGetBonusSelectData,
    assetManager,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v225 = LocalizationManager__Get((System_String_o *)StringLiteral_12567/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v225, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v227);
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
  System_String_o *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x25
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x23
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  const MethodInfo *v36; // [xsp+10h] [xbp-60h]
  int32_t v37; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v38; // [xsp+28h] [xbp-48h] BYREF
  int32_t v39; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4BD8B97 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3883/*"CONFIRM_TICKETSUMMON_MSG"*/);
    sub_1C21E38(&StringLiteral_3884/*"CONFIRM_TICKETSUMMON_MSG2"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8B97 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( num == 1 )
  {
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3883/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v39 = haveTicketNum;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v14, v15, v16);
    v38 = afterTicketNum;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v18, v19, v20);
    v22 = System_String__Format_63129848(v13, v17, v21, 0LL);
  }
  else
  {
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3884/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v39 = num;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v24, v25, v26);
    v38 = haveTicketNum;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v28, v29, v30);
    v37 = afterTicketNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v32, v33, v34);
    v22 = System_String__Format_63129916(v23, v27, v31, v35, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v22, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v36);
}


void __fastcall SummonConfirmDlgComponent__OpenShortChargeStone(
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
  Il2CppObject *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  const MethodInfo *v23; // [xsp+10h] [xbp-70h]
  int32_t v24; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v25; // [xsp+28h] [xbp-58h] BYREF
  int32_t v26; // [xsp+2Ch] [xbp-54h] BYREF

  v26 = haveFreeStoneNum;
  if ( (byte_4BD8B92 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12515/*"STONE_PURCHASE"*/);
    sub_1C21E38(&StringLiteral_12343/*"SHORT_HAVE_CHARGE_STONE"*/);
    sub_1C21E38(&StringLiteral_426/*"#,0"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8B92 = 1;
  }
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12343/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v25 = price;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
  v24 = haveChargeStoneNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v16, v17, v18);
  v20 = (Il2CppObject *)System_Int32__ToString_63921084((int32_t)&v26, (System_String_o *)StringLiteral_426/*"#,0"*/, 0LL);
  v21 = System_String__Format_63129916(v11, v15, v19, v20, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12515/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v10, v21, v22, callback, 14.0, 0LL, 0, 0, 0, 0LL, v23);
}


void __fastcall SummonConfirmDlgComponent__OpenShortPoint(
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // [xsp+10h] [xbp-50h]
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4BD8B95 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12344/*"SHORT_HAVE_POINT"*/);
    sub_1C21E38(&StringLiteral_12342/*"SHORT_DLG_TITLE"*/);
    byte_4BD8B95 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SHORT_DLG_TITLE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12344/*"SHORT_HAVE_POINT"*/, 0LL);
  v15 = havePoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v7, v13, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v14);
}


void __fastcall SummonConfirmDlgComponent__OpenShortStone(
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
  Il2CppObject *v14; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  const MethodInfo *v21; // [xsp+10h] [xbp-60h]
  int32_t v22; // [xsp+28h] [xbp-48h] BYREF
  int32_t v23; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4BD8B91 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12515/*"STONE_PURCHASE"*/);
    sub_1C21E38(&StringLiteral_12345/*"SHORT_HAVE_STONE"*/);
    sub_1C21E38(&StringLiteral_12342/*"SHORT_DLG_TITLE"*/);
    byte_4BD8B91 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SHORT_DLG_TITLE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12345/*"SHORT_HAVE_STONE"*/, 0LL);
  v23 = haveChargeStone;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v11, v12, v13);
  v22 = haveFreeStone;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v15, v16, v17);
  v19 = System_String__Format_63129848(v10, v14, v18, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12515/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v9, v19, v20, callback, 14.0, 0LL, 0, 0, 0, 0LL, v21);
}


void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v8; // x1
  int32_t m_CachedPtr; // w21
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
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v25; // x0
  System_Action_object__o *_9__76_0; // x22
  Il2CppObject *v27; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int i; // w24
  int32_t v36; // w21
  struct ItemIconComponent_array *v37; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v39; // x23
  UILabel_o *v40; // x21
  int32_t *v41; // x22
  SummonConfirmDlgComponent_c *v42; // x0
  System_String_o *v43; // x0
  int32_t v44; // w8
  System_String_o *v45; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v47; // x0
  int32_t v48; // w8
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v53; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BD8B9F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C21E38(&Method_System_Linq_Enumerable_First_GiftEntity___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__);
    sub_1C21E38(&SummonConfirmDlgComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_12577/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12579/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/);
    sub_1C21E38(&StringLiteral_12580/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/);
    sub_1C21E38(&StringLiteral_12582/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/);
    sub_1C21E38(&StringLiteral_12581/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/);
    sub_1C21E38(&StringLiteral_12578/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/);
    byte_4BD8B9F = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v25 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v25 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_0 = (System_Action_object__o *)v25->static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__76_0 = (System_Action_object__o *)sub_1C22084(System_Action_ItemIconComponent__TypeInfo);
      System_Action_object____ctor(_9__76_0, v27, Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_0 = (struct System_Action_ItemIconComponent__o *)_9__76_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__76_0,
        (int64_t)_9__76_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__76_0,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v36 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v36 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 48LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v36 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v36,
                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v37 = this->fields.extraItemIconComponents;
      if ( !v37 )
        goto LABEL_59;
      if ( v36 >= v37->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v36 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1C2209C(SelfUserGame, v8);
      v39 = (UnityEngine_Component_o *)v37->m_Items[v36];
      if ( !v39 )
        goto LABEL_59;
      v40 = extraMessageLabels->m_Items[v36];
      v41 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v39, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v41 )
        goto LABEL_59;
      ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)v39, v41[5], v41[6], v41[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v42 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
        v42 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v42->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12577/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v44 = v41[7];
        v45 = v43;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v44, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v45, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12578/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v48 = v41[7];
        v49 = v47;
        v50 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v48, 0LL);
        v51 = System_String__Format(v49, v50, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_63115476(
                                                     v51,
                                                     (System_String_o *)StringLiteral_117/*" "*/,
                                                     0LL);
      }
      v8 = SelfUserGame;
      if ( !v40 )
        goto LABEL_59;
      UILabel__set_text(v40, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = m_CachedPtr < v10->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_2FD0884 *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v13 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v14 = (System_String_o **)&StringLiteral_12579/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12582/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v15 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v17 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12577/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12581/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v18, 0LL);
  if ( !v13
    || (v22 = (System_String_o *)SelfUserGame,
        v53 = v13[7],
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v19, v20, v21),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v22, v23, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1C22094(SelfUserGame, v8);
  }
  ItemIconComponent__SetGift_39386620((ItemIconComponent_o *)SelfUserGame, v13[5], v13[6], v13[7], 0, 0LL);
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
    sub_1C22094(this, method);
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
  if ( (byte_4BD8BA0 & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    byte_4BD8BA0 = 1;
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
    if ( (signed int)v5 >= SLODWORD(this->fields.closeBtnLb->fields.bottomAnchor) )
      break;
    extraItemIconComponents = v2->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v5 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1C2209C(this, method);
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
    sub_1C22094(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  SummonConfirmDlgComponent___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x23
  System_Func_object__int__o *_9__75_1; // x24
  Il2CppObject *v26; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_ICollection_o *v35; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *bonusMsgInfo; // x23
  UnityEngine_GameObject_o *v39; // x23
  SummonConfirmDlgComponent_c *v40; // x0
  const MethodInfo *v41; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v43; // x23
  UnityEngine_Object_o *v44; // x24
  SummonConfirmDlgComponent_c *v45; // x0
  __int64 v46; // x8
  const MethodInfo *v47; // x1
  int v48; // w8
  bool v49; // nf

  if ( (byte_4BD8B9E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    sub_1C21E38(&System_Func_GachaExtraGiftEntity__int__TypeInfo);
    sub_1C21E38(&System_Func_GachaExtraGiftEntity__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SummonConfirmDlgComponent_TypeInfo);
    sub_1C21E38(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__);
    sub_1C21E38(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__);
    sub_1C21E38(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
    sub_1C21E38(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4BD8B9E = 1;
  }
  v5 = sub_1C22084(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_51;
  *(_DWORD *)(v5 + 16) = shopIdIdx;
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
    || (v10 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v10, 19.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0LL)
    || (v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v11, -29.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1C22094(baseWindowSprite, v7);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GiftMaster___);
  v13 = (System_Func_object__bool__o **)(v5 + 24);
  *(_DWORD *)(v5 + 20) = 1;
  do
  {
    v14 = *v13;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v13 )
    {
      v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GachaExtraGiftEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v14,
        (Il2CppObject *)v5,
        Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v5 + 24) = v14;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)v14, v16, v17, v18, v19, v20, v21);
    }
    v22 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v14,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v23 = SummonConfirmDlgComponent___c_TypeInfo;
    v24 = v22;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo);
      v23 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__75_1 = (System_Func_object__int__o *)v23->static_fields->__9__75_1;
    if ( !_9__75_1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__75_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_GachaExtraGiftEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__75_1,
        v26,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__75_1,
        (int64_t)_9__75_1,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TResult__o *)_9__75_1,
                                                                 (const MethodInfo_2FE0CDC *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v35 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v34,
                                                (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v35, 0LL);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v35,
                        0LL);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v5 + 20), v37);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v5 + 20) == 1 )
      {
        v39 = this->fields.bonusMsgInfo;
        v40 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
          v40 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v39, v40->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v41);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v5 + 20) == 2 )
      {
        v43 = this->fields.extraMsgInfo;
        v44 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0LL) )
        {
          v45 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v45 = SummonConfirmDlgComponent_TypeInfo;
          }
          v46 = 36LL;
        }
        else
        {
LABEL_44:
          v45 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo);
            v45 = SummonConfirmDlgComponent_TypeInfo;
          }
          v46 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v43,
          *(float *)((char *)&v45->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v46),
          0LL);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v47);
      }
    }
    v48 = *(_DWORD *)(v5 + 20) + 1;
    v49 = *(_DWORD *)(v5 + 20) - 2 < 0;
    *(_DWORD *)(v5 + 20) = v48;
  }
  while ( v49 != __OFSUB__(v48, 3) );
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

  if ( (byte_4BD8B8E & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4BD8B8E = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
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

  if ( (byte_4BD8B8F & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo);
    byte_4BD8B8F = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C22354(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  int32_t v5; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4BD8B9D & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12560/*"SUMMON_AUTOSALE_BUTTON"*/);
    byte_4BD8B9D = 1;
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
        sub_1C22094(closeBtnObject, method);
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
  v5 = this->fields.state;
  if ( v5 == 8 || v5 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12560/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
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
    sub_1C22094(0LL, isTutorial);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_o *autoSaleDialogCloseCallbackFunc; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

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
    sub_1C22094(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_34129316(this, 0LL, v19);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A5F19C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5F154;
}


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
  if ( (byte_4BD8BA7 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD8BA7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8BA8 & 1) == 0 )
  {
    sub_1C21E38(&SummonConfirmDlgComponent___c_TypeInfo);
    byte_4BD8BA8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SummonConfirmDlgComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}