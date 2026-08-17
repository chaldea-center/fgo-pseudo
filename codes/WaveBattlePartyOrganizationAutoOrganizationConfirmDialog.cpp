void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C2BA & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C2BA = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596C2B4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_596C2B4 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
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

  if ( (byte_596C2B2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C2B2 = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596C2B5 & 1) == 0 )
  {
    sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_596C2B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C2B7 & 1) == 0 )
  {
    sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_596C2B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v17; // x0
  UnityEngine_Transform_o **v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v36; // x20
  AutoOrganizationManager_c *v37; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v39; // x22

  if ( (byte_596C2B6 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__);
    sub_2213A60(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
    sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    byte_596C2B6 = 1;
  }
  v3 = sub_2213CCC(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
    (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 2 )
  {
    v12 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_2213A78(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    v17 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v17;
    v18 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v17, v19, v20, v21, v22, v23, v24);
    v25 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v25, parent, 0);
      transform = *v18;
      if ( *v18 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v3 + 16),
          (int32_t)Component_object,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Init(
            (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)transform,
            0);
          v36 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v34, v35);
          if ( !byte_596C1A3 )
          {
            sub_2213A60(&AutoOrganizationManager_TypeInfo);
            byte_596C1A3 = 1;
          }
          v37 = AutoOrganizationManager_TypeInfo;
          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v34, v35);
            v37 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v37->static_fields->waveBattleAutoOrganizationInfo;
          v39 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_2213CCC(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v39,
            (Il2CppObject *)v3,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            0);
          if ( v36 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(v36, waveBattleAutoOrganizationInfo, v39, 0);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(transform, v5);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v14; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  __int64 v22; // x2
  AutoOrganizationManager_c *v23; // x0
  const MethodInfo *v24; // x1
  System_Action_c *v25; // x0
  System_Action_o *v26; // x20

  if ( (byte_596C2B3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_2213A60(&StringLiteral_2158/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_16097/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/);
    sub_2213A60(&StringLiteral_2175/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_16096/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16098/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_2213A60(&StringLiteral_2160/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_2169/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_596C2B3 = 1;
  }
  this->fields.closeFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_16096/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_16097/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_16098/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2169/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2160/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0);
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v14, v22);
  if ( !byte_596C1A3 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596C1A3 = 1;
  }
  v23 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v14, v22);
    v23 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v23->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_21:
    sub_2213CDC(waveBattleAutoOrganizationInfo, v14);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v24);
  v25 = System_Action_TypeInfo;
  this->fields.state = 1;
  v26 = (System_Action_o *)sub_2213CCC(v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  AutoOrganizationManager_c *v6; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_50882576; // x0
  __int64 v9; // x1
  __int64 v10; // x23
  unsigned __int64 v11; // x22
  __int64 v12; // x29
  __int64 v13; // x2
  unsigned __int64 v14; // x8
  bool v15; // zf
  int v16; // w22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x1
  __int64 v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x1
  __int64 v38; // x0
  UILabel_o *detailKindLabel; // x22
  int32_t v40; // w2
  int v41; // w8
  __int64 v42; // x2
  __int64 v43; // x22
  unsigned __int64 v44; // x8
  int v45; // w11
  int v46; // w13
  int v47; // w10
  __int64 v48; // x10
  unsigned __int64 v49; // x14
  int v50; // w15
  _BOOL4 v51; // w15
  int v52; // w16
  __int64 *v53; // x8
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x1
  __int64 v64; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x1
  __int64 v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x1
  __int64 v86; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x1
  __int64 v97; // x0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  __int64 v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x1
  __int64 v108; // x0
  UILabel_o *detailRarityLabel; // x22
  __int64 v110; // x1
  __int64 v111; // x2
  UILabel_o *detailModeLabel; // x19
  int v113; // w8
  __int64 *v114; // x8

  if ( (byte_596C2B8 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_2213A60(&StringLiteral_16094/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/);
    sub_2213A60(&StringLiteral_12317/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_2213A60(&StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_2213A60(&StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_2213A60(&StringLiteral_16100/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_2213A60(&StringLiteral_16099/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_2213A60(&StringLiteral_16095/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/);
    sub_2213A60(&StringLiteral_16101/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/);
    sub_2213A60(&StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_596C2B8 = 1;
  }
  v3 = sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v4, v5);
  if ( !byte_596C1A3 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596C1A3 = 1;
  }
  v6 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v4, v5);
    v6 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v6->static_fields->waveBattleAutoOrganizationInfo;
  Filter_50882576 = sub_2213B20(bool___TypeInfo, 7);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_108;
  v10 = Filter_50882576;
  v11 = 0;
  v12 = Filter_50882576 + 32;
  do
  {
    Filter_50882576 = ListViewSort__GetFilter_50882576(waveBattleAutoOrganizationInfo, v11, 0);
    if ( !v10 )
      goto LABEL_108;
    v14 = *(unsigned int *)(v10 + 24);
    if ( v11 >= v14 )
      goto LABEL_107;
    *(_BYTE *)(v12 + v11++) = Filter_50882576 & 1;
  }
  while ( v11 != 7 );
  if ( (unsigned int)v14 < 2 )
LABEL_107:
    sub_2213CE4(Filter_50882576);
  if ( *(_BYTE *)(v10 + 32) )
    v15 = *(_BYTE *)(v10 + 33) == 0;
  else
    v15 = 0;
  v16 = !v15;
  if ( *(_BYTE *)(v10 + 32) || !*(_BYTE *)(v10 + 33) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v13);
    Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_16095/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0);
    if ( !v3 )
      goto LABEL_108;
    v34 = *(_QWORD *)(v3 + 16);
    v35 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v34 )
      goto LABEL_108;
    v36 = *(int *)(v3 + 24);
    v37 = Filter_50882576;
    if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_50882576,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      if ( !v16 )
        goto LABEL_38;
    }
    else
    {
      v38 = v34 + 8 * v36;
      *(_DWORD *)(v3 + 24) = v36 + 1;
      *(_QWORD *)(v38 + 32) = v37;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 32), v37, v28, v29, v30, v31, v32, v33);
      if ( (v16 & 1) == 0 )
        goto LABEL_38;
    }
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v13);
  Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_16094/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0);
  if ( !v3 )
    goto LABEL_108;
  v23 = *(_QWORD *)(v3 + 16);
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v3 + 28);
  if ( !v23 )
    goto LABEL_108;
  v25 = *(int *)(v3 + 24);
  v26 = Filter_50882576;
  if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v3,
      (Il2CppObject *)Filter_50882576,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v23 + 8 * v25;
    *(_DWORD *)(v3 + 24) = v25 + 1;
    *(_QWORD *)(v27 + 32) = v26;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 32), v26, v17, v18, v19, v20, v21, v22);
  }
LABEL_38:
  detailKindLabel = this->fields.detailKindLabel;
  Filter_50882576 = (__int64)System_String__Join_75699092(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0);
  if ( !detailKindLabel )
    goto LABEL_108;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_50882576, 0);
  v40 = *(_DWORD *)(v3 + 24);
  v41 = *(_DWORD *)(v3 + 28) + 1;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = v41;
  if ( v40 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v3 + 16), 0, v40, 0);
  Filter_50882576 = sub_2213B20(bool___TypeInfo, 5);
  v43 = Filter_50882576;
  v44 = 0;
  v45 = 1;
  v46 = 1;
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    v47 = 2;
  else
    v47 = *(_DWORD *)(v10 + 24);
  v48 = (unsigned int)(v47 - 2);
  do
  {
    if ( v48 == v44 )
      goto LABEL_107;
    if ( !Filter_50882576 )
      goto LABEL_108;
    v49 = *(unsigned int *)(Filter_50882576 + 24);
    if ( v44 >= v49 )
      goto LABEL_107;
    v50 = *(unsigned __int8 *)(v10 + 34 + v44);
    *(_BYTE *)(Filter_50882576 + 32 + v44++) = v50;
    v15 = v50 == 0;
    v51 = v50 == 0;
    v52 = !v15;
    v46 &= v52;
    v45 &= v51;
  }
  while ( v44 != 5 );
  if ( (v46 | v45) == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v42);
    v53 = &StringLiteral_16101/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_93;
  }
  if ( (unsigned int)v49 <= 4 )
    goto LABEL_107;
  if ( *(_BYTE *)(Filter_50882576 + 36) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v42);
    Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v60 = *(_QWORD *)(v3 + 16);
    v61 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v60 )
      goto LABEL_108;
    v62 = *(int *)(v3 + 24);
    v63 = Filter_50882576;
    if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_50882576,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v64 = v60 + 8 * v62;
      *(_DWORD *)(v3 + 24) = v62 + 1;
      *(_QWORD *)(v64 + 32) = v63;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v64 + 32), v63, v54, v55, v56, v57, v58, v59);
    }
  }
  if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_107;
  if ( *(_BYTE *)(v43 + 35) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v42);
    Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v71 = *(_QWORD *)(v3 + 16);
    v72 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v71 )
      goto LABEL_108;
    v73 = *(int *)(v3 + 24);
    v74 = Filter_50882576;
    if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_50882576,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = v71 + 8 * v73;
      *(_DWORD *)(v3 + 24) = v73 + 1;
      *(_QWORD *)(v75 + 32) = v74;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 32), v74, v65, v66, v67, v68, v69, v70);
    }
  }
  if ( *(_DWORD *)(v43 + 24) <= 2u )
    goto LABEL_107;
  if ( *(_BYTE *)(v43 + 34) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v42);
    Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v82 = *(_QWORD *)(v3 + 16);
    v83 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v82 )
      goto LABEL_108;
    v84 = *(int *)(v3 + 24);
    v85 = Filter_50882576;
    if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_50882576,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = v82 + 8 * v84;
      *(_DWORD *)(v3 + 24) = v84 + 1;
      *(_QWORD *)(v86 + 32) = v85;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v86 + 32), v85, v76, v77, v78, v79, v80, v81);
    }
  }
  if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_107;
  if ( *(_BYTE *)(v43 + 33) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v42);
    Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v93 = *(_QWORD *)(v3 + 16);
    v94 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( v93 )
    {
      v95 = *(int *)(v3 + 24);
      v96 = Filter_50882576;
      if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v3,
          (Il2CppObject *)Filter_50882576,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v97 = v93 + 8 * v95;
        *(_DWORD *)(v3 + 24) = v95 + 1;
        *(_QWORD *)(v97 + 32) = v96;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v97 + 32), v96, v87, v88, v89, v90, v91, v92);
      }
      goto LABEL_88;
    }
LABEL_108:
    sub_2213CDC(Filter_50882576, v9);
  }
LABEL_88:
  if ( !*(_DWORD *)(v43 + 24) )
    goto LABEL_107;
  if ( !*(_BYTE *)(v43 + 32) )
    goto LABEL_97;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v42);
  v53 = &StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_93:
  Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)*v53, 0);
  v104 = *(_QWORD *)(v3 + 16);
  v105 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v3 + 28);
  if ( !v104 )
    goto LABEL_108;
  v106 = *(int *)(v3 + 24);
  v107 = Filter_50882576;
  if ( (unsigned int)v106 >= *(_DWORD *)(v104 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v3,
      (Il2CppObject *)Filter_50882576,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = v104 + 8 * v106;
    *(_DWORD *)(v3 + 24) = v106 + 1;
    *(_QWORD *)(v108 + 32) = v107;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v108 + 32), v107, v98, v99, v100, v101, v102, v103);
  }
LABEL_97:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_50882576 = (__int64)System_String__Join_75699092(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0);
  if ( !detailRarityLabel )
    goto LABEL_108;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_50882576, 0);
  detailModeLabel = this->fields.detailModeLabel;
  v113 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( waveBattleAutoOrganizationInfo->fields.autoOrganizationMode == 1 )
  {
    if ( !v113 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v110, v111);
    v114 = &StringLiteral_16099/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/;
  }
  else
  {
    if ( !v113 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v110, v111);
    v114 = &StringLiteral_16100/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/;
  }
  Filter_50882576 = (__int64)LocalizationManager__Get((System_String_o *)*v114, 0);
  if ( !detailModeLabel )
    goto LABEL_108;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_50882576, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v13; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C2B0 & 1) == 0 )
  {
    sub_2213A60(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_596C2B0 = 1;
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
    v11 = sub_224B48C(p_closeFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_221405C(
                                                                        v8,
                                                                        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
                                                                        v9,
                                                                        v10);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v13, v14, v15);
}


System_String_o *WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596C2B9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3194/*"BaseWindow/CancelButton"*/);
    byte_596C2B9 = 1;
  }
  return (System_String_o *)StringLiteral_3194/*"BaseWindow/CancelButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C2B1 & 1) == 0 )
  {
    sub_2213A60(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_596C2B1 = 1;
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
    v11 = sub_224B48C(p_closeFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_221405C(
                                                                        v8,
                                                                        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
                                                                        v9,
                                                                        v10);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v13, v14);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2005070;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2005028;
}


System_IAsyncResult_o *WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_Action_o *_9__1; // x23
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x2
  AutoOrganizationManager_c *v14; // x0

  v4 = this;
  if ( (byte_596C385 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_2213A60(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__);
    byte_596C385 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_41472604(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide, v13);
    if ( !byte_596C1A3 )
    {
      sub_2213A60(&AutoOrganizationManager_TypeInfo);
      byte_596C1A3 = 1;
    }
    v14 = AutoOrganizationManager_TypeInfo;
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide, v13);
      v14 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v14->static_fields->waveBattleAutoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0);
      this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v4->fields.__4__this;
      if ( this )
      {
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          0);
        return;
      }
    }
LABEL_17:
    sub_2213CDC(this, isDecide);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *go; // x19

  if ( (byte_596C386 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C386 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83459800(go, 0);
}