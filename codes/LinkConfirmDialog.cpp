void LinkConfirmDialog___cctor(const MethodInfo *method)
{
  struct LinkConfirmDialog_StaticFields *static_fields; // x9
  LinkConfirmDialog_c *v2; // x8
  int v3; // w10
  int32x2_t *v4; // x9
  struct LinkConfirmDialog_StaticFields *v5; // x10
  struct UnityEngine_Vector3_StaticFields *v6; // x9
  float z; // s1
  struct LinkConfirmDialog_StaticFields *v8; // x9
  struct LinkConfirmDialog_StaticFields *v9; // x8

  if ( (byte_5973B20 & 1) == 0 )
  {
    sub_2213A60(&LinkConfirmDialog_TypeInfo);
    byte_5973B20 = 1;
  }
  static_fields = LinkConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MESSAGE_BASE_POS.fields.x = 0x41F8000000000000LL;
  v2 = LinkConfirmDialog_TypeInfo;
  static_fields->MESSAGE_BASE_POS.fields.z = 0.0;
  static_fields->BANNER_RETRY_MAX = 3;
  v3 = (unsigned __int8)byte_5969AE5;
  v4 = (int32x2_t *)v2->static_fields;
  v4[4].n64_u32[0] = 1065353216;
  v4[2].n64_u64[0] = 0xF0000002E4LL;
  v4[3].n64_u64[0] = vdup_n_s32(0x3F70A3D7u).n64_u64[0];
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    v2 = LinkConfirmDialog_TypeInfo;
    byte_5969AE5 = 1;
  }
  v5 = v2->static_fields;
  v6 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v6->oneVector.fields.z;
  *(_QWORD *)&v5->DIALOG_TEXTURE_END_SCALE.fields.x = *(_QWORD *)&v6->oneVector.fields.x;
  v5->DIALOG_TEXTURE_END_SCALE.fields.z = z;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->DIALOG_TEXTURE_START_POSITION.fields.x = 0x42EEC28F00000000LL;
  v8->DIALOG_TEXTURE_START_POSITION.fields.z = 0.0;
  v9 = v2->static_fields;
  *(_QWORD *)&v9->DIALOG_TEXTURE_END_POSITION.fields.x = 0x42FE000000000000LL;
  v9->DIALOG_TEXTURE_END_POSITION.fields.z = 0.0;
}


void LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0
  int v4; // w9

  if ( (byte_5973B1F & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5973B1F = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.MESSAGE_FONT_SIZE = 22;
  v4 = *(&v3->_2.cctor_finished + 1);
  this->fields.isInitPanelDepth = 1;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LinkConfirmDialog__Close(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LinkConfirmDialog__Close_53967524(this, 0, v2);
}


void LinkConfirmDialog__Close_53967524(LinkConfirmDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5973B1A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_LinkConfirmDialog_EndClose__);
    byte_5973B1A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void LinkConfirmDialog__DestroyBannerWWW(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  MissionNaviTransitionBoardItem_o *p_bannerWWW; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  p_bannerWWW = (MissionNaviTransitionBoardItem_o *)&this->fields.bannerWWW;
  bannerWWW = this->fields.bannerWWW;
  if ( bannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(bannerWWW, 0);
    p_bannerWWW->klass = 0;
    sub_2213A04(p_bannerWWW, 0, v4, v5, v6, v7, v8, v9);
  }
}


void LinkConfirmDialog__EndClose(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  LinkConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_2213A04(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void LinkConfirmDialog__EndOpen(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void LinkConfirmDialog__Init(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  if ( (byte_5973B18 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B18 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v3 = (int)StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkUrl, v3, v4, v5, v6, v7, v8, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_2213CDC(0, v11);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    BaseDialog__Init((BaseDialog_o *)this, 0);
  }
}


void LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5973B1C & 1) == 0 )
  {
    sub_2213A60(&Method_LinkConfirmDialog_OnClickCancel__);
    byte_5973B1C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_LinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_LinkConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void LinkConfirmDialog__OnClickOk(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8
  __int64 v4; // x1
  System_String_o *linkUrl; // x19

  if ( (byte_5973B1B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    byte_5973B1B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
    if ( !System_String__IsNullOrEmpty(this->fields.linkUrl, 0) )
    {
      linkUrl = this->fields.linkUrl;
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4);
      UnityEngine_Application__OpenURL(linkUrl, 0);
    }
  }
}


void LinkConfirmDialog__Open(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UIPanel_o *TargetPanel; // x21
  UnityEngine_Object_c *v25; // x0
  UILabel_o *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v30; // x27
  System_String_o *v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  LinkConfirmDialog_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Action_o *v43; // x24
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  const MethodInfo *v50; // x2
  System_Collections_IEnumerator_o *started; // x0
  __int64 v52; // x1
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v54; // x1
  UILabel_o *v55; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  __int64 v57; // x1
  UILabel_o *v58; // x22
  System_Action_o *v59; // x20

  if ( (byte_5973B19 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_LinkConfirmDialog_EndOpen__);
    sub_2213A60(&Method_LinkConfirmDialog__Open_b__28_0__);
    sub_2213A60(&LinkConfirmDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_3834/*"COMMON_CONFIRM_TO_WEBVIEW"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B19 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    v25 = UnityEngine_Object_TypeInfo;
    this->fields.isInitPanelDepth = 0;
    if ( !*(&v25->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v25, v17);
    Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_57;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v18, v19, v20, v21, v22, v23);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v30 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( !*(&LinkConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, v27);
    if ( !v30 )
      goto LABEL_57;
    UIWidget__SetDimensions(
      v30,
      LinkConfirmDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
      LinkConfirmDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_Y,
      0);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    UILabel__set_maxLineCount(Instance, maxLine, 0);
    Instance = this->fields.messageLabel;
    if ( !messageFontSize )
      messageFontSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !Instance )
      goto LABEL_57;
    UILabel__set_fontSize(Instance, messageFontSize, 0);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    v31 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v31, Instance->fields.mFontSize, 0, 0);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v34 = LinkConfirmDialog_TypeInfo;
    v35 = gameObject;
    if ( !*(&LinkConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, v33);
      v34 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v35, v34->static_fields->MESSAGE_BASE_POS, 0);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0, 0) && !System_String__IsNullOrEmpty(linkTexture, 0) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
    Instance = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (UILabel_o *)this->fields.baseWindow;
    if ( !Instance )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    v43 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v43, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0);
    this->fields.afterLoadAction = v43;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.afterLoadAction,
      (int32_t)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v50);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
  this->fields.linkUrl = linkUrl;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkUrl, (int32_t)linkUrl, v37, v38, v39, v40, v41, v42);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v55 = this->fields.okBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0);
    if ( !v55 )
      goto LABEL_57;
    UILabel__set_text(v55, (System_String_o *)Instance, 0);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0, 0) )
  {
    v58 = this->fields.cancelBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v58 )
      goto LABEL_57;
    UILabel__set_text(v58, (System_String_o *)Instance, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( panelDepth < 0 )
      panelDepth = this->fields.keepPanelDepth;
    if ( TargetPanel )
    {
      UIPanel__set_depth(TargetPanel, panelDepth, 0);
      goto LABEL_56;
    }
LABEL_57:
    sub_2213CDC(Instance, v27);
  }
LABEL_56:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v59 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0, 0);
}


void LinkConfirmDialog__Release(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  const MethodInfo *v4; // x1
  UILabel_o *mUiTexture; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Object_o *cancelBtnLabel; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v10; // x8
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  struct LinkableTexture_o *v13; // x8
  struct System_Collections_Generic_List_LinkableSprite__o *additionalSprites; // x8
  int size; // w23
  int32_t i; // w20
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v19; // w2
  int v20; // w9
  struct System_Collections_Generic_List_LinkableTexture__o *additionalTextures; // x8
  int v22; // w23
  int32_t j; // w20
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x21
  UnityEngine_Object_o *v26; // x0
  int32_t v27; // w2
  int v28; // w9

  if ( (byte_5973B1E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B1E = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    mUiTexture = this->fields.messageLabel;
    if ( !mUiTexture )
      goto LABEL_54;
    UILabel__set_text(mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    mUiTexture = this->fields.okBtnLabel;
    if ( !mUiTexture )
      goto LABEL_54;
    UILabel__set_text(mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0, 0) )
  {
    mUiTexture = this->fields.cancelBtnLabel;
    if ( !mUiTexture )
      goto LABEL_54;
    UILabel__set_text(mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  LinkConfirmDialog__DestroyBannerWWW(this, v4);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  mUiTexture = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
  if ( ((unsigned __int8)mUiTexture & 1) != 0 )
  {
    v10 = this->fields.lnkTexture;
    if ( !v10 )
      goto LABEL_54;
    mUiTexture = (UILabel_o *)v10->fields.mUiTexture;
    if ( !mUiTexture )
      goto LABEL_54;
    v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))mUiTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                    mUiTexture,
                                    mUiTexture->klass->vtable._26_get_mainTexture.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    UnityEngine_Object__Destroy_83459800(v12, 0);
    v13 = this->fields.lnkTexture;
    if ( !v13 )
      goto LABEL_54;
    mUiTexture = (UILabel_o *)v13->fields.mUiTexture;
    if ( !mUiTexture )
      goto LABEL_54;
    ((void (__fastcall *)(UILabel_o *, _QWORD, const MethodInfo *))mUiTexture->klass->vtable._27_set_mainTexture.methodPtr)(
      mUiTexture,
      0,
      mUiTexture->klass->vtable._27_set_mainTexture.method);
  }
  additionalSprites = this->fields.additionalSprites;
  if ( additionalSprites )
  {
    size = additionalSprites->fields._size;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        mUiTexture = (UILabel_o *)this->fields.additionalSprites;
        if ( !mUiTexture )
          goto LABEL_54;
        mUiTexture = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)mUiTexture,
                                    i,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( !mUiTexture )
          goto LABEL_54;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mUiTexture,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
      }
      additionalSprites = this->fields.additionalSprites;
      if ( !additionalSprites )
        goto LABEL_54;
    }
    v19 = additionalSprites->fields._size;
    v20 = additionalSprites->fields._version + 1;
    additionalSprites->fields._size = 0;
    additionalSprites->fields._version = v20;
    if ( v19 >= 1 )
      System_Array__Clear((System_Array_o *)additionalSprites->fields._items, 0, v19, 0);
  }
  additionalTextures = this->fields.additionalTextures;
  if ( !additionalTextures )
    return;
  v22 = additionalTextures->fields._size;
  if ( v22 >= 1 )
  {
    for ( j = 0; j != v22; ++j )
    {
      mUiTexture = (UILabel_o *)this->fields.additionalTextures;
      if ( !mUiTexture )
        goto LABEL_54;
      mUiTexture = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)mUiTexture,
                                  j,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
      if ( !mUiTexture )
        goto LABEL_54;
      mUiTexture = (UILabel_o *)mUiTexture->fields.bottomAnchor;
      if ( !mUiTexture )
        goto LABEL_54;
      v25 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))mUiTexture->klass->vtable._26_get_mainTexture.methodPtr)(
                                      mUiTexture,
                                      mUiTexture->klass->vtable._26_get_mainTexture.method);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      UnityEngine_Object__Destroy_83459800(v25, 0);
      mUiTexture = (UILabel_o *)this->fields.additionalTextures;
      if ( !mUiTexture )
        goto LABEL_54;
      mUiTexture = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)mUiTexture,
                                  j,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
      if ( !mUiTexture )
        goto LABEL_54;
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mUiTexture, 0);
      UnityEngine_Object__Destroy_83459800(v26, 0);
    }
    additionalTextures = this->fields.additionalTextures;
    if ( !additionalTextures )
LABEL_54:
      sub_2213CDC(mUiTexture, v4);
  }
  v27 = additionalTextures->fields._size;
  v28 = additionalTextures->fields._version + 1;
  additionalTextures->fields._size = 0;
  additionalTextures->fields._version = v28;
  if ( v27 >= 1 )
    System_Array__Clear((System_Array_o *)additionalTextures->fields._items, 0, v27, 0);
}


System_Collections_IEnumerator_o *LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5973B1D & 1) == 0 )
  {
    sub_2213A60(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
    byte_5973B1D = 1;
  }
  v5 = sub_2213CCC(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = linkTexture;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)linkTexture, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void LinkConfirmDialog___Open_b__28_0(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *lnkTexture; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  LinkConfirmDialog_c *v8; // x8
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  BaseDialog_c *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_5973B21 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_LinkConfirmDialog_EndOpen__);
    sub_2213A60(&LinkConfirmDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5973B21 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0, 0) )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
    if ( baseWindow )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
      v8 = LinkConfirmDialog_TypeInfo;
      if ( !*(&LinkConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo, v6);
        v8 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v8->static_fields->DIALOG_TEXTURE_START_SCALE, 0);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
      if ( baseWindow )
      {
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
        v11 = BaseDialog_TypeInfo;
        if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v9);
          v11 = BaseDialog_TypeInfo;
        }
        TweenScale__Begin(
          v10,
          v11->static_fields->OPEN_TIME,
          LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_SCALE,
          0);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
        if ( baseWindow )
        {
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
          GameObjectExtensions__SetLocalPosition(
            v12,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0);
          baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
          if ( baseWindow )
          {
            v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
            TweenPosition__Begin(
              v13,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_2213CDC(baseWindow, method);
  }
LABEL_16:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0, 0);
}


void LinkConfirmDialog_ClickDelegate___ctor(
        LinkConfirmDialog_ClickDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2012964;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_201291C;
}


System_IAsyncResult_o *LinkConfirmDialog_ClickDelegate__BeginInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void LinkConfirmDialog_ClickDelegate__Invoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}


void LinkConfirmDialog__StartDownloadBanner_d__35___ctor(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool LinkConfirmDialog__StartDownloadBanner_d__35__MoveNext(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v3; // x19
  int32_t _1__state; // w26
  struct LinkConfirmDialog_o *_4__this; // x20
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  UnityEngine_Texture2D_o *v7; // x22
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v8; // x21
  System_String_o *error; // x0
  int32_t v10; // w23
  int32_t v11; // w24
  int32_t format; // w25
  System_Byte_array *data; // x0
  UnityEngine_Networking_UnityWebRequest_o *v14; // x0
  System_String_o *v15; // x0
  int v16; // w21
  __int64 v17; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v19; // x0
  Il2CppObject *v20; // x23
  System_String_o *v21; // x19
  ErrorDialog_ClickDelegate_o *v22; // x22
  const MethodInfo *v23; // x1
  Il2CppObject *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct LinkConfirmDialog_o *v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x1
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v45; // x8
  System_String_o *v46; // x22
  UnityEngine_Networking_UnityWebRequest_o *v47; // x21
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  UnityEngine_Networking_DownloadHandlerTexture_o *v54; // x23
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v61; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v69; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x21
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8
  struct System_String_o *linkTexture; // x1

  v3 = this;
  if ( (byte_5973B23 & 1) == 0 )
  {
    sub_2213A60(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_2213A60(&LinkConfirmDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    sub_2213A60(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__);
    sub_2213A60(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
    sub_2213A60(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_2213A60(&StringLiteral_9645/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_5973B23 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_51;
      bannerWWW = _4__this->fields.bannerWWW;
      if ( !bannerWWW )
        goto LABEL_28;
      v7 = 0;
      v8 = 0;
      if ( UnityEngine_Networking_UnityWebRequest__get_isDone(bannerWWW, 0) )
      {
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
        if ( !this )
          goto LABEL_51;
        error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
        v7 = 0;
        v8 = 0;
        if ( System_String__IsNullOrEmpty(error, 0) )
        {
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
          if ( !this )
            goto LABEL_51;
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                     (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                     0);
          if ( !v3->fields._texDl_5__2 )
            goto LABEL_51;
          v8 = this;
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                     v3->fields._texDl_5__2,
                                                                     0);
          if ( !this )
            goto LABEL_51;
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                     this,
                                                                     this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
          if ( !v3->fields._texDl_5__2 )
            goto LABEL_51;
          v10 = (int)this;
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                     v3->fields._texDl_5__2,
                                                                     0);
          if ( !this )
            goto LABEL_51;
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                     this,
                                                                     this->klass->vtable._6_MoveNext.method);
          if ( !v3->fields._texDl_5__2 )
            goto LABEL_51;
          v11 = (int)this;
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                     v3->fields._texDl_5__2,
                                                                     0);
          if ( !this )
            goto LABEL_51;
          format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0);
          v7 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
          UnityEngine_Texture2D___ctor_83318944(v7, v10, v11, format, 0, 0);
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
          if ( !this )
            goto LABEL_51;
          data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
          UnityEngine_ImageConversion__LoadImage_83620268(v7, data, 0);
        }
      }
      v14 = _4__this->fields.bannerWWW;
      if ( !v14 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v14, 0) )
        goto LABEL_28;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
      if ( !this )
        goto LABEL_51;
      v15 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      if ( !System_String__IsNullOrEmpty(v15, 0) || !v8 || !v8->fields.__2__current )
        goto LABEL_28;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)v7,
                                                                 0,
                                                                 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        lnkTexture = _4__this->fields.lnkTexture;
        if ( lnkTexture )
        {
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)lnkTexture->fields.mUiTexture;
          if ( this )
          {
            (*(void (__fastcall **)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, UnityEngine_Texture2D_o *, _QWORD))&this->klass[1]._2.field_count)(
              this,
              v7,
              *(_QWORD *)&this->klass[1]._2.interfaces_count);
            this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)lnkTexture,
                                                                       0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              _8__1 = v3->fields.__8__1;
              if ( _8__1 )
              {
                linkTexture = _8__1->fields.linkTexture;
                lnkTexture->fields.linkUrl = linkTexture;
                lnkTexture->fields.linkType = 0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&lnkTexture->fields.linkUrl,
                  (int32_t)linkTexture,
                  v73,
                  v74,
                  v75,
                  v76,
                  v77,
                  v78);
                ActionExtensions__Call(_4__this->fields.afterLoadAction, 0);
                goto LABEL_44;
              }
            }
          }
        }
      }
      else
      {
LABEL_28:
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
        v16 = _4__this->fields.bannerRetryCount + 1;
        _4__this->fields.bannerRetryCount = v16;
        if ( !HIDWORD(this[3].fields.__4__this) )
        {
          j_il2cpp_runtime_class_init_0(this, method);
          this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
        }
        if ( v16 <= (__int64)this[2].fields._texDl_5__2->klass )
        {
          v69 = v3->fields.__8__1;
          if ( v69 )
          {
            started = LinkConfirmDialog__StartDownloadBanner(_4__this, v69->fields.linkTexture, v2);
            UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
            goto LABEL_44;
          }
        }
        else
        {
          _4__this->fields.bannerRetryCount = 0;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9645/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
          v20 = (Il2CppObject *)v3->fields.__8__1;
          v21 = v19;
          v22 = (ErrorDialog_ClickDelegate_o *)sub_2213CCC(ErrorDialog_ClickDelegate_TypeInfo);
          ErrorDialog_ClickDelegate___ctor(
            v22,
            v20,
            Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
            0);
          if ( Instance )
          {
            CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v21, v22, 0, 0);
LABEL_44:
            _4__this->fields.refuseInit = 0;
            LinkConfirmDialog__DestroyBannerWWW(_4__this, v23);
            return _1__state == 0;
          }
        }
      }
LABEL_51:
      sub_2213CDC(this, method);
    }
  }
  else
  {
    v3->fields.__1__state = -1;
    v24 = (Il2CppObject *)sub_2213CCC(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
    System_Object___ctor(v24, 0);
    v3->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__8__1, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_51;
    v37 = v3->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = v37;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v37, v31, v32, v33, v34, v35, v36);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
    if ( !this )
      goto LABEL_51;
    v44 = (Il2CppObject *)v3->fields.linkTexture;
    this->fields.__2__current = v44;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v44,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v45 = v3->fields.__8__1;
    if ( !v45 )
      goto LABEL_51;
    v46 = v45->fields.linkTexture;
    v47 = (UnityEngine_Networking_UnityWebRequest_o *)sub_2213CCC(UnityEngine_Networking_UnityWebRequest_TypeInfo);
    UnityEngine_Networking_UnityWebRequest___ctor_86736180(v47, v46, 0);
    if ( !_4__this )
      goto LABEL_51;
    _4__this->fields.bannerWWW = v47;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.bannerWWW,
      (int32_t)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_2213CCC(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    UnityEngine_Networking_DownloadHandlerTexture___ctor(v54, 0, 0);
    v3->fields._texDl_5__2 = v54;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._texDl_5__2, (int32_t)v54, v55, v56, v57, v58, v59, v60);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_51;
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
      (UnityEngine_Networking_UnityWebRequest_o *)this,
      (UnityEngine_Networking_DownloadHandler_o *)v3->fields._texDl_5__2,
      0);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    _4__this->fields.refuseInit = 1;
    if ( !this )
      goto LABEL_51;
    v61 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    v3->fields.__2__current = (Il2CppObject *)v61;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v61, v63, v64, v65, v66, v67, v68);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *LinkConfirmDialog__StartDownloadBanner_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn LinkConfirmDialog__StartDownloadBanner_d__35__System_Collections_IEnumerator_Reset(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *LinkConfirmDialog__StartDownloadBanner_d__35__System_Collections_IEnumerator_get_Current(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void LinkConfirmDialog__StartDownloadBanner_d__35__System_IDisposable_Dispose(
        LinkConfirmDialog__StartDownloadBanner_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void LinkConfirmDialog___c__DisplayClass35_0___ctor(
        LinkConfirmDialog___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void LinkConfirmDialog___c__DisplayClass35_0___StartDownloadBanner_b__0(
        LinkConfirmDialog___c__DisplayClass35_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  LinkConfirmDialog___c__DisplayClass35_0_o *v4; // x19
  UnityEngine_MonoBehaviour_o *_4__this; // x20
  System_Collections_IEnumerator_o *started; // x1

  v4 = this;
  if ( (byte_5973B22 & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_5973B22 = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v4->fields.__4__this, v4->fields.linkTexture, method);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0);
}