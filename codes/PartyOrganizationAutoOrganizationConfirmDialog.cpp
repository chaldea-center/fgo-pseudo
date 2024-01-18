void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418B562 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418B562 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_418B55C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v3);
    byte_418B55C = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_418B55A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B55A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailTitle;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailLeft;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailCenter;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailRight;
  if ( !titleLabel )
    goto LABEL_14;
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
LABEL_14:
    sub_B2C434(titleLabel, method);
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
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_418B55D & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_418B55D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_418B55F & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_418B55F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 1, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  struct UnityEngine_GameObject_o *settingDialogPrefab; // x21
  System_Int32_array **v22; // x0
  UnityEngine_Transform_o **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  PartyOrganizationAutoOrganizationSettingDialog_o *v40; // x21
  AutoOrganizationManager_c *v41; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v45; // x23
  const MethodInfo *v46; // x5

  if ( (byte_418B55E & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v7);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__, v8);
    sub_B2C35C(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, v9);
    byte_418B55E = 1;
  }
  v10 = sub_B2C42C(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
    (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v10 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  if ( this->fields.state == 2 )
  {
    v19 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v20 = (System_Reflection_MethodBase_o *)sub_B2C340(v19, v19[3]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    settingDialogPrefab = this->fields.settingDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)settingDialogPrefab,
                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v22;
    v23 = (UnityEngine_Transform_o **)(v10 + 24);
    sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), v22, v24, v25, v26, v27, v28, v29);
    v30 = *(UnityEngine_GameObject_o **)(v10 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v30, parent, 0LL);
      transform = *v23;
      if ( *v23 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v10 + 16) = Component_srcLineSprite;
        sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), Component_srcLineSprite, v33, v34, v35, v36, v37, v38);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          LODWORD(transform[17].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v40 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v10 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_4185067 )
          {
            sub_B2C35C(&AutoOrganizationManager_TypeInfo, v39);
            byte_4185067 = 1;
          }
          v41 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v41 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v41->static_fields->autoOrganizationInfo;
          v45 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B2C42C(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v45,
            (Il2CppObject *)v10,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            0LL);
          if ( v40 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v40, autoOrganizationInfo, eventId, preQuest, v45, v46);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B2C434(transform, v12);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v25; // x1
  __int64 v26; // x1
  UILabel_o *titleLabel; // x22
  __int64 autoOrganizationInfo; // x0
  const MethodInfo *v29; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *settingLabel; // x22
  UILabel_o *execLabel; // x22
  UILabel_o *detailTitle; // x22
  UILabel_o *detailLeft; // x22
  UILabel_o *detailCenter; // x22
  struct UILabel_o *v37; // x21
  System_String_o *mText; // x22
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  struct UILabel_o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  AutoOrganizationManager_c *v45; // x0
  System_String_o *String_35342888; // x21
  __int64 v47; // x8
  __int64 v48; // x21
  unsigned __int64 v49; // x24
  AutoOrganizationManager_c *v50; // x0
  System_Action_o *v51; // x20
  __int64 v52; // x0

  if ( (byte_418B55B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v12);
    sub_B2C35C(&char___TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v15);
    sub_B2C35C(&StringLiteral_1767/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v16);
    sub_B2C35C(&StringLiteral_1758/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, v17);
    sub_B2C35C(&StringLiteral_1755/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v18);
    sub_B2C35C(&StringLiteral_1766/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_1757/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, v20);
    sub_B2C35C(&StringLiteral_1761/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, v21);
    sub_B2C35C(&StringLiteral_1768/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v22);
    sub_B2C35C(&StringLiteral_2206/*"AutoOrganizationBonusFilterEventId"*/, v23);
    sub_B2C35C(&StringLiteral_1762/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, v24);
    sub_B2C35C(&StringLiteral_1756/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v25);
    sub_B2C35C(&StringLiteral_1765/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v26);
    byte_418B55B = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = preQuest;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)func,
    (System_String_array **)preQuest,
    (System_String_array **)func,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1768/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1766/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_53;
  UILabel__set_text(messageLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1755/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_53;
  UILabel__set_text(cancelLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_53;
  UILabel__set_text(settingLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_53;
  UILabel__set_text(execLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1765/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_53;
  UILabel__set_text(detailTitle, (System_String_o *)autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1761/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_53;
  UILabel__set_text(detailLeft, (System_String_o *)autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1757/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_53;
  UILabel__set_text(detailCenter, (System_String_o *)autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v37 = this->fields.detailLeft;
    if ( !v37 )
      goto LABEL_53;
    mText = v37->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_1762/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v40 = System_String__Concat_44305532(mText, v39, 0LL);
    UILabel__set_text(v37, v40, 0LL);
    v41 = this->fields.detailCenter;
    if ( !v41 )
      goto LABEL_53;
    v42 = v41->fields.mText;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1758/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v44 = System_String__Concat_44305532(v42, v43, 0LL);
    UILabel__set_text(v41, v44, 0LL);
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4185067 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v29);
    byte_4185067 = 1;
  }
  v45 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v45 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (__int64)v45->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_53;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId >= 1 )
  {
    String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_2206/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
    autoOrganizationInfo = System_String__IsNullOrEmpty(String_35342888, 0LL);
    if ( (autoOrganizationInfo & 1) == 0 )
    {
      if ( !String_35342888 )
        goto LABEL_53;
      if ( String_35342888->fields.m_stringLength >= 1 )
      {
        autoOrganizationInfo = sub_B2C374(char___TypeInfo, 1LL);
        if ( !autoOrganizationInfo )
          goto LABEL_53;
        if ( !*(_DWORD *)(autoOrganizationInfo + 24) )
          goto LABEL_54;
        *(_WORD *)(autoOrganizationInfo + 32) = 44;
        autoOrganizationInfo = (__int64)System_String__Split(
                                          String_35342888,
                                          (System_Char_array *)autoOrganizationInfo,
                                          0LL);
        if ( !autoOrganizationInfo )
          goto LABEL_53;
        v47 = *(_QWORD *)(autoOrganizationInfo + 24);
        v48 = autoOrganizationInfo;
        if ( (int)v47 >= 1 )
        {
          v49 = 0LL;
          while ( v49 < (unsigned int)v47 )
          {
            autoOrganizationInfo = System_Int32__Parse(*(System_String_o **)(v48 + 32 + 8 * v49), 0LL);
            if ( (_DWORD)autoOrganizationInfo == eventId )
              goto LABEL_52;
            LODWORD(v47) = *(_DWORD *)(v48 + 24);
            if ( (__int64)++v49 >= (int)v47 )
              goto LABEL_42;
          }
LABEL_54:
          v52 = sub_B2C460(autoOrganizationInfo);
          sub_B2C400(v52, 0LL);
        }
      }
    }
LABEL_42:
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4185067 )
    {
      sub_B2C35C(&AutoOrganizationManager_TypeInfo, v29);
      byte_4185067 = 1;
    }
    v50 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v50 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (__int64)v50->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_52;
    }
LABEL_53:
    sub_B2C434(autoOrganizationInfo, v29);
  }
LABEL_52:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v29);
  this->fields.state = 1;
  v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
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
  __int64 Filter_33936432; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  unsigned __int64 v27; // x22
  __int64 v28; // x23
  bool v29; // cf
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  _BOOL4 v31; // w23
  _BOOL4 v32; // w24
  UILabel_o *detailRight; // x23
  struct UILabel_o *v34; // x23
  System_String_o *v35; // x0
  __int64 v36; // x23
  unsigned __int64 v37; // x9
  int v38; // w11
  unsigned __int64 v39; // x8
  int v40; // w13
  unsigned __int64 v41; // x10
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct UILabel_o *v47; // x23
  System_String_o *mText; // x24
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  struct UILabel_o *v51; // x23
  System_String_o *v52; // x0
  unsigned __int64 v53; // x9
  int v54; // w8
  __int64 v55; // x11
  struct UILabel_o *v56; // x21
  int v57; // w25
  System_String_o *v58; // x22
  System_String_o *v59; // x23
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  int32_t autoOrganizationMode; // w9
  System_String_o *v64; // x20
  __int64 *v65; // x8
  System_String_o *v66; // x0
  struct UILabel_o *v67; // x19
  System_String_o *v68; // x0
  __int64 v69; // x0
  int v70; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418B560 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    sub_B2C35C(&bool___TypeInfo, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v7);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v10);
    sub_B2C35C(&StringLiteral_1763/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/, v11);
    sub_B2C35C(&StringLiteral_1764/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/, v12);
    sub_B2C35C(&StringLiteral_80/*" "*/, v13);
    sub_B2C35C(&StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v14);
    sub_B2C35C(&StringLiteral_1759/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, v15);
    sub_B2C35C(&StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v16);
    sub_B2C35C(&StringLiteral_12055/*"SERVANT_UNIT"*/, v17);
    sub_B2C35C(&StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v18);
    sub_B2C35C(&StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v19);
    sub_B2C35C(&StringLiteral_1760/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, v20);
    sub_B2C35C(&StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v21);
    byte_418B560 = 1;
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4185067 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    byte_4185067 = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v22->static_fields->autoOrganizationInfo;
  Filter_33936432 = sub_B2C374(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_103;
  v26 = Filter_33936432;
  v27 = 0LL;
  v28 = Filter_33936432 + 32;
  do
  {
    Filter_33936432 = ListViewSort__GetFilter_33936432(autoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_103;
    if ( v27 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_102;
    v29 = v27 >= 0xC;
    *(_BYTE *)(v28 + v27++) = Filter_33936432 & 1;
  }
  while ( !v29 );
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( *(_DWORD *)(v26 + 24) < 2u )
  {
LABEL_102:
    v69 = sub_B2C460(Filter_33936432);
    sub_B2C400(v69, 0LL);
  }
  v31 = *(_BYTE *)(v26 + 32) == 0;
  v32 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_33936432 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1760/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v30 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_33936432,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v32 || v31 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_33936432 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1759/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v30 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_33936432,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
  detailRight = this->fields.detailRight;
  Filter_33936432 = (__int64)System_String__Join_44360976(
                               (System_String_o *)StringLiteral_80/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v30,
                               0LL);
  if ( !detailRight )
    goto LABEL_103;
  UILabel__set_text(detailRight, (System_String_o *)Filter_33936432, 0LL);
  v34 = this->fields.detailRight;
  if ( !v34 )
    goto LABEL_103;
  v35 = System_String__Concat_44305532(v34->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v34, v35, 0LL);
  if ( !v30 )
    goto LABEL_103;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v30,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_33936432 = sub_B2C374(bool___TypeInfo, 5LL);
  v36 = Filter_33936432;
  v37 = 0LL;
  LOBYTE(v38) = 1;
  do
  {
    if ( v37 + 2 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_102;
    if ( !Filter_33936432 )
      goto LABEL_103;
    v39 = *(unsigned int *)(Filter_33936432 + 24);
    if ( v37 >= v39 )
      goto LABEL_102;
    v40 = *(unsigned __int8 *)(v26 + 34 + v37);
    *(_BYTE *)(Filter_33936432 + 32 + v37) = v40;
    v29 = v37++ >= 4;
    v38 = (unsigned __int8)v38 & (v40 == 0);
  }
  while ( !v29 );
  if ( v38 )
  {
    v41 = 0LL;
    while ( v41 < v39 )
    {
      v29 = v41 >= 4;
      *(_BYTE *)(Filter_33936432 + 32 + v41++) = 1;
      if ( v29 )
        goto LABEL_45;
    }
    goto LABEL_102;
  }
LABEL_45:
  if ( (unsigned int)v39 <= 4 )
    goto LABEL_102;
  if ( *(_BYTE *)(Filter_33936432 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v39 = *(_QWORD *)(v36 + 24);
    if ( (unsigned int)v39 <= 3 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v36 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v39 = *(_QWORD *)(v36 + 24);
    if ( (unsigned int)v39 <= 2 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v36 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v39 = *(_QWORD *)(v36 + 24);
    if ( (unsigned int)v39 <= 1 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v36 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v39 = *(_QWORD *)(v36 + 24);
  }
  if ( !(_DWORD)v39 )
    goto LABEL_102;
  if ( *(_BYTE *)(v36 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
  v47 = this->fields.detailRight;
  if ( !v47 )
    goto LABEL_103;
  mText = v47->fields.mText;
  v49 = System_String__Join_44360976(
          (System_String_o *)StringLiteral_80/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v30,
          0LL);
  v50 = System_String__Concat_44305532(mText, v49, 0LL);
  UILabel__set_text(v47, v50, 0LL);
  v51 = this->fields.detailRight;
  if ( !v51 )
    goto LABEL_103;
  v52 = System_String__Concat_44305532(v51->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v51, v52, 0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v30,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_33936432 = sub_B2C374(bool___TypeInfo, 6LL);
  v53 = 0LL;
  v54 = 0;
  v55 = v26 + 39;
  do
  {
    if ( v53 + 7 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_102;
    if ( !Filter_33936432 )
      goto LABEL_103;
    if ( v53 >= *(unsigned int *)(Filter_33936432 + 24) )
      goto LABEL_102;
    if ( *(_BYTE *)(v55 + v53) )
      v54 = v53 + 1;
    v29 = v53 >= 5;
    *(_BYTE *)(Filter_33936432 + 32 + v53) = *(_BYTE *)(v55 + v53);
    ++v53;
  }
  while ( !v29 );
  v56 = this->fields.detailRight;
  v57 = v54 ? v54 : 6;
  if ( !v56 )
LABEL_103:
    sub_B2C434(Filter_33936432, v25);
  v58 = v56->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SERVANT_UNIT"*/, 0LL);
  v70 = v57;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  v61 = System_String__Format(v59, v60, 0LL);
  v62 = System_String__Concat_44305532(v58, v61, 0LL);
  UILabel__set_text(v56, v62, 0LL);
  if ( this->fields.preQuest )
  {
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    v64 = (System_String_o *)StringLiteral_26/*"\n"*/;
    if ( autoOrganizationMode == 1 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v65 = &StringLiteral_1763/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v65 = &StringLiteral_1764/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    }
    v66 = LocalizationManager__Get((System_String_o *)*v65, 0LL);
    Filter_33936432 = (__int64)System_String__Concat_44305532(v64, v66, 0LL);
    v67 = this->fields.detailRight;
    if ( v67 )
    {
      v68 = System_String__Concat_44305532(v67->fields.mText, (System_String_o *)Filter_33936432, 0LL);
      UILabel__set_text(v67, v68, 0LL);
      return;
    }
    goto LABEL_103;
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

  if ( (byte_418B558 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_418B558 = 1;
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
    v9 = sub_B20D74(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418B561 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2741/*"BaseWindow/CancelButton"*/, method);
    byte_418B561 = 1;
  }
  return (System_String_o *)StringLiteral_2741/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_418B559 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_418B559 = 1;
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
    v9 = sub_B20D74(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_4185283 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4185283 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
    goto LABEL_37;
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  AutoOrganizationManager_c *v9; // x0

  v4 = this;
  if ( (byte_4185281 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v5);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_B2C35C(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
                                                                                       v6);
    byte_4185281 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( !settingDialog )
    goto LABEL_19;
  PartyOrganizationAutoOrganizationSettingDialog__Close_31956836(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4185067 )
    {
      sub_B2C35C(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4185067 = 1;
    }
    v9 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v9 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v9->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v4->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_B2C434(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4185282 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185282 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(go, 0LL);
}