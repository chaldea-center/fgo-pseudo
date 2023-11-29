void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6738 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F6738 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F6732 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v6);
    byte_40F6732 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
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
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *detailTitleLabel; // x0
  UILabel_o *detailKindLabel; // x0
  UILabel_o *detailRarityLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *settingLabel; // x0
  UILabel_o *execLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F6730 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F6730 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  if ( !detailTitleLabel )
    goto LABEL_13;
  UILabel__set_text(detailTitleLabel, (System_String_o *)StringLiteral_1, 0LL);
  detailKindLabel = this->fields.detailKindLabel;
  if ( !detailKindLabel )
    goto LABEL_13;
  UILabel__set_text(detailKindLabel, (System_String_o *)StringLiteral_1, 0LL);
  detailRarityLabel = this->fields.detailRarityLabel;
  if ( !detailRarityLabel )
    goto LABEL_13;
  UILabel__set_text(detailRarityLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL),
        (settingLabel = this->fields.settingLabel) == 0LL)
    || (UILabel__set_text(settingLabel, (System_String_o *)StringLiteral_1, 0LL),
        (execLabel = this->fields.execLabel) == 0LL)
    || (UILabel__set_text(execLabel, (System_String_o *)StringLiteral_1, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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

  if ( (byte_40F6733 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_40F6733 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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

  if ( (byte_40F6735 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_40F6735 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct UnityEngine_GameObject_o *settingDialogPrefab; // x21
  System_Int32_array **v23; // x0
  UnityEngine_GameObject_o **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v46; // x20
  AutoOrganizationManager_c *v47; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v49; // x22
  const MethodInfo *v50; // x3

  if ( (byte_40F6734 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, method);
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(
      &Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___,
      v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0__OnClickSetting_b__0__,
      v10);
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0_TypeInfo, v11);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v12);
    byte_40F6734 = 1;
  }
  v13 = sub_B170CC(
          WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0_TypeInfo,
          method,
          v2,
          v3,
          v4);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0___ctor(
    (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.state == 2 )
  {
    v20 = Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v20 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v21 = (System_Reflection_MethodBase_o *)sub_B16FE0(v20, v20[3]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
    settingDialogPrefab = this->fields.settingDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)settingDialogPrefab,
                                   (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v13 + 24) = v23;
    v24 = (UnityEngine_GameObject_o **)(v13 + 24);
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), v23, v25, v26, v27, v28, v29, v30);
    v31 = *(UnityEngine_GameObject_o **)(v13 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v31, parent, 0LL);
      if ( *v24 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           *v24,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattlePartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v13 + 16) = Component_srcLineSprite;
        sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), Component_srcLineSprite, v35, v36, v37, v38, v39, v40);
        v41 = *(_QWORD *)(v13 + 16);
        if ( v41 )
        {
          *(_DWORD *)(v41 + 272) = 0;
          BaseDialog__Init((BaseDialog_o *)v41, 0LL);
          v46 = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)(v13 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_40F6898 )
          {
            sub_B16FFC(&AutoOrganizationManager_TypeInfo, v42);
            byte_40F6898 = 1;
          }
          v47 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v47 = AutoOrganizationManager_TypeInfo;
          }
          waveBattleAutoOrganizationInfo = v47->static_fields->waveBattleAutoOrganizationInfo;
          v49 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B170CC(
                                                                                             WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                                                             v42,
                                                                                             v43,
                                                                                             v44,
                                                                                             v45);
          WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v49,
            (Il2CppObject *)v13,
            Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0__OnClickSetting_b__0__,
            0LL);
          if ( v46 )
          {
            WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
              v46,
              waveBattleAutoOrganizationInfo,
              v49,
              v50);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B170D4();
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
  System_String_o *v20; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v22; // x0
  UILabel_o *detailTitleLabel; // x20
  System_String_o *v24; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v26; // x0
  UILabel_o *settingLabel; // x20
  System_String_o *v28; // x0
  UILabel_o *execLabel; // x20
  System_String_o *v30; // x0
  __int64 v31; // x1
  AutoOrganizationManager_c *v32; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x0
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x20

  if ( (byte_40F6731 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, func);
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v12);
    sub_B16FFC(&StringLiteral_1765, v13);
    sub_B16FFC(&StringLiteral_1757, v14);
    sub_B16FFC(&StringLiteral_1766, v15);
    sub_B16FFC(&StringLiteral_15280, v16);
    sub_B16FFC(&StringLiteral_1758, v17);
    sub_B16FFC(&StringLiteral_1763, v18);
    byte_40F6731 = 1;
  }
  this->fields.closeFunc = func;
  sub_B16F98(
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
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1766, 0LL);
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, v20, 0LL);
  messageLabel = this->fields.messageLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15280, 0LL);
  if ( !messageLabel )
    goto LABEL_22;
  UILabel__set_text(messageLabel, v22, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1763, 0LL);
  if ( !detailTitleLabel )
    goto LABEL_22;
  UILabel__set_text(detailTitleLabel, v24, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1757, 0LL);
  if ( !cancelLabel )
    goto LABEL_22;
  UILabel__set_text(cancelLabel, v26, 0LL);
  settingLabel = this->fields.settingLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_1765, 0LL);
  if ( !settingLabel )
    goto LABEL_22;
  UILabel__set_text(settingLabel, v28, 0LL);
  execLabel = this->fields.execLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1758, 0LL);
  if ( !execLabel )
    goto LABEL_22;
  UILabel__set_text(execLabel, v30, 0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_40F6898 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v31);
    byte_40F6898 = 1;
  }
  v32 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v32 = AutoOrganizationManager_TypeInfo;
  }
  waveBattleAutoOrganizationInfo = v32->static_fields->waveBattleAutoOrganizationInfo;
  if ( !waveBattleAutoOrganizationInfo )
LABEL_22:
    sub_B170D4();
  ListViewSort__Load(waveBattleAutoOrganizationInfo, 0LL);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v34);
  this->fields.state = 1;
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_EndOpen__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x21
  unsigned __int64 v25; // x22
  AutoOrganizationManager_c *v26; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x0
  __int64 Filter_30230284; // x0
  __int64 v29; // x2
  unsigned __int64 v30; // x8
  bool v31; // cf
  _BOOL4 v32; // w22
  _BOOL4 v33; // w23
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *detailKindLabel; // x22
  System_String_o *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x22
  unsigned __int64 v40; // x10
  int v41; // w11
  int v42; // w13
  unsigned __int64 v43; // x8
  int v44; // w14
  bool v45; // zf
  _BOOL4 v46; // w14
  int v47; // w15
  __int64 *v48; // x8
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  UILabel_o *detailRarityLabel; // x19
  System_String_o *v55; // x0

  if ( (byte_40F6736 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, method);
    sub_B16FFC(&bool___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_80, v12);
    sub_B16FFC(&StringLiteral_11841, v13);
    sub_B16FFC(&StringLiteral_15278, v14);
    sub_B16FFC(&StringLiteral_11840, v15);
    sub_B16FFC(&StringLiteral_11839, v16);
    sub_B16FFC(&StringLiteral_11837, v17);
    sub_B16FFC(&StringLiteral_15279, v18);
    sub_B16FFC(&StringLiteral_15281, v19);
    sub_B16FFC(&StringLiteral_11838, v20);
    byte_40F6736 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v24 = sub_B17014(bool___TypeInfo, 7LL, v22);
  v25 = 0LL;
  do
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_40F6898 )
    {
      sub_B16FFC(&AutoOrganizationManager_TypeInfo, v23);
      byte_40F6898 = 1;
    }
    v26 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v26 = AutoOrganizationManager_TypeInfo;
    }
    waveBattleAutoOrganizationInfo = v26->static_fields->waveBattleAutoOrganizationInfo;
    if ( !waveBattleAutoOrganizationInfo )
      goto LABEL_77;
    Filter_30230284 = ListViewSort__GetFilter_30230284(waveBattleAutoOrganizationInfo, v25, 0LL);
    if ( !v24 )
      goto LABEL_77;
    v30 = *(unsigned int *)(v24 + 24);
    if ( v25 >= v30 )
      goto LABEL_78;
    v31 = v25 >= 6;
    *(_BYTE *)(v24 + 32 + v25++) = Filter_30230284 & 1;
  }
  while ( !v31 );
  if ( (unsigned int)v30 < 2 )
    goto LABEL_78;
  v32 = *(_BYTE *)(v24 + 32) == 0;
  v33 = *(unsigned __int8 *)(v24 + 33) != 0;
  if ( *(_BYTE *)(v24 + 32) || !*(_BYTE *)(v24 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_15279, 0LL);
    if ( !v21 )
      goto LABEL_77;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v21,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v33 || v32 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_15278, 0LL);
    if ( v21 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      goto LABEL_31;
    }
LABEL_77:
    sub_B170D4();
  }
LABEL_31:
  detailKindLabel = this->fields.detailKindLabel;
  v37 = System_String__Join_43799176(
          (System_String_o *)StringLiteral_80,
          (System_Collections_Generic_IEnumerable_string__o *)v21,
          0LL);
  if ( !detailKindLabel )
    goto LABEL_77;
  UILabel__set_text(detailKindLabel, v37, 0LL);
  if ( !v21 )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_30230284 = sub_B17014(bool___TypeInfo, 5LL, v38);
  v39 = Filter_30230284;
  v40 = 0LL;
  v41 = 1;
  v42 = 1;
  do
  {
    if ( v40 + 2 >= *(unsigned int *)(v24 + 24) )
      goto LABEL_78;
    if ( !Filter_30230284 )
      goto LABEL_77;
    v43 = *(unsigned int *)(Filter_30230284 + 24);
    if ( v40 >= v43 )
      goto LABEL_78;
    v44 = *(unsigned __int8 *)(v24 + 34 + v40);
    v45 = v44 == 0;
    *(_BYTE *)(Filter_30230284 + 32 + v40) = v44;
    v46 = v44 == 0;
    v47 = !v45;
    v31 = v40++ >= 4;
    v42 &= v47;
    v41 &= v46;
  }
  while ( !v31 );
  if ( (v42 | v41) == 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = &StringLiteral_15281;
    goto LABEL_74;
  }
  if ( (unsigned int)v43 <= 4 )
    goto LABEL_78;
  if ( *(_BYTE *)(Filter_30230284 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11840, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v21,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v43 = *(_QWORD *)(v39 + 24);
    if ( (unsigned int)v43 <= 3 )
      goto LABEL_78;
  }
  if ( *(_BYTE *)(v39 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11839, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v21,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v43 = *(_QWORD *)(v39 + 24);
    if ( (unsigned int)v43 <= 2 )
      goto LABEL_78;
  }
  if ( *(_BYTE *)(v39 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11838, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v21,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v43 = *(_QWORD *)(v39 + 24);
    if ( (unsigned int)v43 <= 1 )
      goto LABEL_78;
  }
  if ( *(_BYTE *)(v39 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11841, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v21,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v43 = *(_QWORD *)(v39 + 24);
  }
  if ( !(_DWORD)v43 )
  {
LABEL_78:
    sub_B17100(Filter_30230284, v23, v29);
    sub_B170A0();
  }
  if ( !*(_BYTE *)(v39 + 32) )
    goto LABEL_75;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = &StringLiteral_11837;
LABEL_74:
  v53 = LocalizationManager__Get((System_String_o *)*v48, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v21,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_75:
  detailRarityLabel = this->fields.detailRarityLabel;
  v55 = System_String__Join_43799176(
          (System_String_o *)StringLiteral_80,
          (System_Collections_Generic_IEnumerable_string__o *)v21,
          0LL);
  if ( !detailRarityLabel )
    goto LABEL_77;
  UILabel__set_text(detailRarityLabel, v55, 0LL);
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

  if ( (byte_40F672E & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_40F672E = 1;
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
    v9 = sub_B0BA14(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_B173C8(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6737 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2729, method);
    byte_40F6737 = 1;
  }
  return (System_String_o *)StringLiteral_2729;
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

  if ( (byte_40F672F & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_40F672F = 1;
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
    v9 = sub_B0BA14(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *)sub_B173C8(v8);
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7899 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7899 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0___ctor(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0___OnClickSetting_b__0(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *_9__1; // x22
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  AutoOrganizationManager_c *v18; // x0
  ListViewSort_o *waveBattleAutoOrganizationInfo; // x0
  WaveBattlePartyOrganizationAutoOrganizationConfirmDialog_o *_4__this; // x0

  if ( (byte_40F7897 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v7);
    sub_B16FFC(
      &Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0__OnClickSetting_b__1__,
      v8);
    byte_40F7897 = 1;
  }
  _9__1 = this->fields.__9__1;
  settingDialog = this->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0__OnClickSetting_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !settingDialog )
    goto LABEL_19;
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_18338832(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_40F6898 )
    {
      sub_B16FFC(&AutoOrganizationManager_TypeInfo, v17);
      byte_40F6898 = 1;
    }
    v18 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v18 = AutoOrganizationManager_TypeInfo;
    }
    waveBattleAutoOrganizationInfo = v18->static_fields->waveBattleAutoOrganizationInfo;
    if ( waveBattleAutoOrganizationInfo )
    {
      ListViewSort__Save(waveBattleAutoOrganizationInfo, 0LL);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B170D4();
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0___OnClickSetting_b__1(
        WaveBattlePartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_40F7898 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7898 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(go, 0LL);
}