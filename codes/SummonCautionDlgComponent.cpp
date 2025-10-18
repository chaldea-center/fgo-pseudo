void SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonCautionDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4C3F46A & 1) == 0 )
  {
    sub_1C37058(&SummonCautionDlgComponent_TypeInfo);
    byte_4C3F46A = 1;
  }
  static_fields = SummonCautionDlgComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_POS_Y = xmmword_C0EC70;
  static_fields->DEFAULT_FONT_SIZE = 25;
}


void SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3F469 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3F469 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonCautionDlgComponent__Callback(SummonCautionDlgComponent_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct SummonCautionDlgComponent_CallbackFunc_o *v5; // x20
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void SummonCautionDlgComponent__Close(
        SummonCautionDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3F466 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SummonCautionDlgComponent_EndClose__);
    byte_4C3F466 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BonusSelectSummonMsgInfo_o *v6; // x0
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4C3F467 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F467 = 1;
  }
  SummonCautionDlgComponent__Init(this, method);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    v6 = this->fields.bonusSelectMsgInfo;
    if ( !v6 )
      sub_1C372B4(0);
    BonusSelectSummonMsgInfo__Init(v6, 0);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void SummonCautionDlgComponent__Init(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *v4; // x20
  UILabel_o *confirmBtnLabel; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4C3F464 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SummonCautionDlgComponent_TypeInfo);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F464 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = (UILabel_o *)SummonCautionDlgComponent_TypeInfo;
  v4 = this->fields.titleLabel;
  if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
  if ( !v4 )
    goto LABEL_26;
  UILabel__set_fontSize(v4, SummonCautionDlgComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, SummonCautionDlgComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLabel )
    goto LABEL_26;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_26;
  UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0);
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  titleLabel = (UILabel_o *)this->fields.addMsgInfo;
  if ( !titleLabel )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -83.0, 0);
  titleLabel = this->fields.addMsgLabel;
  if ( !titleLabel )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
  titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
  if ( !titleLabel )
    goto LABEL_26;
  UIWidget__set_width((UIWidget_o *)titleLabel, 464, 0);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    titleLabel = (UILabel_o *)this->fields.bonusSelectMsgInfo;
    if ( !titleLabel )
      goto LABEL_26;
    BonusSelectSummonMsgInfo__Init((BonusSelectSummonMsgInfo_o *)titleLabel, 0);
  }
  titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
  if ( !titleLabel
    || (UIWidget__set_height((UIWidget_o *)titleLabel, 480, 0),
        (titleLabel = (UILabel_o *)this->fields.confirmBtnObject) == 0) )
  {
LABEL_26:
    sub_1C372B4(titleLabel);
  }
  v9 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v9, 0.0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SummonCautionDlgComponent__OnClickCancel(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonCautionDlgComponent__Callback(this, 0, v2);
}


void SummonCautionDlgComponent__OnClickDecide(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SummonCautionDlgComponent__Callback(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void SummonCautionDlgComponent__OpenCautionMessageDlg(
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
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  SummonCautionDlgComponent_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x28
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Object_o *addMsgInfo; // x27
  UnityEngine_GameObject_o *v28; // x0
  SummonCautionDlgComponent_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x26
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  SummonCautionDlgComponent_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x26
  UnityEngine_GameObject_o *v35; // x0
  System_String_o *v36; // x26
  System_String_o *v37; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x26
  System_String_o *SummonBonusSelectWarningMsg; // x27
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UILabel_o *v52; // x26
  UILabel_o *cancelBtnLb; // x26
  bool v54; // w1
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectDataa; // [xsp+8h] [xbp-78h]

  if ( (byte_4C3F465 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SummonCautionDlgComponent_TypeInfo);
    sub_1C37058(&StringLiteral_12447/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_12474/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_12422/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    byte_4C3F465 = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)message,
    (const MethodInfo *)isGroupSummon);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, title, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_65;
  UILabel__set_text(titleLabel, message, 0);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLabel )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  v24 = SummonCautionDlgComponent_TypeInfo;
  v25 = gameObject;
  if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v24 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v25, v24->static_fields->TITLE_LABEL_POS_Y, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_65;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v26, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0);
  if ( isGroupSummon )
  {
    addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_65;
      if ( isCustomLayOut )
      {
        UILabel__set_fontSize(titleLabel, fontSize, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_65;
        UILabel__set_fontSize(titleLabel, fontSize, 0);
        titleLabel = this->fields.titleLabel;
        if ( !titleLabel )
          goto LABEL_65;
        v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        v29 = SummonCautionDlgComponent_TypeInfo;
        v30 = v28;
        if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
          v29 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v30, v29->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_65;
        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(v31, messagePositionY, 0);
      }
      else
      {
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        v33 = SummonCautionDlgComponent_TypeInfo;
        v34 = v32;
        if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
          v33 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v34, v33->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_65;
        v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(
          v35,
          SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y,
          0);
      }
      titleLabel = (UILabel_o *)this->fields.addMsgInfo;
      if ( !titleLabel )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
      v39 = System_String__Format(v37, DateTime, 0);
      titleLabel = (UILabel_o *)System_String__Concat_63561656(v36, v39, 0);
      if ( !this->fields.addMsgLabel )
        goto LABEL_65;
      UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0);
    }
  }
  if ( gachaId )
  {
    titleLabel = (UILabel_o *)this->fields.addMsgInfo;
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -100.0, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaDetailMaster___);
      if ( titleLabel )
      {
        titleLabel = (UILabel_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)titleLabel,
                                    gachaId,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
        if ( titleLabel )
        {
          SummonBonusSelectWarningMsg = GachaDetailEntity__GetSummonBonusSelectWarningMsg(
                                          (GachaDetailEntity_o *)titleLabel,
                                          0);
          v42 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
          v43 = System_String__Format(SummonBonusSelectWarningMsg, v42, 0);
          titleLabel = (UILabel_o *)System_String__Concat_63561656(v40, v43, 0);
          if ( this->fields.addMsgLabel )
          {
            UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0);
            titleLabel = this->fields.addMsgLabel;
            if ( titleLabel )
            {
              v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
              GameObjectExtensions__SetLocalPositionY(v44, -1.0, 0);
              titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
              if ( titleLabel )
              {
                UIWidget__set_width((UIWidget_o *)titleLabel, 644, 0);
                p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                titleLabel = (UILabel_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
                if ( ((unsigned __int8)titleLabel & 1) != 0 )
                {
                  if ( !assetManager )
                    goto LABEL_65;
                  titleLabel = (UILabel_o *)this->fields.baseWindow;
                  if ( !titleLabel )
                    goto LABEL_65;
                  MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
                  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)titleLabel, 0);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  titleLabel = (UILabel_o *)UnityEngine_Object__Instantiate_object__51855596(
                                              MsgInfoPrefab_k__BackingField,
                                              transform,
                                              (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
                  if ( !titleLabel )
                    goto LABEL_65;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)titleLabel,
                                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                  *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                  sub_1C36FFC(
                    (CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo,
                    (int32_t)Component_object,
                    v50,
                    v51);
                }
                titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
                if ( titleLabel )
                {
                  UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0);
                  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
                  v52 = this->fields.confirmBtnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12422/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
                  if ( v52 )
                  {
                    UILabel__set_text(v52, (System_String_o *)titleLabel, 0);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0);
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
                          0);
                        titleLabel = (UILabel_o *)this->fields.cautionInfo;
                        if ( titleLabel )
                        {
                          v54 = 0;
                          goto LABEL_63;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_1C372B4(titleLabel);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_65;
  v54 = 1;
LABEL_63:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v54, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}


void SummonCautionDlgComponent__add_callbackFunc(
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

  if ( (byte_4C3F462 & 1) == 0 )
  {
    sub_1C37058(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_4C3F462 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SummonCautionDlgComponent_CallbackFunc_c *)v8->klass != SummonCautionDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3F468 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4651/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    byte_4C3F468 = 1;
  }
  return (System_String_o *)StringLiteral_4651/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
}


void SummonCautionDlgComponent__remove_callbackFunc(
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

  if ( (byte_4C3F463 & 1) == 0 )
  {
    sub_1C37058(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_4C3F463 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SummonCautionDlgComponent_CallbackFunc_c *)v8->klass != SummonCautionDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  SummonCautionDlgComponent__Init(v11, v12);
}


void SummonCautionDlgComponent_CallbackFunc___ctor(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A77A24;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A779DC;
}


System_IAsyncResult_o *SummonCautionDlgComponent_CallbackFunc__BeginInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C3F46B & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3F46B = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void SummonCautionDlgComponent_CallbackFunc__Invoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}