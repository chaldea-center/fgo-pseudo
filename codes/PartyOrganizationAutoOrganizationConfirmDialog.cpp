void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_421823A & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_421823A = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4218234 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v4);
    byte_4218234 = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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

  if ( (byte_4218232 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4218232 = 1;
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
    sub_B0D97C(titleLabel);
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

  if ( (byte_4218235 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_4218235 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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

  if ( (byte_4218237 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_4218237 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_Transform_o *transform; // x0
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
  __int64 v40; // x2
  PartyOrganizationAutoOrganizationSettingDialog_o *v41; // x21
  AutoOrganizationManager_c *v42; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v46; // x23
  const MethodInfo *v47; // x5

  if ( (byte_4218236 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v8);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__, v9);
    sub_B0D8A4(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, v10);
    byte_4218236 = 1;
  }
  v11 = sub_B0D974(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, method, v2);
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
    (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v11 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  if ( this->fields.state == 2 )
  {
    v19 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v20 = (System_Reflection_MethodBase_o *)sub_B0D888(v19, v19[3]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    settingDialogPrefab = this->fields.settingDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)settingDialogPrefab,
                                   (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v11 + 24) = v22;
    v23 = (UnityEngine_Transform_o **)(v11 + 24);
    sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), v22, v24, v25, v26, v27, v28, v29);
    v30 = *(UnityEngine_GameObject_o **)(v11 + 24);
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
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v11 + 16) = Component_srcLineSprite;
        sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), Component_srcLineSprite, v33, v34, v35, v36, v37, v38);
        transform = *(UnityEngine_Transform_o **)(v11 + 16);
        if ( transform )
        {
          LODWORD(transform[17].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v41 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v11 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_4211CEC )
          {
            sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v39);
            byte_4211CEC = 1;
          }
          v42 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v42 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v42->static_fields->autoOrganizationInfo;
          v46 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B0D974(
                                                                                   PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                                                   v39,
                                                                                   v40);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v46,
            (Il2CppObject *)v11,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            0LL);
          if ( v41 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v41, autoOrganizationInfo, eventId, preQuest, v46, v47);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B0D97C(transform);
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
  UILabel_o *messageLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *settingLabel; // x22
  UILabel_o *execLabel; // x22
  UILabel_o *detailTitle; // x22
  UILabel_o *detailLeft; // x22
  UILabel_o *detailCenter; // x22
  __int64 v36; // x1
  struct UILabel_o *v37; // x21
  System_String_o *mText; // x22
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  struct UILabel_o *v41; // x21
  System_String_o *v42; // x22
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  AutoOrganizationManager_c *v45; // x0
  const MethodInfo *v46; // x1
  System_String_o *String_34963268; // x21
  __int64 v48; // x8
  __int64 v49; // x21
  unsigned __int64 v50; // x24
  AutoOrganizationManager_c *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  System_Action_o *v54; // x20
  __int64 v55; // x0

  if ( (byte_4218233 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v12);
    sub_B0D8A4(&char___TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v15);
    sub_B0D8A4(&StringLiteral_1775/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v16);
    sub_B0D8A4(&StringLiteral_1766/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, v17);
    sub_B0D8A4(&StringLiteral_1763/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v18);
    sub_B0D8A4(&StringLiteral_1774/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v19);
    sub_B0D8A4(&StringLiteral_1765/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, v20);
    sub_B0D8A4(&StringLiteral_1769/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, v21);
    sub_B0D8A4(&StringLiteral_1776/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_2216/*"AutoOrganizationBonusFilterEventId"*/, v23);
    sub_B0D8A4(&StringLiteral_1770/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, v24);
    sub_B0D8A4(&StringLiteral_1764/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v25);
    sub_B0D8A4(&StringLiteral_1773/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v26);
    byte_4218233 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = preQuest;
  sub_B0D840(
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
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1776/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_53;
  UILabel__set_text(titleLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1774/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_53;
  UILabel__set_text(messageLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1763/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_53;
  UILabel__set_text(cancelLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1775/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_53;
  UILabel__set_text(settingLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1764/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_53;
  UILabel__set_text(execLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1773/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_53;
  UILabel__set_text(detailTitle, (System_String_o *)autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1769/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_53;
  UILabel__set_text(detailLeft, (System_String_o *)autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1765/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
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
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_1770/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v40 = System_String__Concat_43849904(mText, v39, 0LL);
    UILabel__set_text(v37, v40, 0LL);
    v41 = this->fields.detailCenter;
    if ( !v41 )
      goto LABEL_53;
    v42 = v41->fields.mText;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1766/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v44 = System_String__Concat_43849904(v42, v43, 0LL);
    UILabel__set_text(v41, v44, 0LL);
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4211CEC )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v36);
    byte_4211CEC = 1;
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
    String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268((System_String_o *)StringLiteral_2216/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
    autoOrganizationInfo = System_String__IsNullOrEmpty(String_34963268, 0LL);
    if ( (autoOrganizationInfo & 1) == 0 )
    {
      if ( !String_34963268 )
        goto LABEL_53;
      if ( String_34963268->fields.m_stringLength >= 1 )
      {
        autoOrganizationInfo = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !autoOrganizationInfo )
          goto LABEL_53;
        if ( !*(_DWORD *)(autoOrganizationInfo + 24) )
          goto LABEL_54;
        *(_WORD *)(autoOrganizationInfo + 32) = 44;
        autoOrganizationInfo = (__int64)System_String__Split(
                                          String_34963268,
                                          (System_Char_array *)autoOrganizationInfo,
                                          0LL);
        if ( !autoOrganizationInfo )
          goto LABEL_53;
        v48 = *(_QWORD *)(autoOrganizationInfo + 24);
        v49 = autoOrganizationInfo;
        if ( (int)v48 >= 1 )
        {
          v50 = 0LL;
          while ( v50 < (unsigned int)v48 )
          {
            autoOrganizationInfo = System_Int32__Parse(*(System_String_o **)(v49 + 32 + 8 * v50), 0LL);
            if ( (_DWORD)autoOrganizationInfo == eventId )
              goto LABEL_52;
            LODWORD(v48) = *(_DWORD *)(v49 + 24);
            if ( (__int64)++v50 >= (int)v48 )
              goto LABEL_42;
          }
LABEL_54:
          v55 = sub_B0D9A8(autoOrganizationInfo);
          sub_B0D948(v55, 0LL);
        }
      }
    }
LABEL_42:
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4211CEC )
    {
      sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v46);
      byte_4211CEC = 1;
    }
    v51 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v51 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (__int64)v51->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_52;
    }
LABEL_53:
    sub_B0D97C(autoOrganizationInfo);
  }
LABEL_52:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v46);
  this->fields.state = 1;
  v54 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v52, v53);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
  __int64 Filter_32845628; // x0
  __int64 v25; // x21
  unsigned __int64 v26; // x22
  __int64 v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  bool v30; // cf
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  _BOOL4 v32; // w23
  _BOOL4 v33; // w24
  UILabel_o *detailRight; // x23
  struct UILabel_o *v35; // x23
  System_String_o *v36; // x0
  __int64 v37; // x23
  unsigned __int64 v38; // x9
  int v39; // w11
  unsigned __int64 v40; // x8
  int v41; // w13
  unsigned __int64 v42; // x10
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x23
  System_String_o *mText; // x24
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  struct UILabel_o *v52; // x23
  System_String_o *v53; // x0
  unsigned __int64 v54; // x9
  int v55; // w8
  __int64 v56; // x11
  struct UILabel_o *v57; // x21
  int v58; // w25
  System_String_o *v59; // x22
  System_String_o *v60; // x23
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  int32_t autoOrganizationMode; // w9
  System_String_o *v65; // x20
  __int64 *v66; // x8
  System_String_o *v67; // x0
  struct UILabel_o *v68; // x19
  System_String_o *v69; // x0
  __int64 v70; // x0
  int v71; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4218238 & 1) == 0 )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, method);
    sub_B0D8A4(&bool___TypeInfo, v3);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v10);
    sub_B0D8A4(&StringLiteral_1771/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/, v11);
    sub_B0D8A4(&StringLiteral_1772/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/, v12);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v13);
    sub_B0D8A4(&StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v14);
    sub_B0D8A4(&StringLiteral_1767/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, v15);
    sub_B0D8A4(&StringLiteral_11911/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v16);
    sub_B0D8A4(&StringLiteral_12093/*"SERVANT_UNIT"*/, v17);
    sub_B0D8A4(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v18);
    sub_B0D8A4(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v19);
    sub_B0D8A4(&StringLiteral_1768/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, v20);
    sub_B0D8A4(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v21);
    byte_4218238 = 1;
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4211CEC )
  {
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, method);
    byte_4211CEC = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v22->static_fields->autoOrganizationInfo;
  Filter_32845628 = sub_B0D8BC(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_103;
  v25 = Filter_32845628;
  v26 = 0LL;
  v27 = Filter_32845628 + 32;
  do
  {
    Filter_32845628 = ListViewSort__GetFilter_32845628(autoOrganizationInfo, v26, 0LL);
    if ( !v25 )
      goto LABEL_103;
    if ( v26 >= *(unsigned int *)(v25 + 24) )
      goto LABEL_102;
    v30 = v26 >= 0xC;
    *(_BYTE *)(v27 + v26++) = Filter_32845628 & 1;
  }
  while ( !v30 );
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v25 + 24) < 2u )
  {
LABEL_102:
    v70 = sub_B0D9A8(Filter_32845628);
    sub_B0D948(v70, 0LL);
  }
  v32 = *(_BYTE *)(v25 + 32) == 0;
  v33 = *(unsigned __int8 *)(v25 + 33) != 0;
  if ( *(_BYTE *)(v25 + 32) || !*(_BYTE *)(v25 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_32845628 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1768/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v31 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_32845628,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v33 || v32 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_32845628 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v31 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_32845628,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  detailRight = this->fields.detailRight;
  Filter_32845628 = (__int64)System_String__Join_43905348(
                               (System_String_o *)StringLiteral_80/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v31,
                               0LL);
  if ( !detailRight )
    goto LABEL_103;
  UILabel__set_text(detailRight, (System_String_o *)Filter_32845628, 0LL);
  v35 = this->fields.detailRight;
  if ( !v35 )
    goto LABEL_103;
  v36 = System_String__Concat_43849904(v35->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v35, v36, 0LL);
  if ( !v31 )
    goto LABEL_103;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_32845628 = sub_B0D8BC(bool___TypeInfo, 5LL);
  v37 = Filter_32845628;
  v38 = 0LL;
  LOBYTE(v39) = 1;
  do
  {
    if ( v38 + 2 >= *(unsigned int *)(v25 + 24) )
      goto LABEL_102;
    if ( !Filter_32845628 )
      goto LABEL_103;
    v40 = *(unsigned int *)(Filter_32845628 + 24);
    if ( v38 >= v40 )
      goto LABEL_102;
    v41 = *(unsigned __int8 *)(v25 + 34 + v38);
    *(_BYTE *)(Filter_32845628 + 32 + v38) = v41;
    v30 = v38++ >= 4;
    v39 = (unsigned __int8)v39 & (v41 == 0);
  }
  while ( !v30 );
  if ( v39 )
  {
    v42 = 0LL;
    while ( v42 < v40 )
    {
      v30 = v42 >= 4;
      *(_BYTE *)(Filter_32845628 + 32 + v42++) = 1;
      if ( v30 )
        goto LABEL_45;
    }
    goto LABEL_102;
  }
LABEL_45:
  if ( (unsigned int)v40 <= 4 )
    goto LABEL_102;
  if ( *(_BYTE *)(Filter_32845628 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    v40 = *(_QWORD *)(v37 + 24);
    if ( (unsigned int)v40 <= 3 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v37 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    v40 = *(_QWORD *)(v37 + 24);
    if ( (unsigned int)v40 <= 2 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v37 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    v40 = *(_QWORD *)(v37 + 24);
    if ( (unsigned int)v40 <= 1 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v37 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
    v40 = *(_QWORD *)(v37 + 24);
  }
  if ( !(_DWORD)v40 )
    goto LABEL_102;
  if ( *(_BYTE *)(v37 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  v48 = this->fields.detailRight;
  if ( !v48 )
    goto LABEL_103;
  mText = v48->fields.mText;
  v50 = System_String__Join_43905348(
          (System_String_o *)StringLiteral_80/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v31,
          0LL);
  v51 = System_String__Concat_43849904(mText, v50, 0LL);
  UILabel__set_text(v48, v51, 0LL);
  v52 = this->fields.detailRight;
  if ( !v52 )
    goto LABEL_103;
  v53 = System_String__Concat_43849904(v52->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v52, v53, 0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_32845628 = sub_B0D8BC(bool___TypeInfo, 6LL);
  v54 = 0LL;
  v55 = 0;
  v56 = v25 + 39;
  do
  {
    if ( v54 + 7 >= *(unsigned int *)(v25 + 24) )
      goto LABEL_102;
    if ( !Filter_32845628 )
      goto LABEL_103;
    if ( v54 >= *(unsigned int *)(Filter_32845628 + 24) )
      goto LABEL_102;
    if ( *(_BYTE *)(v56 + v54) )
      v55 = v54 + 1;
    v30 = v54 >= 5;
    *(_BYTE *)(Filter_32845628 + 32 + v54) = *(_BYTE *)(v56 + v54);
    ++v54;
  }
  while ( !v30 );
  v57 = this->fields.detailRight;
  v58 = v55 ? v55 : 6;
  if ( !v57 )
LABEL_103:
    sub_B0D97C(Filter_32845628);
  v59 = v57->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SERVANT_UNIT"*/, 0LL);
  v71 = v58;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  v62 = System_String__Format(v60, v61, 0LL);
  v63 = System_String__Concat_43849904(v59, v62, 0LL);
  UILabel__set_text(v57, v63, 0LL);
  if ( this->fields.preQuest )
  {
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    v65 = (System_String_o *)StringLiteral_26/*"\n"*/;
    if ( autoOrganizationMode == 1 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = &StringLiteral_1771/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v66 = &StringLiteral_1772/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    }
    v67 = LocalizationManager__Get((System_String_o *)*v66, 0LL);
    Filter_32845628 = (__int64)System_String__Concat_43849904(v65, v67, 0LL);
    v68 = this->fields.detailRight;
    if ( v68 )
    {
      v69 = System_String__Concat_43849904(v68->fields.mText, (System_String_o *)Filter_32845628, 0LL);
      UILabel__set_text(v68, v69, 0LL);
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

  if ( (byte_4218230 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4218230 = 1;
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
    v9 = sub_B022BC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4218239 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2752/*"BaseWindow/CancelButton"*/, method);
    byte_4218239 = 1;
  }
  return (System_String_o *)StringLiteral_2752/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4218231 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4218231 = 1;
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
    v9 = sub_B022BC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212171 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    byte_4212171 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
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
  __int64 v9; // x1
  AutoOrganizationManager_c *v10; // x0

  v4 = this;
  if ( (byte_421216F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v5);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_B0D8A4(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
                                                                                       v6);
    byte_421216F = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(&v4->fields.__9__1, _9__1);
  }
  if ( !settingDialog )
    goto LABEL_19;
  PartyOrganizationAutoOrganizationSettingDialog__Close_31394356(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4211CEC )
    {
      sub_B0D8A4(&AutoOrganizationManager_TypeInfo, v9);
      byte_4211CEC = 1;
    }
    v10 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v10 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v10->static_fields->autoOrganizationInfo;
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
    sub_B0D97C(this);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4212170 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212170 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(go, 0LL);
}