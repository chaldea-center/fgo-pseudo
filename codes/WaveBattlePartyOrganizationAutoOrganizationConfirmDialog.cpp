void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A572C1 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A572C1 = 1;
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
  System_Action_o *v3; // x20

  if ( (byte_4A572BB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4A572BB = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v3,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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

  if ( (byte_4A572B9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A572B9 = 1;
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
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A572BC & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4A572BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A572BE & 1) == 0 )
  {
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4A572BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  __int64 v3; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v11; // x0
  UnityEngine_Transform_o **v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v20; // x20
  AutoOrganizationManager_c *v21; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  if ( (byte_4A572BD & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__);
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    byte_4A572BD = 1;
  }
  v3 = sub_1B887FC(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  if ( this->fields.state == 2 )
  {
    v8 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B885C8(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v11;
    v12 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v11, v13, v14);
    v15 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v15, parent, 0LL);
      transform = *v12;
      if ( *v12 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Component_object, v18, v19);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          LODWORD(transform[13].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v20 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4A5717B )
          {
            sub_1B885B0(&AutoOrganizationManager_TypeInfo);
            byte_4A5717B = 1;
          }
          v21 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v21 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v21->static_fields->waveBattleAutoOrganizationInfo;
          v23 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1B887FC(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
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
    sub_1B8880C(transform, v5);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3
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

  if ( (byte_4A572BA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_2168/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1B885B0(&StringLiteral_2152/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_15497/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/);
    sub_1B885B0(&StringLiteral_2169/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_15496/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_15498/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1B885B0(&StringLiteral_2154/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_2163/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4A572BA = 1;
  }
  this->fields.closeFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)func, (int32_t)method, v3);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2169/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15496/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15497/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15498/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2163/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2152/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2168/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2154/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0LL);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4A5717B )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    byte_4A5717B = 1;
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
    sub_1B8880C(waveBattleAutoOrganizationInfo, v8);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v17);
  this->fields.state = 1;
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  AutoOrganizationManager_c *v4; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_40785740; // x0
  __int64 v7; // x1
  __int64 v8; // x23
  unsigned __int64 v9; // x22
  __int64 v10; // x27
  unsigned __int64 v11; // x8
  _BOOL4 v12; // w22
  _BOOL4 v13; // w27
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x1
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
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
  int32_t v45; // w3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x1
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x1
  __int64 v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x1
  __int64 v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x1
  __int64 v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x1
  __int64 v78; // x0
  UILabel_o *detailRarityLabel; // x22
  int32_t autoOrganizationMode; // w20
  UILabel_o *detailModeLabel; // x19
  System_String_o **v82; // x8

  if ( (byte_4A572BF & 1) == 0 )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1B885B0(&StringLiteral_15494/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/);
    sub_1B885B0(&StringLiteral_11770/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1B885B0(&StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1B885B0(&StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1B885B0(&StringLiteral_15500/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1B885B0(&StringLiteral_15499/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1B885B0(&StringLiteral_15495/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/);
    sub_1B885B0(&StringLiteral_15501/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/);
    sub_1B885B0(&StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4A572BF = 1;
  }
  v3 = sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4A5717B )
  {
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    byte_4A5717B = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v4->static_fields->waveBattleAutoOrganizationInfo;
  Filter_40785740 = sub_1B88658(bool___TypeInfo, 7LL);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_100;
  v8 = Filter_40785740;
  v9 = 0LL;
  v10 = Filter_40785740 + 32;
  do
  {
    Filter_40785740 = ListViewSort__GetFilter_40785740(waveBattleAutoOrganizationInfo, v9, 0LL);
    if ( !v8 )
      goto LABEL_100;
    v11 = *(unsigned int *)(v8 + 24);
    if ( v9 >= v11 )
      goto LABEL_99;
    *(_BYTE *)(v10 + v9++) = Filter_40785740 & 1;
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
    Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15495/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0LL);
    if ( !v3 )
      goto LABEL_100;
    v16 = *(_QWORD *)(v3 + 16);
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v16 )
      goto LABEL_100;
    v18 = *(int *)(v3 + 24);
    v19 = Filter_40785740;
    if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_40785740,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = v16 + 8 * v18;
      *(_DWORD *)(v3 + 24) = v18 + 1;
      *(_QWORD *)(v20 + 32) = v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), v19, v14, v15);
    }
  }
  if ( v13 || v12 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15494/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
    if ( !v3 )
      goto LABEL_100;
    v23 = *(_QWORD *)(v3 + 16);
    v24 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v23 )
      goto LABEL_100;
    v25 = *(int *)(v3 + 24);
    v26 = Filter_40785740;
    if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_40785740,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = v23 + 8 * v25;
      *(_DWORD *)(v3 + 24) = v25 + 1;
      *(_QWORD *)(v27 + 32) = v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 32), v26, v21, v22);
    }
  }
  detailKindLabel = this->fields.detailKindLabel;
  Filter_40785740 = (__int64)System_String__Join_61722688(
                               (System_String_o *)StringLiteral_117/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0LL);
  if ( !detailKindLabel )
    goto LABEL_100;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_40785740, 0LL);
  if ( !v3 )
    goto LABEL_100;
  v29 = *(_DWORD *)(v3 + 24);
  v30 = *(_DWORD *)(v3 + 28) + 1;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = v30;
  if ( v29 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v3 + 16), 0, v29, 0LL);
  Filter_40785740 = sub_1B88658(bool___TypeInfo, 5LL);
  v31 = *(_DWORD *)(v8 + 24);
  v32 = Filter_40785740;
  v33 = 0LL;
  v34 = v31 >= 2;
  v35 = v31 - 2;
  v36 = 1;
  if ( (_DWORD)v35 == 0 || !v34 )
    v35 = 0LL;
  v37 = 1;
  do
  {
    if ( v35 == v33 )
      goto LABEL_99;
    if ( !Filter_40785740 )
      goto LABEL_100;
    v38 = *(unsigned int *)(Filter_40785740 + 24);
    if ( v33 >= v38 )
      goto LABEL_99;
    v39 = *(unsigned __int8 *)(v8 + 34 + v33);
    v40 = v39 == 0;
    *(_BYTE *)(Filter_40785740 + 32 + v33++) = v39;
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
    v43 = &StringLiteral_15501/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_87;
  }
  if ( (unsigned int)v38 <= 4 )
LABEL_99:
    sub_1B88814(Filter_40785740, v7);
  if ( *(_BYTE *)(Filter_40785740 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v46 = *(_QWORD *)(v3 + 16);
    v47 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v46 )
      goto LABEL_100;
    v48 = *(int *)(v3 + 24);
    v49 = Filter_40785740;
    if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_40785740,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = v46 + 8 * v48;
      *(_DWORD *)(v3 + 24) = v48 + 1;
      *(_QWORD *)(v50 + 32) = v49;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 32), v49, v44, v45);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 3u )
    goto LABEL_99;
  if ( *(_BYTE *)(v32 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v53 = *(_QWORD *)(v3 + 16);
    v54 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v53 )
      goto LABEL_100;
    v55 = *(int *)(v3 + 24);
    v56 = Filter_40785740;
    if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_40785740,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = v53 + 8 * v55;
      *(_DWORD *)(v3 + 24) = v55 + 1;
      *(_QWORD *)(v57 + 32) = v56;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 32), v56, v51, v52);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_99;
  if ( *(_BYTE *)(v32 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v60 = *(_QWORD *)(v3 + 16);
    v61 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v60 )
      goto LABEL_100;
    v62 = *(int *)(v3 + 24);
    v63 = Filter_40785740;
    if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_40785740,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = v60 + 8 * v62;
      *(_DWORD *)(v3 + 24) = v62 + 1;
      *(_QWORD *)(v64 + 32) = v63;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 32), v63, v58, v59);
    }
  }
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_99;
  if ( *(_BYTE *)(v32 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v67 = *(_QWORD *)(v3 + 16);
    v68 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( v67 )
    {
      v69 = *(int *)(v3 + 24);
      v70 = Filter_40785740;
      if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v3,
          (Il2CppObject *)Filter_40785740,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = v67 + 8 * v69;
        *(_DWORD *)(v3 + 24) = v69 + 1;
        *(_QWORD *)(v71 + 32) = v70;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 32), v70, v65, v66);
      }
      goto LABEL_82;
    }
LABEL_100:
    sub_1B8880C(Filter_40785740, v7);
  }
LABEL_82:
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_99;
  if ( !*(_BYTE *)(v32 + 32) )
    goto LABEL_91;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = &StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_87:
  Filter_40785740 = (__int64)LocalizationManager__Get((System_String_o *)*v43, 0LL);
  v74 = *(_QWORD *)(v3 + 16);
  v75 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v3 + 28);
  if ( !v74 )
    goto LABEL_100;
  v76 = *(int *)(v3 + 24);
  v77 = Filter_40785740;
  if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v3,
      (Il2CppObject *)Filter_40785740,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = v74 + 8 * v76;
    *(_DWORD *)(v3 + 24) = v76 + 1;
    *(_QWORD *)(v78 + 32) = v77;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v78 + 32), v77, v72, v73);
  }
LABEL_91:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_40785740 = (__int64)System_String__Join_61722688(
                               (System_String_o *)StringLiteral_117/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0LL);
  if ( !detailRarityLabel )
    goto LABEL_100;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_40785740, 0LL);
  autoOrganizationMode = waveBattleAutoOrganizationInfo->fields.autoOrganizationMode;
  detailModeLabel = this->fields.detailModeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v82 = (System_String_o **)(autoOrganizationMode == 1 ? &StringLiteral_15499/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/ : &StringLiteral_15500/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
  Filter_40785740 = (__int64)LocalizationManager__Get(*v82, 0LL);
  if ( !detailModeLabel )
    goto LABEL_100;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_40785740, 0LL);
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

  if ( (byte_4A572B7 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4A572B7 = 1;
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
    v9 = sub_1BC3AA0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1B88ACC(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A572C0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3194/*"BaseWindow/CancelButton"*/);
    byte_4A572C0 = 1;
  }
  return (System_String_o *)StringLiteral_3194/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4A572B8 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4A572B8 = 1;
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
    v9 = sub_1BC3AA0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9680;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9638;
}


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
  if ( (byte_4A572C2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A572C2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  AutoOrganizationManager_c *v9; // x0

  v4 = this;
  if ( (byte_4A572C3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AutoOrganizationManager_TypeInfo);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_1B885B0(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__);
    byte_4A572C3 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_32372912(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4A5717B )
    {
      sub_1B885B0(&AutoOrganizationManager_TypeInfo);
      byte_4A5717B = 1;
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
    sub_1B8880C(this, isDecide);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4A572C4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A572C4 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(go, 0LL);
}