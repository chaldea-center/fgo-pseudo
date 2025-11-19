void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB2053 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB2053 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CB204D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4CB204D = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Init(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CB204B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB204B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cautionMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailTitleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailKindLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailRarityLabel;
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
    sub_1C6BC60(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4CB204E & 1) == 0 )
  {
    sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4CB204E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
        closeFunc->fields.method_code,
        0,
        closeFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4CB2050 & 1) == 0 )
  {
    sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4CB2050 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
        closeFunc->fields.method_code,
        1,
        closeFunc->fields.method);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v20; // x20
  AutoOrganizationManager_c *v21; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  if ( (byte_4CB204F & 1) == 0 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    sub_1C6BA08(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__);
    sub_1C6BA08(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
    sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    byte_4CB204F = 1;
  }
  v3 = sub_1C6BC54(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  if ( this->fields.state == 2 )
  {
    v8 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C6BA20(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v11;
    v12 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v11, v13, v14);
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
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v18, v19);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[13].monitor) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0);
          v20 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4CB1F49 )
          {
            sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
            byte_4CB1F49 = 1;
          }
          v21 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v21 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v21->static_fields->waveBattleAutoOrganizationInfo;
          v23 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C6BC54(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v23,
            (Il2CppObject *)v3,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            v24);
          if ( v20 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v20,
              waveBattleAutoOrganizationInfo,
              v23,
              v25);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C6BC60(transform, v5);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v8; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  AutoOrganizationManager_c *v16; // x0
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x20

  if ( (byte_4CB204C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C6BA08(&StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C6BA08(&StringLiteral_2053/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_15483/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/);
    sub_1C6BA08(&StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_15482/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_15484/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C6BA08(&StringLiteral_2055/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4CB204C = 1;
  }
  this->fields.closeFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)func, (int32_t)method, v3);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2070/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15482/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15483/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15484/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2064/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2053/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2069/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2055/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4CB1F49 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    byte_4CB1F49 = 1;
  }
  v16 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v16 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v16->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_21:
    sub_1C6BC60(waveBattleAutoOrganizationInfo, v8);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v17);
  this->fields.state = 1;
  v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  AutoOrganizationManager_c *v4; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_44112732; // x0
  __int64 v7; // x1
  __int64 v8; // x23
  unsigned __int64 v9; // x22
  __int64 v10; // x27
  unsigned __int64 v11; // x8
  _BOOL4 v12; // w22
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
  UILabel_o *detailKindLabel; // x22
  int32_t v29; // w2
  int v30; // w8
  unsigned int v31; // w12
  __int64 v32; // x22
  unsigned __int64 v33; // x8
  bool v34; // cf
  __int64 v35; // x12
  int v36; // w10
  int v37; // w13
  unsigned __int64 v38; // x14
  int v39; // w15
  bool v40; // zf
  _BOOL4 v41; // w15
  int v42; // w16
  __int64 *v43; // x8
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x1
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x1
  __int64 v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x1
  __int64 v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x1
  __int64 v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x1
  __int64 v78; // x0
  UILabel_o *detailRarityLabel; // x22
  int32_t autoOrganizationMode; // w20
  UILabel_o *detailModeLabel; // x19
  System_String_o **v82; // x8

  if ( (byte_4CB2051 & 1) == 0 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C6BA08(&StringLiteral_15480/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C6BA08(&StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C6BA08(&StringLiteral_11802/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C6BA08(&StringLiteral_15486/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C6BA08(&StringLiteral_15485/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C6BA08(&StringLiteral_15481/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_15487/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/);
    sub_1C6BA08(&StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4CB2051 = 1;
  }
  v3 = sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4CB1F49 )
  {
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    byte_4CB1F49 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v4->static_fields->waveBattleAutoOrganizationInfo;
  Filter_44112732 = sub_1C6BAB0(bool___TypeInfo, 7);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_100;
  v8 = Filter_44112732;
  v9 = 0;
  v10 = Filter_44112732 + 32;
  do
  {
    Filter_44112732 = ListViewSort__GetFilter_44112732(waveBattleAutoOrganizationInfo, v9, 0);
    if ( !v8 )
      goto LABEL_100;
    v11 = *(unsigned int *)(v8 + 24);
    if ( v9 >= v11 )
      goto LABEL_99;
    *(_BYTE *)(v10 + v9++) = Filter_44112732 & 1;
  }
  while ( v9 != 7 );
  if ( (unsigned int)v11 < 2 )
    goto LABEL_99;
  v12 = *(_BYTE *)(v8 + 32) == 0;
  v13 = *(unsigned __int8 *)(v8 + 33) != 0;
  if ( *(_BYTE *)(v8 + 32) || !*(_BYTE *)(v8 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15481/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0);
    if ( !v3 )
      goto LABEL_100;
    v16 = *(_QWORD *)(v3 + 16);
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v16 )
      goto LABEL_100;
    v18 = *(int *)(v3 + 24);
    v19 = Filter_44112732;
    if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44112732,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = v16 + 8 * v18;
      *(_DWORD *)(v3 + 24) = v18 + 1;
      *(_QWORD *)(v20 + 32) = v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 32), v19, v14, v15);
    }
  }
  if ( v13 || v12 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15480/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0);
    if ( !v3 )
      goto LABEL_100;
    v23 = *(_QWORD *)(v3 + 16);
    v24 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v23 )
      goto LABEL_100;
    v25 = *(int *)(v3 + 24);
    v26 = Filter_44112732;
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44112732,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = v23 + 8 * v25;
      *(_DWORD *)(v3 + 24) = v25 + 1;
      *(_QWORD *)(v27 + 32) = v26;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 32), v26, v21, v22);
    }
  }
  detailKindLabel = this->fields.detailKindLabel;
  Filter_44112732 = (__int64)System_String__Join_64009384(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0);
  if ( !detailKindLabel )
    goto LABEL_100;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_44112732, 0);
  if ( !v3 )
    goto LABEL_100;
  v29 = *(_DWORD *)(v3 + 24);
  v30 = *(_DWORD *)(v3 + 28) + 1;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = v30;
  if ( v29 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v3 + 16), 0, v29, 0);
  Filter_44112732 = sub_1C6BAB0(bool___TypeInfo, 5);
  v31 = *(_DWORD *)(v8 + 24);
  v32 = Filter_44112732;
  v33 = 0;
  v34 = v31 >= 2;
  v35 = v31 - 2;
  v36 = 1;
  if ( (_DWORD)v35 == 0 || !v34 )
    v35 = 0;
  v37 = 1;
  do
  {
    if ( v35 == v33 )
      goto LABEL_99;
    if ( !Filter_44112732 )
      goto LABEL_100;
    v38 = *(unsigned int *)(Filter_44112732 + 24);
    if ( v33 >= v38 )
      goto LABEL_99;
    v39 = *(unsigned __int8 *)(v8 + 34 + v33);
    v40 = v39 == 0;
    *(_BYTE *)(Filter_44112732 + 32 + v33++) = v39;
    v41 = v39 == 0;
    v42 = !v40;
    v37 &= v42;
    v36 &= v41;
  }
  while ( v33 != 5 );
  if ( (v37 | v36) == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v43 = &StringLiteral_15487/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_87;
  }
  if ( (unsigned int)v38 <= 4 )
LABEL_99:
    sub_1C6BC68(Filter_44112732);
  if ( *(_BYTE *)(Filter_44112732 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v46 = *(_QWORD *)(v3 + 16);
    v47 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v46 )
      goto LABEL_100;
    v48 = *(int *)(v3 + 24);
    v49 = Filter_44112732;
    if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44112732,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = v46 + 8 * v48;
      *(_DWORD *)(v3 + 24) = v48 + 1;
      *(_QWORD *)(v50 + 32) = v49;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v50 + 32), v49, v44, v45);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 3u )
    goto LABEL_99;
  if ( *(_BYTE *)(v32 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v53 = *(_QWORD *)(v3 + 16);
    v54 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v53 )
      goto LABEL_100;
    v55 = *(int *)(v3 + 24);
    v56 = Filter_44112732;
    if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44112732,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = v53 + 8 * v55;
      *(_DWORD *)(v3 + 24) = v55 + 1;
      *(_QWORD *)(v57 + 32) = v56;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 32), v56, v51, v52);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_99;
  if ( *(_BYTE *)(v32 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v60 = *(_QWORD *)(v3 + 16);
    v61 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v60 )
      goto LABEL_100;
    v62 = *(int *)(v3 + 24);
    v63 = Filter_44112732;
    if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44112732,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = v60 + 8 * v62;
      *(_DWORD *)(v3 + 24) = v62 + 1;
      *(_QWORD *)(v64 + 32) = v63;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 32), v63, v58, v59);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_99;
  if ( *(_BYTE *)(v32 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v67 = *(_QWORD *)(v3 + 16);
    v68 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( v67 )
    {
      v69 = *(int *)(v3 + 24);
      v70 = Filter_44112732;
      if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v3,
          (Il2CppObject *)Filter_44112732,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = v67 + 8 * v69;
        *(_DWORD *)(v3 + 24) = v69 + 1;
        *(_QWORD *)(v71 + 32) = v70;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v71 + 32), v70, v65, v66);
      }
      goto LABEL_82;
    }
LABEL_100:
    sub_1C6BC60(Filter_44112732, v7);
  }
LABEL_82:
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_99;
  if ( !*(_BYTE *)(v32 + 32) )
    goto LABEL_91;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = &StringLiteral_11802/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_87:
  Filter_44112732 = (__int64)LocalizationManager__Get((System_String_o *)*v43, 0);
  v74 = *(_QWORD *)(v3 + 16);
  v75 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v3 + 28);
  if ( !v74 )
    goto LABEL_100;
  v76 = *(int *)(v3 + 24);
  v77 = Filter_44112732;
  if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v3,
      (Il2CppObject *)Filter_44112732,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = v74 + 8 * v76;
    *(_DWORD *)(v3 + 24) = v76 + 1;
    *(_QWORD *)(v78 + 32) = v77;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v78 + 32), v77, v72, v73);
  }
LABEL_91:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_44112732 = (__int64)System_String__Join_64009384(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0);
  if ( !detailRarityLabel )
    goto LABEL_100;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_44112732, 0);
  autoOrganizationMode = waveBattleAutoOrganizationInfo->fields.autoOrganizationMode;
  detailModeLabel = this->fields.detailModeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v82 = (System_String_o **)(autoOrganizationMode == 1 ? &StringLiteral_15485/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/ : &StringLiteral_15486/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
  Filter_44112732 = (__int64)LocalizationManager__Get(*v82, 0);
  if ( !detailModeLabel )
    goto LABEL_100;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_44112732, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
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

  if ( (byte_4CB2049 & 1) == 0 )
  {
    sub_1C6BA08(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4CB2049 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C6BFFC(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB2052 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3064/*"BaseWindow/CancelButton"*/);
    byte_4CB2052 = 1;
  }
  return (System_String_o *)StringLiteral_3064/*"BaseWindow/CancelButton"*/;
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
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

  if ( (byte_4CB204A & 1) == 0 )
  {
    sub_1C6BA08(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4CB204A = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C6BFFC(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9C658;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9C610;
}


System_IAsyncResult_o *WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CB2054 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB2054 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__0(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *v4; // x19
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AutoOrganizationManager_c *v9; // x0

  v4 = this;
  if ( (byte_4CB2055 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_1C6BA08(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__);
    byte_4CB2055 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_34949232(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4CB1F49 )
    {
      sub_1C6BA08(&AutoOrganizationManager_TypeInfo);
      byte_4CB1F49 = 1;
    }
    v9 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v9 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v9->static_fields->waveBattleAutoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0);
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
    sub_1C6BC60(this, isDecide);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4CB2056 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2056 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(go, 0);
}