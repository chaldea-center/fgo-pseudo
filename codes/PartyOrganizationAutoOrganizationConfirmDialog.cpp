void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11EA8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11EA8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Awake(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        bool autoDestroy,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_4B11EA1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, autoDestroy, method);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v6, v7);
    byte_4B11EA1 = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, autoDestroy, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B11EA2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11EA2 = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  else
  {
    PartyOrganizationAutoOrganizationConfirmDialog__Init(this, method);
  }
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B11E9F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11E9F = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B11EA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method, v2);
    byte_4B11EA3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
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


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4B11EA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method, v2);
    byte_4B11EA5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
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


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
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
  Il2CppObject *v19; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  Il2CppObject *settingDialogPrefab; // x21
  Il2CppObject *v26; // x0
  UnityEngine_Transform_o **p_monitor; // x21
  UnityEngine_GameObject_o *monitor; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  PartyOrganizationAutoOrganizationSettingDialog_o *klass; // x21
  AutoOrganizationManager_c *v35; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v39; // x23
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x5

  if ( (byte_4B11EA4 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v13, v14);
    sub_1BCA7E0(
      &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo, v17, v18);
    byte_4B11EA4 = 1;
  }
  v19 = (Il2CppObject *)sub_1BCAA2C(
                          PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo,
                          method,
                          v2,
                          v3);
  System_Object___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_21;
  v19[2].klass = (Il2CppClass *)this;
  sub_1BCA784(&v19[2], this);
  if ( this->fields.state == 2 )
  {
    v22 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__Instantiate_object_(
            settingDialogPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v19[1].monitor = v26;
    p_monitor = (UnityEngine_Transform_o **)&v19[1].monitor;
    sub_1BCA784(&v19[1].monitor, v26);
    monitor = (UnityEngine_GameObject_o *)v19[1].monitor;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(monitor, parent, 0LL);
      transform = *p_monitor;
      if ( *p_monitor )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        v19[1].klass = (Il2CppClass *)Component_object;
        sub_1BCA784(&v19[1], Component_object);
        transform = (UnityEngine_Transform_o *)v19[1].klass;
        if ( transform )
        {
          LODWORD(transform[17].monitor) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          klass = (PartyOrganizationAutoOrganizationSettingDialog_o *)v19[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v31);
          if ( !byte_4B11EE0 )
          {
            sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v31, v32);
            byte_4B11EE0 = 1;
          }
          v35 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v31);
            v35 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v35->static_fields->autoOrganizationInfo;
          v39 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                                                   PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo,
                                                                                   v31,
                                                                                   v32,
                                                                                   v33);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v39,
            v19,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v40);
          if ( klass )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(
              klass,
              autoOrganizationInfo,
              eventId,
              preQuest,
              v39,
              v41);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(transform, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        bool preQuest,
        bool isExistAdjustBuff,
        bool isAutoOpen,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  bool v13; // w27
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
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  UILabel_o *titleLabel; // x24
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v55; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  __int64 v64; // x2
  struct UILabel_o *v65; // x23
  System_String_o *mText; // x24
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  struct UILabel_o *v69; // x23
  System_String_o *v70; // x24
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  UILabel_o *v73; // x22
  __int64 v74; // x1
  UILabel_o *v75; // x22
  __int64 *v76; // x8
  __int64 v77; // x1
  UILabel_o *v78; // x21
  AutoOrganizationManager_c *v79; // x0
  System_String_o *String_70112520; // x21
  __int64 v81; // x2
  System_String_c *klass; // x8
  System_String_o *v83; // x21
  unsigned __int64 v84; // x24
  AutoOrganizationManager_c *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Action_o *v89; // x20

  v13 = preQuest;
  if ( (byte_4B11EA0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, preQuest);
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v18, v19);
    sub_1BCA7E0(&StringLiteral_2188/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2190/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2173/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_2176/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_2172/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_2185/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_2184/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_2175/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_2179/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_2189/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_2186/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_2638/*"AutoOrganizationBonusFilterEventId"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_2180/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_2187/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_2183/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, v50, v51);
    byte_4B11EA0 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1BCA784(&this->fields.closeFunc, func);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2189/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2184/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2185/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2172/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2188/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0LL);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2183/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0LL);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2179/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0LL);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0LL);
  if ( !detailCenter )
    goto LABEL_60;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v65 = this->fields.detailLeft;
    if ( !v65 )
      goto LABEL_60;
    mText = v65->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2180/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0LL);
    v68 = System_String__Concat_62401220(mText, v67, 0LL);
    UILabel__set_text(v65, v68, 0LL);
    v69 = this->fields.detailCenter;
    if ( !v69 )
      goto LABEL_60;
    v70 = v69->fields.mText;
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0LL);
    v72 = System_String__Concat_62401220(v70, v71, 0LL);
    UILabel__set_text(v69, v72, 0LL);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v73 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2190/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0LL);
  if ( !v73 )
    goto LABEL_60;
  UILabel__set_text(v73, autoOrganizationInfo, 0LL);
  v75 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v76 = &StringLiteral_2186/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v76 = &StringLiteral_2187/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v76, 0LL);
  if ( !v75 )
    goto LABEL_60;
  UILabel__set_text(v75, autoOrganizationInfo, 0LL);
  v78 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2173/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0LL);
  if ( !v78 )
    goto LABEL_60;
  UILabel__set_text(v78, autoOrganizationInfo, 0LL);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v55);
  if ( !byte_4B11EE0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v55, v64);
    byte_4B11EE0 = 1;
  }
  v79 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v55);
    v79 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v79->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId < 1 )
    goto LABEL_59;
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520((System_String_o *)StringLiteral_2638/*"AutoOrganizationBonusFilterEventId"*/, 0LL);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_70112520, 0LL);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_70112520 )
    goto LABEL_60;
  if ( String_70112520->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v83 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v55);
    if ( !byte_4B11EE0 )
    {
      sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v55, v81);
      byte_4B11EE0 = 1;
    }
    v85 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v55);
      v85 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v85->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_1BCAA3C(autoOrganizationInfo, v55);
  }
  v84 = 0LL;
  while ( 1 )
  {
    if ( v84 >= (unsigned int)klass )
      sub_1BCAA44(autoOrganizationInfo, v55);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v83[1].monitor + v84), 0LL);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v83[1].klass;
    if ( (__int64)++v84 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v55);
  this->fields.state = 1;
  v89 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v86, v87, v88);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v89, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
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
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  AutoOrganizationManager_c *v42; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_41507520; // x0
  __int64 v45; // x1
  __int64 v46; // x21
  unsigned __int64 v47; // x22
  __int64 v48; // x25
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x22
  _BOOL4 v52; // w23
  _BOOL4 v53; // w27
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x1
  __int64 v58; // x0
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x1
  __int64 v63; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v65; // x23
  System_String_o *v66; // x0
  int32_t v67; // w2
  int v68; // w8
  unsigned int v69; // w9
  __int64 v70; // x23
  unsigned __int64 v71; // x8
  bool v72; // cf
  __int64 v73; // x9
  __int64 v74; // x13
  int v75; // w11
  unsigned __int64 v76; // x9
  int v77; // w14
  unsigned __int64 v78; // x8
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x1
  __int64 v88; // x0
  __int64 v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  __int64 v92; // x1
  __int64 v93; // x0
  __int64 v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  __int64 v97; // x1
  __int64 v98; // x0
  __int64 v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x1
  __int64 v103; // x0
  struct UILabel_o *v104; // x23
  System_String_o *mText; // x24
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  struct UILabel_o *v108; // x23
  System_String_o *v109; // x0
  int32_t v110; // w2
  int v111; // w8
  unsigned int v112; // w11
  unsigned __int64 v113; // x9
  int v114; // w8
  __int64 v115; // x11
  int v116; // w13
  struct UILabel_o *v117; // x21
  int v118; // w24
  System_String_o *v119; // x22
  System_String_o *v120; // x23
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  __int64 v124; // x1
  System_String_o *v125; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v127; // x8
  System_String_o *v128; // x0
  struct UILabel_o *v129; // x19
  System_String_o *v130; // x0
  int v131; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B11EA6 & 1) == 0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&bool___TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2181/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2182/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_2177/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_12088/*"SERVANT_UNIT"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_2178/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v40, v41);
    byte_4B11EA6 = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, method);
  if ( !byte_4B11EE0 )
  {
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, method, v2);
    byte_4B11EE0 = 1;
  }
  v42 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, method);
    v42 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v42->static_fields->autoOrganizationInfo;
  Filter_41507520 = sub_1BCA888(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v46 = Filter_41507520;
  v47 = 0LL;
  v48 = Filter_41507520 + 32;
  do
  {
    Filter_41507520 = ListViewSort__GetFilter_41507520(autoOrganizationInfo, v47, 0LL);
    if ( !v46 )
      goto LABEL_116;
    if ( v47 >= *(unsigned int *)(v46 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v48 + v47++) = Filter_41507520 & 1;
  }
  while ( v47 != 13 );
  v51 = sub_1BCAA2C(System_Collections_Generic_List_string__TypeInfo, v45, v49, v50);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v51,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v46 + 24) < 2u )
LABEL_115:
    sub_1BCAA44(Filter_41507520, v45);
  v52 = *(_BYTE *)(v46 + 32) == 0;
  v53 = *(unsigned __int8 *)(v46 + 33) != 0;
  if ( *(_BYTE *)(v46 + 32) || !*(_BYTE *)(v46 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2178/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0LL);
    if ( !v51 )
      goto LABEL_116;
    v54 = *(_QWORD *)(v51 + 16);
    v55 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v54 )
      goto LABEL_116;
    v56 = *(int *)(v51 + 24);
    v57 = Filter_41507520;
    if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = v54 + 8 * v56;
      *(_DWORD *)(v51 + 24) = v56 + 1;
      *(_QWORD *)(v58 + 32) = v57;
      sub_1BCA784(v58 + 32, v57);
    }
  }
  if ( v53 || v52 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2177/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0LL);
    if ( !v51 )
      goto LABEL_116;
    v59 = *(_QWORD *)(v51 + 16);
    v60 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v59 )
      goto LABEL_116;
    v61 = *(int *)(v51 + 24);
    v62 = Filter_41507520;
    if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = v59 + 8 * v61;
      *(_DWORD *)(v51 + 24) = v61 + 1;
      *(_QWORD *)(v63 + 32) = v62;
      sub_1BCA784(v63 + 32, v62);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_41507520 = (__int64)System_String__Join_62416876(
                               (System_String_o *)StringLiteral_116/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v51,
                               0LL);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_41507520, 0LL);
  v65 = this->fields.detailRight;
  if ( !v65 )
    goto LABEL_116;
  v66 = System_String__Concat_62401220(v65->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v65, v66, 0LL);
  if ( !v51 )
    goto LABEL_116;
  v67 = *(_DWORD *)(v51 + 24);
  v68 = *(_DWORD *)(v51 + 28) + 1;
  *(_DWORD *)(v51 + 24) = 0;
  *(_DWORD *)(v51 + 28) = v68;
  if ( v67 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v51 + 16), 0, v67, 0LL);
  Filter_41507520 = sub_1BCA888(bool___TypeInfo, 5LL);
  v69 = *(_DWORD *)(v46 + 24);
  v70 = Filter_41507520;
  v71 = 0LL;
  v72 = v69 >= 2;
  v73 = v69 - 2;
  if ( (_DWORD)v73 != 0 && v72 )
    v74 = v73;
  else
    v74 = 0LL;
  LOBYTE(v75) = 1;
  do
  {
    if ( v74 == v71 )
      goto LABEL_115;
    if ( !Filter_41507520 )
      goto LABEL_116;
    v76 = *(unsigned int *)(Filter_41507520 + 24);
    if ( v71 >= v76 )
      goto LABEL_115;
    v77 = *(unsigned __int8 *)(v46 + 34 + v71);
    *(_BYTE *)(Filter_41507520 + 32 + v71++) = v77;
    v75 = (unsigned __int8)v75 & (v77 == 0);
  }
  while ( v71 != 5 );
  if ( v75 )
  {
    v78 = 0LL;
    while ( v78 < v76 )
    {
      *(_BYTE *)(Filter_41507520 + 32 + v78++) = 1;
      if ( v78 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v76 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_41507520 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
    v79 = *(_QWORD *)(v51 + 16);
    v80 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v79 )
      goto LABEL_116;
    v81 = *(int *)(v51 + 24);
    v82 = Filter_41507520;
    if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = v79 + 8 * v81;
      *(_DWORD *)(v51 + 24) = v81 + 1;
      *(_QWORD *)(v83 + 32) = v82;
      Filter_41507520 = sub_1BCA784(v83 + 32, v82);
    }
  }
  if ( *(_DWORD *)(v70 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v70 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
    v84 = *(_QWORD *)(v51 + 16);
    v85 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v84 )
      goto LABEL_116;
    v86 = *(int *)(v51 + 24);
    v87 = Filter_41507520;
    if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = v84 + 8 * v86;
      *(_DWORD *)(v51 + 24) = v86 + 1;
      *(_QWORD *)(v88 + 32) = v87;
      Filter_41507520 = sub_1BCA784(v88 + 32, v87);
    }
  }
  if ( *(_DWORD *)(v70 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v70 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    v89 = *(_QWORD *)(v51 + 16);
    v90 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v89 )
      goto LABEL_116;
    v91 = *(int *)(v51 + 24);
    v92 = Filter_41507520;
    if ( (unsigned int)v91 >= *(_DWORD *)(v89 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = v89 + 8 * v91;
      *(_DWORD *)(v51 + 24) = v91 + 1;
      *(_QWORD *)(v93 + 32) = v92;
      Filter_41507520 = sub_1BCA784(v93 + 32, v92);
    }
  }
  if ( *(_DWORD *)(v70 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v70 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    v94 = *(_QWORD *)(v51 + 16);
    v95 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v94 )
      goto LABEL_116;
    v96 = *(int *)(v51 + 24);
    v97 = Filter_41507520;
    if ( (unsigned int)v96 >= *(_DWORD *)(v94 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = v94 + 8 * v96;
      *(_DWORD *)(v51 + 24) = v96 + 1;
      *(_QWORD *)(v98 + 32) = v97;
      Filter_41507520 = sub_1BCA784(v98 + 32, v97);
    }
  }
  if ( !*(_DWORD *)(v70 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v70 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
    Filter_41507520 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    v99 = *(_QWORD *)(v51 + 16);
    v100 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v51 + 28);
    if ( !v99 )
      goto LABEL_116;
    v101 = *(int *)(v51 + 24);
    v102 = Filter_41507520;
    if ( (unsigned int)v101 >= *(_DWORD *)(v99 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v51,
        (Il2CppObject *)Filter_41507520,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    }
    else
    {
      v103 = v99 + 8 * v101;
      *(_DWORD *)(v51 + 24) = v101 + 1;
      *(_QWORD *)(v103 + 32) = v102;
      Filter_41507520 = sub_1BCA784(v103 + 32, v102);
    }
  }
  v104 = this->fields.detailRight;
  if ( !v104 )
    goto LABEL_116;
  mText = v104->fields.mText;
  v106 = System_String__Join_62416876(
           (System_String_o *)StringLiteral_116/*" "*/,
           (System_Collections_Generic_IEnumerable_string__o *)v51,
           0LL);
  v107 = System_String__Concat_62401220(mText, v106, 0LL);
  UILabel__set_text(v104, v107, 0LL);
  v108 = this->fields.detailRight;
  if ( !v108 )
    goto LABEL_116;
  v109 = System_String__Concat_62401220(v108->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v108, v109, 0LL);
  v110 = *(_DWORD *)(v51 + 24);
  v111 = *(_DWORD *)(v51 + 28) + 1;
  *(_DWORD *)(v51 + 24) = 0;
  *(_DWORD *)(v51 + 28) = v111;
  if ( v110 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v51 + 16), 0, v110, 0LL);
  Filter_41507520 = sub_1BCA888(bool___TypeInfo, 6LL);
  v112 = *(_DWORD *)(v46 + 24);
  v113 = 0LL;
  v114 = 0;
  v72 = v112 >= 7;
  v115 = v112 - 7;
  if ( (_DWORD)v115 == 0 || !v72 )
    v115 = 0LL;
  do
  {
    if ( v115 == v113 )
      goto LABEL_115;
    if ( !Filter_41507520 )
      goto LABEL_116;
    if ( v113 >= *(unsigned int *)(Filter_41507520 + 24) )
      goto LABEL_115;
    v116 = *(unsigned __int8 *)(v46 + 39 + v113);
    *(_BYTE *)(Filter_41507520 + 32 + v113++) = v116;
    if ( v116 )
      v114 = v113;
  }
  while ( v113 != 6 );
  v117 = this->fields.detailRight;
  v118 = v114 ? v114 : 6;
  if ( !v117 )
LABEL_116:
    sub_1BCAA3C(Filter_41507520, v45);
  v119 = v117->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12088/*"SERVANT_UNIT"*/, 0LL);
  v131 = v118;
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
  v122 = System_String__Format(v120, v121, 0LL);
  v123 = System_String__Concat_62401220(v119, v122, 0LL);
  UILabel__set_text(v117, v123, 0LL);
  if ( this->fields.preQuest )
  {
    v125 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v124);
    v127 = (System_String_o **)&StringLiteral_2181/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v127 = (System_String_o **)&StringLiteral_2182/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v128 = LocalizationManager__Get(*v127, 0LL);
    Filter_41507520 = (__int64)System_String__Concat_62401220(v125, v128, 0LL);
    v129 = this->fields.detailRight;
    if ( v129 )
    {
      v130 = System_String__Concat_62401220(v129->fields.mText, (System_String_o *)Filter_41507520, 0LL);
      UILabel__set_text(v129, v130, 0LL);
      return;
    }
    goto LABEL_116;
  }
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

  if ( (byte_4B11E9D & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B11E9D = 1;
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
    v9 = sub_1C05CD0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BCACFC(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11EA7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3218/*"BaseWindow/CancelButton"*/, method, v2);
    byte_4B11EA7 = 1;
  }
  return (System_String_o *)StringLiteral_3218/*"BaseWindow/CancelButton"*/;
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

  if ( (byte_4B11E9E & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B11E9E = 1;
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
    v9 = sub_1C05CD0(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1BCACFC(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A06F58;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06F10;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B11EA9 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B11EA9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  __int64 v12; // x2
  AutoOrganizationManager_c *v13; // x0

  v5 = this;
  if ( (byte_4B11EAA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, v6, v7);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1BCA7E0(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
                                                                                       v8,
                                                                                       v9);
    byte_4B11EAA = 1;
  }
  _9__1 = v5->fields.__9__1;
  settingDialog = v5->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1BCA784(
                                                                                       &v5->fields.__9__1,
                                                                                       _9__1);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_32521720(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide);
    if ( !byte_4B11EE0 )
    {
      sub_1BCA7E0(&AutoOrganizationManager_TypeInfo, isDecide, v12);
      byte_4B11EE0 = 1;
    }
    v13 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide);
      v13 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v13->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v5->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          (const MethodInfo *)isDecide);
        return;
      }
    }
LABEL_17:
    sub_1BCAA3C(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *go; // x19

  if ( (byte_4B11EAB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11EAB = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(go, 0LL);
}