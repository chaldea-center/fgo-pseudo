void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1828E & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1828E = 1;
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

  if ( (byte_4B18288 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v3);
    byte_4B18288 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B18286 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B18286 = 1;
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
    sub_1BCB254(titleLabel, method);
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

  if ( (byte_4B18289 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_4B18289 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4B1828B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_4B1828B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v28; // x20
  AutoOrganizationManager_c *v29; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v31; // x22
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  if ( (byte_4B1828A & 1) == 0 )
  {
    sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, method);
    sub_1BCAFF8(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_1BCAFF8(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___,
      v4);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
      v7);
    sub_1BCAFF8(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo, v8);
    sub_1BCAFF8(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v9);
    byte_4B1828A = 1;
  }
  v10 = sub_1BCB244(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v13, v14);
  if ( this->fields.state == 2 )
  {
    v15 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCB010(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v18;
    v19 = (UnityEngine_Transform_o **)(v10 + 24);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)v18, v20, v21);
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
                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v10 + 16) = Component_object;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Component_object, v25, v26);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          LODWORD(transform[13].monitor) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v28 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v10 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4B18129 )
          {
            sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, v27);
            byte_4B18129 = 1;
          }
          v29 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v29 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v29->static_fields->waveBattleAutoOrganizationInfo;
          v31 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1BCB244(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v31,
            (Il2CppObject *)v10,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            v32);
          if ( v28 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v28,
              waveBattleAutoOrganizationInfo,
              v31,
              v33);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1BCB254(transform, v12);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v19; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  AutoOrganizationManager_c *v27; // x0
  const MethodInfo *v28; // x1
  System_Action_o *v29; // x20

  if ( (byte_4B18287 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, func);
    sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v8);
    sub_1BCAFF8(&StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v9);
    sub_1BCAFF8(&StringLiteral_2049/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v10);
    sub_1BCAFF8(&StringLiteral_15362/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, v11);
    sub_1BCAFF8(&StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v12);
    sub_1BCAFF8(&StringLiteral_15361/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v13);
    sub_1BCAFF8(&StringLiteral_15363/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v14);
    sub_1BCAFF8(&StringLiteral_2051/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v15);
    sub_1BCAFF8(&StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v16);
    byte_4B18287 = 1;
  }
  this->fields.closeFunc = func;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)func, (int32_t)method, v3);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2066/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15361/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15362/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15363/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2060/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2049/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2051/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4B18129 )
  {
    sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, v19);
    byte_4B18129 = 1;
  }
  v27 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v27 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v27->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_21:
    sub_1BCB254(waveBattleAutoOrganizationInfo, v19);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v28);
  this->fields.state = 1;
  v29 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
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
  __int64 Filter_42992912; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  unsigned __int64 v27; // x22
  __int64 v28; // x27
  __int64 v29; // x2
  unsigned __int64 v30; // x8
  _BOOL4 v31; // w22
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
  UILabel_o *detailKindLabel; // x22
  int32_t v48; // w2
  int v49; // w8
  unsigned int v50; // w12
  __int64 v51; // x22
  unsigned __int64 v52; // x8
  bool v53; // cf
  __int64 v54; // x12
  int v55; // w10
  int v56; // w13
  unsigned __int64 v57; // x14
  int v58; // w15
  bool v59; // zf
  _BOOL4 v60; // w15
  int v61; // w16
  __int64 *v62; // x8
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x1
  __int64 v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x1
  __int64 v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x1
  __int64 v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x1
  __int64 v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x1
  __int64 v97; // x0
  UILabel_o *detailRarityLabel; // x22
  int32_t autoOrganizationMode; // w20
  UILabel_o *detailModeLabel; // x19
  System_String_o **v101; // x8

  if ( (byte_4B1828C & 1) == 0 )
  {
    sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, method);
    sub_1BCAFF8(&bool___TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v9);
    sub_1BCAFF8(&StringLiteral_11702/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v10);
    sub_1BCAFF8(&StringLiteral_15359/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, v11);
    sub_1BCAFF8(&StringLiteral_11701/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v12);
    sub_1BCAFF8(&StringLiteral_11700/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v13);
    sub_1BCAFF8(&StringLiteral_11698/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v14);
    sub_1BCAFF8(&StringLiteral_15365/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/, v15);
    sub_1BCAFF8(&StringLiteral_15364/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/, v16);
    sub_1BCAFF8(&StringLiteral_15360/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, v17);
    sub_1BCAFF8(&StringLiteral_15366/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/, v18);
    sub_1BCAFF8(&StringLiteral_11699/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v19);
    byte_4B1828C = 1;
  }
  v20 = sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v20,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4B18129 )
  {
    sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, v21);
    byte_4B18129 = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v22->static_fields->waveBattleAutoOrganizationInfo;
  Filter_42992912 = sub_1BCB0A0(bool___TypeInfo, 7LL);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_100;
  v26 = Filter_42992912;
  v27 = 0LL;
  v28 = Filter_42992912 + 32;
  do
  {
    Filter_42992912 = ListViewSort__GetFilter_42992912(waveBattleAutoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_100;
    v30 = *(unsigned int *)(v26 + 24);
    if ( v27 >= v30 )
      goto LABEL_99;
    *(_BYTE *)(v28 + v27++) = Filter_42992912 & 1;
  }
  while ( v27 != 7 );
  if ( (unsigned int)v30 < 2 )
    goto LABEL_99;
  v31 = *(_BYTE *)(v26 + 32) == 0;
  v32 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15360/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0LL);
    if ( !v20 )
      goto LABEL_100;
    v35 = *(_QWORD *)(v20 + 16);
    v36 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v35 )
      goto LABEL_100;
    v37 = *(int *)(v20 + 24);
    v38 = Filter_42992912;
    if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_42992912,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = v35 + 8 * v37;
      *(_DWORD *)(v20 + 24) = v37 + 1;
      *(_QWORD *)(v39 + 32) = v38;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 32), v38, v33, v34);
    }
  }
  if ( v32 || v31 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15359/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
    if ( !v20 )
      goto LABEL_100;
    v42 = *(_QWORD *)(v20 + 16);
    v43 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v42 )
      goto LABEL_100;
    v44 = *(int *)(v20 + 24);
    v45 = Filter_42992912;
    if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_42992912,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = v42 + 8 * v44;
      *(_DWORD *)(v20 + 24) = v44 + 1;
      *(_QWORD *)(v46 + 32) = v45;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v46 + 32), v45, v40, v41);
    }
  }
  detailKindLabel = this->fields.detailKindLabel;
  Filter_42992912 = (__int64)System_String__Join_62493000(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v20,
                               0LL);
  if ( !detailKindLabel )
    goto LABEL_100;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_42992912, 0LL);
  if ( !v20 )
    goto LABEL_100;
  v48 = *(_DWORD *)(v20 + 24);
  v49 = *(_DWORD *)(v20 + 28) + 1;
  *(_DWORD *)(v20 + 24) = 0;
  *(_DWORD *)(v20 + 28) = v49;
  if ( v48 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v20 + 16), 0, v48, 0LL);
  Filter_42992912 = sub_1BCB0A0(bool___TypeInfo, 5LL);
  v50 = *(_DWORD *)(v26 + 24);
  v51 = Filter_42992912;
  v52 = 0LL;
  v53 = v50 >= 2;
  v54 = v50 - 2;
  v55 = 1;
  if ( (_DWORD)v54 == 0 || !v53 )
    v54 = 0LL;
  v56 = 1;
  do
  {
    if ( v54 == v52 )
      goto LABEL_99;
    if ( !Filter_42992912 )
      goto LABEL_100;
    v57 = *(unsigned int *)(Filter_42992912 + 24);
    if ( v52 >= v57 )
      goto LABEL_99;
    v58 = *(unsigned __int8 *)(v26 + 34 + v52);
    v59 = v58 == 0;
    *(_BYTE *)(Filter_42992912 + 32 + v52++) = v58;
    v60 = v58 == 0;
    v61 = !v59;
    v56 &= v61;
    v55 &= v60;
  }
  while ( v52 != 5 );
  if ( (v56 | v55) == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v62 = &StringLiteral_15366/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_87;
  }
  if ( (unsigned int)v57 <= 4 )
LABEL_99:
    sub_1BCB25C(Filter_42992912, v25, v29);
  if ( *(_BYTE *)(Filter_42992912 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11701/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v65 = *(_QWORD *)(v20 + 16);
    v66 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v65 )
      goto LABEL_100;
    v67 = *(int *)(v20 + 24);
    v68 = Filter_42992912;
    if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_42992912,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = v65 + 8 * v67;
      *(_DWORD *)(v20 + 24) = v67 + 1;
      *(_QWORD *)(v69 + 32) = v68;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v69 + 32), v68, v63, v64);
    }
  }
  if ( *(_DWORD *)(v51 + 24) <= 3u )
    goto LABEL_99;
  if ( *(_BYTE *)(v51 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11700/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v72 = *(_QWORD *)(v20 + 16);
    v73 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v72 )
      goto LABEL_100;
    v74 = *(int *)(v20 + 24);
    v75 = Filter_42992912;
    if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_42992912,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = v72 + 8 * v74;
      *(_DWORD *)(v20 + 24) = v74 + 1;
      *(_QWORD *)(v76 + 32) = v75;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v76 + 32), v75, v70, v71);
    }
  }
  if ( *(_DWORD *)(v51 + 24) <= 2u )
    goto LABEL_99;
  if ( *(_BYTE *)(v51 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11699/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v79 = *(_QWORD *)(v20 + 16);
    v80 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( !v79 )
      goto LABEL_100;
    v81 = *(int *)(v20 + 24);
    v82 = Filter_42992912;
    if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v20,
        (Il2CppObject *)Filter_42992912,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = v79 + 8 * v81;
      *(_DWORD *)(v20 + 24) = v81 + 1;
      *(_QWORD *)(v83 + 32) = v82;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v83 + 32), v82, v77, v78);
    }
  }
  if ( *(_DWORD *)(v51 + 24) <= 1u )
    goto LABEL_99;
  if ( *(_BYTE *)(v51 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11702/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v86 = *(_QWORD *)(v20 + 16);
    v87 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v20 + 28);
    if ( v86 )
    {
      v88 = *(int *)(v20 + 24);
      v89 = Filter_42992912;
      if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v20,
          (Il2CppObject *)Filter_42992912,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = v86 + 8 * v88;
        *(_DWORD *)(v20 + 24) = v88 + 1;
        *(_QWORD *)(v90 + 32) = v89;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v90 + 32), v89, v84, v85);
      }
      goto LABEL_82;
    }
LABEL_100:
    sub_1BCB254(Filter_42992912, v25);
  }
LABEL_82:
  if ( !*(_DWORD *)(v51 + 24) )
    goto LABEL_99;
  if ( !*(_BYTE *)(v51 + 32) )
    goto LABEL_91;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v62 = &StringLiteral_11698/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_87:
  Filter_42992912 = (__int64)LocalizationManager__Get((System_String_o *)*v62, 0LL);
  v93 = *(_QWORD *)(v20 + 16);
  v94 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v20 + 28);
  if ( !v93 )
    goto LABEL_100;
  v95 = *(int *)(v20 + 24);
  v96 = Filter_42992912;
  if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v20,
      (Il2CppObject *)Filter_42992912,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = v93 + 8 * v95;
    *(_DWORD *)(v20 + 24) = v95 + 1;
    *(_QWORD *)(v97 + 32) = v96;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v97 + 32), v96, v91, v92);
  }
LABEL_91:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_42992912 = (__int64)System_String__Join_62493000(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v20,
                               0LL);
  if ( !detailRarityLabel )
    goto LABEL_100;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_42992912, 0LL);
  autoOrganizationMode = waveBattleAutoOrganizationInfo->fields.autoOrganizationMode;
  detailModeLabel = this->fields.detailModeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v101 = (System_String_o **)(autoOrganizationMode == 1 ? &StringLiteral_15364/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/ : &StringLiteral_15365/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
  Filter_42992912 = (__int64)LocalizationManager__Get(*v101, 0LL);
  if ( !detailModeLabel )
    goto LABEL_100;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_42992912, 0LL);
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

  if ( (byte_4B18284 & 1) == 0 )
  {
    sub_1BCAFF8(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4B18284 = 1;
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
    v9 = sub_1C05088(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BCB514(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1828D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3053/*"BaseWindow/CancelButton"*/, method);
    byte_4B1828D = 1;
  }
  return (System_String_o *)StringLiteral_3053/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4B18285 & 1) == 0 )
  {
    sub_1BCAFF8(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4B18285 = 1;
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
    v9 = sub_1C05088(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BCB514(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A10024;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FFDC;
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
  if ( (byte_4B1828F & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, isDecide);
    byte_4B1828F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AutoOrganizationManager_c *v11; // x0

  v4 = this;
  if ( (byte_4B18290 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, v5);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_1BCAFF8(
                                                                                                 &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
                                                                                                 v6);
    byte_4B18290 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_33877764(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4B18129 )
    {
      sub_1BCAFF8(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4B18129 = 1;
    }
    v11 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v11 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v11->static_fields->waveBattleAutoOrganizationInfo;
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
    sub_1BCB254(this, isDecide);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4B18291 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18291 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(go, 0LL);
}