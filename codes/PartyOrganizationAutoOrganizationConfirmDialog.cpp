void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFDA63 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFDA63 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        bool autoDestroy,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4AFDA5C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, autoDestroy);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v5);
    byte_4AFDA5C = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4AFDA5D & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDA5D = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
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

  if ( (byte_4AFDA5A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFDA5A = 1;
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
    sub_1BC3264(titleLabel, method);
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

  if ( (byte_4AFDA5E & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_4AFDA5E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
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

  if ( (byte_4AFDA60 & 1) == 0 )
  {
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_4AFDA60 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v18; // x0
  UnityEngine_Transform_o **v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  PartyOrganizationAutoOrganizationSettingDialog_o *v28; // x21
  AutoOrganizationManager_c *v29; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v33; // x23
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x5

  if ( (byte_4AFDA5F & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, method);
    sub_1BC3008(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v4);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v7);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__, v8);
    sub_1BC3008(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo, v9);
    byte_4AFDA5F = 1;
  }
  v10 = sub_1BC3254(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v13, v14);
  if ( this->fields.state == 2 )
  {
    v15 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BC3020(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v18;
    v19 = (UnityEngine_Transform_o **)(v10 + 24);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 24), (int32_t)v18, v20, v21);
    v22 = *(UnityEngine_GameObject_o **)(v10 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v22, parent, 0LL);
      transform = *v19;
      if ( *v19 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v10 + 16) = Component_object;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Component_object, v25, v26);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          transform[17].fields.m_CachedPtr = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v28 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v10 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4AFDAE7 )
          {
            sub_1BC3008(&AutoOrganizationManager_TypeInfo, v27);
            byte_4AFDAE7 = 1;
          }
          v29 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v29 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v29->static_fields->autoOrganizationInfo;
          v33 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1BC3254(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v33,
            (Il2CppObject *)v10,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v34);
          if ( v28 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v28, autoOrganizationInfo, eventId, preQuest, v33, v35);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1BC3264(transform, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UILabel_o *titleLabel; // x24
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v35; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  struct UILabel_o *v44; // x23
  System_String_o *mText; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x23
  System_String_o *v49; // x24
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  UILabel_o *v52; // x22
  UILabel_o *v53; // x22
  __int64 *v54; // x8
  UILabel_o *v55; // x21
  AutoOrganizationManager_c *v56; // x0
  System_String_o *String_69993112; // x21
  __int64 v58; // x2
  System_String_c *klass; // x8
  System_String_o *v60; // x21
  unsigned __int64 v61; // x24
  AutoOrganizationManager_c *v62; // x0
  System_Action_o *v63; // x20

  v13 = preQuest;
  if ( (byte_4AFDA5B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v14);
    sub_1BC3008(&LocalizationManager_TypeInfo, v15);
    sub_1BC3008(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v16);
    sub_1BC3008(&StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v17);
    sub_1BC3008(&StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, v18);
    sub_1BC3008(&StringLiteral_2048/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, v19);
    sub_1BC3008(&StringLiteral_2051/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, v20);
    sub_1BC3008(&StringLiteral_2047/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v21);
    sub_1BC3008(&StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v22);
    sub_1BC3008(&StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v23);
    sub_1BC3008(&StringLiteral_2050/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, v24);
    sub_1BC3008(&StringLiteral_2054/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, v25);
    sub_1BC3008(&StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v26);
    sub_1BC3008(&StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/, v27);
    sub_1BC3008(&StringLiteral_2479/*"AutoOrganizationBonusFilterEventId"*/, v28);
    sub_1BC3008(&StringLiteral_2055/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, v29);
    sub_1BC3008(&StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/, v30);
    sub_1BC3008(&StringLiteral_2049/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v31);
    sub_1BC3008(&StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v32);
    byte_4AFDA5B = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    preQuest,
    (const MethodInfo *)isExistAdjustBuff);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2047/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2063/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2049/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2058/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2054/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2050/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_60;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v44 = this->fields.detailLeft;
    if ( !v44 )
      goto LABEL_60;
    mText = v44->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v47 = System_String__Concat_62348648(mText, v46, 0LL);
    UILabel__set_text(v44, v47, 0LL);
    v48 = this->fields.detailCenter;
    if ( !v48 )
      goto LABEL_60;
    v49 = v48->fields.mText;
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2051/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v51 = System_String__Concat_62348648(v49, v50, 0LL);
    UILabel__set_text(v48, v51, 0LL);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v52 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0LL);
  if ( !v52 )
    goto LABEL_60;
  UILabel__set_text(v52, autoOrganizationInfo, 0LL);
  v53 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v54 = &StringLiteral_2061/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v54 = &StringLiteral_2062/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  if ( !v53 )
    goto LABEL_60;
  UILabel__set_text(v53, autoOrganizationInfo, 0LL);
  v55 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2048/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0LL);
  if ( !v55 )
    goto LABEL_60;
  UILabel__set_text(v55, autoOrganizationInfo, 0LL);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4AFDAE7 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v35);
    byte_4AFDAE7 = 1;
  }
  v56 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v56 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v56->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId < 1 )
    goto LABEL_59;
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112((System_String_o *)StringLiteral_2479/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_69993112, 0LL);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_69993112 )
    goto LABEL_60;
  if ( String_69993112->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v60 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4AFDAE7 )
    {
      sub_1BC3008(&AutoOrganizationManager_TypeInfo, v35);
      byte_4AFDAE7 = 1;
    }
    v62 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v62 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v62->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_1BC3264(autoOrganizationInfo, v35);
  }
  v61 = 0LL;
  while ( 1 )
  {
    if ( v61 >= (unsigned int)klass )
      sub_1BC326C(autoOrganizationInfo, v35, v58);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v60[1].monitor + v61), 0LL);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v60[1].klass;
    if ( (__int64)++v61 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v35);
  this->fields.state = 1;
  v63 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  AutoOrganizationManager_c *v22; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_42829936; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  unsigned __int64 v27; // x22
  __int64 v28; // x25
  __int64 v29; // x2
  __int64 v30; // x22
  _BOOL4 v31; // w23
  _BOOL4 v32; // w27
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x1
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x1
  __int64 v46; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v48; // x23
  System_String_o *v49; // x0
  int32_t v50; // w2
  int v51; // w8
  unsigned int v52; // w9
  __int64 v53; // x23
  unsigned __int64 v54; // x8
  bool v55; // cf
  __int64 v56; // x9
  __int64 v57; // x13
  int v58; // w11
  unsigned __int64 v59; // x9
  int v60; // w14
  unsigned __int64 v61; // x8
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
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x1
  __int64 v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  __int64 v88; // x1
  __int64 v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x1
  __int64 v96; // x0
  struct UILabel_o *v97; // x23
  System_String_o *mText; // x24
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  struct UILabel_o *v101; // x23
  System_String_o *v102; // x0
  int32_t v103; // w2
  int v104; // w8
  unsigned int v105; // w11
  unsigned __int64 v106; // x9
  int v107; // w8
  __int64 v108; // x11
  int v109; // w13
  struct UILabel_o *v110; // x21
  int v111; // w24
  System_String_o *v112; // x22
  System_String_o *v113; // x23
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  Il2CppObject *v117; // x0
  System_String_o *v118; // x0
  System_String_o *v119; // x0
  System_String_o *v120; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v122; // x8
  System_String_o *v123; // x0
  struct UILabel_o *v124; // x19
  System_String_o *v125; // x0
  int v126; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4AFDA61 & 1) == 0 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, method);
    sub_1BC3008(&bool___TypeInfo, v3);
    sub_1BC3008(&int_TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v10);
    sub_1BC3008(&StringLiteral_2056/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/, v11);
    sub_1BC3008(&StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/, v12);
    sub_1BC3008(&StringLiteral_113/*" "*/, v13);
    sub_1BC3008(&StringLiteral_11691/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v14);
    sub_1BC3008(&StringLiteral_2052/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, v15);
    sub_1BC3008(&StringLiteral_11690/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v16);
    sub_1BC3008(&StringLiteral_11891/*"SERVANT_UNIT"*/, v17);
    sub_1BC3008(&StringLiteral_11689/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v18);
    sub_1BC3008(&StringLiteral_11687/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v19);
    sub_1BC3008(&StringLiteral_2053/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, v20);
    sub_1BC3008(&StringLiteral_11688/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v21);
    byte_4AFDA61 = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4AFDAE7 )
  {
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, method);
    byte_4AFDAE7 = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v22->static_fields->autoOrganizationInfo;
  Filter_42829936 = sub_1BC30B0(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v26 = Filter_42829936;
  v27 = 0LL;
  v28 = Filter_42829936 + 32;
  do
  {
    Filter_42829936 = ListViewSort__GetFilter_42829936(autoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_116;
    if ( v27 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v28 + v27++) = Filter_42829936 & 1;
  }
  while ( v27 != 13 );
  v30 = sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v30,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v26 + 24) < 2u )
LABEL_115:
    sub_1BC326C(Filter_42829936, v25, v29);
  v31 = *(_BYTE *)(v26 + 32) == 0;
  v32 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2053/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v30 )
      goto LABEL_116;
    v35 = *(_QWORD *)(v30 + 16);
    v36 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v35 )
      goto LABEL_116;
    v37 = *(int *)(v30 + 24);
    v38 = Filter_42829936;
    if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = v35 + 8 * v37;
      *(_DWORD *)(v30 + 24) = v37 + 1;
      *(_QWORD *)(v39 + 32) = v38;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 32), v38, v33, v34);
    }
  }
  if ( v32 || v31 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2052/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v30 )
      goto LABEL_116;
    v42 = *(_QWORD *)(v30 + 16);
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v42 )
      goto LABEL_116;
    v44 = *(int *)(v30 + 24);
    v45 = Filter_42829936;
    if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = v42 + 8 * v44;
      *(_DWORD *)(v30 + 24) = v44 + 1;
      *(_QWORD *)(v46 + 32) = v45;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v46 + 32), v45, v40, v41);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_42829936 = (__int64)System_String__Join_62391224(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v30,
                               0LL);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_42829936, 0LL);
  v48 = this->fields.detailRight;
  if ( !v48 )
    goto LABEL_116;
  v49 = System_String__Concat_62348648(v48->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v48, v49, 0LL);
  if ( !v30 )
    goto LABEL_116;
  v50 = *(_DWORD *)(v30 + 24);
  v51 = *(_DWORD *)(v30 + 28) + 1;
  *(_DWORD *)(v30 + 24) = 0;
  *(_DWORD *)(v30 + 28) = v51;
  if ( v50 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v30 + 16), 0, v50, 0LL);
  Filter_42829936 = sub_1BC30B0(bool___TypeInfo, 5LL);
  v52 = *(_DWORD *)(v26 + 24);
  v53 = Filter_42829936;
  v54 = 0LL;
  v55 = v52 >= 2;
  v56 = v52 - 2;
  if ( (_DWORD)v56 != 0 && v55 )
    v57 = v56;
  else
    v57 = 0LL;
  LOBYTE(v58) = 1;
  do
  {
    if ( v57 == v54 )
      goto LABEL_115;
    if ( !Filter_42829936 )
      goto LABEL_116;
    v59 = *(unsigned int *)(Filter_42829936 + 24);
    if ( v54 >= v59 )
      goto LABEL_115;
    v60 = *(unsigned __int8 *)(v26 + 34 + v54);
    *(_BYTE *)(Filter_42829936 + 32 + v54++) = v60;
    v58 = (unsigned __int8)v58 & (v60 == 0);
  }
  while ( v54 != 5 );
  if ( v58 )
  {
    v61 = 0LL;
    while ( v61 < v59 )
    {
      *(_BYTE *)(Filter_42829936 + 32 + v61++) = 1;
      if ( v61 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v59 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_42829936 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v64 = *(_QWORD *)(v30 + 16);
    v65 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v64 )
      goto LABEL_116;
    v66 = *(int *)(v30 + 24);
    v67 = Filter_42829936;
    if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = v64 + 8 * v66;
      *(_DWORD *)(v30 + 24) = v66 + 1;
      *(_QWORD *)(v68 + 32) = v67;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v68 + 32), v67, v62, v63);
    }
  }
  if ( *(_DWORD *)(v53 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v53 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11689/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v71 = *(_QWORD *)(v30 + 16);
    v72 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v71 )
      goto LABEL_116;
    v73 = *(int *)(v30 + 24);
    v74 = Filter_42829936;
    if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = v71 + 8 * v73;
      *(_DWORD *)(v30 + 24) = v73 + 1;
      *(_QWORD *)(v75 + 32) = v74;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v75 + 32), v74, v69, v70);
    }
  }
  if ( *(_DWORD *)(v53 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v53 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11688/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v78 = *(_QWORD *)(v30 + 16);
    v79 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v78 )
      goto LABEL_116;
    v80 = *(int *)(v30 + 24);
    v81 = Filter_42829936;
    if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = v78 + 8 * v80;
      *(_DWORD *)(v30 + 24) = v80 + 1;
      *(_QWORD *)(v82 + 32) = v81;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 32), v81, v76, v77);
    }
  }
  if ( *(_DWORD *)(v53 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v53 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11691/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v85 = *(_QWORD *)(v30 + 16);
    v86 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v85 )
      goto LABEL_116;
    v87 = *(int *)(v30 + 24);
    v88 = Filter_42829936;
    if ( (unsigned int)v87 >= *(_DWORD *)(v85 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = v85 + 8 * v87;
      *(_DWORD *)(v30 + 24) = v87 + 1;
      *(_QWORD *)(v89 + 32) = v88;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v89 + 32), v88, v83, v84);
    }
  }
  if ( !*(_DWORD *)(v53 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v53 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42829936 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    v92 = *(_QWORD *)(v30 + 16);
    v93 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v30 + 28);
    if ( !v92 )
      goto LABEL_116;
    v94 = *(int *)(v30 + 24);
    v95 = Filter_42829936;
    if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v30,
        (Il2CppObject *)Filter_42829936,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v96 = v92 + 8 * v94;
      *(_DWORD *)(v30 + 24) = v94 + 1;
      *(_QWORD *)(v96 + 32) = v95;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v96 + 32), v95, v90, v91);
    }
  }
  v97 = this->fields.detailRight;
  if ( !v97 )
    goto LABEL_116;
  mText = v97->fields.mText;
  v99 = System_String__Join_62391224(
          (System_String_o *)StringLiteral_113/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v30,
          0LL);
  v100 = System_String__Concat_62348648(mText, v99, 0LL);
  UILabel__set_text(v97, v100, 0LL);
  v101 = this->fields.detailRight;
  if ( !v101 )
    goto LABEL_116;
  v102 = System_String__Concat_62348648(v101->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v101, v102, 0LL);
  v103 = *(_DWORD *)(v30 + 24);
  v104 = *(_DWORD *)(v30 + 28) + 1;
  *(_DWORD *)(v30 + 24) = 0;
  *(_DWORD *)(v30 + 28) = v104;
  if ( v103 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v30 + 16), 0, v103, 0LL);
  Filter_42829936 = sub_1BC30B0(bool___TypeInfo, 6LL);
  v105 = *(_DWORD *)(v26 + 24);
  v106 = 0LL;
  v107 = 0;
  v55 = v105 >= 7;
  v108 = v105 - 7;
  if ( (_DWORD)v108 == 0 || !v55 )
    v108 = 0LL;
  do
  {
    if ( v108 == v106 )
      goto LABEL_115;
    if ( !Filter_42829936 )
      goto LABEL_116;
    if ( v106 >= *(unsigned int *)(Filter_42829936 + 24) )
      goto LABEL_115;
    v109 = *(unsigned __int8 *)(v26 + 39 + v106);
    *(_BYTE *)(Filter_42829936 + 32 + v106++) = v109;
    if ( v109 )
      v107 = v106;
  }
  while ( v106 != 6 );
  v110 = this->fields.detailRight;
  v111 = v107 ? v107 : 6;
  if ( !v110 )
LABEL_116:
    sub_1BC3264(Filter_42829936, v25);
  v112 = v110->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v113 = LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_UNIT"*/, 0LL);
  v126 = v111;
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v126, v114, v115, v116);
  v118 = System_String__Format(v113, v117, 0LL);
  v119 = System_String__Concat_62348648(v112, v118, 0LL);
  UILabel__set_text(v110, v119, 0LL);
  if ( this->fields.preQuest )
  {
    v120 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v122 = (System_String_o **)&StringLiteral_2056/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v122 = (System_String_o **)&StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v123 = LocalizationManager__Get(*v122, 0LL);
    Filter_42829936 = (__int64)System_String__Concat_62348648(v120, v123, 0LL);
    v124 = this->fields.detailRight;
    if ( v124 )
    {
      v125 = System_String__Concat_62348648(v124->fields.mText, (System_String_o *)Filter_42829936, 0LL);
      UILabel__set_text(v124, v125, 0LL);
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

  if ( (byte_4AFDA58 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4AFDA58 = 1;
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
    v9 = sub_1BFD098(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BC3524(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFDA62 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3051/*"BaseWindow/CancelButton"*/, method);
    byte_4AFDA62 = 1;
  }
  return (System_String_o *)StringLiteral_3051/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4AFDA59 & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4AFDA59 = 1;
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
    v9 = sub_1BFD098(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BC3524(v8);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A077DC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07794;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4AFDA64 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isDecide);
    byte_4AFDA64 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AutoOrganizationManager_c *v11; // x0

  v4 = this;
  if ( (byte_4AFDA65 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&AutoOrganizationManager_TypeInfo, v5);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1BC3008(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
                                                                                       v6);
    byte_4AFDA65 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_33271616(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4AFDAE7 )
    {
      sub_1BC3008(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4AFDAE7 = 1;
    }
    v11 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v11 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v11->static_fields->autoOrganizationInfo;
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
    sub_1BC3264(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4AFDA66 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFDA66 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70034300(go, 0LL);
}