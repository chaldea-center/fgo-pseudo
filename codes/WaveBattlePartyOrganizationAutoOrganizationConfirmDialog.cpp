void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41873D4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41873D4 = 1;
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_41873CE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v3);
    byte_41873CE = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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

  if ( (byte_41873CC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_41873CC = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailTitleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailKindLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailRarityLabel;
  if ( !titleLabel )
    goto LABEL_13;
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
LABEL_13:
    sub_B2C434(titleLabel, method);
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
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_41873CF & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_41873CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_41873D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_41873D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 1, 0LL);
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v40; // x20
  AutoOrganizationManager_c *v41; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v43; // x22
  const MethodInfo *v44; // x3

  if ( (byte_41873D0 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    sub_B2C35C(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___,
      v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0__OnClickSetting_b__0__,
      v7);
    sub_B2C35C(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_TypeInfo, v8);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v9);
    byte_41873D0 = 1;
  }
  v10 = sub_B2C42C(WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_TypeInfo);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0___ctor(
    (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v10 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  if ( this->fields.state == 2 )
  {
    v19 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B2C364(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
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
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v10 + 16) = Component_srcLineSprite;
        sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), Component_srcLineSprite, v33, v34, v35, v36, v37, v38);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          transform[12].fields.m_CachedPtr = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v40 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v10 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_4185068 )
          {
            sub_B2C35C(&AutoOrganizationManager_TypeInfo, v39);
            byte_4185068 = 1;
          }
          v41 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v41 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v41->static_fields->waveBattleAutoOrganizationInfo;
          v43 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B2C42C(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v43,
            (Il2CppObject *)v10,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0__OnClickSetting_b__0__,
            0LL);
          if ( v40 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v40,
              waveBattleAutoOrganizationInfo,
              v43,
              v44);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B2C434(transform, v12);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *waveBattleAutoOrganizationInfo; // x0
  __int64 v21; // x1
  UILabel_o *messageLabel; // x20
  UILabel_o *detailTitleLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *settingLabel; // x20
  UILabel_o *execLabel; // x20
  AutoOrganizationManager_c *v27; // x0
  const MethodInfo *v28; // x1
  System_Action_o *v29; // x20

  if ( (byte_41873CD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, func);
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v12);
    sub_B2C35C(&StringLiteral_1767/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v13);
    sub_B2C35C(&StringLiteral_1755/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_1768/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_15340/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_1756/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v17);
    sub_B2C35C(&StringLiteral_1765/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v18);
    byte_41873CD = 1;
  }
  this->fields.closeFunc = func;
  sub_B2C2F8(
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
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1768/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, waveBattleAutoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_15340/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_22;
  UILabel__set_text(messageLabel, waveBattleAutoOrganizationInfo, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1765/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_22;
  UILabel__set_text(detailTitleLabel, waveBattleAutoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1755/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_22;
  UILabel__set_text(cancelLabel, waveBattleAutoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1767/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_22;
  UILabel__set_text(settingLabel, waveBattleAutoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  waveBattleAutoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_1756/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_22;
  UILabel__set_text(execLabel, waveBattleAutoOrganizationInfo, 0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4185068 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v21);
    byte_4185068 = 1;
  }
  v27 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v27 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = (System_String_o *)v27->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_22:
    sub_B2C434(waveBattleAutoOrganizationInfo, v21);
  ListViewSort__Load((ListViewSort_o *)waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v28);
  this->fields.state = 1;
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  AutoOrganizationManager_c *v22; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  __int64 Filter_33936492; // x0
  __int64 v25; // x1
  __int64 v26; // x23
  unsigned __int64 v27; // x22
  __int64 v28; // x24
  unsigned __int64 v29; // x8
  bool v30; // cf
  _BOOL4 v31; // w22
  _BOOL4 v32; // w24
  UILabel_o *detailKindLabel; // x22
  __int64 v34; // x22
  unsigned __int64 v35; // x10
  int v36; // w11
  int v37; // w13
  unsigned __int64 v38; // x8
  int v39; // w14
  bool v40; // zf
  _BOOL4 v41; // w14
  int v42; // w15
  __int64 *v43; // x8
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *detailRarityLabel; // x22
  UILabel_o *detailModeLabel; // x19
  __int64 *v51; // x8
  __int64 v52; // x0

  if ( (byte_41873D2 & 1) == 0 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, method);
    sub_B2C35C(&bool___TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_80/*" "*/, v9);
    sub_B2C35C(&StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v10);
    sub_B2C35C(&StringLiteral_15338/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, v11);
    sub_B2C35C(&StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v12);
    sub_B2C35C(&StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v13);
    sub_B2C35C(&StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v14);
    sub_B2C35C(&StringLiteral_15342/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/, v15);
    sub_B2C35C(&StringLiteral_15341/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/, v16);
    sub_B2C35C(&StringLiteral_15339/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, v17);
    sub_B2C35C(&StringLiteral_15343/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/, v18);
    sub_B2C35C(&StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v19);
    byte_41873D2 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_4185068 )
  {
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v21);
    byte_4185068 = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v22->static_fields->waveBattleAutoOrganizationInfo;
  Filter_33936492 = sub_B2C374(bool___TypeInfo, 7LL);
  if ( !waveBattleAutoOrganizationInfo )
    goto LABEL_88;
  v26 = Filter_33936492;
  v27 = 0LL;
  v28 = Filter_33936492 + 32;
  do
  {
    Filter_33936492 = ListViewSort__GetFilter_33936492(waveBattleAutoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_88;
    v29 = *(unsigned int *)(v26 + 24);
    if ( v27 >= v29 )
      goto LABEL_87;
    v30 = v27 >= 6;
    *(_BYTE *)(v28 + v27++) = Filter_33936492 & 1;
  }
  while ( !v30 );
  if ( (unsigned int)v29 < 2 )
    goto LABEL_87;
  v31 = *(_BYTE *)(v26 + 32) == 0;
  v32 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_33936492 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15339/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_SERVANT"*/, 0LL);
    if ( !v20 )
      goto LABEL_88;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_33936492,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v32 || v31 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_33936492 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15338/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_KIND_EQUIP"*/, 0LL);
    if ( v20 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_33936492,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      goto LABEL_31;
    }
LABEL_88:
    sub_B2C434(Filter_33936492, v25);
  }
LABEL_31:
  detailKindLabel = this->fields.detailKindLabel;
  Filter_33936492 = (__int64)System_String__Join_44360976(
                               (System_String_o *)StringLiteral_80/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v20,
                               0LL);
  if ( !detailKindLabel )
    goto LABEL_88;
  UILabel__set_text(detailKindLabel, (System_String_o *)Filter_33936492, 0LL);
  if ( !v20 )
    goto LABEL_88;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v20,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_33936492 = sub_B2C374(bool___TypeInfo, 5LL);
  v34 = Filter_33936492;
  v35 = 0LL;
  v36 = 1;
  v37 = 1;
  do
  {
    if ( v35 + 2 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_87;
    if ( !Filter_33936492 )
      goto LABEL_88;
    v38 = *(unsigned int *)(Filter_33936492 + 24);
    if ( v35 >= v38 )
      goto LABEL_87;
    v39 = *(unsigned __int8 *)(v26 + 34 + v35);
    v40 = v39 == 0;
    *(_BYTE *)(Filter_33936492 + 32 + v35) = v39;
    v41 = v39 == 0;
    v42 = !v40;
    v30 = v35++ >= 4;
    v37 &= v42;
    v36 &= v41;
  }
  while ( !v30 );
  if ( (v37 | v36) == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_15343/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_RARITY_ALL"*/;
LABEL_74:
    v48 = LocalizationManager__Get((System_String_o *)*v43, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_75;
  }
  if ( (unsigned int)v38 <= 4 )
    goto LABEL_87;
  if ( *(_BYTE *)(Filter_33936492 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v38 = *(_QWORD *)(v34 + 24);
    if ( (unsigned int)v38 <= 3 )
      goto LABEL_87;
  }
  if ( *(_BYTE *)(v34 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v38 = *(_QWORD *)(v34 + 24);
    if ( (unsigned int)v38 <= 2 )
      goto LABEL_87;
  }
  if ( *(_BYTE *)(v34 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v38 = *(_QWORD *)(v34 + 24);
    if ( (unsigned int)v38 <= 1 )
      goto LABEL_87;
  }
  if ( *(_BYTE *)(v34 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v38 = *(_QWORD *)(v34 + 24);
  }
  if ( !(_DWORD)v38 )
  {
LABEL_87:
    v52 = sub_B2C460(Filter_33936492);
    sub_B2C400(v52, 0LL);
  }
  if ( *(_BYTE *)(v34 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v43 = &StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/;
    goto LABEL_74;
  }
LABEL_75:
  detailRarityLabel = this->fields.detailRarityLabel;
  Filter_33936492 = (__int64)System_String__Join_44360976(
                               (System_String_o *)StringLiteral_80/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v20,
                               0LL);
  if ( !detailRarityLabel )
    goto LABEL_88;
  UILabel__set_text(detailRarityLabel, (System_String_o *)Filter_33936492, 0LL);
  detailModeLabel = this->fields.detailModeLabel;
  if ( waveBattleAutoOrganizationInfo->fields.autoOrganizationMode == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = &StringLiteral_15341/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_ALL"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = &StringLiteral_15342/*"WAVE_BATTLE_AUTO_ORGANIZATION_CONFIRM_MODE_USE_ENEMY_CLASS_MAIN"*/;
  }
  Filter_33936492 = (__int64)LocalizationManager__Get((System_String_o *)*v51, 0LL);
  if ( !detailModeLabel )
    goto LABEL_88;
  UILabel__set_text(detailModeLabel, (System_String_o *)Filter_33936492, 0LL);
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

  if ( (byte_41873CA & 1) == 0 )
  {
    sub_B2C35C(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_41873CA = 1;
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
    v9 = sub_B20D74(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_B2C728(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41873D3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2741/*"BaseWindow/CancelButton"*/, method);
    byte_41873D3 = 1;
  }
  return (System_String_o *)StringLiteral_2741/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_41873CB & 1) == 0 )
  {
    sub_B2C35C(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_41873CB = 1;
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
    v9 = sub_B20D74(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_418555F & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_418555F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **v8; // x25
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
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v20; // x8
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
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **)(v4 + 32);
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0___OnClickSetting_b__0(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  AutoOrganizationManager_c *v9; // x0

  v4 = this;
  if ( (byte_418555D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&AutoOrganizationManager_TypeInfo, v5);
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *)sub_B2C35C(
                                                                                                 &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0__OnClickSetting_b__1__,
                                                                                                 v6);
    byte_418555D = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( !settingDialog )
    goto LABEL_19;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_24500176(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_4185068 )
    {
      sub_B2C35C(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4185068 = 1;
    }
    v9 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v9 = AutoOrganizationManager_TypeInfo;
    }
    this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *)v9->static_fields->waveBattleAutoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *)v4->fields.__4__this;
      if ( this )
      {
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_B2C434(this, isDecide);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_418555E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418555E = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(go, 0LL);
}