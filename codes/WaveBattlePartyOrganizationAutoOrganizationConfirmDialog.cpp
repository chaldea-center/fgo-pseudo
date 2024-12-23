void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62BFA & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B62BFA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B62BF4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v3);
    byte_4B62BF4 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
  UILabel_o *titleLabel; // x0

  if ( (byte_4B62BF2 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B62BF2 = 1;
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
    sub_1BE4D28(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B62BF5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_4B62BF5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
        closeFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B62BF7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_4B62BF7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
        closeFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v22; // x0
  UnityEngine_Transform_o **v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v40; // x20
  AutoOrganizationManager_c *v41; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v43; // x22
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3

  if ( (byte_4B62BF6 & 1) == 0 )
  {
    sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, method);
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_1BE4ACC(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___,
      v4);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
      v7);
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, v8);
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v9);
    byte_4B62BF6 = 1;
  }
  v10 = sub_1BE4D18(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v13, v14, v15, v16, v17, v18);
  if ( this->fields.state == 2 )
  {
    v19 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BE4AE4(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v22;
    v23 = (UnityEngine_Transform_o **)(v10 + 24);
    sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)v22, v24, v25, v26, v27, v28, v29);
    v30 = *(UnityEngine_GameObject_o **)(v10 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v30, parent, 0LL);
      transform = *v23;
      if ( *v23 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v10 + 16) = Component_object;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)Component_object, v33, v34, v35, v36, v37, v38);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          LODWORD(transform[13].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v40 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v10 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4B629AC )
          {
            sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, v39);
            byte_4B629AC = 1;
          }
          v41 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v41 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v41->static_fields->waveBattleAutoOrganizationInfo;
          v43 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1BE4D18(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v43,
            (Il2CppObject *)v10,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            v44);
          if ( v40 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v40,
              waveBattleAutoOrganizationInfo,
              v43,
              v45);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1BE4D28(transform, v12);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v23; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  AutoOrganizationManager_c *v31; // x0
  const MethodInfo *v32; // x1
  System_Action_o *v33; // x20

  if ( (byte_4B62BF3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, func);
    sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, v10);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v12);
    sub_1BE4ACC(&StringLiteral_2193/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v13);
    sub_1BE4ACC(&StringLiteral_2177/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v14);
    sub_1BE4ACC(&StringLiteral_15704/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, v15);
    sub_1BE4ACC(&StringLiteral_2194/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v16);
    sub_1BE4ACC(&StringLiteral_15703/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v17);
    sub_1BE4ACC(&StringLiteral_15705/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v18);
    sub_1BE4ACC(&StringLiteral_2179/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v19);
    sub_1BE4ACC(&StringLiteral_2188/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v20);
    byte_4B62BF3 = 1;
  }
  this->fields.closeFunc = func;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)func, (int64_t)method, v3, v4, v5, v6, v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2194/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15703/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15704/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15705/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2188/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2177/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2193/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2179/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4B629AC )
  {
    sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, v23);
    byte_4B629AC = 1;
  }
  v31 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v31 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v31->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_21:
    sub_1BE4D28(waveBattleAutoOrganizationInfo, v23);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v32);
  this->fields.state = 1;
  v33 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
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
  __int64 v20; // x20
  __int64 v21; // x1
  AutoOrganizationManager_c *v22; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_41747112; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  unsigned __int64 v27; // x22
  __int64 v28; // x27
  unsigned __int64 v29; // x8
  _BOOL4 v30; // w22
  _BOOL4 v31; // w27
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  int64_t v41; // x1
  __int64 v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  int64_t v52; // x1
  __int64 v53; // x0
  UILabel_o *detailKindLabel; // x22
  int32_t v55; // w2
  int v56; // w8
  unsigned int v57; // w12
  __int64 v58; // x22
  unsigned __int64 v59; // x8
  bool v60; // cf
  __int64 v61; // x12
  int v62; // w10
  int v63; // w13
  unsigned __int64 v64; // x14
  int v65; // w15
  bool v66; // zf
  _BOOL4 v67; // w15
  int v68; // w16
  __int64 *v69; // x8
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  int64_t v79; // x1
  __int64 v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  int64_t v90; // x1
  __int64 v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  int64_t v101; // x1
  __int64 v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  int64_t v112; // x1
  __int64 v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  __int64 v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  int64_t v123; // x1
  __int64 v124; // x0
  UILabel_o *detailRarityLabel; // x22
  int32_t autoOrganizationMode; // w20
  UILabel_o *detailModeLabel; // x19
  System_String_o **v128; // x8

  if ( (byte_4B62BF8 & 1) == 0 )
  {
    sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, method);
    sub_1BE4ACC(&bool___TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_116/*" "*/, v9);
    sub_1BE4ACC(&StringLiteral_11941/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v10);
    sub_1BE4ACC(&StringLiteral_15701/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, v11);
    sub_1BE4ACC(&StringLiteral_11940/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v12);
    sub_1BE4ACC(&StringLiteral_11939/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v13);
    sub_1BE4ACC(&StringLiteral_11937/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v14);
    sub_1BE4ACC(&StringLiteral_15707/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/, v15);
    sub_1BE4ACC(&StringLiteral_15706/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/, v16);
    sub_1BE4ACC(&StringLiteral_15702/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, v17);
    sub_1BE4ACC(&StringLiteral_15708/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/, v18);
    sub_1BE4ACC(&StringLiteral_11938/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v19);
    byte_4B62BF8 = 1;
  }
  v20 = sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4B629AC )
  {
    sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, v21);
    byte_4B629AC = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v22->static_fields->waveBattleAutoOrganizationInfo;
  Filter_41747112 = sub_1BE4B74(bool___TypeInfo, 7LL);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_100;
  v26 = Filter_41747112;
  v27 = 0LL;
  v28 = Filter_41747112 + 32;
  do
  {
    Filter_41747112 = ListViewSort__GetFilter_41747112(waveBattleAutoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_100;
    v29 = *(unsigned int *)(v26 + 24);
    if ( v27 >= v29 )
      goto LABEL_99;
    *(_BYTE *)(v28 + v27++) = Filter_41747112 & 1;
  }
  while ( v27 != 7 );
  if ( (unsigned int)v29 < 2 )
    goto LABEL_99;
  v30 = *(_BYTE *)(v26 + 32) == 0;
  v31 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15702/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0LL);
    if ( !v20 )
      goto LABEL_100;
    v38 = *(_QWORD *)(v20 + 16);
    v39 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v38 )
      goto LABEL_100;
    v40 = *(int *)(v20 + 24);
    v41 = Filter_41747112;
    if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_41747112,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = v38 + 8 * v40;
      *(_DWORD *)(v20 + 24) = v40 + 1;
      *(_QWORD *)(v42 + 32) = v41;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v42 + 32), v41, v32, v33, v34, v35, v36, v37);
    }
  }
  if ( v31 || v30 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15701/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
    if ( !v20 )
      goto LABEL_100;
    v49 = *(_QWORD *)(v20 + 16);
    v50 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v49 )
      goto LABEL_100;
    v51 = *(int *)(v20 + 24);
    v52 = Filter_41747112;
    if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_41747112,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = v49 + 8 * v51;
      *(_DWORD *)(v20 + 24) = v51 + 1;
      *(_QWORD *)(v53 + 32) = v52;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v53 + 32), v52, v43, v44, v45, v46, v47, v48);
    }
  }
  detailKindLabel = this->fields.detailKindLabel;
  Filter_41747112 = (__int64)System_String__Join_62714464(
                               (System_String_o *)StringLiteral_116/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v20,
                               0LL);
  if ( !detailKindLabel )
    goto LABEL_100;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_41747112, 0LL);
  if ( !v20 )
    goto LABEL_100;
  v55 = *(_DWORD *)(v20 + 24);
  v56 = *(_DWORD *)(v20 + 28) + 1;
  *(_DWORD *)(v20 + 24) = 0;
  *(_DWORD *)(v20 + 28) = v56;
  if ( v55 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v20 + 16), 0, v55, 0LL);
  Filter_41747112 = sub_1BE4B74(bool___TypeInfo, 5LL);
  v57 = *(_DWORD *)(v26 + 24);
  v58 = Filter_41747112;
  v59 = 0LL;
  v60 = v57 >= 2;
  v61 = v57 - 2;
  v62 = 1;
  if ( (_DWORD)v61 == 0 || !v60 )
    v61 = 0LL;
  v63 = 1;
  do
  {
    if ( v61 == v59 )
      goto LABEL_99;
    if ( !Filter_41747112 )
      goto LABEL_100;
    v64 = *(unsigned int *)(Filter_41747112 + 24);
    if ( v59 >= v64 )
      goto LABEL_99;
    v65 = *(unsigned __int8 *)(v26 + 34 + v59);
    v66 = v65 == 0;
    *(_BYTE *)(Filter_41747112 + 32 + v59++) = v65;
    v67 = v65 == 0;
    v68 = !v66;
    v63 &= v68;
    v62 &= v67;
  }
  while ( v59 != 5 );
  if ( (v63 | v62) == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v69 = &StringLiteral_15708/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_87;
  }
  if ( (unsigned int)v64 <= 4 )
LABEL_99:
    sub_1BE4D30(Filter_41747112, v25);
  if ( *(_BYTE *)(Filter_41747112 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v76 = *(_QWORD *)(v20 + 16);
    v77 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v76 )
      goto LABEL_100;
    v78 = *(int *)(v20 + 24);
    v79 = Filter_41747112;
    if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_41747112,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = v76 + 8 * v78;
      *(_DWORD *)(v20 + 24) = v78 + 1;
      *(_QWORD *)(v80 + 32) = v79;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v80 + 32), v79, v70, v71, v72, v73, v74, v75);
    }
  }
  if ( *(_DWORD *)(v58 + 24) <= 3u )
    goto LABEL_99;
  if ( *(_BYTE *)(v58 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v87 = *(_QWORD *)(v20 + 16);
    v88 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v87 )
      goto LABEL_100;
    v89 = *(int *)(v20 + 24);
    v90 = Filter_41747112;
    if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_41747112,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = v87 + 8 * v89;
      *(_DWORD *)(v20 + 24) = v89 + 1;
      *(_QWORD *)(v91 + 32) = v90;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v91 + 32), v90, v81, v82, v83, v84, v85, v86);
    }
  }
  if ( *(_DWORD *)(v58 + 24) <= 2u )
    goto LABEL_99;
  if ( *(_BYTE *)(v58 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v98 = *(_QWORD *)(v20 + 16);
    v99 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v98 )
      goto LABEL_100;
    v100 = *(int *)(v20 + 24);
    v101 = Filter_41747112;
    if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_41747112,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v102 = v98 + 8 * v100;
      *(_DWORD *)(v20 + 24) = v100 + 1;
      *(_QWORD *)(v102 + 32) = v101;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v102 + 32), v101, v92, v93, v94, v95, v96, v97);
    }
  }
  if ( *(_DWORD *)(v58 + 24) <= 1u )
    goto LABEL_99;
  if ( *(_BYTE *)(v58 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11941/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v109 = *(_QWORD *)(v20 + 16);
    v110 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( v109 )
    {
      v111 = *(int *)(v20 + 24);
      v112 = Filter_41747112;
      if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v20,
          (Il2CppObject *)Filter_41747112,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v113 = v109 + 8 * v111;
        *(_DWORD *)(v20 + 24) = v111 + 1;
        *(_QWORD *)(v113 + 32) = v112;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v113 + 32), v112, v103, v104, v105, v106, v107, v108);
      }
      goto LABEL_82;
    }
LABEL_100:
    sub_1BE4D28(Filter_41747112, v25);
  }
LABEL_82:
  if ( !*(_DWORD *)(v58 + 24) )
    goto LABEL_99;
  if ( !*(_BYTE *)(v58 + 32) )
    goto LABEL_91;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v69 = &StringLiteral_11937/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_87:
  Filter_41747112 = (__int64)LocalizationManager__Get((System_String_o *)*v69, 0LL);
  v120 = *(_QWORD *)(v20 + 16);
  v121 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v20 + 28);
  if ( !v120 )
    goto LABEL_100;
  v122 = *(int *)(v20 + 24);
  v123 = Filter_41747112;
  if ( (unsigned int)v122 >= *(_DWORD *)(v120 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v20,
      (Il2CppObject *)Filter_41747112,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    v124 = v120 + 8 * v122;
    *(_DWORD *)(v20 + 24) = v122 + 1;
    *(_QWORD *)(v124 + 32) = v123;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v124 + 32), v123, v114, v115, v116, v117, v118, v119);
  }
LABEL_91:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_41747112 = (__int64)System_String__Join_62714464(
                               (System_String_o *)StringLiteral_116/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v20,
                               0LL);
  if ( !detailRarityLabel )
    goto LABEL_100;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_41747112, 0LL);
  autoOrganizationMode = waveBattleAutoOrganizationInfo->fields.autoOrganizationMode;
  detailModeLabel = this->fields.detailModeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v128 = (System_String_o **)(autoOrganizationMode == 1 ? &StringLiteral_15706/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/ : &StringLiteral_15707/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
  Filter_41747112 = (__int64)LocalizationManager__Get(*v128, 0LL);
  if ( !detailModeLabel )
    goto LABEL_100;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_41747112, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B62BF0 & 1) == 0 )
  {
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4B62BF0 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BE4FE8(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62BF9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3226/*"BaseWindow/CancelButton"*/, method);
    byte_4B62BF9 = 1;
  }
  return (System_String_o *)StringLiteral_3226/*"BaseWindow/CancelButton"*/;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B62BF1 & 1) == 0 )
  {
    sub_1BE4ACC(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4B62BF1 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BE4FE8(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A219B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A21970;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B62BFB & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isDecide);
    byte_4B62BFB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
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
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  AutoOrganizationManager_c *v15; // x0

  v4 = this;
  if ( (byte_4B62BFC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, v5);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_1BE4ACC(
                                                                                                 &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
                                                                                                 v6);
    byte_4B62BFC = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_33165800(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4B629AC )
    {
      sub_1BE4ACC(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4B629AC = 1;
    }
    v15 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v15 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v15->static_fields->waveBattleAutoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v4->fields.__4__this;
      if ( this )
      {
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          (const MethodInfo *)isDecide);
        return;
      }
    }
LABEL_17:
    sub_1BE4D28(this, isDecide);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4B62BFD & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62BFD = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(go, 0LL);
}