void PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2807A & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2807A = 1;
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

  if ( (byte_4D28073 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4D28073 = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D28074 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28074 = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
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

  if ( (byte_4D28071 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28071 = 1;
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
    sub_1C942F0(titleLabel, method);
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

  if ( (byte_4D28075 & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4D28075 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D28077 & 1) == 0 )
  {
    sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4D28077 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v15; // x0
  UnityEngine_Transform_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  PartyOrganizationAutoOrganizationSettingDialog_o *v32; // x21
  AutoOrganizationManager_c *v33; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v37; // x23
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x5

  if ( (byte_4D28076 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__);
    sub_1C94098(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
    byte_4D28076 = 1;
  }
  v3 = sub_1C942E4(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 2 )
  {
    v12 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C940B0(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C9407C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v15;
    v16 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v15, v17, v18, v19, v20, v21, v22);
    v23 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v23, parent, 0);
      transform = *v16;
      if ( *v16 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Component_object, v26, v27, v28, v29, v30, v31);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[17].fields.m_CachedPtr) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0);
          v32 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4D280FE )
          {
            sub_1C94098(&AutoOrganizationManager_TypeInfo);
            byte_4D280FE = 1;
          }
          v33 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v33 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v33->static_fields->autoOrganizationInfo;
          v37 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C942E4(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v37,
            (Il2CppObject *)v3,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v38);
          if ( v32 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v32, autoOrganizationInfo, eventId, preQuest, v37, v39);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C942F0(transform, v5);
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
  System_String_o *v7; // x7
  bool v14; // w27
  UILabel_o *titleLabel; // x24
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v17; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  struct UILabel_o *v26; // x23
  System_String_o *mText; // x24
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  struct UILabel_o *v30; // x23
  System_String_o *v31; // x24
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *v34; // x22
  UILabel_o *v35; // x22
  __int64 *v36; // x8
  UILabel_o *v37; // x21
  AutoOrganizationManager_c *v38; // x0
  System_String_o *String_72069276; // x21
  System_String_c *klass; // x8
  System_String_o *v41; // x21
  unsigned __int64 v42; // x24
  AutoOrganizationManager_c *v43; // x0
  System_Action_o *v44; // x20

  v14 = preQuest;
  if ( (byte_4D28072 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C94098(&StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C94098(&StringLiteral_2075/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/);
    sub_1C94098(&StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/);
    sub_1C94098(&StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_1C94098(&StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C94098(&StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_1C94098(&StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_1C94098(&StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C94098(&StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/);
    sub_1C94098(&StringLiteral_2492/*"AutoOrganizationBonusFilterEventId"*/);
    sub_1C94098(&StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_1C94098(&StringLiteral_2072/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/);
    sub_1C94098(&StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4D28072 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v14;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    preQuest,
    isExistAdjustBuff,
    (System_String_o *)isAutoOpen,
    (int32_t)func,
    (int64_t)method,
    v7);
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
    v26 = this->fields.detailLeft;
    if ( !v26 )
      goto LABEL_60;
    mText = v26->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0);
    v29 = System_String__Concat_64417744(mText, v28, 0);
    UILabel__set_text(v26, v29, 0);
    v30 = this->fields.detailCenter;
    if ( !v30 )
      goto LABEL_60;
    v31 = v30->fields.mText;
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0);
    v33 = System_String__Concat_64417744(v31, v32, 0);
    UILabel__set_text(v30, v33, 0);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v34 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2075/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0);
  if ( !v34 )
    goto LABEL_60;
  UILabel__set_text(v34, autoOrganizationInfo, 0);
  v35 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v36 = &StringLiteral_2071/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v36 = &StringLiteral_2072/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v36, 0);
  if ( !v35 )
    goto LABEL_60;
  UILabel__set_text(v35, autoOrganizationInfo, 0);
  v37 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0);
  if ( !v37 )
    goto LABEL_60;
  UILabel__set_text(v37, autoOrganizationInfo, 0);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4D280FE )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D280FE = 1;
  }
  v38 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v38 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v38->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0);
  if ( eventId < 1 )
    goto LABEL_59;
  String_72069276 = UnityEngine_PlayerPrefs__GetString_72069276((System_String_o *)StringLiteral_2492/*"AutoOrganizationBonusFilterEventId"*/, 0);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_72069276, 0);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_72069276 )
    goto LABEL_60;
  if ( String_72069276->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_72069276, 0x2Cu, 0, 0);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v41 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4D280FE )
    {
      sub_1C94098(&AutoOrganizationManager_TypeInfo);
      byte_4D280FE = 1;
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
    sub_1C942F0(autoOrganizationInfo, v17);
  }
  v42 = 0;
  while ( 1 )
  {
    if ( v42 >= (unsigned int)klass )
      sub_1C942F8(autoOrganizationInfo);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v41[1].monitor + v42), 0);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v41[1].klass;
    if ( (__int64)++v42 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v17);
  this->fields.state = 1;
  v44 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  AutoOrganizationManager_c *v3; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_44656304; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x25
  __int64 v10; // x22
  _BOOL4 v11; // w23
  _BOOL4 v12; // w27
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x1
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x1
  __int64 v34; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v36; // x23
  System_String_o *v37; // x0
  int32_t v38; // w2
  int v39; // w8
  unsigned int v40; // w9
  __int64 v41; // x23
  unsigned __int64 v42; // x8
  bool v43; // cf
  __int64 v44; // x9
  __int64 v45; // x13
  int v46; // w11
  unsigned __int64 v47; // x9
  int v48; // w14
  unsigned __int64 v49; // x8
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x1
  __int64 v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x1
  __int64 v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x1
  __int64 v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  __int64 v92; // x1
  __int64 v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x1
  __int64 v104; // x0
  struct UILabel_o *v105; // x23
  System_String_o *mText; // x24
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  struct UILabel_o *v109; // x23
  System_String_o *v110; // x0
  int32_t v111; // w2
  int v112; // w8
  unsigned int v113; // w11
  unsigned __int64 v114; // x9
  int v115; // w8
  __int64 v116; // x11
  int v117; // w13
  struct UILabel_o *v118; // x21
  int v119; // w24
  System_String_o *v120; // x22
  System_String_o *v121; // x23
  Il2CppObject *v122; // x0
  System_String_o *v123; // x0
  System_String_o *v124; // x0
  System_String_o *v125; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v127; // x8
  System_String_o *v128; // x0
  struct UILabel_o *v129; // x19
  System_String_o *v130; // x0
  int v131; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D28078 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C94098(&StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_11854/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C94098(&StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_1C94098(&StringLiteral_11853/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C94098(&StringLiteral_12055/*"SERVANT_UNIT"*/);
    sub_1C94098(&StringLiteral_11852/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C94098(&StringLiteral_11850/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C94098(&StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_1C94098(&StringLiteral_11851/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4D28078 = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4D280FE )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D280FE = 1;
  }
  v3 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v3 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v3->static_fields->autoOrganizationInfo;
  Filter_44656304 = sub_1C94140(bool___TypeInfo, 13);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v7 = Filter_44656304;
  v8 = 0;
  v9 = Filter_44656304 + 32;
  do
  {
    Filter_44656304 = ListViewSort__GetFilter_44656304(autoOrganizationInfo, v8, 0);
    if ( !v7 )
      goto LABEL_116;
    if ( v8 >= *(unsigned int *)(v7 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v9 + v8++) = Filter_44656304 & 1;
  }
  while ( v8 != 13 );
  v10 = sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v7 + 24) < 2u )
LABEL_115:
    sub_1C942F8(Filter_44656304);
  v11 = *(_BYTE *)(v7 + 32) == 0;
  v12 = *(unsigned __int8 *)(v7 + 33) != 0;
  if ( *(_BYTE *)(v7 + 32) || !*(_BYTE *)(v7 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0);
    if ( !v10 )
      goto LABEL_116;
    v19 = *(_QWORD *)(v10 + 16);
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v19 )
      goto LABEL_116;
    v21 = *(int *)(v10 + 24);
    v22 = Filter_44656304;
    if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = v19 + 8 * v21;
      *(_DWORD *)(v10 + 24) = v21 + 1;
      *(_QWORD *)(v23 + 32) = v22;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 32), v22, v13, v14, v15, v16, v17, v18);
    }
  }
  if ( v12 || v11 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0);
    if ( !v10 )
      goto LABEL_116;
    v30 = *(_QWORD *)(v10 + 16);
    v31 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v30 )
      goto LABEL_116;
    v32 = *(int *)(v10 + 24);
    v33 = Filter_44656304;
    if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = v30 + 8 * v32;
      *(_DWORD *)(v10 + 24) = v32 + 1;
      *(_QWORD *)(v34 + 32) = v33;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 32), v33, v24, v25, v26, v27, v28, v29);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_44656304 = (__int64)System_String__Join_64460336(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v10,
                               0);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_44656304, 0);
  v36 = this->fields.detailRight;
  if ( !v36 )
    goto LABEL_116;
  v37 = System_String__Concat_64417744(v36->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v36, v37, 0);
  if ( !v10 )
    goto LABEL_116;
  v38 = *(_DWORD *)(v10 + 24);
  v39 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v39;
  if ( v38 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v38, 0);
  Filter_44656304 = sub_1C94140(bool___TypeInfo, 5);
  v40 = *(_DWORD *)(v7 + 24);
  v41 = Filter_44656304;
  v42 = 0;
  v43 = v40 >= 2;
  v44 = v40 - 2;
  if ( (_DWORD)v44 != 0 && v43 )
    v45 = v44;
  else
    v45 = 0;
  LOBYTE(v46) = 1;
  do
  {
    if ( v45 == v42 )
      goto LABEL_115;
    if ( !Filter_44656304 )
      goto LABEL_116;
    v47 = *(unsigned int *)(Filter_44656304 + 24);
    if ( v42 >= v47 )
      goto LABEL_115;
    v48 = *(unsigned __int8 *)(v7 + 34 + v42);
    *(_BYTE *)(Filter_44656304 + 32 + v42++) = v48;
    v46 = (unsigned __int8)v46 & (v48 == 0);
  }
  while ( v42 != 5 );
  if ( v46 )
  {
    v49 = 0;
    while ( v49 < v47 )
    {
      *(_BYTE *)(Filter_44656304 + 32 + v49++) = 1;
      if ( v49 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v47 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_44656304 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11853/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v56 = *(_QWORD *)(v10 + 16);
    v57 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v56 )
      goto LABEL_116;
    v58 = *(int *)(v10 + 24);
    v59 = Filter_44656304;
    if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = v56 + 8 * v58;
      *(_DWORD *)(v10 + 24) = v58 + 1;
      *(_QWORD *)(v60 + 32) = v59;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v60 + 32), v59, v50, v51, v52, v53, v54, v55);
    }
  }
  if ( *(_DWORD *)(v41 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v41 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v67 = *(_QWORD *)(v10 + 16);
    v68 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v67 )
      goto LABEL_116;
    v69 = *(int *)(v10 + 24);
    v70 = Filter_44656304;
    if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = v67 + 8 * v69;
      *(_DWORD *)(v10 + 24) = v69 + 1;
      *(_QWORD *)(v71 + 32) = v70;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v71 + 32), v70, v61, v62, v63, v64, v65, v66);
    }
  }
  if ( *(_DWORD *)(v41 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v41 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v78 = *(_QWORD *)(v10 + 16);
    v79 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v78 )
      goto LABEL_116;
    v80 = *(int *)(v10 + 24);
    v81 = Filter_44656304;
    if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = v78 + 8 * v80;
      *(_DWORD *)(v10 + 24) = v80 + 1;
      *(_QWORD *)(v82 + 32) = v81;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v82 + 32), v81, v72, v73, v74, v75, v76, v77);
    }
  }
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v41 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v89 = *(_QWORD *)(v10 + 16);
    v90 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v89 )
      goto LABEL_116;
    v91 = *(int *)(v10 + 24);
    v92 = Filter_44656304;
    if ( (unsigned int)v91 >= *(_DWORD *)(v89 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = v89 + 8 * v91;
      *(_DWORD *)(v10 + 24) = v91 + 1;
      *(_QWORD *)(v93 + 32) = v92;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v93 + 32), v92, v83, v84, v85, v86, v87, v88);
    }
  }
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v41 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656304 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11850/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
    v100 = *(_QWORD *)(v10 + 16);
    v101 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v10 + 28);
    if ( !v100 )
      goto LABEL_116;
    v102 = *(int *)(v10 + 24);
    v103 = Filter_44656304;
    if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v10,
        (Il2CppObject *)Filter_44656304,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
    }
    else
    {
      v104 = v100 + 8 * v102;
      *(_DWORD *)(v10 + 24) = v102 + 1;
      *(_QWORD *)(v104 + 32) = v103;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v104 + 32), v103, v94, v95, v96, v97, v98, v99);
    }
  }
  v105 = this->fields.detailRight;
  if ( !v105 )
    goto LABEL_116;
  mText = v105->fields.mText;
  v107 = System_String__Join_64460336(
           (System_String_o *)StringLiteral_113/*" "*/,
           (System_Collections_Generic_IEnumerable_string__o *)v10,
           0);
  v108 = System_String__Concat_64417744(mText, v107, 0);
  UILabel__set_text(v105, v108, 0);
  v109 = this->fields.detailRight;
  if ( !v109 )
    goto LABEL_116;
  v110 = System_String__Concat_64417744(v109->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v109, v110, 0);
  v111 = *(_DWORD *)(v10 + 24);
  v112 = *(_DWORD *)(v10 + 28) + 1;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = v112;
  if ( v111 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v10 + 16), 0, v111, 0);
  Filter_44656304 = sub_1C94140(bool___TypeInfo, 6);
  v113 = *(_DWORD *)(v7 + 24);
  v114 = 0;
  v115 = 0;
  v43 = v113 >= 7;
  v116 = v113 - 7;
  if ( (_DWORD)v116 == 0 || !v43 )
    v116 = 0;
  do
  {
    if ( v116 == v114 )
      goto LABEL_115;
    if ( !Filter_44656304 )
      goto LABEL_116;
    if ( v114 >= *(unsigned int *)(Filter_44656304 + 24) )
      goto LABEL_115;
    v117 = *(unsigned __int8 *)(v7 + 39 + v114);
    *(_BYTE *)(Filter_44656304 + 32 + v114++) = v117;
    if ( v117 )
      v115 = v114;
  }
  while ( v114 != 6 );
  v118 = this->fields.detailRight;
  v119 = v115 ? v115 : 6;
  if ( !v118 )
LABEL_116:
    sub_1C942F0(Filter_44656304, v6);
  v120 = v118->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SERVANT_UNIT"*/, 0);
  v131 = v119;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
  v123 = System_String__Format(v121, v122, 0);
  v124 = System_String__Concat_64417744(v120, v123, 0);
  UILabel__set_text(v118, v124, 0);
  if ( this->fields.preQuest )
  {
    v125 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v127 = (System_String_o **)&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v127 = (System_String_o **)&StringLiteral_2067/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v128 = LocalizationManager__Get(*v127, 0);
    Filter_44656304 = (__int64)System_String__Concat_64417744(v125, v128, 0);
    v129 = this->fields.detailRight;
    if ( v129 )
    {
      v130 = System_String__Concat_64417744(v129->fields.mText, (System_String_o *)Filter_44656304, 0);
      UILabel__set_text(v129, v130, 0);
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

  if ( (byte_4D2806F & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4D2806F = 1;
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
    v9 = sub_1CEFE6C(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C9468C(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D28079 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3073/*"BaseWindow/CancelButton"*/);
    byte_4D28079 = 1;
  }
  return (System_String_o *)StringLiteral_3073/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4D28070 & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4D28070 = 1;
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
    v9 = sub_1CEFE6C(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C9468C(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC26EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC26A4;
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
  if ( (byte_4D2807B & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D2807B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  AutoOrganizationManager_c *v13; // x0

  v4 = this;
  if ( (byte_4D2807C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C94098(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__);
    byte_4D2807C = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_34745632(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4D280FE )
    {
      sub_1C94098(&AutoOrganizationManager_TypeInfo);
      byte_4D280FE = 1;
    }
    v13 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v13 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v13->static_fields->autoOrganizationInfo;
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
    sub_1C942F0(this, isDecide);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4D2807D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2807D = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(go, 0);
}