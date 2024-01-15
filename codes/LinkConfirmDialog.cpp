void __fastcall LinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LinkConfirmDialog_StaticFields *static_fields; // x8
  LinkConfirmDialog_c *v3; // x8
  int32x2_t *v4; // x8
  LinkConfirmDialog_c *v5; // x8
  struct LinkConfirmDialog_StaticFields *v6; // x9
  struct LinkConfirmDialog_StaticFields *v7; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCC44 & 1) == 0 )
  {
    sub_B16FFC(&LinkConfirmDialog_TypeInfo, v1);
    byte_40FCC44 = 1;
  }
  LinkConfirmDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = LinkConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_BASE_POS.fields.x = 0x41F8000000000000LL;
  static_fields->MESSAGE_BASE_POS.fields.z = 0.0;
  v3 = LinkConfirmDialog_TypeInfo;
  LinkConfirmDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X = 740;
  v3->static_fields->MESSAGE_BASE_SIZE_Y = 240;
  v4 = (int32x2_t *)v3->static_fields;
  v4[3].n64_u64[0] = vdup_n_s32(0x3F70A3D7u).n64_u64[0];
  v4[4].n64_u32[0] = 1065353216;
  one = UnityEngine_Vector3__get_one(0LL);
  v5 = LinkConfirmDialog_TypeInfo;
  LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE = one;
  v6 = v5->static_fields;
  *(_QWORD *)&v6->DIALOG_TEXTURE_START_POSITION.fields.x = 0x42EEC28F00000000LL;
  v6->DIALOG_TEXTURE_START_POSITION.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->DIALOG_TEXTURE_END_POSITION.fields.x = 0x42FE000000000000LL;
  v7->DIALOG_TEXTURE_END_POSITION.fields.z = 0.0;
}


void __fastcall LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FCC43 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FCC43 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 22;
  this->fields.isInitPanelDepth = 1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall LinkConfirmDialog__Close(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LinkConfirmDialog__Close_30168740(this, 0LL, v2);
}


void __fastcall LinkConfirmDialog__Close_30168740(
        LinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FCC3F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_LinkConfirmDialog_EndClose__, v10);
    byte_40FCC3F = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall LinkConfirmDialog__DestroyBannerWWW(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  BattleServantConfConponent_o *p_bannerWWW; // x19
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  p_bannerWWW = (BattleServantConfConponent_o *)&this->fields.bannerWWW;
  bannerWWW = this->fields.bannerWWW;
  if ( bannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(bannerWWW, 0LL);
    p_bannerWWW->klass = 0LL;
    sub_B16F98(p_bannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall LinkConfirmDialog__EndClose(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  LinkConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B16F98(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall LinkConfirmDialog__EndOpen(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall LinkConfirmDialog__Init(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FCC3D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FCC3D = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v3 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.linkUrl, v3, v4, v5, v6, v7, v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  LinkConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_40FCC40 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCC40 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      LinkConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickOk(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  LinkConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( this->fields.isButtonEnable )
  {
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      LinkConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    if ( !System_String__IsNullOrEmpty(this->fields.linkUrl, 0LL) )
      UnityEngine_Application__OpenURL(this->fields.linkUrl, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UIPanel_o *TargetPanel; // x21
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v33; // x27
  LinkConfirmDialog_c *v34; // x0
  UILabel_o *v35; // x0
  UILabel_o *v36; // x0
  struct UILabel_o *v37; // x0
  System_String_o *v38; // x1
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  LinkConfirmDialog_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CommonUI_o *Instance; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x2
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v67; // x22
  System_String_o *v68; // x0
  UnityEngine_Object_o *cancelBtnLabel; // x22
  UILabel_o *v70; // x22
  System_String_o *v71; // x0
  int32_t keepPanelDepth; // w1
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_o *v77; // x20

  if ( (byte_40FCC3E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, message);
    sub_B16FFC(&Method_LinkConfirmDialog_EndOpen__, v16);
    sub_B16FFC(&Method_LinkConfirmDialog__Open_b__28_0__, v17);
    sub_B16FFC(&LinkConfirmDialog_TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v22);
    sub_B16FFC(&StringLiteral_3257/*"COMMON_CONFIRM_TO_WEBVIEW"*/, v23);
    sub_B16FFC(&StringLiteral_1/*""*/, v24);
    byte_40FCC3E = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL) )
    {
      if ( !TargetPanel )
        goto LABEL_67;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v33 = (UIWidget_o *)this->fields.messageLabel;
    v34 = LinkConfirmDialog_TypeInfo;
    if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v34 = LinkConfirmDialog_TypeInfo;
    }
    if ( !v33 )
      goto LABEL_67;
    UIWidget__SetDimensions(v33, v34->static_fields->MESSAGE_BASE_SIZE_X, v34->static_fields->MESSAGE_BASE_SIZE_Y, 0LL);
    v35 = this->fields.messageLabel;
    if ( !v35 )
      goto LABEL_67;
    UILabel__set_maxLineCount(v35, maxLine, 0LL);
    v36 = this->fields.messageLabel;
    if ( !messageFontSize )
      messageFontSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !v36 )
      goto LABEL_67;
    UILabel__set_fontSize(v36, messageFontSize, 0LL);
    v37 = this->fields.messageLabel;
    if ( !v37 )
      goto LABEL_67;
    v38 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v37, v38, v37->fields.mFontSize, 0, 0, 0LL);
    v39 = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !v39 )
      goto LABEL_67;
    gameObject = UnityEngine_Component__get_gameObject(v39, 0LL);
    v41 = LinkConfirmDialog_TypeInfo;
    v42 = gameObject;
    if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v41 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v42, v41->static_fields->MESSAGE_BASE_POS, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) && !System_String__IsNullOrEmpty(linkTexture, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v51 )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(v51, 1, 0LL);
    baseWindow = this->fields.baseWindow;
    if ( !baseWindow )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive(baseWindow, 0, 0LL);
    v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0LL);
    this->fields.afterLoadAction = v57;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.afterLoadAction,
      (System_Int32_array **)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v64);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  this->fields.linkUrl = linkUrl;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkUrl,
    (System_Int32_array **)linkUrl,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v67 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3257/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0LL);
    if ( !v67 )
      goto LABEL_67;
    UILabel__set_text(v67, v68, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v70 = this->fields.cancelBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v70 )
      goto LABEL_67;
    UILabel__set_text(v70, v71, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL) )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, keepPanelDepth, 0LL);
      goto LABEL_66;
    }
LABEL_67:
    sub_B170D4();
  }
LABEL_66:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v77 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v73, v74, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall LinkConfirmDialog__Release(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *messageLabel; // x20
  UILabel_o *v11; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UILabel_o *v13; // x0
  UnityEngine_Object_o *cancelBtnLabel; // x20
  const MethodInfo *v15; // x1
  UILabel_o *v16; // x0
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v18; // x8
  struct UnityEngine_BoxCollider_o *mCollider; // x0
  UnityEngine_Object_o *v20; // x20
  struct LinkableTexture_o *v21; // x8
  struct UnityEngine_BoxCollider_o *v22; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x20
  int size; // w22
  __int64 v25; // x23
  UnityEngine_Component_o *v26; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x20
  int v29; // w22
  __int64 v30; // x23
  unsigned int v31; // w24
  __int64 v32; // x8
  __int64 v33; // x0
  UnityEngine_Object_o *v34; // x20
  struct System_Collections_Generic_List_LinkableTexture__o *v35; // x20
  UnityEngine_Component_o *v36; // x0
  UnityEngine_Object_o *v37; // x0

  if ( (byte_40FCC42 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FCC42 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v11 = this->fields.messageLabel;
    if ( !v11 )
      goto LABEL_60;
    UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v13 = this->fields.okBtnLabel;
    if ( !v13 )
      goto LABEL_60;
    UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v16 = this->fields.cancelBtnLabel;
    if ( !v16 )
      goto LABEL_60;
    UILabel__set_text(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  LinkConfirmDialog__DestroyBannerWWW(this, v15);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    v18 = this->fields.lnkTexture;
    if ( v18 )
    {
      mCollider = v18->fields.mCollider;
      if ( mCollider )
      {
        v20 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UnityEngine_BoxCollider_o *, void *))mCollider->klass[1].vtable._3_ToString.method)(
                                        mCollider,
                                        mCollider->klass[2]._1.image);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v20, 0LL);
        v21 = this->fields.lnkTexture;
        if ( v21 )
        {
          v22 = v21->fields.mCollider;
          if ( v22 )
          {
            ((void (__fastcall *)(struct UnityEngine_BoxCollider_o *, _QWORD, const char *))v22->klass[2]._1.gc_desc)(
              v22,
              0LL,
              v22->klass[2]._1.name);
            goto LABEL_33;
          }
        }
      }
    }
LABEL_60:
    sub_B170D4();
  }
LABEL_33:
  additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
  if ( additionalSprites )
  {
    size = additionalSprites->fields._size;
    v25 = 0LL;
    while ( (int)v25 < size )
    {
      if ( additionalSprites->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v26 = (UnityEngine_Component_o *)additionalSprites->fields._items->m_Items[v25];
      if ( v26 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v26, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
        ++v25;
        if ( additionalSprites )
          continue;
      }
      goto LABEL_60;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      additionalSprites,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
  }
  additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
  if ( additionalTextures )
  {
    v29 = additionalTextures->fields._size;
    v30 = 4LL;
    while ( 1 )
    {
      v31 = v30 - 4;
      if ( (int)v30 - 4 >= v29 )
        break;
      if ( additionalTextures->fields._size <= v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v32 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v30);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 40);
        if ( v33 )
        {
          v34 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 728LL))(
                                          v33,
                                          *(_QWORD *)(*(_QWORD *)v33 + 736LL));
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v34, 0LL);
          v35 = this->fields.additionalTextures;
          if ( v35 )
          {
            if ( v35->fields._size <= v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v36 = (UnityEngine_Component_o *)*((_QWORD *)&v35->fields._items->obj.klass + v30);
            if ( v36 )
            {
              v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v36, 0LL);
              UnityEngine_Object__Destroy_34809464(v37, 0LL);
              additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
              ++v30;
              if ( additionalTextures )
                continue;
            }
          }
        }
      }
      goto LABEL_60;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      additionalTextures,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
  }
}


System_Collections_IEnumerator_o *__fastcall LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FCC41 & 1) == 0 )
  {
    sub_B16FFC(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, linkTexture);
    byte_40FCC41 = 1;
  }
  v7 = sub_B170CC(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, linkTexture, method, v3, v4);
  LinkConfirmDialog__StartDownloadBanner_d__35___ctor((LinkConfirmDialog__StartDownloadBanner_d__35_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = linkTexture;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)linkTexture,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall LinkConfirmDialog___Open_b__28_0(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  LinkConfirmDialog_c *v12; // x8
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x20
  BaseDialog_c *v15; // x8
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  CommonUI_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x20

  if ( (byte_40FCC45 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BaseDialog_TypeInfo, v3);
    sub_B16FFC(&Method_LinkConfirmDialog_EndOpen__, v4);
    sub_B16FFC(&LinkConfirmDialog_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FCC45 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Component_o *)this->fields.lnkTexture;
    if ( v10 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
      v12 = LinkConfirmDialog_TypeInfo;
      if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        v12 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v12->static_fields->DIALOG_TEXTURE_START_SCALE, 0LL);
      v13 = (UnityEngine_Component_o *)this->fields.lnkTexture;
      if ( v13 )
      {
        v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
        v15 = BaseDialog_TypeInfo;
        if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BaseDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
          v15 = BaseDialog_TypeInfo;
        }
        TweenScale__Begin(
          v14,
          v15->static_fields->OPEN_TIME,
          LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE,
          0LL);
        v16 = (UnityEngine_Component_o *)this->fields.lnkTexture;
        if ( v16 )
        {
          v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
          GameObjectExtensions__SetLocalPosition(
            v17,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0LL);
          v18 = (UnityEngine_Component_o *)this->fields.lnkTexture;
          if ( v18 )
          {
            v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
            TweenPosition__Begin(
              v19,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0LL);
            goto LABEL_19;
          }
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkConfirmDialog_ClickDelegate___ctor(
        LinkConfirmDialog_ClickDelegate_o *this,
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
System_IAsyncResult_o *__fastcall LinkConfirmDialog_ClickDelegate__BeginInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_40F6902 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isOk);
    byte_40F6902 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkConfirmDialog_ClickDelegate__Invoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  LinkConfirmDialog_ClickDelegate_o **v7; // x25
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
  LinkConfirmDialog_ClickDelegate_o *v18; // x8
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
  LinkConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (LinkConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isOk, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isOk, v20);
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
        (*v17)(v19, isOk, v17);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isOk, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isOk,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isOk, v20);
    goto LABEL_37;
  }
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
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x19
  Il2CppObject *v18; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v40; // x0
  System_Int32_array **linkTexture; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_String_o *v46; // x22
  UnityEngine_Networking_UnityWebRequest_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  UnityEngine_Networking_DownloadHandlerTexture_o *v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UnityEngine_Networking_UnityWebRequest_o *v65; // x0
  UnityEngine_Networking_UnityWebRequest_o *v66; // x0
  bool v67; // w21
  Il2CppObject *v68; // x0
  Il2CppObject **p__2__current; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  UnityEngine_Networking_UnityWebRequest_o *v77; // x0
  System_String_o *error; // x0
  UnityEngine_Networking_DownloadHandler_o *texDl_5__2; // x0
  System_Byte_array *data; // x0
  System_Byte_array *v81; // x22
  UnityEngine_Object_o *texture; // x21
  UnityEngine_Networking_UnityWebRequest_o *v83; // x0
  UnityEngine_Networking_UnityWebRequest_o *v84; // x0
  System_String_o *v85; // x0
  bool IsNullOrEmpty; // w0
  int v87; // w21
  LinkConfirmDialog_c *v88; // x0
  CommonUI_o *Instance; // x21
  System_String_o *v90; // x0
  Il2CppObject *v91; // x23
  System_String_o *v92; // x20
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  ErrorDialog_ClickDelegate_o *v97; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v98; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x22
  struct UnityEngine_BoxCollider_o *mCollider; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8

  if ( (byte_40F6901 & 1) == 0 )
  {
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_B16FFC(&LinkConfirmDialog_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__, v11);
    sub_B16FFC(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_9264/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v15);
    byte_40F6901 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_50;
    bannerWWW = _4__this->fields.bannerWWW;
    if ( !bannerWWW )
      goto LABEL_31;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(bannerWWW, 0LL) )
      goto LABEL_20;
    v77 = _4__this->fields.bannerWWW;
    if ( !v77 )
      goto LABEL_50;
    error = UnityEngine_Networking_UnityWebRequest__get_error(v77, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      texDl_5__2 = (UnityEngine_Networking_DownloadHandler_o *)this->fields._texDl_5__2;
      if ( !texDl_5__2 )
        goto LABEL_50;
      data = UnityEngine_Networking_DownloadHandler__get_data(texDl_5__2, 0LL);
      if ( !this->fields._texDl_5__2 )
        goto LABEL_50;
      v81 = data;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          this->fields._texDl_5__2,
                                          0LL);
    }
    else
    {
LABEL_20:
      texture = 0LL;
      v81 = 0LL;
    }
    v83 = _4__this->fields.bannerWWW;
    if ( !v83 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v83, 0LL) )
      goto LABEL_31;
    v84 = _4__this->fields.bannerWWW;
    if ( !v84 )
      goto LABEL_50;
    v85 = UnityEngine_Networking_UnityWebRequest__get_error(v84, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v85, 0LL);
    if ( !v81 || !IsNullOrEmpty || !*(_QWORD *)&v81->max_length )
      goto LABEL_31;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(texture, 0LL, 0LL) )
    {
      lnkTexture = _4__this->fields.lnkTexture;
      if ( lnkTexture )
      {
        mCollider = lnkTexture->fields.mCollider;
        if ( mCollider )
        {
          ((void (__fastcall *)(struct UnityEngine_BoxCollider_o *, UnityEngine_Object_o *, const char *))mCollider->klass[2]._1.gc_desc)(
            mCollider,
            texture,
            mCollider->klass[2]._1.name);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            _8__1 = this->fields.__8__1;
            if ( _8__1 )
            {
              LinkableTexture__SetUp(lnkTexture, 0, _8__1->fields.linkTexture, 0LL);
              ActionExtensions__Call(_4__this->fields.afterLoadAction, 0LL);
              goto LABEL_42;
            }
          }
        }
      }
    }
    else
    {
LABEL_31:
      v87 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v87;
      v88 = LinkConfirmDialog_TypeInfo;
      if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        v88 = LinkConfirmDialog_TypeInfo;
      }
      if ( v87 <= v88->static_fields->BANNER_RETRY_MAX )
      {
        v98 = this->fields.__8__1;
        if ( !v98 )
          goto LABEL_50;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v98->fields.linkTexture, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
        goto LABEL_42;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_9264/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v91 = (Il2CppObject *)this->fields.__8__1;
      v92 = v90;
      v97 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v93, v94, v95, v96);
      ErrorDialog_ClickDelegate___ctor(
        v97,
        v91,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v92, v97, 0, 0LL);
LABEL_42:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, 0LL);
        return 0;
      }
    }
LABEL_50:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v18 = (Il2CppObject *)sub_B170CC(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor(v18, 0LL);
  p__8__1 = &this->fields.__8__1;
  this->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.__8__1,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v32 = this->fields.__8__1;
  if ( !v32 )
    goto LABEL_50;
  v33 = (System_Int32_array **)this->fields.__4__this;
  v32->fields.__4__this = (struct LinkConfirmDialog_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v32->fields, v33, v26, v27, v28, v29, v30, v31);
  v40 = this->fields.__8__1;
  if ( !v40 )
    goto LABEL_50;
  linkTexture = (System_Int32_array **)this->fields.linkTexture;
  v40->fields.linkTexture = (struct System_String_o *)linkTexture;
  sub_B16F98((BattleServantConfConponent_o *)&v40->fields.linkTexture, linkTexture, v34, v35, v36, v37, v38, v39);
  if ( !*p__8__1 )
    goto LABEL_50;
  v46 = (*p__8__1)->fields.linkTexture;
  v47 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B170CC(
                                                      UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                      v42,
                                                      v43,
                                                      v44,
                                                      v45);
  UnityEngine_Networking_UnityWebRequest___ctor(v47, v46, 0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.bannerWWW = v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.bannerWWW,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v58 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B170CC(
                                                             UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                             v54,
                                                             v55,
                                                             v56,
                                                             v57);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v58, 0, 0LL);
  this->fields._texDl_5__2 = v58;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._texDl_5__2,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = _4__this->fields.bannerWWW;
  if ( !v65 )
    goto LABEL_50;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    v65,
    (UnityEngine_Networking_DownloadHandler_o *)this->fields._texDl_5__2,
    0LL);
  v66 = _4__this->fields.bannerWWW;
  v67 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !v66 )
    goto LABEL_50;
  v68 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v66, 0LL);
  this->fields.__2__current = v68;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v68, v70, v71, v72, v73, v74, v75);
  *((_DWORD *)p__2__current - 2) = 1;
  return v67;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  UnityEngine_MonoBehaviour_o *_4__this; // x20
  System_Collections_IEnumerator_o *started; // x1
  ManagementManager_o *Instance; // x0

  if ( (byte_40F6900 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_40F6900 = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(this->fields.__4__this, this->fields.linkTexture, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  ManagementManager__reboot(Instance, 0, 0LL);
}