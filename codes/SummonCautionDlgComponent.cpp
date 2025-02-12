void __fastcall SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonCautionDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4BC40FD & 1) == 0 )
  {
    sub_1C1ABD4(&SummonCautionDlgComponent_TypeInfo, v1);
    byte_4BC40FD = 1;
  }
  static_fields = SummonCautionDlgComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_POS_Y = xmmword_BFA4A0;
  static_fields->DEFAULT_FONT_SIZE = 25;
}


void __fastcall SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BC40FC & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    byte_4BC40FC = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct SummonCautionDlgComponent_CallbackFunc_o *v9; // x20
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C1AB78(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SummonCautionDlgComponent__Close(
        SummonCautionDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4BC40F9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_SummonCautionDlgComponent_EndClose__, v10);
    byte_4BC40F9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BonusSelectSummonMsgInfo_o *v11; // x0
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4BC40FA & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC40FA = 1;
  }
  SummonCautionDlgComponent__Init(this, method);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    v11 = this->fields.bonusSelectMsgInfo;
    if ( !v11 )
      sub_1C1AE30(0LL, v4);
    BonusSelectSummonMsgInfo__Init(v11, 0LL);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v13 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v13->fields.m_target)(
      v13->fields.original_method_info,
      *(_QWORD *)&v13->fields.extra_arg);
  }
}


void __fastcall SummonCautionDlgComponent__Init(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *v9; // x20
  UILabel_o *confirmBtnLabel; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_4BC40F7 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    sub_1C1ABD4(&SummonCautionDlgComponent_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, v5);
    sub_1C1ABD4(&StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, v6);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v7);
    byte_4BC40F7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UILabel_o *)SummonCautionDlgComponent_TypeInfo;
  v9 = this->fields.titleLabel;
  if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
  if ( !v9 )
    goto LABEL_26;
  UILabel__set_fontSize(v9, SummonCautionDlgComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, SummonCautionDlgComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_26;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_26;
  UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0LL);
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  titleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !titleLabel )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -83.0, 0LL);
  titleLabel = this->fields.addMsgLabel;
  if ( !titleLabel )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
  if ( !titleLabel )
    goto LABEL_26;
  UIWidget__set_width((UIWidget_o *)titleLabel, 464, 0LL);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0LL, 0LL) )
  {
    titleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !titleLabel )
      goto LABEL_26;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)titleLabel, 0LL);
  }
  titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !titleLabel
    || (UIWidget__set_height((UIWidget_o *)titleLabel, 480, 0LL),
        (titleLabel = (UILabel_o *)this->fields.confirmBtnObject) == 0LL) )
  {
LABEL_26:
    sub_1C1AE30(titleLabel, method);
  }
  v14 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, 0.0, 0LL);
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
        bool isCustomLayOut,
        float messagePositionY,
        int32_t fontSize,
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
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  SummonCautionDlgComponent_c *v35; // x8
  UnityEngine_GameObject_o *v36; // x28
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Object_o *addMsgInfo; // x27
  UnityEngine_GameObject_o *v39; // x0
  SummonCautionDlgComponent_c *v40; // x8
  UnityEngine_GameObject_o *v41; // x26
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  SummonCautionDlgComponent_c *v44; // x8
  UnityEngine_GameObject_o *v45; // x26
  UnityEngine_GameObject_o *v46; // x0
  System_String_o *v47; // x26
  System_String_o *v48; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x26
  System_String_o *v52; // x27
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int64_t v61; // x2
  char v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UILabel_o *v67; // x26
  UILabel_o *cancelBtnLb; // x26
  bool v69; // w1
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectDataa; // [xsp+8h] [xbp-68h]

  if ( (byte_4BC40F8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___, title);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v21);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject____77632760, v22);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v23);
    sub_1C1ABD4(&SummonCautionDlgComponent_TypeInfo, v24);
    sub_1C1ABD4(&StringLiteral_12581/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, v25);
    sub_1C1ABD4(&StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, v26);
    sub_1C1ABD4(&StringLiteral_12608/*"SUMMON_STONEPAY_WARNING_MSG"*/, v27);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v28);
    sub_1C1ABD4(&StringLiteral_12561/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, v29);
    sub_1C1ABD4(&StringLiteral_12557/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, v30);
    byte_4BC40F8 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)message,
    isGroupSummon,
    (System_String_o *)summonCloseAt,
    (BattleSetupInfo_o *)callback,
    *(FollowerInfo_o **)&gachaId,
    (PartyListViewItem_o *)tryGetBonusSelectData);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, title, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_61;
  UILabel__set_text(titleLabel, message, 0LL);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmBtnLabel )
    goto LABEL_61;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  v35 = SummonCautionDlgComponent_TypeInfo;
  v36 = gameObject;
  if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v35 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v36, v35->static_fields->TITLE_LABEL_POS_Y, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_61;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v37, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0LL);
  if ( isGroupSummon )
  {
    addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_61;
      if ( isCustomLayOut )
      {
        UILabel__set_fontSize(titleLabel, fontSize, 0LL);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_61;
        UILabel__set_fontSize(titleLabel, fontSize, 0LL);
        titleLabel = this->fields.titleLabel;
        if ( !titleLabel )
          goto LABEL_61;
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        v40 = SummonCautionDlgComponent_TypeInfo;
        v41 = v39;
        if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
          v40 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v41, v40->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0LL);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_61;
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        GameObjectExtensions__SetLocalPositionY(v42, messagePositionY, 0LL);
      }
      else
      {
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        v44 = SummonCautionDlgComponent_TypeInfo;
        v45 = v43;
        if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
          v44 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v45, v44->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0LL);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_61;
        v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v46,
          SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y,
          0LL);
      }
      titleLabel = (UILabel_o *)this->fields.addMsgInfo;
      if ( !titleLabel )
        goto LABEL_61;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12581/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0LL);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v50 = System_String__Format(v48, DateTime, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_63040368(v47, v50, 0LL);
      if ( !this->fields.addMsgLabel )
        goto LABEL_61;
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
      v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0LL);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12561/*"SUMMON_BONUS_SELECT_WARNING_MSG"*/, 0LL);
      v53 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0LL);
      v54 = System_String__Format(v52, v53, 0LL);
      titleLabel = (UILabel_o *)System_String__Concat_63040368(v51, v54, 0LL);
      if ( this->fields.addMsgLabel )
      {
        UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0LL);
        titleLabel = this->fields.addMsgLabel;
        if ( titleLabel )
        {
          v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
          GameObjectExtensions__SetLocalPositionY(v55, -1.0, 0LL);
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
                goto LABEL_61;
              titleLabel = (UILabel_o *)this->fields.baseWindow;
              if ( !titleLabel )
                goto LABEL_61;
              MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)titleLabel, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              titleLabel = (UILabel_o *)UnityEngine_Object__Instantiate_object__50483316(
                                          MsgInfoPrefab_k__BackingField,
                                          transform,
                                          (const MethodInfo_3025074 *)Method_UnityEngine_Object_Instantiate_GameObject____77632760);
              if ( !titleLabel )
                goto LABEL_61;
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)titleLabel,
                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
              *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&this->fields.bonusSelectMsgInfo,
                (int64_t)Component_object,
                v61,
                v62,
                v63,
                v64,
                v65,
                v66);
            }
            titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
            if ( titleLabel )
            {
              UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0LL);
              v67 = this->fields.confirmBtnLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12557/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0LL);
              if ( v67 )
              {
                UILabel__set_text(v67, (System_String_o *)titleLabel, 0LL);
                cancelBtnLb = this->fields.cancelBtnLb;
                titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                      0LL);
                    titleLabel = (UILabel_o *)this->fields.cautionInfo;
                    if ( titleLabel )
                    {
                      v69 = 0;
                      goto LABEL_59;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C1AE30(titleLabel, v31);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_61;
  v69 = 1;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v69, 0LL);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_61;
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

  if ( (byte_4BC40F5 & 1) == 0 )
  {
    sub_1C1ABD4(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4BC40F5 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC40FB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_4765/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/, method);
    byte_4BC40FB = 1;
  }
  return (System_String_o *)StringLiteral_4765/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
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

  if ( (byte_4BC40F6 & 1) == 0 )
  {
    sub_1C1ABD4(&SummonCautionDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4BC40F6 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  SummonCautionDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonCautionDlgComponent_CallbackFunc___ctor(
        SummonCautionDlgComponent_CallbackFunc_o *this,
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A58190;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A58148;
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
  if ( (byte_4BC40FE & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, result);
    byte_4BC40FE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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