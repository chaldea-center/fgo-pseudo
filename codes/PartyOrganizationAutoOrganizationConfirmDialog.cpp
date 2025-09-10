void PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22C7D & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C22C7D = 1;
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

  if ( (byte_4C22C76 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4C22C76 = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C22C77 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22C77 = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
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

  if ( (byte_4C22C74 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22C74 = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C22C78 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4C22C78 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C22C7A & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4C22C7A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C22C79 & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    sub_1C2D490(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__);
    sub_1C2D490(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
    byte_4C22C79 = 1;
  }
  v3 = sub_1C2D6DC(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  if ( this->fields.state == 2 )
  {
    v8 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v11;
    v12 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v11, v13, v14);
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
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v18, v19);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[17].fields.m_CachedPtr) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0);
          v20 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4C22D01 )
          {
            sub_1C2D490(&AutoOrganizationManager_TypeInfo);
            byte_4C22D01 = 1;
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
          v25 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C2D6DC(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
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
    sub_1C2D6EC(transform, v5);
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
  System_String_o *String_71122516; // x21
  __int64 v39; // x2
  System_String_c *klass; // x8
  System_String_o *v41; // x21
  unsigned __int64 v42; // x24
  AutoOrganizationManager_c *v43; // x0
  System_Action_o *v44; // x20

  v13 = preQuest;
  if ( (byte_4C22C75 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C2D490(&StringLiteral_2075/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/);
    sub_1C2D490(&StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/);
    sub_1C2D490(&StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_1C2D490(&StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C2D490(&StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_1C2D490(&StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_1C2D490(&StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C2D490(&StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/);
    sub_1C2D490(&StringLiteral_2493/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1C2D490(&StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_1C2D490(&StringLiteral_2072/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/);
    sub_1C2D490(&StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4C22C75 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    preQuest,
    (const MethodInfo *)isExistAdjustBuff);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0);
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
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0);
    v28 = System_String__Concat_63457864(mText, v27, 0);
    UILabel__set_text(v25, v28, 0);
    v29 = this->fields.detailCenter;
    if ( !v29 )
      goto LABEL_60;
    v30 = v29->fields.mText;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0);
    v32 = System_String__Concat_63457864(v30, v31, 0);
    UILabel__set_text(v29, v32, 0);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v33 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2075/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0);
  if ( !v33 )
    goto LABEL_60;
  UILabel__set_text(v33, autoOrganizationInfo, 0);
  v34 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v35 = &StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v35 = &StringLiteral_2072/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v35, 0);
  if ( !v34 )
    goto LABEL_60;
  UILabel__set_text(v34, autoOrganizationInfo, 0);
  v36 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0);
  if ( !v36 )
    goto LABEL_60;
  UILabel__set_text(v36, autoOrganizationInfo, 0);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4C22D01 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    byte_4C22D01 = 1;
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
  String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516((System_String_o *)StringLiteral_2493/*"AutoOrganizationBonusFilterEventId"*/, 0);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_71122516, 0);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_71122516 )
    goto LABEL_60;
  if ( String_71122516->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_71122516, 0x2Cu, 0, 0);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v41 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4C22D01 )
    {
      sub_1C2D490(&AutoOrganizationManager_TypeInfo);
      byte_4C22D01 = 1;
    }
    v43 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v43 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v43->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0);
      goto LABEL_59;
    }
LABEL_60:
    sub_1C2D6EC(autoOrganizationInfo, v16);
  }
  v42 = 0;
  while ( 1 )
  {
    if ( v42 >= (unsigned int)klass )
      sub_1C2D6F4(autoOrganizationInfo, v16, v39);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v41[1].monitor + v42), 0);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v41[1].klass;
    if ( (__int64)++v42 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v16);
  this->fields.state = 1;
  v44 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_43628744; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x25
  __int64 v10; // x2
  __int64 v11; // x22
  _BOOL4 v12; // w23
  _BOOL4 v13; // w27
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x1
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x1
  __int64 v27; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v29; // x23
  System_String_o *v30; // x0
  int32_t v31; // w2
  int v32; // w8
  unsigned int v33; // w9
  __int64 v34; // x23
  unsigned __int64 v35; // x8
  bool v36; // cf
  __int64 v37; // x9
  __int64 v38; // x13
  int v39; // w11
  unsigned __int64 v40; // x9
  int v41; // w14
  unsigned __int64 v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x1
  __int64 v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x1
  __int64 v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x1
  __int64 v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x1
  __int64 v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x1
  __int64 v77; // x0
  struct UILabel_o *v78; // x23
  System_String_o *mText; // x24
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  struct UILabel_o *v82; // x23
  System_String_o *v83; // x0
  int32_t v84; // w2
  int v85; // w8
  unsigned int v86; // w11
  unsigned __int64 v87; // x9
  int v88; // w8
  __int64 v89; // x11
  int v90; // w13
  struct UILabel_o *v91; // x21
  int v92; // w24
  System_String_o *v93; // x22
  System_String_o *v94; // x23
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v103; // x8
  System_String_o *v104; // x0
  struct UILabel_o *v105; // x19
  System_String_o *v106; // x0
  int v107; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C22C7B & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C2D490(&StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_11800/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C2D490(&StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_1C2D490(&StringLiteral_11799/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C2D490(&StringLiteral_12001/*"SERVANT_UNIT"*/);
    sub_1C2D490(&StringLiteral_11798/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C2D490(&StringLiteral_11796/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C2D490(&StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_1C2D490(&StringLiteral_11797/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4C22C7B = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4C22D01 )
  {
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    byte_4C22D01 = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  Filter_43628744 = sub_1C2D538(bool___TypeInfo, 13);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v7 = Filter_43628744;
  v8 = 0;
  v9 = Filter_43628744 + 32;
  do
  {
    Filter_43628744 = ListViewSort__GetFilter_43628744(autoOrganizationInfo, v8, 0);
    if ( !v7 )
      goto LABEL_116;
    if ( v8 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v9 + v8++) = Filter_43628744 & 1;
  }
  while ( v8 != 13 );
  v11 = sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v11,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v7 + 24) < 2u )
LABEL_115:
    sub_1C2D6F4(Filter_43628744, v6, v10);
  v12 = *(_BYTE *)(v7 + 32) == 0;
  v13 = *(unsigned __int8 *)(v7 + 33) != 0;
  if ( *(_BYTE *)(v7 + 32) || !*(_BYTE *)(v7 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0);
    if ( !v11 )
      goto LABEL_116;
    v16 = *(_QWORD *)(v11 + 16);
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v16 )
      goto LABEL_116;
    v18 = *(int *)(v11 + 24);
    v19 = Filter_43628744;
    if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = v16 + 8 * v18;
      *(_DWORD *)(v11 + 24) = v18 + 1;
      *(_QWORD *)(v20 + 32) = v19;
      sub_1C2D434((CGThumbnailListItem_o *)(v20 + 32), v19, v14, v15);
    }
  }
  if ( v13 || v12 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0);
    if ( !v11 )
      goto LABEL_116;
    v23 = *(_QWORD *)(v11 + 16);
    v24 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v23 )
      goto LABEL_116;
    v25 = *(int *)(v11 + 24);
    v26 = Filter_43628744;
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = v23 + 8 * v25;
      *(_DWORD *)(v11 + 24) = v25 + 1;
      *(_QWORD *)(v27 + 32) = v26;
      sub_1C2D434((CGThumbnailListItem_o *)(v27 + 32), v26, v21, v22);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_43628744 = (__int64)System_String__Join_63500440(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v11,
                               0);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_43628744, 0);
  v29 = this->fields.detailRight;
  if ( !v29 )
    goto LABEL_116;
  v30 = System_String__Concat_63457864(v29->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v29, v30, 0);
  if ( !v11 )
    goto LABEL_116;
  v31 = *(_DWORD *)(v11 + 24);
  v32 = *(_DWORD *)(v11 + 28) + 1;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = v32;
  if ( v31 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v11 + 16), 0, v31, 0);
  Filter_43628744 = sub_1C2D538(bool___TypeInfo, 5);
  v33 = *(_DWORD *)(v7 + 24);
  v34 = Filter_43628744;
  v35 = 0;
  v36 = v33 >= 2;
  v37 = v33 - 2;
  if ( (_DWORD)v37 != 0 && v36 )
    v38 = v37;
  else
    v38 = 0;
  LOBYTE(v39) = 1;
  do
  {
    if ( v38 == v35 )
      goto LABEL_115;
    if ( !Filter_43628744 )
      goto LABEL_116;
    v40 = *(unsigned int *)(Filter_43628744 + 24);
    if ( v35 >= v40 )
      goto LABEL_115;
    v41 = *(unsigned __int8 *)(v7 + 34 + v35);
    *(_BYTE *)(Filter_43628744 + 32 + v35++) = v41;
    v39 = (unsigned __int8)v39 & (v41 == 0);
  }
  while ( v35 != 5 );
  if ( v39 )
  {
    v42 = 0;
    while ( v42 < v40 )
    {
      *(_BYTE *)(Filter_43628744 + 32 + v42++) = 1;
      if ( v42 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v40 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_43628744 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11799/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v45 = *(_QWORD *)(v11 + 16);
    v46 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v45 )
      goto LABEL_116;
    v47 = *(int *)(v11 + 24);
    v48 = Filter_43628744;
    if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = v45 + 8 * v47;
      *(_DWORD *)(v11 + 24) = v47 + 1;
      *(_QWORD *)(v49 + 32) = v48;
      sub_1C2D434((CGThumbnailListItem_o *)(v49 + 32), v48, v43, v44);
    }
  }
  if ( *(_DWORD *)(v34 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v34 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11798/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v52 = *(_QWORD *)(v11 + 16);
    v53 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v52 )
      goto LABEL_116;
    v54 = *(int *)(v11 + 24);
    v55 = Filter_43628744;
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = v52 + 8 * v54;
      *(_DWORD *)(v11 + 24) = v54 + 1;
      *(_QWORD *)(v56 + 32) = v55;
      sub_1C2D434((CGThumbnailListItem_o *)(v56 + 32), v55, v50, v51);
    }
  }
  if ( *(_DWORD *)(v34 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v34 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v59 = *(_QWORD *)(v11 + 16);
    v60 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v59 )
      goto LABEL_116;
    v61 = *(int *)(v11 + 24);
    v62 = Filter_43628744;
    if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = v59 + 8 * v61;
      *(_DWORD *)(v11 + 24) = v61 + 1;
      *(_QWORD *)(v63 + 32) = v62;
      sub_1C2D434((CGThumbnailListItem_o *)(v63 + 32), v62, v57, v58);
    }
  }
  if ( *(_DWORD *)(v34 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v34 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11800/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v66 = *(_QWORD *)(v11 + 16);
    v67 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v66 )
      goto LABEL_116;
    v68 = *(int *)(v11 + 24);
    v69 = Filter_43628744;
    if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = v66 + 8 * v68;
      *(_DWORD *)(v11 + 24) = v68 + 1;
      *(_QWORD *)(v70 + 32) = v69;
      sub_1C2D434((CGThumbnailListItem_o *)(v70 + 32), v69, v64, v65);
    }
  }
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v34 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_43628744 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11796/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
    v73 = *(_QWORD *)(v11 + 16);
    v74 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v73 )
      goto LABEL_116;
    v75 = *(int *)(v11 + 24);
    v76 = Filter_43628744;
    if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_43628744,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = v73 + 8 * v75;
      *(_DWORD *)(v11 + 24) = v75 + 1;
      *(_QWORD *)(v77 + 32) = v76;
      sub_1C2D434((CGThumbnailListItem_o *)(v77 + 32), v76, v71, v72);
    }
  }
  v78 = this->fields.detailRight;
  if ( !v78 )
    goto LABEL_116;
  mText = v78->fields.mText;
  v80 = System_String__Join_63500440(
          (System_String_o *)StringLiteral_113/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v11,
          0);
  v81 = System_String__Concat_63457864(mText, v80, 0);
  UILabel__set_text(v78, v81, 0);
  v82 = this->fields.detailRight;
  if ( !v82 )
    goto LABEL_116;
  v83 = System_String__Concat_63457864(v82->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v82, v83, 0);
  v84 = *(_DWORD *)(v11 + 24);
  v85 = *(_DWORD *)(v11 + 28) + 1;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = v85;
  if ( v84 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v11 + 16), 0, v84, 0);
  Filter_43628744 = sub_1C2D538(bool___TypeInfo, 6);
  v86 = *(_DWORD *)(v7 + 24);
  v87 = 0;
  v88 = 0;
  v36 = v86 >= 7;
  v89 = v86 - 7;
  if ( (_DWORD)v89 == 0 || !v36 )
    v89 = 0;
  do
  {
    if ( v89 == v87 )
      goto LABEL_115;
    if ( !Filter_43628744 )
      goto LABEL_116;
    if ( v87 >= *(unsigned int *)(Filter_43628744 + 24) )
      goto LABEL_115;
    v90 = *(unsigned __int8 *)(v7 + 39 + v87);
    *(_BYTE *)(Filter_43628744 + 32 + v87++) = v90;
    if ( v90 )
      v88 = v87;
  }
  while ( v87 != 6 );
  v91 = this->fields.detailRight;
  v92 = v88 ? v88 : 6;
  if ( !v91 )
LABEL_116:
    sub_1C2D6EC(Filter_43628744, v6);
  v93 = v91->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12001/*"SERVANT_UNIT"*/, 0);
  v107 = v92;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107, v95, v96, v97);
  v99 = System_String__Format(v94, v98, 0);
  v100 = System_String__Concat_63457864(v93, v99, 0);
  UILabel__set_text(v91, v100, 0);
  if ( this->fields.preQuest )
  {
    v101 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v103 = (System_String_o **)&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v103 = (System_String_o **)&StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v104 = LocalizationManager__Get(*v103, 0);
    Filter_43628744 = (__int64)System_String__Concat_63457864(v101, v104, 0);
    v105 = this->fields.detailRight;
    if ( v105 )
    {
      v106 = System_String__Concat_63457864(v105->fields.mText, (System_String_o *)Filter_43628744, 0);
      UILabel__set_text(v105, v106, 0);
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

  if ( (byte_4C22C72 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4C22C72 = 1;
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
    v9 = sub_1C676E8(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C2D9AC(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22C7C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3069/*"BaseWindow/CancelButton"*/);
    byte_4C22C7C = 1;
  }
  return (System_String_o *)StringLiteral_3069/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4C22C73 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4C22C73 = 1;
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
    v9 = sub_1C676E8(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C2D9AC(v8);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6BF64;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6BF1C;
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
  if ( (byte_4C22C7E & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22C7E = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  if ( (byte_4C22C7F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C2D490(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__);
    byte_4C22C7F = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_33938652(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4C22D01 )
    {
      sub_1C2D490(&AutoOrganizationManager_TypeInfo);
      byte_4C22D01 = 1;
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
    sub_1C2D6EC(this, isDecide);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4C22C80 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22C80 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(go, 0);
}