void __fastcall LinkConfirmDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct LinkConfirmDialog_StaticFields *static_fields; // x8
  LinkConfirmDialog_c *v5; // x8
  int32x2_t *v6; // x8
  LinkConfirmDialog_c *v7; // x8
  struct LinkConfirmDialog_StaticFields *v8; // x9
  struct LinkConfirmDialog_StaticFields *v9; // x8
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7D7A & 1) == 0 )
  {
    sub_B5D5C4(&LinkConfirmDialog_TypeInfo, v1, v2, v3);
    byte_42E7D7A = 1;
  }
  LinkConfirmDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = LinkConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_BASE_POS.fields.x = 0x41F8000000000000LL;
  static_fields->MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = LinkConfirmDialog_TypeInfo;
  LinkConfirmDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X = 740;
  v5->static_fields->MESSAGE_BASE_SIZE_Y = 240;
  v6 = (int32x2_t *)v5->static_fields;
  v6[3].n64_u64[0] = vdup_n_s32(0x3F70A3D7u).n64_u64[0];
  v6[4].n64_u32[0] = 1065353216;
  one = UnityEngine_Vector3__get_one(0LL);
  v7 = LinkConfirmDialog_TypeInfo;
  LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE = one;
  v8 = v7->static_fields;
  *(_QWORD *)&v8->DIALOG_TEXTURE_START_POSITION.fields.x = 0x42EEC28F00000000LL;
  v8->DIALOG_TEXTURE_START_POSITION.fields.z = 0.0;
  v9 = v7->static_fields;
  *(_QWORD *)&v9->DIALOG_TEXTURE_END_POSITION.fields.x = 0x42FE000000000000LL;
  v9->DIALOG_TEXTURE_END_POSITION.fields.z = 0.0;
}


void __fastcall LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7D79 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7D79 = 1;
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

  LinkConfirmDialog__Close_23897184(this, 0LL, v2);
}


void __fastcall LinkConfirmDialog__Close_23897184(
        LinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E7D75 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_LinkConfirmDialog_EndClose__, v10, v11, v12);
    byte_42E7D75 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_bannerWWW, 0LL, v4, v5, v6, v7, v8, v9);
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
    sub_B5D560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall LinkConfirmDialog__EndOpen(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall LinkConfirmDialog__Init(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1

  if ( (byte_42E7D73 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7D73 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v5 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.linkUrl, v5, v6, v7, v8, v9, v10, v11);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v13);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  LinkConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E7D76 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7D76 = 1;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UIPanel_o *TargetPanel; // x21
  UILabel_o *Instance; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v53; // x27
  System_String_o *v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  LinkConfirmDialog_c *v56; // x8
  UnityEngine_GameObject_o *v57; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Action_o *v65; // x24
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x2
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v75; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  UILabel_o *v77; // x22
  System_Action_o *v78; // x20

  if ( (byte_42E7D74 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)message, (_DWORD)func, linkUrl);
    sub_B5D5C4(&Method_LinkConfirmDialog_EndOpen__, v16, v17, v18);
    sub_B5D5C4(&Method_LinkConfirmDialog__Open_b__28_0__, v19, v20, v21);
    sub_B5D5C4(&LinkConfirmDialog_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3332/*"COMMON_CONFIRM_TO_WEBVIEW"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1/*""*/, v40, v41, v42);
    byte_42E7D74 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v53 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    }
    if ( !v53 )
      goto LABEL_67;
    UIWidget__SetDimensions(
      v53,
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
    v54 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v54, Instance->fields.mFontSize, 0, 0, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_67;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v56 = LinkConfirmDialog_TypeInfo;
    v57 = gameObject;
    if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v56 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v57, v56->static_fields->MESSAGE_BASE_POS, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) && !System_String__IsNullOrEmpty(linkTexture, 0LL) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v65 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v65, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0LL);
    this->fields.afterLoadAction = v65;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.afterLoadAction,
      (System_Int32_array **)v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v72);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  this->fields.linkUrl = linkUrl;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.linkUrl,
    (System_Int32_array **)linkUrl,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v75 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3332/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0LL);
    if ( !v75 )
      goto LABEL_67;
    UILabel__set_text(v75, (System_String_o *)Instance, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v77 = this->fields.cancelBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v77 )
      goto LABEL_67;
    UILabel__set_text(v77, (System_String_o *)Instance, 0LL);
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
    sub_B5D69C(Instance, keepPanelDepth);
  }
LABEL_66:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


void __fastcall LinkConfirmDialog__Release(LinkConfirmDialog_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *messageLabel; // x20
  const MethodInfo *v27; // x1
  UILabel_o *mCollider; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Object_o *cancelBtnLabel; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v32; // x8
  UnityEngine_Object_o *v33; // x20
  struct LinkableTexture_o *v34; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x20
  int size; // w22
  __int64 v37; // x23
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x20
  int v40; // w22
  __int64 v41; // x23
  unsigned int v42; // w24
  __int64 v43; // x8
  UnityEngine_Object_o *v44; // x20
  struct System_Collections_Generic_List_LinkableTexture__o *v45; // x20
  UnityEngine_Object_o *v46; // x0

  if ( (byte_42E7D78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    byte_42E7D78 = 1;
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
  LinkConfirmDialog__DestroyBannerWWW(this, v27);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mCollider = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v32 = this->fields.lnkTexture;
    if ( v32 )
    {
      mCollider = (UILabel_o *)v32->fields.mCollider;
      if ( mCollider )
      {
        v33 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mCollider->klass->vtable._26_get_mainTexture.method)(
                                        mCollider,
                                        mCollider->klass->vtable._27_set_mainTexture.methodPtr);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v33, 0LL);
        v34 = this->fields.lnkTexture;
        if ( v34 )
        {
          mCollider = (UILabel_o *)v34->fields.mCollider;
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
    sub_B5D69C(mCollider, v27);
  }
LABEL_33:
  additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
  if ( additionalSprites )
  {
    size = additionalSprites->fields._size;
    v37 = 0LL;
    while ( (int)v37 < size )
    {
      if ( additionalSprites->fields._size <= (unsigned int)v37 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      mCollider = (UILabel_o *)additionalSprites->fields._items->m_Items[v37];
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
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
        ++v37;
        if ( additionalSprites )
          continue;
      }
      goto LABEL_60;
    }
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      additionalSprites,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
  }
  additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
  if ( additionalTextures )
  {
    v40 = additionalTextures->fields._size;
    v41 = 4LL;
    while ( 1 )
    {
      v42 = v41 - 4;
      if ( (int)v41 - 4 >= v40 )
        break;
      if ( additionalTextures->fields._size <= v42 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v41);
      if ( v43 )
      {
        mCollider = *(UILabel_o **)(v43 + 40);
        if ( mCollider )
        {
          v44 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))mCollider->klass->vtable._26_get_mainTexture.method)(
                                          mCollider,
                                          mCollider->klass->vtable._27_set_mainTexture.methodPtr);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(v44, 0LL);
          v45 = this->fields.additionalTextures;
          if ( v45 )
          {
            if ( v45->fields._size <= v42 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            mCollider = (UILabel_o *)*((_QWORD *)&v45->fields._items->obj.klass + v41);
            if ( mCollider )
            {
              v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)mCollider,
                                              0LL);
              UnityEngine_Object__Destroy_35620236(v46, 0LL);
              additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
              ++v41;
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
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
  }
}


System_Collections_IEnumerator_o *__fastcall LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7D77 & 1) == 0 )
  {
    sub_B5D5C4(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, (_DWORD)linkTexture, (_DWORD)method, v3);
    byte_42E7D77 = 1;
  }
  v6 = sub_B5D694(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
  LinkConfirmDialog__StartDownloadBanner_d__35___ctor((LinkConfirmDialog__StartDownloadBanner_d__35_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = linkTexture;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)linkTexture,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall LinkConfirmDialog___Open_b__28_0(LinkConfirmDialog_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  LinkConfirmDialog_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x20
  BaseDialog_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  System_Action_o *v28; // x20

  if ( (byte_42E7D7B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BaseDialog_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_LinkConfirmDialog_EndOpen__, v8, v9, v10);
    sub_B5D5C4(&LinkConfirmDialog_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E7D7B = 1;
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
      v23 = LinkConfirmDialog_TypeInfo;
      if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        v23 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v23->static_fields->DIALOG_TEXTURE_START_SCALE, 0LL);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
      if ( baseWindow )
      {
        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
        v25 = BaseDialog_TypeInfo;
        if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BaseDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
          v25 = BaseDialog_TypeInfo;
        }
        TweenScale__Begin(
          v24,
          v25->static_fields->OPEN_TIME,
          LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE,
          0LL);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
        if ( baseWindow )
        {
          v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
          GameObjectExtensions__SetLocalPosition(
            v26,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0LL);
          baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
          if ( baseWindow )
          {
            v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
            TweenPosition__Begin(
              v27,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0LL);
            goto LABEL_19;
          }
        }
      }
    }
LABEL_21:
    sub_B5D69C(baseWindow, method);
  }
LABEL_19:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_21;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E571D & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOk, (_DWORD)callback, object);
    byte_42E571D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  LinkConfirmDialog_ClickDelegate_o *v19; // x8
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
  LinkConfirmDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (LinkConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isOk, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
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
        (*v18)(v20, isOk, v18);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isOk, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isOk,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isOk, v21);
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
  int v2; // w2
  __int64 v3; // x3
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v4; // x20
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
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x19
  Il2CppObject *v37; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  System_String_o *linkTexture; // x22
  UnityEngine_Networking_UnityWebRequest_o *v40; // x21
  UnityEngine_Networking_DownloadHandlerTexture_o *v41; // x23
  bool v42; // w21
  Il2CppObject **p__2__current; // x20
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  System_String_o *error; // x0
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v46; // x22
  UnityEngine_Object_o *texture; // x21
  UnityEngine_Networking_UnityWebRequest_o *v48; // x0
  System_String_o *v49; // x0
  bool IsNullOrEmpty; // w0
  int v51; // w21
  CommonUI_o *Instance; // x21
  System_String_o *v53; // x0
  Il2CppObject *v54; // x23
  System_String_o *v55; // x20
  ErrorDialog_ClickDelegate_o *v56; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v57; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8

  v4 = this;
  if ( (byte_42E571C & 1) == 0 )
  {
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LinkConfirmDialog_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__, v20, v21, v22);
    sub_B5D5C4(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1/*""*/, v29, v30, v31);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_B5D5C4(&StringLiteral_9389/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v32, v33, v34);
    byte_42E571C = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
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
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields._texDl_5__2;
      if ( !this )
        goto LABEL_50;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0LL);
      if ( !v4->fields._texDl_5__2 )
        goto LABEL_50;
      v46 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v4->fields._texDl_5__2,
                                          0LL);
    }
    else
    {
LABEL_20:
      texture = 0LL;
      v46 = 0LL;
    }
    v48 = _4__this->fields.bannerWWW;
    if ( !v48 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v48, 0LL) )
      goto LABEL_31;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_50;
    v49 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v49, 0LL);
    if ( !v46 || !IsNullOrEmpty || !v46->fields.__2__current )
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
            _8__1 = v4->fields.__8__1;
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
      v51 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v51;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      if ( (BYTE3(LinkConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      }
      if ( v51 <= (__int64)this[2].fields._texDl_5__2->klass )
      {
        v57 = v4->fields.__8__1;
        if ( !v57 )
          goto LABEL_50;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v57->fields.linkTexture, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
        goto LABEL_42;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v54 = (Il2CppObject *)v4->fields.__8__1;
      v55 = v53;
      v56 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v56,
        v54,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v55, v56, 0, 0LL);
LABEL_42:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, 0LL);
        return 0;
      }
    }
LABEL_50:
    sub_B5D69C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v37 = (Il2CppObject *)sub_B5D694(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v37, 0LL);
  p__8__1 = &v4->fields.__8__1;
  v4->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v37;
  sub_B5D560(&v4->fields.__8__1);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_50;
  *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
  sub_B5D560(&this->fields);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v4->fields.__8__1;
  if ( !this )
    goto LABEL_50;
  this->fields.__2__current = (Il2CppObject *)v4->fields.linkTexture;
  sub_B5D560(&this->fields.__2__current);
  if ( !*p__8__1 )
    goto LABEL_50;
  linkTexture = (*p__8__1)->fields.linkTexture;
  v40 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B5D694(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v40, linkTexture, 0LL);
  if ( !_4__this )
    goto LABEL_50;
  _4__this->fields.bannerWWW = v40;
  sub_B5D560(&_4__this->fields.bannerWWW);
  v41 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B5D694(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v41, 0, 0LL);
  v4->fields._texDl_5__2 = v41;
  sub_B5D560(&v4->fields._texDl_5__2);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  if ( !this )
    goto LABEL_50;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__2,
    0LL);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  v42 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !this )
    goto LABEL_50;
  v4->fields.__2__current = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                              (UnityEngine_Networking_UnityWebRequest_o *)this,
                                              0LL);
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v42;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  __int64 v3; // x3
  LinkConfirmDialog___c__DisplayClass35_0_o *v5; // x19
  UnityEngine_MonoBehaviour_o *_4__this; // x20
  System_Collections_IEnumerator_o *started; // x1

  v5 = this;
  if ( (byte_42E571B & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_B5D5C4(
                                                          &Method_SingletonMonoBehaviour_ManagementManager__get_Instance__,
                                                          isDecide,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E571B = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v5->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v5->fields.__4__this, v5->fields.linkTexture, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 0LL);
}