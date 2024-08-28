void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A04B03 & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A04B03 = 1;
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
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A04AFD & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v3);
    byte_4A04AFD = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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

  if ( (byte_4A04AFB & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_1/*""*/, method);
    byte_4A04AFB = 1;
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
    sub_1B68930(titleLabel, method);
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

  if ( (byte_4A04AFE & 1) == 0 )
  {
    sub_1B686D4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_4A04AFE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A04B00 & 1) == 0 )
  {
    sub_1B686D4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_4A04B00 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  int32_t v14; // w3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v18; // x0
  UnityEngine_Transform_o **v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  PartyOrganizationAutoOrganizationSettingDialog_o *v28; // x21
  AutoOrganizationManager_c *v29; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v33; // x23
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x5

  if ( (byte_4A04AFF & 1) == 0 )
  {
    sub_1B686D4(&AutoOrganizationManager_TypeInfo, method);
    sub_1B686D4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v4);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v7);
    sub_1B686D4(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__0__, v8);
    sub_1B686D4(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_TypeInfo, v9);
    byte_4A04AFF = 1;
  }
  v10 = sub_1B68920(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v13, v14);
  if ( this->fields.state == 2 )
  {
    v15 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B686EC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B686B8(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_2ECC718 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v18;
    v19 = (UnityEngine_Transform_o **)(v10 + 24);
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)v18, v20, v21);
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
                             (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v10 + 16) = Component_object;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)Component_object, v25, v26);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          LODWORD(transform[17].monitor) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v28 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v10 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4A04B3C )
          {
            sub_1B686D4(&AutoOrganizationManager_TypeInfo, v27);
            byte_4A04B3C = 1;
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
          v33 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1B68920(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v33,
            (Il2CppObject *)v10,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__0__,
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
    sub_1B68930(transform, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  bool v9; // w25
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v27; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *buffExistsMessageLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *settingLabel; // x22
  UILabel_o *execLabel; // x22
  UILabel_o *detailTitle; // x22
  UILabel_o *detailLeft; // x22
  UILabel_o *detailCenter; // x22
  struct UILabel_o *v36; // x21
  System_String_o *mText; // x22
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  struct UILabel_o *v40; // x21
  System_String_o *v41; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  AutoOrganizationManager_c *v44; // x0
  System_String_o *String_69130092; // x21
  System_String_c *klass; // x8
  System_String_o *v47; // x21
  unsigned __int64 v48; // x24
  AutoOrganizationManager_c *v49; // x0
  System_Action_o *v50; // x20

  v9 = preQuest;
  if ( (byte_4A04AFC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B686D4(&AutoOrganizationManager_TypeInfo, v10);
    sub_1B686D4(&LocalizationManager_TypeInfo, v11);
    sub_1B686D4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v12);
    sub_1B686D4(&StringLiteral_2165/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v13);
    sub_1B686D4(&StringLiteral_2155/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, v14);
    sub_1B686D4(&StringLiteral_2152/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v15);
    sub_1B686D4(&StringLiteral_2164/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v16);
    sub_1B686D4(&StringLiteral_2163/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v17);
    sub_1B686D4(&StringLiteral_2154/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, v18);
    sub_1B686D4(&StringLiteral_2158/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, v19);
    sub_1B686D4(&StringLiteral_2166/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v20);
    sub_1B686D4(&StringLiteral_2612/*"AutoOrganizationBonusFilterEventId"*/, v21);
    sub_1B686D4(&StringLiteral_2159/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, v22);
    sub_1B686D4(&StringLiteral_2153/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v23);
    sub_1B686D4(&StringLiteral_2162/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v24);
    byte_4A04AFC = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v9;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)func, preQuest, (int32_t)func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2166/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2163/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_46;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2164/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_46;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2152/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_46;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2165/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_46;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2153/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_46;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2162/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_46;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_46;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2154/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_46;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v36 = this->fields.detailLeft;
    if ( !v36 )
      goto LABEL_46;
    mText = v36->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2159/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v39 = System_String__Concat_61419468(mText, v38, 0LL);
    UILabel__set_text(v36, v39, 0LL);
    v40 = this->fields.detailCenter;
    if ( !v40 )
      goto LABEL_46;
    v41 = v40->fields.mText;
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2155/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v43 = System_String__Concat_61419468(v41, v42, 0LL);
    UILabel__set_text(v40, v43, 0LL);
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4A04B3C )
  {
    sub_1B686D4(&AutoOrganizationManager_TypeInfo, v27);
    byte_4A04B3C = 1;
  }
  v44 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v44 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v44->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_46;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId < 1 )
    goto LABEL_45;
  String_69130092 = UnityEngine_PlayerPrefs__GetString_69130092((System_String_o *)StringLiteral_2612/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_69130092, 0LL);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_37;
  if ( !String_69130092 )
    goto LABEL_46;
  if ( String_69130092->fields._stringLength < 1 )
    goto LABEL_37;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_69130092, 0x2Cu, 0, 0LL);
  if ( !autoOrganizationInfo )
    goto LABEL_46;
  klass = autoOrganizationInfo[1].klass;
  v47 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_37:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4A04B3C )
    {
      sub_1B686D4(&AutoOrganizationManager_TypeInfo, v27);
      byte_4A04B3C = 1;
    }
    v49 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v49 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v49->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_1B68930(autoOrganizationInfo, v27);
  }
  v48 = 0LL;
  while ( 1 )
  {
    if ( v48 >= (unsigned int)klass )
      sub_1B68938(autoOrganizationInfo, v27);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v47[1].monitor + v48), 0LL);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v47[1].klass;
    if ( (__int64)++v48 >= (int)klass )
      goto LABEL_37;
  }
LABEL_45:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v27);
  this->fields.state = 1;
  v50 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
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
  __int64 Filter_40524160; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  unsigned __int64 v27; // x22
  __int64 v28; // x25
  __int64 v29; // x22
  _BOOL4 v30; // w23
  _BOOL4 v31; // w27
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x1
  __int64 v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x1
  __int64 v45; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v47; // x23
  System_String_o *v48; // x0
  int32_t v49; // w2
  int v50; // w8
  unsigned int v51; // w9
  __int64 v52; // x23
  unsigned __int64 v53; // x8
  bool v54; // cf
  __int64 v55; // x9
  __int64 v56; // x13
  int v57; // w11
  unsigned __int64 v58; // x9
  int v59; // w14
  unsigned __int64 v60; // x8
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x1
  __int64 v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x1
  __int64 v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x1
  __int64 v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x1
  __int64 v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x1
  __int64 v95; // x0
  struct UILabel_o *v96; // x23
  System_String_o *mText; // x24
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  struct UILabel_o *v100; // x23
  System_String_o *v101; // x0
  int32_t v102; // w2
  int v103; // w8
  unsigned int v104; // w11
  unsigned __int64 v105; // x9
  int v106; // w8
  __int64 v107; // x11
  int v108; // w13
  struct UILabel_o *v109; // x21
  int v110; // w24
  System_String_o *v111; // x22
  System_String_o *v112; // x23
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  Il2CppObject *v116; // x0
  System_String_o *v117; // x0
  System_String_o *v118; // x0
  System_String_o *v119; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v121; // x8
  System_String_o *v122; // x0
  struct UILabel_o *v123; // x19
  System_String_o *v124; // x0
  int v125; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A04B01 & 1) == 0 )
  {
    sub_1B686D4(&AutoOrganizationManager_TypeInfo, method);
    sub_1B686D4(&bool___TypeInfo, v3);
    sub_1B686D4(&int_TypeInfo, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1B686D4(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1B686D4(&LocalizationManager_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v10);
    sub_1B686D4(&StringLiteral_2160/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/, v11);
    sub_1B686D4(&StringLiteral_2161/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/, v12);
    sub_1B686D4(&StringLiteral_117/*" "*/, v13);
    sub_1B686D4(&StringLiteral_11721/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v14);
    sub_1B686D4(&StringLiteral_2156/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, v15);
    sub_1B686D4(&StringLiteral_11720/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v16);
    sub_1B686D4(&StringLiteral_11900/*"SERVANT_UNIT"*/, v17);
    sub_1B686D4(&StringLiteral_11719/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v18);
    sub_1B686D4(&StringLiteral_11717/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v19);
    sub_1B686D4(&StringLiteral_2157/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, v20);
    sub_1B686D4(&StringLiteral_11718/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v21);
    byte_4A04B01 = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4A04B3C )
  {
    sub_1B686D4(&AutoOrganizationManager_TypeInfo, method);
    byte_4A04B3C = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v22->static_fields->autoOrganizationInfo;
  Filter_40524160 = sub_1B6877C(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v26 = Filter_40524160;
  v27 = 0LL;
  v28 = Filter_40524160 + 32;
  do
  {
    Filter_40524160 = ListViewSort__GetFilter_40524160(autoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_116;
    if ( v27 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v28 + v27++) = Filter_40524160 & 1;
  }
  while ( v27 != 13 );
  v29 = sub_1B68920(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v29,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v26 + 24) < 2u )
LABEL_115:
    sub_1B68938(Filter_40524160, v25);
  v30 = *(_BYTE *)(v26 + 32) == 0;
  v31 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2157/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v29 )
      goto LABEL_116;
    v34 = *(_QWORD *)(v29 + 16);
    v35 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v34 )
      goto LABEL_116;
    v36 = *(int *)(v29 + 24);
    v37 = Filter_40524160;
    if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = v34 + 8 * v36;
      *(_DWORD *)(v29 + 24) = v36 + 1;
      *(_QWORD *)(v38 + 32) = v37;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v38 + 32), v37, v32, v33);
    }
  }
  if ( v31 || v30 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2156/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v29 )
      goto LABEL_116;
    v41 = *(_QWORD *)(v29 + 16);
    v42 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v41 )
      goto LABEL_116;
    v43 = *(int *)(v29 + 24);
    v44 = Filter_40524160;
    if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = v41 + 8 * v43;
      *(_DWORD *)(v29 + 24) = v43 + 1;
      *(_QWORD *)(v45 + 32) = v44;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v45 + 32), v44, v39, v40);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_40524160 = (__int64)System_String__Join_61435124(
                               (System_String_o *)StringLiteral_117/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v29,
                               0LL);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_40524160, 0LL);
  v47 = this->fields.detailRight;
  if ( !v47 )
    goto LABEL_116;
  v48 = System_String__Concat_61419468(v47->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v47, v48, 0LL);
  if ( !v29 )
    goto LABEL_116;
  v49 = *(_DWORD *)(v29 + 24);
  v50 = *(_DWORD *)(v29 + 28) + 1;
  *(_DWORD *)(v29 + 24) = 0;
  *(_DWORD *)(v29 + 28) = v50;
  if ( v49 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v29 + 16), 0, v49, 0LL);
  Filter_40524160 = sub_1B6877C(bool___TypeInfo, 5LL);
  v51 = *(_DWORD *)(v26 + 24);
  v52 = Filter_40524160;
  v53 = 0LL;
  v54 = v51 >= 2;
  v55 = v51 - 2;
  if ( (_DWORD)v55 != 0 && v54 )
    v56 = v55;
  else
    v56 = 0LL;
  LOBYTE(v57) = 1;
  do
  {
    if ( v56 == v53 )
      goto LABEL_115;
    if ( !Filter_40524160 )
      goto LABEL_116;
    v58 = *(unsigned int *)(Filter_40524160 + 24);
    if ( v53 >= v58 )
      goto LABEL_115;
    v59 = *(unsigned __int8 *)(v26 + 34 + v53);
    *(_BYTE *)(Filter_40524160 + 32 + v53++) = v59;
    v57 = (unsigned __int8)v57 & (v59 == 0);
  }
  while ( v53 != 5 );
  if ( v57 )
  {
    v60 = 0LL;
    while ( v60 < v58 )
    {
      *(_BYTE *)(Filter_40524160 + 32 + v60++) = 1;
      if ( v60 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v58 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_40524160 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11720/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v63 = *(_QWORD *)(v29 + 16);
    v64 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v63 )
      goto LABEL_116;
    v65 = *(int *)(v29 + 24);
    v66 = Filter_40524160;
    if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = v63 + 8 * v65;
      *(_DWORD *)(v29 + 24) = v65 + 1;
      *(_QWORD *)(v67 + 32) = v66;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v67 + 32), v66, v61, v62);
    }
  }
  if ( *(_DWORD *)(v52 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v52 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11719/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v70 = *(_QWORD *)(v29 + 16);
    v71 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v70 )
      goto LABEL_116;
    v72 = *(int *)(v29 + 24);
    v73 = Filter_40524160;
    if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = v70 + 8 * v72;
      *(_DWORD *)(v29 + 24) = v72 + 1;
      *(_QWORD *)(v74 + 32) = v73;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v74 + 32), v73, v68, v69);
    }
  }
  if ( *(_DWORD *)(v52 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v52 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11718/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v77 = *(_QWORD *)(v29 + 16);
    v78 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v77 )
      goto LABEL_116;
    v79 = *(int *)(v29 + 24);
    v80 = Filter_40524160;
    if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = v77 + 8 * v79;
      *(_DWORD *)(v29 + 24) = v79 + 1;
      *(_QWORD *)(v81 + 32) = v80;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v81 + 32), v80, v75, v76);
    }
  }
  if ( *(_DWORD *)(v52 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v52 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11721/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v84 = *(_QWORD *)(v29 + 16);
    v85 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v84 )
      goto LABEL_116;
    v86 = *(int *)(v29 + 24);
    v87 = Filter_40524160;
    if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = v84 + 8 * v86;
      *(_DWORD *)(v29 + 24) = v86 + 1;
      *(_QWORD *)(v88 + 32) = v87;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v88 + 32), v87, v82, v83);
    }
  }
  if ( !*(_DWORD *)(v52 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v52 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40524160 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    v91 = *(_QWORD *)(v29 + 16);
    v92 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v91 )
      goto LABEL_116;
    v93 = *(int *)(v29 + 24);
    v94 = Filter_40524160;
    if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_40524160,
        *(const MethodInfo_34BC278 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      v95 = v91 + 8 * v93;
      *(_DWORD *)(v29 + 24) = v93 + 1;
      *(_QWORD *)(v95 + 32) = v94;
      sub_1B68678((ServantStatusBattleListViewItem_o *)(v95 + 32), v94, v89, v90);
    }
  }
  v96 = this->fields.detailRight;
  if ( !v96 )
    goto LABEL_116;
  mText = v96->fields.mText;
  v98 = System_String__Join_61435124(
          (System_String_o *)StringLiteral_117/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v29,
          0LL);
  v99 = System_String__Concat_61419468(mText, v98, 0LL);
  UILabel__set_text(v96, v99, 0LL);
  v100 = this->fields.detailRight;
  if ( !v100 )
    goto LABEL_116;
  v101 = System_String__Concat_61419468(v100->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v100, v101, 0LL);
  v102 = *(_DWORD *)(v29 + 24);
  v103 = *(_DWORD *)(v29 + 28) + 1;
  *(_DWORD *)(v29 + 24) = 0;
  *(_DWORD *)(v29 + 28) = v103;
  if ( v102 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v29 + 16), 0, v102, 0LL);
  Filter_40524160 = sub_1B6877C(bool___TypeInfo, 6LL);
  v104 = *(_DWORD *)(v26 + 24);
  v105 = 0LL;
  v106 = 0;
  v54 = v104 >= 7;
  v107 = v104 - 7;
  if ( (_DWORD)v107 == 0 || !v54 )
    v107 = 0LL;
  do
  {
    if ( v107 == v105 )
      goto LABEL_115;
    if ( !Filter_40524160 )
      goto LABEL_116;
    if ( v105 >= *(unsigned int *)(Filter_40524160 + 24) )
      goto LABEL_115;
    v108 = *(unsigned __int8 *)(v26 + 39 + v105);
    *(_BYTE *)(Filter_40524160 + 32 + v105++) = v108;
    if ( v108 )
      v106 = v105;
  }
  while ( v105 != 6 );
  v109 = this->fields.detailRight;
  v110 = v106 ? v106 : 6;
  if ( !v109 )
LABEL_116:
    sub_1B68930(Filter_40524160, v25);
  v111 = v109->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11900/*"SERVANT_UNIT"*/, 0LL);
  v125 = v110;
  v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125, v113, v114, v115);
  v117 = System_String__Format(v112, v116, 0LL);
  v118 = System_String__Concat_61419468(v111, v117, 0LL);
  UILabel__set_text(v109, v118, 0LL);
  if ( this->fields.preQuest )
  {
    v119 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v121 = (System_String_o **)&StringLiteral_2160/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v121 = (System_String_o **)&StringLiteral_2161/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v122 = LocalizationManager__Get(*v121, 0LL);
    Filter_40524160 = (__int64)System_String__Concat_61419468(v119, v122, 0LL);
    v123 = this->fields.detailRight;
    if ( v123 )
    {
      v124 = System_String__Concat_61419468(v123->fields.mText, (System_String_o *)Filter_40524160, 0LL);
      UILabel__set_text(v123, v124, 0LL);
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

  if ( (byte_4A04AF9 & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4A04AF9 = 1;
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
    v9 = sub_1BA3BC4(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1B68BF0(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A04B02 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_3172/*"BaseWindow/CancelButton"*/, method);
    byte_4A04B02 = 1;
  }
  return (System_String_o *)StringLiteral_3172/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4A04AFA & 1) == 0 )
  {
    sub_1B686D4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4A04AFA = 1;
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
    v9 = sub_1BA3BC4(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1B68BF0(v8);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AAA54;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AAA0C;
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
  if ( (byte_4A04B04 & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, isDecide);
    byte_4A04B04 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  AutoOrganizationManager_c *v11; // x0

  v4 = this;
  if ( (byte_4A04B05 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, isDecide);
    sub_1B686D4(&AutoOrganizationManager_TypeInfo, v5);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)sub_1B686D4(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__1__,
                                                                                       v6);
    byte_4A04B05 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_31743716(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4A04B3C )
    {
      sub_1B686D4(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4A04B3C = 1;
    }
    v11 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v11 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v11->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v4->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          (const MethodInfo *)isDecide);
        return;
      }
    }
LABEL_17:
    sub_1B68930(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4A04B06 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04B06 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69171816(go, 0LL);
}