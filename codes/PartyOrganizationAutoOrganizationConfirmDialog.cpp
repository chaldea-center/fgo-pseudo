void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD812C & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD812C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Awake(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        bool autoDestroy,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4BD8125 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4BD8125 = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BD8126 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8126 = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  }
  else
  {
    PartyOrganizationAutoOrganizationConfirmDialog__Init(this, method);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Init(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4BD8123 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8123 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailTitle;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailLeft;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailCenter;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailRight;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.settingLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.execLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_15:
    sub_1C22094(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4BD8127 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4BD8127 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
        closeFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4BD8129 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4BD8129 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
        closeFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v9; // x0
  UnityEngine_Transform_o **p_monitor; // x21
  UnityEngine_GameObject_o *monitor; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  PartyOrganizationAutoOrganizationSettingDialog_o *klass; // x21
  AutoOrganizationManager_c *v15; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v19; // x23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x5

  if ( (byte_4BD8128 & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    sub_1C21E38(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__);
    sub_1C21E38(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
    byte_4BD8128 = 1;
  }
  v3 = (Il2CppObject *)sub_1C22084(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_21;
  v3[2].klass = (Il2CppClass *)this;
  sub_1C21DDC(&v3[2], this);
  if ( this->fields.state == 2 )
  {
    v6 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           settingDialogPrefab,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v3[1].monitor = v9;
    p_monitor = (UnityEngine_Transform_o **)&v3[1].monitor;
    sub_1C21DDC(&v3[1].monitor, v9);
    monitor = (UnityEngine_GameObject_o *)v3[1].monitor;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(monitor, parent, 0LL);
      transform = *p_monitor;
      if ( *p_monitor )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        v3[1].klass = (Il2CppClass *)Component_object;
        sub_1C21DDC(&v3[1], Component_object);
        transform = (UnityEngine_Transform_o *)v3[1].klass;
        if ( transform )
        {
          LODWORD(transform[17].monitor) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          klass = (PartyOrganizationAutoOrganizationSettingDialog_o *)v3[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4BD8164 )
          {
            sub_1C21E38(&AutoOrganizationManager_TypeInfo);
            byte_4BD8164 = 1;
          }
          v15 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v15 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v15->static_fields->autoOrganizationInfo;
          v19 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C22084(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v19,
            v3,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v20);
          if ( klass )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(
              klass,
              autoOrganizationInfo,
              eventId,
              preQuest,
              v19,
              v21);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C22094(transform, v5);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        bool preQuest,
        bool isExistAdjustBuff,
        bool isAutoOpen,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  bool v13; // w27
  UILabel_o *titleLabel; // x24
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v16; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  struct UILabel_o *v25; // x23
  System_String_o *mText; // x24
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  struct UILabel_o *v29; // x23
  System_String_o *v30; // x24
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *v33; // x22
  UILabel_o *v34; // x22
  __int64 *v35; // x8
  UILabel_o *v36; // x21
  AutoOrganizationManager_c *v37; // x0
  System_String_o *String_70827888; // x21
  System_String_c *klass; // x8
  System_String_o *v40; // x21
  unsigned __int64 v41; // x24
  AutoOrganizationManager_c *v42; // x0
  System_Action_o *v43; // x20

  v13 = preQuest;
  if ( (byte_4BD8124 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C21E38(&StringLiteral_2206/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C21E38(&StringLiteral_2208/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/);
    sub_1C21E38(&StringLiteral_2191/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/);
    sub_1C21E38(&StringLiteral_2194/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_1C21E38(&StringLiteral_2190/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_2203/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C21E38(&StringLiteral_2202/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_2193/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_1C21E38(&StringLiteral_2197/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_1C21E38(&StringLiteral_2207/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C21E38(&StringLiteral_2204/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/);
    sub_1C21E38(&StringLiteral_2657/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1C21E38(&StringLiteral_2198/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_1C21E38(&StringLiteral_2205/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/);
    sub_1C21E38(&StringLiteral_2192/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_2201/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4BD8124 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1C21DDC(&this->fields.closeFunc, func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2207/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2202/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2203/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2190/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2206/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2192/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2201/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2197/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2193/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_60;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v25 = this->fields.detailLeft;
    if ( !v25 )
      goto LABEL_60;
    mText = v25->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2198/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v28 = System_String__Concat_63115476(mText, v27, 0LL);
    UILabel__set_text(v25, v28, 0LL);
    v29 = this->fields.detailCenter;
    if ( !v29 )
      goto LABEL_60;
    v30 = v29->fields.mText;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2194/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v32 = System_String__Concat_63115476(v30, v31, 0LL);
    UILabel__set_text(v29, v32, 0LL);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v33 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2208/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0LL);
  if ( !v33 )
    goto LABEL_60;
  UILabel__set_text(v33, autoOrganizationInfo, 0LL);
  v34 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v35 = &StringLiteral_2204/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v35 = &StringLiteral_2205/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v35, 0LL);
  if ( !v34 )
    goto LABEL_60;
  UILabel__set_text(v34, autoOrganizationInfo, 0LL);
  v36 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2191/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0LL);
  if ( !v36 )
    goto LABEL_60;
  UILabel__set_text(v36, autoOrganizationInfo, 0LL);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4BD8164 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    byte_4BD8164 = 1;
  }
  v37 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v37 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v37->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId < 1 )
    goto LABEL_59;
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888((System_String_o *)StringLiteral_2657/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_70827888, 0LL);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_70827888 )
    goto LABEL_60;
  if ( String_70827888->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_70827888, 0x2Cu, 0, 0LL);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v40 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4BD8164 )
    {
      sub_1C21E38(&AutoOrganizationManager_TypeInfo);
      byte_4BD8164 = 1;
    }
    v42 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v42 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v42->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_1C22094(autoOrganizationInfo, v16);
  }
  v41 = 0LL;
  while ( 1 )
  {
    if ( v41 >= (unsigned int)klass )
      sub_1C2209C(autoOrganizationInfo, v16);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v40[1].monitor + v41), 0LL);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v40[1].klass;
    if ( (__int64)++v41 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v16);
  this->fields.state = 1;
  v43 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_42056680; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x25
  __int64 v10; // x22
  _BOOL4 v11; // w23
  _BOOL4 v12; // w27
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x1
  __int64 v22; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v24; // x23
  System_String_o *v25; // x0
  int32_t v26; // w2
  int v27; // w8
  unsigned int v28; // w9
  __int64 v29; // x23
  unsigned __int64 v30; // x8
  bool v31; // cf
  __int64 v32; // x9
  __int64 v33; // x13
  int v34; // w11
  unsigned __int64 v35; // x9
  int v36; // w14
  unsigned __int64 v37; // x8
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x1
  __int64 v42; // x0
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x1
  __int64 v47; // x0
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x1
  __int64 v57; // x0
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x1
  __int64 v62; // x0
  struct UILabel_o *v63; // x23
  System_String_o *mText; // x24
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  struct UILabel_o *v67; // x23
  System_String_o *v68; // x0
  int32_t v69; // w2
  int v70; // w8
  unsigned int v71; // w11
  unsigned __int64 v72; // x9
  int v73; // w8
  __int64 v74; // x11
  int v75; // w13
  struct UILabel_o *v76; // x21
  int v77; // w24
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v88; // x8
  System_String_o *v89; // x0
  struct UILabel_o *v90; // x19
  System_String_o *v91; // x0
  int v92; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BD812A & 1) == 0 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_2199/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C21E38(&StringLiteral_2200/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_11989/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C21E38(&StringLiteral_2195/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_1C21E38(&StringLiteral_11988/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C21E38(&StringLiteral_12169/*"SERVANT_UNIT"*/);
    sub_1C21E38(&StringLiteral_11987/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C21E38(&StringLiteral_11985/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C21E38(&StringLiteral_2196/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_1C21E38(&StringLiteral_11986/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4BD812A = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4BD8164 )
  {
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    byte_4BD8164 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  Filter_42056680 = sub_1C21EE0(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v7 = Filter_42056680;
  v8 = 0LL;
  v9 = Filter_42056680 + 32;
  do
  {
    Filter_42056680 = ListViewSort__GetFilter_42056680(autoOrganizationInfo, v8, 0LL);
    if ( !v7 )
      goto LABEL_116;
    if ( v8 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v9 + v8++) = Filter_42056680 & 1;
  }
  while ( v8 != 13 );
  v10 = sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v7 + 24) < 2u )
LABEL_115:
    sub_1C2209C(Filter_42056680, v6);
  v11 = *(_BYTE *)(v7 + 32) == 0;
  v12 = *(unsigned __int8 *)(v7 + 33) != 0;
  if ( *(_BYTE *)(v7 + 32) || !*(_BYTE *)(v7 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2196/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v10 )
      goto LABEL_116;
    v13 = *(_QWORD *)(v10 + 16);
    v14 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v13 )
      goto LABEL_116;
    v15 = *(int *)(v10 + 24);
    v16 = Filter_42056680;
    if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = v13 + 8 * v15;
      *(_DWORD *)(v10 + 24) = v15 + 1;
      *(_QWORD *)(v17 + 32) = v16;
      sub_1C21DDC(v17 + 32, v16);
    }
  }
  if ( v12 || v11 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2195/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v10 )
      goto LABEL_116;
    v18 = *(_QWORD *)(v10 + 16);
    v19 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v18 )
      goto LABEL_116;
    v20 = *(int *)(v10 + 24);
    v21 = Filter_42056680;
    if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v18 + 8 * v20;
      *(_DWORD *)(v10 + 24) = v20 + 1;
      *(_QWORD *)(v22 + 32) = v21;
      sub_1C21DDC(v22 + 32, v21);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_42056680 = (__int64)System_String__Join_63131132(
                               (System_String_o *)StringLiteral_117/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v10,
                               0LL);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_42056680, 0LL);
  v24 = this->fields.detailRight;
  if ( !v24 )
    goto LABEL_116;
  v25 = System_String__Concat_63115476(v24->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v24, v25, 0LL);
  if ( !v10 )
    goto LABEL_116;
  v26 = *(_DWORD *)(v10 + 24);
  v27 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v27;
  if ( v26 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v26, 0LL);
  Filter_42056680 = sub_1C21EE0(bool___TypeInfo, 5LL);
  v28 = *(_DWORD *)(v7 + 24);
  v29 = Filter_42056680;
  v30 = 0LL;
  v31 = v28 >= 2;
  v32 = v28 - 2;
  if ( (_DWORD)v32 != 0 && v31 )
    v33 = v32;
  else
    v33 = 0LL;
  LOBYTE(v34) = 1;
  do
  {
    if ( v33 == v30 )
      goto LABEL_115;
    if ( !Filter_42056680 )
      goto LABEL_116;
    v35 = *(unsigned int *)(Filter_42056680 + 24);
    if ( v30 >= v35 )
      goto LABEL_115;
    v36 = *(unsigned __int8 *)(v7 + 34 + v30);
    *(_BYTE *)(Filter_42056680 + 32 + v30++) = v36;
    v34 = (unsigned __int8)v34 & (v36 == 0);
  }
  while ( v30 != 5 );
  if ( v34 )
  {
    v37 = 0LL;
    while ( v37 < v35 )
    {
      *(_BYTE *)(Filter_42056680 + 32 + v37++) = 1;
      if ( v37 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v35 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_42056680 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v38 = *(_QWORD *)(v10 + 16);
    v39 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v38 )
      goto LABEL_116;
    v40 = *(int *)(v10 + 24);
    v41 = Filter_42056680;
    if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = v38 + 8 * v40;
      *(_DWORD *)(v10 + 24) = v40 + 1;
      *(_QWORD *)(v42 + 32) = v41;
      Filter_42056680 = sub_1C21DDC(v42 + 32, v41);
    }
  }
  if ( *(_DWORD *)(v29 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v29 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v43 = *(_QWORD *)(v10 + 16);
    v44 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v43 )
      goto LABEL_116;
    v45 = *(int *)(v10 + 24);
    v46 = Filter_42056680;
    if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = v43 + 8 * v45;
      *(_DWORD *)(v10 + 24) = v45 + 1;
      *(_QWORD *)(v47 + 32) = v46;
      Filter_42056680 = sub_1C21DDC(v47 + 32, v46);
    }
  }
  if ( *(_DWORD *)(v29 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v29 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v48 = *(_QWORD *)(v10 + 16);
    v49 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v48 )
      goto LABEL_116;
    v50 = *(int *)(v10 + 24);
    v51 = Filter_42056680;
    if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v52 = v48 + 8 * v50;
      *(_DWORD *)(v10 + 24) = v50 + 1;
      *(_QWORD *)(v52 + 32) = v51;
      Filter_42056680 = sub_1C21DDC(v52 + 32, v51);
    }
  }
  if ( *(_DWORD *)(v29 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v29 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11989/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v53 = *(_QWORD *)(v10 + 16);
    v54 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v53 )
      goto LABEL_116;
    v55 = *(int *)(v10 + 24);
    v56 = Filter_42056680;
    if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = v53 + 8 * v55;
      *(_DWORD *)(v10 + 24) = v55 + 1;
      *(_QWORD *)(v57 + 32) = v56;
      Filter_42056680 = sub_1C21DDC(v57 + 32, v56);
    }
  }
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v29 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42056680 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    v58 = *(_QWORD *)(v10 + 16);
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v58 )
      goto LABEL_116;
    v60 = *(int *)(v10 + 24);
    v61 = Filter_42056680;
    if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_42056680,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = v58 + 8 * v60;
      *(_DWORD *)(v10 + 24) = v60 + 1;
      *(_QWORD *)(v62 + 32) = v61;
      Filter_42056680 = sub_1C21DDC(v62 + 32, v61);
    }
  }
  v63 = this->fields.detailRight;
  if ( !v63 )
    goto LABEL_116;
  mText = v63->fields.mText;
  v65 = System_String__Join_63131132(
          (System_String_o *)StringLiteral_117/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v10,
          0LL);
  v66 = System_String__Concat_63115476(mText, v65, 0LL);
  UILabel__set_text(v63, v66, 0LL);
  v67 = this->fields.detailRight;
  if ( !v67 )
    goto LABEL_116;
  v68 = System_String__Concat_63115476(v67->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v67, v68, 0LL);
  v69 = *(_DWORD *)(v10 + 24);
  v70 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v70;
  if ( v69 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v69, 0LL);
  Filter_42056680 = sub_1C21EE0(bool___TypeInfo, 6LL);
  v71 = *(_DWORD *)(v7 + 24);
  v72 = 0LL;
  v73 = 0;
  v31 = v71 >= 7;
  v74 = v71 - 7;
  if ( (_DWORD)v74 == 0 || !v31 )
    v74 = 0LL;
  do
  {
    if ( v74 == v72 )
      goto LABEL_115;
    if ( !Filter_42056680 )
      goto LABEL_116;
    if ( v72 >= *(unsigned int *)(Filter_42056680 + 24) )
      goto LABEL_115;
    v75 = *(unsigned __int8 *)(v7 + 39 + v72);
    *(_BYTE *)(Filter_42056680 + 32 + v72++) = v75;
    if ( v75 )
      v73 = v72;
  }
  while ( v72 != 6 );
  v76 = this->fields.detailRight;
  v77 = v73 ? v73 : 6;
  if ( !v76 )
LABEL_116:
    sub_1C22094(Filter_42056680, v6);
  v78 = v76->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12169/*"SERVANT_UNIT"*/, 0LL);
  v92 = v77;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v80, v81, v82);
  v84 = System_String__Format(v79, v83, 0LL);
  v85 = System_String__Concat_63115476(v78, v84, 0LL);
  UILabel__set_text(v76, v85, 0LL);
  if ( this->fields.preQuest )
  {
    v86 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v88 = (System_String_o **)&StringLiteral_2199/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v88 = (System_String_o **)&StringLiteral_2200/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v89 = LocalizationManager__Get(*v88, 0LL);
    Filter_42056680 = (__int64)System_String__Concat_63115476(v86, v89, 0LL);
    v90 = this->fields.detailRight;
    if ( v90 )
    {
      v91 = System_String__Concat_63115476(v90->fields.mText, (System_String_o *)Filter_42056680, 0LL);
      UILabel__set_text(v90, v91, 0LL);
      return;
    }
    goto LABEL_116;
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BD8121 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4BD8121 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C22354(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD812B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3241/*"BaseWindow/CancelButton"*/);
    byte_4BD812B = 1;
  }
  return (System_String_o *)StringLiteral_3241/*"BaseWindow/CancelButton"*/;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BD8122 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4BD8122 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C22354(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5D264;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5D21C;
}


System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4BD812D & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD812D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *v4; // x19
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  AutoOrganizationManager_c *v7; // x0

  v4 = this;
  if ( (byte_4BD812E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C21E38(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__);
    byte_4BD812E = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C21DDC(
                                                                                       &v4->fields.__9__1,
                                                                                       _9__1);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_32930084(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4BD8164 )
    {
      sub_1C21E38(&AutoOrganizationManager_TypeInfo);
      byte_4BD8164 = 1;
    }
    v7 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v7 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v7->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v4->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          (const MethodInfo *)isDecide);
        return;
      }
    }
LABEL_17:
    sub_1C22094(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4BD812F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD812F = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(go, 0LL);
}