void PartyOrganizationAutoOrganizationConfirmDialog___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BF54 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BF54 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__Awake(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void PartyOrganizationAutoOrganizationConfirmDialog__Close(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        bool autoDestroy,
        const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596BF4D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__);
    byte_596BF4D = 1;
  }
  v5 = System_Action_TypeInfo;
  this->fields.autoDestroyEndClose = autoDestroy;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndClose(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596BF4E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF4E = 1;
  }
  if ( this->fields.autoDestroyEndClose )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  else
  {
    PartyOrganizationAutoOrganizationConfirmDialog__Init(this, method);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog__EndOpen(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationAutoOrganizationConfirmDialog__Init(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596BF4B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BF4B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.buffExistsMessageLabel;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailTitle;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailLeft;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailCenter;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.detailRight;
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


void PartyOrganizationAutoOrganizationConfirmDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_596BF4F & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
    byte_596BF4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickCancel__);
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


void PartyOrganizationAutoOrganizationConfirmDialog__OnClickExec(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_596BF51 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
    byte_596BF51 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickExec__);
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


void PartyOrganizationAutoOrganizationConfirmDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
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
  PartyOrganizationAutoOrganizationSettingDialog_o *v36; // x21
  AutoOrganizationManager_c *v37; // x0
  int32_t eventId; // w23
  _BOOL4 preQuest; // w24
  ListViewSort_o *autoOrganizationInfo; // x22
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v41; // x19
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x5

  if ( (byte_596BF50 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
    sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__);
    sub_2213A60(&PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
    byte_596BF50 = 1;
  }
  v3 = sub_2213CCC(PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_21;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 2 )
  {
    v12 = Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_2213A78(Method_PartyOrganizationAutoOrganizationConfirmDialog_OnClickSetting__);
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
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationAutoOrganizationSettingDialog___);
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
          LODWORD(transform[17].fields.m_CachedPtr) = 0;
          BaseDialog__Init((BaseDialog_o *)transform, 0);
          v36 = *(PartyOrganizationAutoOrganizationSettingDialog_o **)(v3 + 16);
          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v34, v35);
          if ( !byte_596BFD1 )
          {
            sub_2213A60(&AutoOrganizationManager_TypeInfo);
            byte_596BFD1 = 1;
          }
          v37 = AutoOrganizationManager_TypeInfo;
          if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v34, v35);
            v37 = AutoOrganizationManager_TypeInfo;
          }
          eventId = this->fields.eventId;
          preQuest = this->fields.preQuest;
          autoOrganizationInfo = v37->static_fields->autoOrganizationInfo;
          v41 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *)sub_2213CCC(PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
          PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
            v41,
            (Il2CppObject *)v3,
            Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__0__,
            v42);
          if ( v36 )
          {
            PartyOrganizationAutoOrganizationSettingDialog__Open(v36, autoOrganizationInfo, eventId, preQuest, v41, v43);
            return;
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(transform, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationAutoOrganizationConfirmDialog__Open(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        int32_t eventId,
        bool preQuest,
        bool isExistAdjustBuff,
        bool isAutoOpen,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  bool v7; // w7
  bool v14; // w27
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *titleLabel; // x24
  System_String_o *autoOrganizationInfo; // x0
  const MethodInfo *v19; // x1
  UILabel_o *messageLabel; // x24
  UILabel_o *buffExistsMessageLabel; // x24
  UILabel_o *cancelLabel; // x24
  UILabel_o *settingLabel; // x24
  UILabel_o *execLabel; // x24
  UILabel_o *detailTitle; // x24
  UILabel_o *detailLeft; // x24
  UILabel_o *detailCenter; // x24
  __int64 v28; // x2
  struct UILabel_o *v29; // x23
  System_String_o *mText; // x24
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  struct UILabel_o *v33; // x23
  System_String_o *v34; // x24
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  UILabel_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  UILabel_o *v40; // x22
  int v41; // w8
  __int64 *v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  UILabel_o *v45; // x21
  AutoOrganizationManager_c *v46; // x0
  System_String_o *String_83398240; // x21
  __int64 v48; // x2
  System_String_c *klass; // x8
  System_String_o *v50; // x21
  unsigned __int64 v51; // x24
  AutoOrganizationManager_c *v52; // x0
  System_Action_c *v53; // x0
  System_Action_o *v54; // x20

  v14 = preQuest;
  if ( (byte_596BF4C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/);
    sub_2213A60(&StringLiteral_2176/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/);
    sub_2213A60(&StringLiteral_2159/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/);
    sub_2213A60(&StringLiteral_2162/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/);
    sub_2213A60(&StringLiteral_2158/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_2171/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/);
    sub_2213A60(&StringLiteral_2170/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_2161/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/);
    sub_2213A60(&StringLiteral_2165/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/);
    sub_2213A60(&StringLiteral_2175/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_2172/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/);
    sub_2213A60(&StringLiteral_2607/*"AutoOrganizationBonusFilterEventId"*/);
    sub_2213A60(&StringLiteral_2166/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/);
    sub_2213A60(&StringLiteral_2173/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/);
    sub_2213A60(&StringLiteral_2160/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_2169/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/);
    byte_596BF4C = 1;
  }
  this->fields.closeFunc = func;
  this->fields.eventId = eventId;
  this->fields.preQuest = v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)func,
    (System_String_o *)preQuest,
    (System_String_o *)isExistAdjustBuff,
    isAutoOpen,
    (int32_t)func,
    (bool)method,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2175/*"AUTO_ORGANIZATION_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_62;
  UILabel__set_text(titleLabel, autoOrganizationInfo, 0);
  messageLabel = this->fields.messageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2170/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_62;
  UILabel__set_text(messageLabel, autoOrganizationInfo, 0);
  buffExistsMessageLabel = this->fields.buffExistsMessageLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2171/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF"*/, 0);
  if ( !buffExistsMessageLabel )
    goto LABEL_62;
  UILabel__set_text(buffExistsMessageLabel, autoOrganizationInfo, 0);
  cancelLabel = this->fields.cancelLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2158/*"AUTO_ORGANIZATION_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_62;
  UILabel__set_text(cancelLabel, autoOrganizationInfo, 0);
  settingLabel = this->fields.settingLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2174/*"AUTO_ORGANIZATION_CONFIRM_SETTING"*/, 0);
  if ( !settingLabel )
    goto LABEL_62;
  UILabel__set_text(settingLabel, autoOrganizationInfo, 0);
  execLabel = this->fields.execLabel;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2160/*"AUTO_ORGANIZATION_CONFIRM_DECIDE"*/, 0);
  if ( !execLabel )
    goto LABEL_62;
  UILabel__set_text(execLabel, autoOrganizationInfo, 0);
  detailTitle = this->fields.detailTitle;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2169/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_TITLE"*/, 0);
  if ( !detailTitle )
    goto LABEL_62;
  UILabel__set_text(detailTitle, autoOrganizationInfo, 0);
  detailLeft = this->fields.detailLeft;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2165/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT"*/, 0);
  if ( !detailLeft )
    goto LABEL_62;
  UILabel__set_text(detailLeft, autoOrganizationInfo, 0);
  detailCenter = this->fields.detailCenter;
  autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2161/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER"*/, 0);
  if ( !detailCenter )
    goto LABEL_62;
  UILabel__set_text(detailCenter, autoOrganizationInfo, 0);
  if ( preQuest )
  {
    v29 = this->fields.detailLeft;
    if ( !v29 )
      goto LABEL_62;
    mText = v29->fields.mText;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v28);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2166/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_LEFT_MODE"*/, 0);
    v32 = System_String__Concat_75651716(mText, v31, 0);
    UILabel__set_text(v29, v32, 0);
    v33 = this->fields.detailCenter;
    if ( !v33 )
      goto LABEL_62;
    v34 = v33->fields.mText;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2162/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_CENTER_ADD"*/, 0);
    v36 = System_String__Concat_75651716(v34, v35, 0);
    UILabel__set_text(v33, v36, 0);
  }
  if ( isAutoOpen )
  {
    v37 = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v28);
    autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"AUTO_ORGANIZATION_CONFIRM_TITLE_WHEN_AUTO_OPEN"*/, 0);
    if ( !v37 )
      goto LABEL_62;
    UILabel__set_text(v37, autoOrganizationInfo, 0);
    v40 = this->fields.messageLabel;
    v41 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( isExistAdjustBuff )
    {
      if ( !v41 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
      v42 = &StringLiteral_2172/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_EXIST_QUEST_BUFF_WHEN_AUTO_OPEN"*/;
    }
    else
    {
      if ( !v41 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
      v42 = &StringLiteral_2173/*"AUTO_ORGANIZATION_CONFIRM_MESSAGE_WHEN_AUTO_OPEN"*/;
    }
    autoOrganizationInfo = LocalizationManager__Get((System_String_o *)*v42, 0);
    if ( !v40 )
      goto LABEL_62;
    UILabel__set_text(v40, autoOrganizationInfo, 0);
    v45 = this->fields.cancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43, v44);
    autoOrganizationInfo = LocalizationManager__Get((System_String_o *)StringLiteral_2159/*"AUTO_ORGANIZATION_CONFIRM_CANCEL_WHEN_AUTO_OPEN"*/, 0);
    if ( !v45 )
      goto LABEL_62;
    UILabel__set_text(v45, autoOrganizationInfo, 0);
  }
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v19, v28);
  if ( !byte_596BFD1 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596BFD1 = 1;
  }
  v46 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v19, v28);
    v46 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = (System_String_o *)v46->static_fields->autoOrganizationInfo;
  if ( !autoOrganizationInfo )
    goto LABEL_62;
  ListViewSort__Load((ListViewSort_o *)autoOrganizationInfo, 0);
  if ( eventId < 1 )
    goto LABEL_61;
  String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240((System_String_o *)StringLiteral_2607/*"AutoOrganizationBonusFilterEventId"*/, 0);
  autoOrganizationInfo = (System_String_o *)System_String__IsNullOrEmpty(String_83398240, 0);
  if ( ((unsigned __int8)autoOrganizationInfo & 1) != 0 )
    goto LABEL_53;
  if ( !String_83398240 )
    goto LABEL_62;
  if ( String_83398240->fields._stringLength < 1 )
    goto LABEL_53;
  autoOrganizationInfo = (System_String_o *)System_String__Split(String_83398240, 0x2Cu, 0, 0);
  if ( !autoOrganizationInfo )
    goto LABEL_62;
  klass = autoOrganizationInfo[1].klass;
  v50 = autoOrganizationInfo;
  if ( (int)klass < 1 )
  {
LABEL_53:
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v19, v48);
    if ( !byte_596BFD1 )
    {
      sub_2213A60(&AutoOrganizationManager_TypeInfo);
      byte_596BFD1 = 1;
    }
    v52 = AutoOrganizationManager_TypeInfo;
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, v19, v48);
      v52 = AutoOrganizationManager_TypeInfo;
    }
    autoOrganizationInfo = (System_String_o *)v52->static_fields->autoOrganizationInfo;
    if ( autoOrganizationInfo )
    {
      ListViewSort__SetFilter((ListViewSort_o *)autoOrganizationInfo, 41, 1, 0);
      goto LABEL_61;
    }
LABEL_62:
    sub_2213CDC(autoOrganizationInfo, v19);
  }
  v51 = 0;
  while ( 1 )
  {
    if ( v51 >= (unsigned int)klass )
      sub_2213CE4(autoOrganizationInfo);
    autoOrganizationInfo = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v50[1].monitor + v51), 0);
    if ( (_DWORD)autoOrganizationInfo == eventId )
      break;
    LODWORD(klass) = v50[1].klass;
    if ( (__int64)++v51 >= (int)klass )
      goto LABEL_53;
  }
LABEL_61:
  PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(this, v19);
  v53 = System_Action_TypeInfo;
  this->fields.state = 1;
  v54 = (System_Action_o *)sub_2213CCC(v53);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0, 0);
}


void PartyOrganizationAutoOrganizationConfirmDialog__SetDetailLabel(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AutoOrganizationManager_c *v4; // x0
  ListViewSort_o *autoOrganizationInfo; // x20
  __int64 Filter_50882528; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  unsigned __int64 v9; // x22
  __int64 v10; // x29
  __int64 v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  bool v14; // zf
  int v15; // w27
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x1
  __int64 v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x1
  __int64 v37; // x0
  UILabel_o *detailRight; // x23
  struct UILabel_o *v39; // x23
  System_String_o *v40; // x0
  int32_t v41; // w2
  int v42; // w8
  __int64 v43; // x2
  unsigned int v44; // w9
  __int64 v45; // x23
  unsigned __int64 v46; // x8
  int v47; // w12
  __int64 v48; // x10
  unsigned __int64 v49; // x9
  int v50; // w14
  __int64 v51; // x8
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x1
  __int64 v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x1
  __int64 v73; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x1
  __int64 v84; // x0
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x1
  __int64 v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  __int64 v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x1
  __int64 v106; // x0
  struct UILabel_o *v107; // x23
  System_String_o *mText; // x24
  System_String_o *v109; // x0
  System_String_o *v110; // x0
  struct UILabel_o *v111; // x23
  System_String_o *v112; // x0
  int32_t v113; // w2
  int v114; // w8
  __int64 v115; // x2
  unsigned int v116; // w10
  unsigned __int64 v117; // x9
  int v118; // w8
  __int64 v119; // x10
  int v120; // w13
  struct UILabel_o *v121; // x21
  int v122; // w24
  System_String_o *v123; // x22
  System_String_o *v124; // x23
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  __int64 v128; // x1
  __int64 v129; // x2
  System_String_o *v130; // x21
  int32_t autoOrganizationMode; // w20
  System_String_o **v132; // x8
  System_String_o *v133; // x0
  struct UILabel_o *v134; // x19
  System_String_o *v135; // x0
  int v136; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596BF52 & 1) == 0 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_2167/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/);
    sub_2213A60(&StringLiteral_2168/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_2213A60(&StringLiteral_2163/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/);
    sub_2213A60(&StringLiteral_12317/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_2213A60(&StringLiteral_12523/*"SERVANT_UNIT"*/);
    sub_2213A60(&StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_2213A60(&StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_2213A60(&StringLiteral_2164/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/);
    sub_2213A60(&StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_596BF52 = 1;
  }
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, method, v2);
  if ( !byte_596BFD1 )
  {
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    byte_596BFD1 = 1;
  }
  v4 = AutoOrganizationManager_TypeInfo;
  if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, method, v2);
    v4 = AutoOrganizationManager_TypeInfo;
  }
  autoOrganizationInfo = v4->static_fields->autoOrganizationInfo;
  Filter_50882528 = sub_2213B20(bool___TypeInfo, 13);
  if ( !autoOrganizationInfo )
    goto LABEL_121;
  v8 = Filter_50882528;
  v9 = 0;
  v10 = Filter_50882528 + 32;
  do
  {
    Filter_50882528 = ListViewSort__GetFilter_50882528(autoOrganizationInfo, v9, 0);
    if ( !v8 )
      goto LABEL_121;
    if ( v9 >= *(unsigned int *)(v8 + 24) )
      goto LABEL_120;
    *(_BYTE *)(v10 + v9++) = Filter_50882528 & 1;
  }
  while ( v9 != 13 );
  v11 = sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( *(_DWORD *)(v8 + 24) < 2u )
LABEL_120:
    sub_2213CE4(Filter_50882528);
  if ( *(_BYTE *)(v8 + 32) )
    v14 = *(_BYTE *)(v8 + 33) == 0;
  else
    v14 = 0;
  v15 = !v14;
  if ( *(_BYTE *)(v8 + 32) || !*(_BYTE *)(v8 + 33) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2164/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_SERVANT"*/, 0);
    if ( !v11 )
      goto LABEL_121;
    v33 = *(_QWORD *)(v11 + 16);
    v34 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v33 )
      goto LABEL_121;
    v35 = *(int *)(v11 + 24);
    v36 = Filter_50882528;
    if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_50882528,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      if ( !v15 )
        goto LABEL_38;
    }
    else
    {
      v37 = v33 + 8 * v35;
      *(_DWORD *)(v11 + 24) = v35 + 1;
      *(_QWORD *)(v37 + 32) = v36;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 32), v36, v27, v28, v29, v30, v31, v32);
      if ( (v15 & 1) == 0 )
        goto LABEL_38;
    }
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2163/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_KIND_EQUIP"*/, 0);
  if ( !v11 )
    goto LABEL_121;
  v22 = *(_QWORD *)(v11 + 16);
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(v11 + 28);
  if ( !v22 )
    goto LABEL_121;
  v24 = *(int *)(v11 + 24);
  v25 = Filter_50882528;
  if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v11,
      (Il2CppObject *)Filter_50882528,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v22 + 8 * v24;
    *(_DWORD *)(v11 + 24) = v24 + 1;
    *(_QWORD *)(v26 + 32) = v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), v25, v16, v17, v18, v19, v20, v21);
  }
LABEL_38:
  detailRight = this->fields.detailRight;
  Filter_50882528 = (__int64)System_String__Join_75699092(
                               (System_String_o *)StringLiteral_113/*" "*/,
                               (System_Collections_Generic_IEnumerable_string__o *)v11,
                               0);
  if ( !detailRight )
    goto LABEL_121;
  UILabel__set_text(detailRight, (System_String_o *)Filter_50882528, 0);
  v39 = this->fields.detailRight;
  if ( !v39 )
    goto LABEL_121;
  v40 = System_String__Concat_75651716(v39->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v39, v40, 0);
  v41 = *(_DWORD *)(v11 + 24);
  v42 = *(_DWORD *)(v11 + 28) + 1;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = v42;
  if ( v41 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v11 + 16), 0, v41, 0);
  Filter_50882528 = sub_2213B20(bool___TypeInfo, 5);
  v44 = *(_DWORD *)(v8 + 24);
  v45 = Filter_50882528;
  v46 = 0;
  LOBYTE(v47) = 1;
  if ( v44 <= 2 )
    v44 = 2;
  v48 = v44 - 2;
  do
  {
    if ( v48 == v46 )
      goto LABEL_120;
    if ( !Filter_50882528 )
      goto LABEL_121;
    v49 = *(unsigned int *)(Filter_50882528 + 24);
    if ( v46 >= v49 )
      goto LABEL_120;
    v50 = *(unsigned __int8 *)(v8 + 34 + v46);
    *(_BYTE *)(Filter_50882528 + 32 + v46++) = v50;
    v47 = (v50 == 0) & (unsigned __int8)v47;
  }
  while ( v46 != 5 );
  if ( v47 )
  {
    v51 = 0;
    while ( v49 != v51 )
    {
      *(_BYTE *)(Filter_50882528 + 32 + v51++) = 1;
      if ( v51 == 5 )
        goto LABEL_53;
    }
    goto LABEL_120;
  }
LABEL_53:
  if ( (unsigned int)v49 <= 4 )
    goto LABEL_120;
  if ( *(_BYTE *)(Filter_50882528 + 36) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v43);
    Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0);
    v58 = *(_QWORD *)(v11 + 16);
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v58 )
      goto LABEL_121;
    v60 = *(int *)(v11 + 24);
    v61 = Filter_50882528;
    if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_50882528,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = v58 + 8 * v60;
      *(_DWORD *)(v11 + 24) = v60 + 1;
      *(_QWORD *)(v62 + 32) = v61;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 32), v61, v52, v53, v54, v55, v56, v57);
    }
  }
  if ( (*(_DWORD *)(v45 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_120;
  if ( *(_BYTE *)(v45 + 35) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v43);
    Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
    v69 = *(_QWORD *)(v11 + 16);
    v70 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v69 )
      goto LABEL_121;
    v71 = *(int *)(v11 + 24);
    v72 = Filter_50882528;
    if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_50882528,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = v69 + 8 * v71;
      *(_DWORD *)(v11 + 24) = v71 + 1;
      *(_QWORD *)(v73 + 32) = v72;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 32), v72, v63, v64, v65, v66, v67, v68);
    }
  }
  if ( *(_DWORD *)(v45 + 24) <= 2u )
    goto LABEL_120;
  if ( *(_BYTE *)(v45 + 34) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v43);
    Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
    v80 = *(_QWORD *)(v11 + 16);
    v81 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v80 )
      goto LABEL_121;
    v82 = *(int *)(v11 + 24);
    v83 = Filter_50882528;
    if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_50882528,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = v80 + 8 * v82;
      *(_DWORD *)(v11 + 24) = v82 + 1;
      *(_QWORD *)(v84 + 32) = v83;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v84 + 32), v83, v74, v75, v76, v77, v78, v79);
    }
  }
  if ( (*(_DWORD *)(v45 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_120;
  if ( *(_BYTE *)(v45 + 33) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v43);
    Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
    v91 = *(_QWORD *)(v11 + 16);
    v92 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v91 )
      goto LABEL_121;
    v93 = *(int *)(v11 + 24);
    v94 = Filter_50882528;
    if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_50882528,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      v95 = v91 + 8 * v93;
      *(_DWORD *)(v11 + 24) = v93 + 1;
      *(_QWORD *)(v95 + 32) = v94;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v95 + 32), v94, v85, v86, v87, v88, v89, v90);
    }
  }
  if ( !*(_DWORD *)(v45 + 24) )
    goto LABEL_120;
  if ( *(_BYTE *)(v45 + 32) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v43);
    Filter_50882528 = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
    v102 = *(_QWORD *)(v11 + 16);
    v103 = Method_System_Collections_Generic_List_string__Add__;
    ++*(_DWORD *)(v11 + 28);
    if ( !v102 )
      goto LABEL_121;
    v104 = *(int *)(v11 + 24);
    v105 = Filter_50882528;
    if ( (unsigned int)v104 >= *(_DWORD *)(v102 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v11,
        (Il2CppObject *)Filter_50882528,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    }
    else
    {
      v106 = v102 + 8 * v104;
      *(_DWORD *)(v11 + 24) = v104 + 1;
      *(_QWORD *)(v106 + 32) = v105;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v106 + 32), v105, v96, v97, v98, v99, v100, v101);
    }
  }
  v107 = this->fields.detailRight;
  if ( !v107 )
    goto LABEL_121;
  mText = v107->fields.mText;
  v109 = System_String__Join_75699092(
           (System_String_o *)StringLiteral_113/*" "*/,
           (System_Collections_Generic_IEnumerable_string__o *)v11,
           0);
  v110 = System_String__Concat_75651716(mText, v109, 0);
  UILabel__set_text(v107, v110, 0);
  v111 = this->fields.detailRight;
  if ( !v111 )
    goto LABEL_121;
  v112 = System_String__Concat_75651716(v111->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v111, v112, 0);
  v113 = *(_DWORD *)(v11 + 24);
  v114 = *(_DWORD *)(v11 + 28) + 1;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = v114;
  if ( v113 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v11 + 16), 0, v113, 0);
  Filter_50882528 = sub_2213B20(bool___TypeInfo, 6);
  v116 = *(_DWORD *)(v8 + 24);
  v117 = 0;
  v118 = 0;
  if ( v116 <= 7 )
    v116 = 7;
  v119 = v116 - 7;
  do
  {
    if ( v119 == v117 )
      goto LABEL_120;
    if ( !Filter_50882528 )
      goto LABEL_121;
    if ( v117 >= *(unsigned int *)(Filter_50882528 + 24) )
      goto LABEL_120;
    v120 = *(unsigned __int8 *)(v8 + 39 + v117);
    *(_BYTE *)(Filter_50882528 + 32 + v117++) = v120;
    if ( v120 )
      v118 = v117;
  }
  while ( v117 != 6 );
  v121 = this->fields.detailRight;
  v122 = v118 ? v118 : 6;
  if ( !v121 )
LABEL_121:
    sub_2213CDC(Filter_50882528, v7);
  v123 = v121->fields.mText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v115);
  v124 = LocalizationManager__Get((System_String_o *)StringLiteral_12523/*"SERVANT_UNIT"*/, 0);
  v136 = v122;
  v125 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v136);
  v126 = System_String__Format(v124, v125, 0);
  v127 = System_String__Concat_75651716(v123, v126, 0);
  UILabel__set_text(v121, v127, 0);
  if ( this->fields.preQuest )
  {
    v130 = (System_String_o *)StringLiteral_43/*"\n"*/;
    autoOrganizationMode = autoOrganizationInfo->fields.autoOrganizationMode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128, v129);
    v132 = (System_String_o **)&StringLiteral_2167/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_ALL"*/;
    if ( autoOrganizationMode != 1 )
      v132 = (System_String_o **)&StringLiteral_2168/*"AUTO_ORGANIZATION_CONFIRM_DETAIL_MODE_USE_ENEMY_CLASS_MAIN"*/;
    v133 = LocalizationManager__Get(*v132, 0);
    Filter_50882528 = (__int64)System_String__Concat_75651716(v130, v133, 0);
    v134 = this->fields.detailRight;
    if ( v134 )
    {
      v135 = System_String__Concat_75651716(v134->fields.mText, (System_String_o *)Filter_50882528, 0);
      UILabel__set_text(v134, v135, 0);
      return;
    }
    goto LABEL_121;
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog__add_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v13; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BF49 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_596BF49 = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_closeFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_221405C(
                                                              v8,
                                                              PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
                                                              v9,
                                                              v10);
  PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(v13, v14, v15);
}


System_String_o *PartyOrganizationAutoOrganizationConfirmDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596BF53 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3194/*"BaseWindow/CancelButton"*/);
    byte_596BF53 = 1;
  }
  return (System_String_o *)StringLiteral_3194/*"BaseWindow/CancelButton"*/;
}


void PartyOrganizationAutoOrganizationConfirmDialog__remove_closeFunc(
        PartyOrganizationAutoOrganizationConfirmDialog_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o **p_closeFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *closeFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationAutoOrganizationConfirmDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BF4A & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    byte_596BF4A = 1;
  }
  closeFunc = this->fields.closeFunc;
  p_closeFunc = &this->fields.closeFunc;
  v6 = (System_Delegate_o *)closeFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_c *)v8->klass != PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_closeFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationAutoOrganizationConfirmDialog_o *)sub_221405C(
                                                              v8,
                                                              PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
                                                              v9,
                                                              v10);
  PartyOrganizationAutoOrganizationConfirmDialog__Awake(v13, v14);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2004174;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200412C;
}


System_IAsyncResult_o *PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__BeginInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
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


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__EndInvoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate__Invoke(
        PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___ctor(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__0(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *v4; // x19
  System_Action_o *_9__1; // x23
  PartyOrganizationAutoOrganizationSettingDialog_o *settingDialog; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x2
  AutoOrganizationManager_c *v14; // x0

  v4 = this;
  if ( (byte_596BF55 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AutoOrganizationManager_TypeInfo);
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)sub_2213A60(&Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__);
    byte_596BF55 = 1;
  }
  _9__1 = v4->fields.__9__1;
  settingDialog = v4->fields.settingDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0__OnClickSetting_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !settingDialog )
    goto LABEL_17;
  PartyOrganizationAutoOrganizationSettingDialog__Close_40888972(settingDialog, _9__1, method);
  if ( isDecide )
  {
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide, v13);
    if ( !byte_596BFD1 )
    {
      sub_2213A60(&AutoOrganizationManager_TypeInfo);
      byte_596BFD1 = 1;
    }
    v14 = AutoOrganizationManager_TypeInfo;
    if ( !*(&AutoOrganizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AutoOrganizationManager_TypeInfo, isDecide, v13);
      v14 = AutoOrganizationManager_TypeInfo;
    }
    this = (PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *)v14->static_fields->autoOrganizationInfo;
    if ( this )
    {
      ListViewSort__Save((ListViewSort_o *)this, 0);
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
    sub_2213CDC(this, isDecide);
  }
}


void PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0___OnClickSetting_b__1(
        PartyOrganizationAutoOrganizationConfirmDialog___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *go; // x19

  if ( (byte_596BF56 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF56 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83459800(go, 0);
}