void __fastcall LinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct LinkConfirmDialog_StaticFields *static_fields; // x8
  LinkConfirmDialog_c *v3; // x8
  int32x2_t *v4; // x9
  struct LinkConfirmDialog_StaticFields *v5; // x10
  struct UnityEngine_Vector3_StaticFields *v6; // x9
  float z; // s1
  struct LinkConfirmDialog_StaticFields *v8; // x9
  struct LinkConfirmDialog_StaticFields *v9; // x8

  if ( (byte_4A00F4A & 1) == 0 )
  {
    sub_1B64870(&LinkConfirmDialog_TypeInfo, v1);
    byte_4A00F4A = 1;
  }
  static_fields = LinkConfirmDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->MESSAGE_BASE_POS.fields.x = 0x41F8000000000000LL;
  static_fields->MESSAGE_BASE_POS.fields.z = 0.0;
  v3 = LinkConfirmDialog_TypeInfo;
  v4 = (int32x2_t *)LinkConfirmDialog_TypeInfo->static_fields;
  v4[2].n64_u64[0] = 0xF0000002E4LL;
  v4[3].n64_u64[0] = vdup_n_s32(0x3F70A3D7u).n64_u64[0];
  v4[4].n64_u32[0] = 1065353216;
  if ( !byte_49F9206 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v1);
    v3 = LinkConfirmDialog_TypeInfo;
    byte_49F9206 = 1;
  }
  v5 = v3->static_fields;
  v6 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v6->oneVector.fields.z;
  *(_QWORD *)&v5->DIALOG_TEXTURE_END_SCALE.fields.x = *(_QWORD *)&v6->oneVector.fields.x;
  v5->DIALOG_TEXTURE_END_SCALE.fields.z = z;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->DIALOG_TEXTURE_START_POSITION.fields.x = 0x42EEC28F00000000LL;
  v8->DIALOG_TEXTURE_START_POSITION.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->DIALOG_TEXTURE_END_POSITION.fields.x = 0x42FE000000000000LL;
  v9->DIALOG_TEXTURE_END_POSITION.fields.z = 0.0;
}


void __fastcall LinkConfirmDialog___ctor(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A00F49 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_4A00F49 = 1;
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

  LinkConfirmDialog__Close_43015160(this, 0LL, v2);
}


void __fastcall LinkConfirmDialog__Close_43015160(
        LinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A00F44 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_LinkConfirmDialog_EndClose__, v6);
    byte_4A00F44 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_LinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall LinkConfirmDialog__DestroyBannerWWW(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  ServantStatusBattleListViewItem_o *p_bannerWWW; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  p_bannerWWW = (ServantStatusBattleListViewItem_o *)&this->fields.bannerWWW;
  bannerWWW = this->fields.bannerWWW;
  if ( bannerWWW )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(bannerWWW, 0LL);
    p_bannerWWW->klass = 0LL;
    sub_1B64814(p_bannerWWW, 0, v4, v5);
  }
}


void __fastcall LinkConfirmDialog__EndClose(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  LinkConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B64814(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall LinkConfirmDialog__EndOpen(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall LinkConfirmDialog__Init(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4A00F42 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_4A00F42 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    LinkConfirmDialog__Release(this, method);
    v3 = (int)StringLiteral_1/*""*/;
    this->fields.linkUrl = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.linkUrl, v3, v4, v5);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1B64ACC(0LL, v7);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall LinkConfirmDialog__OnClickCancel(LinkConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct LinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A00F46 & 1) == 0 )
  {
    sub_1B64870(&Method_LinkConfirmDialog_OnClickCancel__, method);
    byte_4A00F46 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_LinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_LinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_LinkConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A00F45 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Application_TypeInfo, method);
    byte_4A00F45 = 1;
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  UIPanel_o *TargetPanel; // x21
  UILabel_o *Instance; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *messageLabel; // x27
  UIWidget_o *v32; // x27
  System_String_o *v33; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  LinkConfirmDialog_c *v35; // x8
  UnityEngine_GameObject_o *v36; // x24
  UnityEngine_Object_o *lnkTexture; // x24
  int32_t v38; // w2
  int32_t v39; // w3
  System_Action_o *v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  const MethodInfo *v43; // x2
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Object_o *okBtnLabel; // x22
  UILabel_o *v46; // x22
  UnityEngine_Object_o *cancelBtnLabel; // x22
  UILabel_o *v48; // x22
  System_Action_o *v49; // x20

  if ( (byte_4A00F43 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, message);
    sub_1B64870(&Method_LinkConfirmDialog_EndOpen__, v17);
    sub_1B64870(&Method_LinkConfirmDialog__Open_b__28_0__, v18);
    sub_1B64870(&LinkConfirmDialog_TypeInfo, v19);
    sub_1B64870(&LocalizationManager_TypeInfo, v20);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v21);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22);
    sub_1B64870(&StringLiteral_3733/*"COMMON_CONFIRM_CLOSE"*/, v23);
    sub_1B64870(&StringLiteral_3739/*"COMMON_CONFIRM_TO_WEBVIEW"*/, v24);
    sub_1B64870(&StringLiteral_1/*""*/, v25);
    byte_4A00F43 = 1;
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v26, v27);
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v32 = (UIWidget_o *)this->fields.messageLabel;
    Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      Instance = (UILabel_o *)LinkConfirmDialog_TypeInfo;
    }
    if ( !v32 )
      goto LABEL_57;
    UIWidget__SetDimensions(
      v32,
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
    v33 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(Instance, v33, Instance->fields.mFontSize, 0, 0, 0LL);
    Instance = this->fields.messageLabel;
    if ( !Instance )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v35 = LinkConfirmDialog_TypeInfo;
    v36 = gameObject;
    if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
      v35 = LinkConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v36, v35->static_fields->MESSAGE_BASE_POS, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) && !System_String__IsNullOrEmpty(linkTexture, 0LL) )
  {
    Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v40 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_LinkConfirmDialog__Open_b__28_0__, 0LL);
    this->fields.afterLoadAction = v40;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.afterLoadAction, (int32_t)v40, v41, v42);
    started = LinkConfirmDialog__StartDownloadBanner(this, linkTexture, v43);
    UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  this->fields.linkUrl = linkUrl;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.linkUrl, (int32_t)linkUrl, v38, v39);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v46 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMON_CONFIRM_TO_WEBVIEW"*/, 0LL);
    if ( !v46 )
      goto LABEL_57;
    UILabel__set_text(v46, (System_String_o *)Instance, 0LL);
  }
  cancelBtnLabel = (UnityEngine_Object_o *)this->fields.cancelBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelBtnLabel, 0LL, 0LL) )
  {
    v48 = this->fields.cancelBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v48 )
      goto LABEL_57;
    UILabel__set_text(v48, (System_String_o *)Instance, 0LL);
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
    sub_1B64ACC(Instance, v30);
  }
LABEL_56:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v49 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_LinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
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
  void *mUiTexture; // x0
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Object_o *cancelBtnLabel; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v16; // x8
  UnityEngine_Object_o *v17; // x20
  struct LinkableTexture_o *v18; // x8
  int32_t v19; // w20
  int v20; // w24
  UnityEngine_Object_o *gameObject; // x21
  int32_t v22; // w2
  int v23; // w8
  int32_t v24; // w20
  int v25; // w24
  UnityEngine_Object_o *v26; // x21
  UnityEngine_Object_o *v27; // x0
  int32_t v28; // w2
  int v29; // w8

  if ( (byte_4A00F48 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64870(&StringLiteral_1/*""*/, v9);
    byte_4A00F48 = 1;
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
  LinkConfirmDialog__DestroyBannerWWW(this, v11);
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mUiTexture = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)mUiTexture & 1) != 0 )
  {
    v16 = this->fields.lnkTexture;
    if ( v16 )
    {
      mUiTexture = v16->fields.mUiTexture;
      if ( mUiTexture )
      {
        v17 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mUiTexture + 728LL))(
                                        mUiTexture,
                                        *(_QWORD *)(*(_QWORD *)mUiTexture + 736LL));
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69135916(v17, 0LL);
        v18 = this->fields.lnkTexture;
        if ( v18 )
        {
          mUiTexture = v18->fields.mUiTexture;
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
    sub_1B64ACC(mUiTexture, v11);
  }
LABEL_28:
  mUiTexture = this->fields.additionalSprites;
  if ( mUiTexture )
  {
    v19 = 0;
    v20 = *((_DWORD *)mUiTexture + 6) & ~(*((int *)mUiTexture + 6) >> 31);
    while ( v20 != v19 )
    {
      mUiTexture = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)mUiTexture,
                     v19,
                     (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
      if ( mUiTexture )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)mUiTexture,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
        mUiTexture = this->fields.additionalSprites;
        ++v19;
        if ( mUiTexture )
          continue;
      }
      goto LABEL_48;
    }
    v22 = *((_DWORD *)mUiTexture + 6);
    v23 = *((_DWORD *)mUiTexture + 7) + 1;
    *((_DWORD *)mUiTexture + 6) = 0;
    *((_DWORD *)mUiTexture + 7) = v23;
    if ( v22 >= 1 )
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v22, 0LL);
  }
  mUiTexture = this->fields.additionalTextures;
  if ( mUiTexture )
  {
    v24 = 0;
    v25 = *((_DWORD *)mUiTexture + 6) & ~(*((int *)mUiTexture + 6) >> 31);
    while ( v25 != v24 )
    {
      mUiTexture = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)mUiTexture,
                     v24,
                     (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
      if ( mUiTexture )
      {
        mUiTexture = (void *)*((_QWORD *)mUiTexture + 6);
        if ( mUiTexture )
        {
          v26 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)mUiTexture + 728LL))(
                                          mUiTexture,
                                          *(_QWORD *)(*(_QWORD *)mUiTexture + 736LL));
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69135916(v26, 0LL);
          mUiTexture = this->fields.additionalTextures;
          if ( mUiTexture )
          {
            mUiTexture = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)mUiTexture,
                           v24,
                           (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
            if ( mUiTexture )
            {
              v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)mUiTexture,
                                              0LL);
              UnityEngine_Object__Destroy_69135916(v27, 0LL);
              mUiTexture = this->fields.additionalTextures;
              ++v24;
              if ( mUiTexture )
                continue;
            }
          }
        }
      }
      goto LABEL_48;
    }
    v28 = *((_DWORD *)mUiTexture + 6);
    v29 = *((_DWORD *)mUiTexture + 7) + 1;
    *((_DWORD *)mUiTexture + 6) = 0;
    *((_DWORD *)mUiTexture + 7) = v29;
    if ( v28 >= 1 )
      System_Array__Clear(*((System_Array_o **)mUiTexture + 2), 0, v28, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall LinkConfirmDialog__StartDownloadBanner(
        LinkConfirmDialog_o *this,
        System_String_o *linkTexture,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A00F47 & 1) == 0 )
  {
    sub_1B64870(&LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo, linkTexture);
    byte_4A00F47 = 1;
  }
  v5 = sub_1B64ABC(LinkConfirmDialog__StartDownloadBanner_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = linkTexture;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)linkTexture, v8, v9);
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

  if ( (byte_4A00F4B & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&BaseDialog_TypeInfo, v3);
    sub_1B64870(&Method_LinkConfirmDialog_EndOpen__, v4);
    sub_1B64870(&LinkConfirmDialog_TypeInfo, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A00F4B = 1;
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
      v11 = LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
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
        if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1B64ACC(baseWindow, method);
  }
LABEL_16:
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !baseWindow )
    goto LABEL_18;
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AF7F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AF7A8;
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
  if ( (byte_4A00F4C & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isOk);
    byte_4A00F4C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall LinkConfirmDialog_ClickDelegate__EndInvoke(
        LinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  int32_t _1__state; // w8
  struct LinkConfirmDialog_o *_4__this; // x20
  Il2CppObject *v17; // x22
  struct LinkConfirmDialog___c__DisplayClass35_0_o **p__8__1; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct LinkConfirmDialog_o *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x1
  System_String_o *v27; // x22
  UnityEngine_Networking_UnityWebRequest_o *v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Networking_DownloadHandlerTexture_o *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  bool v34; // w21
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v35; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  UnityEngine_Networking_UnityWebRequest_o *bannerWWW; // x0
  System_String_o *error; // x0
  LinkConfirmDialog__StartDownloadBanner_d__35_o *v41; // x21
  int32_t v42; // w23
  int32_t v43; // w24
  int32_t format; // w25
  UnityEngine_Texture2D_o *v45; // x22
  System_Byte_array *data; // x0
  UnityEngine_Networking_UnityWebRequest_o *v47; // x0
  System_String_o *v48; // x0
  bool IsNullOrEmpty; // w0
  int v50; // w21
  Il2CppObject *Instance; // x21
  System_String_o *v52; // x0
  Il2CppObject *v53; // x23
  System_String_o *v54; // x19
  ErrorDialog_ClickDelegate_o *v55; // x22
  const MethodInfo *v56; // x1
  struct LinkConfirmDialog___c__DisplayClass35_0_o *v57; // x8
  System_Collections_IEnumerator_o *started; // x0
  struct LinkableTexture_o *lnkTexture; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  struct LinkConfirmDialog___c__DisplayClass35_0_o *_8__1; // x8
  struct System_String_o *linkTexture; // x1

  v3 = this;
  if ( (byte_4A00F4E & 1) == 0 )
  {
    sub_1B64870(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1B64870(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v4);
    sub_1B64870(&LinkConfirmDialog_TypeInfo, v5);
    sub_1B64870(&LocalizationManager_TypeInfo, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B64870(&UnityEngine_Texture2D_TypeInfo, v9);
    sub_1B64870(&Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__, v10);
    sub_1B64870(&LinkConfirmDialog___c__DisplayClass35_0_TypeInfo, v11);
    sub_1B64870(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v12);
    sub_1B64870(&StringLiteral_1/*""*/, v13);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)sub_1B64870(&StringLiteral_9195/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v14);
    byte_4A00F4E = 1;
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
      v41 = this;
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
      v42 = (int)this;
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
      v43 = (int)this;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                 v3->fields._texDl_5__2,
                                                                 0LL);
      if ( !this )
        goto LABEL_53;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v45 = (UnityEngine_Texture2D_o *)sub_1B64ABC(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_69024180(v45, v42, v43, format, 0, 0LL);
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields._texDl_5__2;
      if ( !this )
        goto LABEL_53;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_69240964(v45, data, 0LL);
    }
    else
    {
LABEL_26:
      v45 = 0LL;
      v41 = 0LL;
    }
    v47 = _4__this->fields.bannerWWW;
    if ( !v47 || !UnityEngine_Networking_UnityWebRequest__get_isDone(v47, 0LL) )
      goto LABEL_36;
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
    if ( !this )
      goto LABEL_53;
    v48 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v48, 0LL);
    if ( !v41 || !IsNullOrEmpty || !v41->fields.__2__current )
      goto LABEL_36;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)UnityEngine_Object__op_Equality(
                                                               (UnityEngine_Object_o *)v45,
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
            v45,
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
              linkTexture = _8__1->fields.linkTexture;
              lnkTexture->fields.linkUrl = linkTexture;
              lnkTexture->fields.linkType = 0;
              sub_1B64814(
                (ServantStatusBattleListViewItem_o *)&lnkTexture->fields.linkUrl,
                (int32_t)linkTexture,
                v61,
                v62);
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
      v50 = _4__this->fields.bannerRetryCount + 1;
      _4__this->fields.bannerRetryCount = v50;
      this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      if ( !LinkConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LinkConfirmDialog_TypeInfo);
        this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)LinkConfirmDialog_TypeInfo;
      }
      if ( v50 <= (__int64)this[2].fields._texDl_5__2->klass )
      {
        v57 = v3->fields.__8__1;
        if ( !v57 )
          goto LABEL_53;
        started = LinkConfirmDialog__StartDownloadBanner(_4__this, v57->fields.linkTexture, v2);
        UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
        goto LABEL_45;
      }
      _4__this->fields.bannerRetryCount = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9195/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
      v53 = (Il2CppObject *)v3->fields.__8__1;
      v54 = v52;
      v55 = (ErrorDialog_ClickDelegate_o *)sub_1B64ABC(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v55,
        v53,
        Method_LinkConfirmDialog___c__DisplayClass35_0__StartDownloadBanner_b__0__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v54, v55, 0, 0LL);
LABEL_45:
        _4__this->fields.refuseInit = 0;
        LinkConfirmDialog__DestroyBannerWWW(_4__this, v56);
        return 0;
      }
    }
LABEL_53:
    sub_1B64ACC(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v17 = (Il2CppObject *)sub_1B64ABC(LinkConfirmDialog___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v17, 0LL);
  v3->fields.__8__1 = (struct LinkConfirmDialog___c__DisplayClass35_0_o *)v17;
  p__8__1 = &v3->fields.__8__1;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v3->fields.__8__1, (int32_t)v17, v19, v20);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v23 = v3->fields.__4__this;
  *(_QWORD *)&this->fields.__1__state = v23;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v23, v21, v22);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)v3->fields.__8__1;
  if ( !this )
    goto LABEL_53;
  v26 = (Il2CppObject *)v3->fields.linkTexture;
  this->fields.__2__current = v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v26, v24, v25);
  if ( !*p__8__1 )
    goto LABEL_53;
  v27 = (*p__8__1)->fields.linkTexture;
  v28 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1B64ABC(UnityEngine_Networking_UnityWebRequest_TypeInfo);
  UnityEngine_Networking_UnityWebRequest___ctor(v28, v27, 0LL);
  if ( !_4__this )
    goto LABEL_53;
  _4__this->fields.bannerWWW = v28;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&_4__this->fields.bannerWWW, (int32_t)v28, v29, v30);
  v31 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1B64ABC(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
  UnityEngine_Networking_DownloadHandlerTexture___ctor(v31, 0, 0LL);
  v3->fields._texDl_5__2 = v31;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v3->fields._texDl_5__2, (int32_t)v31, v32, v33);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  if ( !this )
    goto LABEL_53;
  UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
    (UnityEngine_Networking_UnityWebRequest_o *)this,
    (UnityEngine_Networking_DownloadHandler_o *)v3->fields._texDl_5__2,
    0LL);
  this = (LinkConfirmDialog__StartDownloadBanner_d__35_o *)_4__this->fields.bannerWWW;
  v34 = 1;
  _4__this->fields.refuseInit = 1;
  if ( !this )
    goto LABEL_53;
  v35 = UnityEngine_Networking_UnityWebRequest__SendWebRequest((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v35;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B64814(p__2__current, (int32_t)v35, v37, v38);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v34;
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

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_LinkConfirmDialog__StartDownloadBanner_d__35_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
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
  if ( (byte_4A00F4D & 1) == 0 )
  {
    this = (LinkConfirmDialog___c__DisplayClass35_0_o *)sub_1B64870(
                                                          &Method_SingletonMonoBehaviour_ManagementManager__get_Instance__,
                                                          isDecide);
    byte_4A00F4D = 1;
  }
  if ( isDecide )
  {
    _4__this = (UnityEngine_MonoBehaviour_o *)v4->fields.__4__this;
    if ( _4__this )
    {
      started = LinkConfirmDialog__StartDownloadBanner(v4->fields.__4__this, v4->fields.linkTexture, method);
      UnityEngine_MonoBehaviour__StartCoroutine_69121188(_4__this, started, 0LL);
      return;
    }
LABEL_8:
    sub_1B64ACC(this, isDecide);
  }
  this = (LinkConfirmDialog___c__DisplayClass35_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !this )
    goto LABEL_8;
  ManagementManager__reboot((ManagementManager_o *)this, 0, 1, 0LL);
}