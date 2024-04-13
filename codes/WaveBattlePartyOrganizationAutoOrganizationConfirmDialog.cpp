void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7336 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7336 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E7330 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v5, v6, v7);
    byte_42E7330 = 1;
  }
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Init(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E732E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E732E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cautionMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailTitleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailKindLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailRarityLabel;
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
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_42E7331 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E7331 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_42E7333 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, (_DWORD)method, v2, v3);
    byte_42E7333 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct UnityEngine_GameObject_o *settingDialogPrefab; // x21
  System_Int32_array **v38; // x0
  UnityEngine_Transform_o **v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *v46; // x22
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v58; // x20
  AutoOrganizationManager_c *v59; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v61; // x22
  const MethodInfo *v62; // x3

  if ( (byte_42E7332 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v23, v24, v25);
    byte_42E7332 = 1;
  }
  v26 = sub_B5D694(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
    (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_24;
  *(_QWORD *)(v26 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 32), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  if ( this->fields.state == 2 )
  {
    v35 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B5D5CC(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v36 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v35, v35[3]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0LL);
    settingDialogPrefab = this->fields.settingDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v38 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)settingDialogPrefab,
                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v26 + 24) = v38;
    v39 = (UnityEngine_Transform_o **)(v26 + 24);
    sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), v38, v40, v41, v42, v43, v44, v45);
    v46 = *(UnityEngine_GameObject_o **)(v26 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v46, parent, 0LL);
      transform = *v39;
      if ( *v39 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v26 + 16) = Component_srcLineSprite;
        sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), Component_srcLineSprite, v49, v50, v51, v52, v53, v54);
        transform = *(UnityEngine_Transform_o **)(v26 + 16);
        if ( transform )
        {
          transform[12].fields.m_CachedPtr = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v58 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v26 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_42E5922 )
          {
            sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v55, v56, v57);
            byte_42E5922 = 1;
          }
          v59 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v59 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v59->static_fields->waveBattleAutoOrganizationInfo;
          v61 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B5D694(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v61,
            (Il2CppObject *)v26,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            0LL);
          if ( v58 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v58,
              waveBattleAutoOrganizationInfo,
              v61,
              v62);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B5D69C(transform, v28);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v45; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  int v53; // w2
  __int64 v54; // x3
  AutoOrganizationManager_c *v55; // x0
  const MethodInfo *v56; // x1
  System_Action_o *v57; // x20

  if ( (byte_42E732F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)func, (_DWORD)method, v3);
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1793/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1780/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_15504/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1794/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_15503/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_15505/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_1781/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1790/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v40, v41, v42);
    byte_42E732F = 1;
  }
  this->fields.closeFunc = func;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)func,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1794/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15503/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15504/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel )
    goto LABEL_24;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15505/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_24;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1790/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_24;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1780/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_24;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1793/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_24;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1781/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_24;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_42E5922 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v45, v53, v54);
    byte_42E5922 = 1;
  }
  v55 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v55 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v55->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_24:
    sub_B5D69C(waveBattleAutoOrganizationInfo, v45);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v56);
  this->fields.state = 1;
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v57,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x20
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  AutoOrganizationManager_c *v60; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_34051256; // x0
  __int64 v63; // x1
  __int64 v64; // x23
  unsigned __int64 v65; // x22
  __int64 v66; // x24
  unsigned __int64 v67; // x8
  bool v68; // cf
  _BOOL4 v69; // w22
  _BOOL4 v70; // w24
  UILabel_o *detailKindLabel; // x22
  __int64 v72; // x22
  unsigned __int64 v73; // x10
  int v74; // w11
  int v75; // w13
  unsigned __int64 v76; // x8
  int v77; // w14
  bool v78; // zf
  _BOOL4 v79; // w14
  int v80; // w15
  __int64 *v81; // x8
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  UILabel_o *detailRarityLabel; // x22
  UILabel_o *detailModeLabel; // x19
  __int64 *v89; // x8
  __int64 v90; // x0

  if ( (byte_42E7334 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_15501/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_15507/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_15506/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_15502/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_15508/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v53, v54, v55);
    byte_42E7334 = 1;
  }
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_42E5922 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v57, v58, v59);
    byte_42E5922 = 1;
  }
  v60 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v60 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v60->static_fields->waveBattleAutoOrganizationInfo;
  Filter_34051256 = sub_B5D5DC(bool___TypeInfo, 7LL);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_88;
  v64 = Filter_34051256;
  v65 = 0LL;
  v66 = Filter_34051256 + 32;
  do
  {
    Filter_34051256 = ListViewSort__GetFilter_34051256(waveBattleAutoOrganizationInfo, v65, 0LL);
    if ( !v64 )
      goto LABEL_88;
    v67 = *(unsigned int *)(v64 + 24);
    if ( v65 >= v67 )
      goto LABEL_87;
    v68 = v65 >= 6;
    *(_BYTE *)(v66 + v65++) = Filter_34051256 & 1;
  }
  while ( !v68 );
  if ( (unsigned int)v67 < 2 )
    goto LABEL_87;
  v69 = *(_BYTE *)(v64 + 32) == 0;
  v70 = *(unsigned __int8 *)(v64 + 33) != 0;
  if ( *(_BYTE *)(v64 + 32) || !*(_BYTE *)(v64 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_34051256 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15502/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0LL);
    if ( !v56 )
      goto LABEL_88;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_34051256,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v70 || v69 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_34051256 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15501/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
    if ( v56 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v56,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_34051256,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      goto LABEL_31;
    }
LABEL_88:
    sub_B5D69C(Filter_34051256, v63);
  }
LABEL_31:
  detailKindLabel = this->fields.detailKindLabel;
  Filter_34051256 = (__int64)System_String__Join_44633232(
                               (System_String_o *)StringLiteral_81/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v56,
                               0LL);
  if ( !detailKindLabel )
    goto LABEL_88;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_34051256, 0LL);
  if ( !v56 )
    goto LABEL_88;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v56,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_34051256 = sub_B5D5DC(bool___TypeInfo, 5LL);
  v72 = Filter_34051256;
  v73 = 0LL;
  v74 = 1;
  v75 = 1;
  do
  {
    if ( v73 + 2 >= *(unsigned int *)(v64 + 24) )
      goto LABEL_87;
    if ( !Filter_34051256 )
      goto LABEL_88;
    v76 = *(unsigned int *)(Filter_34051256 + 24);
    if ( v73 >= v76 )
      goto LABEL_87;
    v77 = *(unsigned __int8 *)(v64 + 34 + v73);
    v78 = v77 == 0;
    *(_BYTE *)(Filter_34051256 + 32 + v73) = v77;
    v79 = v77 == 0;
    v80 = !v78;
    v68 = v73++ >= 4;
    v75 &= v80;
    v74 &= v79;
  }
  while ( !v68 );
  if ( (v75 | v74) == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = &StringLiteral_15508/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
LABEL_74:
    v86 = LocalizationManager__Get((System_String_o *)*v81, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_75;
  }
  if ( (unsigned int)v76 <= 4 )
    goto LABEL_87;
  if ( *(_BYTE *)(Filter_34051256 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v76 = *(_QWORD *)(v72 + 24);
    if ( (unsigned int)v76 <= 3 )
      goto LABEL_87;
  }
  if ( *(_BYTE *)(v72 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v76 = *(_QWORD *)(v72 + 24);
    if ( (unsigned int)v76 <= 2 )
      goto LABEL_87;
  }
  if ( *(_BYTE *)(v72 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v76 = *(_QWORD *)(v72 + 24);
    if ( (unsigned int)v76 <= 1 )
      goto LABEL_87;
  }
  if ( *(_BYTE *)(v72 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v76 = *(_QWORD *)(v72 + 24);
  }
  if ( !(_DWORD)v76 )
  {
LABEL_87:
    v90 = sub_B5D6C8(Filter_34051256);
    sub_B5D668(v90, 0LL);
  }
  if ( *(_BYTE *)(v72 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v81 = &StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
    goto LABEL_74;
  }
LABEL_75:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_34051256 = (__int64)System_String__Join_44633232(
                               (System_String_o *)StringLiteral_81/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v56,
                               0LL);
  if ( !detailRarityLabel )
    goto LABEL_88;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_34051256, 0LL);
  detailModeLabel = this->fields.detailModeLabel;
  if ( waveBattleAutoOrganizationInfo->fields.autoOrganizationMode == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v89 = &StringLiteral_15506/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v89 = &StringLiteral_15507/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/;
  }
  Filter_34051256 = (__int64)LocalizationManager__Get((System_String_o *)*v89, 0LL);
  if ( !detailModeLabel )
    goto LABEL_88;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_34051256, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v12; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E732C & 1) == 0 )
  {
    sub_B5D5C4(
      &WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    byte_42E732C = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v7 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v9->klass != WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_closeFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_B5D990(v9);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v12, v13, v14);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7335 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2795/*"BaseWindow/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E7335 = 1;
  }
  return (System_String_o *)StringLiteral_2795/*"BaseWindow/CancelButton"*/;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E732D & 1) == 0 )
  {
    sub_B5D5C4(
      &WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    byte_42E732D = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v7 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v9->klass != WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_closeFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_B5D990(v9);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_42E5FF5 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5FF5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__0(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int v14; // w2
  __int64 v15; // x3
  AutoOrganizationManager_c *v16; // x0

  v5 = this;
  if ( (byte_42E5FF3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v6, v7, v8);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_B5D5C4(
                                                                                                 &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
                                                                                                 v9,
                                                                                                 v10,
                                                                                                 v11);
    byte_42E5FF3 = 1;
  }
  _9__1 = v5->fields.__9__1;
  settingDialog = v5->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( !settingDialog )
    goto LABEL_19;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_22692132(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_42E5922 )
    {
      sub_B5D5C4(&AutoOrganizationManager_TypeInfo, isDecide, v14, v15);
      byte_42E5922 = 1;
    }
    v16 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v16 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v16->static_fields->waveBattleAutoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v5->fields.__4__this;
      if ( this )
      {
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_B5D69C(this, isDecide);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *go; // x19

  if ( (byte_42E5FF4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FF4 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(go, 0LL);
}