void __fastcall LinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct LinkConfirmDialog_StaticFields *static_fields; // x8
  LinkConfirmDialog_c *v4; // x8
  int32x2_t *v5; // x9
  struct LinkConfirmDialog_StaticFields *v6; // x10
  struct UnityEngine_Vector3_StaticFields *v7; // x9
  float z; // s1
  struct LinkConfirmDialog_StaticFields *v9; // x9
  struct LinkConfirmDialog_StaticFields *v10; // x8

  if ( (byte_4B18B54 & 1) == 0 )
  {
    sub_1BCA7E0(&LinkConfirmDialog_TypeInfo, v1, v2);
    byte_4B18B54 = 1;
  }
  static_fields = LinkConfirmDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->MESSAGE_BASE_POS.fields.x = 0x41F8000000000000LL;
  static_fields->MESSAGE_BASE_POS.fields.z = 0.0;
  v4 = LinkConfirmDialog_TypeInfo;
  v5 = (int32x2_t *)LinkConfirmDialog_TypeInfo->static_fields;
  v5[2].n64_u64[0] = 0xF0000002E4LL;
  v5[3].n64_u64[0] = vdup_n_s32(0x3F70A3D7u).n64_u64[0];
  v5[4].n64_u32[0] = 1065353216;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v1, v2);
    v4 = LinkConfirmDialog_TypeInfo;
    byte_4B109C6 = 1;
  }
  v6 = v4->static_fields;
  v7 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v7->oneVector.fields.z;
  *(_QWORD *)&v6->DIALOG_TEXTURE_END_SCALE.fields.x = *(_QWORD *)&v7->oneVector.fields.x;
  v6->DIALOG_TEXTURE_END_SCALE.fields.z = z;
  v9 = v4->static_fields;
  *(_QWORD *)&v9->DIALOG_TEXTURE_START_POSITION.fields.x = 0x42EEC28F00000000LL;
  v9->DIALOG_TEXTURE_START_POSITION.fields.z = 0.0;
  v10 = v4->static_fields;
  *(_QWORD *)&v10->DIALOG_TEXTURE_END_POSITION.fields.x = 0x42FE000000000000LL;
  v10->DIALOG_TEXTURE_END_POSITION.fields.z = 0.0;
}


void __fastcall LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18B53 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B18B53 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 22;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LinkConfirmDialog__Close(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LinkConfirmDialog__Close_43890484(this, 0LL, v2);
}


void __fastcall LinkConfirmDialog__Close_43890484(
        LinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B18B4E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_LinkConfirmDialog_EndClose__, v10, v11);
    byte_4B18B4E = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_1BCA784(p_bannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_1BCA784(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  void *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_4B18B4C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B18B4C = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v4 = StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkUrl, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v12);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B18B50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_LinkConfirmDialog_OnClickCancel__, method, v2);
    byte_4B18B50 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_LinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_LinkConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
  __int64 v2; // x2
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8
  __int64 v5; // x1
  System_String_o *linkUrl; // x19

  if ( (byte_4B18B4F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    byte_4B18B4F = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v5);
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UIPanel_o *TargetPanel; // x21
  UILabel_o *Instance; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v47; // x27
  System_String_o *v48; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x1
  LinkConfirmDialog_c *v51; // x8
  UnityEngine_GameObject_o *v52; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Action_o *v63; // x24
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x2
  System_Collections_IEnumerator_o *started; // x0
  __int64 v72; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v74; // x1
  UILabel_o *v75; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  __int64 v77; // x1
  UILabel_o *v78; // x22
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Action_o *v82; // x20

  if ( (byte_4B18B4D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, message, func);
    sub_1BCA7E0(&Method_LinkConfirmDialog_EndOpen__, v17, v18);
    sub_1BCA7E0(&Method_LinkConfirmDialog__Open_b__28_0__, v19, v20);
    sub_1BCA7E0(&LinkConfirmDialog_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3793/*"COMMON_CONFIRM_TO_WEBVIEW"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    byte_4B18B4D = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_57;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v36, v37, v38, v39, v40, v41);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v47 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, v44);
      Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    }
    if ( !v47 )
      goto LABEL_57;
    UIWidget__SetDimensions(
      v47,
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
    v48 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v48, Instance->fields.mFontSize, 0, 0, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v51 = LinkConfirmDialog_TypeInfo;
    v52 = gameObject;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, v50);
      v51 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v52, v51->static_fields->MESSAGE_BASE_POS, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) && !System_String__IsNullOrEmpty(linkTexture, 0LL) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v63 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
    System_Action___ctor(v63, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0LL);
    this->fields.afterLoadAction = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterLoadAction, (int64_t)v63, v64, v65, v66, v67, v68, v69);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v70);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  this->fields.linkUrl = linkUrl;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkUrl, (int64_t)linkUrl, v54, v55, v56, v57, v58, v59);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v75 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0LL);
    if ( !v75 )
      goto LABEL_57;
    UILabel__set_text(v75, (System_String_o *)Instance, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v74);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v78 = this->fields.cancelBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v78 )
      goto LABEL_57;
    UILabel__set_text(v78, (System_String_o *)Instance, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
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
    sub_1BCAA3C(Instance, v44);
  }
LABEL_56:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v82 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v79, v80, v81);
  System_Action___ctor(v82, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
}


void __fastcall LinkConfirmDialog__Release(LinkConfirmDialog_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *messageLabel; // x20
  const MethodInfo *v19; // x1
  void *mUiTexture; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Object_o *cancelBtnLabel; // x20
  __int64 v23; // x1
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v25; // x8
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x20
  struct LinkableTexture_o *v28; // x8
  int32_t v29; // w20
  int v30; // w24
  __int64 v31; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v33; // w2
  int v34; // w8
  int32_t v35; // w20
  int v36; // w24
  __int64 v37; // x1
  UnityEngine_Object_o *v38; // x21
  UnityEngine_Object_o *v39; // x0
  int32_t v40; // w2
  int v41; // w8

  if ( (byte_4B18B52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B18B52 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    mUiTexture = this->fields.messageLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    mUiTexture = this->fields.okBtnLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    mUiTexture = this->fields.cancelBtnLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  LinkConfirmDialog__DestroyBannerWWW(this, v19);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  mUiTexture = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)mUiTexture & 1) != 0 )
  {
    v25 = this->fields.lnkTexture;
    if ( v25 )
    {
      mUiTexture = v25->fields.mUiTexture;
      if ( mUiTexture )
      {
        v27 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mUiTexture + 728LL))(
                                        mUiTexture,
                                        *(_QWORD *)(*(_QWORD *)mUiTexture + 736LL));
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
        UnityEngine_Object__Destroy_70154244(v27, 0LL);
        v28 = this->fields.lnkTexture;
        if ( v28 )
        {
          mUiTexture = v28->fields.mUiTexture;
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
    sub_1BCAA3C(mUiTexture, v19);
  }
LABEL_28:
  mUiTexture = this->fields.additionalSprites;
  if ( mUiTexture )
  {
    v29 = 0;
    v30 = *((_DWORD *)mUiTexture + 6) & ~(*((int *)mUiTexture + 6) >> 31);
    while ( v30 != v29 )
    {
      mUiTexture = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)mUiTexture,
                     v29,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
      if ( mUiTexture )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mUiTexture,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        mUiTexture = this->fields.additionalSprites;
        ++v29;
        if ( mUiTexture )
          continue;
      }
      goto LABEL_48;
    }
    v33 = *((_DWORD *)mUiTexture + 6);
    v34 = *((_DWORD *)mUiTexture + 7) + 1;
    *((_DWORD *)mUiTexture + 6) = 0;
    *((_DWORD *)mUiTexture + 7) = v34;
    if ( v33 >= 1 )
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v33, 0LL);
  }
  mUiTexture = this->fields.additionalTextures;
  if ( mUiTexture )
  {
    v35 = 0;
    v36 = *((_DWORD *)mUiTexture + 6) & ~(*((int *)mUiTexture + 6) >> 31);
    while ( v36 != v35 )
    {
      mUiTexture = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)mUiTexture,
                     v35,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
      if ( mUiTexture )
      {
        mUiTexture = (void *)*((_QWORD *)mUiTexture + 6);
        if ( mUiTexture )
        {
          v38 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mUiTexture + 728LL))(
                                          mUiTexture,
                                          *(_QWORD *)(*(_QWORD *)mUiTexture + 736LL));
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
          UnityEngine_Object__Destroy_70154244(v38, 0LL);
          mUiTexture = this->fields.additionalTextures;
          if ( mUiTexture )
          {
            mUiTexture = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)mUiTexture,
                           v35,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
            if ( mUiTexture )
            {
              v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)mUiTexture,
                                              0LL);
              UnityEngine_Object__Destroy_70154244(v39, 0LL);
              mUiTexture = this->fields.additionalTextures;
              ++v35;
              if ( mUiTexture )
                continue;
            }
          }
        }
      }
      goto LABEL_48;
    }
    v40 = *((_DWORD *)mUiTexture + 6);
    v41 = *((_DWORD *)mUiTexture + 7) + 1;
    *((_DWORD *)mUiTexture + 6) = 0;
    *((_DWORD *)mUiTexture + 7) = v41;
    if ( v40 >= 1 )
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v40, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B18B51 & 1) == 0 )
  {
    sub_1BCA7E0(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, linkTexture, method);
    byte_4B18B51 = 1;
  }
  v6 = sub_1BCAA2C(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, linkTexture, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = linkTexture;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)linkTexture, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall LinkConfirmDialog___Open_b__28_0(LinkConfirmDialog_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *lnkTexture; // x20
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  LinkConfirmDialog_c *v19; // x8
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x20
  BaseDialog_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B18B55 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_LinkConfirmDialog_EndOpen__, v6, v7);
    sub_1BCA7E0(&LinkConfirmDialog_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B18B55 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
    if ( baseWindow )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
      v19 = LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, v17);
        v19 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v19->static_fields->DIALOG_TEXTURE_START_SCALE, 0LL);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
      if ( baseWindow )
      {
        v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
        v22 = BaseDialog_TypeInfo;
        if ( !BaseDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v20);
          v22 = BaseDialog_TypeInfo;
        }
        TweenScale__Begin(
          v21,
          v22->static_fields->OPEN_TIME,
          LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE,
          0LL);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
        if ( baseWindow )
        {
          v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
          GameObjectExtensions__SetLocalPosition(
            v23,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0LL);
          baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
          if ( baseWindow )
          {
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
            TweenPosition__Begin(
              v24,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0LL);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(baseWindow, method);
  }
LABEL_16:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F7A0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F758;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B18B56 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B18B56 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v4; // x19
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x20
  Il2CppObject *v29; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  Il2CppObject *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_String_o *v53; // x22
  UnityEngine_Networking_UnityWebRequest_o *v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v64; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  bool v71; // w21
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v72; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  System_String_o *error; // x0
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v82; // x21
  int32_t v83; // w23
  int32_t v84; // w24
  int32_t format; // w25
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  UnityEngine_Texture2D_o *v89; // x22
  System_Byte_array *data; // x0
  UnityEngine_Networking_UnityWebRequest_o *v91; // x0
  System_String_o *v92; // x0
  bool IsNullOrEmpty; // w0
  int v94; // w21
  __int64 v95; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v97; // x0
  Il2CppObject *v98; // x23
  System_String_o *v99; // x19
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  ErrorDialog_ClickDelegate_o *v103; // x22
  const MethodInfo *v104; // x1
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v105; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x21
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8
  int64_t linkTexture; // x1

  v4 = this;
  if ( (byte_4B18B58 & 1) == 0 )
  {
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v5, v6);
    sub_1BCA7E0(&LinkConfirmDialog_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__, v17, v18);
    sub_1BCA7E0(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_1BCA7E0(&StringLiteral_9366/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v25, v26);
    byte_4B18B58 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
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
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0LL);
      if ( !v4->fields._texDl_5__2 )
        goto LABEL_53;
      v82 = this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v4->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                 this,
                                                                 this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v4->fields._texDl_5__2 )
        goto LABEL_53;
      v83 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v4->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                 this,
                                                                 this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v4->fields._texDl_5__2 )
        goto LABEL_53;
      v84 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v4->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v89 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v86, v87, v88);
      UnityEngine_Texture2D___ctor_70042420(v89, v83, v84, format, 0, 0LL);
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_70259252(v89, data, 0LL);
    }
    else
    {
LABEL_26:
      v89 = 0LL;
      v82 = 0LL;
    }
    v91 = _4__this->fields.bannerWWW;
    if ( !v91 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v91, 0LL) )
      goto LABEL_36;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_53;
    v92 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v92, 0LL);
    if ( !v82 || !IsNullOrEmpty || !v82->fields.__2__current )
      goto LABEL_36;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Object__op_Equality(
                                                               (UnityEngine_Object_o *)v89,
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
            v89,
            this->klass[1].vtable._0_Equals.methodPtr);
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)lnkTexture,
                                                                     0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            _8__1 = v4->fields.__8__1;
            if ( _8__1 )
            {
              linkTexture = (int64_t)_8__1->fields.linkTexture;
              lnkTexture->fields.linkUrl = (struct System_String_o *)linkTexture;
              lnkTexture->fields.linkType = 0;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&lnkTexture->fields.linkUrl,
                linkTexture,
                v109,
                v110,
                v111,
                v112,
                v113,
                v114);
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
      v94 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v94;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, method);
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      }
      if ( v94 <= (__int64)this[2].fields._texDl_5__2->klass )
      {
        v105 = v4->fields.__8__1;
        if ( !v105 )
          goto LABEL_53;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v105->fields.linkTexture, v2);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
        goto LABEL_45;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v98 = (Il2CppObject *)v4->fields.__8__1;
      v99 = v97;
      v103 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v100, v101, v102);
      ErrorDialog_ClickDelegate___ctor(
        v103,
        v98,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v99, v103, 0, 0LL);
LABEL_45:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, v104);
        return 0;
      }
    }
LABEL_53:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v29 = (Il2CppObject *)sub_1BCAA2C(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, method, v2, v3);
  System_Object___ctor(v29, 0LL);
  v4->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v29;
  p__8__1 = &v4->fields.__8__1;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v43 = (int64_t)v4->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v43, v37, v38, v39, v40, v41, v42);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v50 = (Il2CppObject *)v4->fields.linkTexture;
  this->fields.__2__current = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v50, v44, v45, v46, v47, v48, v49);
  if ( !*p__8__1 )
    goto LABEL_53;
  v53 = (*p__8__1)->fields.linkTexture;
  v54 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1BCAA2C(
                                                      UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                      method,
                                                      v51,
                                                      v52);
  UnityEngine_Networking_UnityWebRequest___ctor(v54, v53, 0LL);
  if ( !_4__this )
    goto LABEL_53;
  _4__this->fields.bannerWWW = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.bannerWWW, (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v64 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1BCAA2C(
                                                             UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                             v61,
                                                             v62,
                                                             v63);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v64, 0, 0LL);
  v4->fields._texDl_5__2 = v64;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._texDl_5__2, (int64_t)v64, v65, v66, v67, v68, v69, v70);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  if ( !this )
    goto LABEL_53;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__2,
    0LL);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  v71 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !this )
    goto LABEL_53;
  v72 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v72;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v72, v74, v75, v76, v77, v78, v79);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v71;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  if ( (byte_4B18B57 & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_1BCA7E0(
                                                          &Method_SingletonMonoBehaviour_ManagementManager__get_Instance__,
                                                          isDecide,
                                                          method);
    byte_4B18B57 = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v4->fields.__4__this, v4->fields.linkTexture, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0LL);
}