void SummonCautionDlgComponent___cctor(const MethodInfo *method)
{
  struct SummonCautionDlgComponent_StaticFields *static_fields; // x8

  if ( (byte_59348CE & 1) == 0 )
  {
    sub_21FFC50(&SummonCautionDlgComponent_TypeInfo);
    byte_59348CE = 1;
  }
  static_fields = SummonCautionDlgComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TITLE_LABEL_POS_Y = xmmword_E93FF0;
  static_fields->DEFAULT_FONT_SIZE = 25;
}


void SummonCautionDlgComponent___ctor(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59348CD & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59348CD = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SummonCautionDlgComponent__Callback(SummonCautionDlgComponent_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct SummonCautionDlgComponent_CallbackFunc_o *v9; // x20
  struct SummonCautionDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void SummonCautionDlgComponent__Close(
        SummonCautionDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_59348CA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SummonCautionDlgComponent_EndClose__);
    byte_59348CA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonCautionDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SummonCautionDlgComponent__EndClose(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  BonusSelectSummonMsgInfo_o *v13; // x0
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_59348CB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348CB = 1;
  }
  SummonCautionDlgComponent__Init(this, method);
  bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(bonusSelectMsgInfo, 0, 0) )
  {
    v13 = this->fields.bonusSelectMsgInfo;
    if ( !v13 )
      sub_21FFECC(0, v6);
    BonusSelectSummonMsgInfo__Init(v13, 0);
  }
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v15 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))v15->fields.invoke_impl)(v15->fields.method_code, v15->fields.method);
  }
}


void SummonCautionDlgComponent__Init(SummonCautionDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x2
  UILabel_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *confirmBtnLabel; // x20
  UILabel_o *cancelBtnLb; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *bonusSelectMsgInfo; // x20
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_59348C8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SummonCautionDlgComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59348C8 = 1;
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
  v5 = this->fields.titleLabel;
  if ( !*(&SummonCautionDlgComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo, method, v4);
  if ( !v5 )
    goto LABEL_26;
  UILabel__set_fontSize(v5, SummonCautionDlgComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_fontSize(titleLabel, SummonCautionDlgComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLabel )
    goto LABEL_26;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
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
    sub_21FFECC(titleLabel, method);
  }
  v14 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v14, 0.0, 0);
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
        bool isBonusSelect,
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
  int32_t v15; // w24
  __int64 v23; // x1
  UILabel_o *titleLabel; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *confirmBtnLabel; // x26
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  SummonCautionDlgComponent_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x26
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x2
  UnityEngine_Object_o *addMsgInfo; // x25
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  SummonCautionDlgComponent_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x24
  UnityEngine_GameObject_o *v41; // x0
  float MSG_LABEL_ADDMSG_POS_Y; // s0
  UnityEngine_GameObject_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  SummonCautionDlgComponent_c *v46; // x8
  UnityEngine_GameObject_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  System_String_o *v50; // x24
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_String_o *v55; // x25
  Il2CppObject *DateTime; // x0
  System_String_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  System_String_o *v62; // x23
  System_String_o *SummonBonusSelectWarningMsg; // x24
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  struct BonusSelectSummonMsgInfo_o **p_bonusSelectMsgInfo; // x23
  UnityEngine_Object_o *bonusSelectMsgInfo; // x24
  Il2CppObject *MsgInfoPrefab_k__BackingField; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *Component_object; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  char v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  __int64 v83; // x2
  UILabel_o *v84; // x24
  UILabel_o *cancelBtnLb; // x24
  bool v86; // w1
  System_String_o *v87; // [xsp+0h] [xbp-70h] BYREF
  int32_t key; // [xsp+Ch] [xbp-64h] BYREF

  v15 = gachaId;
  key = gachaId;
  if ( (byte_59348C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SummonCautionDlgComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_12947/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/);
    sub_21FFC50(&StringLiteral_12948/*"SUMMON_GROUP_STONEPAY_WARNING_MSG_"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12975/*"SUMMON_STONEPAY_WARNING_MSG"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_12922/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/);
    byte_59348C9 = 1;
  }
  v87 = 0;
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    message,
    (System_String_o *)isGroupSummon,
    isBonusSelect,
    summonCloseAt,
    (bool)callback,
    gachaId);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, title, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, message, 0);
  confirmBtnLabel = this->fields.confirmBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !confirmBtnLabel )
    goto LABEL_74;
  UILabel__set_text(confirmBtnLabel, (System_String_o *)titleLabel, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_74;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  v31 = SummonCautionDlgComponent_TypeInfo;
  v32 = gameObject;
  if ( !*(&SummonCautionDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo, v29, v30);
    v31 = SummonCautionDlgComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPositionY(v32, v31->static_fields->TITLE_LABEL_POS_Y, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_74;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(v33, SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_POS_Y, 0);
  if ( isGroupSummon )
  {
    addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v34);
    if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0) )
    {
      titleLabel = this->fields.titleLabel;
      if ( isCustomLayOut )
      {
        if ( !titleLabel )
          goto LABEL_74;
        UILabel__set_fontSize(titleLabel, fontSize, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_74;
        UILabel__set_fontSize(titleLabel, fontSize, 0);
        titleLabel = this->fields.titleLabel;
        if ( !titleLabel )
          goto LABEL_74;
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        v39 = SummonCautionDlgComponent_TypeInfo;
        v40 = v36;
        if ( !*(&SummonCautionDlgComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo, v37, v38);
          v39 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v40, v39->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_74;
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        MSG_LABEL_ADDMSG_POS_Y = messagePositionY;
      }
      else
      {
        if ( !titleLabel )
          goto LABEL_74;
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        v46 = SummonCautionDlgComponent_TypeInfo;
        v47 = v43;
        if ( !*(&SummonCautionDlgComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonCautionDlgComponent_TypeInfo, v44, v45);
          v46 = SummonCautionDlgComponent_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v47, v46->static_fields->TITLE_LABEL_ADDMSG_POS_Y, 0);
        titleLabel = this->fields.messageLabel;
        if ( !titleLabel )
          goto LABEL_74;
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        MSG_LABEL_ADDMSG_POS_Y = SummonCautionDlgComponent_TypeInfo->static_fields->MSG_LABEL_ADDMSG_POS_Y;
      }
      GameObjectExtensions__SetLocalPositionY(v41, MSG_LABEL_ADDMSG_POS_Y, 0);
      titleLabel = (UILabel_o *)this->fields.addMsgInfo;
      if ( !titleLabel )
        goto LABEL_74;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48, v49);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12975/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
      v51 = System_Int32__ToString((int32_t)&key, 0);
      v52 = System_String__Concat_75438412((System_String_o *)StringLiteral_12948/*"SUMMON_GROUP_STONEPAY_WARNING_MSG_"*/, v51, 0);
      if ( LocalizationManager__TryGet(&v87, v52, (System_String_o *)StringLiteral_1/*""*/, 0) )
      {
        v55 = v87;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12947/*"SUMMON_GROUP_STONEPAY_WARNING_MSG"*/, 0);
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
      DateTime = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
      v57 = System_String__Format(v55, DateTime, 0);
      titleLabel = (UILabel_o *)System_String__Concat_75438412(v50, v57, 0);
      if ( !this->fields.addMsgLabel )
        goto LABEL_74;
      UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0);
      v15 = key;
    }
  }
  if ( isBonusSelect && v15 )
  {
    titleLabel = (UILabel_o *)this->fields.addMsgInfo;
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 1, 0);
      GameObjectExtensions__SetLocalPositionY(this->fields.addMsgInfo, -100.0, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58, v59);
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12975/*"SUMMON_STONEPAY_WARNING_MSG"*/, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60, v61);
      titleLabel = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaDetailMaster___);
      if ( titleLabel )
      {
        titleLabel = (UILabel_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)titleLabel,
                                    key,
                                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__GetEntity__);
        if ( titleLabel )
        {
          SummonBonusSelectWarningMsg = GachaDetailEntity__GetSummonBonusSelectWarningMsg(
                                          (GachaDetailEntity_o *)titleLabel,
                                          0);
          v64 = (Il2CppObject *)LocalizationManager__GetDateTime(summonCloseAt, 0);
          v65 = System_String__Format(SummonBonusSelectWarningMsg, v64, 0);
          titleLabel = (UILabel_o *)System_String__Concat_75438412(v62, v65, 0);
          if ( this->fields.addMsgLabel )
          {
            UILabel__set_text(this->fields.addMsgLabel, (System_String_o *)titleLabel, 0);
            titleLabel = this->fields.addMsgLabel;
            if ( titleLabel )
            {
              v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
              GameObjectExtensions__SetLocalPositionY(v66, -1.0, 0);
              titleLabel = (UILabel_o *)this->fields.addMsgBgSprite;
              if ( titleLabel )
              {
                UIWidget__set_width((UIWidget_o *)titleLabel, 644, 0);
                p_bonusSelectMsgInfo = &this->fields.bonusSelectMsgInfo;
                bonusSelectMsgInfo = (UnityEngine_Object_o *)this->fields.bonusSelectMsgInfo;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67, v68);
                titleLabel = (UILabel_o *)UnityEngine_Object__op_Equality(bonusSelectMsgInfo, 0, 0);
                if ( ((unsigned __int8)titleLabel & 1) != 0 )
                {
                  if ( !assetManager )
                    goto LABEL_74;
                  titleLabel = (UILabel_o *)this->fields.baseWindow;
                  if ( !titleLabel )
                    goto LABEL_74;
                  MsgInfoPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._MsgInfoPrefab_k__BackingField;
                  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)titleLabel, 0);
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72, v73);
                  titleLabel = (UILabel_o *)UnityEngine_Object__Instantiate_object__59506996(
                                              MsgInfoPrefab_k__BackingField,
                                              transform,
                                              (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
                  if ( !titleLabel )
                    goto LABEL_74;
                  Component_object = UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)titleLabel,
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonMsgInfo___);
                  *p_bonusSelectMsgInfo = (struct BonusSelectSummonMsgInfo_o *)Component_object;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.bonusSelectMsgInfo,
                    (int32_t)Component_object,
                    v76,
                    v77,
                    v78,
                    v79,
                    v80,
                    v81);
                }
                titleLabel = (UILabel_o *)this->fields.baseWindowSprite;
                if ( titleLabel )
                {
                  UIWidget__set_height((UIWidget_o *)titleLabel, 580, 0);
                  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnObject, -47.0, 0);
                  v84 = this->fields.confirmBtnLabel;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82, v83);
                  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12922/*"SUMMON_BONUS_SELECT_DIALOG_SUMMON"*/, 0);
                  if ( v84 )
                  {
                    UILabel__set_text(v84, (System_String_o *)titleLabel, 0);
                    cancelBtnLb = this->fields.cancelBtnLb;
                    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
                    if ( cancelBtnLb )
                    {
                      UILabel__set_text(cancelBtnLb, (System_String_o *)titleLabel, 0);
                      titleLabel = (UILabel_o *)*p_bonusSelectMsgInfo;
                      if ( *p_bonusSelectMsgInfo )
                      {
                        BonusSelectSummonMsgInfo__SetCautionDlg(
                          (BonusSelectSummonMsgInfo_o *)titleLabel,
                          key,
                          title,
                          message,
                          tryGetBonusSelectData,
                          assetManager,
                          0);
                        titleLabel = (UILabel_o *)this->fields.cautionInfo;
                        if ( titleLabel )
                        {
                          v86 = 0;
                          goto LABEL_72;
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
LABEL_74:
    sub_21FFECC(titleLabel, v23);
  }
  titleLabel = (UILabel_o *)this->fields.cautionInfo;
  if ( !titleLabel )
    goto LABEL_74;
  v86 = 1;
LABEL_72:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, v86, 0);
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
    goto LABEL_74;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SummonCautionDlgComponent_o *v13; // x0
  SummonCautionDlgComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59348C6 & 1) == 0 )
  {
    sub_21FFC50(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_59348C6 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SummonCautionDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  SummonCautionDlgComponent__remove_callbackFunc(v13, v14, v15);
}


System_String_o *SummonCautionDlgComponent__get_closeBtnPath(
        SummonCautionDlgComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_59348CC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4821/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/);
    byte_59348CC = 1;
  }
  return (System_String_o *)StringLiteral_4821/*"ConfirmWindow/ConfirmBntInfo/CancleButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SummonCautionDlgComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59348C7 & 1) == 0 )
  {
    sub_21FFC50(&SummonCautionDlgComponent_CallbackFunc_TypeInfo);
    byte_59348C7 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SummonCautionDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  SummonCautionDlgComponent__Init(v13, v14);
}


void SummonCautionDlgComponent_CallbackFunc___ctor(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF34BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF3474;
}


System_IAsyncResult_o *SummonCautionDlgComponent_CallbackFunc__BeginInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SummonCautionDlgComponent_CallbackFunc__EndInvoke(
        SummonCautionDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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