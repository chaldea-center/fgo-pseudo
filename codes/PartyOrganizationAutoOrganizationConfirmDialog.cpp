void PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1C0C & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB1C0C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__Awake(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        bool autoDestroy,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CB1C05 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4CB1C05 = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB1C06 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1C06 = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
  }
  else
  {
    PartyOrganizationAutoOrganizationConfirmDialog__Init(this, method);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationAutoOrganizationConfirmDialog__Init(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CB1C03 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1C03 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailTitle;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailLeft;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailCenter;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailRight;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.settingLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.execLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_15:
    sub_1C6BC60(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4CB1C07 & 1) == 0 )
  {
    sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4CB1C07 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
        closeFunc->fields.method_code,
        0,
        closeFunc->fields.method);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4CB1C09 & 1) == 0 )
  {
    sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4CB1C09 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
        closeFunc->fields.method_code,
        1,
        closeFunc->fields.method);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v11; // x0
  UnityEngine_Transform_o **v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v20; // x21
  AutoOrganizationManager_c *v21; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v25; // x23
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5

  if ( (byte_4CB1C08 & 1) == 0 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    sub_1C6BA08(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__);
    sub_1C6BA08(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
    byte_4CB1C08 = 1;
  }
  v3 = sub_1C6BC54(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  if ( this->fields.state == 2 )
  {
    v8 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C6BA20(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v11;
    v12 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v11, v13, v14);
    v15 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v15, parent, 0);
      transform = *v12;
      if ( *v12 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v18, v19);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[17].fields.m_CachedPtr) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0);
          v20 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4CB1C90 )
          {
            sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
            byte_4CB1C90 = 1;
          }
          v21 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v21 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v21->static_fields->autoOrganizationInfo;
          v25 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C6BC54(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)v3,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v26);
          if ( v20 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v20, autoOrganizationInfo, eventId, preQuest, v25, v27);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C6BC60(transform, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationAutoOrganizationConfirmDialog__Open(
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
  System_String_o *String_71617980; // x21
  System_String_c *klass; // x8
  System_String_o *v40; // x21
  unsigned __int64 v41; // x24
  AutoOrganizationManager_c *v42; // x0
  System_Action_o *v43; // x20

  v13 = preQuest;
  if ( (byte_4CB1C04 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C6BA08(&StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C6BA08(&StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/);
    sub_1C6BA08(&StringLiteral_2054/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/);
    sub_1C6BA08(&StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_1C6BA08(&StringLiteral_2053/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C6BA08(&StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2056/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_1C6BA08(&StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_1C6BA08(&StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/);
    sub_1C6BA08(&StringLiteral_2488/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1C6BA08(&StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_1C6BA08(&StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/);
    sub_1C6BA08(&StringLiteral_2055/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4CB1C04 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    preQuest,
    (const MethodInfo *)isExistAdjustBuff);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2053/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0);
  if ( !detailCenter )
    goto LABEL_60;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0);
  if ( preQuest )
  {
    v25 = this->fields.detailLeft;
    if ( !v25 )
      goto LABEL_60;
    mText = v25->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0);
    v28 = System_String__Concat_63966792(mText, v27, 0);
    UILabel__set_text(v25, v28, 0);
    v29 = this->fields.detailCenter;
    if ( !v29 )
      goto LABEL_60;
    v30 = v29->fields.mText;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0);
    v32 = System_String__Concat_63966792(v30, v31, 0);
    UILabel__set_text(v29, v32, 0);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v33 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0);
  if ( !v33 )
    goto LABEL_60;
  UILabel__set_text(v33, autoOrganizationInfo, 0);
  v34 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v35 = &StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v35 = &StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v35, 0);
  if ( !v34 )
    goto LABEL_60;
  UILabel__set_text(v34, autoOrganizationInfo, 0);
  v36 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2054/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0);
  if ( !v36 )
    goto LABEL_60;
  UILabel__set_text(v36, autoOrganizationInfo, 0);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4CB1C90 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    byte_4CB1C90 = 1;
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
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0);
  if ( eventId < 1 )
    goto LABEL_59;
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980((System_String_o *)StringLiteral_2488/*"AutoOrganizationBonusFilterEventId"*/, 0);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_71617980, 0);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_71617980 )
    goto LABEL_60;
  if ( String_71617980->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v40 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4CB1C90 )
    {
      sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
      byte_4CB1C90 = 1;
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
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0);
      goto LABEL_59;
    }
LABEL_60:
    sub_1C6BC60(autoOrganizationInfo, v16);
  }
  v41 = 0;
  while ( 1 )
  {
    if ( v41 >= (unsigned int)klass )
      sub_1C6BC68(autoOrganizationInfo);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v40[1].monitor + v41), 0);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v40[1].klass;
    if ( (__int64)++v41 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v16);
  this->fields.state = 1;
  v43 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_44112684; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x25
  __int64 v10; // x22
  _BOOL4 v11; // w23
  _BOOL4 v12; // w27
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  __int64 v18; // x1
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x1
  __int64 v26; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v28; // x23
  System_String_o *v29; // x0
  int32_t v30; // w2
  int v31; // w8
  unsigned int v32; // w9
  __int64 v33; // x23
  unsigned __int64 v34; // x8
  bool v35; // cf
  __int64 v36; // x9
  __int64 v37; // x13
  int v38; // w11
  unsigned __int64 v39; // x9
  int v40; // w14
  unsigned __int64 v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x1
  __int64 v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x1
  __int64 v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x1
  __int64 v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x1
  __int64 v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x1
  __int64 v76; // x0
  struct UILabel_o *v77; // x23
  System_String_o *mText; // x24
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  struct UILabel_o *v81; // x23
  System_String_o *v82; // x0
  int32_t v83; // w2
  int v84; // w8
  unsigned int v85; // w11
  unsigned __int64 v86; // x9
  int v87; // w8
  __int64 v88; // x11
  int v89; // w13
  struct UILabel_o *v90; // x21
  int v91; // w24
  System_String_o *v92; // x22
  System_String_o *v93; // x23
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v99; // x8
  System_String_o *v100; // x0
  struct UILabel_o *v101; // x19
  System_String_o *v102; // x0
  int v103; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB1C0A & 1) == 0 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C6BA08(&StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C6BA08(&StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C6BA08(&StringLiteral_12007/*"SERVANT_UNIT"*/);
    sub_1C6BA08(&StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C6BA08(&StringLiteral_11802/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C6BA08(&StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4CB1C0A = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4CB1C90 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    byte_4CB1C90 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  Filter_44112684 = sub_1C6BAB0(bool___TypeInfo, 13);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v7 = Filter_44112684;
  v8 = 0;
  v9 = Filter_44112684 + 32;
  do
  {
    Filter_44112684 = ListViewSort__GetFilter_44112684(autoOrganizationInfo, v8, 0);
    if ( !v7 )
      goto LABEL_116;
    if ( v8 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v9 + v8++) = Filter_44112684 & 1;
  }
  while ( v8 != 13 );
  v10 = sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v7 + 24) < 2u )
LABEL_115:
    sub_1C6BC68(Filter_44112684);
  v11 = *(_BYTE *)(v7 + 32) == 0;
  v12 = *(unsigned __int8 *)(v7 + 33) != 0;
  if ( *(_BYTE *)(v7 + 32) || !*(_BYTE *)(v7 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0);
    if ( !v10 )
      goto LABEL_116;
    v15 = *(_QWORD *)(v10 + 16);
    v16 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v15 )
      goto LABEL_116;
    v17 = *(int *)(v10 + 24);
    v18 = Filter_44112684;
    if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = v15 + 8 * v17;
      *(_DWORD *)(v10 + 24) = v17 + 1;
      *(_QWORD *)(v19 + 32) = v18;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 32), v18, v13, v14);
    }
  }
  if ( v12 || v11 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0);
    if ( !v10 )
      goto LABEL_116;
    v22 = *(_QWORD *)(v10 + 16);
    v23 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v22 )
      goto LABEL_116;
    v24 = *(int *)(v10 + 24);
    v25 = Filter_44112684;
    if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v22 + 8 * v24;
      *(_DWORD *)(v10 + 24) = v24 + 1;
      *(_QWORD *)(v26 + 32) = v25;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 32), v25, v20, v21);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_44112684 = (__int64)System_String__Join_64009384(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v10,
                               0);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_44112684, 0);
  v28 = this->fields.detailRight;
  if ( !v28 )
    goto LABEL_116;
  v29 = System_String__Concat_63966792(v28->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v28, v29, 0);
  if ( !v10 )
    goto LABEL_116;
  v30 = *(_DWORD *)(v10 + 24);
  v31 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v31;
  if ( v30 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v30, 0);
  Filter_44112684 = sub_1C6BAB0(bool___TypeInfo, 5);
  v32 = *(_DWORD *)(v7 + 24);
  v33 = Filter_44112684;
  v34 = 0;
  v35 = v32 >= 2;
  v36 = v32 - 2;
  if ( (_DWORD)v36 != 0 && v35 )
    v37 = v36;
  else
    v37 = 0;
  LOBYTE(v38) = 1;
  do
  {
    if ( v37 == v34 )
      goto LABEL_115;
    if ( !Filter_44112684 )
      goto LABEL_116;
    v39 = *(unsigned int *)(Filter_44112684 + 24);
    if ( v34 >= v39 )
      goto LABEL_115;
    v40 = *(unsigned __int8 *)(v7 + 34 + v34);
    *(_BYTE *)(Filter_44112684 + 32 + v34++) = v40;
    v38 = (unsigned __int8)v38 & (v40 == 0);
  }
  while ( v34 != 5 );
  if ( v38 )
  {
    v41 = 0;
    while ( v41 < v39 )
    {
      *(_BYTE *)(Filter_44112684 + 32 + v41++) = 1;
      if ( v41 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v39 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_44112684 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v44 = *(_QWORD *)(v10 + 16);
    v45 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v44 )
      goto LABEL_116;
    v46 = *(int *)(v10 + 24);
    v47 = Filter_44112684;
    if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = v44 + 8 * v46;
      *(_DWORD *)(v10 + 24) = v46 + 1;
      *(_QWORD *)(v48 + 32) = v47;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 32), v47, v42, v43);
    }
  }
  if ( *(_DWORD *)(v33 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v33 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v51 = *(_QWORD *)(v10 + 16);
    v52 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v51 )
      goto LABEL_116;
    v53 = *(int *)(v10 + 24);
    v54 = Filter_44112684;
    if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = v51 + 8 * v53;
      *(_DWORD *)(v10 + 24) = v53 + 1;
      *(_QWORD *)(v55 + 32) = v54;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v55 + 32), v54, v49, v50);
    }
  }
  if ( *(_DWORD *)(v33 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v33 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v58 = *(_QWORD *)(v10 + 16);
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v58 )
      goto LABEL_116;
    v60 = *(int *)(v10 + 24);
    v61 = Filter_44112684;
    if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = v58 + 8 * v60;
      *(_DWORD *)(v10 + 24) = v60 + 1;
      *(_QWORD *)(v62 + 32) = v61;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v62 + 32), v61, v56, v57);
    }
  }
  if ( *(_DWORD *)(v33 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v33 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v65 = *(_QWORD *)(v10 + 16);
    v66 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v65 )
      goto LABEL_116;
    v67 = *(int *)(v10 + 24);
    v68 = Filter_44112684;
    if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = v65 + 8 * v67;
      *(_DWORD *)(v10 + 24) = v67 + 1;
      *(_QWORD *)(v69 + 32) = v68;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 32), v68, v63, v64);
    }
  }
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v33 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112684 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11802/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
    v72 = *(_QWORD *)(v10 + 16);
    v73 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v72 )
      goto LABEL_116;
    v74 = *(int *)(v10 + 24);
    v75 = Filter_44112684;
    if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44112684,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = v72 + 8 * v74;
      *(_DWORD *)(v10 + 24) = v74 + 1;
      *(_QWORD *)(v76 + 32) = v75;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v76 + 32), v75, v70, v71);
    }
  }
  v77 = this->fields.detailRight;
  if ( !v77 )
    goto LABEL_116;
  mText = v77->fields.mText;
  v79 = System_String__Join_64009384(
          (System_String_o *)StringLiteral_113/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v10,
          0);
  v80 = System_String__Concat_63966792(mText, v79, 0);
  UILabel__set_text(v77, v80, 0);
  v81 = this->fields.detailRight;
  if ( !v81 )
    goto LABEL_116;
  v82 = System_String__Concat_63966792(v81->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v81, v82, 0);
  v83 = *(_DWORD *)(v10 + 24);
  v84 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v84;
  if ( v83 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v83, 0);
  Filter_44112684 = sub_1C6BAB0(bool___TypeInfo, 6);
  v85 = *(_DWORD *)(v7 + 24);
  v86 = 0;
  v87 = 0;
  v35 = v85 >= 7;
  v88 = v85 - 7;
  if ( (_DWORD)v88 == 0 || !v35 )
    v88 = 0;
  do
  {
    if ( v88 == v86 )
      goto LABEL_115;
    if ( !Filter_44112684 )
      goto LABEL_116;
    if ( v86 >= *(unsigned int *)(Filter_44112684 + 24) )
      goto LABEL_115;
    v89 = *(unsigned __int8 *)(v7 + 39 + v86);
    *(_BYTE *)(Filter_44112684 + 32 + v86++) = v89;
    if ( v89 )
      v87 = v86;
  }
  while ( v86 != 6 );
  v90 = this->fields.detailRight;
  v91 = v87 ? v87 : 6;
  if ( !v90 )
LABEL_116:
    sub_1C6BC60(Filter_44112684, v6);
  v92 = v90->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"SERVANT_UNIT"*/, 0);
  v103 = v91;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  v95 = System_String__Format(v93, v94, 0);
  v96 = System_String__Concat_63966792(v92, v95, 0);
  UILabel__set_text(v90, v96, 0);
  if ( this->fields.preQuest )
  {
    v97 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v99 = (System_String_o **)&StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v99 = (System_String_o **)&StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v100 = LocalizationManager__Get(*v99, 0);
    Filter_44112684 = (__int64)System_String__Concat_63966792(v97, v100, 0);
    v101 = this->fields.detailRight;
    if ( v101 )
    {
      v102 = System_String__Concat_63966792(v101->fields.mText, (System_String_o *)Filter_44112684, 0);
      UILabel__set_text(v101, v102, 0);
      return;
    }
    goto LABEL_116;
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
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

  if ( (byte_4CB1C01 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4CB1C01 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C6BFFC(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1C0B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3064/*"BaseWindow/CancelButton"*/);
    byte_4CB1C0B = 1;
  }
  return (System_String_o *)StringLiteral_3064/*"BaseWindow/CancelButton"*/;
}


void PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
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

  if ( (byte_4CB1C02 & 1) == 0 )
  {
    sub_1C6BA08(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4CB1C02 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C6BFFC(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9BA1C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9B9D4;
}


System_IAsyncResult_o *PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CB1C0D & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB1C0D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *v4; // x19
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AutoOrganizationManager_c *v9; // x0

  v4 = this;
  if ( (byte_4CB1C0E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C6BA08(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__);
    byte_4CB1C0E = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_34360980(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4CB1C90 )
    {
      sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
      byte_4CB1C90 = 1;
    }
    v9 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v9 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v9->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0);
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
    sub_1C6BC60(this, isDecide);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4CB1C0F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB1C0F = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(go, 0);
}