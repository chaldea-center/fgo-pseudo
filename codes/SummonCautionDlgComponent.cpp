void __fastcall SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  SummonCautionDlgComponent_c *v1; // x8

  if ( (byte_438CEA8 & 1) == 0 )
  {
    sub_B775C4(&SummonCautionDlgComponent_TypeInfo);
    byte_438CEA8 = 1;
  }
  SummonCautionDlgComponent_TypeInfo->static_fields->TITLE_LABEL_POS_Y = 130.0;
  SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y = 5.0;
  v1 = SummonCautionDlgComponent_TypeInfo;
  SummonCautionDlgComponent_TypeInfo->static_fields->TITLE_LABEL_ADDMSG_POS_Y = 150.0;
  v1->static_fields->MSG_LABEL_ADDMSG_POS_Y = 20.5;
}


void __fastcall SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_438CEA7 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438CEA7 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonCautionDlgComponent__Callback(
        SummonCautionDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SummonCautionDlgComponent_CallbackFunc_o *v9; // x19
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SummonCautionDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall SummonCautionDlgComponent__Close(
        SummonCautionDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438CEA4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SummonCautionDlgComponent_EndClose__);
    byte_438CEA4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BonusSelectSummonMsgInfo_o *v11; // x0
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_438CEA5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CEA5 = 1;
  }
  SummonCautionDlgComponent__Init(this, method);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    v11 = this->fields.bonusSelectMsgInfo;
    if ( !v11 )
      sub_B7769C(0LL, v4);
    BonusSelectSummonMsgInfo__Init(v11, 0LL);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v13, 0LL);
  }
}


void __fastcall SummonCautionDlgComponent__Init(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_438CEA2 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CEA2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_24;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_24;
  UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0LL);
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !titleLabel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -83.0, 0LL);
  titleLabel = this->fields.addMsgLabel;
  if ( !titleLabel )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
  if ( !titleLabel )
    goto LABEL_24;
  UIWidget__set_width((UIWidget_o *)titleLabel, 464, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    titleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !titleLabel )
      goto LABEL_24;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)titleLabel, 0LL);
  }
  titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !titleLabel
    || (UIWidget__set_height((UIWidget_o *)titleLabel, 480, 0LL),
        (titleLabel = (UILabel_o *)this->fields.confirmBtnObject) == 0LL) )
  {
LABEL_24:
    sub_B7769C(titleLabel, method);
  }
  v8 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 0.0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonCautionDlgComponent__OnClickCancel(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonCautionDlgComponent__Callback(this, 0, v2);
}


void __fastcall SummonCautionDlgComponent__OnClickDecide(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonCautionDlgComponent__Callback(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonCautionDlgComponent__OpenCautionMessageDlg(
        SummonCautionDlgComponent_o *this,
        System_String_o *title,
        System_String_o *message,
        bool isGroupSummon,
        int64_t summonCloseAt,
        SummonCautionDlgComponent_CallbackFunc_o *callback,
        int32_t gachaId,
        BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectData,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v17; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x27
  UnityEngine_GameObject_o *gameObject; // x27
  SummonCautionDlgComponent_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *addMsgInfo; // x26
  UnityEngine_GameObject_o *v24; // x0
  SummonCautionDlgComponent_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x26
  UnityEngine_GameObject_o *v27; // x0
  System_String_o *v28; // x26
  System_String_o *v29; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x26
  System_String_o *v33; // x27
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UILabel_o *v48; // x26
  UILabel_o *cancelBtnLb; // x26
  bool v50; // w1

  if ( (byte_438CEA3 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SummonCautionDlgComponent_TypeInfo);
    sub_B775C4(&StringLiteral_12676/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12700/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12657/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/);
    sub_B775C4(&StringLiteral_12653/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    byte_438CEA3 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)message,
    (System_String_array **)isGroupSummon,
    (System_Boolean_array **)summonCloseAt,
    (System_Int32_array **)callback,
    *(System_Int32_array **)&gachaId,
    (System_Int32_array *)tryGetBonusSelectData);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_62;
  UILabel__set_text(titleLabel, title, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_62;
  UILabel__set_text(titleLabel, message, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_62;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_62;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  v21 = SummonCautionDlgComponent_TypeInfo;
  if ( (BYTE3(SummonCautionDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v21 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v21->static_fields->TITLE_LABEL_POS_Y, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_62;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v22, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0LL);
  if ( isGroupSummon )
  {
    addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_62;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      v25 = SummonCautionDlgComponent_TypeInfo;
      v26 = v24;
      if ( (BYTE3(SummonCautionDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
        v25 = SummonCautionDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v26, v25->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0LL);
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_62;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v27,
        SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y,
        0LL);
      titleLabel = (UILabel_o *)this->fields.addMsgInfo;
      if ( !titleLabel )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12700/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12676/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0LL);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v31 = System_String__Format(v29, DateTime, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_44901936(v28, v31, 0LL);
      if ( !this->fields.addMsgLabel )
        goto LABEL_62;
      UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0LL);
    }
  }
  if ( gachaId )
  {
    titleLabel = (UILabel_o *)this->fields.addMsgInfo;
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -100.0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12700/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12657/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0LL);
      v34 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v35 = System_String__Format(v33, v34, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_44901936(v32, v35, 0LL);
      if ( this->fields.addMsgLabel )
      {
        UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0LL);
        titleLabel = this->fields.addMsgLabel;
        if ( titleLabel )
        {
          v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
          GameObjectExtensions__SetLocalPositionY(v36, -1.0, 0LL);
          titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
          if ( titleLabel )
          {
            UIWidget__set_width((UIWidget_o *)titleLabel, 540, 0LL);
            p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
            bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            titleLabel = (UILabel_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
            if ( ((unsigned __int8)titleLabel & 1) != 0 )
            {
              if ( !assetManager )
                goto LABEL_62;
              titleLabel = (UILabel_o *)this->fields.baseWindow;
              if ( !titleLabel )
                goto LABEL_62;
              MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)titleLabel, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              titleLabel = UnityEngine_Object__Instantiate_UILabel_(
                             (UILabel_o *)MsgInfoPrefab_k__BackingField,
                             transform,
                             (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
              if ( !titleLabel )
                goto LABEL_62;
              Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)titleLabel,
                                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
              *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
              sub_B77560(
                (BattleServantConfConponent_o *)&this->fields.bonusSelectMsgInfo,
                Component_srcLineSprite,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
            }
            titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
            if ( titleLabel )
            {
              UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
              v48 = this->fields.confirmBtnLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12653/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
              if ( v48 )
              {
                UILabel__set_text(v48, (System_String_o *)titleLabel, 0LL);
                cancelBtnLb = this->fields.cancelBtnLb;
                titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                if ( cancelBtnLb )
                {
                  UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0LL);
                  titleLabel = (UILabel_o *)*p_bonusSelectMsgInfo;
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetCautionDlg(
                      (BonusSelectSummonMsgInfo_o *)titleLabel,
                      gachaId,
                      title,
                      message,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    titleLabel = (UILabel_o *)this->fields.cautionInfo;
                    if ( titleLabel )
                    {
                      v50 = 0;
                      goto LABEL_60;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_B7769C(titleLabel, v17);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_62;
  v50 = 1;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v50, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}


void __fastcall SummonCautionDlgComponent__add_callbackFunc(
        SummonCautionDlgComponent_o *this,
        SummonCautionDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonCautionDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonCautionDlgComponent_o *v11; // x0
  SummonCautionDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438CEA0 & 1) == 0 )
  {
    sub_B775C4(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_438CEA0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonCautionDlgComponent_CallbackFunc_c *)v8->klass != SummonCautionDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonCautionDlgComponent_o *)sub_B77990(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438CEA6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4355/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    byte_438CEA6 = 1;
  }
  return (System_String_o *)StringLiteral_4355/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
}


void __fastcall SummonCautionDlgComponent__remove_callbackFunc(
        SummonCautionDlgComponent_o *this,
        SummonCautionDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonCautionDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonCautionDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438CEA1 & 1) == 0 )
  {
    sub_B775C4(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_438CEA1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonCautionDlgComponent_CallbackFunc_c *)v8->klass != SummonCautionDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonCautionDlgComponent_o *)sub_B77990(v8);
  SummonCautionDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonCautionDlgComponent_CallbackFunc___ctor(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall SummonCautionDlgComponent_CallbackFunc__BeginInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_43886B5 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43886B5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonCautionDlgComponent_CallbackFunc__Invoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SummonCautionDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  SummonCautionDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SummonCautionDlgComponent_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SummonCautionDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}