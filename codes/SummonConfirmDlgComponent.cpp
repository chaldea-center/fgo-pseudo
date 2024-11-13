void __fastcall SummonConfirmDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct SummonConfirmDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4B128E5 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v1, v2);
    byte_4B128E5 = 1;
  }
  static_fields = SummonConfirmDlgComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CONFIRM_TITLE_LABEL_POS_Y = 0x42920000432E0000LL;
  static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y = 50.0;
  static_fields->BASE_WINDOW_DEFAULT_HEIGHT = 480;
  *(_OWORD *)&static_fields->CONFIRM_LABEL_DEFAULT_FONT_SIZE = xmmword_BD2FC0;
  *(_OWORD *)&static_fields->GROUP_BONUS_LABEL_POS_Y = xmmword_BD39F0;
  static_fields->EXTRA_BONUS_LIMIT = 2;
}


void __fastcall SummonConfirmDlgComponent___ctor(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B128E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B128E4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *bonusSelectBeforeMessage; // x22
  System_String_o *v18; // x23
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  UILabel_o *bonusSelectBeforeDecideLabel; // x21
  const MethodInfo *v24; // x4
  int32_t v25; // [xsp+8h] [xbp-48h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF

  v26 = haveFreeStoneNum;
  if ( (byte_4B128D2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&price, *(_QWORD *)&haveChargeStoneNum);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3075/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v15, v16);
    byte_4B128D2 = 1;
  }
  bonusSelectBeforeMessage = this->fields.bonusSelectBeforeMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&price);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3075/*"BONUS_SELECT_NOT_HAVE_CHARGE_STONE_AFTER_DIALOG_MESSAGE"*/, 0LL);
  v25 = haveChargeStoneNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v20 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v26, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  v21 = System_String__Format_62415592(v18, v19, v20, 0LL);
  if ( !bonusSelectBeforeMessage
    || (UILabel__set_text(bonusSelectBeforeMessage, v21, 0LL),
        bonusSelectBeforeDecideLabel = this->fields.bonusSelectBeforeDecideLabel,
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
        !bonusSelectBeforeDecideLabel) )
  {
    sub_1BCAA3C(v21, v22);
  }
  UILabel__set_text(bonusSelectBeforeDecideLabel, v21, 0LL);
  this->fields.state = 7;
  SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(this, callback, 0, 0, v24);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *v35; // x24
  System_String_o *v36; // x28
  Il2CppObject *v37; // x27
  Il2CppObject *v38; // x26
  Il2CppObject *v39; // x0
  System_String_o *baseWindow; // x0
  __int64 v41; // x1
  System_String_o *v42; // x25
  UIWidget_o *baseWindowSprite; // x26
  __int64 v44; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x27
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x26
  const MethodInfo *v47; // x6
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x27
  __int64 v49; // x1
  UnityEngine_Transform_o *transform; // x28
  Il2CppObject *Component_object; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v60; // x0
  const MethodInfo *v61; // [xsp+10h] [xbp-80h]
  int32_t v62; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v63; // [xsp+28h] [xbp-68h] BYREF
  int32_t v64; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B128D3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___,
      callback,
      *(_QWORD *)&haveStoneNum);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_12433/*"STONE_PURCHASE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3079/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3080/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, v33, v34);
    byte_4B128D3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, callback);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3080/*"BONUS_SELECT_STONE_BUY_CONFIRM_TITLE"*/, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3079/*"BONUS_SELECT_STONE_BUY_CONFIRM_MESSAGE"*/, 0LL);
  v64 = haveStoneNum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  v63 = haveChargeStoneNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  v62 = haveFreeStoneNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  baseWindow = System_String__Format_62415660(v36, v37, v38, v39, 0LL);
  if ( !this->fields.bonusSelectNotHaveChargeStoneBeforeInfo )
    goto LABEL_25;
  v42 = baseWindow;
  UnityEngine_GameObject__SetActive(this->fields.bonusSelectNotHaveChargeStoneBeforeInfo, 0, 0LL);
  baseWindow = (System_String_o *)SummonConfirmDlgComponent_TypeInfo;
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v41);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
        baseWindow = (System_String_o *)UnityEngine_Object__Instantiate_object__49903816(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( baseWindow )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)baseWindow,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
          goto LABEL_19;
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(baseWindow, v41);
  }
LABEL_19:
  baseWindow = (System_String_o *)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_25;
  BonusSelectSummonMsgInfo__SetBonusSelectBuyStoneDialog(
    (BonusSelectSummonMsgInfo_o *)baseWindow,
    gachaId,
    v35,
    v42,
    tryGetBonusSelectData,
    assetManager,
    v47);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_25;
  UILabel__set_text(cancelBtnLb, baseWindow, 0LL);
  baseWindow = (System_String_o *)this->fields.confirmBtnObject;
  if ( !baseWindow )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseWindow, 1, 0LL);
  this->fields.state = 4;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"STONE_PURCHASE"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v60, callback, 14.0, 0LL, 0, 0, 1, 0LL, v61);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BCA784(
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

  SummonConfirmDlgComponent__Close_33677756(this, 0LL, v2);
}


void __fastcall SummonConfirmDlgComponent__Close_33677756(
        SummonConfirmDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B128E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent_EndClose__, v10, v11);
    byte_4B128E0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SummonConfirmDlgComponent__EndClose(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  if ( (byte_4B128E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B128E1 = 1;
  }
  SummonConfirmDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.bonusSelectMsgInfo;
    if ( gameObject )
    {
      BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)gameObject, v5);
      goto LABEL_9;
    }
LABEL_12:
    sub_1BCAA3C(gameObject, v5);
  }
LABEL_9:
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *confirmTitleLabel; // x0
  struct UILabel_array *extraMessageLabels; // x21
  int max_length; // w8
  unsigned int v17; // w22
  struct ItemIconComponent_array *extraItemIconComponents; // x20
  int v19; // w8
  unsigned int v20; // w21
  UILabel_o *confirmBtnLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  SummonConfirmDlgComponent_c *v25; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x20
  UnityEngine_GameObject_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_GameObject_o *bonusMsgInfo; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  UnityEngine_GameObject_o *extraMsgInfo; // x20

  if ( (byte_4B128CF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B128CF = 1;
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
    v17 = 0;
    while ( v17 < max_length )
    {
      confirmTitleLabel = extraMessageLabels->m_Items[v17];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      max_length = extraMessageLabels->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_16;
    }
LABEL_66:
    sub_1BCAA44(confirmTitleLabel, method);
  }
LABEL_16:
  extraItemIconComponents = this->fields.extraItemIconComponents;
  if ( !extraItemIconComponents )
    goto LABEL_65;
  v19 = extraItemIconComponents->max_length;
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( v20 < v19 )
    {
      confirmTitleLabel = (UILabel_o *)extraItemIconComponents->m_Items[v20];
      if ( !confirmTitleLabel )
        goto LABEL_65;
      ItemIconComponent__Clear((ItemIconComponent_o *)confirmTitleLabel, 0LL);
      v19 = extraItemIconComponents->max_length;
      if ( (int)++v20 >= v19 )
        goto LABEL_22;
    }
    goto LABEL_66;
  }
LABEL_22:
  confirmBtnLb = this->fields.confirmBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLb )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLb, (System_String_o *)confirmTitleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  confirmTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
  v25 = SummonConfirmDlgComponent_TypeInfo;
  addMsgInfo = this->fields.addMsgInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v24);
    v25 = SummonConfirmDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(addMsgInfo, v25->static_fields->ADD_MSG_INFO_POS_Y_DEF, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.singleMsgInfo, 0.0, 0LL);
  confirmTitleLabel = this->fields.msgLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v27, -64.0, 0LL);
  this->fields.extraGiftEntList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.extraGiftEntList, 0LL, v28, v29, v30, v31, v32, v33);
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v34,
    SummonConfirmDlgComponent_TypeInfo->static_fields->CONFIRM_TITLE_LABEL_POS_Y,
    0LL);
  confirmTitleLabel = this->fields.confirmDetailLabel;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)confirmTitleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    v35,
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
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
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v38, v39);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(bonusMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.extraMsgInfo;
  if ( !confirmTitleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  extraMsgInfo = this->fields.extraMsgInfo;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v41, v42);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(extraMsgInfo, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  confirmTitleLabel = (UILabel_o *)this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !confirmTitleLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_65:
    sub_1BCAA3C(confirmTitleLabel, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  AutomaticSaleDlgComponent_o *autoSaleDlgInfo; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  AutomaticSaleDlgComponent_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_4B128E2 & 1) == 0 )
  {
    sub_1BCA7E0(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent_OnClickSetting__, v4, v5);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent_settingResult__, v6, v7);
    byte_4B128E2 = 1;
  }
  v8 = Method_SummonConfirmDlgComponent_OnClickSetting__;
  if ( (*((_BYTE *)Method_SummonConfirmDlgComponent_OnClickSetting__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SummonConfirmDlgComponent_OnClickSetting__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        autoSaleDlgInfo = this->fields.autoSaleDlgInfo,
        v16 = (AutomaticSaleDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            AutomaticSaleDlgComponent_CallbackFunc_TypeInfo,
                                                            v13,
                                                            v14,
                                                            v15),
        AutomaticSaleDlgComponent_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_SummonConfirmDlgComponent_settingResult__,
          v17),
        !autoSaleDlgInfo) )
  {
    sub_1BCAA3C(gameObject, v11);
  }
  AutomaticSaleDlgComponent__Open(autoSaleDlgInfo, v16, v18);
}


void __fastcall SummonConfirmDlgComponent__OnEnable(SummonConfirmDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0

  if ( (byte_4B128E3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4746/*"ConfirmWindow/CloseButton"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_4748/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_4744/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, v6, v7);
    byte_4B128E3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_4748/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, 0LL);
  v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v9, (System_String_o *)StringLiteral_4746/*"ConfirmWindow/CloseButton"*/, 0LL);
  v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(v10, (System_String_o *)StringLiteral_4744/*"ConfirmWindow/BonusSelectInfo/DecideButton"*/, 0LL);
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
  System_String_o *v17; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v66; // x1
  UnityEngine_Object_o *confirmDetailLabel; // x27
  System_String_o *v68; // x1
  UnityEngine_GameObject_o *v69; // x0
  int32_t SummonConfirmMessageSpacingX; // w28
  int32_t SummonConfirmMessageSpacingY; // w26
  UILabel_o *v72; // x27
  int32_t v73; // w25
  UILabel_o *v74; // x27
  UILabel_o *v75; // x26
  UnityEngine_Object_o *confirmBtnLb; // x25
  UILabel_o *v77; // x25
  int32_t v78; // w23
  int CONFIRM_TITLE_LABEL_POS_Y_low; // s8
  SummonConfirmDlgComponent_c *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_Object_o *addMsgInfo; // x24
  bool v83; // w0
  float v84; // s8
  int32_t v85; // w24
  float v86; // s9
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  struct GachaExtraGiftEntity_array *extraGiftEntList; // x9
  int32_t state; // w8
  Il2CppObject *MasterData_object; // x0
  __int64 v92; // x2
  __int64 v93; // x3
  GiftMaster_o *v94; // x22
  System_Func_object__bool__o **v95; // x24
  System_Func_object__bool__o *v96; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x25
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  SummonConfirmDlgComponent___c_c *v108; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x25
  System_Func_object__int__o *_9__71_1; // x26
  Il2CppObject *v111; // x27
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x0
  System_Collections_ICollection_o *v120; // x25
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v122; // x3
  __int64 v123; // x1
  UnityEngine_Object_o *bonusMsgInfo; // x25
  const MethodInfo *v125; // x1
  UnityEngine_Object_o *extraMsgInfo; // x25
  int v127; // w8
  bool v128; // nf
  UIWidget_o *baseWindowSprite; // x20
  UnityEngine_GameObject_o *v130; // x0
  UnityEngine_GameObject_o *v131; // x0
  float BONUS_SELECT_BONUS_INFO_GET_POS_Y; // s0
  float v133; // s0
  float v134; // s1
  float v135; // s8
  UnityEngine_GameObject_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  bool v138; // w1
  const MethodInfo *v139; // x1
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  System_Action_o *v143; // x20

  v17 = decideTxt;
  if ( (byte_4B128D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, msg);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v25, v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v27, v28);
    sub_1BCA7E0(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent_EndOpen__, v39, v40);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent___c__Open_b__71_1__, v43, v44);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__, v45, v46);
    sub_1BCA7E0(&SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo, v47, v48);
    sub_1BCA7E0(&SummonConfirmDlgComponent___c_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v53, v54);
    byte_4B128D9 = 1;
  }
  v55 = sub_1BCAA2C(SummonConfirmDlgComponent___c__DisplayClass71_0_TypeInfo, title, msg, decideTxt);
  SummonConfirmDlgComponent___c__DisplayClass71_0___ctor((SummonConfirmDlgComponent___c__DisplayClass71_0_o *)v55, 0LL);
  if ( !v55 )
    goto LABEL_136;
  *(_DWORD *)(v55 + 16) = shopIdIdx;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_136;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v58, v59, v60, v61, v62, v63);
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    if ( title )
      v66 = title;
    else
      v66 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v66, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v68 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v68, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v69, msgOffY, 0LL);
    if ( gachaSubEntity )
    {
      SummonConfirmMessageSpacingX = GachaSubEntity__GetSummonConfirmMessageSpacingX(gachaSubEntity, 0LL);
      SummonConfirmMessageSpacingY = GachaSubEntity__GetSummonConfirmMessageSpacingY(gachaSubEntity, 0LL);
      gameObject = (UnityEngine_GameObject_o *)GachaSubEntity__GetSummonConfirmMessageFontSize(gachaSubEntity, 0LL);
      v72 = this->fields.confirmDetailLabel;
      v73 = (int)gameObject;
      if ( SummonConfirmMessageSpacingX == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v57);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingX = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 16LL);
      }
      if ( !v72 )
        goto LABEL_136;
      UILabel__set_spacingX(v72, SummonConfirmMessageSpacingX, 0LL);
      v74 = this->fields.confirmDetailLabel;
      if ( SummonConfirmMessageSpacingY == -1 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v57);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        SummonConfirmMessageSpacingY = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 20LL);
      }
      if ( !v74 )
        goto LABEL_136;
      UILabel__set_spacingY(v74, SummonConfirmMessageSpacingY, 0LL);
      v75 = this->fields.confirmDetailLabel;
      if ( !v73 )
      {
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v57);
          gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        }
        v73 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 12LL);
      }
      if ( !v75 )
        goto LABEL_136;
      UILabel__set_fontSize(v75, v73, 0LL);
    }
  }
  confirmBtnLb = (UnityEngine_Object_o *)this->fields.confirmBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(confirmBtnLb, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v77 = this->fields.confirmBtnLb;
    if ( !v17 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
      v17 = (System_String_o *)gameObject;
    }
    if ( !v77 )
      goto LABEL_136;
    UILabel__set_text(v77, v17, 0LL);
  }
  v78 = WrapControlText__textBBCodeAdjust(this->fields.confirmTitleLabel, title, 22, 0, 0, 0LL);
  if ( this->fields.state == 5 )
  {
    if ( v78 <= 2 )
    {
      v80 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v57);
        v80 = SummonConfirmDlgComponent_TypeInfo;
      }
      CONFIRM_TITLE_LABEL_POS_Y_low = LODWORD(v80->static_fields->CONFIRM_TITLE_LABEL_POS_Y);
    }
    else
    {
      CONFIRM_TITLE_LABEL_POS_Y_low = 1126432768;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v81, *(float *)&CONFIRM_TITLE_LABEL_POS_Y_low, 0LL);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  v83 = UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL);
  if ( addMsg && v83 )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( v78 <= 2 )
      v84 = 54.0;
    else
      v84 = 43.0;
    if ( v78 <= 2 )
      v85 = 20;
    else
      v85 = 18;
    if ( !gameObject )
      goto LABEL_136;
    v86 = v78 <= 2 ? 188.0 : 178.0;
    v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v87, v86, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v88, v84, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, 20, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_136;
    UILabel__set_fontSize((UILabel_o *)gameObject, v85, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_136;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
      *(_DWORD *)(v55 + 20) = 1;
      v94 = (GiftMaster_o *)MasterData_object;
      v95 = (System_Func_object__bool__o **)(v55 + 24);
      while ( 1 )
      {
        v96 = *v95;
        v97 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
        if ( !*v95 )
        {
          v96 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_GachaExtraGiftEntity__bool__TypeInfo,
                                                 v57,
                                                 v92,
                                                 v93);
          System_Func_object__bool____ctor(
            v96,
            (Il2CppObject *)v55,
            Method_SummonConfirmDlgComponent___c__DisplayClass71_0__Open_b__0__,
            0LL);
          *(_QWORD *)(v55 + 24) = v96;
          sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 24), (int64_t)v96, v98, v99, v100, v101, v102, v103);
        }
        v104 = System_Linq_Enumerable__Where_object_(
                 v97,
                 (System_Func_TSource__bool__o *)v96,
                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
        v108 = SummonConfirmDlgComponent___c_TypeInfo;
        v109 = v104;
        if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo, v105);
          v108 = SummonConfirmDlgComponent___c_TypeInfo;
        }
        _9__71_1 = (System_Func_object__int__o *)v108->static_fields->__9__71_1;
        if ( !_9__71_1 )
        {
          if ( !v108->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v108, v105);
            v108 = SummonConfirmDlgComponent___c_TypeInfo;
          }
          v111 = (Il2CppObject *)v108->static_fields->__9;
          _9__71_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_GachaExtraGiftEntity__int__TypeInfo,
                                                     v105,
                                                     v106,
                                                     v107);
          System_Func_object__int____ctor(_9__71_1, v111, Method_SummonConfirmDlgComponent___c__Open_b__71_1__, 0LL);
          static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
          static_fields->__9__71_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__71_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__71_1,
            (int64_t)_9__71_1,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118);
        }
        v119 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                      v109,
                                                                      (System_Func_TSource__TResult__o *)_9__71_1,
                                                                      (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
        v120 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToList_int_(
                                                     v119,
                                                     (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
        gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(v120, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !v94 )
            goto LABEL_136;
          GiftListByIds = GiftMaster__GetGiftListByIds(v94, (System_Collections_Generic_IEnumerable_int__o *)v120, 0LL);
          SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v55 + 20), v122);
          bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v123);
          if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v55 + 20) == 1 )
          {
            SummonConfirmDlgComponent__SetBonusTextPos(this, v125);
            goto LABEL_105;
          }
          extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v125);
          if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v55 + 20) == 2 )
            break;
        }
        v127 = *(_DWORD *)(v55 + 20) + 1;
        v128 = *(_DWORD *)(v55 + 20) - 2 < 0;
        *(_DWORD *)(v55 + 20) = v127;
        if ( v128 == __OFSUB__(v127, 3) )
          goto LABEL_105;
      }
      SummonConfirmDlgComponent__SetExtraTextPos(this, v57);
LABEL_105:
      if ( isBonusSelect )
      {
        baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
        gameObject = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v57);
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
        v130 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v130,
          SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y,
          0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v131 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = SummonConfirmDlgComponent_TypeInfo->static_fields->BONUS_SELECT_BONUS_INFO_GET_POS_Y;
      }
      else
      {
        gameObject = this->fields.bonusMsgInfo;
        v133 = -42.0;
        if ( v78 > 2 )
          v133 = -44.0;
        v134 = -34.0;
        if ( v78 <= 2 )
          v134 = -30.0;
        if ( isAppendSummon )
          v135 = v134;
        else
          v135 = v133;
        if ( !gameObject )
          goto LABEL_136;
        v136 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v136, v135, 0LL);
        gameObject = this->fields.extraMsgInfo;
        if ( !gameObject )
          goto LABEL_136;
        v137 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        GameObjectExtensions__SetLocalPositionY(v137, v135, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.defMsgInfo, 10.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -104.0, 0LL);
        gameObject = this->fields.confirmBtnObject;
        if ( !gameObject )
          goto LABEL_136;
        v131 = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
        BONUS_SELECT_BONUS_INFO_GET_POS_Y = -22.0;
      }
      GameObjectExtensions__SetLocalPositionY(v131, BONUS_SELECT_BONUS_INFO_GET_POS_Y, 0LL);
    }
LABEL_125:
    state = this->fields.state;
  }
  if ( state == 6 || state == 8 )
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v138 = 1;
  }
  else
  {
    gameObject = this->fields.settingBtnObject;
    if ( !gameObject )
      goto LABEL_136;
    v138 = 0;
  }
  UnityEngine_GameObject__SetActive(gameObject, v138, 0LL);
  gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.singleMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL) )
  {
LABEL_136:
    sub_1BCAA3C(gameObject, v57);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v139);
  v143 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v140, v141, v142);
  System_Action___ctor(v143, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v143, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenBonusSelectNotHaveChargeStone(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        bool beforeWindow,
        bool afterWindow,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4B128DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, beforeWindow);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent_EndOpen__, v7, v8);
    byte_4B128DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = this->fields.bonusSelectNotHaveChargeStoneBeforeInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.defMsgInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.confirmBtnObject) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v11, v12, v13, v14, v15, v16);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
}


void __fastcall SummonConfirmDlgComponent__OpenConfirmFree(
        SummonConfirmDlgComponent_o *this,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        System_Action_o *autoSaleDialogCloseCallback,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  BalanceConfig_c *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  SummonConfirmDlgComponent_c *v26; // x8
  Il2CppObject *v27; // x23
  float CONFIRM_DETAIL_LABEL_POS_Y; // s8
  __int64 v29; // x1
  bool v30; // w22
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  System_String_o *v35; // x22
  UILabel_o *campaignLabel; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x25
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  SummonConfirmDlgComponent_c *v47; // x0
  System_String_o *v48; // x0
  const MethodInfo *v49; // [xsp+10h] [xbp-80h]
  int32_t v50; // [xsp+20h] [xbp-70h] BYREF
  int32_t v51; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v52; // [xsp+28h] [xbp-68h] BYREF
  int32_t maxNum; // [xsp+2Ch] [xbp-64h] BYREF
  int32_t remainNum; // [xsp+38h] [xbp-58h] BYREF
  int32_t DailyFreeGachaResetTime; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_4B128D8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, callback, autoSaleDialogCloseCallback);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_3850/*"CONFIRM_FREESUMMON_MSG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3849/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6642/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, v21, v22);
    byte_4B128D8 = 1;
  }
  v23 = BalanceConfig_TypeInfo;
  remainNum = 0;
  maxNum = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, callback);
    v23 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v23->static_fields->DailyFreeGachaResetTime;
  v24 = System_Int32__ToString((int32_t)&DailyFreeGachaResetTime, 0LL);
  v26 = SummonConfirmDlgComponent_TypeInfo;
  v27 = (Il2CppObject *)v24;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v25);
    v26 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v26->static_fields->CONFIRM_DETAIL_LABEL_POS_Y;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v25);
  v30 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &remainNum, &maxNum, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v30 )
      goto LABEL_11;
LABEL_18:
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3850/*"CONFIRM_FREESUMMON_MSG"*/, 0LL);
    v35 = System_String__Format(v48, v27, 0LL);
    goto LABEL_19;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  if ( !v30 )
    goto LABEL_18;
LABEL_11:
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3849/*"CONFIRM_FREESUMMON_CAMPAIGN_MSG"*/, 0LL);
  v52 = maxNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v31, v27, v32, 0LL);
  if ( !this->fields.campaignLabel )
    goto LABEL_20;
  v35 = (System_String_o *)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.campaignLabel, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  campaignLabel = this->fields.campaignLabel;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_6642/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_REMAIN_MSG"*/, 0LL);
  v51 = remainNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v50 = maxNum;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v37, v38, v39, 0LL);
  if ( !campaignLabel )
LABEL_20:
    sub_1BCAA3C(gameObject, v34);
  UILabel__set_text(campaignLabel, (System_String_o *)gameObject, 0LL);
  v47 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v40);
    v47 = SummonConfirmDlgComponent_TypeInfo;
  }
  CONFIRM_DETAIL_LABEL_POS_Y = v47->static_fields->CONFIRM_DETAIL_LABEL_CAMPAIGN_POS_Y;
LABEL_19:
  this->fields.state = 8;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  SummonConfirmDlgComponent__Open(this, 0LL, v35, 0LL, callback, CONFIRM_DETAIL_LABEL_POS_Y, 0LL, 0, 0, 0, 0LL, v49);
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  long double v50; // q0
  __int64 v51; // x0
  __int64 v52; // x0
  void *MasterData_object; // x0
  GachaEntity_array *GachaDataInGroup; // x27
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  void *v61; // x28
  __int64 v62; // x8
  int v63; // w24
  int max_length; // w21
  GachaEntity_o *v65; // x8
  GachaEntity_o *v66; // x9
  int64_t name; // x21
  int64_t v68; // x20
  UILabel_o *infoMsgLabel; // x27
  int32_t v70; // w25
  System_String_o *v71; // x28
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Object_array *v78; // x29
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x20
  System_Int32_c *v92; // x0
  int32_t *v93; // x1
  Il2CppObject *v94; // x20
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x20
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x20
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x20
  __int64 v123; // x1
  UILabel_o *msgLabel; // x26
  System_String_o *v125; // x27
  System_Object_array *v126; // x28
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x20
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x20
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x20
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x20
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x20
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x20
  UILabel_o *confirmBtnLb; // x20
  const MethodInfo *v170; // x2
  const MethodInfo *v171; // x1
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x3
  System_Action_o *v175; // x20
  __int64 v176; // x0
  struct GachaExtraGiftEntity_array **p_extraGiftEntList; // [xsp+0h] [xbp-90h]
  int32_t v178; // [xsp+Ch] [xbp-84h]
  int32_t v179; // [xsp+10h] [xbp-80h]
  int32_t v180; // [xsp+14h] [xbp-7Ch]
  int32_t v181; // [xsp+18h] [xbp-78h] BYREF
  int32_t v182; // [xsp+1Ch] [xbp-74h] BYREF
  int32_t v183; // [xsp+20h] [xbp-70h] BYREF
  int32_t v184; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t v185; // [xsp+28h] [xbp-68h] BYREF
  int v186; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B128DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&groupId, *(_QWORD *)&price);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaGroupMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&object___TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent_EndOpen__, v37, v38);
    sub_1BCA7E0(&StringLiteral_3854/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3852/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3853/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, v47, v48);
    byte_4B128DA = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    *(int64_t *)&price,
    haveStoneNum,
    *(System_String_o **)&haveFreeStoneNum,
    *(BattleSetupInfo_o **)&haveChargeStoneNum,
    *(FollowerInfo_o **)&afterStoneNum,
    *(PartyListViewItem_o **)&afterFreeStoneNum);
  v51 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
    v51 = sub_1C1C6BC(v50);
  v52 = *(_QWORD *)(*(_QWORD *)(v51 + 192) + 16LL);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1C1C6BC(v50);
  MasterData_object = **(void ***)(v52 + 184);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  GachaDataInGroup = GachaMaster__getGachaDataInGroup((GachaMaster_o *)MasterData_object, groupId, 0LL);
  MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MasterData_object )
    goto LABEL_84;
  v179 = haveFreeStoneNum;
  v180 = haveStoneNum;
  v178 = afterStoneNum;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaGroupMaster___);
  if ( !MasterData_object )
    goto LABEL_84;
  MasterData_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        groupId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__GetEntity__);
  v61 = MasterData_object;
  if ( !MasterData_object )
    goto LABEL_15;
  v62 = *((_QWORD *)MasterData_object + 4);
  if ( !v62 )
    goto LABEL_84;
  if ( *(_QWORD *)(v62 + 24) )
    v63 = *((_DWORD *)MasterData_object + 5);
  else
LABEL_15:
    v63 = 1;
  p_extraGiftEntList = &this->fields.extraGiftEntList;
  this->fields.extraGiftEntList = giftEntList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.extraGiftEntList,
    (int64_t)giftEntList,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( !GachaDataInGroup )
    goto LABEL_84;
  max_length = GachaDataInGroup->max_length;
  if ( max_length == 2 )
  {
    v65 = GachaDataInGroup->m_Items[0];
    if ( !v65 )
      goto LABEL_84;
    v66 = GachaDataInGroup->m_Items[1];
    if ( !v66 )
      goto LABEL_84;
    name = (int64_t)v65->fields.name;
    v68 = (int64_t)v66->fields.name;
    infoMsgLabel = this->fields.infoMsgLabel;
    v70 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3852/*"CONFIRM_GROUPSUMMON_INFOMSG"*/, 0LL);
    MasterData_object = (void *)sub_1BCA888(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v78 = (System_Object_array *)MasterData_object;
    if ( name )
    {
      MasterData_object = (void *)sub_1BCA91C(name, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v78->max_length )
      goto LABEL_85;
    v78->m_Items[0] = (Il2CppObject *)name;
    sub_1BCA784((PartyOrganizationUtility_o *)v78->m_Items, name, v72, v73, v74, v75, v76, v77);
    if ( v68 )
    {
      MasterData_object = (void *)sub_1BCA91C(v68, v78->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v78->max_length <= 1 )
      goto LABEL_85;
    v78->m_Items[1] = (Il2CppObject *)v68;
    sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[1], v68, v79, v80, v81, v82, v83, v84);
    v186 = v63;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
    v91 = (int64_t)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1BCA91C(MasterData_object, v78->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v78->max_length <= 2 )
      goto LABEL_85;
    v78->m_Items[2] = (Il2CppObject *)v91;
    sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[2], v91, v85, v86, v87, v88, v89, v90);
    v92 = int_TypeInfo;
    v93 = &v185;
    v185 = price;
  }
  else
  {
    if ( !v61 )
      goto LABEL_84;
    v94 = (Il2CppObject *)StringLiteral_1/*""*/;
    if ( !System_String__IsNullOrEmpty(*((System_String_o **)v61 + 3), 0LL) )
      v94 = (Il2CppObject *)*((_QWORD *)v61 + 3);
    infoMsgLabel = this->fields.infoMsgLabel;
    v70 = haveChargeStoneNum;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3853/*"CONFIRM_GROUPSUMMON_INFOMSG_2"*/, 0LL);
    MasterData_object = (void *)sub_1BCA888(object___TypeInfo, 4LL);
    if ( !MasterData_object )
      goto LABEL_84;
    v78 = (System_Object_array *)MasterData_object;
    if ( v94 )
    {
      MasterData_object = (void *)sub_1BCA91C(v94, *(_QWORD *)(*(_QWORD *)MasterData_object + 64LL));
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( !v78->max_length )
      goto LABEL_85;
    v78->m_Items[0] = v94;
    sub_1BCA784((PartyOrganizationUtility_o *)v78->m_Items, (int64_t)v94, v96, v97, v98, v99, v100, v101);
    v186 = max_length;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
    v108 = (int64_t)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1BCA91C(MasterData_object, v78->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v78->max_length <= 1 )
      goto LABEL_85;
    v78->m_Items[1] = (Il2CppObject *)v108;
    sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[1], v108, v102, v103, v104, v105, v106, v107);
    v185 = v63;
    MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v185);
    v115 = (int64_t)MasterData_object;
    if ( MasterData_object )
    {
      MasterData_object = (void *)sub_1BCA91C(MasterData_object, v78->obj.klass->_1.element_class);
      if ( !MasterData_object )
        goto LABEL_86;
    }
    if ( v78->max_length <= 2 )
      goto LABEL_85;
    v78->m_Items[2] = (Il2CppObject *)v115;
    sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[2], v115, v109, v110, v111, v112, v113, v114);
    v92 = int_TypeInfo;
    v184 = price;
    v93 = &v184;
  }
  MasterData_object = (void *)j_il2cpp_value_box_0(v92, v93);
  v122 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v78->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v78->max_length <= 3 )
    goto LABEL_85;
  v78->m_Items[3] = (Il2CppObject *)v122;
  sub_1BCA784((PartyOrganizationUtility_o *)&v78->m_Items[3], v122, v116, v117, v118, v119, v120, v121);
  MasterData_object = System_String__Format_62415728(v71, v78, 0LL);
  if ( !infoMsgLabel )
    goto LABEL_84;
  UILabel__set_text(infoMsgLabel, (System_String_o *)MasterData_object, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v123);
  v125 = LocalizationManager__Get((System_String_o *)StringLiteral_3854/*"CONFIRM_GROUPSUMMON_STONEMSG"*/, 0LL);
  v126 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  v186 = v180;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v186);
  if ( !v126 )
LABEL_84:
    sub_1BCAA3C(MasterData_object, v49);
  v133 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v126->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( !v126->max_length )
    goto LABEL_85;
  v126->m_Items[0] = (Il2CppObject *)v133;
  sub_1BCA784((PartyOrganizationUtility_o *)v126->m_Items, v133, v127, v128, v129, v130, v131, v132);
  v185 = v70;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v185);
  v140 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v126->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v126->max_length <= 1 )
    goto LABEL_85;
  v126->m_Items[1] = (Il2CppObject *)v140;
  sub_1BCA784((PartyOrganizationUtility_o *)&v126->m_Items[1], v140, v134, v135, v136, v137, v138, v139);
  v184 = v179;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v184);
  v147 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v126->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v126->max_length <= 2 )
    goto LABEL_85;
  v126->m_Items[2] = (Il2CppObject *)v147;
  sub_1BCA784((PartyOrganizationUtility_o *)&v126->m_Items[2], v147, v141, v142, v143, v144, v145, v146);
  v183 = v178;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v183);
  v154 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v126->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v126->max_length <= 3 )
    goto LABEL_85;
  v126->m_Items[3] = (Il2CppObject *)v154;
  sub_1BCA784((PartyOrganizationUtility_o *)&v126->m_Items[3], v154, v148, v149, v150, v151, v152, v153);
  v182 = afterChargeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v182);
  v161 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v126->obj.klass->_1.element_class);
    if ( !MasterData_object )
      goto LABEL_86;
  }
  if ( v126->max_length <= 4 )
    goto LABEL_85;
  v126->m_Items[4] = (Il2CppObject *)v161;
  sub_1BCA784((PartyOrganizationUtility_o *)&v126->m_Items[4], v161, v155, v156, v157, v158, v159, v160);
  v181 = afterFreeStoneNum;
  MasterData_object = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
  v168 = (int64_t)MasterData_object;
  if ( MasterData_object )
  {
    MasterData_object = (void *)sub_1BCA91C(MasterData_object, v126->obj.klass->_1.element_class);
    if ( !MasterData_object )
    {
LABEL_86:
      v176 = sub_1BCAA60();
      sub_1BCA908(v176, 0LL);
    }
  }
  if ( v126->max_length <= 5 )
LABEL_85:
    sub_1BCAA44(MasterData_object, v49);
  v126->m_Items[5] = (Il2CppObject *)v168;
  sub_1BCA784((PartyOrganizationUtility_o *)&v126->m_Items[5], v168, v162, v163, v164, v165, v166, v167);
  MasterData_object = System_String__Format_62415728(v125, v126, 0LL);
  if ( !msgLabel )
    goto LABEL_84;
  UILabel__set_text(msgLabel, (System_String_o *)MasterData_object, 0LL);
  confirmBtnLb = this->fields.confirmBtnLb;
  MasterData_object = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
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
    SummonConfirmDlgComponent__SetGroupSummonBonusMsg(this, shopIdIdx, v170);
  MasterData_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !MasterData_object )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MasterData_object, 1, 0LL);
  SummonConfirmDlgComponent__setBtnInfoActive(this, v171);
  v175 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v172, v173, v174);
  System_Action___ctor(v175, (Il2CppObject *)this, Method_SummonConfirmDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v175, 0, 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x27
  Il2CppObject *v22; // x28
  Il2CppObject *v23; // x29
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x26
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x0
  System_String_o *v29; // x23
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  SummonConfirmDlgComponent_c *v37; // x0
  const MethodInfo *v38; // [xsp+10h] [xbp-90h]
  int32_t v41; // [xsp+34h] [xbp-6Ch] BYREF
  int32_t v42; // [xsp+38h] [xbp-68h] BYREF
  int32_t v43; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B128D7 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&havePointNum, *(_QWORD *)&needPointNum);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3857/*"CONFIRM_POINTSUMMON_MSG"*/, v19, v20);
    byte_4B128D7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&havePointNum);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3857/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  v43 = needPointNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v42 = havePointNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v41 = afterPointNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  System_String__Format_62415660(v21, v22, v23, v24, 0LL);
  if ( System_String__IsNullOrEmpty(summonConfirmMessage, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    summonConfirmMessage = LocalizationManager__Get((System_String_o *)StringLiteral_3857/*"CONFIRM_POINTSUMMON_MSG"*/, 0LL);
  }
  v43 = needPointNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v42 = havePointNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v41 = afterPointNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v29 = System_String__Format_62415660(summonConfirmMessage, v26, v27, v28, 0LL);
  this->fields.state = 6;
  this->fields.autoSaleDialogCloseCallbackFunc = autoSaleDialogCloseCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
    (int64_t)autoSaleDialogCloseCallback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v37 = SummonConfirmDlgComponent_TypeInfo;
  if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v36);
    v37 = SummonConfirmDlgComponent_TypeInfo;
  }
  SummonConfirmDlgComponent__Open(
    this,
    0LL,
    v29,
    0LL,
    callback,
    v37->static_fields->CONFIRM_DETAIL_LABEL_POS_Y,
    0LL,
    0,
    0,
    0,
    gachaSubEntity,
    v38);
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  System_String_o **v64; // x8
  System_String_o *v65; // x25
  System_Object_array *v66; // x26
  __int64 addMsgBgSprite; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x27
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x27
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x27
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x27
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x27
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x27
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x27
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x27
  __int64 v125; // x1
  System_String_o *v126; // x29
  System_String_o *v127; // x27
  System_String_o *v128; // x26
  Il2CppObject *DateTime; // x0
  System_String_o *v130; // x0
  int32_t v131; // w1
  int32_t v132; // w1
  Il2CppObject *v133; // x0
  __int64 v134; // x1
  System_String_o *v135; // x27
  __int64 v136; // x1
  Il2CppObject *v137; // x0
  __int64 v138; // x1
  System_String_o *v139; // x27
  System_String_o *v140; // x0
  __int64 v141; // x1
  System_String_o *v142; // x27
  Il2CppObject *v143; // x24
  Il2CppObject *v144; // x0
  System_String_o *v145; // x27
  System_String_o *v146; // x24
  System_Object_array *v147; // x29
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x22
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x21
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x20
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x20
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x20
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  int64_t v189; // x20
  System_String_o *v190; // x20
  System_String_o *v191; // x0
  __int64 v192; // x1
  long double inited; // q0
  _QWORD *v194; // x21
  System_String_o *v195; // x22
  __int64 v196; // x8
  __int64 v197; // x0
  __int64 v198; // x0
  System_String_o *v199; // x25
  System_String_o *v200; // x0
  __int64 v201; // x1
  UnityEngine_Object_o *bonusSelectMsgInfo; // x29
  System_String_o *v203; // x22
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x29
  __int64 v206; // x1
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  __int64 v215; // x1
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v217; // x0
  __int64 v218; // x0
  const MethodInfo *isBonusSelect; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v220; // [xsp+10h] [xbp-B0h]
  System_String_o *titlea; // [xsp+18h] [xbp-A8h]
  System_String_o *titleb; // [xsp+18h] [xbp-A8h]
  int32_t v225; // [xsp+40h] [xbp-80h] BYREF
  int32_t v226; // [xsp+44h] [xbp-7Ch] BYREF
  int32_t v227; // [xsp+48h] [xbp-78h] BYREF
  int32_t v228; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t v229; // [xsp+50h] [xbp-70h] BYREF
  int32_t v230; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t v231; // [xsp+58h] [xbp-68h] BYREF
  int32_t v232; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4B128D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, title, *(_QWORD *)&type);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, v27, v28);
    sub_1BCA7E0(&int_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&object___TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v35, v36);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_3836/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3842/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3837/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3840/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3856/*"CONFIRM_PAYSUMMON_MSG"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_3838/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_3839/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12530/*"SUMMON_STONEPAY_WARNING_MSG"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12517/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12482/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_3841/*"CONFIRM_CHARGESUMMON_MSG"*/, v61, v62);
    byte_4B128D5 = 1;
  }
  this->fields.extraGiftEntList = giftEntList;
  sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
    v64 = (System_String_o **)&StringLiteral_3842/*"CONFIRM_CHARGESUMMON_PREFE_MSG"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
    v64 = (System_String_o **)&StringLiteral_3856/*"CONFIRM_PAYSUMMON_MSG"*/;
    if ( type == 7 )
      v64 = (System_String_o **)&StringLiteral_3841/*"CONFIRM_CHARGESUMMON_MSG"*/;
  }
  v65 = LocalizationManager__Get(*v64, 0LL);
  v66 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 8LL);
  v232 = price;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v232);
  if ( !v66 )
    goto LABEL_107;
  v75 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v66->max_length )
    goto LABEL_105;
  v66->m_Items[0] = (Il2CppObject *)v75;
  sub_1BCA784((PartyOrganizationUtility_o *)v66->m_Items, v75, v69, v70, v71, v72, v73, v74);
  v231 = num;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v231);
  v82 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 1 )
    goto LABEL_105;
  v66->m_Items[1] = (Il2CppObject *)v82;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[1], v82, v76, v77, v78, v79, v80, v81);
  v230 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v230);
  v89 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 2 )
    goto LABEL_105;
  v66->m_Items[2] = (Il2CppObject *)v89;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[2], v89, v83, v84, v85, v86, v87, v88);
  v229 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v229);
  v96 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 3 )
    goto LABEL_105;
  v66->m_Items[3] = (Il2CppObject *)v96;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[3], v96, v90, v91, v92, v93, v94, v95);
  v228 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v228);
  v103 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 4 )
    goto LABEL_105;
  v66->m_Items[4] = (Il2CppObject *)v103;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[4], v103, v97, v98, v99, v100, v101, v102);
  v227 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v227);
  v110 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 5 )
    goto LABEL_105;
  v66->m_Items[5] = (Il2CppObject *)v110;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[5], v110, v104, v105, v106, v107, v108, v109);
  v226 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v226);
  v117 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 6 )
    goto LABEL_105;
  v66->m_Items[6] = (Il2CppObject *)v117;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[6], v117, v111, v112, v113, v114, v115, v116);
  v225 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v225);
  v124 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v66->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v66->max_length <= 7 )
    goto LABEL_105;
  v66->m_Items[7] = (Il2CppObject *)v124;
  sub_1BCA784((PartyOrganizationUtility_o *)&v66->m_Items[7], v124, v118, v119, v120, v121, v122, v123);
  v126 = System_String__Format_62415728(v65, v66, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v125);
  v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12530/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
  if ( isPickup )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
    v128 = LocalizationManager__Get((System_String_o *)StringLiteral_12517/*"SUMMON_PU_STONEPAY_WARNING_MSG"*/, 0LL);
    DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
    v130 = System_String__Format(v128, DateTime, 0LL);
    v127 = System_String__Concat_62401220(v127, v130, 0LL);
  }
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  v131 = isPickup ? 494 : 434;
  UIWidget__set_width((UIWidget_o *)addMsgBgSprite, v131, 0LL);
  addMsgBgSprite = (__int64)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_107;
  if ( isPickup )
    v132 = 76;
  else
    v132 = 60;
  UIWidget__set_height((UIWidget_o *)addMsgBgSprite, v132, 0LL);
  this->fields.state = 4;
  if ( !gachaId )
  {
    SummonConfirmDlgComponent__Open(
      this,
      titlea,
      v126,
      0LL,
      callback,
      14.0,
      v127,
      shopIdIdx,
      isAppendSummon,
      0,
      0LL,
      v220);
    return;
  }
  v232 = gachaId;
  v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
  v135 = System_String__Format((System_String_o *)StringLiteral_3840/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v133, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v134);
  if ( LocalizationManager__ContainsKey(v135, 0LL) )
  {
    v232 = gachaId;
    v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
    v139 = System_String__Format((System_String_o *)StringLiteral_3840/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE_{0}"*/, v137, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v138);
    v140 = v139;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v136);
    v140 = (System_String_o *)StringLiteral_3839/*"CONFIRM_BONUS_SELECT_SUMMON_TITLE"*/;
  }
  titleb = LocalizationManager__Get(v140, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v141);
  v142 = LocalizationManager__Get((System_String_o *)StringLiteral_3837/*"CONFIRM_BONUS_SELECT_SUMMON_MSG"*/, 0LL);
  v232 = price;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v232);
  v231 = num;
  v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v231);
  v145 = System_String__Format_62415592(v142, v143, v144, 0LL);
  v146 = LocalizationManager__Get((System_String_o *)StringLiteral_3838/*"CONFIRM_BONUS_SELECT_SUMMON_STONE_NUM"*/, 0LL);
  v147 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
  v230 = haveStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v230);
  if ( !v147 )
    goto LABEL_107;
  v154 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v147->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( !v147->max_length )
    goto LABEL_105;
  v147->m_Items[0] = (Il2CppObject *)v154;
  sub_1BCA784((PartyOrganizationUtility_o *)v147->m_Items, v154, v148, v149, v150, v151, v152, v153);
  v229 = haveChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v229);
  v161 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v147->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v147->max_length <= 1 )
    goto LABEL_105;
  v147->m_Items[1] = (Il2CppObject *)v161;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[1], v161, v155, v156, v157, v158, v159, v160);
  v228 = haveFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v228);
  v168 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v147->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v147->max_length <= 2 )
    goto LABEL_105;
  v147->m_Items[2] = (Il2CppObject *)v168;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[2], v168, v162, v163, v164, v165, v166, v167);
  v227 = afterStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v227);
  v175 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v147->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v147->max_length <= 3 )
    goto LABEL_105;
  v147->m_Items[3] = (Il2CppObject *)v175;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[3], v175, v169, v170, v171, v172, v173, v174);
  v226 = afterChargeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v226);
  v182 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v147->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
      goto LABEL_106;
  }
  if ( v147->max_length <= 4 )
    goto LABEL_105;
  v147->m_Items[4] = (Il2CppObject *)v182;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[4], v182, v176, v177, v178, v179, v180, v181);
  v225 = afterFreeStoneNum;
  addMsgBgSprite = j_il2cpp_value_box_0(int_TypeInfo, &v225);
  v189 = addMsgBgSprite;
  if ( addMsgBgSprite )
  {
    addMsgBgSprite = sub_1BCA91C(addMsgBgSprite, v147->obj.klass->_1.element_class);
    if ( !addMsgBgSprite )
    {
LABEL_106:
      v218 = sub_1BCAA60();
      sub_1BCA908(v218, 0LL);
    }
  }
  if ( v147->max_length <= 5 )
LABEL_105:
    sub_1BCAA44(addMsgBgSprite, v68);
  v147->m_Items[5] = (Il2CppObject *)v189;
  sub_1BCA784((PartyOrganizationUtility_o *)&v147->m_Items[5], v189, v183, v184, v185, v186, v187, v188);
  v190 = System_String__Format_62415728(v146, v147, 0LL);
  v191 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"CONFIRM_BONUS_SELECT_SUMMON_LOW_MSG"*/, 0LL);
  v194 = Method_System_Array_Empty_object___;
  v195 = v191;
  v196 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v196 )
  {
    sub_1C1C718(Method_System_Array_Empty_object___, v192);
    v196 = v194[7];
  }
  v197 = *(_QWORD *)(v196 + 16);
  if ( (*(_BYTE *)(v197 + 309) & 1) == 0 )
    v197 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v197 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v197, v192);
  v198 = *(_QWORD *)(v194[7] + 16LL);
  if ( (*(_BYTE *)(v198 + 309) & 1) == 0 )
    v198 = sub_1C1C6BC(inited);
  v199 = v145;
  v200 = System_String__Format_62415728(v195, **(System_Object_array ***)(v198 + 184), 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  v203 = v200;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v201);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v206);
        addMsgBgSprite = (__int64)UnityEngine_Object__Instantiate_object__49903816(
                                    MsgInfoPrefab_k__BackingField,
                                    transform,
                                    (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( addMsgBgSprite )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)addMsgBgSprite,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
          *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
            (int64_t)Component_object,
            v209,
            v210,
            v211,
            v212,
            v213,
            v214);
          goto LABEL_99;
        }
      }
    }
LABEL_107:
    sub_1BCAA3C(addMsgBgSprite, v68);
  }
LABEL_99:
  addMsgBgSprite = (__int64)*p_bonusSelectMsgInfo;
  if ( !*p_bonusSelectMsgInfo )
    goto LABEL_107;
  BonusSelectSummonMsgInfo__SetConfirmDlg(
    (BonusSelectSummonMsgInfo_o *)addMsgBgSprite,
    gachaId,
    titleb,
    v199,
    v190,
    v203,
    tryGetBonusSelectData,
    assetManager,
    isBonusSelect);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v215);
  addMsgBgSprite = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_107;
  UILabel__set_text(cancelBtnLb, (System_String_o *)addMsgBgSprite, 0LL);
  v217 = LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
  SummonConfirmDlgComponent__Open(this, 0LL, 0LL, v217, callback, 14.0, 0LL, shopIdIdx, 0, 1, 0LL, v220);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x24
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x25
  Il2CppObject *v26; // x24
  Il2CppObject *v27; // x23
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // [xsp+10h] [xbp-60h]
  int32_t v30; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t v31; // [xsp+28h] [xbp-48h] BYREF
  int32_t v32; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_4B128D6 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, title, *(_QWORD *)&num);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3858/*"CONFIRM_TICKETSUMMON_MSG"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3859/*"CONFIRM_TICKETSUMMON_MSG2"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B128D6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, title);
  if ( num == 1 )
  {
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3858/*"CONFIRM_TICKETSUMMON_MSG"*/, 0LL);
    v32 = haveTicketNum;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v31 = afterTicketNum;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v24 = System_String__Format_62415592(v21, v22, v23, 0LL);
  }
  else
  {
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3859/*"CONFIRM_TICKETSUMMON_MSG2"*/, 0LL);
    v32 = num;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v31 = haveTicketNum;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v30 = afterTicketNum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v24 = System_String__Format_62415660(v25, v26, v27, v28, 0LL);
  }
  this->fields.state = 5;
  SummonConfirmDlgComponent__Open(this, title, v24, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v29);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x22
  System_String_o *v21; // x24
  Il2CppObject *v22; // x23
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  const MethodInfo *v27; // [xsp+10h] [xbp-70h]
  int32_t v28; // [xsp+24h] [xbp-5Ch] BYREF
  int32_t v29; // [xsp+28h] [xbp-58h] BYREF
  int32_t v30; // [xsp+2Ch] [xbp-54h] BYREF

  v30 = haveFreeStoneNum;
  if ( (byte_4B128D1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&price, *(_QWORD *)&haveChargeStoneNum);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_12433/*"STONE_PURCHASE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12262/*"SHORT_HAVE_CHARGE_STONE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B128D1 = 1;
  }
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&price);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12262/*"SHORT_HAVE_CHARGE_STONE"*/, 0LL);
  v29 = price;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v28 = haveChargeStoneNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v24 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v30, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
  v25 = System_String__Format_62415660(v21, v22, v23, v24, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v20, v25, v26, callback, 14.0, 0LL, 0, 0, 0, 0LL, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortPoint(
        SummonConfirmDlgComponent_o *this,
        int32_t havePoint,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // [xsp+10h] [xbp-50h]
  int32_t v18; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4B128D4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&havePoint, callback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_12263/*"SHORT_HAVE_POINT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12261/*"SHORT_DLG_TITLE"*/, v11, v12);
    byte_4B128D4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&havePoint);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SHORT_DLG_TITLE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SHORT_HAVE_POINT"*/, 0LL);
  v18 = havePoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v16 = System_String__Format(v14, v15, 0LL);
  this->fields.state = 3;
  SummonConfirmDlgComponent__Open(this, v13, v16, 0LL, callback, 14.0, 0LL, 0, 0, 0, 0LL, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__OpenShortStone(
        SummonConfirmDlgComponent_o *this,
        int32_t haveNum,
        SummonConfirmDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  System_String_o *v19; // x0
  const MethodInfo *v20; // [xsp+10h] [xbp-50h]
  int32_t v21; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B128D0 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&haveNum, callback);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_12433/*"STONE_PURCHASE"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12264/*"SHORT_HAVE_STONE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12261/*"SHORT_DLG_TITLE"*/, v13, v14);
    byte_4B128D0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&haveNum);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"SHORT_DLG_TITLE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SHORT_HAVE_STONE"*/, 0LL);
  v21 = haveNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v18 = System_String__Format(v16, v17, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12433/*"STONE_PURCHASE"*/, 0LL);
  this->fields.state = 2;
  SummonConfirmDlgComponent__Open(this, v15, v18, v19, callback, 14.0, 0LL, 0, 0, 0, 0LL, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__SetBonusText(
        SummonConfirmDlgComponent_o *this,
        System_Collections_Generic_List_GiftEntity__o *giftEntities,
        int32_t bonusType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_GameObject_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  int32_t m_CachedPtr; // w21
  BalanceConfig_c *v46; // x8
  Il2CppObject *object; // x0
  __int64 v48; // x1
  UILabel_o *titleLabel; // x21
  int32_t *v50; // x20
  System_String_o **v51; // x9
  System_String_o *v52; // x22
  __int64 v53; // x1
  UILabel_o *messageLabel; // x21
  System_String_o **v55; // x8
  System_String_o *v56; // x22
  System_String_o *v57; // x22
  Il2CppObject *v58; // x0
  System_Collections_Generic_IEnumerable_T__o *extraItemIconComponents; // x21
  SummonConfirmDlgComponent___c_c *v60; // x0
  System_Action_object__o *_9__76_0; // x22
  Il2CppObject *v62; // x23
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int i; // w24
  int32_t v71; // w21
  struct ItemIconComponent_array *v72; // x8
  struct UILabel_array *extraMessageLabels; // x9
  UnityEngine_Component_o *v74; // x23
  UILabel_o *v75; // x21
  int32_t *v76; // x22
  __int64 v77; // x1
  SummonConfirmDlgComponent_c *v78; // x0
  System_String_o *v79; // x0
  int32_t v80; // w8
  System_String_o *v81; // x22
  Il2CppObject *NumberFormat; // x0
  System_String_o *v83; // x0
  int32_t v84; // w8
  System_String_o *v85; // x22
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  UILabel_o *extraTitleLabel; // x19
  int32_t v89; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B128DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ItemIconComponent__TypeInfo, giftEntities, *(_QWORD *)&bonusType);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_ItemIconComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_GiftEntity___, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, v23, v24);
    sub_1BCA7E0(&SummonConfirmDlgComponent___c_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12492/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12494/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12495/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12497/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12496/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12493/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, v39, v40);
    byte_4B128DE = 1;
  }
  SelfUserGame = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( bonusType == 2 )
  {
    this->fields.isGetBonus = 1;
    extraItemIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraItemIconComponents;
    v60 = SummonConfirmDlgComponent___c_TypeInfo;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo, v42);
      v60 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__76_0 = (System_Action_object__o *)v60->static_fields->__9__76_0;
    if ( !_9__76_0 )
    {
      if ( !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60, v42);
        v60 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v62 = (Il2CppObject *)v60->static_fields->__9;
      _9__76_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ItemIconComponent__TypeInfo, v42, v43, v44);
      System_Action_object____ctor(_9__76_0, v62, Method_SummonConfirmDlgComponent___c__SetBonusText_b__76_0__, 0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__76_0 = (struct System_Action_ItemIconComponent__o *)_9__76_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__76_0,
        (int64_t)_9__76_0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    BasicHelper__ForEach_object_(
      extraItemIconComponents,
      (System_Action_T__o *)_9__76_0,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ItemIconComponent___);
    for ( i = 1; ; ++i )
    {
      SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      v71 = i - 1;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v42);
        SelfUserGame = (UnityEngine_GameObject_o *)SummonConfirmDlgComponent_TypeInfo;
      }
      if ( v71 >= *(_DWORD *)(*(_QWORD *)&SelfUserGame[7].fields.m_CachedPtr + 48LL) )
        break;
      if ( !giftEntities )
        goto LABEL_59;
      if ( v71 >= giftEntities->fields._size )
        break;
      SelfUserGame = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)giftEntities,
                                                   v71,
                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      v72 = this->fields.extraItemIconComponents;
      if ( !v72 )
        goto LABEL_59;
      if ( v71 >= v72->max_length )
        goto LABEL_60;
      extraMessageLabels = this->fields.extraMessageLabels;
      if ( !extraMessageLabels )
        goto LABEL_59;
      if ( v71 >= extraMessageLabels->max_length )
LABEL_60:
        sub_1BCAA44(SelfUserGame, v42);
      v74 = (UnityEngine_Component_o *)v72->m_Items[v71];
      if ( !v74 )
        goto LABEL_59;
      v75 = extraMessageLabels->m_Items[v71];
      v76 = (int32_t *)SelfUserGame;
      SelfUserGame = UnityEngine_Component__get_gameObject(v74, 0LL);
      if ( !SelfUserGame )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive(SelfUserGame, 1, 0LL);
      if ( !v76 )
        goto LABEL_59;
      ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)v74, v76[5], v76[6], v76[7], 0, 0LL);
      if ( i == giftEntities->fields._size )
        goto LABEL_63;
      v78 = SummonConfirmDlgComponent_TypeInfo;
      if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v77);
        v78 = SummonConfirmDlgComponent_TypeInfo;
      }
      if ( i == v78->static_fields->EXTRA_BONUS_LIMIT )
      {
LABEL_63:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12492/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, 0LL);
        v80 = v76[7];
        v81 = v79;
        NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(v80, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v81, NumberFormat, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12493/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE_2"*/, 0LL);
        v84 = v76[7];
        v85 = v83;
        v86 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v84, 0LL);
        v87 = System_String__Format(v85, v86, 0LL);
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                     v87,
                                                     (System_String_o *)StringLiteral_116/*" "*/,
                                                     0LL);
      }
      v42 = SelfUserGame;
      if ( !v75 )
        goto LABEL_59;
      UILabel__set_text(v75, (System_String_o *)SelfUserGame, 0LL);
    }
    extraTitleLabel = this->fields.extraTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
    SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12495/*"SUMMON_CONFIRM_DLG_EXTRA_TITLE"*/, 0LL);
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
  v46 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v42);
    v46 = BalanceConfig_TypeInfo;
  }
  this->fields.isGetBonus = m_CachedPtr < v46->static_fields->ManaMax;
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)giftEntities,
             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_GiftEntity___);
  titleLabel = this->fields.titleLabel;
  v50 = (int32_t *)object;
  if ( this->fields.isGetBonus )
    v51 = (System_String_o **)&StringLiteral_12494/*"SUMMON_CONFIRM_DLG_BONUS_TITLE"*/;
  else
    v51 = (System_String_o **)&StringLiteral_12497/*"SUMMON_CONFIRM_DLG_NOT_GET_TITLE"*/;
  v52 = *v51;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v52, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)SelfUserGame, 0LL);
  messageLabel = this->fields.messageLabel;
  v55 = this->fields.isGetBonus ? (System_String_o **)&StringLiteral_12492/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/ : (System_String_o **)&StringLiteral_12496/*"SUMMON_CONFIRM_DLG_NOT_GET_MSG"*/;
  v56 = *v55;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
  SelfUserGame = (UnityEngine_GameObject_o *)LocalizationManager__Get(v56, 0LL);
  if ( !v50
    || (v57 = (System_String_o *)SelfUserGame,
        v89 = v50[7],
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89),
        SelfUserGame = (UnityEngine_GameObject_o *)System_String__Format(v57, v58, 0LL),
        !messageLabel)
    || (UILabel__set_text(messageLabel, (System_String_o *)SelfUserGame, 0LL),
        (SelfUserGame = (UnityEngine_GameObject_o *)this->fields.bonusItemIconComponent) == 0LL) )
  {
LABEL_59:
    sub_1BCAA3C(SelfUserGame, v42);
  }
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)SelfUserGame, v50[5], v50[6], v50[7], 0, 0LL);
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
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B128DF & 1) == 0 )
  {
    this = (SummonConfirmDlgComponent_o *)sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, method, v2);
    byte_4B128DF = 1;
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
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, method);
      this = (SummonConfirmDlgComponent_o *)SummonConfirmDlgComponent_TypeInfo;
    }
    if ( (signed int)v6 >= SLODWORD(this->fields.closeBtnLb->fields.bottomAnchor) )
      break;
    extraItemIconComponents = v3->fields.extraItemIconComponents;
    if ( !extraItemIconComponents )
      goto LABEL_27;
    if ( v6 >= extraItemIconComponents->max_length )
LABEL_28:
      sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonConfirmDlgComponent__SetGroupSummonBonusMsg(
        SummonConfirmDlgComponent_o *this,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x20
  UIWidget_o *baseWindowSprite; // x0
  __int64 v32; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *MasterData_object; // x21
  System_Func_object__bool__o **v40; // x22
  System_Func_object__bool__o *v41; // x24
  System_Collections_Generic_IEnumerable_TSource__o *extraGiftEntList; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  SummonConfirmDlgComponent___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x23
  System_Func_object__int__o *_9__75_1; // x24
  Il2CppObject *v56; // x25
  struct SummonConfirmDlgComponent___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_ICollection_o *v65; // x23
  System_Collections_Generic_List_GiftEntity__o *GiftListByIds; // x0
  const MethodInfo *v67; // x3
  __int64 v68; // x1
  UnityEngine_Object_o *bonusMsgInfo; // x23
  __int64 v70; // x1
  UnityEngine_GameObject_o *v71; // x23
  SummonConfirmDlgComponent_c *v72; // x0
  const MethodInfo *v73; // x1
  UnityEngine_Object_o *extraMsgInfo; // x23
  UnityEngine_GameObject_o *v75; // x23
  UnityEngine_Object_o *v76; // x24
  SummonConfirmDlgComponent_c *v77; // x0
  __int64 v78; // x8
  const MethodInfo *v79; // x1
  int v80; // w8
  bool v81; // nf

  if ( (byte_4B128DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, *(_QWORD *)&shopIdIdx, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_GachaExtraGiftEntity__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_GachaExtraGiftEntity__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&SummonConfirmDlgComponent_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__, v22, v23);
    sub_1BCA7E0(&Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__, v24, v25);
    sub_1BCA7E0(&SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&SummonConfirmDlgComponent___c_TypeInfo, v28, v29);
    byte_4B128DD = 1;
  }
  v30 = sub_1BCAA2C(SummonConfirmDlgComponent___c__DisplayClass75_0_TypeInfo, *(_QWORD *)&shopIdIdx, method, v3);
  SummonConfirmDlgComponent___c__DisplayClass75_0___ctor((SummonConfirmDlgComponent___c__DisplayClass75_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_51;
  *(_DWORD *)(v30 + 16) = shopIdIdx;
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
    || (v35 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v35, 19.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)this->fields.msgLabel) == 0LL)
    || (v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindowSprite, 0LL),
        GameObjectExtensions__SetLocalPositionY(v36, -29.0, 0LL),
        (baseWindowSprite = (UIWidget_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
LABEL_51:
    sub_1BCAA3C(baseWindowSprite, v32);
  }
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)baseWindowSprite,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  v40 = (System_Func_object__bool__o **)(v30 + 24);
  *(_DWORD *)(v30 + 20) = 1;
  do
  {
    v41 = *v40;
    extraGiftEntList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.extraGiftEntList;
    if ( !*v40 )
    {
      v41 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GachaExtraGiftEntity__bool__TypeInfo, v32, v37, v38);
      System_Func_object__bool____ctor(
        v41,
        (Il2CppObject *)v30,
        Method_SummonConfirmDlgComponent___c__DisplayClass75_0__SetGroupSummonBonusMsg_b__0__,
        0LL);
      *(_QWORD *)(v30 + 24) = v41;
      sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 24), (int64_t)v41, v43, v44, v45, v46, v47, v48);
    }
    v49 = System_Linq_Enumerable__Where_object_(
            extraGiftEntList,
            (System_Func_TSource__bool__o *)v41,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GachaExtraGiftEntity___);
    v53 = SummonConfirmDlgComponent___c_TypeInfo;
    v54 = v49;
    if ( !SummonConfirmDlgComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent___c_TypeInfo, v50);
      v53 = SummonConfirmDlgComponent___c_TypeInfo;
    }
    _9__75_1 = (System_Func_object__int__o *)v53->static_fields->__9__75_1;
    if ( !_9__75_1 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53, v50);
        v53 = SummonConfirmDlgComponent___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v53->static_fields->__9;
      _9__75_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_GachaExtraGiftEntity__int__TypeInfo,
                                                 v50,
                                                 v51,
                                                 v52);
      System_Func_object__int____ctor(
        _9__75_1,
        v56,
        Method_SummonConfirmDlgComponent___c__SetGroupSummonBonusMsg_b__75_1__,
        0LL);
      static_fields = SummonConfirmDlgComponent___c_TypeInfo->static_fields;
      static_fields->__9__75_1 = (struct System_Func_GachaExtraGiftEntity__int__o *)_9__75_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__75_1,
        (int64_t)_9__75_1,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v54,
                                                                 (System_Func_TSource__TResult__o *)_9__75_1,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_GachaExtraGiftEntity__int___);
    v65 = (System_Collections_ICollection_o *)System_Linq_Enumerable__ToArray_int_(
                                                v64,
                                                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    baseWindowSprite = (UIWidget_o *)BasicHelper__IsNullOrEmpty(v65, 0LL);
    if ( ((unsigned __int8)baseWindowSprite & 1) == 0 )
    {
      if ( !MasterData_object )
        goto LABEL_51;
      GiftListByIds = GiftMaster__GetGiftListByIds(
                        (GiftMaster_o *)MasterData_object,
                        (System_Collections_Generic_IEnumerable_int__o *)v65,
                        0LL);
      SummonConfirmDlgComponent__SetBonusText(this, GiftListByIds, *(_DWORD *)(v30 + 20), v67);
      bonusMsgInfo = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
      if ( UnityEngine_Object__op_Inequality(bonusMsgInfo, 0LL, 0LL) && *(_DWORD *)(v30 + 20) == 1 )
      {
        v71 = this->fields.bonusMsgInfo;
        v72 = SummonConfirmDlgComponent_TypeInfo;
        if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v70);
          v72 = SummonConfirmDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v71, v72->static_fields->GROUP_BONUS_LABEL_POS_Y, 0LL);
        SummonConfirmDlgComponent__SetBonusTextPos(this, v73);
      }
      extraMsgInfo = (UnityEngine_Object_o *)this->fields.extraMsgInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
      if ( UnityEngine_Object__op_Inequality(extraMsgInfo, 0LL, 0LL) && *(_DWORD *)(v30 + 20) == 2 )
      {
        v75 = this->fields.extraMsgInfo;
        v76 = (UnityEngine_Object_o *)this->fields.bonusMsgInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        if ( !UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
          goto LABEL_44;
        baseWindowSprite = (UIWidget_o *)this->fields.bonusMsgInfo;
        if ( !baseWindowSprite )
          goto LABEL_51;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)baseWindowSprite, 0LL) )
        {
          v77 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v32);
            v77 = SummonConfirmDlgComponent_TypeInfo;
          }
          v78 = 36LL;
        }
        else
        {
LABEL_44:
          v77 = SummonConfirmDlgComponent_TypeInfo;
          if ( !SummonConfirmDlgComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonConfirmDlgComponent_TypeInfo, v32);
            v77 = SummonConfirmDlgComponent_TypeInfo;
          }
          v78 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v75,
          *(float *)((char *)&v77->static_fields->CONFIRM_TITLE_LABEL_POS_Y + v78),
          0LL);
        SummonConfirmDlgComponent__SetExtraTextPos(this, v79);
      }
    }
    v80 = *(_DWORD *)(v30 + 20) + 1;
    v81 = *(_DWORD *)(v30 + 20) - 2 < 0;
    *(_DWORD *)(v30 + 20) = v80;
  }
  while ( v81 != __OFSUB__(v80, 3) );
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

  if ( (byte_4B128CD & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B128CD = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B128CE & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B128CE = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  SummonConfirmDlgComponent__Init(v10, v11);
}


void __fastcall SummonConfirmDlgComponent__setBtnInfoActive(
        SummonConfirmDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  unsigned int state; // w8
  UnityEngine_GameObject_o *closeBtnObject; // x0
  __int64 v8; // x1
  int32_t v9; // w8
  UILabel_o *settingBtnLb; // x20

  if ( (byte_4B128DC & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, v4, v5);
    byte_4B128DC = 1;
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
        sub_1BCAA3C(closeBtnObject, method);
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
  v9 = this->fields.state;
  if ( v9 == 8 || v9 == 6 )
  {
    settingBtnLb = this->fields.settingBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    closeBtnObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12475/*"SUMMON_AUTOSALE_BUTTON"*/, 0LL);
    if ( !settingBtnLb )
      goto LABEL_32;
    UILabel__set_text(settingBtnLb, (System_String_o *)closeBtnObject, 0LL);
    closeBtnObject = this->fields.settingBtnObject;
    if ( !closeBtnObject )
      goto LABEL_32;
    goto LABEL_30;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonConfirmDlgComponent__setTutorial(
        SummonConfirmDlgComponent_o *this,
        bool isTutorial,
        const MethodInfo *method)
{
  struct UIButton_o *closeBtn; // x0

  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    sub_1BCAA3C(0LL, isTutorial);
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
  AutomaticSaleDlgComponent__Close_33596684(autoSaleDlgInfo, 0LL, method);
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
    sub_1BCAA3C(autoSaleDlgInfo, res);
  }
  autoSaleDialogCloseCallbackFunc = this->fields.autoSaleDialogCloseCallbackFunc;
  if ( autoSaleDialogCloseCallbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.autoSaleDialogCloseCallbackFunc = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.autoSaleDialogCloseCallbackFunc,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    SummonConfirmDlgComponent__Close_33677756(this, 0LL, v19);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A08DC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08D80;
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
  if ( (byte_4B128E6 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B128E6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SummonConfirmDlgComponent_CallbackFunc__EndInvoke(
        SummonConfirmDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B128E7 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonConfirmDlgComponent___c_TypeInfo, v1, v2);
    byte_4B128E7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SummonConfirmDlgComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SummonConfirmDlgComponent___c_TypeInfo->static_fields->__9 = (struct SummonConfirmDlgComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonConfirmDlgComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, obj);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int32_t __fastcall SummonConfirmDlgComponent___c___SetGroupSummonBonusMsg_b__75_1(
        SummonConfirmDlgComponent___c_o *this,
        GachaExtraGiftEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.giftId
      && entity->fields.idx == this->fields.shopIdIdx
      && entity->fields.bonusType == this->fields.bonusType;
}