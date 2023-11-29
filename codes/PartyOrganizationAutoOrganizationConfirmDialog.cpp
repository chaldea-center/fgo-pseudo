void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FDDDB & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FDDDB = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Awake(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FDDD5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v6);
    byte_40FDDD5 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Init(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *detailTitle; // x0
  UILabel_o *detailLeft; // x0
  UILabel_o *detailCenter; // x0
  UILabel_o *detailRight; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *settingLabel; // x0
  UILabel_o *execLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FDDD3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FDDD3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  detailTitle = this->fields.detailTitle;
  if ( !detailTitle )
    goto LABEL_14;
  UILabel__set_text(detailTitle, (System_String_o *)StringLiteral_1, 0LL);
  detailLeft = this->fields.detailLeft;
  if ( !detailLeft )
    goto LABEL_14;
  UILabel__set_text(detailLeft, (System_String_o *)StringLiteral_1, 0LL);
  detailCenter = this->fields.detailCenter;
  if ( !detailCenter )
    goto LABEL_14;
  UILabel__set_text(detailCenter, (System_String_o *)StringLiteral_1, 0LL);
  detailRight = this->fields.detailRight;
  if ( !detailRight )
    goto LABEL_14;
  UILabel__set_text(detailRight, (System_String_o *)StringLiteral_1, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL),
        (settingLabel = this->fields.settingLabel) == 0LL)
    || (UILabel__set_text(settingLabel, (System_String_o *)StringLiteral_1, 0LL),
        (execLabel = this->fields.execLabel) == 0LL)
    || (UILabel__set_text(execLabel, (System_String_o *)StringLiteral_1, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_40FDDD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_40FDDD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_40FDDD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_40FDDD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
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
  __int64 v13; // x20
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
  PartyOrganizationAutoOrganizationSettingDialog_o *v46; // x21
  AutoOrganizationManager_c *v47; // x0
  int32_t eventId; // w19
  ListViewSort_o *autoOrganizationInfo; // x22
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v50; // x23
  const MethodInfo *v51; // x4

  if ( (byte_40FDDD7 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v10);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0__OnClickSetting_b__0__, v11);
    sub_B16FFC(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0_TypeInfo, v12);
    byte_40FDDD7 = 1;
  }
  v13 = sub_B170CC(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0_TypeInfo, method, v2, v3, v4);
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0___ctor(
    (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_24;
  *(_QWORD *)(v13 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.state == 2 )
  {
    v20 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v20 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
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
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v13 + 16) = Component_srcLineSprite;
        sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), Component_srcLineSprite, v35, v36, v37, v38, v39, v40);
        v41 = *(_QWORD *)(v13 + 16);
        if ( v41 )
        {
          *(_DWORD *)(v41 + 376) = 0;
          BaseDialog__Init((BaseDialog_o *)v41, 0LL);
          v46 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v13 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_40F778C )
          {
            sub_B16FFC(&AutoOrganizationManager_TypeInfo, v42);
            byte_40F778C = 1;
          }
          v47 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v47 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          autoOrganizationInfo = v47->static_fields->autoOrganizationInfo;
          v50 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B170CC(
                                                                                   PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                                                   v42,
                                                                                   v43,
                                                                                   v44,
                                                                                   v45);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v50,
            (Il2CppObject *)v13,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0__OnClickSetting_b__0__,
            0LL);
          if ( v46 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v46, autoOrganizationInfo, eventId, v50, v51);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v25; // x0
  UILabel_o *messageLabel; // x21
  System_String_o *v27; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v29; // x0
  UILabel_o *settingLabel; // x21
  System_String_o *v31; // x0
  UILabel_o *execLabel; // x21
  System_String_o *v33; // x0
  UILabel_o *detailTitle; // x21
  System_String_o *v35; // x0
  UILabel_o *detailLeft; // x21
  System_String_o *v37; // x0
  UILabel_o *detailCenter; // x21
  System_String_o *v39; // x0
  __int64 v40; // x1
  AutoOrganizationManager_c *v41; // x0
  ListViewSort_o *autoOrganizationInfo; // x0
  const MethodInfo *v43; // x1
  System_String_o *String_34837456; // x21
  __int64 v45; // x2
  System_String_array *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x8
  System_String_array *v49; // x21
  unsigned __int64 v50; // x24
  AutoOrganizationManager_c *v51; // x0
  ListViewSort_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x20

  if ( (byte_40FDDD4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v11);
    sub_B16FFC(&char___TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v14);
    sub_B16FFC(&StringLiteral_1765, v15);
    sub_B16FFC(&StringLiteral_1757, v16);
    sub_B16FFC(&StringLiteral_1764, v17);
    sub_B16FFC(&StringLiteral_1759, v18);
    sub_B16FFC(&StringLiteral_1762, v19);
    sub_B16FFC(&StringLiteral_1766, v20);
    sub_B16FFC(&StringLiteral_2200, v21);
    sub_B16FFC(&StringLiteral_1758, v22);
    sub_B16FFC(&StringLiteral_1763, v23);
    byte_40FDDD4 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)func,
    (System_String_array **)func,
    (System_String_array **)method,
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
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1766, 0LL);
  if ( !titleLabel )
    goto LABEL_46;
  UILabel__set_text(titleLabel, v25, 0LL);
  messageLabel = this->fields.messageLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_1764, 0LL);
  if ( !messageLabel )
    goto LABEL_46;
  UILabel__set_text(messageLabel, v27, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_1757, 0LL);
  if ( !cancelLabel )
    goto LABEL_46;
  UILabel__set_text(cancelLabel, v29, 0LL);
  settingLabel = this->fields.settingLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_1765, 0LL);
  if ( !settingLabel )
    goto LABEL_46;
  UILabel__set_text(settingLabel, v31, 0LL);
  execLabel = this->fields.execLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_1758, 0LL);
  if ( !execLabel )
    goto LABEL_46;
  UILabel__set_text(execLabel, v33, 0LL);
  detailTitle = this->fields.detailTitle;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1763, 0LL);
  if ( !detailTitle )
    goto LABEL_46;
  UILabel__set_text(detailTitle, v35, 0LL);
  detailLeft = this->fields.detailLeft;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_1762, 0LL);
  if ( !detailLeft )
    goto LABEL_46;
  UILabel__set_text(detailLeft, v37, 0LL);
  detailCenter = this->fields.detailCenter;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_1759, 0LL);
  if ( !detailCenter )
    goto LABEL_46;
  UILabel__set_text(detailCenter, v39, 0LL);
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_40F778C )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v40);
    byte_40F778C = 1;
  }
  v41 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v41 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v41->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_46;
  ListViewSort__Load(autoOrganizationInfo, 0LL);
  if ( eventId >= 1 )
  {
    String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456((System_String_o *)StringLiteral_2200, 0LL);
    if ( !System_String__IsNullOrEmpty(String_34837456, 0LL) )
    {
      if ( !String_34837456 )
        goto LABEL_46;
      if ( String_34837456->fields.m_stringLength >= 1 )
      {
        v46 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v45);
        if ( !v46 )
          goto LABEL_46;
        v43 = (const MethodInfo *)v46;
        if ( !v46->max_length )
          goto LABEL_47;
        LOWORD(v46->m_Items[0]) = 44;
        v46 = System_String__Split(String_34837456, (System_Char_array *)v46, 0LL);
        if ( !v46 )
          goto LABEL_46;
        v48 = *(_QWORD *)&v46->max_length;
        v49 = v46;
        if ( (int)v48 >= 1 )
        {
          v50 = 0LL;
          while ( v50 < (unsigned int)v48 )
          {
            v46 = (System_String_array *)System_Int32__Parse(v49->m_Items[v50], 0LL);
            if ( (_DWORD)v46 == eventId )
              goto LABEL_45;
            LODWORD(v48) = v49->max_length;
            if ( (__int64)++v50 >= (int)v48 )
              goto LABEL_35;
          }
LABEL_47:
          sub_B17100(v46, v43, v47);
          sub_B170A0();
        }
      }
    }
LABEL_35:
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_40F778C )
    {
      sub_B16FFC(&AutoOrganizationManager_TypeInfo, v43);
      byte_40F778C = 1;
    }
    v51 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v51 = AutoOrganizationManager_TypeInfo;
    }
    v52 = v51->static_fields->autoOrganizationInfo;
    if ( v52 )
    {
      ListViewSort__SetFilter(v52, 41, 1, 0LL);
      goto LABEL_45;
    }
LABEL_46:
    sub_B170D4();
  }
LABEL_45:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v43);
  this->fields.state = 1;
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  unsigned __int64 v23; // x21
  AutoOrganizationManager_c *v24; // x0
  ListViewSort_o *autoOrganizationInfo; // x0
  __int64 Filter_30230224; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  bool v30; // cf
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  _BOOL4 v32; // w22
  _BOOL4 v33; // w23
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *detailRight; // x22
  System_String_o *v37; // x0
  struct UILabel_o *v38; // x22
  System_String_o *v39; // x0
  __int64 v40; // x2
  __int64 v41; // x22
  unsigned __int64 v42; // x9
  int v43; // w11
  unsigned __int64 v44; // x8
  int v45; // w13
  unsigned __int64 v46; // x10
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  struct UILabel_o *v52; // x22
  System_String_o *mText; // x23
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  struct UILabel_o *v56; // x22
  System_String_o *v57; // x0
  __int64 v58; // x2
  unsigned __int64 v59; // x9
  int v60; // w8
  __int64 v61; // x11
  struct UILabel_o *v62; // x19
  int v63; // w22
  System_String_o *v64; // x20
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  int v69; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FDDD9 & 1) == 0 )
  {
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, method);
    sub_B16FFC(&bool___TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_26, v11);
    sub_B16FFC(&StringLiteral_80, v12);
    sub_B16FFC(&StringLiteral_11841, v13);
    sub_B16FFC(&StringLiteral_1760, v14);
    sub_B16FFC(&StringLiteral_11840, v15);
    sub_B16FFC(&StringLiteral_12004, v16);
    sub_B16FFC(&StringLiteral_11839, v17);
    sub_B16FFC(&StringLiteral_11837, v18);
    sub_B16FFC(&StringLiteral_1761, v19);
    sub_B16FFC(&StringLiteral_11838, v20);
    byte_40FDDD9 = 1;
  }
  v22 = sub_B17014(bool___TypeInfo, 13LL, v2);
  v23 = 0LL;
  do
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_40F778C )
    {
      sub_B16FFC(&AutoOrganizationManager_TypeInfo, v21);
      byte_40F778C = 1;
    }
    v24 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v24 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = v24->static_fields->autoOrganizationInfo;
    if ( !autoOrganizationInfo )
      goto LABEL_91;
    Filter_30230224 = ListViewSort__GetFilter_30230224(autoOrganizationInfo, v23, 0LL);
    if ( !v22 )
      goto LABEL_91;
    if ( v23 >= *(unsigned int *)(v22 + 24) )
      goto LABEL_90;
    v30 = v23 >= 0xC;
    *(_BYTE *)(v22 + 32 + v23++) = Filter_30230224 & 1;
  }
  while ( !v30 );
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v21,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v22 + 24) < 2u )
  {
LABEL_90:
    sub_B17100(Filter_30230224, v21, v27);
    sub_B170A0();
  }
  v32 = *(_BYTE *)(v22 + 32) == 0;
  v33 = *(unsigned __int8 *)(v22 + 33) != 0;
  if ( *(_BYTE *)(v22 + 32) || !*(_BYTE *)(v22 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_1761, 0LL);
    if ( !v31 )
      goto LABEL_91;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1760, 0LL);
    if ( !v31 )
      goto LABEL_91;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  detailRight = this->fields.detailRight;
  v37 = System_String__Join_43799176(
          (System_String_o *)StringLiteral_80,
          (System_Collections_Generic_IEnumerable_string__o *)v31,
          0LL);
  if ( !detailRight )
    goto LABEL_91;
  UILabel__set_text(detailRight, v37, 0LL);
  v38 = this->fields.detailRight;
  if ( !v38 )
    goto LABEL_91;
  v39 = System_String__Concat_43743732(v38->fields.mText, (System_String_o *)StringLiteral_26, 0LL);
  UILabel__set_text(v38, v39, 0LL);
  if ( !v31 )
    goto LABEL_91;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_30230224 = sub_B17014(bool___TypeInfo, 5LL, v40);
  v41 = Filter_30230224;
  v42 = 0LL;
  LOBYTE(v43) = 1;
  do
  {
    if ( v42 + 2 >= *(unsigned int *)(v22 + 24) )
      goto LABEL_90;
    if ( !Filter_30230224 )
      goto LABEL_91;
    v44 = *(unsigned int *)(Filter_30230224 + 24);
    if ( v42 >= v44 )
      goto LABEL_90;
    v45 = *(unsigned __int8 *)(v22 + 34 + v42);
    *(_BYTE *)(Filter_30230224 + 32 + v42) = v45;
    v30 = v42++ >= 4;
    v43 = (unsigned __int8)v43 & (v45 == 0);
  }
  while ( !v30 );
  if ( v43 )
  {
    v46 = 0LL;
    while ( v46 < v44 )
    {
      v30 = v46 >= 4;
      *(_BYTE *)(Filter_30230224 + 32 + v46++) = 1;
      if ( v30 )
        goto LABEL_45;
    }
    goto LABEL_90;
  }
LABEL_45:
  if ( (unsigned int)v44 <= 4 )
    goto LABEL_90;
  if ( *(_BYTE *)(Filter_30230224 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11840, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v44 = *(_QWORD *)(v41 + 24);
    if ( (unsigned int)v44 <= 3 )
      goto LABEL_90;
  }
  if ( *(_BYTE *)(v41 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_11839, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v44 = *(_QWORD *)(v41 + 24);
    if ( (unsigned int)v44 <= 2 )
      goto LABEL_90;
  }
  if ( *(_BYTE *)(v41 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11838, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v44 = *(_QWORD *)(v41 + 24);
    if ( (unsigned int)v44 <= 1 )
      goto LABEL_90;
  }
  if ( *(_BYTE *)(v41 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11841, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    v44 = *(_QWORD *)(v41 + 24);
  }
  if ( !(_DWORD)v44 )
    goto LABEL_90;
  if ( *(_BYTE *)(v41 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11837, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  v52 = this->fields.detailRight;
  if ( !v52 )
    goto LABEL_91;
  mText = v52->fields.mText;
  v54 = System_String__Join_43799176(
          (System_String_o *)StringLiteral_80,
          (System_Collections_Generic_IEnumerable_string__o *)v31,
          0LL);
  v55 = System_String__Concat_43743732(mText, v54, 0LL);
  UILabel__set_text(v52, v55, 0LL);
  v56 = this->fields.detailRight;
  if ( !v56 )
    goto LABEL_91;
  v57 = System_String__Concat_43743732(v56->fields.mText, (System_String_o *)StringLiteral_26, 0LL);
  UILabel__set_text(v56, v57, 0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_30230224 = sub_B17014(bool___TypeInfo, 6LL, v58);
  v59 = 0LL;
  v60 = 0;
  v61 = v22 + 39;
  do
  {
    if ( v59 + 7 >= *(unsigned int *)(v22 + 24) )
      goto LABEL_90;
    if ( !Filter_30230224 )
      goto LABEL_91;
    if ( v59 >= *(unsigned int *)(Filter_30230224 + 24) )
      goto LABEL_90;
    if ( *(_BYTE *)(v61 + v59) )
      v60 = v59 + 1;
    v30 = v59 >= 5;
    *(_BYTE *)(Filter_30230224 + 32 + v59) = *(_BYTE *)(v61 + v59);
    ++v59;
  }
  while ( !v30 );
  v62 = this->fields.detailRight;
  v63 = v60 ? v60 : 6;
  if ( !v62 )
LABEL_91:
    sub_B170D4();
  v64 = v62->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12004, 0LL);
  v69 = v63;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  v67 = System_String__Format(v65, v66, 0LL);
  v68 = System_String__Concat_43743732(v64, v67, 0LL);
  UILabel__set_text(v62, v68, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FDDD1 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_40FDDD1 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FDDDA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2729, method);
    byte_40FDDDA = 1;
  }
  return (System_String_o *)StringLiteral_2729;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FDDD2 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_40FDDD2 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_40F836D & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F836D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **v7; // x25
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
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v18; // x8
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
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **)(v3 + 32);
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


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  AutoOrganizationManager_c *v18; // x0
  ListViewSort_o *autoOrganizationInfo; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_o *_4__this; // x0

  if ( (byte_40F836B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&AutoOrganizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0__OnClickSetting_b__1__, v8);
    byte_40F836B = 1;
  }
  _9__1 = this->fields.__9__1;
  settingDialog = this->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0__OnClickSetting_b__1__,
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
  PartyOrganizationAutoOrganizationSettingDialog__Close_32504764(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_40F778C )
    {
      sub_B16FFC(&AutoOrganizationManager_TypeInfo, v17);
      byte_40F778C = 1;
    }
    v18 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v18 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = v18->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__Save(autoOrganizationInfo, 0LL);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(_4__this, 0LL);
        return;
      }
    }
LABEL_19:
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_40F836C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F836C = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(go, 0LL);
}