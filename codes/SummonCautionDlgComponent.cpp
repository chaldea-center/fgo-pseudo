void __fastcall SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SummonCautionDlgComponent_c *v2; // x8

  if ( (byte_40F7CF1 & 1) == 0 )
  {
    sub_B16FFC(&SummonCautionDlgComponent_TypeInfo, v1);
    byte_40F7CF1 = 1;
  }
  SummonCautionDlgComponent_TypeInfo->static_fields->TITLE_LABEL_POS_Y = 130.0;
  SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y = 5.0;
  v2 = SummonCautionDlgComponent_TypeInfo;
  SummonCautionDlgComponent_TypeInfo->static_fields->TITLE_LABEL_ADDMSG_POS_Y = 150.0;
  v2->static_fields->MSG_LABEL_ADDMSG_POS_Y = 20.5;
}


void __fastcall SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F7CF0 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7CF0 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F7CED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SummonCautionDlgComponent_EndClose__, v10);
    byte_40F7CED = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BonusSelectSummonMsgInfo_o *v10; // x0
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_40F7CEE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7CEE = 1;
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
    v10 = this->fields.bonusSelectMsgInfo;
    if ( !v10 )
      sub_B170D4();
    BonusSelectSummonMsgInfo__Init(v10, 0LL);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall SummonCautionDlgComponent__Init(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *confirmBtnLabel; // x20
  System_String_o *v10; // x0
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v12; // x0
  UnityEngine_GameObject_o *cautionInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *addMsgInfo; // x0
  UnityEngine_Component_o *addMsgLabel; // x0
  UnityEngine_GameObject_o *v17; // x0
  UIWidget_o *addMsgBgSprite; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  BonusSelectSummonMsgInfo_o *v20; // x0
  UIWidget_o *baseWindowSprite; // x0
  UnityEngine_GameObject_o *confirmBtnObject; // x0
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_40F7CEB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v4);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F7CEB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_24;
  UILabel__set_text(confirmBtnLabel, v10, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_24;
  UILabel__set_text(cancelBtnLb, v12, 0LL);
  cautionInfo = this->fields.cautionInfo;
  if ( !cautionInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(cautionInfo, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  addMsgInfo = this->fields.addMsgInfo;
  if ( !addMsgInfo )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(addMsgInfo, 0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -83.0, 0LL);
  addMsgLabel = (UnityEngine_Component_o *)this->fields.addMsgLabel;
  if ( !addMsgLabel )
    goto LABEL_24;
  v17 = UnityEngine_Component__get_gameObject(addMsgLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, 0.0, 0LL);
  addMsgBgSprite = (UIWidget_o *)this->fields.addMsgBgSprite;
  if ( !addMsgBgSprite )
    goto LABEL_24;
  UIWidget__set_width(addMsgBgSprite, 464, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    v20 = this->fields.bonusSelectMsgInfo;
    if ( !v20 )
      goto LABEL_24;
    BonusSelectSummonMsgInfo__Init(v20, 0LL);
  }
  baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
  if ( !baseWindowSprite
    || (UIWidget__set_height(baseWindowSprite, 480, 0LL), (confirmBtnObject = this->fields.confirmBtnObject) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  v23 = UnityEngine_GameObject__get_gameObject(confirmBtnObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, 0.0, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *confirmBtnLabel; // x27
  System_String_o *v30; // x0
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x27
  SummonCautionDlgComponent_c *v33; // x8
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Object_o *addMsgInfo; // x26
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  SummonCautionDlgComponent_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x26
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  System_String_o *v44; // x26
  System_String_o *v45; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  System_String_o *v50; // x26
  System_String_o *v51; // x27
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UnityEngine_Component_o *addMsgLabel; // x0
  UnityEngine_GameObject_o *v56; // x0
  UIWidget_o *addMsgBgSprite; // x0
  BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UnityEngine_GameObject_o *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  UnityEngine_GameObject_o *v63; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UIWidget_o *baseWindowSprite; // x0
  UILabel_o *v72; // x26
  System_String_o *v73; // x0
  UILabel_o *cancelBtnLb; // x26
  System_String_o *v75; // x0
  UnityEngine_GameObject_o *cautionInfo; // x0
  bool v77; // w1
  UnityEngine_GameObject_o *v78; // x0

  if ( (byte_40F7CEC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, title);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&SummonCautionDlgComponent_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_12387/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, v21);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B16FFC(&StringLiteral_12411/*"SUMMON_STONEPAY_WARNING_MSG"*/, v23);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B16FFC(&StringLiteral_12369/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, v25);
    sub_B16FFC(&StringLiteral_12365/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v26);
    byte_40F7CEC = 1;
  }
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_62;
  UILabel__set_text(messageLabel, message, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_62;
  UILabel__set_text(confirmBtnLabel, v30, 0LL);
  v31 = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !v31 )
    goto LABEL_62;
  gameObject = UnityEngine_Component__get_gameObject(v31, 0LL);
  v33 = SummonCautionDlgComponent_TypeInfo;
  if ( (BYTE3(SummonCautionDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v33 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(gameObject, v33->static_fields->TITLE_LABEL_POS_Y, 0LL);
  v34 = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !v34 )
    goto LABEL_62;
  v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
  GameObjectExtensions__SetLocalPositionY(v35, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0LL);
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
      v37 = (UnityEngine_Component_o *)this->fields.titleLabel;
      if ( !v37 )
        goto LABEL_62;
      v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
      v39 = SummonCautionDlgComponent_TypeInfo;
      v40 = v38;
      if ( (BYTE3(SummonCautionDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
        v39 = SummonCautionDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v40, v39->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0LL);
      v41 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v41 )
        goto LABEL_62;
      v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v42,
        SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y,
        0LL);
      v43 = this->fields.addMsgInfo;
      if ( !v43 )
        goto LABEL_62;
      UnityEngine_GameObject__SetActive(v43, 1, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12387/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0LL);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v47 = System_String__Format(v45, DateTime, 0LL);
      v48 = System_String__Concat_43743732(v44, v47, 0LL);
      if ( !this->fields.addMsgLabel )
        goto LABEL_62;
      UILabel__set_text(this->fields.addMsgLabel, v48, 0LL);
    }
  }
  if ( gachaId )
  {
    v49 = this->fields.addMsgInfo;
    if ( v49 )
    {
      UnityEngine_GameObject__SetActive(v49, 1, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -100.0, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12411/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12369/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0LL);
      v52 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v53 = System_String__Format(v51, v52, 0LL);
      v54 = System_String__Concat_43743732(v50, v53, 0LL);
      if ( this->fields.addMsgLabel )
      {
        UILabel__set_text(this->fields.addMsgLabel, v54, 0LL);
        addMsgLabel = (UnityEngine_Component_o *)this->fields.addMsgLabel;
        if ( addMsgLabel )
        {
          v56 = UnityEngine_Component__get_gameObject(addMsgLabel, 0LL);
          GameObjectExtensions__SetLocalPositionY(v56, -1.0, 0LL);
          addMsgBgSprite = (UIWidget_o *)this->fields.addMsgBgSprite;
          if ( addMsgBgSprite )
          {
            UIWidget__set_width(addMsgBgSprite, 540, 0LL);
            p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
            bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL) )
            {
              if ( !assetManager )
                goto LABEL_62;
              baseWindow = this->fields.baseWindow;
              if ( !baseWindow )
                goto LABEL_62;
              MsgInfoPrefab_k__BackingField = assetManager->fields._MsgInfoPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(baseWindow, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v63 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  (UILabel_o *)MsgInfoPrefab_k__BackingField,
                                                  transform,
                                                  (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
              if ( !v63 )
                goto LABEL_62;
              Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 v63,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
              *p_bonusSelectMsgInfo = (BonusSelectSummonMsgInfo_o *)Component_srcLineSprite;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.bonusSelectMsgInfo,
                Component_srcLineSprite,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70);
            }
            baseWindowSprite = (UIWidget_o *)this->fields.baseWindowSprite;
            if ( baseWindowSprite )
            {
              UIWidget__set_height(baseWindowSprite, 580, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
              v72 = this->fields.confirmBtnLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12365/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
              if ( v72 )
              {
                UILabel__set_text(v72, v73, 0LL);
                cancelBtnLb = this->fields.cancelBtnLb;
                v75 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                if ( cancelBtnLb )
                {
                  UILabel__set_text(cancelBtnLb, v75, 0LL);
                  if ( *p_bonusSelectMsgInfo )
                  {
                    BonusSelectSummonMsgInfo__SetCautionDlg(
                      *p_bonusSelectMsgInfo,
                      gachaId,
                      title,
                      message,
                      tryGetBonusSelectData,
                      assetManager,
                      0LL);
                    cautionInfo = this->fields.cautionInfo;
                    if ( cautionInfo )
                    {
                      v77 = 0;
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
    sub_B170D4();
  }
  cautionInfo = this->fields.cautionInfo;
  if ( !cautionInfo )
    goto LABEL_62;
  v77 = 1;
LABEL_60:
  UnityEngine_GameObject__SetActive(cautionInfo, v77, 0LL);
  v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v78 )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(v78, 1, 0LL);
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

  if ( (byte_40F7CE9 & 1) == 0 )
  {
    sub_B16FFC(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F7CE9 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonCautionDlgComponent_o *)sub_B173C8(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7CEF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4205/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, method);
    byte_40F7CEF = 1;
  }
  return (System_String_o *)StringLiteral_4205/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
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

  if ( (byte_40F7CEA & 1) == 0 )
  {
    sub_B16FFC(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F7CEA = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SummonCautionDlgComponent_o *)sub_B173C8(v8);
  SummonCautionDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonCautionDlgComponent_CallbackFunc___ctor(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7A7F & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7A7F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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