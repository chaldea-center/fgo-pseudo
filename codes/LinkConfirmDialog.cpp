void LinkConfirmDialog___cctor(const MethodInfo *method)
{
  struct LinkConfirmDialog_StaticFields *static_fields; // x8
  LinkConfirmDialog_c *v2; // x8
  int32x2_t *v3; // x9
  struct LinkConfirmDialog_StaticFields *v4; // x10
  struct UnityEngine_Vector3_StaticFields *v5; // x9
  float z; // s1
  struct LinkConfirmDialog_StaticFields *v7; // x9
  struct LinkConfirmDialog_StaticFields *v8; // x8

  if ( (byte_4C29C57 & 1) == 0 )
  {
    sub_1C2D490(&LinkConfirmDialog_TypeInfo);
    byte_4C29C57 = 1;
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
  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    v2 = LinkConfirmDialog_TypeInfo;
    byte_4C20DA6 = 1;
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


void LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C29C56 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C29C56 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 22;
  this->fields.isInitPanelDepth = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void LinkConfirmDialog__Close(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LinkConfirmDialog__Close_45702632(this, 0, v2);
}


void LinkConfirmDialog__Close_45702632(LinkConfirmDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C29C51 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_LinkConfirmDialog_EndClose__);
    byte_4C29C51 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void LinkConfirmDialog__DestroyBannerWWW(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  CGThumbnailListItem_o *p_bannerWWW; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_bannerWWW = (CGThumbnailListItem_o *)&this->fields.bannerWWW;
  bannerWWW = this->fields.bannerWWW;
  if ( bannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(bannerWWW, 0);
    p_bannerWWW->klass = 0;
    sub_1C2D434(p_bannerWWW, 0, v4, v5);
  }
}


void LinkConfirmDialog__EndClose(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  LinkConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C2D434(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void LinkConfirmDialog__EndOpen(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void LinkConfirmDialog__Init(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C29C4F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29C4F = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v3 = StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkUrl, v3, v4, v5);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C2D6EC(0, v7);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    BaseDialog__Init((BaseDialog_o *)this, 0);
  }
}


void LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C29C53 & 1) == 0 )
  {
    sub_1C2D490(&Method_LinkConfirmDialog_OnClickCancel__);
    byte_4C29C53 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_LinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_LinkConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  System_String_o *linkUrl; // x19

  if ( (byte_4C29C52 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Application_TypeInfo);
    byte_4C29C52 = 1;
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
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UIPanel_o *TargetPanel; // x21
  UILabel_o *Instance; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v23; // x27
  System_String_o *v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  LinkConfirmDialog_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Action_o *v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v37; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  UILabel_o *v39; // x22
  System_Action_o *v40; // x20

  if ( (byte_4C29C50 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_LinkConfirmDialog_EndOpen__);
    sub_1C2D490(&Method_LinkConfirmDialog__Open_b__28_0__);
    sub_1C2D490(&LinkConfirmDialog_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_3684/*"COMMON_CONFIRM_TO_WEBVIEW"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29C50 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  if ( this->fields.isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TargetPanel, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_57;
      this->fields.keepPanelDepth = TargetPanel->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v17, v18);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    v23 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    }
    if ( !v23 )
      goto LABEL_57;
    UIWidget__SetDimensions(
      v23,
      Instance->fields.onChange->fields.method_ptr,
      HIDWORD(Instance->fields.onChange->fields.method_ptr),
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
    v24 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v24, Instance->fields.mFontSize, 0, 0);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    v26 = LinkConfirmDialog_TypeInfo;
    v27 = gameObject;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v26 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v27, v26->static_fields->MESSAGE_BASE_POS, 0);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0, 0) && !System_String__IsNullOrEmpty(linkTexture, 0) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v31 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0);
    this->fields.afterLoadAction = v31;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.afterLoadAction, (int32_t)v31, v32, v33);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v34);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
  this->fields.linkUrl = linkUrl;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.linkUrl, (int32_t)linkUrl, v29, v30);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v37 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0);
    if ( !v37 )
      goto LABEL_57;
    UILabel__set_text(v37, (System_String_o *)Instance, 0);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0, 0) )
  {
    v39 = this->fields.cancelBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v39 )
      goto LABEL_57;
    UILabel__set_text(v39, (System_String_o *)Instance, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2D6EC(Instance, v21);
  }
LABEL_56:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v40 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0);
}


void LinkConfirmDialog__Release(LinkConfirmDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4C29C55 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C29C55 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    mUiTexture = this->fields.messageLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    mUiTexture = this->fields.okBtnLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0, 0) )
  {
    mUiTexture = this->fields.cancelBtnLabel;
    if ( !mUiTexture )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)mUiTexture, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  LinkConfirmDialog__DestroyBannerWWW(this, v4);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mUiTexture = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
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
        UnityEngine_Object__Destroy_71163704(v10, 0);
        v11 = this->fields.lnkTexture;
        if ( v11 )
        {
          mUiTexture = v11->fields.mUiTexture;
          if ( mUiTexture )
          {
            (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)mUiTexture + 744LL))(
              mUiTexture,
              0,
              *(_QWORD *)(*(_QWORD *)mUiTexture + 752LL));
            goto LABEL_28;
          }
        }
      }
    }
LABEL_48:
    sub_1C2D6EC(mUiTexture, v4);
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
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
      if ( mUiTexture )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mUiTexture,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(gameObject, 0);
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
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v15, 0);
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
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
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
          UnityEngine_Object__Destroy_71163704(v19, 0);
          mUiTexture = this->fields.additionalTextures;
          if ( mUiTexture )
          {
            mUiTexture = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)mUiTexture,
                           v17,
                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
            if ( mUiTexture )
            {
              v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)mUiTexture,
                                              0);
              UnityEngine_Object__Destroy_71163704(v20, 0);
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
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v21, 0);
  }
}


System_Collections_IEnumerator_o *LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C29C54 & 1) == 0 )
  {
    sub_1C2D490(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
    byte_4C29C54 = 1;
  }
  v5 = sub_1C2D6DC(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = linkTexture;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)linkTexture, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void LinkConfirmDialog___Open_b__28_0(LinkConfirmDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4C29C58 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&Method_LinkConfirmDialog_EndOpen__);
    sub_1C2D490(&LinkConfirmDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C29C58 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(baseWindow, 1, 0);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0, 0) )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
    if ( baseWindow )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
      v6 = LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        v6 = LinkConfirmDialog_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(gameObject, v6->static_fields->DIALOG_TEXTURE_START_SCALE, 0);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
      if ( baseWindow )
      {
        v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
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
          0);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
        if ( baseWindow )
        {
          v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
          GameObjectExtensions__SetLocalPosition(
            v9,
            LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_START_POSITION,
            0);
          baseWindow = (UnityEngine_GameObject_o *)this->fields.lnkTexture;
          if ( baseWindow )
          {
            v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
            TweenPosition__Begin(
              v10,
              BaseDialog_TypeInfo->static_fields->OPEN_TIME,
              LinkConfirmDialog_TypeInfo->static_fields->DIALOG_TEXTURE_END_POSITION,
              0);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(baseWindow, method);
  }
LABEL_16:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0);
}


void LinkConfirmDialog_ClickDelegate___ctor(
        LinkConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A74548;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A74500;
}


System_IAsyncResult_o *LinkConfirmDialog_ClickDelegate__BeginInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4C29C59 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C29C59 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct LinkConfirmDialog_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  System_String_o *v16; // x22
  UnityEngine_Networking_UnityWebRequest_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  bool v23; // w21
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v24; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  System_String_o *error; // x0
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v30; // x21
  int32_t v31; // w23
  int32_t v32; // w24
  int32_t format; // w25
  UnityEngine_Texture2D_o *v34; // x22
  System_Byte_array *data; // x0
  UnityEngine_Networking_UnityWebRequest_o *v36; // x0
  System_String_o *v37; // x0
  bool IsNullOrEmpty; // w0
  int v39; // w21
  Il2CppObject *Instance; // x21
  System_String_o *v41; // x0
  Il2CppObject *v42; // x23
  System_String_o *v43; // x19
  ErrorDialog_ClickDelegate_o *v44; // x22
  const MethodInfo *v45; // x1
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v46; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8
  struct System_String_o *linkTexture; // x1

  v3 = this;
  if ( (byte_4C29C5B & 1) == 0 )
  {
    sub_1C2D490(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C2D490(&LinkConfirmDialog_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    sub_1C2D490(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__);
    sub_1C2D490(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
    sub_1C2D490(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_1C2D490(&StringLiteral_9253/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4C29C5B = 1;
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
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(bannerWWW, 0) )
      goto LABEL_26;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_53;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    if ( System_String__IsNullOrEmpty(error, 0) )
    {
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0);
      if ( !v3->fields._texDl_5__2 )
        goto LABEL_53;
      v30 = this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0);
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
      if ( !v3->fields._texDl_5__2 )
        goto LABEL_53;
      v31 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0);
      if ( !this )
        goto LABEL_53;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)((__int64 (__fastcall *)(LinkConfirmDialog__StartDownloadBanner_d__35_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                 this,
                                                                 this->klass->vtable._6_MoveNext.method);
      if ( !v3->fields._texDl_5__2 )
        goto LABEL_53;
      v32 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0);
      if ( !this )
        goto LABEL_53;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0);
      v34 = (UnityEngine_Texture2D_o *)sub_1C2D6DC(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_71051920(v34, v31, v32, format, 0, 0);
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      UnityEngine_ImageConversion__LoadImage_71272024(v34, data, 0);
    }
    else
    {
LABEL_26:
      v34 = 0;
      v30 = 0;
    }
    v36 = _4__this->fields.bannerWWW;
    if ( !v36 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v36, 0) )
      goto LABEL_36;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_53;
    v37 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v37, 0);
    if ( !v30 || !IsNullOrEmpty || !v30->fields.__2__current )
      goto LABEL_36;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Object__op_Equality(
                                                               (UnityEngine_Object_o *)v34,
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
            v34,
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
              sub_1C2D434((CGThumbnailListItem_o *)&lnkTexture->fields.linkUrl, (int32_t)linkTexture, v50, v51);
              ActionExtensions__Call(_4__this->fields.afterLoadAction, 0);
              goto LABEL_45;
            }
          }
        }
      }
    }
    else
    {
LABEL_36:
      v39 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v39;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      }
      if ( v39 <= (__int64)this[2].fields._texDl_5__2->klass )
      {
        v46 = v3->fields.__8__1;
        if ( !v46 )
          goto LABEL_53;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v46->fields.linkTexture, v2);
        UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
        goto LABEL_45;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
      v42 = (Il2CppObject *)v3->fields.__8__1;
      v43 = v41;
      v44 = (ErrorDialog_ClickDelegate_o *)sub_1C2D6DC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v44,
        v42,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v43, v44, 0, 0);
LABEL_45:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, v45);
        return 0;
      }
    }
LABEL_53:
    sub_1C2D6EC(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v6 = (Il2CppObject *)sub_1C2D6DC(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v6, 0);
  v3->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v6;
  p__8__1 = &v3->fields.__8__1;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields.__8__1, (int32_t)v6, v8, v9);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v12 = v3->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v12, v10, v11);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v15 = (Il2CppObject *)v3->fields.linkTexture;
  this->fields.__2__current = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v15, v13, v14);
  if ( !*p__8__1 )
    goto LABEL_53;
  v16 = (*p__8__1)->fields.linkTexture;
  v17 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C2D6DC(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v17, v16, 0);
  if ( !_4__this )
    goto LABEL_53;
  _4__this->fields.bannerWWW = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.bannerWWW, (int32_t)v17, v18, v19);
  v20 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C2D6DC(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v20, 0, 0);
  v3->fields._texDl_5__2 = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v3->fields._texDl_5__2, (int32_t)v20, v21, v22);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  if ( !this )
    goto LABEL_53;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v3->fields._texDl_5__2,
    0);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  v23 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !this )
    goto LABEL_53;
  v24 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
  v3->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1C2D434(p__2__current, (int32_t)v24, v26, v27);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v23;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C29C5A & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C29C5A = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v4->fields.__4__this, v4->fields.linkTexture, method);
      UnityEngine_MonoBehaviour__StartCoroutine_71149276(_4__this, started, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0);
}