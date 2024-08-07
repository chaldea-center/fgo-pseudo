void __fastcall SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB37E & 1) == 0 )
  {
    sub_1B64A00(&SummonCautionDlgComponent_TypeInfo, v1);
    byte_49FB37E = 1;
  }
  *SummonCautionDlgComponent_TypeInfo->static_fields = (struct SummonCautionDlgComponent_StaticFields)xmmword_BA3480;
}


void __fastcall SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FB37D & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_49FB37D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SummonCautionDlgComponent__Callback(
        SummonCautionDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct SummonCautionDlgComponent_CallbackFunc_o *v5; // x20
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SummonCautionDlgComponent__Close(
        SummonCautionDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FB37A & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_SummonCautionDlgComponent_EndClose__, v6);
    byte_49FB37A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  v7 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  BonusSelectSummonMsgInfo_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_49FB37B & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FB37B = 1;
  }
  SummonCautionDlgComponent__Init(this, method);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    v7 = this->fields.bonusSelectMsgInfo;
    if ( !v7 )
      sub_1B64C5C(0LL, v4);
    BonusSelectSummonMsgInfo__Init(v7, v4);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v9 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B649A4(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( (byte_49FB378 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v4);
    sub_1B64A00(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_49FB378 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_22;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0LL);
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !titleLabel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -83.0, 0LL);
  titleLabel = this->fields.addMsgLabel;
  if ( !titleLabel )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
  if ( !titleLabel )
    goto LABEL_22;
  UIWidget__set_width((UIWidget_o *)titleLabel, 464, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    titleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !titleLabel )
      goto LABEL_22;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)titleLabel, method);
  }
  titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !titleLabel
    || (UIWidget__set_height((UIWidget_o *)titleLabel, 480, 0LL),
        (titleLabel = (UILabel_o *)this->fields.confirmBtnObject) == 0LL) )
  {
LABEL_22:
    sub_1B64C5C(titleLabel, method);
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
  UnityEngine_GameObject_o *gameObject; // x0
  SummonCautionDlgComponent_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x27
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Object_o *addMsgInfo; // x26
  UnityEngine_GameObject_o *v35; // x0
  SummonCautionDlgComponent_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x26
  UnityEngine_GameObject_o *v38; // x0
  System_String_o *v39; // x26
  System_String_o *v40; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x26
  System_String_o *v44; // x27
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v53; // w2
  char v54; // w3
  UILabel_o *v55; // x26
  UILabel_o *cancelBtnLb; // x26
  const MethodInfo *v57; // x6
  bool v58; // w1
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectDataa; // [xsp+8h] [xbp-68h]

  if ( (byte_49FB379 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, title);
    sub_1B64A00(&LocalizationManager_TypeInfo, v17);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v18);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v19);
    sub_1B64A00(&SummonCautionDlgComponent_TypeInfo, v20);
    sub_1B64A00(&StringLiteral_12299/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, v21);
    sub_1B64A00(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1B64A00(&StringLiteral_12323/*"SUMMON_STONEPAY_WARNING_MSG"*/, v23);
    sub_1B64A00(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_1B64A00(&StringLiteral_12279/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, v25);
    sub_1B64A00(&StringLiteral_12275/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v26);
    byte_49FB379 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)message,
    isGroupSummon);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, title, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, message, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_53;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  v31 = SummonCautionDlgComponent_TypeInfo;
  v32 = gameObject;
  if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v31 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v32, v31->static_fields->TITLE_LABEL_POS_Y, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_53;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v33, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0LL);
  if ( isGroupSummon )
  {
    addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_53;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      v36 = SummonCautionDlgComponent_TypeInfo;
      v37 = v35;
      if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
        v36 = SummonCautionDlgComponent_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionY(v37, v36->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0LL);
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_53;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v38,
        SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y,
        0LL);
      titleLabel = (UILabel_o *)this->fields.addMsgInfo;
      if ( !titleLabel )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12299/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0LL);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v42 = System_String__Format(v40, DateTime, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_61385136(v39, v42, 0LL);
      if ( !this->fields.addMsgLabel )
        goto LABEL_53;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12279/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0LL);
      v45 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v46 = System_String__Format(v44, v45, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_61385136(v43, v46, 0LL);
      if ( this->fields.addMsgLabel )
      {
        UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0LL);
        titleLabel = this->fields.addMsgLabel;
        if ( titleLabel )
        {
          v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
          GameObjectExtensions__SetLocalPositionY(v47, -1.0, 0LL);
          titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
          if ( titleLabel )
          {
            UIWidget__set_width((UIWidget_o *)titleLabel, 540, 0LL);
            p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
            bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            titleLabel = (UILabel_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0LL, 0LL);
            if ( ((unsigned __int8)titleLabel & 1) != 0 )
            {
              if ( !assetManager )
                goto LABEL_53;
              titleLabel = (UILabel_o *)this->fields.baseWindow;
              if ( !titleLabel )
                goto LABEL_53;
              MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)titleLabel, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              titleLabel = (UILabel_o *)UnityEngine_Object__Instantiate_object__49014464(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
              if ( !titleLabel )
                goto LABEL_53;
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)titleLabel,
                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
              *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
              sub_1B649A4(
                (ServantStatusBattleListViewItem_o *)&this->fields.bonusSelectMsgInfo,
                (int32_t)Component_object,
                v53,
                v54);
            }
            titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
            if ( titleLabel )
            {
              UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
              v55 = this->fields.confirmBtnLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12275/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
              if ( v55 )
              {
                UILabel__set_text(v55, (System_String_o *)titleLabel, 0LL);
                cancelBtnLb = this->fields.cancelBtnLb;
                titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                      tryGetBonusSelectDataa,
                      assetManager,
                      v57);
                    titleLabel = (UILabel_o *)this->fields.cautionInfo;
                    if ( titleLabel )
                    {
                      v58 = 0;
                      goto LABEL_51;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B64C5C(titleLabel, v27);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_53;
  v58 = 1;
LABEL_51:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v58, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_53;
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

  if ( (byte_49FB376 & 1) == 0 )
  {
    sub_1B64A00(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_49FB376 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB37C & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_4658/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, method);
    byte_49FB37C = 1;
  }
  return (System_String_o *)StringLiteral_4658/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
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

  if ( (byte_49FB377 & 1) == 0 )
  {
    sub_1B64A00(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_49FB377 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A8B8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8B44;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonCautionDlgComponent_CallbackFunc__BeginInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_49FB37F & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, result);
    byte_49FB37F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall SummonCautionDlgComponent_CallbackFunc__Invoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}