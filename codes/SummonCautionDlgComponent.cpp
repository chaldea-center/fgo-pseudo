void __fastcall SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonCautionDlgComponent_c *v2; // x8

  if ( (byte_418585D & 1) == 0 )
  {
    sub_B2C35C(&SummonCautionDlgComponent_TypeInfo, v1);
    byte_418585D = 1;
  }
  SummonCautionDlgComponent_TypeInfo->static_fields->TITLE_LABEL_POS_Y = 130.0;
  SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y = 5.0;
  v2 = SummonCautionDlgComponent_TypeInfo;
  SummonCautionDlgComponent_TypeInfo->static_fields->TITLE_LABEL_ADDMSG_POS_Y = 150.0;
  v2->static_fields->MSG_LABEL_ADDMSG_POS_Y = 20.5;
}


void __fastcall SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418585C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418585C = 1;
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
  struct SummonCautionDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  SummonCautionDlgComponent_CallbackFunc_o *v4; // x19
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    SummonCautionDlgComponent_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall SummonCautionDlgComponent__Close(
        SummonCautionDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4185859 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SummonCautionDlgComponent_EndClose__, v5);
    byte_4185859 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v4; // x1
  BonusSelectSummonMsgInfo_o *v5; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_418585A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418585A = 1;
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
    v5 = this->fields.bonusSelectMsgInfo;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    BonusSelectSummonMsgInfo__Init(v5, 0LL);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
    System_Action__Invoke(v7, 0LL);
  }
}


void __fastcall SummonCautionDlgComponent__Init(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_4185857 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v4);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4185857 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_24;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
    sub_B2C434(titleLabel, method);
  }
  v12 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, 0.0, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x27
  UnityEngine_GameObject_o *gameObject; // x27
  SummonCautionDlgComponent_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *addMsgInfo; // x26
  UnityEngine_GameObject_o *v34; // x0
  SummonCautionDlgComponent_c *v35; // x8
  UnityEngine_GameObject_o *v36; // x26
  UnityEngine_GameObject_o *v37; // x0
  System_String_o *v38; // x26
  System_String_o *v39; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x26
  System_String_o *v43; // x27
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v52; // x26
  UILabel_o *cancelBtnLb; // x26
  bool v54; // w1

  if ( (byte_4185858 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, title);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&SummonCautionDlgComponent_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_12443/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, v21);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B2C35C(&StringLiteral_12467/*"SUMMON_STONEPAY_WARNING_MSG"*/, v23);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B2C35C(&StringLiteral_12424/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, v25);
    sub_B2C35C(&StringLiteral_12420/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v26);
    byte_4185858 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_62;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_62;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  v31 = SummonCautionDlgComponent_TypeInfo;
  if ( (BYTE3(SummonCautionDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v31 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v31->static_fields->TITLE_LABEL_POS_Y, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_62;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v32, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0LL);
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
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      v35 = SummonCautionDlgComponent_TypeInfo;
      v36 = v34;
      if ( (BYTE3(SummonCautionDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
        v35 = SummonCautionDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v36, v35->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0LL);
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_62;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v37,
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
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12467/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0LL);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v41 = System_String__Format(v39, DateTime, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_44305532(v38, v41, 0LL);
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
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12467/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0LL);
      v44 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v45 = System_String__Format(v43, v44, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_44305532(v42, v45, 0LL);
      if ( this->fields.addMsgLabel )
      {
        UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0LL);
        titleLabel = this->fields.addMsgLabel;
        if ( titleLabel )
        {
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
          GameObjectExtensions__SetLocalPositionY(v46, -1.0, 0LL);
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
                             (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
              if ( !titleLabel )
                goto LABEL_62;
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)titleLabel,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
              *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
              sub_B2C2F8(&this->fields.bonusSelectMsgInfo, Component_srcLineSprite);
            }
            titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
            if ( titleLabel )
            {
              UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
              v52 = this->fields.confirmBtnLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12420/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
              if ( v52 )
              {
                UILabel__set_text(v52, (System_String_o *)titleLabel, 0LL);
                cancelBtnLb = this->fields.cancelBtnLb;
                titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                      v54 = 0;
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
    sub_B2C434(titleLabel, v27);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_62;
  v54 = 1;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v54, 0LL);
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

  if ( (byte_4185855 & 1) == 0 )
  {
    sub_B2C35C(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4185855 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonCautionDlgComponent_o *)sub_B2C728(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418585B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4223/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, method);
    byte_418585B = 1;
  }
  return (System_String_o *)StringLiteral_4223/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
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

  if ( (byte_4185856 & 1) == 0 )
  {
    sub_B2C35C(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4185856 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonCautionDlgComponent_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41847B0 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41847B0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonCautionDlgComponent_CallbackFunc__Invoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SummonCautionDlgComponent_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  SummonCautionDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SummonCautionDlgComponent_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SummonCautionDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}