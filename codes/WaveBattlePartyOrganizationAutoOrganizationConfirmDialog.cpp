void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1229F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1229F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B12299 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v5, v6);
    byte_4B12299 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B12297 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12297 = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B1229A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method, v2);
    byte_4B1229A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B1229C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method, v2);
    byte_4B1229C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v32; // x0
  UnityEngine_Transform_o **v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v52; // x20
  AutoOrganizationManager_c *v53; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v55; // x22
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3

  if ( (byte_4B1229B & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___,
      v7,
      v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
      v13,
      v14);
    sub_1BCA7E0(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v17, v18);
    byte_4B1229B = 1;
  }
  v19 = sub_1BCAA2C(
          WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo,
          method,
          v2,
          v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_21;
  *(_QWORD *)(v19 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)this, v22, v23, v24, v25, v26, v27);
  if ( this->fields.state == 2 )
  {
    v28 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BCA7F8(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v32 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v19 + 24) = v32;
    v33 = (UnityEngine_Transform_o **)(v19 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)v32, v34, v35, v36, v37, v38, v39);
    v40 = *(UnityEngine_GameObject_o **)(v19 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v40, parent, 0LL);
      transform = *v33;
      if ( *v33 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v19 + 16) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)Component_object, v43, v44, v45, v46, v47, v48);
        transform = *(UnityEngine_Transform_o **)(v19 + 16);
        if ( transform )
        {
          LODWORD(transform[13].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v52 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v19 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v49);
          if ( !byte_4B12058 )
          {
            sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v49, v50);
            byte_4B12058 = 1;
          }
          v53 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v49);
            v53 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v53->static_fields->waveBattleAutoOrganizationInfo;
          v55 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                                                             WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                                                             v49,
                                                                                             v50,
                                                                                             v51);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v55,
            (Il2CppObject *)v19,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            v56);
          if ( v52 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v52,
              waveBattleAutoOrganizationInfo,
              v55,
              v57);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(transform, v21);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v35; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  __int64 v43; // x2
  AutoOrganizationManager_c *v44; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x20

  if ( (byte_4B12298 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, func, method);
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v14, v15);
    sub_1BCA7E0(&StringLiteral_2188/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2172/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_15664/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2189/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_15663/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_15665/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_2183/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v30, v31);
    byte_4B12298 = 1;
  }
  this->fields.closeFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)func, (int64_t)method, v3, v4, v5, v6, v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2189/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15663/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15664/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15665/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2183/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2172/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2188/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v35);
  if ( !byte_4B12058 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v35, v43);
    byte_4B12058 = 1;
  }
  v44 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v35);
    v44 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v44->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_21:
    sub_1BCAA3C(waveBattleAutoOrganizationInfo, v35);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v45);
  this->fields.state = 1;
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  AutoOrganizationManager_c *v42; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_41507568; // x0
  __int64 v45; // x1
  __int64 v46; // x23
  unsigned __int64 v47; // x22
  __int64 v48; // x27
  unsigned __int64 v49; // x8
  _BOOL4 v50; // w22
  _BOOL4 v51; // w27
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  int64_t v61; // x1
  __int64 v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  int64_t v72; // x1
  __int64 v73; // x0
  UILabel_o *detailKindLabel; // x22
  int32_t v75; // w2
  int v76; // w8
  unsigned int v77; // w12
  __int64 v78; // x22
  unsigned __int64 v79; // x8
  bool v80; // cf
  __int64 v81; // x12
  int v82; // w10
  int v83; // w13
  unsigned __int64 v84; // x14
  int v85; // w15
  bool v86; // zf
  _BOOL4 v87; // w15
  int v88; // w16
  __int64 *v89; // x8
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  int64_t v99; // x1
  __int64 v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  int64_t v110; // x1
  __int64 v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  int64_t v121; // x1
  __int64 v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  int64_t v132; // x1
  __int64 v133; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  __int64 v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  int64_t v143; // x1
  __int64 v144; // x0
  UILabel_o *detailRarityLabel; // x22
  __int64 v146; // x1
  int32_t autoOrganizationMode; // w20
  UILabel_o *detailModeLabel; // x19
  System_String_o **v149; // x8

  if ( (byte_4B1229D & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&bool___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15661/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_15667/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_15666/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_15662/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_15668/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v37, v38);
    byte_4B1229D = 1;
  }
  v39 = sub_1BCAA2C(System_Collections_Generic_List_string__TypeInfo, method, v2, v3);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v40);
  if ( !byte_4B12058 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v40, v41);
    byte_4B12058 = 1;
  }
  v42 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v40);
    v42 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v42->static_fields->waveBattleAutoOrganizationInfo;
  Filter_41507568 = sub_1BCA888(bool___TypeInfo, 7LL);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_100;
  v46 = Filter_41507568;
  v47 = 0LL;
  v48 = Filter_41507568 + 32;
  do
  {
    Filter_41507568 = ListViewSort__GetFilter_41507568(waveBattleAutoOrganizationInfo, v47, 0LL);
    if ( !v46 )
      goto LABEL_100;
    v49 = *(unsigned int *)(v46 + 24);
    if ( v47 >= v49 )
      goto LABEL_99;
    *(_BYTE *)(v48 + v47++) = Filter_41507568 & 1;
  }
  while ( v47 != 7 );
  if ( (unsigned int)v49 < 2 )
    goto LABEL_99;
  v50 = *(_BYTE *)(v46 + 32) == 0;
  v51 = *(unsigned __int8 *)(v46 + 33) != 0;
  if ( *(_BYTE *)(v46 + 32) || !*(_BYTE *)(v46 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15662/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0LL);
    if ( !v39 )
      goto LABEL_100;
    v58 = *(_QWORD *)(v39 + 16);
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v39 + 28);
    if ( !v58 )
      goto LABEL_100;
    v60 = *(int *)(v39 + 24);
    v61 = Filter_41507568;
    if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v39,
        (Il2CppObject *)Filter_41507568,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = v58 + 8 * v60;
      *(_DWORD *)(v39 + 24) = v60 + 1;
      *(_QWORD *)(v62 + 32) = v61;
      sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 32), v61, v52, v53, v54, v55, v56, v57);
    }
  }
  if ( v51 || v50 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15661/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
    if ( !v39 )
      goto LABEL_100;
    v69 = *(_QWORD *)(v39 + 16);
    v70 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v39 + 28);
    if ( !v69 )
      goto LABEL_100;
    v71 = *(int *)(v39 + 24);
    v72 = Filter_41507568;
    if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v39,
        (Il2CppObject *)Filter_41507568,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = v69 + 8 * v71;
      *(_DWORD *)(v39 + 24) = v71 + 1;
      *(_QWORD *)(v73 + 32) = v72;
      sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 32), v72, v63, v64, v65, v66, v67, v68);
    }
  }
  detailKindLabel = this->fields.detailKindLabel;
  Filter_41507568 = (__int64)System_String__Join_62416876(
                               (System_String_o *)StringLiteral_116/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v39,
                               0LL);
  if ( !detailKindLabel )
    goto LABEL_100;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_41507568, 0LL);
  if ( !v39 )
    goto LABEL_100;
  v75 = *(_DWORD *)(v39 + 24);
  v76 = *(_DWORD *)(v39 + 28) + 1;
  *(_DWORD *)(v39 + 24) = 0;
  *(_DWORD *)(v39 + 28) = v76;
  if ( v75 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v39 + 16), 0, v75, 0LL);
  Filter_41507568 = sub_1BCA888(bool___TypeInfo, 5LL);
  v77 = *(_DWORD *)(v46 + 24);
  v78 = Filter_41507568;
  v79 = 0LL;
  v80 = v77 >= 2;
  v81 = v77 - 2;
  v82 = 1;
  if ( (_DWORD)v81 == 0 || !v80 )
    v81 = 0LL;
  v83 = 1;
  do
  {
    if ( v81 == v79 )
      goto LABEL_99;
    if ( !Filter_41507568 )
      goto LABEL_100;
    v84 = *(unsigned int *)(Filter_41507568 + 24);
    if ( v79 >= v84 )
      goto LABEL_99;
    v85 = *(unsigned __int8 *)(v46 + 34 + v79);
    v86 = v85 == 0;
    *(_BYTE *)(Filter_41507568 + 32 + v79++) = v85;
    v87 = v85 == 0;
    v88 = !v86;
    v83 &= v88;
    v82 &= v87;
  }
  while ( v79 != 5 );
  if ( (v83 | v82) == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    v89 = &StringLiteral_15668/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_87;
  }
  if ( (unsigned int)v84 <= 4 )
LABEL_99:
    sub_1BCAA44(Filter_41507568, v45);
  if ( *(_BYTE *)(Filter_41507568 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v96 = *(_QWORD *)(v39 + 16);
    v97 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v39 + 28);
    if ( !v96 )
      goto LABEL_100;
    v98 = *(int *)(v39 + 24);
    v99 = Filter_41507568;
    if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v39,
        (Il2CppObject *)Filter_41507568,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v100 = v96 + 8 * v98;
      *(_DWORD *)(v39 + 24) = v98 + 1;
      *(_QWORD *)(v100 + 32) = v99;
      sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 32), v99, v90, v91, v92, v93, v94, v95);
    }
  }
  if ( *(_DWORD *)(v78 + 24) <= 3u )
    goto LABEL_99;
  if ( *(_BYTE *)(v78 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v107 = *(_QWORD *)(v39 + 16);
    v108 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v39 + 28);
    if ( !v107 )
      goto LABEL_100;
    v109 = *(int *)(v39 + 24);
    v110 = Filter_41507568;
    if ( (unsigned int)v109 >= *(_DWORD *)(v107 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v39,
        (Il2CppObject *)Filter_41507568,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = v107 + 8 * v109;
      *(_DWORD *)(v39 + 24) = v109 + 1;
      *(_QWORD *)(v111 + 32) = v110;
      sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 32), v110, v101, v102, v103, v104, v105, v106);
    }
  }
  if ( *(_DWORD *)(v78 + 24) <= 2u )
    goto LABEL_99;
  if ( *(_BYTE *)(v78 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v118 = *(_QWORD *)(v39 + 16);
    v119 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v39 + 28);
    if ( !v118 )
      goto LABEL_100;
    v120 = *(int *)(v39 + 24);
    v121 = Filter_41507568;
    if ( (unsigned int)v120 >= *(_DWORD *)(v118 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v39,
        (Il2CppObject *)Filter_41507568,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = v118 + 8 * v120;
      *(_DWORD *)(v39 + 24) = v120 + 1;
      *(_QWORD *)(v122 + 32) = v121;
      sub_1BCA784((PartyOrganizationUtility_o *)(v122 + 32), v121, v112, v113, v114, v115, v116, v117);
    }
  }
  if ( *(_DWORD *)(v78 + 24) <= 1u )
    goto LABEL_99;
  if ( *(_BYTE *)(v78 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v129 = *(_QWORD *)(v39 + 16);
    v130 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v39 + 28);
    if ( v129 )
    {
      v131 = *(int *)(v39 + 24);
      v132 = Filter_41507568;
      if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v39,
          (Il2CppObject *)Filter_41507568,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
      }
      else
      {
        v133 = v129 + 8 * v131;
        *(_DWORD *)(v39 + 24) = v131 + 1;
        *(_QWORD *)(v133 + 32) = v132;
        sub_1BCA784((PartyOrganizationUtility_o *)(v133 + 32), v132, v123, v124, v125, v126, v127, v128);
      }
      goto LABEL_82;
    }
LABEL_100:
    sub_1BCAA3C(Filter_41507568, v45);
  }
LABEL_82:
  if ( !*(_DWORD *)(v78 + 24) )
    goto LABEL_99;
  if ( !*(_BYTE *)(v78 + 32) )
    goto LABEL_91;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  v89 = &StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_87:
  Filter_41507568 = (__int64)LocalizationManager__Get((System_String_o *)*v89, 0LL);
  v140 = *(_QWORD *)(v39 + 16);
  v141 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v39 + 28);
  if ( !v140 )
    goto LABEL_100;
  v142 = *(int *)(v39 + 24);
  v143 = Filter_41507568;
  if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v39,
      (Il2CppObject *)Filter_41507568,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = v140 + 8 * v142;
    *(_DWORD *)(v39 + 24) = v142 + 1;
    *(_QWORD *)(v144 + 32) = v143;
    sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 32), v143, v134, v135, v136, v137, v138, v139);
  }
LABEL_91:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_41507568 = (__int64)System_String__Join_62416876(
                               (System_String_o *)StringLiteral_116/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v39,
                               0LL);
  if ( !detailRarityLabel )
    goto LABEL_100;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_41507568, 0LL);
  autoOrganizationMode = waveBattleAutoOrganizationInfo->fields.autoOrganizationMode;
  detailModeLabel = this->fields.detailModeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v146);
  v149 = (System_String_o **)(autoOrganizationMode == 1 ? &StringLiteral_15666/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/ : &StringLiteral_15667/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
  Filter_41507568 = (__int64)LocalizationManager__Get(*v149, 0LL);
  if ( !detailModeLabel )
    goto LABEL_100;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_41507568, 0LL);
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

  if ( (byte_4B12295 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B12295 = 1;
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
    v9 = sub_1C05CD0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BCACFC(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1229E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3218/*"BaseWindow/CancelButton"*/, method, v2);
    byte_4B1229E = 1;
  }
  return (System_String_o *)StringLiteral_3218/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4B12296 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B12296 = 1;
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
    v9 = sub_1C05CD0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07BE8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07BA0;
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
  if ( (byte_4B122A0 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B122A0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x2
  AutoOrganizationManager_c *v19; // x0

  v5 = this;
  if ( (byte_4B122A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v6, v7);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_1BCA7E0(
                                                                                                 &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
                                                                                                 v8,
                                                                                                 v9);
    byte_4B122A1 = 1;
  }
  _9__1 = v5->fields.__9__1;
  settingDialog = v5->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v12, v13, v14, v15, v16, v17);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_33031188(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide);
    if ( !byte_4B12058 )
    {
      sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, isDecide, v18);
      byte_4B12058 = 1;
    }
    v19 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide);
      v19 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v19->static_fields->waveBattleAutoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v5->fields.__4__this;
      if ( this )
      {
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          (const MethodInfo *)isDecide);
        return;
      }
    }
LABEL_17:
    sub_1BCAA3C(this, isDecide);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *go; // x19

  if ( (byte_4B122A2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B122A2 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(go, 0LL);
}