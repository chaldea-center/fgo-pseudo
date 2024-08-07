void __fastcall LinkableObject___ctor(LinkableObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LinkableObject__OnClick(LinkableObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t linkType; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_String_o *v9; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  System_String_o *linkUrl; // x19

  if ( (byte_4A01562 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Application_TypeInfo, method);
    sub_1B64A00(&Method_LinkableObject_OnClick__, v3);
    sub_1B64A00(&WebViewManager_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_1/*""*/, v5);
    byte_4A01562 = 1;
  }
  linkType = this->fields.linkType;
  if ( linkType == 2 )
  {
    v10 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B64A18(Method_LinkableObject_OnClick__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B649E4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    linkUrl = this->fields.linkUrl;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(linkUrl, 0LL);
  }
  else if ( linkType == 1 )
  {
    v7 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B64A18(Method_LinkableObject_OnClick__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v9 = this->fields.linkUrl;
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v9, 0LL, 0LL);
  }
}


void __fastcall LinkableObject__SetUp(
        LinkableObject_o *this,
        int32_t lnkType,
        System_String_o *lnkUrl,
        const MethodInfo *method)
{
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_linkUrl, (int32_t)lnkUrl, (int32_t)lnkUrl, (int32_t)method);
}