void SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonCautionDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_4C23721 & 1) == 0 )
  {
    sub_1C2D490(&SummonCautionDlgComponent_TypeInfo);
    byte_4C23721 = 1;
  }
  static_fields = SummonCautionDlgComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_POS_Y = xmmword_C09910;
  static_fields->DEFAULT_FONT_SIZE = 25;
}


void SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C23720 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23720 = 1;
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
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4C2371D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SummonCautionDlgComponent_EndClose__);
    byte_4C2371D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BonusSelectSummonMsgInfo_o *v7; // x0
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4C2371E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2371E = 1;
  }
  SummonCautionDlgComponent__Init(this, method);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    v7 = this->fields.bonusSelectMsgInfo;
    if ( !v7 )
      sub_1C2D6EC(0, v4);
    BonusSelectSummonMsgInfo__Init(v7, 0);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v9 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
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

  if ( (byte_4C2371B & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SummonCautionDlgComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2371B = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLabel )
    goto LABEL_26;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
    sub_1C2D6EC(titleLabel, method);
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
  __int64 v21; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *confirmBtnLabel; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  SummonCautionDlgComponent_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x28
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Object_o *addMsgInfo; // x27
  UnityEngine_GameObject_o *v29; // x0
  SummonCautionDlgComponent_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x26
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  SummonCautionDlgComponent_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x26
  UnityEngine_GameObject_o *v36; // x0
  System_String_o *v37; // x26
  System_String_o *v38; // x27
  Il2CppObject *DateTime; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x26
  System_String_o *SummonBonusSelectWarningMsg; // x27
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x25
  UnityEngine_Object_o *bonusSelectMsgInfo; // x26
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x26
  UnityEngine_Transform_o *transform; // x27
  Il2CppObject *Component_object; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  UILabel_o *v53; // x26
  UILabel_o *cancelBtnLb; // x26
  bool v55; // w1
  BonusSelectSummonMsgInfo_TryGetBonusSelectData_o *tryGetBonusSelectDataa; // [xsp+8h] [xbp-78h]

  if ( (byte_4C2371C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SummonCautionDlgComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_12443/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_12470/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_12418/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    byte_4C2371C = 1;
  }
  this->fields.callbackFunc = callback;
  sub_1C2D434(
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLabel )
    goto LABEL_65;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_65;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  v25 = SummonCautionDlgComponent_TypeInfo;
  v26 = gameObject;
  if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
    v25 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v26, v25->static_fields->TITLE_LABEL_POS_Y, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_65;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v27, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0);
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
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        v30 = SummonCautionDlgComponent_TypeInfo;
        v31 = v29;
        if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
          v30 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v31, v30->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_65;
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(v32, messagePositionY, 0);
      }
      else
      {
        v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        v34 = SummonCautionDlgComponent_TypeInfo;
        v35 = v33;
        if ( !SummonCautionDlgComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo);
          v34 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v35, v34->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_65;
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        GameObjectExtensions__SetLocalPositionY(
          v36,
          SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y,
          0);
      }
      titleLabel = (UILabel_o *)this->fields.addMsgInfo;
      if ( !titleLabel )
        goto LABEL_65;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12470/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
      v40 = System_String__Format(v38, DateTime, 0);
      titleLabel = (UILabel_o *)System_String__Concat_63457864(v37, v40, 0);
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
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12470/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaDetailMaster___);
      if ( titleLabel )
      {
        titleLabel = (UILabel_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)titleLabel,
                                    gachaId,
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
        if ( titleLabel )
        {
          SummonBonusSelectWarningMsg = GachaDetailEntity__GetSummonBonusSelectWarningMsg(
                                          (GachaDetailEntity_o *)titleLabel,
                                          0);
          v43 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
          v44 = System_String__Format(SummonBonusSelectWarningMsg, v43, 0);
          titleLabel = (UILabel_o *)System_String__Concat_63457864(v41, v44, 0);
          if ( this->fields.addMsgLabel )
          {
            UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0);
            titleLabel = this->fields.addMsgLabel;
            if ( titleLabel )
            {
              v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
              GameObjectExtensions__SetLocalPositionY(v45, -1.0, 0);
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
                  titleLabel = (UILabel_o *)UnityEngine_Object__Instantiate_object__51752420(
                                              MsgInfoPrefab_k__BackingField,
                                              transform,
                                              (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
                  if ( !titleLabel )
                    goto LABEL_65;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)titleLabel,
                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                  *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                  sub_1C2D434(
                    (CGThumbnailListItem_o *)&this->fields.bonusSelectMsgInfo,
                    (int32_t)Component_object,
                    v51,
                    v52);
                }
                titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
                if ( titleLabel )
                {
                  UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0);
                  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
                  v53 = this->fields.confirmBtnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12418/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
                  if ( v53 )
                  {
                    UILabel__set_text(v53, (System_String_o *)titleLabel, 0);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
                          v55 = 0;
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
    sub_1C2D6EC(titleLabel, v21);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_65;
  v55 = 1;
LABEL_63:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v55, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0);
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

  if ( (byte_4C23719 & 1) == 0 )
  {
    sub_1C2D490(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_4C23719 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SummonCautionDlgComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2371F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4643/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    byte_4C2371F = 1;
  }
  return (System_String_o *)StringLiteral_4643/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
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

  if ( (byte_4C2371A & 1) == 0 )
  {
    sub_1C2D490(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_4C2371A = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6DD80;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6DD38;
}


System_IAsyncResult_o *SummonCautionDlgComponent_CallbackFunc__BeginInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C23722 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C23722 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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