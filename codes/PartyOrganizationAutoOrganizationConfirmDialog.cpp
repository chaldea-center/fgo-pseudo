void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECEBC & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECEBC = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42ECEB6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v5, v6, v7);
    byte_42ECEB6 = 1;
  }
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42ECEB4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42ECEB4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailTitle;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailLeft;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailCenter;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.detailRight;
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
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_42ECEB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42ECEB7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x0

  if ( (byte_42ECEB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, (_DWORD)method, v2, v3);
    byte_42ECEB9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( closeFunc )
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(closeFunc, 1, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct UnityEngine_GameObject_o *settingDialogPrefab; // x21
  System_Int32_array **v38; // x0
  UnityEngine_Transform_o **v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_GameObject_o *v46; // x22
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *v58; // x21
  AutoOrganizationManager_c *v59; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v63; // x23
  const MethodInfo *v64; // x5

  if ( (byte_42ECEB8 & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v17, v18, v19);
    sub_B5D5C4(
      &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__0__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_TypeInfo, v23, v24, v25);
    byte_42ECEB8 = 1;
  }
  v26 = sub_B5D694(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___ctor(
    (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_24;
  *(_QWORD *)(v26 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 32), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  if ( this->fields.state == 2 )
  {
    v35 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v36 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v35, v35[3]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0LL);
    settingDialogPrefab = this->fields.settingDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v38 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)settingDialogPrefab,
                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v26 + 24) = v38;
    v39 = (UnityEngine_Transform_o **)(v26 + 24);
    sub_B5D560((BattleServantConfConponent_o *)(v26 + 24), v38, v40, v41, v42, v43, v44, v45);
    v46 = *(UnityEngine_GameObject_o **)(v26 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v46, parent, 0LL);
      transform = *v39;
      if ( *v39 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        *(_QWORD *)(v26 + 16) = Component_srcLineSprite;
        sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), Component_srcLineSprite, v49, v50, v51, v52, v53, v54);
        transform = *(UnityEngine_Transform_o **)(v26 + 16);
        if ( transform )
        {
          LODWORD(transform[17].klass) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          v58 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v26 + 16);
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          }
          if ( !byte_42E5921 )
          {
            sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v55, v56, v57);
            byte_42E5921 = 1;
          }
          v59 = AutoOrganizationManager_TypeInfo;
          if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v59 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v59->static_fields->autoOrganizationInfo;
          v63 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_B5D694(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v63,
            (Il2CppObject *)v26,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__0__,
            0LL);
          if ( v58 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v58, autoOrganizationInfo, eventId, preQuest, v63, v64);
            return;
          }
        }
      }
    }
LABEL_24:
    sub_B5D69C(transform, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  UILabel_o *titleLabel; // x22
  __int64 autoOrganizationInfo; // x0
  const MethodInfo *v62; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *buffExistsMessageLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *settingLabel; // x22
  UILabel_o *execLabel; // x22
  UILabel_o *detailTitle; // x22
  UILabel_o *detailLeft; // x22
  UILabel_o *detailCenter; // x22
  int v71; // w2
  __int64 v72; // x3
  struct UILabel_o *v73; // x21
  System_String_o *mText; // x22
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  struct UILabel_o *v77; // x21
  System_String_o *v78; // x22
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  AutoOrganizationManager_c *v81; // x0
  System_String_o *String_35648228; // x21
  int v83; // w2
  __int64 v84; // x3
  __int64 v85; // x8
  __int64 v86; // x21
  unsigned __int64 v87; // x24
  AutoOrganizationManager_c *v88; // x0
  System_Action_o *v89; // x20
  __int64 v90; // x0

  if ( (byte_42ECEB5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, preQuest, func);
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&char___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1793/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1783/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1780/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1792/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1791/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1782/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1786/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_1794/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_2235/*"AutoOrganizationBonusFilterEventId"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_1787/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_1781/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1790/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v57, v58, v59);
    byte_42ECEB5 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = preQuest;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)func,
    (System_String_array **)preQuest,
    (System_String_array **)func,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1794/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_54;
  UILabel__set_text(titleLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1791/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_54;
  UILabel__set_text(messageLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1792/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_54;
  UILabel__set_text(buffExistsMessageLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1780/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_54;
  UILabel__set_text(cancelLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1793/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_54;
  UILabel__set_text(settingLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1781/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_54;
  UILabel__set_text(execLabel, (System_String_o *)autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1790/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_54;
  UILabel__set_text(detailTitle, (System_String_o *)autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1786/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_54;
  UILabel__set_text(detailLeft, (System_String_o *)autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1782/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_54;
  UILabel__set_text(detailCenter, (System_String_o *)autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v73 = this->fields.detailLeft;
    if ( !v73 )
      goto LABEL_54;
    mText = v73->fields.mText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v75 = LocalizationManager__Get((System_String_o *)StringLiteral_1787/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v76 = System_String__Concat_44577788(mText, v75, 0LL);
    UILabel__set_text(v73, v76, 0LL);
    v77 = this->fields.detailCenter;
    if ( !v77 )
      goto LABEL_54;
    v78 = v77->fields.mText;
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_1783/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v80 = System_String__Concat_44577788(v78, v79, 0LL);
    UILabel__set_text(v77, v80, 0LL);
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_42E5921 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)v62, v71, v72);
    byte_42E5921 = 1;
  }
  v81 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v81 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (__int64)v81->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_54;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId >= 1 )
  {
    String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_2235/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
    autoOrganizationInfo = System_String__IsNullOrEmpty(String_35648228, 0LL);
    if ( (autoOrganizationInfo & 1) == 0 )
    {
      if ( !String_35648228 )
        goto LABEL_54;
      if ( String_35648228->fields.m_stringLength >= 1 )
      {
        autoOrganizationInfo = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !autoOrganizationInfo )
          goto LABEL_54;
        if ( !*(_DWORD *)(autoOrganizationInfo + 24) )
          goto LABEL_55;
        *(_WORD *)(autoOrganizationInfo + 32) = 44;
        autoOrganizationInfo = (__int64)System_String__Split(
                                          String_35648228,
                                          (System_Char_array *)autoOrganizationInfo,
                                          0LL);
        if ( !autoOrganizationInfo )
          goto LABEL_54;
        v85 = *(_QWORD *)(autoOrganizationInfo + 24);
        v86 = autoOrganizationInfo;
        if ( (int)v85 >= 1 )
        {
          v87 = 0LL;
          while ( v87 < (unsigned int)v85 )
          {
            autoOrganizationInfo = System_Int32__Parse(*(System_String_o **)(v86 + 32 + 8 * v87), 0LL);
            if ( (_DWORD)autoOrganizationInfo == eventId )
              goto LABEL_53;
            LODWORD(v85) = *(_DWORD *)(v86 + 24);
            if ( (__int64)++v87 >= (int)v85 )
              goto LABEL_43;
          }
LABEL_55:
          v90 = sub_B5D6C8(autoOrganizationInfo);
          sub_B5D668(v90, 0LL);
        }
      }
    }
LABEL_43:
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_42E5921 )
    {
      sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)v62, v83, v84);
      byte_42E5921 = 1;
    }
    v88 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v88 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (__int64)v88->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_53;
    }
LABEL_54:
    sub_B5D69C(autoOrganizationInfo, v62);
  }
LABEL_53:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v62);
  this->fields.state = 1;
  v89 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v89, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  AutoOrganizationManager_c *v62; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_34051196; // x0
  __int64 v65; // x1
  __int64 v66; // x21
  unsigned __int64 v67; // x22
  __int64 v68; // x23
  bool v69; // cf
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x22
  _BOOL4 v71; // w23
  _BOOL4 v72; // w24
  UILabel_o *detailRight; // x23
  struct UILabel_o *v74; // x23
  System_String_o *v75; // x0
  __int64 v76; // x23
  unsigned __int64 v77; // x9
  int v78; // w11
  unsigned __int64 v79; // x8
  int v80; // w13
  unsigned __int64 v81; // x10
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  struct UILabel_o *v87; // x23
  System_String_o *mText; // x24
  System_String_o *v89; // x0
  System_String_o *v90; // x0
  struct UILabel_o *v91; // x23
  System_String_o *v92; // x0
  unsigned __int64 v93; // x9
  int v94; // w8
  __int64 v95; // x11
  struct UILabel_o *v96; // x21
  int v97; // w25
  System_String_o *v98; // x22
  System_String_o *v99; // x23
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  int32_t autoOrganizationMode; // w9
  System_String_o *v104; // x20
  __int64 *v105; // x8
  System_String_o *v106; // x0
  struct UILabel_o *v107; // x19
  System_String_o *v108; // x0
  __int64 v109; // x0
  int v110; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42ECEBA & 1) == 0 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&bool___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1788/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1789/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1784/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_12202/*"SERVANT_UNIT"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1785/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v59, v60, v61);
    byte_42ECEBA = 1;
  }
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  }
  if ( !byte_42E5921 )
  {
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5921 = 1;
  }
  v62 = AutoOrganizationManager_TypeInfo;
  if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v62 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v62->static_fields->autoOrganizationInfo;
  Filter_34051196 = sub_B5D5DC(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_103;
  v66 = Filter_34051196;
  v67 = 0LL;
  v68 = Filter_34051196 + 32;
  do
  {
    Filter_34051196 = ListViewSort__GetFilter_34051196(autoOrganizationInfo, v67, 0LL);
    if ( !v66 )
      goto LABEL_103;
    if ( v67 >= *(unsigned int *)(v66 + 24) )
      goto LABEL_102;
    v69 = v67 >= 0xC;
    *(_BYTE *)(v68 + v67++) = Filter_34051196 & 1;
  }
  while ( !v69 );
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v66 + 24) < 2u )
  {
LABEL_102:
    v109 = sub_B5D6C8(Filter_34051196);
    sub_B5D668(v109, 0LL);
  }
  v71 = *(_BYTE *)(v66 + 32) == 0;
  v72 = *(unsigned __int8 *)(v66 + 33) != 0;
  if ( *(_BYTE *)(v66 + 32) || !*(_BYTE *)(v66 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_34051196 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1785/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v70 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_34051196,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( v72 || v71 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Filter_34051196 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_1784/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v70 )
      goto LABEL_103;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Filter_34051196,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
  detailRight = this->fields.detailRight;
  Filter_34051196 = (__int64)System_String__Join_44633232(
                               (System_String_o *)StringLiteral_81/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v70,
                               0LL);
  if ( !detailRight )
    goto LABEL_103;
  UILabel__set_text(detailRight, (System_String_o *)Filter_34051196, 0LL);
  v74 = this->fields.detailRight;
  if ( !v74 )
    goto LABEL_103;
  v75 = System_String__Concat_44577788(v74->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v74, v75, 0LL);
  if ( !v70 )
    goto LABEL_103;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v70,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_34051196 = sub_B5D5DC(bool___TypeInfo, 5LL);
  v76 = Filter_34051196;
  v77 = 0LL;
  LOBYTE(v78) = 1;
  do
  {
    if ( v77 + 2 >= *(unsigned int *)(v66 + 24) )
      goto LABEL_102;
    if ( !Filter_34051196 )
      goto LABEL_103;
    v79 = *(unsigned int *)(Filter_34051196 + 24);
    if ( v77 >= v79 )
      goto LABEL_102;
    v80 = *(unsigned __int8 *)(v66 + 34 + v77);
    *(_BYTE *)(Filter_34051196 + 32 + v77) = v80;
    v69 = v77++ >= 4;
    v78 = (unsigned __int8)v78 & (v80 == 0);
  }
  while ( !v69 );
  if ( v78 )
  {
    v81 = 0LL;
    while ( v81 < v79 )
    {
      v69 = v81 >= 4;
      *(_BYTE *)(Filter_34051196 + 32 + v81++) = 1;
      if ( v69 )
        goto LABEL_45;
    }
    goto LABEL_102;
  }
LABEL_45:
  if ( (unsigned int)v79 <= 4 )
    goto LABEL_102;
  if ( *(_BYTE *)(Filter_34051196 + 36) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12023/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v79 = *(_QWORD *)(v76 + 24);
    if ( (unsigned int)v79 <= 3 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v76 + 35) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v79 = *(_QWORD *)(v76 + 24);
    if ( (unsigned int)v79 <= 2 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v76 + 34) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v79 = *(_QWORD *)(v76 + 24);
    if ( (unsigned int)v79 <= 1 )
      goto LABEL_102;
  }
  if ( *(_BYTE *)(v76 + 33) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    v79 = *(_QWORD *)(v76 + 24);
  }
  if ( !(_DWORD)v79 )
    goto LABEL_102;
  if ( *(_BYTE *)(v76 + 32) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v70,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
  v87 = this->fields.detailRight;
  if ( !v87 )
    goto LABEL_103;
  mText = v87->fields.mText;
  v89 = System_String__Join_44633232(
          (System_String_o *)StringLiteral_81/*" "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v70,
          0LL);
  v90 = System_String__Concat_44577788(mText, v89, 0LL);
  UILabel__set_text(v87, v90, 0LL);
  v91 = this->fields.detailRight;
  if ( !v91 )
    goto LABEL_103;
  v92 = System_String__Concat_44577788(v91->fields.mText, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  UILabel__set_text(v91, v92, 0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v70,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  Filter_34051196 = sub_B5D5DC(bool___TypeInfo, 6LL);
  v93 = 0LL;
  v94 = 0;
  v95 = v66 + 39;
  do
  {
    if ( v93 + 7 >= *(unsigned int *)(v66 + 24) )
      goto LABEL_102;
    if ( !Filter_34051196 )
      goto LABEL_103;
    if ( v93 >= *(unsigned int *)(Filter_34051196 + 24) )
      goto LABEL_102;
    if ( *(_BYTE *)(v95 + v93) )
      v94 = v93 + 1;
    v69 = v93 >= 5;
    *(_BYTE *)(Filter_34051196 + 32 + v93) = *(_BYTE *)(v95 + v93);
    ++v93;
  }
  while ( !v69 );
  v96 = this->fields.detailRight;
  v97 = v94 ? v94 : 6;
  if ( !v96 )
LABEL_103:
    sub_B5D69C(Filter_34051196, v65);
  v98 = v96->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12202/*"SERVANT_UNIT"*/, 0LL);
  v110 = v97;
  v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
  v101 = System_String__Format(v99, v100, 0LL);
  v102 = System_String__Concat_44577788(v98, v101, 0LL);
  UILabel__set_text(v96, v102, 0LL);
  if ( this->fields.preQuest )
  {
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    v104 = (System_String_o *)StringLiteral_26/*"\n"*/;
    if ( autoOrganizationMode == 1 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v105 = &StringLiteral_1788/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v105 = &StringLiteral_1789/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    }
    v106 = LocalizationManager__Get((System_String_o *)*v105, 0LL);
    Filter_34051196 = (__int64)System_String__Concat_44577788(v104, v106, 0LL);
    v107 = this->fields.detailRight;
    if ( v107 )
    {
      v108 = System_String__Concat_44577788(v107->fields.mText, (System_String_o *)Filter_34051196, 0LL);
      UILabel__set_text(v107, v108, 0LL);
      return;
    }
    goto LABEL_103;
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v12; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ECEB2 & 1) == 0 )
  {
    sub_B5D5C4(
      &PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    byte_42ECEB2 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v7 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v9->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_closeFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v12, v13, v14);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECEBB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2795/*"BaseWindow/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42ECEBB = 1;
  }
  return (System_String_o *)StringLiteral_2795/*"BaseWindow/CancelButton"*/;
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42ECEB3 & 1) == 0 )
  {
    sub_B5D5C4(
      &PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
      (_DWORD)value,
      (_DWORD)method,
      v3);
    byte_42ECEB3 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v7 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v9->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_closeFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5A77 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5A77 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  int v14; // w2
  __int64 v15; // x3
  AutoOrganizationManager_c *v16; // x0

  v5 = this;
  if ( (byte_42E5A75 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&AutoOrganizationManager_TypeInfo, v6, v7, v8);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)sub_B5D5C4(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__1__,
                                                                                       v9,
                                                                                       v10,
                                                                                       v11);
    byte_42E5A75 = 1;
  }
  _9__1 = v5->fields.__9__1;
  settingDialog = v5->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0__OnClickSetting_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( !settingDialog )
    goto LABEL_19;
  PartyOrganizationAutoOrganizationSettingDialog__Close_33854400(settingDialog, _9__1, 0LL);
  if ( isDecide )
  {
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    }
    if ( !byte_42E5921 )
    {
      sub_B5D5C4(&AutoOrganizationManager_TypeInfo, isDecide, v14, v15);
      byte_42E5921 = 1;
    }
    v16 = AutoOrganizationManager_TypeInfo;
    if ( (BYTE3(AutoOrganizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v16 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v16->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *)v5->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_B5D69C(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *go; // x19

  if ( (byte_42E5A76 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5A76 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(go, 0LL);
}