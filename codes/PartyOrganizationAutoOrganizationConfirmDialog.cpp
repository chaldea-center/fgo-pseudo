void PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3E936 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3E936 = 1;
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

  if ( (byte_4C3E92F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4C3E92F = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3E930 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E930 = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
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

  if ( (byte_4C3E92D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E92D = 1;
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
    sub_1C372B4(titleLabel);
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

  if ( (byte_4C3E931 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4C3E931 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3E933 & 1) == 0 )
  {
    sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4C3E933 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v10; // x0
  UnityEngine_Transform_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v19; // x21
  AutoOrganizationManager_c *v20; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v24; // x23
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x5

  if ( (byte_4C3E932 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    sub_1C37058(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__);
    sub_1C37058(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
    byte_4C3E932 = 1;
  }
  v3 = sub_1C372A4(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  if ( this->fields.state == 2 )
  {
    v7 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v10;
    v11 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v10, v12, v13);
    v14 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v14, parent, 0);
      transform = *v11;
      if ( *v11 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v17, v18);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[17].fields.m_CachedPtr) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0);
          v19 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4C3E9BA )
          {
            sub_1C37058(&AutoOrganizationManager_TypeInfo);
            byte_4C3E9BA = 1;
          }
          v20 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v20 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v20->static_fields->autoOrganizationInfo;
          v24 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C372A4(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)v3,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v25);
          if ( v19 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v19, autoOrganizationInfo, eventId, preQuest, v24, v26);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C372B4(transform);
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
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  struct UILabel_o *v24; // x23
  System_String_o *mText; // x24
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  struct UILabel_o *v28; // x23
  System_String_o *v29; // x24
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *v32; // x22
  UILabel_o *v33; // x22
  __int64 *v34; // x8
  UILabel_o *v35; // x21
  AutoOrganizationManager_c *v36; // x0
  const MethodInfo *v37; // x1
  System_String_o *String_71225564; // x21
  System_String_c *klass; // x8
  System_String_o *v40; // x21
  unsigned __int64 v41; // x24
  AutoOrganizationManager_c *v42; // x0
  System_Action_o *v43; // x20

  v13 = preQuest;
  if ( (byte_4C3E92E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C37058(&StringLiteral_2076/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C37058(&StringLiteral_2078/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/);
    sub_1C37058(&StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/);
    sub_1C37058(&StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_1C37058(&StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C37058(&StringLiteral_2072/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C37058(&StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_1C37058(&StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_1C37058(&StringLiteral_2077/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C37058(&StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/);
    sub_1C37058(&StringLiteral_2496/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1C37058(&StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_1C37058(&StringLiteral_2075/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/);
    sub_1C37058(&StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4C3E92E = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    preQuest,
    (const MethodInfo *)isExistAdjustBuff);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2077/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2072/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2076/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0);
  if ( !detailCenter )
    goto LABEL_60;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0);
  if ( preQuest )
  {
    v24 = this->fields.detailLeft;
    if ( !v24 )
      goto LABEL_60;
    mText = v24->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0);
    v27 = System_String__Concat_63561656(mText, v26, 0);
    UILabel__set_text(v24, v27, 0);
    v28 = this->fields.detailCenter;
    if ( !v28 )
      goto LABEL_60;
    v29 = v28->fields.mText;
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0);
    v31 = System_String__Concat_63561656(v29, v30, 0);
    UILabel__set_text(v28, v31, 0);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v32 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2078/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0);
  if ( !v32 )
    goto LABEL_60;
  UILabel__set_text(v32, autoOrganizationInfo, 0);
  v33 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v34 = &StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v34 = &StringLiteral_2075/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v34, 0);
  if ( !v33 )
    goto LABEL_60;
  UILabel__set_text(v33, autoOrganizationInfo, 0);
  v35 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0);
  if ( !v35 )
    goto LABEL_60;
  UILabel__set_text(v35, autoOrganizationInfo, 0);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4C3E9BA )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    byte_4C3E9BA = 1;
  }
  v36 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v36 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v36->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0);
  if ( eventId < 1 )
    goto LABEL_59;
  String_71225564 = UnityEngine_PlayerPrefs__GetString_71225564((System_String_o *)StringLiteral_2496/*"AutoOrganizationBonusFilterEventId"*/, 0);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_71225564, 0);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_71225564 )
    goto LABEL_60;
  if ( String_71225564->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_71225564, 0x2Cu, 0, 0);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v40 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4C3E9BA )
    {
      sub_1C37058(&AutoOrganizationManager_TypeInfo);
      byte_4C3E9BA = 1;
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
    sub_1C372B4(autoOrganizationInfo);
  }
  v41 = 0;
  while ( 1 )
  {
    if ( v41 >= (unsigned int)klass )
      sub_1C372BC(autoOrganizationInfo);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v40[1].monitor + v41), 0);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v40[1].klass;
    if ( (__int64)++v41 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v37);
  this->fields.state = 1;
  v43 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_43866584; // x0
  __int64 v6; // x21
  unsigned __int64 v7; // x22
  __int64 v8; // x25
  __int64 v9; // x22
  _BOOL4 v10; // w23
  _BOOL4 v11; // w27
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  __int64 v17; // x1
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x1
  __int64 v25; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v27; // x23
  System_String_o *v28; // x0
  int32_t v29; // w2
  int v30; // w8
  unsigned int v31; // w9
  __int64 v32; // x23
  unsigned __int64 v33; // x8
  bool v34; // cf
  __int64 v35; // x9
  __int64 v36; // x13
  int v37; // w11
  unsigned __int64 v38; // x9
  int v39; // w14
  unsigned __int64 v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x1
  __int64 v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x1
  __int64 v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x1
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x1
  __int64 v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x1
  __int64 v75; // x0
  struct UILabel_o *v76; // x23
  System_String_o *mText; // x24
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  struct UILabel_o *v80; // x23
  System_String_o *v81; // x0
  int32_t v82; // w2
  int v83; // w8
  unsigned int v84; // w11
  unsigned __int64 v85; // x9
  int v86; // w8
  __int64 v87; // x11
  int v88; // w13
  struct UILabel_o *v89; // x21
  int v90; // w24
  System_String_o *v91; // x22
  System_String_o *v92; // x23
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  __int64 v96; // x5
  __int64 v97; // x6
  __int64 v98; // x7
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v104; // x8
  System_String_o *v105; // x0
  struct UILabel_o *v106; // x19
  System_String_o *v107; // x0
  int v108; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C3E934 & 1) == 0 )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C37058(&StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C37058(&StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_1C37058(&StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C37058(&StringLiteral_12008/*"SERVANT_UNIT"*/);
    sub_1C37058(&StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C37058(&StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C37058(&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_1C37058(&StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4C3E934 = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4C3E9BA )
  {
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    byte_4C3E9BA = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  Filter_43866584 = sub_1C37100(bool___TypeInfo, 13);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v6 = Filter_43866584;
  v7 = 0;
  v8 = Filter_43866584 + 32;
  do
  {
    Filter_43866584 = ListViewSort__GetFilter_43866584(autoOrganizationInfo, v7, 0);
    if ( !v6 )
      goto LABEL_116;
    if ( v7 >= *(unsigned int *)(v6 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v8 + v7++) = Filter_43866584 & 1;
  }
  while ( v7 != 13 );
  v9 = sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v6 + 24) < 2u )
LABEL_115:
    sub_1C372BC(Filter_43866584);
  v10 = *(_BYTE *)(v6 + 32) == 0;
  v11 = *(unsigned __int8 *)(v6 + 33) != 0;
  if ( *(_BYTE *)(v6 + 32) || !*(_BYTE *)(v6 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0);
    if ( !v9 )
      goto LABEL_116;
    v14 = *(_QWORD *)(v9 + 16);
    v15 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v14 )
      goto LABEL_116;
    v16 = *(int *)(v9 + 24);
    v17 = Filter_43866584;
    if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = v14 + 8 * v16;
      *(_DWORD *)(v9 + 24) = v16 + 1;
      *(_QWORD *)(v18 + 32) = v17;
      sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 32), v17, v12, v13);
    }
  }
  if ( v11 || v10 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0);
    if ( !v9 )
      goto LABEL_116;
    v21 = *(_QWORD *)(v9 + 16);
    v22 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v21 )
      goto LABEL_116;
    v23 = *(int *)(v9 + 24);
    v24 = Filter_43866584;
    if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = v21 + 8 * v23;
      *(_DWORD *)(v9 + 24) = v23 + 1;
      *(_QWORD *)(v25 + 32) = v24;
      sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 32), v24, v19, v20);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_43866584 = (__int64)System_String__Join_63604232(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v9,
                               0);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_43866584, 0);
  v27 = this->fields.detailRight;
  if ( !v27 )
    goto LABEL_116;
  v28 = System_String__Concat_63561656(v27->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v27, v28, 0);
  if ( !v9 )
    goto LABEL_116;
  v29 = *(_DWORD *)(v9 + 24);
  v30 = *(_DWORD *)(v9 + 28) + 1;
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = v30;
  if ( v29 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v9 + 16), 0, v29, 0);
  Filter_43866584 = sub_1C37100(bool___TypeInfo, 5);
  v31 = *(_DWORD *)(v6 + 24);
  v32 = Filter_43866584;
  v33 = 0;
  v34 = v31 >= 2;
  v35 = v31 - 2;
  if ( (_DWORD)v35 != 0 && v34 )
    v36 = v35;
  else
    v36 = 0;
  LOBYTE(v37) = 1;
  do
  {
    if ( v36 == v33 )
      goto LABEL_115;
    if ( !Filter_43866584 )
      goto LABEL_116;
    v38 = *(unsigned int *)(Filter_43866584 + 24);
    if ( v33 >= v38 )
      goto LABEL_115;
    v39 = *(unsigned __int8 *)(v6 + 34 + v33);
    *(_BYTE *)(Filter_43866584 + 32 + v33++) = v39;
    v37 = (unsigned __int8)v37 & (v39 == 0);
  }
  while ( v33 != 5 );
  if ( v37 )
  {
    v40 = 0;
    while ( v40 < v38 )
    {
      *(_BYTE *)(Filter_43866584 + 32 + v40++) = 1;
      if ( v40 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v38 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_43866584 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v43 = *(_QWORD *)(v9 + 16);
    v44 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v43 )
      goto LABEL_116;
    v45 = *(int *)(v9 + 24);
    v46 = Filter_43866584;
    if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = v43 + 8 * v45;
      *(_DWORD *)(v9 + 24) = v45 + 1;
      *(_QWORD *)(v47 + 32) = v46;
      sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 32), v46, v41, v42);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v32 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v50 = *(_QWORD *)(v9 + 16);
    v51 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v50 )
      goto LABEL_116;
    v52 = *(int *)(v9 + 24);
    v53 = Filter_43866584;
    if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = v50 + 8 * v52;
      *(_DWORD *)(v9 + 24) = v52 + 1;
      *(_QWORD *)(v54 + 32) = v53;
      sub_1C36FFC((CGThumbnailListItem_o *)(v54 + 32), v53, v48, v49);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v32 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v57 = *(_QWORD *)(v9 + 16);
    v58 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v57 )
      goto LABEL_116;
    v59 = *(int *)(v9 + 24);
    v60 = Filter_43866584;
    if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = v57 + 8 * v59;
      *(_DWORD *)(v9 + 24) = v59 + 1;
      *(_QWORD *)(v61 + 32) = v60;
      sub_1C36FFC((CGThumbnailListItem_o *)(v61 + 32), v60, v55, v56);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v32 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v64 = *(_QWORD *)(v9 + 16);
    v65 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v64 )
      goto LABEL_116;
    v66 = *(int *)(v9 + 24);
    v67 = Filter_43866584;
    if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = v64 + 8 * v66;
      *(_DWORD *)(v9 + 24) = v66 + 1;
      *(_QWORD *)(v68 + 32) = v67;
      sub_1C36FFC((CGThumbnailListItem_o *)(v68 + 32), v67, v62, v63);
    }
  }
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v32 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43866584 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
    v71 = *(_QWORD *)(v9 + 16);
    v72 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v9 + 28);
    if ( !v71 )
      goto LABEL_116;
    v73 = *(int *)(v9 + 24);
    v74 = Filter_43866584;
    if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)Filter_43866584,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = v71 + 8 * v73;
      *(_DWORD *)(v9 + 24) = v73 + 1;
      *(_QWORD *)(v75 + 32) = v74;
      sub_1C36FFC((CGThumbnailListItem_o *)(v75 + 32), v74, v69, v70);
    }
  }
  v76 = this->fields.detailRight;
  if ( !v76 )
    goto LABEL_116;
  mText = v76->fields.mText;
  v78 = System_String__Join_63604232(
          (System_String_o *)StringLiteral_113/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v9,
          0);
  v79 = System_String__Concat_63561656(mText, v78, 0);
  UILabel__set_text(v76, v79, 0);
  v80 = this->fields.detailRight;
  if ( !v80 )
    goto LABEL_116;
  v81 = System_String__Concat_63561656(v80->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v80, v81, 0);
  v82 = *(_DWORD *)(v9 + 24);
  v83 = *(_DWORD *)(v9 + 28) + 1;
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = v83;
  if ( v82 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v9 + 16), 0, v82, 0);
  Filter_43866584 = sub_1C37100(bool___TypeInfo, 6);
  v84 = *(_DWORD *)(v6 + 24);
  v85 = 0;
  v86 = 0;
  v34 = v84 >= 7;
  v87 = v84 - 7;
  if ( (_DWORD)v87 == 0 || !v34 )
    v87 = 0;
  do
  {
    if ( v87 == v85 )
      goto LABEL_115;
    if ( !Filter_43866584 )
      goto LABEL_116;
    if ( v85 >= *(unsigned int *)(Filter_43866584 + 24) )
      goto LABEL_115;
    v88 = *(unsigned __int8 *)(v6 + 39 + v85);
    *(_BYTE *)(Filter_43866584 + 32 + v85++) = v88;
    if ( v88 )
      v86 = v85;
  }
  while ( v85 != 6 );
  v89 = this->fields.detailRight;
  v90 = v86 ? v86 : 6;
  if ( !v89 )
LABEL_116:
    sub_1C372B4(Filter_43866584);
  v91 = v89->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12008/*"SERVANT_UNIT"*/, 0);
  v108 = v90;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v93, v94, v95, v96, v97, v98);
  v100 = System_String__Format(v92, v99, 0);
  v101 = System_String__Concat_63561656(v91, v100, 0);
  UILabel__set_text(v89, v101, 0);
  if ( this->fields.preQuest )
  {
    v102 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v104 = (System_String_o **)&StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v104 = (System_String_o **)&StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v105 = LocalizationManager__Get(*v104, 0);
    Filter_43866584 = (__int64)System_String__Concat_63561656(v102, v105, 0);
    v106 = this->fields.detailRight;
    if ( v106 )
    {
      v107 = System_String__Concat_63561656(v106->fields.mText, (System_String_o *)Filter_43866584, 0);
      UILabel__set_text(v106, v107, 0);
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

  if ( (byte_4C3E92B & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4C3E92B = 1;
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
    v9 = sub_1C712B0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C37574(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3E935 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3072/*"BaseWindow/CancelButton"*/);
    byte_4C3E935 = 1;
  }
  return (System_String_o *)StringLiteral_3072/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4C3E92C & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4C3E92C = 1;
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
    v9 = sub_1C712B0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C37574(v8);
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
  this->fields.invoke_impl = (intptr_t)sub_1A759BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75974;
}


System_IAsyncResult_o *PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C3E937 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3E937 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  const MethodInfo *v10; // x1

  v4 = this;
  if ( (byte_4C3E938 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C37058(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__);
    byte_4C3E938 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_34148228(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4C3E9BA )
    {
      sub_1C37058(&AutoOrganizationManager_TypeInfo);
      byte_4C3E9BA = 1;
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
          v10);
        return;
      }
    }
LABEL_17:
    sub_1C372B4(this);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4C3E939 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E939 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(go, 0);
}