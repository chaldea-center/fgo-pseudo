void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D28472 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D28472 = 1;
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

  if ( (byte_4D2846C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_4D2846C = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D2846A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2846A = 1;
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
    sub_1C942F0(titleLabel, method);
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

  if ( (byte_4D2846D & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_4D2846D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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

  if ( (byte_4D2846F & 1) == 0 )
  {
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_4D2846F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v15; // x0
  UnityEngine_Transform_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v32; // x20
  AutoOrganizationManager_c *v33; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v35; // x22

  if ( (byte_4D2846E & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__);
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    byte_4D2846E = 1;
  }
  v3 = sub_1C942E4(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_TypeInfo);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___ctor(
    (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v3,
    0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 2 )
  {
    v12 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C940B0(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C9407C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v15;
    v16 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v15, v17, v18, v19, v20, v21, v22);
    v23 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v23, parent, 0);
      transform = *v16;
      if ( *v16 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Component_object, v26, v27, v28, v29, v30, v31);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Init(
            (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)transform,
            0);
          v32 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4D28366 )
          {
            sub_1C94098(&AutoOrganizationManager_TypeInfo);
            byte_4D28366 = 1;
          }
          v33 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v33 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v33->static_fields->waveBattleAutoOrganizationInfo;
          v35 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C942E4(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v35,
            (Il2CppObject *)v3,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__0__,
            0);
          if ( v32 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(v32, waveBattleAutoOrganizationInfo, v35, 0);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C942F0(transform, v5);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v12; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *buffExistsMessageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  AutoOrganizationManager_c *v20; // x0
  const MethodInfo *v21; // x1
  System_Action_o *v22; // x20

  if ( (byte_4D2846B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_1C94098(&StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_1C94098(&StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_15542/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/);
    sub_1C94098(&StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_1C94098(&StringLiteral_15541/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_15543/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_1C94098(&StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_4D2846B = 1;
  }
  this->fields.closeFunc = func;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2074/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_21;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15541/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_21;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15542/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_CAUTION"*/, 0);
  if ( !cautionMessageLabel )
    goto LABEL_21;
  UILabel__set_text(cautionMessageLabel, waveBattleAutoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15543/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_21;
  UILabel__set_text(buffExistsMessageLabel, waveBattleAutoOrganizationInfo, 0);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2068/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitleLabel )
    goto LABEL_21;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2057/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_21;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2073/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_21;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2059/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_21;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4D28366 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D28366 = 1;
  }
  v20 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v20 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v20->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_21:
    sub_1C942F0(waveBattleAutoOrganizationInfo, v12);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v21);
  this->fields.state = 1;
  v22 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0, 0);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  AutoOrganizationManager_c *v4; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_44656352; // x0
  __int64 v7; // x1
  __int64 v8; // x23
  unsigned __int64 v9; // x22
  __int64 v10; // x27
  unsigned __int64 v11; // x8
  _BOOL4 v12; // w22
  _BOOL4 v13; // w27
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x1
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x1
  __int64 v35; // x0
  UILabel_o *detailKindLabel; // x22
  int32_t v37; // w2
  int v38; // w8
  unsigned int v39; // w12
  __int64 v40; // x22
  unsigned __int64 v41; // x8
  bool v42; // cf
  __int64 v43; // x12
  int v44; // w10
  int v45; // w13
  unsigned __int64 v46; // x14
  int v47; // w15
  bool v48; // zf
  _BOOL4 v49; // w15
  int v50; // w16
  __int64 *v51; // x8
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x1
  __int64 v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x1
  __int64 v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x1
  __int64 v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x1
  __int64 v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  __int64 v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x1
  __int64 v106; // x0
  UILabel_o *detailRarityLabel; // x22
  int32_t autoOrganizationMode; // w20
  UILabel_o *detailModeLabel; // x19
  System_String_o **v110; // x8

  if ( (byte_4D28470 & 1) == 0 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_11854/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C94098(&StringLiteral_15539/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/);
    sub_1C94098(&StringLiteral_11853/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_1C94098(&StringLiteral_11852/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C94098(&StringLiteral_11850/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C94098(&StringLiteral_15545/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_1C94098(&StringLiteral_15544/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_1C94098(&StringLiteral_15540/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/);
    sub_1C94098(&StringLiteral_15546/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/);
    sub_1C94098(&StringLiteral_11851/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4D28470 = 1;
  }
  v3 = sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4D28366 )
  {
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    byte_4D28366 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v4->static_fields->waveBattleAutoOrganizationInfo;
  Filter_44656352 = sub_1C94140(bool___TypeInfo, 7);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_100;
  v8 = Filter_44656352;
  v9 = 0;
  v10 = Filter_44656352 + 32;
  do
  {
    Filter_44656352 = ListViewSort__GetFilter_44656352(waveBattleAutoOrganizationInfo, v9, 0);
    if ( !v8 )
      goto LABEL_100;
    v11 = *(unsigned int *)(v8 + 24);
    if ( v9 >= v11 )
      goto LABEL_99;
    *(_BYTE *)(v10 + v9++) = Filter_44656352 & 1;
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
    Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15540/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0);
    if ( !v3 )
      goto LABEL_100;
    v20 = *(_QWORD *)(v3 + 16);
    v21 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v20 )
      goto LABEL_100;
    v22 = *(int *)(v3 + 24);
    v23 = Filter_44656352;
    if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44656352,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = v20 + 8 * v22;
      *(_DWORD *)(v3 + 24) = v22 + 1;
      *(_QWORD *)(v24 + 32) = v23;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 32), v23, v14, v15, v16, v17, v18, v19);
    }
  }
  if ( v13 || v12 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15539/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0);
    if ( !v3 )
      goto LABEL_100;
    v31 = *(_QWORD *)(v3 + 16);
    v32 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v31 )
      goto LABEL_100;
    v33 = *(int *)(v3 + 24);
    v34 = Filter_44656352;
    if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44656352,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v31 + 8 * v33;
      *(_DWORD *)(v3 + 24) = v33 + 1;
      *(_QWORD *)(v35 + 32) = v34;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 32), v34, v25, v26, v27, v28, v29, v30);
    }
  }
  detailKindLabel = this->fields.detailKindLabel;
  Filter_44656352 = (__int64)System_String__Join_64460336(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0);
  if ( !detailKindLabel )
    goto LABEL_100;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_44656352, 0);
  if ( !v3 )
    goto LABEL_100;
  v37 = *(_DWORD *)(v3 + 24);
  v38 = *(_DWORD *)(v3 + 28) + 1;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = v38;
  if ( v37 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v3 + 16), 0, v37, 0);
  Filter_44656352 = sub_1C94140(bool___TypeInfo, 5);
  v39 = *(_DWORD *)(v8 + 24);
  v40 = Filter_44656352;
  v41 = 0;
  v42 = v39 >= 2;
  v43 = v39 - 2;
  v44 = 1;
  if ( (_DWORD)v43 == 0 || !v42 )
    v43 = 0;
  v45 = 1;
  do
  {
    if ( v43 == v41 )
      goto LABEL_99;
    if ( !Filter_44656352 )
      goto LABEL_100;
    v46 = *(unsigned int *)(Filter_44656352 + 24);
    if ( v41 >= v46 )
      goto LABEL_99;
    v47 = *(unsigned __int8 *)(v8 + 34 + v41);
    v48 = v47 == 0;
    *(_BYTE *)(Filter_44656352 + 32 + v41++) = v47;
    v49 = v47 == 0;
    v50 = !v48;
    v45 &= v50;
    v44 &= v49;
  }
  while ( v41 != 5 );
  if ( (v45 | v44) == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = &StringLiteral_15546/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
    goto LABEL_87;
  }
  if ( (unsigned int)v46 <= 4 )
LABEL_99:
    sub_1C942F8(Filter_44656352);
  if ( *(_BYTE *)(Filter_44656352 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11853/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v58 = *(_QWORD *)(v3 + 16);
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v58 )
      goto LABEL_100;
    v60 = *(int *)(v3 + 24);
    v61 = Filter_44656352;
    if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44656352,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = v58 + 8 * v60;
      *(_DWORD *)(v3 + 24) = v60 + 1;
      *(_QWORD *)(v62 + 32) = v61;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v62 + 32), v61, v52, v53, v54, v55, v56, v57);
    }
  }
  if ( *(_DWORD *)(v40 + 24) <= 3u )
    goto LABEL_99;
  if ( *(_BYTE *)(v40 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11852/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v69 = *(_QWORD *)(v3 + 16);
    v70 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v69 )
      goto LABEL_100;
    v71 = *(int *)(v3 + 24);
    v72 = Filter_44656352;
    if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44656352,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = v69 + 8 * v71;
      *(_DWORD *)(v3 + 24) = v71 + 1;
      *(_QWORD *)(v73 + 32) = v72;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v73 + 32), v72, v63, v64, v65, v66, v67, v68);
    }
  }
  if ( *(_DWORD *)(v40 + 24) <= 2u )
    goto LABEL_99;
  if ( *(_BYTE *)(v40 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v80 = *(_QWORD *)(v3 + 16);
    v81 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( !v80 )
      goto LABEL_100;
    v82 = *(int *)(v3 + 24);
    v83 = Filter_44656352;
    if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v3,
        (Il2CppObject *)Filter_44656352,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = v80 + 8 * v82;
      *(_DWORD *)(v3 + 24) = v82 + 1;
      *(_QWORD *)(v84 + 32) = v83;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v84 + 32), v83, v74, v75, v76, v77, v78, v79);
    }
  }
  if ( *(_DWORD *)(v40 + 24) <= 1u )
    goto LABEL_99;
  if ( *(_BYTE *)(v40 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11854/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v91 = *(_QWORD *)(v3 + 16);
    v92 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v3 + 28);
    if ( v91 )
    {
      v93 = *(int *)(v3 + 24);
      v94 = Filter_44656352;
      if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v3,
          (Il2CppObject *)Filter_44656352,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v95 = v91 + 8 * v93;
        *(_DWORD *)(v3 + 24) = v93 + 1;
        *(_QWORD *)(v95 + 32) = v94;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v95 + 32), v94, v85, v86, v87, v88, v89, v90);
      }
      goto LABEL_82;
    }
LABEL_100:
    sub_1C942F0(Filter_44656352, v7);
  }
LABEL_82:
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_99;
  if ( !*(_BYTE *)(v40 + 32) )
    goto LABEL_91;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v51 = &StringLiteral_11850/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
LABEL_87:
  Filter_44656352 = (__int64)LocalizationManager__Get((System_String_o *)*v51, 0);
  v102 = *(_QWORD *)(v3 + 16);
  v103 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v3 + 28);
  if ( !v102 )
    goto LABEL_100;
  v104 = *(int *)(v3 + 24);
  v105 = Filter_44656352;
  if ( (unsigned int)v104 >= *(_DWORD *)(v102 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v3,
      (Il2CppObject *)Filter_44656352,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = v102 + 8 * v104;
    *(_DWORD *)(v3 + 24) = v104 + 1;
    *(_QWORD *)(v106 + 32) = v105;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v106 + 32), v105, v96, v97, v98, v99, v100, v101);
  }
LABEL_91:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_44656352 = (__int64)System_String__Join_64460336(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v3,
                               0);
  if ( !detailRarityLabel )
    goto LABEL_100;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_44656352, 0);
  autoOrganizationMode = waveBattleAutoOrganizationInfo->fields.autoOrganizationMode;
  detailModeLabel = this->fields.detailModeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v110 = (System_String_o **)(autoOrganizationMode == 1 ? &StringLiteral_15544/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/ : &StringLiteral_15545/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/);
  Filter_44656352 = (__int64)LocalizationManager__Get(*v110, 0);
  if ( !detailModeLabel )
    goto LABEL_100;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_44656352, 0);
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

  if ( (byte_4D28468 & 1) == 0 )
  {
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4D28468 = 1;
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
    v9 = sub_1CEFE6C(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C9468C(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D28471 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3073/*"BaseWindow/CancelButton"*/);
    byte_4D28471 = 1;
  }
  return (System_String_o *)StringLiteral_3073/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4D28469 & 1) == 0 )
  {
    sub_1C94098(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_4D28469 = 1;
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
    v9 = sub_1CEFE6C(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C9468C(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC30D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC308C;
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
  if ( (byte_4D28473 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D28473 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  AutoOrganizationManager_c *v13; // x0

  v4 = this;
  if ( (byte_4D28474 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AutoOrganizationManager_TypeInfo);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)sub_1C94098(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__);
    byte_4D28474 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !settingDialog )
    goto LABEL_17;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_35309312(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4D28366 )
    {
      sub_1C94098(&AutoOrganizationManager_TypeInfo);
      byte_4D28366 = 1;
    }
    v13 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v13 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *)v13->static_fields->waveBattleAutoOrganizationInfo;
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
    sub_1C942F0(this, isDecide);
  }
}


void WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4D28475 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28475 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(go, 0);
}