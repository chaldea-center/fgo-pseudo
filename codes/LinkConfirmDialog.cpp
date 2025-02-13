void __fastcall LinkConfirmDialog___cctor(const MethodInfo *method)
{
  struct LinkConfirmDialog_StaticFields *static_fields; // x8
  LinkConfirmDialog_c *v2; // x8
  int32x2_t *v3; // x9
  struct LinkConfirmDialog_StaticFields *v4; // x10
  struct UnityEngine_Vector3_StaticFields *v5; // x9
  float z; // s1
  struct LinkConfirmDialog_StaticFields *v7; // x9
  struct LinkConfirmDialog_StaticFields *v8; // x8

  if ( (byte_4BDEF7E & 1) == 0 )
  {
    sub_1C21E38(&LinkConfirmDialog_TypeInfo);
    byte_4BDEF7E = 1;
  }
  static_fields = LinkConfirmDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->MESSAGE_BASE_POS.fields.x = 0x41F8000000000000LL;
  static_fields->MESSAGE_BASE_POS.fields.z = 0.0;
  v2 = LinkConfirmDialog_TypeInfo;
  v3 = (int32x2_t *)LinkConfirmDialog_TypeInfo->static_fields;
  v3[2].n64_u64[0] = 0xF0000002E4LL;
  v3[3].n64_u64[0] = vdup_n_s32(0x3F70A3D7u).n64_u64[0];
  v3[4].n64_u32[0] = 1065353216;
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v2 = LinkConfirmDialog_TypeInfo;
    byte_4BD6BB6 = 1;
  }
  v4 = v2->static_fields;
  v5 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v5->oneVector.fields.z;
  *(_QWORD *)&v4->DIALOG_TEXTURE_END_SCALE.fields.x = *(_QWORD *)&v5->oneVector.fields.x;
  v4->DIALOG_TEXTURE_END_SCALE.fields.z = z;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->DIALOG_TEXTURE_START_POSITION.fields.x = 0x42EEC28F00000000LL;
  v7->DIALOG_TEXTURE_START_POSITION.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->DIALOG_TEXTURE_END_POSITION.fields.x = 0x42FE000000000000LL;
  v8->DIALOG_TEXTURE_END_POSITION.fields.z = 0.0;
}


void __fastcall LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDEF7D & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDEF7D = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 22;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LinkConfirmDialog__Close(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LinkConfirmDialog__Close_44475836(this, 0LL, v2);
}


void __fastcall LinkConfirmDialog__Close_44475836(
        LinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BDEF78 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_LinkConfirmDialog_EndClose__);
    byte_4BDEF78 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall LinkConfirmDialog__DestroyBannerWWW(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  PartyOrganizationUtility_o *p_bannerWWW; // x19
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  p_bannerWWW = (PartyOrganizationUtility_o *)&this->fields.bannerWWW;
  bannerWWW = this->fields.bannerWWW;
  if ( bannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(bannerWWW, 0LL);
    p_bannerWWW->klass = 0LL;
    sub_1C21DDC(p_bannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall LinkConfirmDialog__EndClose(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  LinkConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1C21DDC(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall LinkConfirmDialog__EndOpen(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall LinkConfirmDialog__Init(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  void *v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  if ( (byte_4BDEF76 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDEF76 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v3 = StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.linkUrl, (int64_t)v3, v4, v5, v6, v7, v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1C22094(0LL, v11);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4BDEF7A & 1) == 0 )
  {
    sub_1C21E38(&Method_LinkConfirmDialog_OnClickCancel__);
    byte_4BDEF7A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_LinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_LinkConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall LinkConfirmDialog__OnClickOk(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8
  System_String_o *linkUrl; // x19

  if ( (byte_4BDEF79 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    byte_4BDEF79 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
    if ( !System_String__IsNullOrEmpty(this->fields.linkUrl, 0LL) )
    {
      linkUrl = this->fields.linkUrl;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      UnityEngine_Application__OpenURL(linkUrl, 0LL);
    }
  }
}


void __fastcall LinkConfirmDialog__Open(
        LinkConfirmDialog_o *this,
        System_String_o *message,
        LinkConfirmDialog_ClickDelegate_o *func,
        System_String_o *linkUrl,
        System_String_o *linkTexture,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t messageFontSize,
        const MethodInfo *method)
{
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UIPanel_o *TargetPanel; // x21
  UILabel_o *Instance; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v27; // x27
  System_String_o *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  LinkConfirmDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Action_o *v39; // x24
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  const MethodInfo *v46; // x2
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v49; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  UILabel_o *v51; // x22
  System_Action_o *v52; // x20

  if ( (byte_4BDEF77 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_LinkConfirmDialog_EndOpen__);
    sub_1C21E38(&Method_LinkConfirmDialog__Open_b__28_0__);
    sub_1C21E38(&LinkConfirmDialog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_3817/*"COMMON_CONFIRM_TO_WEBVIEW"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDEF77 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_57;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v17, v18, v19, v20, v21, v22);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v27 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    }
    if ( !v27 )
      goto LABEL_57;
    UIWidget__SetDimensions(
      v27,
      Instance->fields.onChange->fields.method_ptr,
      Instance->fields.onChange->fields.invoke_impl,
      0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    UILabel__set_maxLineCount(Instance, maxLine, 0LL);
    Instance = this->fields.messageLabel;
    if ( !messageFontSize )
      messageFontSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !Instance )
      goto LABEL_57;
    UILabel__set_fontSize(Instance, messageFontSize, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    v28 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v28, Instance->fields.mFontSize, 0, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v30 = LinkConfirmDialog_TypeInfo;
    v31 = gameObject;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v30 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v31, v30->static_fields->MESSAGE_BASE_POS, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) && !System_String__IsNullOrEmpty(linkTexture, 0LL) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    Instance = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (UILabel_o *)this->fields.baseWindow;
    if ( !Instance )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v39 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0LL);
    this->fields.afterLoadAction = v39;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.afterLoadAction, (int64_t)v39, v40, v41, v42, v43, v44, v45);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v46);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  this->fields.linkUrl = linkUrl;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.linkUrl, (int64_t)linkUrl, v33, v34, v35, v36, v37, v38);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v49 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3817/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0LL);
    if ( !v49 )
      goto LABEL_57;
    UILabel__set_text(v49, (System_String_o *)Instance, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v51 = this->fields.cancelBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v51 )
      goto LABEL_57;
    UILabel__set_text(v51, (System_String_o *)Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( (panelDepth & 0x80000000) != 0 )
      panelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, panelDepth, 0LL);
      goto LABEL_56;
    }
LABEL_57:
    sub_1C22094(Instance, v25);
  }
LABEL_56:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v52 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
}


void __fastcall LinkConfirmDialog__Release(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  const MethodInfo *v4; // x1
  void *mUiTexture; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Object_o *cancelBtnLabel; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v9; // x8
  UnityEngine_Object_o *v10; // x20
  struct LinkableTexture_o *v11; // x8
  int32_t v12; // w20
  int v13; // w24
  UnityEngine_Object_o *gameObject; // x21
  int32_t v15; // w2
  int v16; // w8
  int32_t v17; // w20
  int v18; // w24
  UnityEngine_Object_o *v19; // x21
  UnityEngine_Object_o *v20; // x0
  int32_t v21; // w2
  int v22; // w8

  if ( (byte_4BDEF7C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDEF7C = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    mUiTexture = this->fields.messageLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    mUiTexture = this->fields.okBtnLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    mUiTexture = this->fields.cancelBtnLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  LinkConfirmDialog__DestroyBannerWWW(this, v4);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mUiTexture = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)mUiTexture & 1) != 0 )
  {
    v9 = this->fields.lnkTexture;
    if ( v9 )
    {
      mUiTexture = v9->fields.mUiTexture;
      if ( mUiTexture )
      {
        v10 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mUiTexture + 728LL))(
                                        mUiTexture,
                                        *(_QWORD *)(*(_QWORD *)mUiTexture + 736LL));
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v10, 0LL);
        v11 = this->fields.lnkTexture;
        if ( v11 )
        {
          mUiTexture = v11->fields.mUiTexture;
          if ( mUiTexture )
          {
            (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)mUiTexture + 744LL))(
              mUiTexture,
              0LL,
              *(_QWORD *)(*(_QWORD *)mUiTexture + 752LL));
            goto LABEL_28;
          }
        }
      }
    }
LABEL_48:
    sub_1C22094(mUiTexture, v4);
  }
LABEL_28:
  mUiTexture = this->fields.additionalSprites;
  if ( mUiTexture )
  {
    v12 = 0;
    v13 = *((_DWORD *)mUiTexture + 6) & ~(*((int *)mUiTexture + 6) >> 31);
    while ( v13 != v12 )
    {
      mUiTexture = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)mUiTexture,
                     v12,
                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
      if ( mUiTexture )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mUiTexture,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        mUiTexture = this->fields.additionalSprites;
        ++v12;
        if ( mUiTexture )
          continue;
      }
      goto LABEL_48;
    }
    v15 = *((_DWORD *)mUiTexture + 6);
    v16 = *((_DWORD *)mUiTexture + 7) + 1;
    *((_DWORD *)mUiTexture + 6) = 0;
    *((_DWORD *)mUiTexture + 7) = v16;
    if ( v15 >= 1 )
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v15, 0LL);
  }
  mUiTexture = this->fields.additionalTextures;
  if ( mUiTexture )
  {
    v17 = 0;
    v18 = *((_DWORD *)mUiTexture + 6) & ~(*((int *)mUiTexture + 6) >> 31);
    while ( v18 != v17 )
    {
      mUiTexture = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)mUiTexture,
                     v17,
                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
      if ( mUiTexture )
      {
        mUiTexture = (void *)*((_QWORD *)mUiTexture + 6);
        if ( mUiTexture )
        {
          v19 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mUiTexture + 728LL))(
                                          mUiTexture,
                                          *(_QWORD *)(*(_QWORD *)mUiTexture + 736LL));
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(v19, 0LL);
          mUiTexture = this->fields.additionalTextures;
          if ( mUiTexture )
          {
            mUiTexture = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)mUiTexture,
                           v17,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
            if ( mUiTexture )
            {
              v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)mUiTexture,
                                              0LL);
              UnityEngine_Object__Destroy_70869612(v20, 0LL);
              mUiTexture = this->fields.additionalTextures;
              ++v17;
              if ( mUiTexture )
                continue;
            }
          }
        }
      }
      goto LABEL_48;
    }
    v21 = *((_DWORD *)mUiTexture + 6);
    v22 = *((_DWORD *)mUiTexture + 7) + 1;
    *((_DWORD *)mUiTexture + 6) = 0;
    *((_DWORD *)mUiTexture + 7) = v22;
    if ( v21 >= 1 )
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v21, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDEF7B & 1) == 0 )
  {
    sub_1C21E38(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
    byte_4BDEF7B = 1;
  }
  v5 = sub_1C22084(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = linkTexture;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)linkTexture, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall LinkConfirmDialog___Open_b__28_0(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  LinkConfirmDialog_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  BaseDialog_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4BDEF7F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&Method_LinkConfirmDialog_EndOpen__);
    sub_1C21E38(&LinkConfirmDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDEF7F = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
    if ( baseWindow )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
      v6 = LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        v6 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v6->static_fields->DIALOG_TEXTURE_START_SCALE, 0LL);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
      if ( baseWindow )
      {
        v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
        v8 = BaseDialog_TypeInfo;
        if ( !BaseDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
          v8 = BaseDialog_TypeInfo;
        }
        TweenScale__Begin(
          v7,
          v8->static_fields->OPEN_TIME,
          LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE,
          0LL);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
        if ( baseWindow )
        {
          v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
          GameObjectExtensions__SetLocalPosition(
            v9,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0LL);
          baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
          if ( baseWindow )
          {
            v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
            TweenPosition__Begin(
              v10,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0LL);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1C22094(baseWindow, method);
  }
LABEL_16:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkConfirmDialog_ClickDelegate___ctor(
        LinkConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A65B5C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A65B14;
}


System_IAsyncResult_o *__fastcall LinkConfirmDialog_ClickDelegate__BeginInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4BDEF80 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BDEF80 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall LinkConfirmDialog_ClickDelegate__Invoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall LinkConfirmDialog__StartDownloadBanner_d__35___ctor(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall LinkConfirmDialog__StartDownloadBanner_d__35__MoveNext(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v3; // x19
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *v27; // x1
  System_String_o *v28; // x22
  UnityEngine_Networking_UnityWebRequest_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_Networking_DownloadHandlerTexture_o *v36; // x23
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool v43; // w21
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v44; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  System_String_o *error; // x0
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v54; // x21
  int32_t v55; // w23
  int32_t v56; // w24
  int32_t format; // w25
  UnityEngine_Texture2D_o *v58; // x22
  System_Byte_array *data; // x0
  UnityEngine_Networking_UnityWebRequest_o *v60; // x0
  System_String_o *v61; // x0
  bool IsNullOrEmpty; // w0
  int v63; // w21
  Il2CppObject *Instance; // x21
  System_String_o *v65; // x0
  Il2CppObject *v66; // x23
  System_String_o *v67; // x19
  ErrorDialog_ClickDelegate_o *v68; // x22
  const MethodInfo *v69; // x1
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v70; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8
  int64_t linkTexture; // x1

  v3 = this;
  if ( (byte_4BDEF82 & 1) == 0 )
  {
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C21E38(&LinkConfirmDialog_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    sub_1C21E38(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__);
    sub_1C21E38(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
    sub_1C21E38(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_1C21E38(&StringLiteral_9428/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4BDEF82 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_53;
    bannerWWW = _4__this->fields.bannerWWW;
    if ( !bannerWWW )
      goto LABEL_36;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(bannerWWW, 0LL) )
      goto LABEL_26;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_53;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0LL);
      if ( !v3->fields._texDl_5__2 )
        goto LABEL_53;
      v54 = this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                 this,
                                                                 this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v3->fields._texDl_5__2 )
        goto LABEL_53;
      v55 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                 this,
                                                                 this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v3->fields._texDl_5__2 )
        goto LABEL_53;
      v56 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v58 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_70757788(v58, v55, v56, format, 0, 0LL);
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_70974788(v58, data, 0LL);
    }
    else
    {
LABEL_26:
      v58 = 0LL;
      v54 = 0LL;
    }
    v60 = _4__this->fields.bannerWWW;
    if ( !v60 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v60, 0LL) )
      goto LABEL_36;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_53;
    v61 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v61, 0LL);
    if ( !v54 || !IsNullOrEmpty || !v54->fields.__2__current )
      goto LABEL_36;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Object__op_Equality(
                                                               (UnityEngine_Object_o *)v58,
                                                               0LL,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = _4__this->fields.lnkTexture;
      if ( lnkTexture )
      {
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)lnkTexture->fields.mUiTexture;
        if ( this )
        {
          (*(void (__fastcall **)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
            this,
            v58,
            this->klass[1].vtable._0_Equals.methodPtr);
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)lnkTexture,
                                                                     0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            _8__1 = v3->fields.__8__1;
            if ( _8__1 )
            {
              linkTexture = (int64_t)_8__1->fields.linkTexture;
              lnkTexture->fields.linkUrl = (struct System_String_o *)linkTexture;
              lnkTexture->fields.linkType = 0;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&lnkTexture->fields.linkUrl,
                linkTexture,
                v74,
                v75,
                v76,
                v77,
                v78,
                v79);
              ActionExtensions__Call(_4__this->fields.afterLoadAction, 0LL);
              goto LABEL_45;
            }
          }
        }
      }
    }
    else
    {
LABEL_36:
      v63 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v63;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      }
      if ( v63 <= (__int64)this[2].fields._texDl_5__2->klass )
      {
        v70 = v3->fields.__8__1;
        if ( !v70 )
          goto LABEL_53;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v70->fields.linkTexture, v2);
        UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
        goto LABEL_45;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_9428/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v66 = (Il2CppObject *)v3->fields.__8__1;
      v67 = v65;
      v68 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v68,
        v66,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v67, v68, 0, 0LL);
LABEL_45:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, v69);
        return 0;
      }
    }
LABEL_53:
    sub_1C22094(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v6 = (Il2CppObject *)sub_1C22084(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v6, 0LL);
  v3->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v6;
  p__8__1 = &v3->fields.__8__1;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__8__1, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v20 = (int64_t)v3->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v20, v14, v15, v16, v17, v18, v19);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v27 = (Il2CppObject *)v3->fields.linkTexture;
  this->fields.__2__current = v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v27, v21, v22, v23, v24, v25, v26);
  if ( !*p__8__1 )
    goto LABEL_53;
  v28 = (*p__8__1)->fields.linkTexture;
  v29 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C22084(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v29, v28, 0LL);
  if ( !_4__this )
    goto LABEL_53;
  _4__this->fields.bannerWWW = v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.bannerWWW, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C22084(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v36, 0, 0LL);
  v3->fields._texDl_5__2 = v36;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields._texDl_5__2, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  if ( !this )
    goto LABEL_53;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v3->fields._texDl_5__2,
    0LL);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  v43 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !this )
    goto LABEL_53;
  v44 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v44;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v44, v46, v47, v48, v49, v50, v51);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v43;
}


Il2CppObject *__fastcall LinkConfirmDialog__StartDownloadBanner_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn LinkConfirmDialog__StartDownloadBanner_d__35__System_Collections_IEnumerator_Reset(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall LinkConfirmDialog__StartDownloadBanner_d__35__System_Collections_IEnumerator_get_Current(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall LinkConfirmDialog__StartDownloadBanner_d__35__System_IDisposable_Dispose(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall LinkConfirmDialog___c__DisplayClass35_0___ctor(
        LinkConfirmDialog___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkConfirmDialog___c__DisplayClass35_0___StartDownloadBanner_b__0(
        LinkConfirmDialog___c__DisplayClass35_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  LinkConfirmDialog___c__DisplayClass35_0_o *v4; // x19
  UnityEngine_MonoBehaviour_o *_4__this; // x20
  System_Collections_IEnumerator_o *started; // x1

  v4 = this;
  if ( (byte_4BDEF81 & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BDEF81 = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v4->fields.__4__this, v4->fields.linkTexture, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0LL);
}