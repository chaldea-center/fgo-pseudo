void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1DAE0 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1DAE0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4C1DAD9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, autoDestroy);
    sub_1C3B764(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, v5);
    byte_4C1DAD9 = 1;
  }
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C1DADA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DADA = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
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
  UILabel_o *titleLabel; // x0

  if ( (byte_4C1DAD7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1DAD7 = 1;
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
    sub_1C3B9C0(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4C1DADB & 1) == 0 )
  {
    sub_1C3B764(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__, method);
    byte_4C1DADB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_4C1DADD & 1) == 0 )
  {
    sub_1C3B764(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__, method);
    byte_4C1DADD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *settingDialogPrefab; // x21
  UnityEngine_Transform_o **p_monitor; // x21
  UnityEngine_GameObject_o *monitor; // x22
  UnityEngine_Component_o *parent; // x0
  __int64 v19; // x1
  PartyOrganizationAutoOrganizationSettingDialog_o *klass; // x21
  AutoOrganizationManager_c *v21; // x0
  int32_t eventId; // w22
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x19
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v25; // x23
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5

  if ( (byte_4C1DADC & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, method);
    sub_1C3B764(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___, v4);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__, v7);
    sub_1C3B764(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__, v8);
    sub_1C3B764(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo, v9);
    byte_4C1DADC = 1;
  }
  v10 = (Il2CppObject *)sub_1C3B9B0(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  v10[2].klass = (Il2CppClass *)this;
  sub_1C3B708(&v10[2]);
  if ( this->fields.state == 2 )
  {
    v13 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C3B77C(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C3B748(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    settingDialogPrefab = (Il2CppObject *)this->fields.settingDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10[1].monitor = UnityEngine_Object__Instantiate_object_(
                       settingDialogPrefab,
                       (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    p_monitor = (UnityEngine_Transform_o **)&v10[1].monitor;
    sub_1C3B708(&v10[1].monitor);
    monitor = (UnityEngine_GameObject_o *)v10[1].monitor;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(monitor, parent, 0LL);
      transform = *p_monitor;
      if ( *p_monitor )
      {
        v10[1].klass = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)transform,
                                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
        sub_1C3B708(&v10[1]);
        transform = (UnityEngine_Transform_o *)v10[1].klass;
        if ( transform )
        {
          transform[17].fields.m_CachedPtr = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0LL);
          klass = (PartyOrganizationAutoOrganizationSettingDialog_o *)v10[1].klass;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
          if ( !byte_4C1DB6C )
          {
            sub_1C3B764(&AutoOrganizationManager_TypeInfo, v19);
            byte_4C1DB6C = 1;
          }
          v21 = AutoOrganizationManager_TypeInfo;
          if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
            v21 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v21->static_fields->autoOrganizationInfo;
          v25 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_1C3B9B0(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v25,
            v10,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v26);
          if ( klass )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(
              klass,
              autoOrganizationInfo,
              eventId,
              preQuest,
              v25,
              v27);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_1C3B9C0(transform, v12);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UILabel_o *titleLabel; // x24
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v35; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  struct UILabel_o *v44; // x23
  System_String_o *mText; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x23
  System_String_o *v49; // x24
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  UILabel_o *v52; // x22
  UILabel_o *v53; // x22
  __int64 *v54; // x8
  UILabel_o *v55; // x21
  AutoOrganizationManager_c *v56; // x0
  System_String_o *String_71081024; // x21
  System_String_c *klass; // x8
  System_String_o *v59; // x21
  unsigned __int64 v60; // x24
  AutoOrganizationManager_c *v61; // x0
  System_Action_o *v62; // x20

  v13 = preQuest;
  if ( (byte_4C1DAD8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v14);
    sub_1C3B764(&LocalizationManager_TypeInfo, v15);
    sub_1C3B764(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, v16);
    sub_1C3B764(&StringLiteral_2181/*"After Root Level Attribute"*/, v17);
    sub_1C3B764(&StringLiteral_2183/*"AfterFieldCallEffect"*/, v18);
    sub_1C3B764(&StringLiteral_2166/*"AddWeakCardIds"*/, v19);
    sub_1C3B764(&StringLiteral_2169/*"Additional content found in JSON reference object. A JSON reference object should only have a {0} property."*/, v20);
    sub_1C3B764(&StringLiteral_2165/*"AddUniqueCameraPrefab{0}"*/, v21);
    sub_1C3B764(&StringLiteral_2178/*"Adv/Map/Texture_RIM_LM"*/, v22);
    sub_1C3B764(&StringLiteral_2177/*"Adv/Map/Ground_RIM_LM"*/, v23);
    sub_1C3B764(&StringLiteral_2168/*"Adding the specified count to the semaphore would cause it to exceed its maximum count."*/, v24);
    sub_1C3B764(&StringLiteral_2172/*"Additional text found in JSON string after finishing deserializing object."*/, v25);
    sub_1C3B764(&StringLiteral_2182/*"After parsing a value an unexpected character was encountered: {0}."*/, v26);
    sub_1C3B764(&StringLiteral_2179/*"Afrikaans"*/, v27);
    sub_1C3B764(&StringLiteral_2643/*"B480"*/, v28);
    sub_1C3B764(&StringLiteral_2173/*"Address already in use"*/, v29);
    sub_1C3B764(&StringLiteral_2180/*"Afrikaans (South Africa)"*/, v30);
    sub_1C3B764(&StringLiteral_2167/*"AddWeakCardWeights"*/, v31);
    sub_1C3B764(&StringLiteral_2176/*"Adler chksum doesn't match: "*/, v32);
    byte_4C1DAD8 = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v13;
  sub_1C3B708(&this->fields.closeFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2182/*"After parsing a value an unexpected character was encountered: {0}."*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0LL);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2177/*"Adv/Map/Ground_RIM_LM"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_60;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0LL);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2178/*"Adv/Map/Texture_RIM_LM"*/, 0LL);
  if ( !buffExistsMessageLabel )
    goto LABEL_60;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0LL);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2165/*"AddUniqueCameraPrefab{0}"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0LL);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2181/*"After Root Level Attribute"*/, 0LL);
  if ( !settingLabel )
    goto LABEL_60;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0LL);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2167/*"AddWeakCardWeights"*/, 0LL);
  if ( !execLabel )
    goto LABEL_60;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0LL);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"Adler chksum doesn't match: "*/, 0LL);
  if ( !detailTitle )
    goto LABEL_60;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0LL);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2172/*"Additional text found in JSON string after finishing deserializing object."*/, 0LL);
  if ( !detailLeft )
    goto LABEL_60;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0LL);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2168/*"Adding the specified count to the semaphore would cause it to exceed its maximum count."*/, 0LL);
  if ( !detailCenter )
    goto LABEL_60;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0LL);
  if ( preQuest )
  {
    v44 = this->fields.detailLeft;
    if ( !v44 )
      goto LABEL_60;
    mText = v44->fields.mText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2173/*"Address already in use"*/, 0LL);
    v47 = System_String__Concat_63368612(mText, v46, 0LL);
    UILabel__set_text(v44, v47, 0LL);
    v48 = this->fields.detailCenter;
    if ( !v48 )
      goto LABEL_60;
    v49 = v48->fields.mText;
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2169/*"Additional content found in JSON reference object. A JSON reference object should only have a {0} property."*/, 0LL);
    v51 = System_String__Concat_63368612(v49, v50, 0LL);
    UILabel__set_text(v48, v51, 0LL);
  }
  if ( !isAutoOpen )
    goto LABEL_34;
  v52 = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2183/*"AfterFieldCallEffect"*/, 0LL);
  if ( !v52 )
    goto LABEL_60;
  UILabel__set_text(v52, autoOrganizationInfo, 0LL);
  v53 = this->fields.messageLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isExistAdjustBuff )
    {
LABEL_26:
      v54 = &StringLiteral_2179/*"Afrikaans"*/;
      goto LABEL_29;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExistAdjustBuff )
      goto LABEL_26;
  }
  v54 = &StringLiteral_2180/*"Afrikaans (South Africa)"*/;
LABEL_29:
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  if ( !v53 )
    goto LABEL_60;
  UILabel__set_text(v53, autoOrganizationInfo, 0LL);
  v55 = this->fields.cancelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2166/*"AddWeakCardIds"*/, 0LL);
  if ( !v55 )
    goto LABEL_60;
  UILabel__set_text(v55, autoOrganizationInfo, 0LL);
LABEL_34:
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4C1DB6C )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v35);
    byte_4C1DB6C = 1;
  }
  v56 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v56 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v56->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0LL);
  if ( eventId < 1 )
    goto LABEL_59;
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024((System_String_o *)StringLiteral_2643/*"B480"*/, 0LL);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_71081024, 0LL);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_51;
  if ( !String_71081024 )
    goto LABEL_60;
  if ( String_71081024->fields._stringLength < 1 )
    goto LABEL_51;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_71081024, 0x2Cu, 0, 0LL);
  if ( !autoOrganizationInfo )
    goto LABEL_60;
  klass = autoOrganizationInfo[1].klass;
  v59 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_51:
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4C1DB6C )
    {
      sub_1C3B764(&AutoOrganizationManager_TypeInfo, v35);
      byte_4C1DB6C = 1;
    }
    v61 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v61 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v61->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_1C3B9C0(autoOrganizationInfo, v35);
  }
  v60 = 0LL;
  while ( 1 )
  {
    if ( v60 >= (unsigned int)klass )
      sub_1C3B9C8(autoOrganizationInfo, v35);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v59[1].monitor + v60), 0LL);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v59[1].klass;
    if ( (__int64)++v60 >= (int)klass )
      goto LABEL_51;
  }
LABEL_59:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v35);
  this->fields.state = 1;
  v62 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
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
  __int64 v20; // x1
  __int64 v21; // x1
  AutoOrganizationManager_c *v22; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_42259400; // x0
  __int64 v25; // x1
  __int64 v26; // x21
  unsigned __int64 v27; // x22
  __int64 v28; // x25
  __int64 v29; // x22
  _BOOL4 v30; // w23
  _BOOL4 v31; // w27
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x1
  __int64 v36; // x0
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x1
  __int64 v41; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v43; // x23
  System_String_o *v44; // x0
  int32_t v45; // w2
  int v46; // w8
  unsigned int v47; // w9
  __int64 v48; // x23
  unsigned __int64 v49; // x8
  bool v50; // cf
  __int64 v51; // x9
  __int64 v52; // x13
  int v53; // w11
  unsigned __int64 v54; // x9
  int v55; // w14
  unsigned __int64 v56; // x8
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x1
  __int64 v66; // x0
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x1
  __int64 v71; // x0
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x1
  __int64 v76; // x0
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x1
  __int64 v81; // x0
  struct UILabel_o *v82; // x23
  System_String_o *mText; // x24
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  struct UILabel_o *v86; // x23
  System_String_o *v87; // x0
  int32_t v88; // w2
  int v89; // w8
  unsigned int v90; // w11
  unsigned __int64 v91; // x9
  int v92; // w8
  __int64 v93; // x11
  int v94; // w13
  struct UILabel_o *v95; // x21
  int v96; // w24
  System_String_o *v97; // x22
  System_String_o *v98; // x23
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v107; // x8
  System_String_o *v108; // x0
  struct UILabel_o *v109; // x19
  System_String_o *v110; // x0
  int v111; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C1DADE & 1) == 0 )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, method);
    sub_1C3B764(&bool___TypeInfo, v3);
    sub_1C3B764(&int_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v10);
    sub_1C3B764(&StringLiteral_2174/*"Addresses 0.0.0.0 (IPv4) and ::0 (IPv6) are unspecified addresses. You cannot use them as target address."*/, v11);
    sub_1C3B764(&StringLiteral_2175/*"AdjustmentRules"*/, v12);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v13);
    sub_1C3B764(&StringLiteral_12009/*"START_EFFECT"*/, v14);
    sub_1C3B764(&StringLiteral_2170/*"Additional non-parsable characters are at the end of the string."*/, v15);
    sub_1C3B764(&StringLiteral_12008/*"START_COSTUME_EFFECT"*/, v16);
    sub_1C3B764(&StringLiteral_12201/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, v17);
    sub_1C3B764(&StringLiteral_12007/*"START_CONTINUE_WAVE_RESTART"*/, v18);
    sub_1C3B764(&StringLiteral_12005/*"START_CONTINUE"*/, v19);
    sub_1C3B764(&StringLiteral_2171/*"Additional text encountered after finished reading JSON content: {0}."*/, v20);
    sub_1C3B764(&StringLiteral_12006/*"START_CONTINUE_INTERRUPTION"*/, v21);
    byte_4C1DADE = 1;
  }
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
  if ( !byte_4C1DB6C )
  {
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, method);
    byte_4C1DB6C = 1;
  }
  v22 = AutoOrganizationManager_TypeInfo;
  if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    v22 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v22->static_fields->autoOrganizationInfo;
  Filter_42259400 = sub_1C3B80C(bool___TypeInfo, 13LL);
  if ( !autoOrganizationInfo )
    goto LABEL_116;
  v26 = Filter_42259400;
  v27 = 0LL;
  v28 = Filter_42259400 + 32;
  do
  {
    Filter_42259400 = ListViewSort__GetFilter_42259400(autoOrganizationInfo, v27, 0LL);
    if ( !v26 )
      goto LABEL_116;
    if ( v27 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_115;
    *(_BYTE *)(v28 + v27++) = Filter_42259400 & 1;
  }
  while ( v27 != 13 );
  v29 = sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v29,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v26 + 24) < 2u )
LABEL_115:
    sub_1C3B9C8(Filter_42259400, v25);
  v30 = *(_BYTE *)(v26 + 32) == 0;
  v31 = *(unsigned __int8 *)(v26 + 33) != 0;
  if ( *(_BYTE *)(v26 + 32) || !*(_BYTE *)(v26 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2171/*"Additional text encountered after finished reading JSON content: {0}."*/, 0LL);
    if ( !v29 )
      goto LABEL_116;
    v32 = *(_QWORD *)(v29 + 16);
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v32 )
      goto LABEL_116;
    v34 = *(int *)(v29 + 24);
    v35 = Filter_42259400;
    if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = v32 + 8 * v34;
      *(_DWORD *)(v29 + 24) = v34 + 1;
      *(_QWORD *)(v36 + 32) = v35;
      sub_1C3B708(v36 + 32);
    }
  }
  if ( v31 || v30 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2170/*"Additional non-parsable characters are at the end of the string."*/, 0LL);
    if ( !v29 )
      goto LABEL_116;
    v37 = *(_QWORD *)(v29 + 16);
    v38 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v37 )
      goto LABEL_116;
    v39 = *(int *)(v29 + 24);
    v40 = Filter_42259400;
    if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = v37 + 8 * v39;
      *(_DWORD *)(v29 + 24) = v39 + 1;
      *(_QWORD *)(v41 + 32) = v40;
      sub_1C3B708(v41 + 32);
    }
  }
  detailRight = this->fields.detailRight;
  Filter_42259400 = (__int64)System_String__Join_63384268(
                               (System_String_o *)StringLiteral_117/*"   "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v29,
                               0LL);
  if ( !detailRight )
    goto LABEL_116;
  UILabel__set_text(detailRight, (System_String_o *)Filter_42259400, 0LL);
  v43 = this->fields.detailRight;
  if ( !v43 )
    goto LABEL_116;
  v44 = System_String__Concat_63368612(v43->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v43, v44, 0LL);
  if ( !v29 )
    goto LABEL_116;
  v45 = *(_DWORD *)(v29 + 24);
  v46 = *(_DWORD *)(v29 + 28) + 1;
  *(_DWORD *)(v29 + 24) = 0;
  *(_DWORD *)(v29 + 28) = v46;
  if ( v45 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v29 + 16), 0, v45, 0LL);
  Filter_42259400 = sub_1C3B80C(bool___TypeInfo, 5LL);
  v47 = *(_DWORD *)(v26 + 24);
  v48 = Filter_42259400;
  v49 = 0LL;
  v50 = v47 >= 2;
  v51 = v47 - 2;
  if ( (_DWORD)v51 != 0 && v50 )
    v52 = v51;
  else
    v52 = 0LL;
  LOBYTE(v53) = 1;
  do
  {
    if ( v52 == v49 )
      goto LABEL_115;
    if ( !Filter_42259400 )
      goto LABEL_116;
    v54 = *(unsigned int *)(Filter_42259400 + 24);
    if ( v49 >= v54 )
      goto LABEL_115;
    v55 = *(unsigned __int8 *)(v26 + 34 + v49);
    *(_BYTE *)(Filter_42259400 + 32 + v49++) = v55;
    v53 = (unsigned __int8)v53 & (v55 == 0);
  }
  while ( v49 != 5 );
  if ( v53 )
  {
    v56 = 0LL;
    while ( v56 < v54 )
    {
      *(_BYTE *)(Filter_42259400 + 32 + v56++) = 1;
      if ( v56 == 5 )
        goto LABEL_49;
    }
    goto LABEL_115;
  }
LABEL_49:
  if ( (unsigned int)v54 <= 4 )
    goto LABEL_115;
  if ( *(_BYTE *)(Filter_42259400 + 36) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12008/*"START_COSTUME_EFFECT"*/, 0LL);
    v57 = *(_QWORD *)(v29 + 16);
    v58 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v57 )
      goto LABEL_116;
    v59 = *(int *)(v29 + 24);
    v60 = Filter_42259400;
    if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = v57 + 8 * v59;
      *(_DWORD *)(v29 + 24) = v59 + 1;
      *(_QWORD *)(v61 + 32) = v60;
      Filter_42259400 = sub_1C3B708(v61 + 32);
    }
  }
  if ( *(_DWORD *)(v48 + 24) <= 3u )
    goto LABEL_115;
  if ( *(_BYTE *)(v48 + 35) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12007/*"START_CONTINUE_WAVE_RESTART"*/, 0LL);
    v62 = *(_QWORD *)(v29 + 16);
    v63 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v62 )
      goto LABEL_116;
    v64 = *(int *)(v29 + 24);
    v65 = Filter_42259400;
    if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = v62 + 8 * v64;
      *(_DWORD *)(v29 + 24) = v64 + 1;
      *(_QWORD *)(v66 + 32) = v65;
      Filter_42259400 = sub_1C3B708(v66 + 32);
    }
  }
  if ( *(_DWORD *)(v48 + 24) <= 2u )
    goto LABEL_115;
  if ( *(_BYTE *)(v48 + 34) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12006/*"START_CONTINUE_INTERRUPTION"*/, 0LL);
    v67 = *(_QWORD *)(v29 + 16);
    v68 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v67 )
      goto LABEL_116;
    v69 = *(int *)(v29 + 24);
    v70 = Filter_42259400;
    if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = v67 + 8 * v69;
      *(_DWORD *)(v29 + 24) = v69 + 1;
      *(_QWORD *)(v71 + 32) = v70;
      Filter_42259400 = sub_1C3B708(v71 + 32);
    }
  }
  if ( *(_DWORD *)(v48 + 24) <= 1u )
    goto LABEL_115;
  if ( *(_BYTE *)(v48 + 33) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12009/*"START_EFFECT"*/, 0LL);
    v72 = *(_QWORD *)(v29 + 16);
    v73 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v72 )
      goto LABEL_116;
    v74 = *(int *)(v29 + 24);
    v75 = Filter_42259400;
    if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = v72 + 8 * v74;
      *(_DWORD *)(v29 + 24) = v74 + 1;
      *(_QWORD *)(v76 + 32) = v75;
      Filter_42259400 = sub_1C3B708(v76 + 32);
    }
  }
  if ( !*(_DWORD *)(v48 + 24) )
    goto LABEL_115;
  if ( *(_BYTE *)(v48 + 32) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Filter_42259400 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"START_CONTINUE"*/, 0LL);
    v77 = *(_QWORD *)(v29 + 16);
    v78 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v29 + 28);
    if ( !v77 )
      goto LABEL_116;
    v79 = *(int *)(v29 + 24);
    v80 = Filter_42259400;
    if ( (unsigned int)v79 >= *(_DWORD *)(v77 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v29,
        (Il2CppObject *)Filter_42259400,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = v77 + 8 * v79;
      *(_DWORD *)(v29 + 24) = v79 + 1;
      *(_QWORD *)(v81 + 32) = v80;
      Filter_42259400 = sub_1C3B708(v81 + 32);
    }
  }
  v82 = this->fields.detailRight;
  if ( !v82 )
    goto LABEL_116;
  mText = v82->fields.mText;
  v84 = System_String__Join_63384268(
          (System_String_o *)StringLiteral_117/*"   "*/,
          (System_Collections_Generic_IEnumerable_string__o *)v29,
          0LL);
  v85 = System_String__Concat_63368612(mText, v84, 0LL);
  UILabel__set_text(v82, v85, 0LL);
  v86 = this->fields.detailRight;
  if ( !v86 )
    goto LABEL_116;
  v87 = System_String__Concat_63368612(v86->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
  UILabel__set_text(v86, v87, 0LL);
  v88 = *(_DWORD *)(v29 + 24);
  v89 = *(_DWORD *)(v29 + 28) + 1;
  *(_DWORD *)(v29 + 24) = 0;
  *(_DWORD *)(v29 + 28) = v89;
  if ( v88 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v29 + 16), 0, v88, 0LL);
  Filter_42259400 = sub_1C3B80C(bool___TypeInfo, 6LL);
  v90 = *(_DWORD *)(v26 + 24);
  v91 = 0LL;
  v92 = 0;
  v50 = v90 >= 7;
  v93 = v90 - 7;
  if ( (_DWORD)v93 == 0 || !v50 )
    v93 = 0LL;
  do
  {
    if ( v93 == v91 )
      goto LABEL_115;
    if ( !Filter_42259400 )
      goto LABEL_116;
    if ( v91 >= *(unsigned int *)(Filter_42259400 + 24) )
      goto LABEL_115;
    v94 = *(unsigned __int8 *)(v26 + 39 + v91);
    *(_BYTE *)(Filter_42259400 + 32 + v91++) = v94;
    if ( v94 )
      v92 = v91;
  }
  while ( v91 != 6 );
  v95 = this->fields.detailRight;
  v96 = v92 ? v92 : 6;
  if ( !v95 )
LABEL_116:
    sub_1C3B9C0(Filter_42259400, v25);
  v97 = v95->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12201/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0LL);
  v111 = v96;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111, v99, v100, v101);
  v103 = System_String__Format(v98, v102, 0LL);
  v104 = System_String__Concat_63368612(v97, v103, 0LL);
  UILabel__set_text(v95, v104, 0LL);
  if ( this->fields.preQuest )
  {
    v105 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v107 = (System_String_o **)&StringLiteral_2174/*"Addresses 0.0.0.0 (IPv4) and ::0 (IPv6) are unspecified addresses. You cannot use them as target address."*/;
    if ( autoOrganizationMode != 1 )
      v107 = (System_String_o **)&StringLiteral_2175/*"AdjustmentRules"*/;
    v108 = LocalizationManager__Get(*v107, 0LL);
    Filter_42259400 = (__int64)System_String__Concat_63368612(v105, v108, 0LL);
    v109 = this->fields.detailRight;
    if ( v109 )
    {
      v110 = System_String__Concat_63368612(v109->fields.mText, (System_String_o *)Filter_42259400, 0LL);
      UILabel__set_text(v109, v110, 0LL);
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

  if ( (byte_4C1DAD5 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4C1DAD5 = 1;
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
    v9 = sub_1C76C54(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C3BC80(v8);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C1DADF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3228/*"BreakWall_{0:00}"*/, method);
    byte_4C1DADF = 1;
  }
  return (System_String_o *)StringLiteral_3228/*"BreakWall_{0:00}"*/;
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

  if ( (byte_4C1DAD6 & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4C1DAD6 = 1;
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
    v9 = sub_1C76C54(p_closeFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_1C3BC80(v8);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A767BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A76774;
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
  if ( (byte_4C1DAE1 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C1DAE1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  AutoOrganizationManager_c *v9; // x0

  v4 = this;
  if ( (byte_4C1DAE2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&AutoOrganizationManager_TypeInfo, v5);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C3B764(
                                                                                       &Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
                                                                                       v6);
    byte_4C1DAE2 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_1C3B708(&v4->fields.__9__1);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_33069292(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
    if ( !byte_4C1DB6C )
    {
      sub_1C3B764(&AutoOrganizationManager_TypeInfo, isDecide);
      byte_4C1DB6C = 1;
    }
    v9 = AutoOrganizationManager_TypeInfo;
    if ( !AutoOrganizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo);
      v9 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v9->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0LL);
      this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v4->fields.__4__this;
      if ( this )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
          (PartyOrganizationAutoOrganizationConfirmDialog_o *)this,
          (const MethodInfo *)isDecide);
        return;
      }
    }
LABEL_17:
    sub_1C3B9C0(this, isDecide);
  }
}


void __fastcall PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x19

  if ( (byte_4C1DAE3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DAE3 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(go, 0LL);
}