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

  if ( (byte_418713D & 1) == 0 )
  {
    sub_B2C35C(&LinkConfirmDialog_TypeInfo, v1);
    byte_418713D = 1;
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
  if ( (byte_418713C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418713C = 1;
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

  LinkConfirmDialog__Close_24123984(this, 0LL, v2);
}


void __fastcall LinkConfirmDialog__Close_24123984(
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
  System_Action_o *v11; // x20

  if ( (byte_4187138 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_LinkConfirmDialog_EndClose__, v10);
    byte_4187138 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_bannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_B2C2F8(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v11; // x1

  if ( (byte_4187136 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187136 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v3 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.linkUrl, v3, v4, v5, v6, v7, v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v11);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  LinkConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4187139 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187139 = 1;
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
  UILabel_o *Instance; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v35; // x27
  System_String_o *v36; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  LinkConfirmDialog_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Action_o *v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v57; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  UILabel_o *v59; // x22
  System_Action_o *v60; // x20

  if ( (byte_4187137 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&Method_LinkConfirmDialog_EndOpen__, v16);
    sub_B2C35C(&Method_LinkConfirmDialog__Open_b__28_0__, v17);
    sub_B2C35C(&LinkConfirmDialog_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v22);
    sub_B2C35C(&StringLiteral_3266/*"COMMON_CONFIRM_TO_WEBVIEW"*/, v23);
    sub_B2C35C(&StringLiteral_1/*""*/, v24);
    byte_4187137 = 1;
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
    Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_67;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
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
    v35 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    }
    if ( !v35 )
      goto LABEL_67;
    UIWidget__SetDimensions(
      v35,
      Instance->fields.onPostFill->fields.method_ptr,
      Instance->fields.onPostFill->fields.invoke_impl,
      0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_67;
    UILabel__set_maxLineCount(Instance, maxLine, 0LL);
    Instance = this->fields.messageLabel;
    if ( !messageFontSize )
      messageFontSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !Instance )
      goto LABEL_67;
    UILabel__set_fontSize(Instance, messageFontSize, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_67;
    v36 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v36, Instance->fields.mFontSize, 0, 0, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_67;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v38 = LinkConfirmDialog_TypeInfo;
    v39 = gameObject;
    if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v38 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v39, v38->static_fields->MESSAGE_BASE_POS, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) && !System_String__IsNullOrEmpty(linkTexture, 0LL) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
    Instance = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (UILabel_o *)this->fields.baseWindow;
    if ( !Instance )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v47 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0LL);
    this->fields.afterLoadAction = v47;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.afterLoadAction,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v54);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  this->fields.linkUrl = linkUrl;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.linkUrl,
    (System_Int32_array **)linkUrl,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v57 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0LL);
    if ( !v57 )
      goto LABEL_67;
    UILabel__set_text(v57, (System_String_o *)Instance, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v59 = this->fields.cancelBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v59 )
      goto LABEL_67;
    UILabel__set_text(v59, (System_String_o *)Instance, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, keepPanelDepth, 0LL);
      goto LABEL_66;
    }
LABEL_67:
    sub_B2C434(Instance, keepPanelDepth);
  }
LABEL_66:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v60 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
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
  const MethodInfo *v11; // x1
  UILabel_o *mCollider; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Object_o *cancelBtnLabel; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v16; // x8
  UnityEngine_Object_o *v17; // x20
  struct LinkableTexture_o *v18; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x20
  int size; // w22
  __int64 v21; // x23
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x20
  int v24; // w22
  __int64 v25; // x23
  unsigned int v26; // w24
  __int64 v27; // x8
  UnityEngine_Object_o *v28; // x20
  struct System_Collections_Generic_List_LinkableTexture__o *v29; // x20
  UnityEngine_Object_o *v30; // x0

  if ( (byte_418713B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418713B = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    mCollider = this->fields.messageLabel;
    if ( !mCollider )
      goto LABEL_60;
    UILabel__set_text(mCollider, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    mCollider = this->fields.okBtnLabel;
    if ( !mCollider )
      goto LABEL_60;
    UILabel__set_text(mCollider, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    mCollider = this->fields.cancelBtnLabel;
    if ( !mCollider )
      goto LABEL_60;
    UILabel__set_text(mCollider, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  LinkConfirmDialog__DestroyBannerWWW(this, v11);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mCollider = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v16 = this->fields.lnkTexture;
    if ( v16 )
    {
      mCollider = (UILabel_o *)v16->fields.mCollider;
      if ( mCollider )
      {
        v17 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mCollider->klass->vtable._26_get_mainTexture.method)(
                                        mCollider,
                                        mCollider->klass->vtable._27_set_mainTexture.methodPtr);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v17, 0LL);
        v18 = this->fields.lnkTexture;
        if ( v18 )
        {
          mCollider = (UILabel_o *)v18->fields.mCollider;
          if ( mCollider )
          {
            mCollider = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, _QWORD, Il2CppMethodPointer))mCollider->klass->vtable._27_set_mainTexture.method)(
                                       mCollider,
                                       0LL,
                                       mCollider->klass->vtable._28_get_shader.methodPtr);
            goto LABEL_33;
          }
        }
      }
    }
LABEL_60:
    sub_B2C434(mCollider, v11);
  }
LABEL_33:
  additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
  if ( additionalSprites )
  {
    size = additionalSprites->fields._size;
    v21 = 0LL;
    while ( (int)v21 < size )
    {
      if ( additionalSprites->fields._size <= (unsigned int)v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      mCollider = (UILabel_o *)additionalSprites->fields._items->m_Items[v21];
      if ( mCollider )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mCollider,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
        additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
        ++v21;
        if ( additionalSprites )
          continue;
      }
      goto LABEL_60;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      additionalSprites,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
  }
  additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
  if ( additionalTextures )
  {
    v24 = additionalTextures->fields._size;
    v25 = 4LL;
    while ( 1 )
    {
      v26 = v25 - 4;
      if ( (int)v25 - 4 >= v24 )
        break;
      if ( additionalTextures->fields._size <= v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v25);
      if ( v27 )
      {
        mCollider = *(UILabel_o **)(v27 + 40);
        if ( mCollider )
        {
          v28 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mCollider->klass->vtable._26_get_mainTexture.method)(
                                          mCollider,
                                          mCollider->klass->vtable._27_set_mainTexture.methodPtr);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(v28, 0LL);
          v29 = this->fields.additionalTextures;
          if ( v29 )
          {
            if ( v29->fields._size <= v26 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            mCollider = (UILabel_o *)*((_QWORD *)&v29->fields._items->obj.klass + v25);
            if ( mCollider )
            {
              v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)mCollider,
                                              0LL);
              UnityEngine_Object__Destroy_35314896(v30, 0LL);
              additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
              ++v25;
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
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
  }
}


System_Collections_IEnumerator_o *__fastcall LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_418713A & 1) == 0 )
  {
    sub_B2C35C(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, linkTexture);
    byte_418713A = 1;
  }
  v5 = sub_B2C42C(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
  LinkConfirmDialog__StartDownloadBanner_d__35___ctor((LinkConfirmDialog__StartDownloadBanner_d__35_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = linkTexture;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)linkTexture,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
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
  UnityEngine_GameObject_o *gameObject; // x20
  LinkConfirmDialog_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  BaseDialog_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  System_Action_o *v16; // x20

  if ( (byte_418713E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BaseDialog_TypeInfo, v3);
    sub_B2C35C(&Method_LinkConfirmDialog_EndOpen__, v4);
    sub_B2C35C(&LinkConfirmDialog_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418713E = 1;
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
    baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
    if ( baseWindow )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
      v11 = LinkConfirmDialog_TypeInfo;
      if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        v11 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v11->static_fields->DIALOG_TEXTURE_START_SCALE, 0LL);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
      if ( baseWindow )
      {
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
        v13 = BaseDialog_TypeInfo;
        if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BaseDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
          v13 = BaseDialog_TypeInfo;
        }
        TweenScale__Begin(
          v12,
          v13->static_fields->OPEN_TIME,
          LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE,
          0LL);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
        if ( baseWindow )
        {
          v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
          GameObjectExtensions__SetLocalPosition(
            v14,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0LL);
          baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
          if ( baseWindow )
          {
            v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
            TweenPosition__Begin(
              v15,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0LL);
            goto LABEL_19;
          }
        }
      }
    }
LABEL_21:
    sub_B2C434(baseWindow, method);
  }
LABEL_19:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkConfirmDialog_ClickDelegate___ctor(
        LinkConfirmDialog_ClickDelegate_o *this,
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
  if ( (byte_4184218 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isOk);
    byte_4184218 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkConfirmDialog_ClickDelegate__Invoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  LinkConfirmDialog_ClickDelegate_o **v8; // x25
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
  LinkConfirmDialog_ClickDelegate_o *v20; // x8
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
  LinkConfirmDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (LinkConfirmDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isOk, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isOk, v22);
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
        (*v19)(v21, isOk, v19);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isOk, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isOk,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isOk, v22);
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
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v2; // x20
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
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x19
  Il2CppObject *v15; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  struct LinkConfirmDialog_o *v17; // x1
  Il2CppObject *linkTexture; // x1
  System_String_o *v19; // x22
  UnityEngine_Networking_UnityWebRequest_o *v20; // x21
  UnityEngine_Networking_DownloadHandlerTexture_o *v21; // x23
  bool v22; // w21
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v23; // x0
  Il2CppObject **p__2__current; // x20
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  System_String_o *error; // x0
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v27; // x22
  UnityEngine_Object_o *texture; // x21
  UnityEngine_Networking_UnityWebRequest_o *v29; // x0
  System_String_o *v30; // x0
  bool IsNullOrEmpty; // w0
  int v32; // w21
  CommonUI_o *Instance; // x21
  System_String_o *v34; // x0
  Il2CppObject *v35; // x23
  System_String_o *v36; // x20
  ErrorDialog_ClickDelegate_o *v37; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v38; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8

  v2 = this;
  if ( (byte_4184217 & 1) == 0 )
  {
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v3);
    sub_B2C35C(&LinkConfirmDialog_TypeInfo, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__, v8);
    sub_B2C35C(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_B2C35C(&StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v12);
    byte_4184217 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_50;
    bannerWWW = _4__this->fields.bannerWWW;
    if ( !bannerWWW )
      goto LABEL_31;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(bannerWWW, 0LL) )
      goto LABEL_20;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_50;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v2->fields._texDl_5__2;
      if ( !this )
        goto LABEL_50;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0LL);
      if ( !v2->fields._texDl_5__2 )
        goto LABEL_50;
      v27 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v2->fields._texDl_5__2,
                                          0LL);
    }
    else
    {
LABEL_20:
      texture = 0LL;
      v27 = 0LL;
    }
    v29 = _4__this->fields.bannerWWW;
    if ( !v29 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v29, 0LL) )
      goto LABEL_31;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_50;
    v30 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v30, 0LL);
    if ( !v27 || !IsNullOrEmpty || !v27->fields.__2__current )
      goto LABEL_31;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = _4__this->fields.lnkTexture;
      if ( lnkTexture )
      {
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)lnkTexture->fields.mCollider;
        if ( this )
        {
          (*(void (__fastcall **)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, UnityEngine_Object_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
            this,
            texture,
            this->klass[1].vtable._0_Equals.methodPtr);
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)lnkTexture,
                                                                     0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            _8__1 = v2->fields.__8__1;
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
      v32 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v32;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      }
      if ( v32 <= (__int64)this[2].fields._texDl_5__2->klass )
      {
        v38 = v2->fields.__8__1;
        if ( !v38 )
          goto LABEL_50;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v38->fields.linkTexture, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
        goto LABEL_42;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v35 = (Il2CppObject *)v2->fields.__8__1;
      v36 = v34;
      v37 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v37,
        v35,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v36, v37, 0, 0LL);
LABEL_42:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, 0LL);
        return 0;
      }
    }
LABEL_50:
    sub_B2C434(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v15 = (Il2CppObject *)sub_B2C42C(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v15, 0LL);
  p__8__1 = &v2->fields.__8__1;
  v2->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v15;
  sub_B2C2F8(&v2->fields.__8__1, v15);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_50;
  v17 = v2->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v17;
  sub_B2C2F8(&this->fields, v17);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v2->fields.__8__1;
  if ( !this )
    goto LABEL_50;
  linkTexture = (Il2CppObject *)v2->fields.linkTexture;
  this->fields.__2__current = linkTexture;
  sub_B2C2F8(&this->fields.__2__current, linkTexture);
  if ( !*p__8__1 )
    goto LABEL_50;
  v19 = (*p__8__1)->fields.linkTexture;
  v20 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B2C42C(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v20, v19, 0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.bannerWWW = v20;
  sub_B2C2F8(&_4__this->fields.bannerWWW, v20);
  v21 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B2C42C(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v21, 0, 0LL);
  v2->fields._texDl_5__2 = v21;
  sub_B2C2F8(&v2->fields._texDl_5__2, v21);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  if ( !this )
    goto LABEL_50;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__2,
    0LL);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  v22 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !this )
    goto LABEL_50;
  v23 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v23;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v23);
  *((_DWORD *)p__2__current - 2) = 1;
  return v22;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4184216 & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_B2C35C(
                                                          &Method_SingletonMonoBehaviour_ManagementManager__get_Instance__,
                                                          isDecide);
    byte_4184216 = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v4->fields.__4__this, v4->fields.linkTexture, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 0LL);
}